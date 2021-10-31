using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;


public class EquipItems : MonoBehaviour
{
    WeaponSelection weaponSelection;
    TabManager tabManager;
    SkinSelection skinSelection;

    void Start()
    {
        weaponSelection = transform.GetComponent<WeaponSelection>();
        tabManager = GameObject.Find("TopTab_Eq").GetComponent<TabManager>();
        skinSelection = transform.GetComponent<SkinSelection>();
    }

    public void EquipItem()
    {
        int tabIndex;
        tabIndex = tabManager.targetIndex;

        if (tabIndex <= 2)
            weaponSelection.EquipWeapon();
        else
            skinSelection.EquipSkin();
    }
}
