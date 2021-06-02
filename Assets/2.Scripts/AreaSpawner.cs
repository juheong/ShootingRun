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
        Enemy enem_1, enem_2, enem_3;
        MiddleBoss middle;

        int isSpawn,index,spawnwhich;
        index = 0;
        if (clear >=5 && clear < 20)
        {
            float X_coord = -1.5f;        //몬스터 X좌표
            Vector3 enem_transform = new Vector3(X_coord, 0, playerTransform.position.z+ 40);    //몬스터의 좌표값

            isSpawn = Random.Range(0, 10);       //스폰 할 것 인지 말 것인지 (70%)
            if (isSpawn > 2)
            {
                spawnwhich = Random.Range(0, 13);       //각 몬스터 스폰 확률 (토네이도 희박)
                if (spawnwhich <= 3)
                    index = 0;
                else if (spawnwhich <= 7)
                    index = 1;
                else if (spawnwhich <= 11)
                    index = 2;
                else if (spawnwhich == 12)
                    index = 3;
                enem_1 = Instantiate(enemies[index], enem_transform, transform.rotation = Quaternion.Euler(new Vector3(0, 180, 0)));    //1st몬스터 생성, 마지막은 몬스터 회전
                X_coord += 1.5f;        //2번째 몬스터를 위한 X값 변경
                enem_transform = new Vector3(X_coord, 0, playerTransform.position.z + 40);    //몬스터의 좌표값 변경
            }

            isSpawn = Random.Range(0, 10);
            if (isSpawn > 2)
            {
                spawnwhich = Random.Range(0, 10);
                if (spawnwhich <= 3)
                    index = 0;
                else if (spawnwhich <= 7)
                    index = 1;
                else if (spawnwhich <= 11)
                    index = 2;
                else if (spawnwhich == 12)
                    index = 3;
                index = 3;
                index = Random.Range(0, enemies.Length);    //2nd 몬스터 랜덤 지정
                enem_2 = Instantiate(enemies[index], enem_transform, transform.rotation = Quaternion.Euler(new Vector3(0, 180, 0)));    //2nd몬스터 생성
                X_coord += 1.5f;        //3번째 몬스터를 위한 X값 변경
                enem_transform = new Vector3(X_coord, 0, playerTransform.position.z + 40);    //몬스터의 좌표값 변경

            }

            isSpawn = Random.Range(0, 10);
            if (isSpawn > 2)
            {
                spawnwhich = Random.Range(0, 10);
                if (spawnwhich <= 3)
                    index = 0;
                else if (spawnwhich <= 7)
                    index = 1;
                else if (spawnwhich <= 11)
                    index = 2;
                else if (spawnwhich == 12)
                    index = 3;
                index = Random.Range(0, enemies.Length);    //3rd 몬스터 랜덤 지정
                enem_3 = Instantiate(enemies[index], enem_transform, transform.rotation = Quaternion.Euler(new Vector3(0, 180, 0)));    //3rd몬스터 생성
            }

        }
        else if (clear == 23)              //일정 타일 생성 후 중간보스 스폰
        {
            Vector3 enem_transform = new Vector3(0, 0, playerTransform.position.z + 15);
            middle = Instantiate(middleboss, enem_transform, transform.rotation = Quaternion.Euler(new Vector3(0, 180, 0)));
        }
    }

}
