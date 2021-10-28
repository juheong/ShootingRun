using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class GameController : MonoBehaviour
{
    [SerializeField]
    private TextMeshProUGUI textCoinCount;
    private int coinCount = 0;
    [SerializeField]
    private TextMeshProUGUI textHealthCount;
    [SerializeField]
    private TextMeshProUGUI textname;
    [SerializeField]
    private TextMeshProUGUI textlevel;
    [SerializeField]
    private TextMeshProUGUI textexp;
    public Slider sliderHealthCount;
    private DataManager data;
    GameObject obj1;
    Player player;

    private void Start()
    {
        obj1 = GameObject.Find("DataManager");
        data = obj1.GetComponent<DataManager>();
        textname.text = data.getName();
        textlevel.text = data.getLevel().ToString();
        textexp.text = data.getExp().ToString();
        player = GameObject.FindWithTag("Player").GetComponent<Player>();
    }
    private void Update()
    {
        sliderHealthCount.value = (float)player.health / (float)player.maxhealth;
    }
    public void InitialLevel()
    {
        textlevel.text = data.getLevel().ToString();
    }

    public void InitialExp()
    {
        textexp.text = data.getExp().ToString();
    }

    public void InitialCoin(int coin)
    {
        coinCount = coin;
        textCoinCount.text = coinCount.ToString();
    }



    public void IncreaseCoinCount()
    {
        coinCount++;
        textCoinCount.text = coinCount.ToString();
    }


    public void GameOver()
    {
        SceneManager.LoadScene("MainMenu", LoadSceneMode.Single);

    }
}
