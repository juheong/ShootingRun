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
    private int whichSpawn;
    public int stage;
    Rigidbody indirigi;
    Rigidbody torigi;
    GameObject Player;


    private void Awake()
    {
        stage = 1;
        clear = 0;
        //whichSpawn = Random.Range(0, 2);     //몬스터 or 장애물 스테이지 랜덤으로 선택
        whichSpawn = 0;     //몬스터 생성 알고리즘 테스트용도

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
        //MiddleBoss middle;

        int isSpawn, len;
        len = enemies.Length;

        if (clear >= 50)       //clear 변수가 일정수준 도달했을 경우 패널을 띄운 뒤 변수 초기화
        {
            Debug.Log("clear!");
            Time.timeScale = 0;
            panelController.OpenPanel(3);
            clear = 0;
            whichSpawn = Random.Range(0, 2); //다음 스테이지 몬스터 or 장애물 스테이지 랜덤으로 선택
        }
        if (clear >=10&&clear<=45)
        {
            float X_coord = -1.5f;        //몬스터 X좌표

            for (int i=0;i<3;i++)
            {
                isSpawn = Random.Range(0, 10);       //스폰 할 것 인지 말 것인지 (70%)
                if (isSpawn > 2)
                    SpawnMonster(len, X_coord);
                X_coord += 1.5f;
            }

        }
        if (clear <45 && clear %10==0)       // clear 조건에 따라 토네이도 이벤트 발생
        {
            int loc;

            loc = Random.Range(0, 3);       //토네이도 위치를 위한 랜덤변수
            if (loc == 0)       //좌측
            {
                StartCoroutine(Tornado(-1f, 0f, playerTransform.position.z, 84f));
            }
            else if (loc == 1)        //중간
            {
                StartCoroutine(Tornado(0f, 0f, playerTransform.position.z, 90f));
            }
            else           //우측
            {
                StartCoroutine(Tornado(1f, 0f, playerTransform.position.z, 96f));
            } 
        }
        //if (clear < 23 && clear % 5 == 0)       
        //{
        //    int loc;

        //    loc = Random.Range(0, 3);
        //    if (loc == 0)       //좌측
        //    {
        //        Vector3 enem_transform = new Vector3(-1.5f, 0, playerTransform.position.z + 30);    //이벤트 좌표값
        //        Instantiate(events[1], enem_transform, transform.rotation));   //rotation
        //    }

        //}



        /* else if (clear == 23)              //일정 타일 생성 후 중간보스 스폰
         {
             Vector3 enem_transform = new Vector3(0, 0, playerTransform.position.z + 15);
             middle = Instantiate(middleboss, enem_transform, transform.rotation = Quaternion.Euler(new Vector3(0, 180, 0)));
             clear++;
         }*/
    }

    public void SpawnMonster(int len, float X_coord)
    {
        int index,y;
        index = 0;
        y = 0;

        index = Random.Range(0, len);       //각 몬스터 스폰 확률 (0=range, 1=burrow, 2=rush , 3=sneak)
 
        Vector3 enem_transform = new Vector3(X_coord, enemies[index].transform.position.y, playerTransform.position.z + 40 + Random.Range(-5.0f, 20.0f));    //몬스터의 좌표값

        Instantiate(enemies[index], enem_transform, transform.rotation = Quaternion.Euler(new Vector3(0, 180, 0)));    //1st몬스터 생성, 마지막은 몬스터 회전
    }

    public void SpawnObstacle()
    {
        int isSpawn, index,len;
        index = 0;
        len = obstacles.Length;
        if (clear == 45)       //clear 변수가 일정수준 도달했을 경우 패널을 띄운 뒤 변수 초기화
        {
            Time.timeScale = 0;
            panelController.OpenPanel(3);
            clear = 0;
            whichSpawn = Random.Range(0, 2); //다음 스테이지 몬스터 or 장애물 스테이지 랜덤으로 선택

        }
        if (clear >= 10 && clear <= 43)
        {
            float X_coord = -1.5f;        //장애물 X좌표
            Vector3 obs_transform = new Vector3(X_coord, obstacles[index].transform.position.y, playerTransform.position.z + 40);    //장애물의 좌표값

            isSpawn = Random.Range(0, 10);       //스폰 할 것 인지 말 것인지 (70%)
            if (isSpawn > 2)
            {
                index = Random.Range(0, len); //랜덤 장애물 스폰

                Instantiate(obstacles[index], obs_transform, transform.rotation = Quaternion.Euler(new Vector3(0, 180, 0)));    //1st장애물 생성
                X_coord += 1.5f;        //2번째 장애물의 X값 변경
                obs_transform = new Vector3(X_coord, obstacles[index].transform.position.y, playerTransform.position.z + 40);    //장애물 좌표값 변경
            }

            isSpawn = Random.Range(0, 10);
            if (isSpawn > 2)
            {
                index = Random.Range(0, len);    //2nd 장애물 랜덤 지정
                Instantiate(obstacles[index], obs_transform, transform.rotation = Quaternion.Euler(new Vector3(0, 180, 0)));    //장애물 생성
                X_coord += 1.5f;        //3번째 장애물 위한 X값 변경
                obs_transform = new Vector3(X_coord, obstacles[index].transform.position.y, playerTransform.position.z + 40);    //장애물 좌표값 변경

            }

            isSpawn = Random.Range(0, 10);
            if (isSpawn > 2)
            {
                index = Random.Range(0, len);    //3rd 장애물 랜덤 지정
                Instantiate(obstacles[index], obs_transform, transform.rotation = Quaternion.Euler(new Vector3(0, 180, 0)));    //3rd장애물 생성
            }

        }
        if (clear < 23 && clear % 10 == 0)       // clear 조건에 따라 토네이도 이벤트 발생
        {
            int loc;

            loc = Random.Range(0, 3);       //토네이도 위치를 위한 랜덤변수
            if (loc == 0)       //좌측
            {
                StartCoroutine(Tornado(-1.5f,0, playerTransform.position.z,84f));
            }
            else if (loc == 1)        //중간
            {
                StartCoroutine(Tornado(0f, 0, playerTransform.position.z, 90f));
            }
            else           //우측
            {
                StartCoroutine(Tornado(1.5f, 0, playerTransform.position.z, 96f));
            }
        }
        else if (clear < 45 && clear % 7 == 0)  // clear 조건에 따라 나무 이벤트 발생
        {
            Vector3 enem_transform = new Vector3(-2f, 0, playerTransform.position.z + 30);    //이벤트 좌표값
            Instantiate(events[1], enem_transform + new Vector3(0, 1f, 0), transform.rotation);
        }
    }

    IEnumerator Tornado(float x, float y, float z, float rot)
    {
        z += 15f;
        Vector3 Indi_position = new Vector3(x, y+2f, z);
        GameObject skill_indicator = Instantiate(SkillsIndicator, Indi_position, transform.rotation);
        skill_indicator.transform.LookAt(Player.transform);
        indirigi = skill_indicator.GetComponent<Rigidbody>();
        indirigi.velocity = transform.forward * 20;
        Quaternion indirot = skill_indicator.transform.rotation * Quaternion.Euler(new Vector3(0,90,0));
        //Destroy(skill_indicator, 1.5f);

        yield return new WaitForSeconds(1.5f);

        Vector3 enem_transform = new Vector3(x, y, z + 50);    //이벤트 좌표값
        Enemy tornado = Instantiate(events[0], enem_transform, indirot);   //rotation
        Destroy(tornado, 4f);

    }
}
