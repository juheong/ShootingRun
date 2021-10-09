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

    void Start()
    {
        obj1 = GameObject.Find("C_1");
        obj2 = GameObject.Find("TopTab_St");

        data = GameObject.Find("DataManager").GetComponent<DataManager>();
        tab = obj1.GetComponent<TabManager>();
    }

    public void SelectThing(int num)
    {
        things[selectedThing].transform.parent.Find("Frame_Focus").gameObject.SetActive(false);
        selectedThing = num;
        things[selectedThing].transform.parent.Find("Frame_Focus").gameObject.SetActive(true);
    }
}
