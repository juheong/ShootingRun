using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class BossManager : MonoBehaviour
{
    [SerializeField]
    private int maxHealth;
    [SerializeField]
    private int curHealth;
    private int halfHealth;
    [SerializeField]
    private GameObject[] SkillsIndicator;
    private bool isDie = false;
    private bool isScene = true;
    Rigidbody rigid;
    BoxCollider boxCollider;
    SkinnedMeshRenderer[] meshs;
    Animator anim;
    public GameObject[] bullet;
    public Image sliderBossHealth;

    [SerializeField]
    private GameController gameController;

    Player player;
    Rigidbody indirigi;
    DataManager data;
    GameObject obj1;

    private void Awake()
    {
        rigid = GetComponent<Rigidbody>();
        boxCollider = GetComponent<BoxCollider>();
        meshs = GetComponentsInChildren<SkinnedMeshRenderer>();
        anim = GetComponent<Animator>();
        player = FindObjectOfType<Player>();
        halfHealth = 5;     //패턴 갯수를 위함
        obj1 = GameObject.Find("DataManager");
        data = obj1.GetComponent<DataManager>();
        anim.SetBool("isScene", true);
        StartCoroutine(BossStart());
    }

    // Update is called once per frame
    void Update()
    {
        if (!isScene)
        {
            if (!isDie)
            {
                transform.position += Vector3.back * player.moveSpeed * Time.deltaTime;
                if (curHealth <= maxHealth / 2)     //hp가 절반 이하일시 패턴 추가
                {
                    halfHealth = 6;
                    anim.SetBool("onRage", true);
                }      
            }
            else if (isDie == true)
            {
                StartCoroutine(GameClear());
            }

        }
        
    }

    IEnumerator BossStart()
    {
        yield return new WaitForSeconds(8f);
        isScene = false;
        anim.SetBool("isScene", false);
        InvokeRepeating("Attack", 1, 5f);
    }
        private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Bullet")
        {
            Bullet bullet = other.GetComponent<Bullet>();
            curHealth -= bullet.damage;
            sliderBossHealth.fillAmount = (float)curHealth /(float)maxHealth;
            float x = transform.position.x;
            Vector3 reactVec = transform.position - other.transform.position;
            Destroy(other.gameObject);
            StartCoroutine(OnDamge(reactVec));
        }

    }

    public void Attack()
    {
        if (!isDie)
        {
            int index = Random.Range(0, halfHealth);
            switch (index)
            {
                case 0:
                    StartCoroutine(Slash());
                    break;
                case 1:
                    StartCoroutine(Bite());
                    break;
                case 2:
                    StartCoroutine(Smash());
                    break;
                case 3:
                    StartCoroutine(Jump());
                    break;
                case 4:
                    StartCoroutine(Spell());
                    break;
                case 5:
                    StartCoroutine(Pounce());
                    break;
            }
        }
    }

    IEnumerator Slash()        //1번 slash 패턴 돌던지기
    {
        Vector3 Indi_position = transform.position;
        GameObject skill_indicator = Instantiate(SkillsIndicator[0], Indi_position, transform.rotation);
        indirigi = skill_indicator.GetComponent<Rigidbody>();
        indirigi.velocity = transform.forward * player.moveSpeed;
        Destroy(skill_indicator, 1.5f);

        yield return new WaitForSeconds(1.5f);

        anim.SetTrigger("doSlash");
        Vector3 Bul_position = transform.position;
        Bul_position += new Vector3(-1.5f, 1.7f, 0f);
        GameObject instantBullet = Instantiate(bullet[0], Bul_position, transform.rotation);
        Rigidbody rigidBullet = instantBullet.GetComponent<Rigidbody>();
        rigidBullet.velocity = transform.forward * 30;
        Destroy(instantBullet, 2f);
        yield return new WaitForSeconds(0.16f);

        Vector3 Bul_position2 = transform.position;
        Bul_position2 += new Vector3(1.5f, 1.7f, 0f);
        GameObject instantBullet2 = Instantiate(bullet[0], Bul_position2, transform.rotation);
        Rigidbody rigidBullet2 = instantBullet2.GetComponent<Rigidbody>();
        rigidBullet2.velocity = transform.forward * 30;
        Destroy(instantBullet2, 2f);
    }
    IEnumerator Bite()       //2번 Spell 패턴
    {
        Vector3 Indi_position = transform.position;
        GameObject skill_indicator = Instantiate(SkillsIndicator[1], Indi_position, transform.rotation);
        indirigi = skill_indicator.GetComponent<Rigidbody>();
        indirigi.velocity = transform.forward * player.moveSpeed;
        Destroy(skill_indicator, 1.5f);
        yield return new WaitForSeconds(1.5f);

        anim.SetTrigger("doBite");
        yield return new WaitForSeconds(0.5f);

        Vector3 Bul_position = transform.position;
        Bul_position += new Vector3(0f, 1.5f, 0f);
        GameObject instantBullet = Instantiate(bullet[2], Bul_position, transform.rotation);
        Destroy(instantBullet, 2f);
    }
    IEnumerator Smash()     //3번 Smash 패턴
    {
        Vector3 Indi_position = transform.position;
        GameObject skill_indicator = Instantiate(SkillsIndicator[2], Indi_position, transform.rotation);
        indirigi = skill_indicator.GetComponent<Rigidbody>();
        indirigi.velocity = transform.forward * player.moveSpeed;
        Destroy(skill_indicator, 1.5f);
        yield return new WaitForSeconds(1.5f);

        anim.SetTrigger("doSmash");
        yield return new WaitForSeconds(0.5f);

        Vector3 Bul_position = transform.position;
        Bul_position += new Vector3(0f, 0f, -3f);
        GameObject instantBullet = Instantiate(bullet[1], Bul_position, transform.rotation);
        Rigidbody rigidBullet = instantBullet.GetComponent<Rigidbody>();
        rigidBullet.velocity = transform.forward * 30;
        Destroy(instantBullet, 2f);
    }
    IEnumerator Jump()       //4번 Jump 패턴
    {
        Vector3 Indi_position = transform.position;
        GameObject skill_indicator = Instantiate(SkillsIndicator[1], Indi_position, transform.rotation);
        indirigi = skill_indicator.GetComponent<Rigidbody>();
        indirigi.velocity = transform.forward * player.moveSpeed;
        Destroy(skill_indicator, 1.5f);
        yield return new WaitForSeconds(1.5f);

        anim.SetTrigger("doJump");
        yield return new WaitForSeconds(0.5f);

        Vector3 Bul_position = transform.position;
        Bul_position += new Vector3(0f, 0f, 0f);
        GameObject instantBullet = Instantiate(bullet[3], Bul_position, transform.rotation);
        Destroy(instantBullet, 2f);
    }
    IEnumerator Pounce()
    {
        Vector3 Indi_position = transform.position;
        GameObject skill_indicator = Instantiate(SkillsIndicator[2], Indi_position, transform.rotation);
        indirigi = skill_indicator.GetComponent<Rigidbody>();
        indirigi.velocity = transform.forward * player.moveSpeed;
        Destroy(skill_indicator, 1.5f);
        yield return new WaitForSeconds(1.5f);

        anim.SetTrigger("doPounce");
        Vector3 Indi_position2 = transform.position;
        GameObject skill_indicator2 = Instantiate(SkillsIndicator[0], Indi_position2, transform.rotation);
        indirigi = skill_indicator2.GetComponent<Rigidbody>();
        indirigi.velocity = transform.forward * player.moveSpeed;
        Destroy(skill_indicator2, 0.5f);
        yield return new WaitForSeconds(0.5f);

        Vector3 Bul_position = transform.position;
        Bul_position += new Vector3(0f, 0f, 0f);
        GameObject instantBullet = Instantiate(bullet[4], Bul_position, transform.rotation);
        Destroy(instantBullet, 2f);
    }
    IEnumerator Spell()
    {
        int loc;
        loc = Random.Range(0, 3);
        float tor1, tor2,rage;       //위치 좌표
        Vector3 rot1, rot2;     //회전
        Vector3 Indi_position = transform.position;
        Vector3 Bul_position = transform.position;
        Vector3 Bul_position2 = transform.position;

        GameObject skill_indicator;
        if (halfHealth == 6)    //분노상태일 시 측면의 토네이도가 반대방향으로 이동
            rage = 7f;
        else
            rage = 0f;
        if (loc == 0)       //좌+중
        {
            tor1 = -1.5f;
            tor2 = 0f;
            rot1 = new Vector3(0, 90-rage, 0);       //토네이도 회전값
            rot2 = new Vector3(0, 90, 0);
            skill_indicator = Instantiate(SkillsIndicator[3], Indi_position, transform.rotation);
        }
        else if (loc == 1)  //우+중
        {
            tor1 = 0f;
            tor2 = 1.5f;
            rot1 = new Vector3(0, 90, 0);
            rot2 = new Vector3(0, 90+rage, 0);
            skill_indicator = Instantiate(SkillsIndicator[4], Indi_position, transform.rotation);
        }
        else        //좌+우
        {
            tor1 = -1.5f;
            tor2 = 1.5f;
            rot1 = new Vector3(0, 90 - rage, 0);
            rot2 = new Vector3(0, 90 + rage, 0);
            skill_indicator = Instantiate(SkillsIndicator[0], Indi_position, transform.rotation);
        }
        Bul_position += new Vector3(tor1, 0, -15f);    //토네이도 좌표값
        Bul_position2 += new Vector3(tor2, 0, -15f);    //두번째 토네이도 좌표값
        indirigi = skill_indicator.GetComponent<Rigidbody>();
        indirigi.velocity = transform.forward * player.moveSpeed;
        Destroy(skill_indicator, 1.5f);
        yield return new WaitForSeconds(1.5f);

        anim.SetTrigger("doSpell");
        yield return new WaitForSeconds(0.2f);
        Instantiate(bullet[5], Bul_position,  Quaternion.Euler(rot1));   //토네이도1 생성
        Instantiate(bullet[5], Bul_position2, Quaternion.Euler(rot2));   //토네이도2 생성

    }
    IEnumerator OnDamge(Vector3 reactVec)
    {
        foreach (SkinnedMeshRenderer mesh in meshs)
            mesh.material.color = Color.red;
        anim.SetTrigger("TakeDamage");
        yield return new WaitForSeconds(0.1f);
        if (curHealth > 0)
        {
            foreach (SkinnedMeshRenderer mesh in meshs)
                mesh.material.color = Color.white;
        }
        else
        {
            foreach (SkinnedMeshRenderer mesh in meshs)
                mesh.material.color = Color.gray;
            anim.SetTrigger("doDie");
            isDie = true;
            gameObject.layer = 11;
            Destroy(gameObject, 3f);
            
        }
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


}
