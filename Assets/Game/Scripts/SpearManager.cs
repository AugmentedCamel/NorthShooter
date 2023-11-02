using Niantic.ARDK.AR;
using System;
using System.Collections;
using System.Collections.Generic;
using Unity.VisualScripting;
using UnityEngine;

public class SpearManager : MonoBehaviour
{
    public GameObject[] spearPrefabs;
    public GameObject CompassManager;
    public GameObject ScreenManager;
    public GameObject GameManager;

    private CompassManager _compassManagerScript;
    private ScoreTextBehaviour _scoreTextBehaviour;
    private ScoreManager _scoreManager;

    public List<GameObject> loadedSpears = new List<GameObject>();
    public List<GameObject> shotSpears = new List<GameObject>();

    public Camera ARcamera;

    //for User Inputs:
    private bool isSwiping = false;
    private float swipeStartTime;
    private Vector2 swipeStartPos;

    //for User Outputs:
    private float lastSwipeTime;


    // Start is called before the first frame update
    void Start()
    {
        

        _compassManagerScript = CompassManager.GetComponent<CompassManager>();
        _scoreTextBehaviour = ScreenManager.GetComponent<ScoreTextBehaviour>();
        _scoreManager = GameManager.GetComponent<ScoreManager>();

        LoadSpear(0, new Vector3(0, 0, 0));
        lastSwipeTime = Time.time;

    }

    public void LoadSpear(int index, Vector3 position)
    {
        // Check if the index is valid
        if (index < 0 || index >= spearPrefabs.Length)
        {
            Debug.LogError("Invalid spear index: " + index);
            return;
        }


        if (loadedSpears.Count != 0)
        {
            Debug.Log("spear already loaded");
            return;
        }

        // Spawn a new GameObject for the spear
        GameObject spearObject = Instantiate(spearPrefabs[index], position, Quaternion.identity);
        loadedSpears.Add(spearObject);

        // Set a new goal in the GameManager ScoreManager
        _scoreManager.NewSpear();
    }

    

    public void ShootSpear(float impuls)
    {
        //calculate and log the direction of the spear



        if (loadedSpears.Count == 0)
        {
            return;
        }
        
        if (loadedSpears.Count > 0)
        {

            GameObject spear = loadedSpears[0];
            
            loadedSpears.Remove(spear);
            
            spear.GetComponent<SpearController>().ShootObject(impuls);
            
            shotSpears.Add(spear);
        }
        else
        {
            Debug.Log("No spear loaded");
            return;
        }
    }

    private void SpearScore()
    {
        //first get the heading direction at the moment of shooting
        int angle = _compassManagerScript.GetCurrentHeading();
        //angle is the direction the spear is shot according to compass heading

        //pass the score to the score manager
        _scoreManager.CalculateHit(angle);


        //now log the text in te UI:
        _scoreTextBehaviour.CreateScoreText(angle);



    }
    public void SpearDestroyer()
    {
        if (shotSpears.Count > 25)
        {
            GameObject oldestSpear = shotSpears[0];
            Destroy(oldestSpear);
            shotSpears.RemoveAt(0);
 
        }
    }

    public void MoveSpearAlong()
    {


        if (ARcamera != null)
        {
            if (loadedSpears.Count > 0)
            {
                foreach (GameObject spear in loadedSpears)
                {
                    Vector3 trackedPos = Camera.main.transform.position;
                    trackedPos.y -= 0.2f; //instert lerp later
                    spear.transform.position = trackedPos;
                }

                
                
                foreach (GameObject spear in loadedSpears)
                {
                    

                    // Get the current rotation in euler angles
                    Vector3 currentRotation = spear.transform.rotation.eulerAngles;

                    // Get the target rotation in euler angles
                    Vector3 cameraRotation = ARcamera.transform.rotation.eulerAngles;

                    // Replace the y component of the current rotation with the y component of the target rotation
                    Vector3 targetRotation = new Vector3(currentRotation.x, cameraRotation.y, currentRotation.z);

                    // Convert back to Sa Quaternion
                    Quaternion targetQuaternion = Quaternion.Euler(targetRotation);

                    // Lerp the current rotation towards the target rotation
                    float rotationSpeed = 0.1f; // Adjust speed as needed
                    spear.transform.rotation = Quaternion.Lerp(spear.transform.rotation, targetQuaternion, rotationSpeed);

                }
            }
        }
        else
        {
            Debug.Log("AR camera not found");
        }
        
    }
    // Update is called once per frame
    void Update()
    {
        MoveSpearAlong();

        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            //record start time and position
            isSwiping = true;
            swipeStartTime = Time.time;
            swipeStartPos = Input.GetTouch(0).position;
        }
        else if (isSwiping && Input.GetTouch(0).phase == TouchPhase.Ended)
        {
            lastSwipeTime = Time.time;

            float timeInterval = Time.time - swipeStartTime;
            Vector2 endPos = Input.GetTouch(0).position;
            Vector2 swipeVector = endPos - swipeStartPos;
            
            //check if the swipe was upwards
            if (endPos.y > swipeStartPos.y)
            {
                float velocity = swipeVector.magnitude / timeInterval;
                Debug.Log("velocity: " + velocity);
                if (velocity > 900f)
                {
                    //calculate the impuls
                    float impuls = velocity * 0.01f;

                    //calculate the score of current spear and log to UI
                    SpearScore();

                    //shoot the spear forward
                    ShootSpear(impuls);
                    
                    //calculate the score of current spear and log to UI

                    //loads a new spear
                    LoadSpear(0, new Vector3(0, 0, 0));
                    Debug.Log("shot spear");
                }
                else
                {
                    Debug.Log("not enough velocity");
                }
            }
            else { Debug.Log("Swipe was not up"); }
           
            
            


            isSwiping = false;
        }


        SpearDestroyer();
        
    }
}

