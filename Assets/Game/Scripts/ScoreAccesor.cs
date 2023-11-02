using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;

public class ScoreAccesor : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI scoreText;
    
    private int score;
    

    // Start is called before the first frame update
    void Start()
    {
        //ScoreManager scoreManager = GameObject.Find("GameManager").GetComponent<ScoreManager>();
    }

    // Update is called once per frame
    void Update()
    {
        score = ScoreSingleton.Instance.lastGameScore;
        scoreText.text = score.ToString();
    }
}
