using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class GameController : MonoBehaviour
{
    [SerializeField]
    private TextMeshProUGUI textHealthCount;
    [SerializeField]
    private TextMeshProUGUI textname;
    public Slider sliderHealthCount;
    private DataManager data;
    GameObject obj1;
    Player player;

    private void Start()
    {
        obj1 = GameObject.Find("DataManager");
        data = obj1.GetComponent<DataManager>();
        textname.text = data.getName();
        player = GameObject.FindWithTag("Player").GetComponent<Player>();
    }
    private void Update()
    {
        sliderHealthCount.value = (float)player.health / (float)player.maxhealth;
    }



    public void GameOver()
    {
        SceneManager.LoadScene("MainMenu", LoadSceneMode.Single);

    }
}
