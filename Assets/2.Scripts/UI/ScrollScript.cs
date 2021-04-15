using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;


public class ScrollScript : ScrollRect // 기존 제공하는 구성요소 상속
{
    bool forParent;
    NestedScrollManager NM;
    ScrollRect parentScrollRect;

    protected override void Start() // 기존에 제공하는 클래스 요소를 상속받아서 선언하는 모든 함수는 override 인자가 붙는다.
    {
        NM = GameObject.FindWithTag("NestedScrollManager").GetComponent<NestedScrollManager>(); // override는 유니티 편집기에서 직접 오브젝트를 넣어주지 못해서 대안
        parentScrollRect = GameObject.FindWithTag("NestedScrollManager").GetComponent<ScrollRect>();
    }


    public override void OnBeginDrag(PointerEventData eventData)
    {
        // 드래그 시작하는 순간 수평이동이 크면 부모가 드래그 시작한 것, 수직이동이 크면 자식이 드래그 시작한 것
        forParent = Mathf.Abs(eventData.delta.x) > Mathf.Abs(eventData.delta.y);

        if (forParent)
        {
            NM.OnBeginDrag(eventData);
            parentScrollRect.OnBeginDrag(eventData);
        }
        else base.OnBeginDrag(eventData);
    }

    public override void OnDrag(PointerEventData eventData)
    {
        if (forParent)
        {
            NM.OnDrag(eventData);
            parentScrollRect.OnDrag(eventData);
        }
        else base.OnDrag(eventData);
    }

    public override void OnEndDrag(PointerEventData eventData)
    {
        if (forParent)
        {
            NM.OnEndDrag(eventData);
            parentScrollRect.OnEndDrag(eventData);
        }
        else base.OnEndDrag(eventData);
    }
}
