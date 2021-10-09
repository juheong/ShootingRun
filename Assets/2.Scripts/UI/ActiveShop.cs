using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ActiveShop : MonoBehaviour
{

    DataManager data;
    ShopSelection shop;

    public void activeShop()            //데이터 확인 후 상점 품목 제거
    {
        data = GameObject.Find("DataManager").GetComponent<DataManager>();
        shop = GameObject.Find("ShopPanel").GetComponent<ShopSelection>();
        for (int i = 0; i < data.player.hasItem.Length; i++)
        {
            if (data.player.hasItem[i] == true)
            {
                shop.things[i].SetActive(false);
            }
        }

    }
}
