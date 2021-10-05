using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShopSelection : MonoBehaviour
{
    public static int selectedThing = 0;

    private DataManager data;
    public GameObject[] things;
    private TabManager tab;

    GameObject obj1;
    GameObject obj2;
    GameObject obj3;
    GameObject obj4;

    void Start()
    {
        obj1 = GameObject.Find("DataManager");
        data = obj1.GetComponent<DataManager>();
        obj3 = GameObject.Find("C_1");
        obj4 = GameObject.Find("TopTab_St");
        tab = obj4.GetComponent<TabManager>();
    }

    public void SelectThing(int num)
    {
        things[selectedThing].transform.parent.Find("Frame_Focus").gameObject.SetActive(false);
        selectedThing = num;
        things[selectedThing].transform.parent.Find("Frame_Focus").gameObject.SetActive(true);
    }
}
