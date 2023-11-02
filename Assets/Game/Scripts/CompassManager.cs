using Niantic.ARDK.AR;
using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;

public class CompassManager : MonoBehaviour
{
    [SerializeField] TextMeshProUGUI initialHeadingText;
    
    [SerializeField] private GameObject ARSceneCamera;
    [SerializeField] private Camera _camera;

    public float currentHeading; //stores the current heading of the device
    

    void Start()
    {
        InitializeGame();
        _camera = ARSceneCamera.GetComponent<Camera>();
    }

    private void InitializeGame()
    {
        if (!SystemInfo.supportsAccelerometer || !SystemInfo.supportsGyroscope)
        {
            Debug.Log("Accelerometer or Compass not supported on this device");
            return;
        }

        // Enable the device's accelerometer and magnetometer
        Input.compass.enabled = true;
        return;
    }
    public int GetCurrentHeading()
    {
        int currentHeadingInt = (int)Input.compass.trueHeading;

        return currentHeadingInt;

    }

    void Update()
    {
        
        float actualheading = Input.compass.trueHeading;
        string actualheadingstr = actualheading.ToString("F1");
        initialHeadingText.text = "actual heading = " + actualheadingstr;

    }
}
