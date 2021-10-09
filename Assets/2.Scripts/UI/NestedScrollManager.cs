using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems; // 아래 IBEginHandler, ... 상속받기 위해 선언 사용 목적은 기존 Input.GetMouseButton()은 화면 밖에서도 적용이 되지만 드래그 핸들러는 오브젝트 구역 안에서만 작동

public class NestedScrollManager : MonoBehaviour, IBeginDragHandler, IDragHandler, IEndDragHandler
{
    public Scrollbar scrollbar;
    public Transform contentTr;

    public Slider tabSlider;
    public RectTransform[] BtnRect, BtnImageRect;
    public Sprite[] BtnImage;

    const int SIZE = 4;
    float[] pos = new float[SIZE]; // 슬라이드 각 페이지의 슬라이더 value 값을 저장하기 위한 공간
    float distance, curPos;
    public float targetPos; // 초기화면 정하기 위함
    public int targetIndex; // 동일
    public GameObject topPanel; //특정 페이지에서 판넬 활성화 유무 정하기 위함
    bool isDrag;

    public ActiveEquip activeEquip;
    public ActiveShop activeShop;

    void Start()
    {
        // 거리에 따라 0~1인 pos대입
        distance = 1f / (SIZE - 1);
        for (int i = 0; i < SIZE; i++) pos[i] = distance * i;
    }

    float SetPos()
    {
        // 절반거리를 기준으로 가까운 위치를 반환
        for (int i = 0; i < SIZE; i++)
            if (scrollbar.value < pos[i] + distance * 0.5f && scrollbar.value > pos[i] - distance * 0.5f)
            {
                targetIndex = i;
                return pos[i];
            }
        return 0;
    }


    public void OnBeginDrag(PointerEventData eventData) => curPos = SetPos();

    public void OnDrag(PointerEventData eventData) => isDrag = true;

    public void OnEndDrag(PointerEventData eventData)
    {
        isDrag = false;
        targetPos = SetPos();

        // 절반거리를 넘지 않아도 마우스를 빠르게 이동하면
        if (curPos == targetPos)
        {
            // ← 으로 가려면 목표가 하나 감소
            if (eventData.delta.x > 15 && curPos - distance >= 0)
            {
                --targetIndex;
                targetPos = curPos - distance;
            }

            // → 으로 가려면 목표가 하나 증가
            else if (eventData.delta.x < -15 && curPos + distance <= 1.01f)
            {
                ++targetIndex;
                targetPos = curPos + distance;
            }


        }

        VerticalScrollUp();
    }

    void VerticalScrollUp()
    {
        // 목표가 수직스크롤이고(contentTr.GetChild(i).GetComponent<ScrollScript>()), 옆에서 옮겨왔다면(curPos != targetPos) 수직스크롤을 맨 위로 올림
        for (int i = 0; i < SIZE; i++)
            if (contentTr.GetChild(i).GetComponent<ScrollScript>() && curPos != pos[i] && targetPos == pos[i])
                contentTr.GetChild(i).GetChild(1).GetComponent<Scrollbar>().value = 1;
    }


    void Update()
    {
        tabSlider.value = scrollbar.value; // 아래 탭(슬라이더) 이동하기 위하여 값 받음. 드래그 유무 관계없기 때문에 조건식 위에 작성

        if (!isDrag)
        {
            scrollbar.value = Mathf.Lerp(scrollbar.value, targetPos, 0.1f);

            // 목표 버튼 판넬은 크기가 커짐
            // for (int i = 0; i < SIZE; i++) BtnRect[i].sizeDelta = new Vector2(i == targetIndex ? 400 : 200, BtnRect[i].sizeDelta.y);
            for (int i = 0; i < SIZE; i++) BtnRect[i].sizeDelta = Vector2.Lerp(BtnRect[i].sizeDelta, new Vector2(i == targetIndex ? 400 : 200, BtnRect[i].sizeDelta.y), 0.25f);
        }


        //if (Time.time < 0.1f) return;

        for (int i = 0; i < SIZE; i++)
        {
            // 버튼 아이콘이 부드럽게 버튼의 중앙으로 이동, 크기는 1, 텍스트 비활성화 -> 버튼 아이콘 버튼의 자식으로 상속하여 이동은 따로 안하는 방향
            Vector3 BtnTargetPos = new Vector3(0, 40, 0);
            Vector3 BtnTargetSize = new Vector3(0.7f, 0.7f, 1f);
            Sprite BtnTargetImage = BtnImage[0];
            //bool textActive = false;

            // 선택한 버튼 아이콘은 약간 위로 올리고, 크기도 키우고, 텍스트도 활성화
            if (i == targetIndex)
            {
                if (targetIndex == 1)       //특정 탭 선택 시 데이터 확인 후 품목 제거
                    activeShop.activeShop();
                else if (targetIndex == 2)
                    activeEquip.activeEquip();

                BtnTargetPos.y = 90f;
                BtnTargetSize = new Vector3(1f, 1f, 1f);
                BtnTargetImage = BtnImage[1];
                //textActive = true;

            }


            BtnImageRect[i].anchoredPosition3D = Vector3.Lerp(BtnImageRect[i].anchoredPosition3D, BtnTargetPos, 0.25f);
            BtnImageRect[i].localScale = Vector3.Lerp(BtnImageRect[i].localScale, BtnTargetSize, 0.25f);
            BtnRect[i].transform.GetChild(0).GetComponent<Image>().sprite = BtnTargetImage;
            //BtnImageRect[i].sizeDelta = Vector2.Lerp(BtnImageRect[i].sizeDelta, BtnTargetSize, 0.25f);
            //BtnImageRect[i].transform.GetChild(0).gameObject.SetActive(textActive);
            
        }

        topPanel.SetActive(targetIndex != 3);
    }


    public void TabClick(int n)
    {
        curPos = SetPos();
        targetIndex = n;
        targetPos = pos[n];
        VerticalScrollUp();
    }
}
