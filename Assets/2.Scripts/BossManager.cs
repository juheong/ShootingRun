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


    private void Awake()
    {
        rigid = GetComponent<Rigidbody>();
        boxCollider = GetComponent<BoxCollider>();
        meshs = GetComponentsInChildren<SkinnedMeshRenderer>();
        anim = GetComponent<Animator>();
        player = FindObjectOfType<Player>();
        halfHealth = 4;     //패턴 갯수를 위함
        InvokeRepeating("Attack", 1, 5f);
    }

    // Update is called once per frame
    void Update()
    {
        if (!isDie)
        {
          //  transform.position += Vector3.back * player.moveSpeed * Time.deltaTime;
            if (curHealth <= maxHealth / 2)     //hp가 절반 이하일시 패턴 추가
            {
                halfHealth = 5;
                anim.SetBool("onRage", true);
            }      
        }
        else if (isDie == true)
        {
            StartCoroutine(GameClear());
        }
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
                    StartCoroutine(Spell());
                    break;
                case 2:
                    StartCoroutine(Smash());
                    break;
                case 3:
                    StartCoroutine(Jump());
                    break;
                case 4:
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
        rigidBullet.velocity = transform.forward * 20;
        Destroy(instantBullet, 2f);
        yield return new WaitForSeconds(0.16f);

        Vector3 Bul_position2 = transform.position;
        Bul_position2 += new Vector3(1.5f, 1.7f, 0f);
        GameObject instantBullet2 = Instantiate(bullet[0], Bul_position2, transform.rotation);
        Rigidbody rigidBullet2 = instantBullet2.GetComponent<Rigidbody>();
        rigidBullet2.velocity = transform.forward * 20;
        Destroy(instantBullet2, 2f);
    }
    IEnumerator Spell()       //2번 Spell 패턴
    {
        Vector3 Indi_position = transform.position;
        GameObject skill_indicator = Instantiate(SkillsIndicator[1], Indi_position, transform.rotation);
        indirigi = skill_indicator.GetComponent<Rigidbody>();
        indirigi.velocity = transform.forward * player.moveSpeed;
        Destroy(skill_indicator, 1.5f);
        yield return new WaitForSeconds(1.5f);

        anim.SetTrigger("doSpell");
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
        rigidBullet.velocity = transform.forward * 20;
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

    IEnumerator OnDamge(Vector3 reactVec)
    {
        foreach (SkinnedMeshRenderer mesh in meshs)
            mesh.material.color = Color.red;
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
           // Destroy(gameObject, 1f);
            
        }
    }
    IEnumerator GameClear()
    {
        yield return new WaitForSeconds(2f);
        PanelController panelController = FindObjectOfType<PanelController>();
        panelController.OpenPanel(2);
        //SceneManager.LoadScene("MainMenu");
    }


}
