using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Item : MonoBehaviour
{
    public enum Type {Ammo, Coin,Heart,Weapon}
    public Type type;
    public int value;

    public void Update()
    {
        transform.Rotate(Vector3.up * 25 * Time.deltaTime);
    }
}


