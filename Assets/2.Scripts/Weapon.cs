﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Weapon : MonoBehaviour
{
    public enum Type { Melee, Range }
    public enum Type2 { Pistol, Rifle, Sniper }
    public Type type;
    public Type2 type2;
    public int damage;
    public float rate;
    public float range;
    public Transform bulletPos;

    public Bullet bulletPrefab;
    Bullet newBullet;


    public void Use(bool boss = false)
    {
        if (type == Type.Range)
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
        newBullet = Instantiate(bulletPrefab, bulletPos.position, bulletPos.rotation) as Bullet;
        newBullet.damage = damage;
        newBullet.brange = range;
        Rigidbody bulletRigid = newBullet.GetComponent<Rigidbody>();
        bulletRigid.velocity = bulletPos.forward * 50;
        // if (newBullet != null) Destroy(newBullet, range);
        yield return null;
    }

    IEnumerator BossShoot()
    {
        yield return new WaitForSeconds(0.5f);
        newBullet = Instantiate(bulletPrefab, bulletPos.position, bulletPos.rotation) as Bullet;
        Rigidbody bulletRigid = newBullet.GetComponent<Rigidbody>();
        bulletRigid.velocity = bulletPos.forward * 50;
        newBullet.damage += this.damage;
        newBullet.brange += this.range;
        //  if (newBullet != null) Destroy(newBullet, range);
        yield return null;
    }
}
