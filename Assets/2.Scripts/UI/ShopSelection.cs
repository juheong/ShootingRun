using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShopSelection : MonoBehaviour
{
    public static int selectedThing = 0;

    private DataManager data;
    public GameObject[] things;
    private TabManager tab;
    private ActiveShop activeShop;

    GameObject obj1;
    GameObject obj2;

    void Start()
    {
        obj1 = GameObject.Find("C_1");
        obj2 = GameObject.Find("TopTab_St");

        data = GameObject.Find("DataManager").GetComponent<DataManager>();
        tab = obj1.GetComponent<TabManager>();
        activeShop = GameObject.Find("ShopPanel").GetComponent<ActiveShop>();
    }

    public void SelectThing(int num)        //선택기능
    {
        things[selectedThing].transform.parent.Find("Frame_Focus").gameObject.SetActive(false);
        selectedThing = num;
        things[selectedThing].transform.parent.Find("Frame_Focus").gameObject.SetActive(true);
    }
    public void BuyThing()      //구매기능
    {
        data.ItemUpdate(things[selectedThing].GetComponent<ItemDataSet>().itemId);      //DataManager의 선택한 품목의 id를 인자로 ItemUpdate 실행
        things[selectedThing].transform.parent.Find("Frame_Focus").gameObject.SetActive(false);     //구매한 품목 상점에서 삭제
        things[selectedThing].gameObject.SetActive(false);      //선택기능 끔
    }
}
