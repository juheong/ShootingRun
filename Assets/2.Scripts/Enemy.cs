using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    public enum Type {Basic, Rush, Range,Burrow};
    public Type enemyType;
    [SerializeField]
    private int maxHealth;
    [SerializeField]
    private int curHealth;
    public GameObject bullet;
    private bool isDie = false;
    Rigidbody rigid;
    BoxCollider boxCollider;
    SkinnedMeshRenderer[] meshs;
    Animator anim;
    private float attackTime = 2f;

    private void Awake()
    {
        rigid = GetComponent<Rigidbody>();
        boxCollider = GetComponent<BoxCollider>();
        meshs = GetComponentsInChildren<SkinnedMeshRenderer>();
        anim = GetComponent<Animator>();
        switch (enemyType)      //타입에 따른 공격속도
        {
            default:
                break;
            case Type.Burrow:
                attackTime = 0.5f;
                break;
        }
        InvokeRepeating("Attack", 1, attackTime);
    }
 
    private void OnTriggerEnter(Collider other)
    {
        if(other.tag == "Bullet")
        {
            Bullet bullet = other.GetComponent<Bullet>();
            curHealth -= bullet.damage;
            float x = transform.position.x;
            Vector3 reactVec = transform.position - other.transform.position;
            Destroy(other.gameObject);
            StartCoroutine(OnDamage(reactVec));
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
                    anim.SetTrigger("onAttack");
                    rigid.AddForce(transform.forward * 30, ForceMode.Impulse);                    
                    break;
                case Type.Range:
                    anim.SetTrigger("onAttack");
                    Vector3 position = transform.position;
                    position += new Vector3(0, 1.7f, 0.2f);
                    GameObject instantBullet = Instantiate(bullet, position, transform.rotation);
                    Rigidbody rigidBullet = instantBullet.GetComponent<Rigidbody>();
                    rigidBullet.velocity = transform.forward * 20;
                    Destroy(instantBullet, 2f);
                    break;
                case Type.Burrow:
                    GameObject Player = GameObject.Find("Player");
                    if (Vector3.Distance(Player.transform.position, this.transform.position)<=20f)      //플레이어와 근접했을 때에만 공격
                         anim.SetTrigger("onAttack");
                    Invoke("Burrow", 1f);
                    
                    break;
            }
        }
    }

    private void Burrow()
    {
        gameObject.layer = 10;
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
            foreach (SkinnedMeshRenderer mesh in meshs)
                mesh.material.color = Color.gray;
            gameObject.layer = 11;
            anim.SetTrigger("doDie");
            isDie = true;
            
            // 몬스터 죽을 시 날라가는 효과
            //reactVec = reactVec.normalized;
            //reactVec += Vector3.up * 1.5f;
            //reactVec.z *= -1;
            //rigid.freezeRotation = false;
            //rigid.AddForce(reactVec * 10, ForceMode.Impulse);
            Destroy(gameObject, 1f);
        }
    }
}
