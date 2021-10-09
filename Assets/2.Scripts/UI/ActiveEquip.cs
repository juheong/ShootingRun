using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActiveEquip : MonoBehaviour
{

    DataManager data;
    WeaponSelection weapon;

    public void activeEquip()       //데이터 확인 후 장비창 품목 제거
    {
        data = GameObject.Find("DataManager").GetComponent<DataManager>();
        weapon = GameObject.Find("EquipmentPanel").GetComponent<WeaponSelection>();

        for (int i=0;i<data.player.hasItem.Length;i++)      //품목이 true면 활성 그렇지 않으면 비활성
        {
            if(data.player.hasItem[i]==false)
            {
                weapon.weapon[i].SetActive(false);
            }
            else
            {
                weapon.weapon[i].SetActive(true);
            }
        }

    }

}
