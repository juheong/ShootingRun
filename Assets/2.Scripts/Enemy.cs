﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour
{
    public enum Type {Basic, Rush, Range ,Burrow, Sneak};
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
    GameObject Player;

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
                attackTime = 0.3f;
                break;
            case Type.Sneak:
                attackTime = 0.5f;
                break;
        }
        InvokeRepeating("Attack", 1, attackTime);
        Player = GameObject.FindWithTag("Player");
    }
    void Start()
    {
        Destroy(this.gameObject, 5f);
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
            if(gameObject.tag != "EnemyDead")
            {
                Bullet bullet = other.GetComponent<Bullet>();
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
                    break;
                case Type.Burrow:
                    if (Vector3.Distance(Player.transform.position, this.transform.position)<=15f)      //플레이어와 근접했을 때에만 공격
                         anim.SetTrigger("onAttack");                    
                    Invoke("Burrow", 0.5f);
                    break;
                case Type.Sneak:
                    if (Vector3.Distance(Player.transform.position, this.transform.position) <= 11f)     //플레이어와 근접했을 때에만 
                    {
                        anim.SetTrigger("onAttack");
                        StartCoroutine(Bee_Sting());
                    }
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
            foreach (SkinnedMeshRenderer mesh in meshs)
                mesh.material.color = Color.gray;
            LayerUpdate(gameObject.transform, "EnemyDead");
            gameObject.tag = "EnemyDead";
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

    public void LayerUpdate(Transform trans, string name)
    {
        trans.gameObject.layer = LayerMask.NameToLayer(name);
        foreach(Transform child in trans)
        {
            LayerUpdate(child, name);
        }
    }
}
