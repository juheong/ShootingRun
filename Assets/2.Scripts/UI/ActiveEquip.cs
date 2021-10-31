using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActiveEquip : MonoBehaviour
{

    DataManager data;
    WeaponSelection weapon;
    SkinSelection skin;

    public void activeEquip()       //데이터 확인 후 장비창 품목 제거
    {
        int weaponIndex = 6;
        int characIndex = 8;
        int skinIndex = 17;

        data = GameObject.Find("DataManager").GetComponent<DataManager>();
        weapon = GameObject.Find("EquipmentPanel").GetComponent<WeaponSelection>();
        skin = GameObject.Find("EquipmentPanel").GetComponent<SkinSelection>();

        int i=0;

        ////품목이 true면 활성 그렇지 않으면 비활성
        for (i=0;i< weaponIndex; i++)     //무기
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

        for (i=6; i < characIndex; i++)      //캐릭터
        {
        }

        for (i=8; i < skinIndex; i++)      //스킨
        {
            if (data.player.hasItem[i] == false)
            {
                skin.skin[i- characIndex].SetActive(false);
            }
            else
            {
                skin.skin[i- characIndex].SetActive(true);
            }
        }

    }

}
