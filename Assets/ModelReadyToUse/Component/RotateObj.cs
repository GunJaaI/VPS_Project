using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateObj : MonoBehaviour
{
    public _Axis _AxisRot;
    public float _Speed = 0.5f;
    public enum _Axis
    {
        Y,
        Z
    }
    // Update is called once per frame
    void Update()
    {   
        if (_AxisRot == _Axis.Y)
        {
            this.transform.localEulerAngles += new Vector3(0, _Speed, 0);
        }
        else if (_AxisRot == _Axis.Z)
        {
            this.transform.localEulerAngles += new Vector3(0, 0, _Speed);
        }

    }
}
