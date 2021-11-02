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
    private CameraController cameraController;
    GameObject obj1;
    public GameObject obj2;
    public GameObject obj3;

    Player player;

    private void Awake()
    {
        if (StageSelection.selectedStage == 0)
        {
            if (obj3.activeSelf)
            {
                obj3.SetActive(false);
            }            
            obj2.SetActive(true);
        }
        else if(StageSelection.selectedStage == 1)
        {
            if (obj2.activeSelf)
            {
                obj2.SetActive(false);
            }
            obj3.SetActive(true);
        }
    }
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
