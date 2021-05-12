using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Weapon : MonoBehaviour
{
    public enum Type { Melee, Range}
    public enum Type2 { Pistol, Rifle, Sniper}
    public Type type;
    public Type2 type2;
    public int damage;
    public float rate;
    public float range;
    public Transform bulletPos;
    public GameObject bullet; 
    
    
    public void Use(bool boss = false)
    { 
        if(type == Type.Range)
        {
            if (boss)
            {
                StartCoroutine("BossShoot");
            }
            else
            {
                StartCoroutine("Shoot");
            }
                
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

    IEnumerator BossShoot()
    {
        yield return new WaitForSeconds(0.5f);
        GameObject instantBullet = Instantiate(bullet, bulletPos.position, bulletPos.rotation);
        Rigidbody bulletRigid = instantBullet.GetComponent<Rigidbody>();
        bulletRigid.velocity = bulletPos.forward * 50;
        if (instantBullet != null) Destroy(instantBullet, range);
        yield return null;
    }
}
