using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class UserInfoPanel : MonoBehaviour
{
    public TextMeshProUGUI nickname;
    public TextMeshProUGUI level;
    public TextMeshProUGUI exp;
    public TextMeshProUGUI highStage;
    public TextMeshProUGUI highScore;

    private DataManager data;

    // Start is called before the first frame update
    void OnEnable()
    {
        data = GameObject.Find("DataManager").GetComponent<DataManager>();

        nickname.text = data.getName();
        level.text = data.getLevel().ToString();
        highStage.text = data.getHighStage().ToString();
        highScore.text = data.getHighScore().ToString();
        exp.text = data.player.current_exp.ToString() + " / " + data.player.next_exp.ToString();

    }

}
