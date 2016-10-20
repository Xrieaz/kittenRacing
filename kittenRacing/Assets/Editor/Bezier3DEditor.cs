using UnityEngine;
using System.Collections;
using UnityEditor;
using System.IO;

[CustomEditor(typeof(Bezier3D))]
public class Bezier3DEditor : Editor
{
	public void OnSceneGUI()
	{
		Bezier3D curve = target as Bezier3D;

		Transform handleTransform = curve.transform;
		Quaternion handleRotation = handleTransform.rotation;

		Vector3 p1 = handleTransform.TransformPoint(curve.p1);
		Vector3 p2 = handleTransform.TransformPoint(curve.p2);
		Vector3 p3 = handleTransform.TransformPoint(curve.p3);
		Vector3 p4 = handleTransform.TransformPoint(curve.p4);

		if(curve.prevSegment != null) {

			// P1
			EditorGUI.BeginChangeCheck();
			handleRotation = Handles.DoRotationHandle(handleRotation, p1);
			Handles.color = Color.red;
			Handles.SphereCap(0, p1, Quaternion.identity, 3f);

			if (EditorGUI.EndChangeCheck()) 
			{
				curve.p1 = handleTransform.InverseTransformPoint(p1);

				float rotation = handleRotation.eulerAngles.z;

				if(rotation > 50 && rotation < 180) {

					rotation = 50;
				}

				if(rotation > 180 && rotation < 310) {

					rotation = 310;
				}

				if(rotation >= 310) {

					rotation = -360 + rotation;
				}

				curve.rotationP1 = rotation;
				curve.ReDrawMesh();

				curve.UpdateMesh();
			}

			// P2
			EditorGUI.BeginChangeCheck();
			p2 = Handles.DoPositionHandle(p2, handleRotation);
			Handles.color = Color.gray;
			Handles.SphereCap(0, p2, Quaternion.identity, 1.5f);

			if (EditorGUI.EndChangeCheck()) 
			{
				curve.p2 = handleTransform.InverseTransformPoint(p2);
				curve.ReDrawMesh();
			}

			Handles.color = Color.gray;
			Handles.DrawLine(p1, p2);
		}
			
		// P3
		EditorGUI.BeginChangeCheck();
		p3 = Handles.DoPositionHandle(p3, handleRotation);
		Handles.color = Color.gray;
		Handles.SphereCap(0, p3, Quaternion.identity, 1.5f);

		if (EditorGUI.EndChangeCheck()) 
		{
			curve.p3 = handleTransform.InverseTransformPoint(p3);

			curve.UpdateMesh();
		}
			
	
		// P4
		EditorGUI.BeginChangeCheck();
		p4 = Handles.DoPositionHandle(p4, handleRotation);
		Handles.color = Color.gray;
		Handles.SphereCap(0, p4, Quaternion.identity, 3f);

		if (EditorGUI.EndChangeCheck()) 
		{
			curve.p4 = handleTransform.InverseTransformPoint(p4);

			curve.UpdateMesh();
		}

		Handles.color = Color.gray;
		Handles.DrawLine(p3, p4);
	}
}