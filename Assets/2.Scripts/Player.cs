using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    [SerializeField]
    private GameObject[] weapons;
    [SerializeField]
    private bool[] hasWeapons;
    //hasWeapons[i] = true;로 보유무기 추가

    [SerializeField]
    private int coin;
    [SerializeField]
    private int helath;
    [SerializeField]
    private int maxcoin;
    [SerializeField]
    private int maxhelath;

    private float moveXWidth = 1.5f;
    private float moveTimeX = 0.1f;
    private bool isXMove = false;
    private float originY = 0.1f;
    private float gravity = -9.81f;
    private float moveTimeY = 0.7f;
    private float moveTimeYdown = 1f;
    private bool isJump = false;
    private bool isSlide = false;
    [SerializeField]
    private float moveSpeed = 20.0f;
    private float limitY = -1.0f;
    private bool isDie = false;
   
    private Rigidbody rigibody;
    private PlayerAnimator playerAnimator;
    [SerializeField]
    private GameController gameController;

    GameObject nearObject;
    Weapon equipWeapon;
    CameraController cameraController;
    private float fireDelay;
    private bool isFireReady;


  
    private void Awake()
    {
        rigibody = GetComponent<Rigidbody>();
        playerAnimator = GetComponentInChildren<PlayerAnimator>();
        // hasWeapons 배열값들의 트루값을 검사해서 참이면 무기 활성화
        for(int i = 0; i < hasWeapons.Length; i++)
        {
            if (hasWeapons[i] == true)
            {
                equipWeapon = weapons[i].GetComponent<Weapon>();
            }
        }             
        cameraController = GameObject.Find("Main Camera").GetComponent<CameraController>();
        equipWeapon.gameObject.SetActive(true);
    }

    private void Update()
    {
        if (!isDie)
        {        
            transform.position += Vector3.forward * moveSpeed * Time.deltaTime;
            playerAnimator.OnMovement(1);
            if (transform.position.y < limitY)
            {
                Debug.Log("게임 오버");
            }
            Attack();
        }
    }
    
    public void MoveToX(int x)
    {
        if (isXMove == true) return;

        if (!isJump && !isSlide && x > 0 && transform.position.x < moveXWidth)
        {
            StartCoroutine(OnMoveToX(x));
        }
        else if (!isJump && !isSlide && x < 0 && transform.position.x > -moveXWidth)
        {
            StartCoroutine(OnMoveToX(x));
        }
    }

    public void MoveToYup()
    {
        if (isJump == true && !isSlide) return;
        StartCoroutine(OnMoveToYup());
    }

    public void MoveToYdown()
    {
        if (isSlide == true && !isJump ) return;
        StartCoroutine(OnMoveToYdown());
    } 

    private IEnumerator OnMoveToX(int direction)
    {
        float current = 0;
        float percent = 0;
        float start = transform.position.x;
        float end = transform.position.x + direction * moveXWidth;

     
        isXMove = true;
        while (percent < 1)
        {
            current += Time.deltaTime;
            percent = current / moveTimeX;
            float x = Mathf.Lerp(start, end, percent);
            transform.position = new Vector3(x, transform.position.y, transform.position.z);
            yield return null;
        }
        isXMove = false;        

    }

    private IEnumerator OnMoveToYup()
    {
        float current = 0;
        float percent = 0;
        float v0 = -gravity;

        isJump = true;
        rigibody.useGravity = false;
        playerAnimator.OnJump();
        while ( percent < 1)
        {
            current += Time.deltaTime;
            percent = current / moveTimeY;

            float y = originY + (v0 * percent) + (gravity * percent * percent);
            transform.position = new Vector3(transform.position.x, y, transform.position.z);

            yield return null;
        }
        isJump = false;
        rigibody.useGravity = true;
    }

    private IEnumerator OnMoveToYdown()
    {
        isSlide = true;
        playerAnimator.OnSlide();
        this.gameObject.layer = 8;
        yield return new WaitForSeconds(moveTimeYdown);
        isSlide = false;
        this.gameObject.layer = 0;
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Weapon")
        {
            nearObject = other.gameObject;
            Item item = nearObject.GetComponent<Item>();
            int weaponIndex = item.value;
            hasWeapons[weaponIndex] = true;
            equipWeapon = weapons[weaponIndex].GetComponent<Weapon>();
            equipWeapon.gameObject.SetActive(true);
            Destroy(nearObject);
        }
        else if (other.tag == "Item")
        {
            Item item = other.GetComponent<Item>();
            switch (item.type)
            {
                
                case Item.Type.Coin:
                    coin += item.value;
                    if (coin > maxcoin)
                        coin = maxcoin;
                    gameController.IncreaseCoinCount();

                    break;
            }
        }
        else if (other.tag == "Obstacle")
        {
            StartCoroutine(OnDie());
        }
        else if(other.tag == "Enemy")
        {
            StartCoroutine(OnDie());
       
        }
        else if (other.tag == "EnemyBullet")
        {
            Bullet enemyBullet = other.GetComponent<Bullet>();
            Destroy(other.gameObject);
            StartCoroutine(OnDie());

        }

    }

    IEnumerator OnDie()
    {
        isDie = true;
        cameraController.DieCamera();
        playerAnimator.DoDie();
        yield return new WaitForSeconds(2f);
        gameController.GameOver();
    }

    public void Attack()
    {
        if (equipWeapon == null) return;
        fireDelay += Time.deltaTime;
        isFireReady = equipWeapon.rate < fireDelay;
        if (isFireReady && !isSlide && !isJump)
        {        
            equipWeapon.Use();
            playerAnimator.OnShoot();
            fireDelay = 0;
        }
    }
}


