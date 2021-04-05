using UnityEngine;

public class PlayerController : MonoBehaviour
{
    [SerializeField]
    private float dragDistance = 50.0f;
    private Vector3 touchStart;
    private Vector3 touchEnd;
    private Player movement;
    private void Awake()
    {
        movement = GetComponent<Player>();
    }

    private void Update()
    {        
        if (Application.isMobilePlatform)
        {
            OnMobilePlatform();
        }
        else
        {
            OnPCPlatform();
        }
    }

    private void OnMobilePlatform()
    {
        if (Input.touchCount == 0) return;
        Touch touch = Input.GetTouch(0);
        if (touch.phase == TouchPhase.Began)
        {
            touchStart = touch.position;
        }
        else if (touch.phase == TouchPhase.Moved)
        {
            touchEnd = touch.position;
            OnDragXY();
        }
    }

    private void OnPCPlatform()
    {
        if (Input.GetMouseButtonDown(0))
        {
            touchStart = Input.mousePosition;
        }
        else if (Input.GetMouseButton(0))
        {
            touchEnd = Input.mousePosition;
            OnDragXY();
        } 
    }

    private void OnDragXY()
    {
        if (Mathf.Abs(touchEnd.x - touchStart.x) >= dragDistance)
        {
            movement.MoveToX((int)Mathf.Sign(touchEnd.x - touchStart.x));
            return;
        }

        if (touchEnd.y - touchStart.y >= dragDistance )
        {
            movement.MoveToYup();
            return;
        }
        else if (touchStart.y - touchEnd.y >= dragDistance)
        {
            movement.MoveToYdown();
            return;
        }
    }
}
