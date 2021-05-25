using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using TMPro;

public class LoadingSceneController : MonoBehaviour
{
    public static string nextScene;
    public Slider progressBar;

    public TextMeshProUGUI loadingTextUI;

    public static void LoadString(string sceneName) //씬 내에서 파라미터 값 받기 위함
    {
        nextScene = sceneName;        
    }
    public static void LoadSceneString(string sceneName) //씬 외부에서 파라미터 값 전달받기 위함
    {
        nextScene = sceneName;
        SceneManager.LoadScene("Loading");
    }

    private void Start()
    {
        StartCoroutine(LoadSceneProcess());
    }

    IEnumerator LoadSceneProcess()
    {
        AsyncOperation op = SceneManager.LoadSceneAsync(nextScene);
        op.allowSceneActivation = false;

        float timer = 0f;
        while(!op.isDone)
        {
            yield return null;
            if(op.progress < 0.9f) //로드할 리소스 부담이 적어서인지 else 분기로 바로 넘어감.
            {
                progressBar.value = op.progress;
                loadingTextUI.text = "Loading..." + (int)(progressBar.value * 100f) + "%";
            }
            else
            {
                timer += Time.unscaledDeltaTime / 3; //너무 금방차서 속도 조절 차원에서 산수 적용.
                progressBar.value = Mathf.Lerp(0.9f, 1f, timer);
                loadingTextUI.text = "Loading..." + (int)(progressBar.value * 100f) + "%";

                if (progressBar.value >= 1f)
                {
                    op.allowSceneActivation = true;
                    yield break;
                }
            }
        }
    }
}
