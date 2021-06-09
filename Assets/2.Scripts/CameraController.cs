using UnityEngine;

public class CameraController : MonoBehaviour
{
    [SerializeField]
    private Transform target;
    private float zDistance;
    private bool isDie = false;
    Vector3 position;

    private void Awake()
    {
        if (target != null)
        {
            zDistance = target.position.z - transform.position.z;
        }
    }

    private void Update()
    {
        if (isDie)
        {
            position = transform.position;
            position.z -= 1 * Time.deltaTime;
        }
        else
        {
            position = transform.position;
            position.z = target.position.z - zDistance;
        }
    }
    // Update is called once per frame
    private void LateUpdate()
    {
        if (target == null) return;
        if (position == new Vector3(0,0,0)) return;
            transform.position = position;
    }

    public void DieCamera()
    {
        isDie = true;
    }
}

    
