using UnityEngine;

public class AreaSpawner : MonoBehaviour
{
    [SerializeField]
    private GameObject[] areaPrefabs;
    public Enemy[] enemies;
    public MiddleBoss middleboss;
    [SerializeField]
    private int spawnAreaCountAtStart = 3;
    [SerializeField]
    private float zDistance = 20;
    private int areaIndex = 0;
    [SerializeField]
    private bool isBoss = false;

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
        Enemy enem_1, enem_2, enem_3;
        MiddleBoss middle;
        GameObject clone = null;
        if (clear < 5)
        {
            int index = Random.Range(1, areaPrefabs.Length);
            clone = Instantiate(areaPrefabs[index]);
            clear++; // 스테이지 클리어 조건
        }
        else if (clear < 10)
        {
            float X_coord = -1.5f;        //몬스터 X좌표
            Vector3 enem_transform = new Vector3(X_coord, 0, areaIndex * zDistance);    //몬스터의 좌표값

            int index = Random.Range(1, areaPrefabs.Length);
            clone = Instantiate(areaPrefabs[index]);

            index = Random.Range(0, enemies.Length);    //1st 몬스터 랜덤 지정
            enem_1 = Instantiate(enemies[index], enem_transform, transform.rotation = Quaternion.Euler(new Vector3(0, 180, 0)));    //1st몬스터 생성, 마지막은 몬스터 회전
            X_coord += 1.5f;        //2번째 몬스터를 위한 X값 변경
            enem_transform = new Vector3(X_coord, 0, areaIndex * zDistance);    //몬스터의 좌표값 변경


            index = Random.Range(0, enemies.Length);    //2nd 몬스터 랜덤 지정
            enem_2 = Instantiate(enemies[index], enem_transform, transform.rotation = Quaternion.Euler(new Vector3(0, 180, 0)));    //2nd몬스터 생성
            X_coord += 1.5f;        //3번째 몬스터를 위한 X값 변경
            enem_transform = new Vector3(X_coord, 0, areaIndex * zDistance);    //몬스터의 좌표값 변경


            index = Random.Range(0, enemies.Length);    //3rd 몬스터 랜덤 지정
            enem_3 = Instantiate(enemies[index], enem_transform, transform.rotation = Quaternion.Euler(new Vector3(0, 180, 0)));    //3rd몬스터 생성

            clear++; // 스테이지 클리어 조건
        }
        else if (clear == 13)              //일정 타일 생성 후 중간보스 스폰
        {
            int index = Random.Range(1, areaPrefabs.Length);
            clone = Instantiate(areaPrefabs[index]);

            Vector3 enem_transform = new Vector3(0, 0, (areaIndex * zDistance)-30f);
            middle = Instantiate(middleboss, enem_transform, transform.rotation = Quaternion.Euler(new Vector3(0, 180, 0)));
            clear++; // 스테이지 클리어 조건
        }
        else                         //조건에 안맞는다면 맵만 생성
        {
            int index = Random.Range(1, areaPrefabs.Length);
            clone = Instantiate(areaPrefabs[index]);
            clear++;
        }
        clone.transform.position = new Vector3(0, 0, areaIndex * zDistance);
        clone.GetComponent<Area>().Setup(this, playerTransform, isBoss);
        areaIndex++;
    }
}
