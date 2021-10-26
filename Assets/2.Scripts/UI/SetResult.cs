using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class SetResult : MonoBehaviour
{
    public TextMeshProUGUI highestStageText;
    public TextMeshProUGUI highestScoreText;
    public TextMeshProUGUI stageText;
    public TextMeshProUGUI scoreText;
    public TextMeshProUGUI coinText;
    public GameObject newScore;
    public GameObject newStage;

    private AreaSpawner areaSpawner;
    private Player player;
    private DataManager data;
    private int score;
    private int stage;

    void OnEnable()     //오브젝트 활성화시
    {
        areaSpawner = GameObject.Find("AreaSpawner").GetComponent<AreaSpawner>();
        player = GameObject.FindWithTag("Player").GetComponent<Player>();
        data = GameObject.Find("DataManager").GetComponent<DataManager>();

        setText();

        //데이터 업데이트
        data.RankUpdate(score, stage);
        data.coinUpdate(player.coin);
        data.expUpdate((int)score / 100);
    }

    void setText()      //텍스트 적용
    {
        bool isNewScore, isNewStage;        //신기록 판별
        isNewScore = (player.score > data.getHighScore()) ? true : false;
        isNewStage = (areaSpawner.stage > data.getHighStage()) ? true : false;

        score = (player.score > data.getHighScore()) ? player.score : data.getHighScore();      //신기록 판별하여 값 할당
        stage = (areaSpawner.stage > data.getHighStage()) ? areaSpawner.stage : data.getHighStage();

        if (!isNewScore)            //신기록인지 아닌지 판별하여 NEW 이미지 활성화
            newScore.SetActive(false);
        if (!isNewStage)
            newStage.SetActive(false);

        //text 초기화
        highestStageText.text = stage.ToString();
        highestScoreText.text = score.ToString();
        stageText.text = areaSpawner.stage.ToString();
        scoreText.text = player.score.ToString();
        coinText.text = player.coin.ToString();
    }
}
