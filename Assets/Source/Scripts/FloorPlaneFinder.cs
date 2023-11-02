using Niantic.ARDK.AR;
using Niantic.ARDK.AR.Anchors;
using Niantic.ARDK.Extensions;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.XR.ARCore;

public class FloorPlaneFinder : MonoBehaviour
{
    
    
    public List<IARPlaneAnchor> PlaneAnchors { get; } = new List<IARPlaneAnchor>();
    // Start is called before the first frame update
    public ARPlaneManager planeManager;
    
    
    void Start()
    {
        
    }

    

    // Update is called once per frame
    void Update()
    {
        
    }
}
