using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class ButtonUpgrade : MonoBehaviour
{
    GameObject Player;
    GameObject Weapon;


    // Start is called before the first frame update
    void Start()
    {
        Player = GameObject.FindWithTag("Player");
        Weapon = GameObject.FindWithTag("Weapon");
    }

    public void AttackUp()
    {
        Weapon.GetComponent<Weapon>().damage = (int)(Weapon.GetComponent<Weapon>().damage*1.2f);
    }
    public void RateUp()
    {
        Weapon.GetComponent<Weapon>().rate = (Weapon.GetComponent<Weapon>().rate*0.8f);
    }
    public void RangeUp()
    {
        Weapon.GetComponent<Weapon>().range = (Weapon.GetComponent<Weapon>().range * 1.2f);
    }
}
