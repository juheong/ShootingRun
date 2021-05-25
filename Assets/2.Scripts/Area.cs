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
}
