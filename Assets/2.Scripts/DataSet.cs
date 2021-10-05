using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BackEnd;

public class DataSet : MonoBehaviour
{
    DataManager data;
    private WeaponSelection weaponSelect;
    private ShopSelection shopSelection;
    GameObject obj1;
    GameObject obj2;

    void Start()
    {        
        data = gameObject.GetComponent<DataManager>();
        data.ReadData();
        data.SetText();
        obj1 = GameObject.Find("EquipmentPanel");
        if (obj1 != null)
        {
            weaponSelect = obj1.GetComponent<WeaponSelection>();
            weaponSelect.InitialWeapon(data.player.equip);
        }
        obj2 = GameObject.Find("ShopPanel");
        if (obj2 != null)
        {
            shopSelection = obj2.GetComponent<ShopSelection>();
        }
        DontDestroyOnLoad(this.gameObject);

    }
}
