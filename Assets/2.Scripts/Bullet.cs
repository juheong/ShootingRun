using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Bullet : MonoBehaviour
{
    public int damage;      //총알 데미지
    public GameObject explosionPrefab;      //폭발 애니메이션
    public float brange = 0f;   //총알 사거리

    void Start()
    {
        Destroy(this.gameObject, brange);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Enemy")        //적에게 피격될 시
        {
            Instantiate(explosionPrefab, gameObject.transform.position, Quaternion.Euler(0, 0, 0));     // 폭발 애니메이션 재생
            Destroy(gameObject);    //  총알 오브젝트 삭제
        }
    }
}

