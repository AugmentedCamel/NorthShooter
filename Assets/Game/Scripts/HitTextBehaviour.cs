using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System.Timers;

public class HitTextBehaviour : MonoBehaviour
{
    public TextMeshProUGUI text;
    public float fadeDuration = 2.0f;
    
    // Start is called before the first frame update
    void Start()
    {
       // Set the text color to fully opaque
       text.color = new Color(text.color.r, text.color.g, text.color.b, 0.0f);
    }

    public void fadeout()
    {
        StopAllCoroutines();
        StartCoroutine(FadeOutCoroutine());
    }

    private IEnumerator FadeOutCoroutine()
    {
        

        Color startColor = new Color(text.color.r, text.color.g, text.color.b, 1.0f);
        //yield return new WaitForSeconds(0.5f);
        float elapsed = 0.0f;

        //starting color must first be fully opague
        //Color startColor = new Color(text.color.r, text.color.g, text.color.b, 1.0f);
        Color endColor = new Color(text.color.r, text.color.g, text.color.b, 0.0f);

        while (elapsed < fadeDuration)
        {
            float t = Mathf.Clamp01(elapsed / fadeDuration);
            text.color = Color.Lerp(startColor, endColor, t);
            elapsed += Time.deltaTime;
            yield return null;
        }

        // Set the final color to fully transparent
        text.color = endColor;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
