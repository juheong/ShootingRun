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
        }
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
        SceneManager.LoadScene("MainMenu");
    }

}
