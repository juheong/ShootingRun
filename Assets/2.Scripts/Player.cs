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


    public int coin;
    [SerializeField]
    private int health;
    [SerializeField]
    private int maxcoin;
    [SerializeField]
    private int maxhealth;

    private float moveXWidth = 1.5f;
    private float moveTimeX = 0.1f;
    private bool isXMove = false;
    private float originY = 0.1f;
    private float gravity = -9.81f;
    private float moveTimeY = 0.7f;
    private float moveTimeYdown = 1f;
    private bool isJump = false;
    private bool isSlide = false;
    public float moveSpeed = 20.0f;
    private bool isDie = false;
    private bool rot = false;
    private bool rot2 = false;
    [SerializeField]
    private bool isBoss = false;

    private Rigidbody rigibody;
    private PlayerAnimator playerAnimator;
    [SerializeField]
    private GameController gameController;
    [SerializeField]
    private GameObject sceneCamera;
    [SerializeField]
    private GameObject mainCamera;
    [SerializeField]
    private GameObject uiObject;
    GameObject nearObject;
    Weapon equipWeapon;
    CameraController cameraController;
    SkinnedMeshRenderer[] meshs;
    private float fireDelay;
    private bool isFireReady;
    private bool isScene = true;

    public int score;

    private void Awake()
    {
        score = 0;
        uiObject.SetActive(false);
        rigibody = GetComponent<Rigidbody>();
        playerAnimator = GetComponentInChildren<PlayerAnimator>();
        meshs = GetComponentsInChildren<SkinnedMeshRenderer>();
        // hasWeapons 배열값들의 트루값을 검사해서 참이면 무기 활성화
        for (int i = 0; i < hasWeapons.Length; i++)
        {
            if (hasWeapons[i] == true)
            {
                equipWeapon = weapons[i].GetComponent<Weapon>();
                equipWeapon.gameObject.SetActive(true);
            }
        }
        StartCoroutine(CameraWalk());
    }

    private void Update()
    {
        if (!isScene)
        { 
            if (!isDie)
            {
                score++;
                if (isBoss == true)
                {
                    transform.position += Vector3.back * moveSpeed * Time.deltaTime;
                    playerAnimator.isBoss();
                }
                else
                {
                    transform.position += Vector3.forward * moveSpeed * Time.deltaTime;
                    Attack();

                }
            }
        }
    }

    private void FixedUpdate()
    {
        if (rot == true)
        {
            rotat();
        }
        else if (rot2 == true)
        {
            rotat2();
        }
    }

    IEnumerator CameraWalk()
    {
        if (isBoss == true)
        {
            yield return new WaitForSeconds(8f);
            sceneCamera.SetActive(false);
            mainCamera.SetActive(true);
            uiObject.SetActive(true);
            cameraController = GameObject.Find("Main Camera").GetComponent<CameraController>();
            isScene = false;
        }
        else
        {
            yield return new WaitForSeconds(3.2f);
            playerAnimator.OnScene();
            yield return new WaitForSeconds(2.5f);
            sceneCamera.SetActive(false);
            mainCamera.SetActive(true);
            uiObject.SetActive(true);
            cameraController = GameObject.Find("Main Camera").GetComponent<CameraController>();
            isScene = false;
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
        if (isSlide == true && !isJump) return;
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
        while (percent < 1)
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
        GetComponent<CapsuleCollider>().center = new Vector3(0, 0, 0);
        playerAnimator.OnSlide();
        yield return new WaitForSeconds(moveTimeYdown);
        isSlide = false;
        GetComponent<CapsuleCollider>().center = new Vector3(0, 1.1f, 0);
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
        else if (other.tag == "Enemy")
        {
            StartCoroutine(OnDamage(20));

        }
        else if (other.tag == "EnemyBullet")
        {
            Bullet enemyBullet = other.GetComponent<Bullet>();
            Destroy(other.gameObject);
            StartCoroutine(OnDamage(enemyBullet.damage));
        }

    }

    void OnParticleCollision(GameObject other)      //스킬 피격판정
    {
        if (other.tag == "EnemyBullet")
        {
            Bullet enemyBullet = other.GetComponent<Bullet>();
            StartCoroutine(OnDamage(enemyBullet.damage));
            Destroy(other.gameObject);
        }
        else if (other.tag == "Enemy")
        {
            StartCoroutine(OnDamage(20));
        }
    }

    IEnumerator OnDamage(int damage)
    {
        health -= damage;
        gameController.DecreaseHealthCount(damage);
        foreach (SkinnedMeshRenderer mesh in meshs)
            mesh.material.color = Color.red;
        yield return new WaitForSeconds(0.1f);
        foreach (SkinnedMeshRenderer mesh in meshs)
            mesh.material.color = Color.white;
        if (health <= 0)
        {
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
            if (equipWeapon.type2 == Weapon.Type2.Pistol)
            {
                playerAnimator.PistolShoot();
            }
            else
            {
                playerAnimator.RifleShoot();
            }

            fireDelay = 0;
        }
    }

    public void BossAttack()
    {
        if (equipWeapon == null) return;

        if (!isSlide && !isJump && isBoss)
        {
            playerAnimator.OnBossA();
            rot2 = false;
            rot = true;
            equipWeapon.Use(true);
            Invoke("rotatback", 1f);
        }
    }

    private void rotat()
    {
        transform.rotation = Quaternion.Slerp(transform.rotation, Quaternion.Euler(0, 360, 0), 20f * Time.deltaTime);
    }

    private void rotat2()
    {
        transform.rotation = Quaternion.Slerp(transform.rotation, Quaternion.Euler(0, 180, 0), 20f * Time.deltaTime);
    }


    private void rotatback()
    {
        rot = false;
        rot2 = true;
    }
}



