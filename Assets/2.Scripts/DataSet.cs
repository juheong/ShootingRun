using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using BackEnd;

public class DataSet : MonoBehaviour
{
    DataManager data;
    private WeaponSelection weaponSelect;
    private SkinSelection skinSelection;

    GameObject obj1;

    void Start()
    {        
        data = gameObject.GetComponent<DataManager>();
        data.ReadData();
        data.SetText();
        obj1 = GameObject.Find("EquipmentPanel");
        if (obj1 != null)
        {
            skinSelection = obj1.GetComponent<SkinSelection>();
            for (int i = 0; i < 3; i++)
            {
                skinSelection.InitialSkin(data.player.equipSkin[i],i);
            }
            weaponSelect = obj1.GetComponent<WeaponSelection>();
            weaponSelect.InitialWeapon(data.player.equip);
        }        
        DontDestroyOnLoad(this.gameObject);

    }
}
