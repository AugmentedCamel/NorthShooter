using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using Niantic.ARDK.Networking.HLAPI.Object.Unity;

public class TextMoveAndFade : MonoBehaviour
{
    [SerializeField] private float _moveSpeed = 1f;
    [SerializeField] private float _fadeDuration = 3f;

    RectTransform m_RectTransform;
    float m_XAxis, m_YAxis;

    // Start is called before the first frame update
    void Start()
    {
        m_RectTransform = GetComponent<RectTransform>();
        StartCoroutine(MoveAndFade());   
    }

    private IEnumerator MoveAndFade()
    {
        TextMeshProUGUI text = GetComponent<TextMeshProUGUI>();
        

        Color color = text.color;
        float startTime = Time.time;

        //while the text has not fully faded
        while (color.a > 0)
        {
            m_RectTransform.anchoredPosition += Vector2.up;
            
            // calculate how much time has passed since the start
            float t = Time.time - startTime;

            //gradually decrease the alpha to 0 over the duration
            color.a = Mathf.Lerp(1, 0, t /  _fadeDuration);
            text.color = color;

            yield return null;
        }

        //destroy object if fully faded
        Destroy(gameObject);
    }

    // Update is called once per frame
    void Update()
    {
        //m_RectTransform.transform.localScale = Vector3.one;
        //m_RectTransform.anchoredPosition += Vector2.down;
    }
}
