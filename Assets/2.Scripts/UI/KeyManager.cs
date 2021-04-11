using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Events;

public class KeyManager : MonoBehaviour
{
    public UnityEvent keyDown, keyDown2;
    public GameObject panel;
    public GameObject CharPanel;
    private bool isOn;
    private void Awake()
    {
        isOn = false;
    }
    // Update is called once per frame
    void Update()
    {
        if(Input.GetKeyDown(KeyCode.Escape))
        {
            DoSettingPanel();
        }
    }

    public void DoSettingPanel()
    {
        if (!isOn)
        {
            keyDown.Invoke();   //델리케이트해서 다른 클래스 함수 사용(외부에서 대입)하여 사운드 재생
            Time.timeScale = 0;
            panel.SetActive(!isOn);
            CharPanel.SetActive(isOn);
            isOn = !isOn;
        }
        else
        {
            keyDown2.Invoke();
            Time.timeScale = 1;
            panel.SetActive(!isOn);
            CharPanel.SetActive(isOn);
            isOn = !isOn;
        }
    }

    public void Quit()
    {
        Application.Quit();
        Debug.Log("sdf");
    }


}
