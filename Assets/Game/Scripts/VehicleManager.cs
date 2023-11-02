using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class VehicleManager : MonoBehaviour
{
    public GameObject Vehicle;

    public List<GameObject> ActiveVehicles = new List<GameObject>(); //list of spawned vehicles that need rotation and location updates

    public Camera ARcamera;

    // Start is called before the first frame update
    void Start()
    {
        OnGameStart();
    }

    public void OnGameStart()
    {
        ActiveVehicles.Clear();

        //spawn the vehicle
        GameObject newVehicle = Instantiate(Vehicle, Vector3.zero, Quaternion.identity);
        ActiveVehicles.Add(newVehicle);

        //spawn the hud once 
    }

    public void VehiclePositioner()
    {
        if (ARcamera != null)
        {
            if (ActiveVehicles.Count > 0)
            {
                foreach (GameObject vehicle in ActiveVehicles)
                {
                    Vector3 trackedPos = Camera.main.transform.position;
                    trackedPos.y -= 0.2f; //instert lerp later
                    vehicle.transform.position = trackedPos;
                }
            }
        }
        else
        {
            Debug.Log("AR camera not found");
        }
    }

    public void VehicleRotationer()
    {
        if (ARcamera != null)
        {
            if (ActiveVehicles.Count > 0)
            {
                foreach (GameObject vehicle in ActiveVehicles)
                {
                    
                    // Get the current rotation in euler angles
                    Vector3 currentRotation = vehicle.transform.rotation.eulerAngles;

                    // Get the target rotation in euler angles
                    Vector3 cameraRotation = ARcamera.transform.rotation.eulerAngles;

                    // Replace the y component of the current rotation with the y component of the target rotation
                    Vector3 targetRotation = new Vector3(currentRotation.x, cameraRotation.y, currentRotation.z);

                    // Convert back to a Quaternion
                    Quaternion targetQuaternion = Quaternion.Euler(targetRotation);

                    // Lerp the current rotation towards the target rotation
                    float rotationSpeed = 0.1f; // Adjust speed as needed
                    vehicle.transform.rotation = Quaternion.Lerp(vehicle.transform.rotation, targetQuaternion, rotationSpeed);

                    //vehicle.transform.rotation = ARcamera.transform.rotation;
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
        VehiclePositioner();
        VehicleRotationer();
    }
}
