using System.Collections;
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

    public Bullet basicBullet;
    public Bullet blueBullet;
    public Bullet darkBullet;
    public Bullet redBullet;
    private Bullet selectedBullet;

    private AudioSource audioSource;     //오디오 플레이어
    Bullet newBullet;
    private DataManager data;

    void Start()
    {
        data = GameObject.Find("DataManager").GetComponent<DataManager>();
        audioSource = this.gameObject.GetComponent<AudioSource>();

        selectBullet();
    }
    private void selectBullet()
    {
        switch(type2)
        {
            default:
                break;
            case Type2.Pistol:
                switch(data.player.equipSkin[0])
                {
                    default:
                        selectedBullet = basicBullet;
                        break;
                    case "311":
                        selectedBullet = blueBullet;
                        break;
                    case "312":
                        selectedBullet = darkBullet;
                        break;
                    case "313":
                        selectedBullet = redBullet;
                        break;
                }
                break;
            case Type2.Rifle:
                switch (data.player.equipSkin[1])
                {
                    default:
                        selectedBullet = basicBullet;
                        break;
                    case "321":
                        selectedBullet = blueBullet;
                        break;
                    case "322":
                        selectedBullet = darkBullet;
                        break;
                    case "323":
                        selectedBullet = redBullet;
                        break;
                }
                break;
            case Type2.Sniper:
                switch (data.player.equipSkin[2])
                {
                    default:
                        selectedBullet = basicBullet;
                        break;
                    case "331":
                        selectedBullet = blueBullet;
                        break;
                    case "332":
                        selectedBullet = darkBullet;
                        break;
                    case "333":
                        selectedBullet = redBullet;
                        break;
                }
                break;
        }
    }
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
        newBullet = Instantiate(selectedBullet, bulletPos.position, bulletPos.rotation) as Bullet;
        newBullet.damage = damage;
        newBullet.brange = range;
        Rigidbody bulletRigid = newBullet.GetComponent<Rigidbody>();
        bulletRigid.velocity = bulletPos.forward * 50;
        this.audioSource.Play();
        // if (newBullet != null) Destroy(newBullet, range);
        yield return null;
    }
        
    IEnumerator BossShoot()
    {
        yield return new WaitForSeconds(0.5f);
        newBullet = Instantiate(selectedBullet, bulletPos.position, bulletPos.rotation) as Bullet;
        Rigidbody bulletRigid = newBullet.GetComponent<Rigidbody>();
        bulletRigid.velocity = bulletPos.forward * 50;
        newBullet.damage += this.damage;
        newBullet.brange += this.range;
        //  if (newBullet != null) Destroy(newBullet, range);
        yield return null;
    }
}
