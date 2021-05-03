using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BossManager : MonoBehaviour
{
    [SerializeField]
    private int maxHelath;
    [SerializeField]
    private int curHelath;
    private int halfHealth;
    [SerializeField]
    private GameObject[] SkillsIndicator;
    private bool isDie = false;
    Rigidbody rigid;
    BoxCollider boxCollider;
    SkinnedMeshRenderer[] meshs;
    Animator anim;
    public GameObject bullet;
    Player player;

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
            transform.position += Vector3.back * player.moveSpeed* Time.deltaTime;
            if (curHelath <= maxHelath / 2)     //hp가 절반 이하일시 패턴 추가
            {
                halfHealth = 5;
                anim.SetBool("onRage", true);
            }
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.tag == "Bullet")
        {
            Bullet bullet = other.GetComponent<Bullet>();
            curHelath -= bullet.damage;
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
                    StartCoroutine(shotBullet());
                    break;
                case 1:
                    anim.SetTrigger("doSpell");
                    break;
                case 2:
                    anim.SetTrigger("doSmash");
                    break;
                case 3:
                    anim.SetTrigger("doJump");
                    break;
                case 4:
                    anim.SetTrigger("doPounce");
                    break;
            }
        }
    }

    IEnumerator shotBullet()        //slash 패턴 돌던지기
    {
        Vector3 Indi_position = transform.position;
        GameObject skill_indicator = Instantiate(SkillsIndicator[0], Indi_position, transform.rotation);
        Destroy(skill_indicator, 1.5f);
        yield return new WaitForSeconds(1.5f);

        anim.SetTrigger("doSlash");
        Vector3 Bul_position = transform.position;
        Bul_position += new Vector3(-1.5f, 1.7f, 0.2f);
        GameObject instantBullet = Instantiate(bullet, Bul_position, transform.rotation);
        Rigidbody rigidBullet = instantBullet.GetComponent<Rigidbody>();
        rigidBullet.velocity = transform.forward * 20;
        Destroy(instantBullet, 2f);
        yield return new WaitForSeconds(0.16f);

        Vector3 Bul_position2 = transform.position;
        Bul_position2 += new Vector3(1.5f, 1.7f, 0.2f);
        GameObject instantBullet2 = Instantiate(bullet, Bul_position2, transform.rotation);
        Rigidbody rigidBullet2 = instantBullet2.GetComponent<Rigidbody>();
        rigidBullet2.velocity = transform.forward * 20;
        Destroy(instantBullet2, 2f);
    }

    IEnumerator OnDamge(Vector3 reactVec)
    {
        foreach (SkinnedMeshRenderer mesh in meshs)
            mesh.material.color = Color.red;
        yield return new WaitForSeconds(0.1f);
        if (curHelath > 0)
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
            Destroy(gameObject, 1f);
        }
    }
}

