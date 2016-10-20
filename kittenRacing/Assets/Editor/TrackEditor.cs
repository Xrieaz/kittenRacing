using UnityEditor;
using UnityEngine;
using System.Collections;

[CustomEditor(typeof(Track))]
public class TrackEditor : Editor
{

	public override void OnInspectorGUI ()
	{
		base.OnInspectorGUI();

		Track track = (Track)target;

		if(GUILayout.Button("Add Segment")) {

			track.AddSegment();
		}
	}
}