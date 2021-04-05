using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Weapon : MonoBehaviour
{
    public enum Type { Melee, Range}
    public Type type;
    public int damage;
    public float rate;
    public float range;
    public Transform bulletPos;
    public GameObject bullet;    
    
    public void Use()
    {
        if(type == Type.Range)
        {
            StartCoroutine("Shoot");
        }
    }

    IEnumerator Shoot()
    {        
        GameObject instantBullet = Instantiate(bullet, bulletPos.position, bulletPos.rotation);
        Rigidbody bulletRigid = instantBullet.GetComponent<Rigidbody>();
        bulletRigid.velocity = bulletPos.forward * 50;
        if(instantBullet != null)        Destroy(instantBullet, range);
        yield return null;
    }
}
