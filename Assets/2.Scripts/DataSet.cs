using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DataSet : MonoBehaviour
{
    DataManager data;
    public string nickname;
    void Start()
    {
        data = gameObject.GetComponent<DataManager>();
        data.ReadData();
        DontDestroyOnLoad(this.gameObject);
    }

}
