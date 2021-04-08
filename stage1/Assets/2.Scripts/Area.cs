using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Area : MonoBehaviour
{
    [SerializeField]
    private float destroyDistance = 15;
    private AreaSpawner areaSpawner;
    private Transform playerTransform;

    public void Setup(AreaSpawner areaSpawner, Transform playerTransform)
    {
        this.areaSpawner = areaSpawner;
        this.playerTransform = playerTransform;
    }

    private void Update()
    {
        if( playerTransform.position.z - transform.position.z >= destroyDistance)
        {
            areaSpawner.SpawnArea();
            Destroy(gameObject);
        }
    }
}
