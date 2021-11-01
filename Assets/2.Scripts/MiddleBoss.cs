using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;


public class MiddleBoss : MonoBehaviour
{
    [SerializeField]
    private int maxHealth;
    [SerializeField]
    private int curHealth;
    [SerializeField]
    private GameObject[] SkillsIndicator;
    private bool isDie = false;
    Rigidbody rigid;
    BoxCollider boxCollider;
    SkinnedMeshRenderer[] meshs;
    Animator anim;
    public GameObject[] bullet;
    public Image sliderBossHealth;

    GameController gameController;
    Player player;
    Rigidbody indirigi;
    GameObject obj1;
    DataManager data;


    private void Awake()
    {
        rigid = GetComponent<Rigidbody>();
        boxCollider = GetComponent<BoxCollider>();
        meshs = GetComponentsInChildren<SkinnedMeshRenderer>();
        anim = GetComponent<Animator>();
        gameController = FindObjectOfType<GameController>();
        player = FindObjectOfType<Player>();
        obj1 = GameObject.Find("DataManager");
        data = obj1.GetComponent<DataManager>();
        player.moveSpeed = 0;
        InvokeRepeating("Attack", 1, 5f);
    }

    // Update is called once per frame
    void Update()
    {
        if (!isDie)
        {
            transform.position -= Vector3.back * player.moveSpeed * Time.deltaTime;
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
            float x = transform.position.x;
            Vector3 reactVec = transform.position - other.transform.position;
            Destroy(other.gameObject);
            StartCoroutine(OnDamge(reactVec));
            if (isDie == true)
                GameClear();
        }

    }

    public void Attack()
    {
        if (!isDie)
        {
            int index = Random.Range(0, bullet.Length);
            switch (index)
            {
                case 0:
                    StartCoroutine(Spell());
                    break;
                case 1:
                    StartCoroutine(Jump());
                    break;
            }
        }
    }
    IEnumerator Spell()       //2번 Spell 패턴
    {
        Vector3 Indi_position = transform.position;
        GameObject skill_indicator = Instantiate(SkillsIndicator[0], Indi_position, transform.rotation);
        indirigi = skill_indicator.GetComponent<Rigidbody>();
        indirigi.velocity = transform.forward * player.moveSpeed;
        Destroy(skill_indicator, 1.5f);
        yield return new WaitForSeconds(1.5f);

        anim.SetTrigger("doSpell");
        yield return new WaitForSeconds(0.5f);

        Vector3 Bul_position = transform.position;
        Bul_position += new Vector3(0f, 1.5f, 0f);
        GameObject instantBullet = Instantiate(bullet[0], Bul_position, transform.rotation);
        Destroy(instantBullet, 2f);
    }
    IEnumerator Jump()       //4번 Jump 패턴
    {
        Vector3 Indi_position = transform.position;
        GameObject skill_indicator = Instantiate(SkillsIndicator[0], Indi_position, transform.rotation);
        indirigi = skill_indicator.GetComponent<Rigidbody>();
        indirigi.velocity = transform.forward * player.moveSpeed;
        Destroy(skill_indicator, 1.5f);
        yield return new WaitForSeconds(1.5f);

        anim.SetTrigger("doJump");
        yield return new WaitForSeconds(0.5f);

        Vector3 Bul_position = transform.position;
        Bul_position += new Vector3(0f, 0f, 0f);
        GameObject instantBullet = Instantiate(bullet[1], Bul_position, transform.rotation);
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
            //Destroy(gameObject, 1.5f);
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

        //SceneManager.LoadScene("MainMenu");

    }

}
