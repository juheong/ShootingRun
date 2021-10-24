using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class Player : MonoBehaviour
{
    [SerializeField]
    private GameObject[] weapons;
    [SerializeField]
    private bool[] hasWeapons;
    //hasWeapons[i] = true;로 보유무기 추가


    public int coin;
    public int score;
    public int kills;
    [SerializeField]
    public int health;
    [SerializeField]
    private int maxcoin;
    [SerializeField]
    public int maxhealth;

    private float moveXWidth = 1.5f;
    private float moveTimeX = 0.1f;
    private bool isXMove = false;
    private float originY = 0.1f;
    private float gravity = -9.81f;
    private float moveTimeY = 0.7f;
    private float moveTimeYdown = 0.7f;
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

    private DataManager data;
    GameObject obj1;

    GameObject nearObject;
    Weapon equipWeapon;
    CameraController cameraController;
    SkinnedMeshRenderer[] meshs;
    private AudioSource audioSource;     //오디오 플레이어

    private float fireDelay;
    private bool isFireReady;
    private bool isScene = true;

    public TextMeshProUGUI coin_text;
    public TextMeshProUGUI score_text;
    public TextMeshProUGUI kills_text;
    public GameObject hudEvadeText;
    int evade;      //회피 여부 확인을 위한 변수

    private void Awake()
    {
        score = 0;
        kills = 0;
        coin = 0;

        uiObject.SetActive(false);
        rigibody = GetComponent<Rigidbody>();
        playerAnimator = GetComponentInChildren<PlayerAnimator>();
        meshs = GetComponentsInChildren<SkinnedMeshRenderer>();
        obj1 = GameObject.Find("DataManager");
        data = obj1.GetComponent<DataManager>();
        EquipWeapon(data.getEquip());
        audioSource = this.gameObject.GetComponent<AudioSource>();

        //// hasWeapons 배열값들의 트루값을 검사해서 참이면 무기 활성화
        //for (int i = 0; i < hasWeapons.Length; i++)
        //{
        //    if (hasWeapons[i] == true)
        //    {
        //        equipWeapon = weapons[i].GetComponent<Weapon>();
        //        equipWeapon.gameObject.SetActive(true);
        //    }
        //}
        StartCoroutine(CameraWalk());
    }

    private void Update()
    {
        if (!isScene)
        {
            if (!isDie)
            {
                score_text.text = score.ToString();
                kills_text.text = kills.ToString();

                coin = (int)(score / 1000);
                coin_text.text = coin.ToString();

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

    public void EquipWeapon(string name)
    {
        switch (name)
        {
            case "M1911":
                obj1 = GameObject.Find("Weapon Point").transform.Find("M1911").gameObject;
                break;
            case "PBR":
                obj1 = GameObject.Find("Weapon Point").transform.Find("PBR").gameObject;
                break;
            case "AK74":
                obj1 = GameObject.Find("Weapon Point").transform.Find("AK74").gameObject;
                break;
            case "M4_8":
                obj1 = GameObject.Find("Weapon Point").transform.Find("M4_8").gameObject;
                break;
            case "M107":
                obj1 = GameObject.Find("Weapon Point").transform.Find("M107").gameObject;
                break;
            case "SVD":
                obj1 = GameObject.Find("Weapon Point").transform.Find("SVD").gameObject;
                break;
        }
        obj1.SetActive(true);
        equipWeapon = obj1.GetComponent<Weapon>();
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

        evade = 0;

        isJump = true;
        rigibody.useGravity = false;
        playerAnimator.OnJump();
        CheckEvade(15f);        //동작과 함께 회피 체크
        while (percent < 1)
        {
            current += Time.deltaTime;
            percent = current / moveTimeY;

            float y = originY + (v0 * percent) + (gravity * percent * percent);
            transform.position = new Vector3(transform.position.x, y, transform.position.z);

            yield return null;
        }
        if (evade == 1)     //판정 범위 내에 총알이 있다면 문구 출력
        {
            GameObject hudText = Instantiate(hudEvadeText);
            hudText.transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z+1.0f);
            hudText.GetComponent<FloatText>().write = "Evade!";
        }
        isJump = false;
        rigibody.useGravity = true;
    }

    private IEnumerator OnMoveToYdown()
    {
        evade = 0;
        isSlide = true;
        GetComponent<CapsuleCollider>().center = new Vector3(0, 0, 0);
        playerAnimator.OnSlide();
        CheckEvade(17f);       //동작과 함께 회피 체크
        yield return new WaitForSeconds(moveTimeYdown);
        isSlide = false;
        GetComponent<CapsuleCollider>().center = new Vector3(0, 1.1f, 0);
        if (evade == 1)     //판정 범위 내에 총알이 있다면 문구 출력
        {
            GameObject hudText = Instantiate(hudEvadeText);
            hudText.transform.position = new Vector3(transform.position.x, transform.position.y, transform.position.z + 1.0f);
            hudText.GetComponent<FloatText>().write = "Evade!";
        }
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
            StartCoroutine(OnDamage(20));
            this.audioSource.Play();

        }
        else if (other.tag == "Enemy")
        {
            StartCoroutine(OnDamage(20));
            this.audioSource.Play();


        }
        else if (other.tag == "EnemyBullet")
        {
            Bullet enemyBullet = other.GetComponent<Bullet>();
            Destroy(other.gameObject);
            StartCoroutine(OnDamage(enemyBullet.damage));
            this.audioSource.Play();

        }

    }

    void OnParticleCollision(GameObject other)      //스킬 피격판정
    {
        this.audioSource.Play();

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
            StartCoroutine(GameClear());
        }
    }

    IEnumerator OnDie()
    {
        isDie = true;
        cameraController.DieCamera();
        playerAnimator.DoDie();
        yield return new WaitForSeconds(2f);
    }
    IEnumerator GameClear()
    {
        yield return new WaitForSeconds(2f);
        Time.timeScale = 0;
        PanelController panelController = FindObjectOfType<PanelController>();
        //data.expUpdate(200);
        GameObject.Destroy(obj1);
        panelController.OpenPanel(2);
        gameController.InitialLevel();
        gameController.InitialExp();
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

    public void CheckEvade(float distance)        //회피 판정 함수
    {
        List<GameObject> FoundObjects;
        string TagName = "EnemyBullet";

        FoundObjects = new List<GameObject>(GameObject.FindGameObjectsWithTag(TagName));        //모든 적의 총알 오브젝트를 저장
        if (FoundObjects.Count == 0)
            return;


        foreach (GameObject found in FoundObjects)
        {

             if ((found.transform.position.x == transform.position.x) && ((found.transform.position.z - transform.position.z) >= 0f) && ((found.transform.position.z - transform.position.z) <= distance))       //동작 중 회피가 가능한 범위에 있는 총알이 있다면 회피로 인정
             {
                evade = 1;
             }
        }

    }
}



