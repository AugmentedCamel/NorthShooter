using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;

public class ScoreTextBehaviour : MonoBehaviour
{
    [SerializeField] private TextMeshProUGUI _scoreTextPrefab;
    [SerializeField] public GameObject _scoreTextUIPanel;
    [SerializeField] public GameObject _scoreTextStartTransform;

    public List<GameObject> _scoreTexts = new List<GameObject>();

    // Start is called before the first frame update
    void Start()
    {
        
    }

    public void CreateScoreText(int angleshot)
    {
        if (angleshot != null)
        {
            GameObject scoreText = Instantiate(_scoreTextPrefab.gameObject, _scoreTextUIPanel.transform);
            scoreText.GetComponent<TextMeshProUGUI>().text = "Spear shot to: " + angleshot + "°";
        } 
        

    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
