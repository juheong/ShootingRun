using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BackEnd;

public class DataSet : MonoBehaviour
{
    DataManager data;
    private WeaponSelection weaponSelect;
    GameObject obj1;

    void Start()
    {
        obj1 = GameObject.Find("EquipmentPanel");
        weaponSelect = obj1.GetComponent<WeaponSelection>();
        data = gameObject.GetComponent<DataManager>();
        data.ReadData();
        data.SetText();
        weaponSelect.InitialWeapon(data.player.equip);
        DontDestroyOnLoad(this.gameObject);

    }
}
