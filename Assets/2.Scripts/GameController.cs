using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.SceneManagement;


public class GameController : MonoBehaviour
{
    [SerializeField]
    private TextMeshProUGUI textCoinCount;
    private int coinCount = 0;
    [SerializeField]
    private TextMeshProUGUI textHealthCount;
    private int healthCount = 100;


    private void Start()
    {
        

    }

    public void InitialCoin(int coin)
    {
        coinCount = coin;
        textCoinCount.text = coinCount.ToString();
    }

    public void InitialHealth(int health)
    {
        healthCount = health;
        textHealthCount.text = healthCount.ToString();
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

        textHealthCount.text = healthCount.ToString();
    }

    public void GameOver()
    {
        SceneManager.LoadScene("MainMenu", LoadSceneMode.Single);

    }
}
