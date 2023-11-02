using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MeshTagger : MonoBehaviour
{
    [SerializeField] public GameObject meshParent;
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        foreach (Transform child in transform)
        {
            child.gameObject.tag = "Mesh";
        }
    }
}
