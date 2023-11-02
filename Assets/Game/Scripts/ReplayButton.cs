using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ReplayButton : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    public void RestartGame()
    {
        SceneManager.LoadScene(0);
    }
    // Update is called once per frame
    void Update()
    {
        
    }
}
