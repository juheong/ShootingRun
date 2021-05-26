using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Bullet : MonoBehaviour
{
    public int damage;      //총알 데미지
    public GameObject explosionPrefab;      //폭발 애니메이션
    static AudioSource audioSource;     //오디오 플레이어
    public AudioClip impact;
    public float brange = 0f;   //총알 사거리

    void Start()
    {
        /*audioSource = GetComponent<AudioSource>();
        if (audioSource == null)
            audioSource = gameObject.AddComponent<AudioSource>();*/
        Destroy(this.gameObject, brange);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Enemy")        //적에게 피격될 시
        {
            Instantiate(explosionPrefab, gameObject.transform.position, Quaternion.Euler(0, 0, 0));     // 폭발 애니메이션 재생
            Destroy(gameObject);    //  총알 오브젝트 삭제
            //audioSource.PlayOneShot(impact);     // 피격 효과음 재생
        }
    }
}

