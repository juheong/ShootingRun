    using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using TMPro;

public class AreaSpawner : MonoBehaviour
{
    [SerializeField]
    private GameObject[] areaPrefabs;
    public Enemy[] enemies;
    public Enemy[] obstacles;
    public Enemy[] events;
    //public MiddleBoss middleboss;
    [SerializeField]
    private int spawnAreaCountAtStart = 3;
    [SerializeField]
    private float zDistance = 20;
    private int areaIndex = 0;
    [SerializeField]
    private bool isBoss = false;
    public GameObject SkillsIndicator;

    //public TextMeshProUGUI text;
    public PanelController panelController;

    [SerializeField]
    private Transform playerTransform;
    public int clear;
    public int stage;
    Rigidbody indirigi;
    Rigidbody torigi;
    GameObject Player;
    private int obsStart;
    private int obsEND;
    private int E_len;
    private int O_len;

    private void Awake()
    {
        stage = 1;
        clear = 0;

        obsStart = Random.Range(10, 25);     //장애물 스폰 시작점
        obsEND = Random.Range(obsStart + 3, 47);        //끝점
        E_len = enemies.Length;
        O_len = obstacles.Length;


        for (int i = 0; i < spawnAreaCountAtStart; ++i)
        {
            if (i == 0)
            {
                SpawnArea();
            }
            else
            {
                SpawnArea();
            }
        }
        Player = GameObject.FindWithTag("Player");
        InvokeRepeating("Spawn", 0, 2);
    }

    public void SpawnArea()
    {
        GameObject clone = null;
        int index = Random.Range(1, areaPrefabs.Length);

        clone = Instantiate(areaPrefabs[index]);
        clone.transform.position = new Vector3(0, 0, areaIndex * zDistance);
        clone.GetComponent<Area>().Setup(this, playerTransform, isBoss);
        areaIndex++;

        clear++; // 스테이지 클리어 조건
    }
    public void Spawn()
    {
        int isSpawn;

        if (clear >= 60)       //clear 변수가 일정수준 도달했을 경우 패널을 띄운 뒤 변수 초기화
        {
            Debug.Log("clear!");
            Time.timeScale = 0;
            panelController.OpenPanel(3);
            clear = 0;
            obsStart = Random.Range(10, 25);     //장애물 스폰 시작점
            obsEND = Random.Range(obsStart + 3, 47);        //끝점
        }

        else
        {
            if (clear >= obsStart && clear <= obsEND)
            {
                float X_coord = -1.5f;        //장애물 X좌표
                for (int i = 0; i < 3; i++)
                {
                    isSpawn = Random.Range(0, 10);       //스폰 할 것 인지 말 것인지 (70%)
                    if (isSpawn > 2)
                        SpawnObstacle(O_len, X_coord);
                    X_coord += 1.5f;
                }
            }
            else if (clear <= 55 && clear >= 8)
            {
                float X_coord = -1.5f;        //몬스터 X좌표

                for (int i = 0; i < 3; i++)
                {
                    isSpawn = Random.Range(0, 10);       //스폰 할 것 인지 말 것인지 (70%)
                    if (isSpawn > 2)
                        SpawnMonster(E_len, X_coord);
                    X_coord += 1.5f;
                }
            }


            if (clear < 55 && clear % 10 == 0)       // clear 조건에 따라 토네이도 이벤트 발생
            {
                int loc;

                loc = Random.Range(0, 3);       //토네이도 위치를 위한 랜덤변수
                if (loc == 0)       //좌측
                {
                    StartCoroutine(Tornado(-1f, 1f, playerTransform.position.z));
                }
                else if (loc == 1)        //중간
                {
                    StartCoroutine(Tornado(0f, 1f, playerTransform.position.z));
                }
                else           //우측
                {
                    StartCoroutine(Tornado(1f, 1f, playerTransform.position.z));
                }
            }
        }
    }

    public void SpawnMonster(int len, float X_coord)
    {
        int index;
        index = 0;

        index = Random.Range(0, len);      //각 몬스터 스폰 확률 (0=range, 1=burrow, 2=rush , 3=sneak)    
        Vector3 enem_transform = new Vector3(X_coord, enemies[index].transform.position.y, playerTransform.position.z + 40 + Random.Range(-5.0f, 20.0f));    //몬스터의 좌표값
        Instantiate(enemies[index], enem_transform, transform.rotation = Quaternion.Euler(new Vector3(0, 180, 0)));    //1st몬스터 생성, 마지막은 몬스터 회전      
    }

    public void SpawnObstacle(int len, float X_coord)
    {
        int index;
        index = 0;

        index = Random.Range(0, len);       //장애물 스폰 결정
        if (index == 1)
        {
            if (X_coord == 0) return;
            else if (X_coord == -1.5f) X_coord = -3f;
            else if (X_coord == 1.5f) X_coord = 3f;
        }
        
        Vector3 enem_transform = new Vector3(X_coord, obstacles[index].transform.position.y, playerTransform.position.z + 40 + Random.Range(-5.0f, 20.0f));    //장애물 좌표값

        Instantiate(obstacles[index], enem_transform, transform.rotation = Quaternion.Euler(new Vector3(0, 180, 0)));    //장애물터 생성
    }

    IEnumerator Tornado(float x, float y, float z)
    {
        z += 15f;
        Vector3 Indi_position = new Vector3(x, y, z+10f);
        GameObject skill_indicator = Instantiate(SkillsIndicator, Indi_position, transform.rotation);
        skill_indicator.transform.LookAt(Player.transform);

        Quaternion indirot = skill_indicator.transform.rotation * Quaternion.Euler(new Vector3(0,90,0));
        Destroy(skill_indicator, 1.5f);

        yield return new WaitForSeconds(1.5f);

        Vector3 enem_transform = new Vector3(x, y, z + 50f);    //이벤트 좌표값
        Enemy tornado = Instantiate(events[0], enem_transform, indirot);   //rotation
        Destroy(tornado, 4f);

    }
}
