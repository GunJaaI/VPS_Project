using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class CanvasController : MonoBehaviour
{
    public GameObject _Caller;
    public Text _GetText;
    public string _ShowingText;

    public void _AddText()
    {
        _GetText.text = _ShowingText+"";
    }

    public void _CloseBtm()
    {
        _Caller.GetComponent<ShowingCanvas>()._isCreate = false;
        Destroy(this.gameObject);
    }
}
