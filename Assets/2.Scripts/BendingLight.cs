using UnityEngine;

public class BendingLight : MonoBehaviour
{
    [Range(0.005f, 0.1f)]
    [SerializeField] private float bendingAmount = 0.005f;

    private Camera _camera;
    private Transform _transform;
    private Vector3 _offset;

    void Awake()
    {
        _camera = Camera.main;
        _transform = transform;
    }

    private void Update()
    {
        // In case if it has to be moved by another script
        _transform.position -= _offset;
    }

    void LateUpdate()
    {
        Vector3 difference = _transform.position - _camera.transform.position;
        float xFactor = Mathf.Pow(difference.x, 2) * (-bendingAmount);
        float zFactor = Mathf.Pow(difference.z, 2) * (-bendingAmount);

        _offset = new Vector3(0, xFactor + zFactor, 0);

        _transform.position += _offset;
    }
}