using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spin : MonoBehaviour
{
    Rigidbody rigid;

    // Start is called before the first frame update
    void Start()
    {
        rigid = GetComponent<Rigidbody>();
        rigid.AddForce(transform.forward * 20, ForceMode.Impulse);

    }

    float timer = 0f;

    // Update is called once per frame
    void Update()
    {
        timer += Time.deltaTime;
        RotateGameObject(new Vector3((Mathf.Cos(timer) * 0.5f + 0.5f) * 360f * 2, 0f, 0f));
    }
    
    public void RotateGameObject(Vector3 rotation)
    {
        transform.rotation = Quaternion.Euler(rotation);
    }

}
