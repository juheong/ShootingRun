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
    public Slider sliderHeathCount;
    private int healthCount = 100;
    DataSet data;

    private void Start()
    {
        GameObject obj1 = GameObject.Find("DataManager");
        data = obj1.GetComponent<DataSet>();
        textname.text = data.nickname;
    }

    public void InitialCoin(int coin)
    {
        coinCount = coin;
        textCoinCount.text = coinCount.ToString();
    }

    public void InitialHealth(int health)
    {
        healthCount = health;
        sliderHeathCount.value = (float)healthCount/100f;
        //textHealthCount.text = healthCount.ToString();
    }

    public void IncreaseCoinCount()
    {
        coinCount++;
        textCoinCount.text = coinCount.ToString();
    }

    public void DecreaseHealthCount(int damage)
    {
        if( healthCount < damage)
        {
            healthCount = 0;
        }
        else
        {
            healthCount -= damage;
        }

        sliderHeathCount.value = (float)healthCount/100f;
        //textHealthCount.text = healthCount.ToString();
    }

    public void GameOver()
    {
        SceneManager.LoadScene("MainMenu", LoadSceneMode.Single);

    }
}
