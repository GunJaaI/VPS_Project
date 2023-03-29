using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ShowingCanvas : MonoBehaviour
{
    public string _Text = "Add Information Here.";
    public void OnEnable()
    {
        this.gameObject.AddComponent<MeshCollider>();
        this.gameObject.AddComponent<Rigidbody>();
        this.gameObject.tag = "CanvasHit";
        GetComponent<Rigidbody>().isKinematic = true;
    }

    public void FixedUpdate()
    {

        if ((Input.touchCount > 0) && (Input.GetTouch(0).phase == TouchPhase.Began))
        {
            Ray raycast = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);
            RaycastHit raycastHit;

            // if (Input.GetMouseButtonDown(0))
            // {
            if (Physics.Raycast(raycast, out raycastHit))
            {
                Debug.Log("hit: A " + raycastHit.collider.gameObject.name);
                if (raycastHit.collider.CompareTag("CanvasHit"))
                {
                    Debug.Log("hit: B " + raycastHit.collider.gameObject.name);
                    _CreateCanvas();
                }
            }
        }



        /*if (Input.GetMouseButton(0))
        {
            _CreateCanvas();
        }*/
    }

    [HideInInspector]
    public bool _isCreate;
    public void _CreateCanvas()
    {
        if (!_isCreate)
        {
            
            GameObject obj = Instantiate(Resources.Load("Canvas")) as GameObject;
            obj.GetComponent<CanvasController>()._Caller = this.gameObject;
            obj.GetComponent<CanvasController>()._ShowingText = _Text;
            obj.GetComponent<CanvasController>()._AddText();
            _isCreate = true;
            //Instantiate(_Canvas, this.transform);
        }
    }
}
