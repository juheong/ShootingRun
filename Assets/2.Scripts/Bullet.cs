using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    public int damage;
    public GameObject explosionPrefab;

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Enemy")
        {
            Instantiate(explosionPrefab, gameObject.transform.position, Quaternion.Euler(0, 0, 0));
            Destroy(gameObject);
        }
    }
}

