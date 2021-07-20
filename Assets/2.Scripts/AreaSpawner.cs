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
    public Enemy[] events;
    //public MiddleBoss middleboss;
    [SerializeField]
    private int spawnAreaCountAtStart = 3;
    [SerializeField]
    private float zDistance = 20;
    private int areaIndex = 0;
    [SerializeField]
    private bool isBoss = false;

    //public TextMeshProUGUI text;
    public PanelController panelController;

    [SerializeField]
    private Transform playerTransform;
    public int clear = 0;

    private void Awake()
    {
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

    public void SpawnMonster()
    {
        //MiddleBoss middle;

        int isSpawn,index;
        index = 0;
        if (clear >=5&&clear<=42)
        {
            float X_coord = -1.5f;        //몬스터 X좌표
            Vector3 enem_transform = new Vector3(X_coord, 0, playerTransform.position.z+ 40);    //몬스터의 좌표값

            isSpawn = Random.Range(0, 10);       //스폰 할 것 인지 말 것인지 (70%)
            if (isSpawn > 2)
            {
                index = Random.Range(0, 4);       //각 몬스터 스폰 확률 (0=range, 1=burrow, 2=rush)
     
                Instantiate(enemies[index], enem_transform, transform.rotation = Quaternion.Euler(new Vector3(0, 180, 0)));    //1st몬스터 생성, 마지막은 몬스터 회전
                X_coord += 1.5f;        //2번째 몬스터를 위한 X값 변경
                enem_transform = new Vector3(X_coord, 0, playerTransform.position.z + 40);    //몬스터의 좌표값 변경
            }

            isSpawn = Random.Range(0, 10);
            if (isSpawn > 2)
            {
                index = Random.Range(0, 4);     

                index = 3;
                index = Random.Range(0, enemies.Length);    //2nd 몬스터 랜덤 지정
                Instantiate(enemies[index], enem_transform, transform.rotation = Quaternion.Euler(new Vector3(0, 180, 0)));    //2nd몬스터 생성
                X_coord += 1.5f;        //3번째 몬스터를 위한 X값 변경
                enem_transform = new Vector3(X_coord, 0, playerTransform.position.z + 40);    //몬스터의 좌표값 변경

            }

            isSpawn = Random.Range(0, 10);
            if (isSpawn > 2)
            {
                index = Random.Range(0, 4);

                index = Random.Range(0, enemies.Length);    //3rd 몬스터 랜덤 지정
                Instantiate(enemies[index], enem_transform, transform.rotation = Quaternion.Euler(new Vector3(0, 180, 0)));    //3rd몬스터 생성
            }

        }
        if (clear <23 && clear %5==0)       // clear 조건에 따라 토네이도 이벤트 발생
        {
            int loc;

            loc = Random.Range(0, 3);       //토네이도 위치를 위한 랜덤변수
            if (loc == 0)       //좌측
            {
                Vector3 enem_transform = new Vector3(-1.5f, 0, playerTransform.position.z + 30);    //이벤트 좌표값
                Instantiate(events[0], enem_transform, transform.rotation = Quaternion.Euler(new Vector3(0, 84, 0)));   //rotation
            }
            else if(loc ==1)        //중간
            {
                Vector3 enem_transform = new Vector3(0, 0, playerTransform.position.z + 30);  
                Instantiate(events[0], enem_transform, transform.rotation = Quaternion.Euler(new Vector3(0, 90, 0)));
            }
            else           //우츨
            {
                Vector3 enem_transform = new Vector3(1.5f, 0, playerTransform.position.z + 30);
                Instantiate(events[0], enem_transform, transform.rotation = Quaternion.Euler(new Vector3(0, 96, 0)));
            }
        }
        if(clear==45)       //clear 변수가 일정수준 도달했을 경우 패널을 띄운 뒤 변수 초기화
        {
            Time.timeScale = 0;
            panelController.OpenPanel(3);
            clear = 0;
        }
       /* else if (clear == 23)              //일정 타일 생성 후 중간보스 스폰
        {
            Vector3 enem_transform = new Vector3(0, 0, playerTransform.position.z + 15);
            middle = Instantiate(middleboss, enem_transform, transform.rotation = Quaternion.Euler(new Vector3(0, 180, 0)));
            clear++;
        }*/
    }

    /*public void SpawnTree()
    {

        private void CheckDirection(Vector3 _rotationDir)  // 어느 방향으로 나뭇 가지를 눕힐지.
        {
            Debug.Log(_rotationDir);

            wantedRot = new Vector3(50f, 0f, 50f);
        }

        IEnumerator HitSwayCoroutine(Transform _target)
        {
            Vector3 direction = (_target.position - transform.position).normalized; // 플레이어가 나뭇가지 로 향하는 방향 

            Vector3 rotationDir = Quaternion.LookRotation(direction).eulerAngles;  // 플레이어가 나뭇가지 방향을 바라보는 방향의 각도 값.

            CheckDirection(rotationDir);

            while (!CheckThreadhold())
            {
                currentRot = Vector3.Lerp(currentRot, wantedRot, 0.25f);
                transform.rotation = Quaternion.Euler(currentRot);
                yield return null;
            }

            wantedRot = originRot;

            while (!CheckThreadhold())
            {
                currentRot = Vector3.Lerp(currentRot, originRot, 0.15f);
                transform.rotation = Quaternion.Euler(currentRot);
                yield return null;
            }
        }

        private bool CheckThreadhold()
        {
            if (Mathf.Abs(wantedRot.x - currentRot.x) <= 0.5f && Mathf.Abs(wantedRot.z - currentRot.z) <= 0.5f)
                return true;
            return false;
        }
    }*/

}
