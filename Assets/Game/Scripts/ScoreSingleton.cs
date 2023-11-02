using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ScoreSingleton : MonoBehaviour
{
    public static ScoreSingleton Instance;
    public int lastGameScore;

    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
            DontDestroyOnLoad(this.gameObject); //this will make sure the object is not destroyed when a new scene is loaded
        }
        else
        {
            Destroy(this.gameObject);
        }
    }

    public void AddScore(int value)
    {
        lastGameScore = value;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
