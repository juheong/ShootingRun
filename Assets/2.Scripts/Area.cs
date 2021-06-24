using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Area : MonoBehaviour
{
    [SerializeField]
    private float destroyDistance = 15;
    private AreaSpawner areaSpawner;
    private Transform playerTransform;
    private bool isBoss;

    private void Awake()
    {
        InvokeRepeating("SpawnMonster", 1, 7f); //7초마다 몬스터 스폰
    }

    public void Setup(AreaSpawner areaSpawner, Transform playerTransform, bool isBoss)
    {
        this.areaSpawner = areaSpawner;
        this.playerTransform = playerTransform;
        this.isBoss = isBoss;
    }

    private void Update()
    {
        if (isBoss == true)
        {
            if (playerTransform.position.z - transform.position.z <= destroyDistance * (-1))
            {
                areaSpawner.SpawnArea();
                Destroy(gameObject);
            }
        }
        else
        {
            if (playerTransform.position.z - transform.position.z >= destroyDistance)
            {
                areaSpawner.SpawnArea();
                Destroy(gameObject);
            }
        }
    }

    public void SpawnMonster() //몬스터 스폰
    {
        if (isBoss == true) return;
        areaSpawner.SpawnMonster();
    }

}
