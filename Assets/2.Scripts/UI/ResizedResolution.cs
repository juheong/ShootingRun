using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ResizedResolution : MonoBehaviour
{
    public int gap = 267; // 상단에 플레이어 상태 판넬 높이: 188, 하단에 메뉴 탭 높이: 79
    private float virtualRatio;
    private float realRatio;
    private float changeRatio;

    private float height;

    public List<RectTransform> resizePanel;
        void Start()
    {
        virtualRatio = 1600f / 1000f;
        realRatio = (float)Screen.height / (float)Screen.width;

        changeRatio = realRatio / virtualRatio;

        height = 1600f * changeRatio;
        foreach (RectTransform rect in resizePanel)
            rect.sizeDelta = new Vector2(1000, height-gap);
    }
}
