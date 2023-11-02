using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpearController : MonoBehaviour
{
    public Vector3 Position { get; set; }
    public float Score { get; set; }
    [SerializeField] private Rigidbody rb;
    [SerializeField] private BoxCollider bcSpear;
    [SerializeField] private CapsuleCollider bcSpearTip;

    [SerializeField] private AudioClip[] audioClips; 
    private AudioSource audioSource;

    // Start is called before the first frame update
    void Start()
    {
        // Get the Rigidbody component and collider
        rb = GetComponent<Rigidbody>();
        bcSpear = GetComponent<BoxCollider>();
        bcSpearTip = GetComponent<CapsuleCollider>();
        
        //set the audiosource of the spear with the array of clips
        

        bcSpear.enabled = false;
        bcSpearTip.enabled = false;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.tag == "Mesh")
        {
            Debug.Log("Hit Mesh");
            rb.isKinematic = true;

            // Play the sound
            audioSource = GetComponent<AudioSource>();
            int randomIndex = UnityEngine.Random.Range(0, audioClips.Length);
            AudioClip randomClip = audioClips[randomIndex];

            audioSource.clip = randomClip;
            audioSource.Play();
            Debug.Log("Sound played");
            //disble the audio source

            //disable the boxcollider
            bcSpear.enabled = false;
            bcSpearTip.enabled = false;


        }

    }
    private void PropelForward(float speed)
    {
        // This will make the spear be shot upwards at a 45 degree angle
        Vector3 direction = (transform.forward + (transform.up / 2)).normalized;

        // Make sure the speed is limited
        if (speed > 25)
        {
            speed = 25;
        }

        // Calculate the force vector
        Vector3 force = direction * speed;


        // Apply the force to the Rigidbody
        rb.AddForce(force, ForceMode.Impulse);


        
        Debug.Log("Shot Actual speed: " + speed);
    }
    public void ShootObject(float impuls)
    {
        
        bcSpear.enabled = true;
        bcSpearTip.enabled = true;
        PropelForward(impuls);
        Debug.Log("impuls: " + impuls);
    }


}
