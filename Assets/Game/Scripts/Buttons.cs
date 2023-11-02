using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
using UnityEngine.SceneManagement;

public class Buttons : MonoBehaviour, IPointerDownHandler, IPointerUpHandler
{

    public void OnPointerDown(PointerEventData eventData)
    {
        throw new System.NotImplementedException();
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        throw new System.NotImplementedException();
    }

    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    public void IWasClicked()
    {
        Debug.Log("Clicked!");

    }
    public void ChangeSceneGame()
    {
        SceneManager.LoadScene(1);
    }
    public void ChangeSceneMenu()
    {
        SceneManager.LoadScene(0);
    }
    public void ChangeSceneEnd()
    {
        SceneManager.LoadScene(2);
    }


}
