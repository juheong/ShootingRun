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
    DataManager dataManager;

    private void Start()
    {
        dataManager = FindObjectOfType<DataManager>();

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
        SceneManager.LoadScene("SampleScene");
        dataManager.Save();
    }
}
