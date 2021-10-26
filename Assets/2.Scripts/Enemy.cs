using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    public enum Type {Basic, Rush, Range ,Burrow, Sneak, Stone};
    public Type enemyType;
    private AudioSource audioSource;        //피격 효과음
    private AudioSource AttackSource;       //공격 효과음

    [SerializeField]
    private int maxHealth;
    private int curHealth;
    [SerializeField]
    private int coin;
    public GameObject hudDamageText;
    public GameObject bullet;
    private bool isDie = false;
    Rigidbody rigid;
    BoxCollider boxCollider;
    SkinnedMeshRenderer[] meshs;
    Animator anim;
    private float attackTime = 2f;
    GameObject Player;
    Player playerData;
    AreaSpawner areaSpawner;


    int attacked = 1;
    private void Awake()
    {
        rigid = GetComponent<Rigidbody>();
        boxCollider = GetComponent<BoxCollider>();
        meshs = GetComponentsInChildren<SkinnedMeshRenderer>();
        anim = GetComponent<Animator>();
        audioSource = this.gameObject.GetComponent<AudioSource>();
        areaSpawner = GameObject.Find("AreaSpawner").GetComponent<AreaSpawner>();
        int stage = areaSpawner.stage -1;

        if (this.enemyType != 0)
        {
            AttackSource = this.transform.Find("AttackClip").gameObject.GetComponent<AudioSource>();
        }

        Player = GameObject.FindWithTag("Player");
        playerData = Player.gameObject.GetComponent<Player>();
        switch (enemyType)      //타입에 따른 초기화
        {
            default:
                break;
            case Type.Burrow:
                maxHealth = (int)(30 *(1+(stage*0.2)));
                attackTime = 0.3f;                
                break;
            case Type.Sneak:
                maxHealth = (int)(30 * (1 + (stage * 0.2)));
                attackTime = 0.5f;
                break;
            case Type.Rush:
                maxHealth = (int)(50 * (1 + (stage * 0.2)));
                attackTime = 0.3f;
                break;
            case Type.Range:
                attackTime = 0.3f;
                maxHealth = (int)(30 * (1 + (stage * 0.2)));
                break;                     
        }
        curHealth = maxHealth;
        InvokeRepeating("Attack", 1, attackTime);

    }
    void Start()
    {
        switch (enemyType)
        {
            default:
                break;
            case Type.Stone:
                rigid.AddForce(transform.forward * 20, ForceMode.Impulse);
                break;
        }
        Destroy(this.gameObject, 4f);
    }
    private void Update()
    {
        switch (enemyType)
        {
            default:
                break;
            case Type.Sneak:
                this.transform.LookAt(Player.transform);
                break;
        }
    }
    private void OnTriggerEnter(Collider other)
    {
        if(other.tag == "Bullet")
        {
            this.audioSource.Play();

            Bullet bullet = other.GetComponent<Bullet>();
            GameObject hudText = Instantiate(hudDamageText);
            hudText.transform.position = transform.position;
            hudText.GetComponent<FloatText>().write = bullet.damage.ToString();
            if (gameObject.tag != "EnemyDead")
            {
                curHealth -= bullet.damage;
                float x = transform.position.x;
                Vector3 reactVec = transform.position - other.transform.position;
                Destroy(other.gameObject);
                StartCoroutine(OnDamage(reactVec));
            }          
        }       
    }

    public void Attack()
    {
        if (!isDie)
        {
            switch (enemyType)
            {
                case Type.Basic:
                    break;
                case Type.Rush:
                    if (attacked == 1)
                    {
                        anim.SetTrigger("onAttack");
                        this.AttackSource.Play();
                        rigid.AddForce(transform.forward * 30, ForceMode.Impulse);
                        attacked = 0;
                    }
                    break;
                case Type.Range:
                    if (attacked == 1)
                    {
                        anim.SetTrigger("onAttack");
                        this.AttackSource.Play();
                        Vector3 position = transform.position;
                        position += new Vector3(0f, 1.7f, 0.1f);
                        GameObject instantBullet = Instantiate(bullet, position, transform.rotation);
                        Rigidbody rigidBullet = instantBullet.GetComponent<Rigidbody>();
                        rigidBullet.velocity = transform.forward * 20;
                        attacked = 0;
                    }
                        break;
                case Type.Burrow:
                    if (Vector3.Distance(Player.transform.position, this.transform.position) <= 20f && attacked==1)      //플레이어와 근접했을 때에만 공격
                    {
                        anim.SetTrigger("onAttack");
                        this.AttackSource.Play();
                        Burrow();
                        attacked = 0;
                    }
                    break;
                case Type.Sneak:
                    if (Vector3.Distance(Player.transform.position, this.transform.position) <= 11f)     //플레이어와 근접했을 때에만 
                    {
                        anim.SetTrigger("onAttack");
                        this.AttackSource.Play();
                        StartCoroutine(Bee_Sting());
                    }
                    break;
                case Type.Stone:
                    //rigid.AddForce(transform.forward * 30, ForceMode.Impulse);
                    break;
            }
        }
    }

    private void Burrow()
    {        
        gameObject.layer = 10;
    }
    IEnumerator Bee_Sting()     // 벌 공격
    {
        gameObject.layer = 17;
        for (int i=0;i<3;i++)        //플레이어에게 이동
        {
            transform.position = Vector3.Slerp(transform.position, Player.transform.position, 0.092f);
        }
        isDie = true;
        yield return new WaitForSeconds(0.5f);

        foreach (SkinnedMeshRenderer mesh in meshs)
            mesh.material.color = Color.gray;
        LayerUpdate(gameObject.transform, "EnemyDead");     //공격 후 사망
        gameObject.tag = "EnemyDead";
        anim.SetTrigger("doDie");
        Destroy(gameObject, 0.5f);
    }
    IEnumerator OnDamage(Vector3 reactVec)
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
            gameObject.GetComponent<BoxCollider>().enabled = false;     //충돌판정 off

            foreach (SkinnedMeshRenderer mesh in meshs)
                mesh.material.color = Color.gray;
            LayerUpdate(gameObject.transform, "EnemyDead");
            gameObject.tag = "EnemyDead";
            anim.SetTrigger("doDie");

            // 몬스터 죽을 시 날라가는 효과
            //reactVec = reactVec.normalized;
            //reactVec += Vector3.up * 1.5f;
            //reactVec.z *= -1;
            //rigid.freezeRotation = false;
            //rigid.AddForce(reactVec * 10, ForceMode.Impulse);
            Destroy(gameObject, 1f);
            if (!isDie)     //score가 비정상적으로 오르는 버그 방지
            {
                playerData.score += 150;
                ++playerData.kills;
            }
            isDie = true;

        }
    }

    public void LayerUpdate(Transform trans, string name)
    {
        trans.gameObject.layer = LayerMask.NameToLayer(name);
        foreach(Transform child in trans)
        {
            LayerUpdate(child, name);
        }
    }
}
