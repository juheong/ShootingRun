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

    public void IncreaseCoinCount()
    {
        coinCount++;
        textCoinCount.text = coinCount.ToString();
    }

    public void GameOver()
    {
        SceneManager.LoadScene("MainMenu");
    }
}
