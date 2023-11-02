using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using TMPro;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;
//This script should keep track of the goals of players action, and check if the goal is reached.
//Goals are: shoot spear at: N, NE, E, SE, S, SW, W, NW
//The direction of the spear is determined the SpearController


public class ScoreManager : MonoBehaviour
{
    //location for sound
    public Camera ARCamera;
    
    
    //Displaytext
    [SerializeField] TextMeshProUGUI directionText; //to see what direction to shoot
    [SerializeField] TextMeshProUGUI hitText; //to see if the last shot was a hit or miss
    [SerializeField] TextMeshProUGUI cumScoreText; //counts cumulative wins

    [SerializeField] private AudioSource audioSource;
    [SerializeField] private AudioClip hit;
    [SerializeField] private AudioClip miss;

    //directions
    private int[] directionint = { 0, 45, 90, 135, 180, 225, 270, 315 }; //N, NE, E, SE, S, SW, W, NW
    private string[] directionstr = { "North", "North-East", "East", "South-East", "South", "South-West", "West", "North-West" }; //N, NE, E, SE, S, SW, W, NW
    //private string[] directionstr = { "N", "NE", "E", "SE", "S", "SW", "W", "NW" }; //N, NE, E, SE, S, SW, W, NW


    private int lastdirectionIndex;
    private int cumulativeScore;
    

    //other scripts
    private HitTextBehaviour hitTextBehaviour;

    // Start is called before the first frame update
    void Start()
    {
        lastdirectionIndex = 0;
        cumulativeScore = 0;
        ARCamera = GameObject.Find("ARSceneCamera").GetComponent<Camera>();
        audioSource = GetComponent<AudioSource>();
        
        hitTextBehaviour = GetComponent<HitTextBehaviour>();
        hitText = hitText.GetComponent<TextMeshProUGUI>();

    }

    //when a new spear is loadSed, this function is called
    public void NewSpear()
    {
        //pick a random direction
        int randomDirection = Random.Range(0, 8);
        //display the direction
        directionText.text = directionstr[randomDirection];
        lastdirectionIndex = randomDirection; //this wil keep track of current goal

    }



    //when the spear is shot, this function is called
    public void CalculateHit(int shotdirection)
    {
        //check if the shot direction is close to directionint
        if (Mathf.Abs(shotdirection - directionint[lastdirectionIndex]) <= 30)
        {
            hitText.text = "HIT!";
            hitText.color = new Color(0.353f, 0.839f, 0.384f, 1.0f);
            hitTextBehaviour.fadeout();
            cumulativeScore += 1;

            audioSource.clip = hit;
            //audioSource.pitch = (cumulativeScore / 2);
            audioSource.Play();

        }
        else
        {
            //for end screen
            ScoreSingleton.Instance.AddScore(cumulativeScore);
            
            hitText.text = "Miss...";
            hitText.color = new Color(0.839f, 0.353f, 0.353f, 1.0f);
            hitTextBehaviour.fadeout();
            audioSource.clip = miss;
            //audioSource.pitch = 1f;
            audioSource.Play();

            cumulativeScore = 0;
            //load end screen? game over + pass through Score.
            SceneManager.LoadScene(2);


        }
    }

    // Update is called once per frame
    void Update()
    {
        
        //update the position of the scoremanager to the camera
        transform.position = ARCamera.transform.position;
        
        cumScoreText.text = cumulativeScore.ToString();
    }
}
