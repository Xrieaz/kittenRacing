#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_t1659122786;
// TrackBuildRPoint
struct TrackBuildRPoint_t4137046561;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t701588350;
// System.Boolean[]
struct BooleanU5BU5D_t3456302923;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// TrackBuildRUtil.DynamicMesh
struct DynamicMesh_t574034906;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TrackBuildRPoint
struct  TrackBuildRPoint_t4137046561  : public MonoBehaviour_t667441552
{
public:
	// System.String TrackBuildRPoint::pointName
	String_t* ___pointName_2;
	// UnityEngine.Transform TrackBuildRPoint::baseTransform
	Transform_t1659122786 * ___baseTransform_3;
	// UnityEngine.Vector3 TrackBuildRPoint::_position
	Vector3_t4282066566  ____position_4;
	// System.Single TrackBuildRPoint::_width
	float ____width_5;
	// System.Single TrackBuildRPoint::_crownAngle
	float ____crownAngle_6;
	// System.Boolean TrackBuildRPoint::_splitControlPoints
	bool ____splitControlPoints_7;
	// UnityEngine.Vector3 TrackBuildRPoint::_forwardControlPoint
	Vector3_t4282066566  ____forwardControlPoint_8;
	// UnityEngine.Vector3 TrackBuildRPoint::_backwardControlPoint
	Vector3_t4282066566  ____backwardControlPoint_9;
	// UnityEngine.Vector3 TrackBuildRPoint::_leftTrackBoundary
	Vector3_t4282066566  ____leftTrackBoundary_10;
	// UnityEngine.Vector3 TrackBuildRPoint::_leftForwardControlPoint
	Vector3_t4282066566  ____leftForwardControlPoint_11;
	// UnityEngine.Vector3 TrackBuildRPoint::_leftBackwardControlPoint
	Vector3_t4282066566  ____leftBackwardControlPoint_12;
	// System.Boolean TrackBuildRPoint::_leftSplitControlPoints
	bool ____leftSplitControlPoints_13;
	// UnityEngine.Vector3 TrackBuildRPoint::_rightTrackBoundary
	Vector3_t4282066566  ____rightTrackBoundary_14;
	// UnityEngine.Vector3 TrackBuildRPoint::_rightForwardControlPoint
	Vector3_t4282066566  ____rightForwardControlPoint_15;
	// UnityEngine.Vector3 TrackBuildRPoint::_rightBackwardControlPoint
	Vector3_t4282066566  ____rightBackwardControlPoint_16;
	// System.Boolean TrackBuildRPoint::_rightSplitControlPoints
	bool ____rightSplitControlPoints_17;
	// UnityEngine.Vector3 TrackBuildRPoint::_trackDirection
	Vector3_t4282066566  ____trackDirection_18;
	// UnityEngine.Quaternion TrackBuildRPoint::_trackUpQ
	Quaternion_t1553702882  ____trackUpQ_19;
	// UnityEngine.Vector3 TrackBuildRPoint::_trackCross
	Vector3_t4282066566  ____trackCross_20;
	// System.Boolean TrackBuildRPoint::_isDirty
	bool ____isDirty_21;
	// System.Boolean TrackBuildRPoint::shouldReRender
	bool ___shouldReRender_22;
	// TrackBuildRPoint TrackBuildRPoint::lastPoint
	TrackBuildRPoint_t4137046561 * ___lastPoint_23;
	// TrackBuildRPoint TrackBuildRPoint::nextPoint
	TrackBuildRPoint_t4137046561 * ___nextPoint_24;
	// UnityEngine.Vector3 TrackBuildRPoint::center
	Vector3_t4282066566  ___center_25;
	// System.Int32 TrackBuildRPoint::storedPointSize
	int32_t ___storedPointSize_26;
	// System.Single TrackBuildRPoint::arcLength
	float ___arcLength_27;
	// System.Boolean TrackBuildRPoint::_render
	bool ____render_28;
	// System.Boolean TrackBuildRPoint::_renderBounds
	bool ____renderBounds_29;
	// System.Boolean TrackBuildRPoint::_trackCollider
	bool ____trackCollider_30;
	// System.Boolean TrackBuildRPoint::_colliderSides
	bool ____colliderSides_31;
	// System.Boolean TrackBuildRPoint::_extrudeTrack
	bool ____extrudeTrack_32;
	// System.Single TrackBuildRPoint::_extrudeLength
	float ____extrudeLength_33;
	// System.Boolean TrackBuildRPoint::_extrudeTrackBottom
	bool ____extrudeTrackBottom_34;
	// System.Boolean TrackBuildRPoint::_extrudeCurveEnd
	bool ____extrudeCurveEnd_35;
	// System.Single TrackBuildRPoint::_extrudeBevel
	float ____extrudeBevel_36;
	// System.Boolean TrackBuildRPoint::_generateBumpers
	bool ____generateBumpers_37;
	// System.Single[] TrackBuildRPoint::storedArcLengths
	SingleU5BU5D_t2316563989* ___storedArcLengths_38;
	// System.Single[] TrackBuildRPoint::storedArcLengthsFull
	SingleU5BU5D_t2316563989* ___storedArcLengthsFull_39;
	// System.Int32 TrackBuildRPoint::storedArcLengthArraySize
	int32_t ___storedArcLengthArraySize_40;
	// System.Single[] TrackBuildRPoint::normalisedT
	SingleU5BU5D_t2316563989* ___normalisedT_41;
	// System.Single TrackBuildRPoint::_boundaryHeight
	float ____boundaryHeight_42;
	// System.Single[] TrackBuildRPoint::midPointPerc
	SingleU5BU5D_t2316563989* ___midPointPerc_43;
	// System.Single[] TrackBuildRPoint::targetSize
	SingleU5BU5D_t2316563989* ___targetSize_44;
	// System.Int32[] TrackBuildRPoint::prevNormIndex
	Int32U5BU5D_t3230847821* ___prevNormIndex_45;
	// System.Int32[] TrackBuildRPoint::nextNormIndex
	Int32U5BU5D_t3230847821* ___nextNormIndex_46;
	// UnityEngine.Vector3[] TrackBuildRPoint::sampledPoints
	Vector3U5BU5D_t215400611* ___sampledPoints_47;
	// System.Single[] TrackBuildRPoint::sampledWidths
	SingleU5BU5D_t2316563989* ___sampledWidths_48;
	// System.Single[] TrackBuildRPoint::sampledCrowns
	SingleU5BU5D_t2316563989* ___sampledCrowns_49;
	// UnityEngine.Vector3[] TrackBuildRPoint::sampledLeftBoundaryPoints
	Vector3U5BU5D_t215400611* ___sampledLeftBoundaryPoints_50;
	// UnityEngine.Vector3[] TrackBuildRPoint::sampledRightBoundaryPoints
	Vector3U5BU5D_t215400611* ___sampledRightBoundaryPoints_51;
	// UnityEngine.Vector3[] TrackBuildRPoint::sampledTrackDirections
	Vector3U5BU5D_t215400611* ___sampledTrackDirections_52;
	// UnityEngine.Vector3[] TrackBuildRPoint::sampledTrackUps
	Vector3U5BU5D_t215400611* ___sampledTrackUps_53;
	// UnityEngine.Vector3[] TrackBuildRPoint::sampledTrackCrosses
	Vector3U5BU5D_t215400611* ___sampledTrackCrosses_54;
	// UnityEngine.Vector4[] TrackBuildRPoint::sampledTrackTangents
	Vector4U5BU5D_t701588350* ___sampledTrackTangents_55;
	// System.Single[] TrackBuildRPoint::sampledAngles
	SingleU5BU5D_t2316563989* ___sampledAngles_56;
	// System.Boolean[] TrackBuildRPoint::clipArrayLeft
	BooleanU5BU5D_t3456302923* ___clipArrayLeft_57;
	// System.Boolean[] TrackBuildRPoint::clipArrayRight
	BooleanU5BU5D_t3456302923* ___clipArrayRight_58;
	// UnityEngine.GameObject TrackBuildRPoint::holder
	GameObject_t3674682005 * ___holder_59;
	// TrackBuildRUtil.DynamicMesh TrackBuildRPoint::dynamicTrackMesh
	DynamicMesh_t574034906 * ___dynamicTrackMesh_60;
	// TrackBuildRUtil.DynamicMesh TrackBuildRPoint::dynamicBoundaryMesh
	DynamicMesh_t574034906 * ___dynamicBoundaryMesh_61;
	// TrackBuildRUtil.DynamicMesh TrackBuildRPoint::dynamicOffroadMesh
	DynamicMesh_t574034906 * ___dynamicOffroadMesh_62;
	// TrackBuildRUtil.DynamicMesh TrackBuildRPoint::dynamicBumperMesh
	DynamicMesh_t574034906 * ___dynamicBumperMesh_63;
	// TrackBuildRUtil.DynamicMesh TrackBuildRPoint::dynamicColliderMesh1
	DynamicMesh_t574034906 * ___dynamicColliderMesh1_64;
	// TrackBuildRUtil.DynamicMesh TrackBuildRPoint::dynamicColliderMesh2
	DynamicMesh_t574034906 * ___dynamicColliderMesh2_65;
	// TrackBuildRUtil.DynamicMesh TrackBuildRPoint::dynamicColliderMesh3
	DynamicMesh_t574034906 * ___dynamicColliderMesh3_66;
	// TrackBuildRUtil.DynamicMesh TrackBuildRPoint::dynamicColliderMesh4
	DynamicMesh_t574034906 * ___dynamicColliderMesh4_67;
	// TrackBuildRUtil.DynamicMesh TrackBuildRPoint::dynamicBottomMesh
	DynamicMesh_t574034906 * ___dynamicBottomMesh_68;
	// System.Int32 TrackBuildRPoint::trackTextureStyleIndex
	int32_t ___trackTextureStyleIndex_69;
	// System.Int32 TrackBuildRPoint::offroadTextureStyleIndex
	int32_t ___offroadTextureStyleIndex_70;
	// System.Int32 TrackBuildRPoint::boundaryTextureStyleIndex
	int32_t ___boundaryTextureStyleIndex_71;
	// System.Int32 TrackBuildRPoint::bumperTextureStyleIndex
	int32_t ___bumperTextureStyleIndex_72;
	// System.Int32 TrackBuildRPoint::bottomTextureStyleIndex
	int32_t ___bottomTextureStyleIndex_73;

public:
	inline static int32_t get_offset_of_pointName_2() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___pointName_2)); }
	inline String_t* get_pointName_2() const { return ___pointName_2; }
	inline String_t** get_address_of_pointName_2() { return &___pointName_2; }
	inline void set_pointName_2(String_t* value)
	{
		___pointName_2 = value;
		Il2CppCodeGenWriteBarrier(&___pointName_2, value);
	}

	inline static int32_t get_offset_of_baseTransform_3() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___baseTransform_3)); }
	inline Transform_t1659122786 * get_baseTransform_3() const { return ___baseTransform_3; }
	inline Transform_t1659122786 ** get_address_of_baseTransform_3() { return &___baseTransform_3; }
	inline void set_baseTransform_3(Transform_t1659122786 * value)
	{
		___baseTransform_3 = value;
		Il2CppCodeGenWriteBarrier(&___baseTransform_3, value);
	}

	inline static int32_t get_offset_of__position_4() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ____position_4)); }
	inline Vector3_t4282066566  get__position_4() const { return ____position_4; }
	inline Vector3_t4282066566 * get_address_of__position_4() { return &____position_4; }
	inline void set__position_4(Vector3_t4282066566  value)
	{
		____position_4 = value;
	}

	inline static int32_t get_offset_of__width_5() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ____width_5)); }
	inline float get__width_5() const { return ____width_5; }
	inline float* get_address_of__width_5() { return &____width_5; }
	inline void set__width_5(float value)
	{
		____width_5 = value;
	}

	inline static int32_t get_offset_of__crownAngle_6() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ____crownAngle_6)); }
	inline float get__crownAngle_6() const { return ____crownAngle_6; }
	inline float* get_address_of__crownAngle_6() { return &____crownAngle_6; }
	inline void set__crownAngle_6(float value)
	{
		____crownAngle_6 = value;
	}

	inline static int32_t get_offset_of__splitControlPoints_7() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ____splitControlPoints_7)); }
	inline bool get__splitControlPoints_7() const { return ____splitControlPoints_7; }
	inline bool* get_address_of__splitControlPoints_7() { return &____splitControlPoints_7; }
	inline void set__splitControlPoints_7(bool value)
	{
		____splitControlPoints_7 = value;
	}

	inline static int32_t get_offset_of__forwardControlPoint_8() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ____forwardControlPoint_8)); }
	inline Vector3_t4282066566  get__forwardControlPoint_8() const { return ____forwardControlPoint_8; }
	inline Vector3_t4282066566 * get_address_of__forwardControlPoint_8() { return &____forwardControlPoint_8; }
	inline void set__forwardControlPoint_8(Vector3_t4282066566  value)
	{
		____forwardControlPoint_8 = value;
	}

	inline static int32_t get_offset_of__backwardControlPoint_9() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ____backwardControlPoint_9)); }
	inline Vector3_t4282066566  get__backwardControlPoint_9() const { return ____backwardControlPoint_9; }
	inline Vector3_t4282066566 * get_address_of__backwardControlPoint_9() { return &____backwardControlPoint_9; }
	inline void set__backwardControlPoint_9(Vector3_t4282066566  value)
	{
		____backwardControlPoint_9 = value;
	}

	inline static int32_t get_offset_of__leftTrackBoundary_10() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ____leftTrackBoundary_10)); }
	inline Vector3_t4282066566  get__leftTrackBoundary_10() const { return ____leftTrackBoundary_10; }
	inline Vector3_t4282066566 * get_address_of__leftTrackBoundary_10() { return &____leftTrackBoundary_10; }
	inline void set__leftTrackBoundary_10(Vector3_t4282066566  value)
	{
		____leftTrackBoundary_10 = value;
	}

	inline static int32_t get_offset_of__leftForwardControlPoint_11() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ____leftForwardControlPoint_11)); }
	inline Vector3_t4282066566  get__leftForwardControlPoint_11() const { return ____leftForwardControlPoint_11; }
	inline Vector3_t4282066566 * get_address_of__leftForwardControlPoint_11() { return &____leftForwardControlPoint_11; }
	inline void set__leftForwardControlPoint_11(Vector3_t4282066566  value)
	{
		____leftForwardControlPoint_11 = value;
	}

	inline static int32_t get_offset_of__leftBackwardControlPoint_12() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ____leftBackwardControlPoint_12)); }
	inline Vector3_t4282066566  get__leftBackwardControlPoint_12() const { return ____leftBackwardControlPoint_12; }
	inline Vector3_t4282066566 * get_address_of__leftBackwardControlPoint_12() { return &____leftBackwardControlPoint_12; }
	inline void set__leftBackwardControlPoint_12(Vector3_t4282066566  value)
	{
		____leftBackwardControlPoint_12 = value;
	}

	inline static int32_t get_offset_of__leftSplitControlPoints_13() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ____leftSplitControlPoints_13)); }
	inline bool get__leftSplitControlPoints_13() const { return ____leftSplitControlPoints_13; }
	inline bool* get_address_of__leftSplitControlPoints_13() { return &____leftSplitControlPoints_13; }
	inline void set__leftSplitControlPoints_13(bool value)
	{
		____leftSplitControlPoints_13 = value;
	}

	inline static int32_t get_offset_of__rightTrackBoundary_14() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ____rightTrackBoundary_14)); }
	inline Vector3_t4282066566  get__rightTrackBoundary_14() const { return ____rightTrackBoundary_14; }
	inline Vector3_t4282066566 * get_address_of__rightTrackBoundary_14() { return &____rightTrackBoundary_14; }
	inline void set__rightTrackBoundary_14(Vector3_t4282066566  value)
	{
		____rightTrackBoundary_14 = value;
	}

	inline static int32_t get_offset_of__rightForwardControlPoint_15() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ____rightForwardControlPoint_15)); }
	inline Vector3_t4282066566  get__rightForwardControlPoint_15() const { return ____rightForwardControlPoint_15; }
	inline Vector3_t4282066566 * get_address_of__rightForwardControlPoint_15() { return &____rightForwardControlPoint_15; }
	inline void set__rightForwardControlPoint_15(Vector3_t4282066566  value)
	{
		____rightForwardControlPoint_15 = value;
	}

	inline static int32_t get_offset_of__rightBackwardControlPoint_16() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ____rightBackwardControlPoint_16)); }
	inline Vector3_t4282066566  get__rightBackwardControlPoint_16() const { return ____rightBackwardControlPoint_16; }
	inline Vector3_t4282066566 * get_address_of__rightBackwardControlPoint_16() { return &____rightBackwardControlPoint_16; }
	inline void set__rightBackwardControlPoint_16(Vector3_t4282066566  value)
	{
		____rightBackwardControlPoint_16 = value;
	}

	inline static int32_t get_offset_of__rightSplitControlPoints_17() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ____rightSplitControlPoints_17)); }
	inline bool get__rightSplitControlPoints_17() const { return ____rightSplitControlPoints_17; }
	inline bool* get_address_of__rightSplitControlPoints_17() { return &____rightSplitControlPoints_17; }
	inline void set__rightSplitControlPoints_17(bool value)
	{
		____rightSplitControlPoints_17 = value;
	}

	inline static int32_t get_offset_of__trackDirection_18() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ____trackDirection_18)); }
	inline Vector3_t4282066566  get__trackDirection_18() const { return ____trackDirection_18; }
	inline Vector3_t4282066566 * get_address_of__trackDirection_18() { return &____trackDirection_18; }
	inline void set__trackDirection_18(Vector3_t4282066566  value)
	{
		____trackDirection_18 = value;
	}

	inline static int32_t get_offset_of__trackUpQ_19() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ____trackUpQ_19)); }
	inline Quaternion_t1553702882  get__trackUpQ_19() const { return ____trackUpQ_19; }
	inline Quaternion_t1553702882 * get_address_of__trackUpQ_19() { return &____trackUpQ_19; }
	inline void set__trackUpQ_19(Quaternion_t1553702882  value)
	{
		____trackUpQ_19 = value;
	}

	inline static int32_t get_offset_of__trackCross_20() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ____trackCross_20)); }
	inline Vector3_t4282066566  get__trackCross_20() const { return ____trackCross_20; }
	inline Vector3_t4282066566 * get_address_of__trackCross_20() { return &____trackCross_20; }
	inline void set__trackCross_20(Vector3_t4282066566  value)
	{
		____trackCross_20 = value;
	}

	inline static int32_t get_offset_of__isDirty_21() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ____isDirty_21)); }
	inline bool get__isDirty_21() const { return ____isDirty_21; }
	inline bool* get_address_of__isDirty_21() { return &____isDirty_21; }
	inline void set__isDirty_21(bool value)
	{
		____isDirty_21 = value;
	}

	inline static int32_t get_offset_of_shouldReRender_22() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___shouldReRender_22)); }
	inline bool get_shouldReRender_22() const { return ___shouldReRender_22; }
	inline bool* get_address_of_shouldReRender_22() { return &___shouldReRender_22; }
	inline void set_shouldReRender_22(bool value)
	{
		___shouldReRender_22 = value;
	}

	inline static int32_t get_offset_of_lastPoint_23() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___lastPoint_23)); }
	inline TrackBuildRPoint_t4137046561 * get_lastPoint_23() const { return ___lastPoint_23; }
	inline TrackBuildRPoint_t4137046561 ** get_address_of_lastPoint_23() { return &___lastPoint_23; }
	inline void set_lastPoint_23(TrackBuildRPoint_t4137046561 * value)
	{
		___lastPoint_23 = value;
		Il2CppCodeGenWriteBarrier(&___lastPoint_23, value);
	}

	inline static int32_t get_offset_of_nextPoint_24() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___nextPoint_24)); }
	inline TrackBuildRPoint_t4137046561 * get_nextPoint_24() const { return ___nextPoint_24; }
	inline TrackBuildRPoint_t4137046561 ** get_address_of_nextPoint_24() { return &___nextPoint_24; }
	inline void set_nextPoint_24(TrackBuildRPoint_t4137046561 * value)
	{
		___nextPoint_24 = value;
		Il2CppCodeGenWriteBarrier(&___nextPoint_24, value);
	}

	inline static int32_t get_offset_of_center_25() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___center_25)); }
	inline Vector3_t4282066566  get_center_25() const { return ___center_25; }
	inline Vector3_t4282066566 * get_address_of_center_25() { return &___center_25; }
	inline void set_center_25(Vector3_t4282066566  value)
	{
		___center_25 = value;
	}

	inline static int32_t get_offset_of_storedPointSize_26() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___storedPointSize_26)); }
	inline int32_t get_storedPointSize_26() const { return ___storedPointSize_26; }
	inline int32_t* get_address_of_storedPointSize_26() { return &___storedPointSize_26; }
	inline void set_storedPointSize_26(int32_t value)
	{
		___storedPointSize_26 = value;
	}

	inline static int32_t get_offset_of_arcLength_27() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___arcLength_27)); }
	inline float get_arcLength_27() const { return ___arcLength_27; }
	inline float* get_address_of_arcLength_27() { return &___arcLength_27; }
	inline void set_arcLength_27(float value)
	{
		___arcLength_27 = value;
	}

	inline static int32_t get_offset_of__render_28() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ____render_28)); }
	inline bool get__render_28() const { return ____render_28; }
	inline bool* get_address_of__render_28() { return &____render_28; }
	inline void set__render_28(bool value)
	{
		____render_28 = value;
	}

	inline static int32_t get_offset_of__renderBounds_29() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ____renderBounds_29)); }
	inline bool get__renderBounds_29() const { return ____renderBounds_29; }
	inline bool* get_address_of__renderBounds_29() { return &____renderBounds_29; }
	inline void set__renderBounds_29(bool value)
	{
		____renderBounds_29 = value;
	}

	inline static int32_t get_offset_of__trackCollider_30() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ____trackCollider_30)); }
	inline bool get__trackCollider_30() const { return ____trackCollider_30; }
	inline bool* get_address_of__trackCollider_30() { return &____trackCollider_30; }
	inline void set__trackCollider_30(bool value)
	{
		____trackCollider_30 = value;
	}

	inline static int32_t get_offset_of__colliderSides_31() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ____colliderSides_31)); }
	inline bool get__colliderSides_31() const { return ____colliderSides_31; }
	inline bool* get_address_of__colliderSides_31() { return &____colliderSides_31; }
	inline void set__colliderSides_31(bool value)
	{
		____colliderSides_31 = value;
	}

	inline static int32_t get_offset_of__extrudeTrack_32() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ____extrudeTrack_32)); }
	inline bool get__extrudeTrack_32() const { return ____extrudeTrack_32; }
	inline bool* get_address_of__extrudeTrack_32() { return &____extrudeTrack_32; }
	inline void set__extrudeTrack_32(bool value)
	{
		____extrudeTrack_32 = value;
	}

	inline static int32_t get_offset_of__extrudeLength_33() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ____extrudeLength_33)); }
	inline float get__extrudeLength_33() const { return ____extrudeLength_33; }
	inline float* get_address_of__extrudeLength_33() { return &____extrudeLength_33; }
	inline void set__extrudeLength_33(float value)
	{
		____extrudeLength_33 = value;
	}

	inline static int32_t get_offset_of__extrudeTrackBottom_34() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ____extrudeTrackBottom_34)); }
	inline bool get__extrudeTrackBottom_34() const { return ____extrudeTrackBottom_34; }
	inline bool* get_address_of__extrudeTrackBottom_34() { return &____extrudeTrackBottom_34; }
	inline void set__extrudeTrackBottom_34(bool value)
	{
		____extrudeTrackBottom_34 = value;
	}

	inline static int32_t get_offset_of__extrudeCurveEnd_35() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ____extrudeCurveEnd_35)); }
	inline bool get__extrudeCurveEnd_35() const { return ____extrudeCurveEnd_35; }
	inline bool* get_address_of__extrudeCurveEnd_35() { return &____extrudeCurveEnd_35; }
	inline void set__extrudeCurveEnd_35(bool value)
	{
		____extrudeCurveEnd_35 = value;
	}

	inline static int32_t get_offset_of__extrudeBevel_36() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ____extrudeBevel_36)); }
	inline float get__extrudeBevel_36() const { return ____extrudeBevel_36; }
	inline float* get_address_of__extrudeBevel_36() { return &____extrudeBevel_36; }
	inline void set__extrudeBevel_36(float value)
	{
		____extrudeBevel_36 = value;
	}

	inline static int32_t get_offset_of__generateBumpers_37() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ____generateBumpers_37)); }
	inline bool get__generateBumpers_37() const { return ____generateBumpers_37; }
	inline bool* get_address_of__generateBumpers_37() { return &____generateBumpers_37; }
	inline void set__generateBumpers_37(bool value)
	{
		____generateBumpers_37 = value;
	}

	inline static int32_t get_offset_of_storedArcLengths_38() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___storedArcLengths_38)); }
	inline SingleU5BU5D_t2316563989* get_storedArcLengths_38() const { return ___storedArcLengths_38; }
	inline SingleU5BU5D_t2316563989** get_address_of_storedArcLengths_38() { return &___storedArcLengths_38; }
	inline void set_storedArcLengths_38(SingleU5BU5D_t2316563989* value)
	{
		___storedArcLengths_38 = value;
		Il2CppCodeGenWriteBarrier(&___storedArcLengths_38, value);
	}

	inline static int32_t get_offset_of_storedArcLengthsFull_39() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___storedArcLengthsFull_39)); }
	inline SingleU5BU5D_t2316563989* get_storedArcLengthsFull_39() const { return ___storedArcLengthsFull_39; }
	inline SingleU5BU5D_t2316563989** get_address_of_storedArcLengthsFull_39() { return &___storedArcLengthsFull_39; }
	inline void set_storedArcLengthsFull_39(SingleU5BU5D_t2316563989* value)
	{
		___storedArcLengthsFull_39 = value;
		Il2CppCodeGenWriteBarrier(&___storedArcLengthsFull_39, value);
	}

	inline static int32_t get_offset_of_storedArcLengthArraySize_40() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___storedArcLengthArraySize_40)); }
	inline int32_t get_storedArcLengthArraySize_40() const { return ___storedArcLengthArraySize_40; }
	inline int32_t* get_address_of_storedArcLengthArraySize_40() { return &___storedArcLengthArraySize_40; }
	inline void set_storedArcLengthArraySize_40(int32_t value)
	{
		___storedArcLengthArraySize_40 = value;
	}

	inline static int32_t get_offset_of_normalisedT_41() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___normalisedT_41)); }
	inline SingleU5BU5D_t2316563989* get_normalisedT_41() const { return ___normalisedT_41; }
	inline SingleU5BU5D_t2316563989** get_address_of_normalisedT_41() { return &___normalisedT_41; }
	inline void set_normalisedT_41(SingleU5BU5D_t2316563989* value)
	{
		___normalisedT_41 = value;
		Il2CppCodeGenWriteBarrier(&___normalisedT_41, value);
	}

	inline static int32_t get_offset_of__boundaryHeight_42() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ____boundaryHeight_42)); }
	inline float get__boundaryHeight_42() const { return ____boundaryHeight_42; }
	inline float* get_address_of__boundaryHeight_42() { return &____boundaryHeight_42; }
	inline void set__boundaryHeight_42(float value)
	{
		____boundaryHeight_42 = value;
	}

	inline static int32_t get_offset_of_midPointPerc_43() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___midPointPerc_43)); }
	inline SingleU5BU5D_t2316563989* get_midPointPerc_43() const { return ___midPointPerc_43; }
	inline SingleU5BU5D_t2316563989** get_address_of_midPointPerc_43() { return &___midPointPerc_43; }
	inline void set_midPointPerc_43(SingleU5BU5D_t2316563989* value)
	{
		___midPointPerc_43 = value;
		Il2CppCodeGenWriteBarrier(&___midPointPerc_43, value);
	}

	inline static int32_t get_offset_of_targetSize_44() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___targetSize_44)); }
	inline SingleU5BU5D_t2316563989* get_targetSize_44() const { return ___targetSize_44; }
	inline SingleU5BU5D_t2316563989** get_address_of_targetSize_44() { return &___targetSize_44; }
	inline void set_targetSize_44(SingleU5BU5D_t2316563989* value)
	{
		___targetSize_44 = value;
		Il2CppCodeGenWriteBarrier(&___targetSize_44, value);
	}

	inline static int32_t get_offset_of_prevNormIndex_45() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___prevNormIndex_45)); }
	inline Int32U5BU5D_t3230847821* get_prevNormIndex_45() const { return ___prevNormIndex_45; }
	inline Int32U5BU5D_t3230847821** get_address_of_prevNormIndex_45() { return &___prevNormIndex_45; }
	inline void set_prevNormIndex_45(Int32U5BU5D_t3230847821* value)
	{
		___prevNormIndex_45 = value;
		Il2CppCodeGenWriteBarrier(&___prevNormIndex_45, value);
	}

	inline static int32_t get_offset_of_nextNormIndex_46() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___nextNormIndex_46)); }
	inline Int32U5BU5D_t3230847821* get_nextNormIndex_46() const { return ___nextNormIndex_46; }
	inline Int32U5BU5D_t3230847821** get_address_of_nextNormIndex_46() { return &___nextNormIndex_46; }
	inline void set_nextNormIndex_46(Int32U5BU5D_t3230847821* value)
	{
		___nextNormIndex_46 = value;
		Il2CppCodeGenWriteBarrier(&___nextNormIndex_46, value);
	}

	inline static int32_t get_offset_of_sampledPoints_47() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___sampledPoints_47)); }
	inline Vector3U5BU5D_t215400611* get_sampledPoints_47() const { return ___sampledPoints_47; }
	inline Vector3U5BU5D_t215400611** get_address_of_sampledPoints_47() { return &___sampledPoints_47; }
	inline void set_sampledPoints_47(Vector3U5BU5D_t215400611* value)
	{
		___sampledPoints_47 = value;
		Il2CppCodeGenWriteBarrier(&___sampledPoints_47, value);
	}

	inline static int32_t get_offset_of_sampledWidths_48() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___sampledWidths_48)); }
	inline SingleU5BU5D_t2316563989* get_sampledWidths_48() const { return ___sampledWidths_48; }
	inline SingleU5BU5D_t2316563989** get_address_of_sampledWidths_48() { return &___sampledWidths_48; }
	inline void set_sampledWidths_48(SingleU5BU5D_t2316563989* value)
	{
		___sampledWidths_48 = value;
		Il2CppCodeGenWriteBarrier(&___sampledWidths_48, value);
	}

	inline static int32_t get_offset_of_sampledCrowns_49() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___sampledCrowns_49)); }
	inline SingleU5BU5D_t2316563989* get_sampledCrowns_49() const { return ___sampledCrowns_49; }
	inline SingleU5BU5D_t2316563989** get_address_of_sampledCrowns_49() { return &___sampledCrowns_49; }
	inline void set_sampledCrowns_49(SingleU5BU5D_t2316563989* value)
	{
		___sampledCrowns_49 = value;
		Il2CppCodeGenWriteBarrier(&___sampledCrowns_49, value);
	}

	inline static int32_t get_offset_of_sampledLeftBoundaryPoints_50() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___sampledLeftBoundaryPoints_50)); }
	inline Vector3U5BU5D_t215400611* get_sampledLeftBoundaryPoints_50() const { return ___sampledLeftBoundaryPoints_50; }
	inline Vector3U5BU5D_t215400611** get_address_of_sampledLeftBoundaryPoints_50() { return &___sampledLeftBoundaryPoints_50; }
	inline void set_sampledLeftBoundaryPoints_50(Vector3U5BU5D_t215400611* value)
	{
		___sampledLeftBoundaryPoints_50 = value;
		Il2CppCodeGenWriteBarrier(&___sampledLeftBoundaryPoints_50, value);
	}

	inline static int32_t get_offset_of_sampledRightBoundaryPoints_51() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___sampledRightBoundaryPoints_51)); }
	inline Vector3U5BU5D_t215400611* get_sampledRightBoundaryPoints_51() const { return ___sampledRightBoundaryPoints_51; }
	inline Vector3U5BU5D_t215400611** get_address_of_sampledRightBoundaryPoints_51() { return &___sampledRightBoundaryPoints_51; }
	inline void set_sampledRightBoundaryPoints_51(Vector3U5BU5D_t215400611* value)
	{
		___sampledRightBoundaryPoints_51 = value;
		Il2CppCodeGenWriteBarrier(&___sampledRightBoundaryPoints_51, value);
	}

	inline static int32_t get_offset_of_sampledTrackDirections_52() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___sampledTrackDirections_52)); }
	inline Vector3U5BU5D_t215400611* get_sampledTrackDirections_52() const { return ___sampledTrackDirections_52; }
	inline Vector3U5BU5D_t215400611** get_address_of_sampledTrackDirections_52() { return &___sampledTrackDirections_52; }
	inline void set_sampledTrackDirections_52(Vector3U5BU5D_t215400611* value)
	{
		___sampledTrackDirections_52 = value;
		Il2CppCodeGenWriteBarrier(&___sampledTrackDirections_52, value);
	}

	inline static int32_t get_offset_of_sampledTrackUps_53() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___sampledTrackUps_53)); }
	inline Vector3U5BU5D_t215400611* get_sampledTrackUps_53() const { return ___sampledTrackUps_53; }
	inline Vector3U5BU5D_t215400611** get_address_of_sampledTrackUps_53() { return &___sampledTrackUps_53; }
	inline void set_sampledTrackUps_53(Vector3U5BU5D_t215400611* value)
	{
		___sampledTrackUps_53 = value;
		Il2CppCodeGenWriteBarrier(&___sampledTrackUps_53, value);
	}

	inline static int32_t get_offset_of_sampledTrackCrosses_54() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___sampledTrackCrosses_54)); }
	inline Vector3U5BU5D_t215400611* get_sampledTrackCrosses_54() const { return ___sampledTrackCrosses_54; }
	inline Vector3U5BU5D_t215400611** get_address_of_sampledTrackCrosses_54() { return &___sampledTrackCrosses_54; }
	inline void set_sampledTrackCrosses_54(Vector3U5BU5D_t215400611* value)
	{
		___sampledTrackCrosses_54 = value;
		Il2CppCodeGenWriteBarrier(&___sampledTrackCrosses_54, value);
	}

	inline static int32_t get_offset_of_sampledTrackTangents_55() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___sampledTrackTangents_55)); }
	inline Vector4U5BU5D_t701588350* get_sampledTrackTangents_55() const { return ___sampledTrackTangents_55; }
	inline Vector4U5BU5D_t701588350** get_address_of_sampledTrackTangents_55() { return &___sampledTrackTangents_55; }
	inline void set_sampledTrackTangents_55(Vector4U5BU5D_t701588350* value)
	{
		___sampledTrackTangents_55 = value;
		Il2CppCodeGenWriteBarrier(&___sampledTrackTangents_55, value);
	}

	inline static int32_t get_offset_of_sampledAngles_56() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___sampledAngles_56)); }
	inline SingleU5BU5D_t2316563989* get_sampledAngles_56() const { return ___sampledAngles_56; }
	inline SingleU5BU5D_t2316563989** get_address_of_sampledAngles_56() { return &___sampledAngles_56; }
	inline void set_sampledAngles_56(SingleU5BU5D_t2316563989* value)
	{
		___sampledAngles_56 = value;
		Il2CppCodeGenWriteBarrier(&___sampledAngles_56, value);
	}

	inline static int32_t get_offset_of_clipArrayLeft_57() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___clipArrayLeft_57)); }
	inline BooleanU5BU5D_t3456302923* get_clipArrayLeft_57() const { return ___clipArrayLeft_57; }
	inline BooleanU5BU5D_t3456302923** get_address_of_clipArrayLeft_57() { return &___clipArrayLeft_57; }
	inline void set_clipArrayLeft_57(BooleanU5BU5D_t3456302923* value)
	{
		___clipArrayLeft_57 = value;
		Il2CppCodeGenWriteBarrier(&___clipArrayLeft_57, value);
	}

	inline static int32_t get_offset_of_clipArrayRight_58() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___clipArrayRight_58)); }
	inline BooleanU5BU5D_t3456302923* get_clipArrayRight_58() const { return ___clipArrayRight_58; }
	inline BooleanU5BU5D_t3456302923** get_address_of_clipArrayRight_58() { return &___clipArrayRight_58; }
	inline void set_clipArrayRight_58(BooleanU5BU5D_t3456302923* value)
	{
		___clipArrayRight_58 = value;
		Il2CppCodeGenWriteBarrier(&___clipArrayRight_58, value);
	}

	inline static int32_t get_offset_of_holder_59() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___holder_59)); }
	inline GameObject_t3674682005 * get_holder_59() const { return ___holder_59; }
	inline GameObject_t3674682005 ** get_address_of_holder_59() { return &___holder_59; }
	inline void set_holder_59(GameObject_t3674682005 * value)
	{
		___holder_59 = value;
		Il2CppCodeGenWriteBarrier(&___holder_59, value);
	}

	inline static int32_t get_offset_of_dynamicTrackMesh_60() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___dynamicTrackMesh_60)); }
	inline DynamicMesh_t574034906 * get_dynamicTrackMesh_60() const { return ___dynamicTrackMesh_60; }
	inline DynamicMesh_t574034906 ** get_address_of_dynamicTrackMesh_60() { return &___dynamicTrackMesh_60; }
	inline void set_dynamicTrackMesh_60(DynamicMesh_t574034906 * value)
	{
		___dynamicTrackMesh_60 = value;
		Il2CppCodeGenWriteBarrier(&___dynamicTrackMesh_60, value);
	}

	inline static int32_t get_offset_of_dynamicBoundaryMesh_61() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___dynamicBoundaryMesh_61)); }
	inline DynamicMesh_t574034906 * get_dynamicBoundaryMesh_61() const { return ___dynamicBoundaryMesh_61; }
	inline DynamicMesh_t574034906 ** get_address_of_dynamicBoundaryMesh_61() { return &___dynamicBoundaryMesh_61; }
	inline void set_dynamicBoundaryMesh_61(DynamicMesh_t574034906 * value)
	{
		___dynamicBoundaryMesh_61 = value;
		Il2CppCodeGenWriteBarrier(&___dynamicBoundaryMesh_61, value);
	}

	inline static int32_t get_offset_of_dynamicOffroadMesh_62() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___dynamicOffroadMesh_62)); }
	inline DynamicMesh_t574034906 * get_dynamicOffroadMesh_62() const { return ___dynamicOffroadMesh_62; }
	inline DynamicMesh_t574034906 ** get_address_of_dynamicOffroadMesh_62() { return &___dynamicOffroadMesh_62; }
	inline void set_dynamicOffroadMesh_62(DynamicMesh_t574034906 * value)
	{
		___dynamicOffroadMesh_62 = value;
		Il2CppCodeGenWriteBarrier(&___dynamicOffroadMesh_62, value);
	}

	inline static int32_t get_offset_of_dynamicBumperMesh_63() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___dynamicBumperMesh_63)); }
	inline DynamicMesh_t574034906 * get_dynamicBumperMesh_63() const { return ___dynamicBumperMesh_63; }
	inline DynamicMesh_t574034906 ** get_address_of_dynamicBumperMesh_63() { return &___dynamicBumperMesh_63; }
	inline void set_dynamicBumperMesh_63(DynamicMesh_t574034906 * value)
	{
		___dynamicBumperMesh_63 = value;
		Il2CppCodeGenWriteBarrier(&___dynamicBumperMesh_63, value);
	}

	inline static int32_t get_offset_of_dynamicColliderMesh1_64() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___dynamicColliderMesh1_64)); }
	inline DynamicMesh_t574034906 * get_dynamicColliderMesh1_64() const { return ___dynamicColliderMesh1_64; }
	inline DynamicMesh_t574034906 ** get_address_of_dynamicColliderMesh1_64() { return &___dynamicColliderMesh1_64; }
	inline void set_dynamicColliderMesh1_64(DynamicMesh_t574034906 * value)
	{
		___dynamicColliderMesh1_64 = value;
		Il2CppCodeGenWriteBarrier(&___dynamicColliderMesh1_64, value);
	}

	inline static int32_t get_offset_of_dynamicColliderMesh2_65() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___dynamicColliderMesh2_65)); }
	inline DynamicMesh_t574034906 * get_dynamicColliderMesh2_65() const { return ___dynamicColliderMesh2_65; }
	inline DynamicMesh_t574034906 ** get_address_of_dynamicColliderMesh2_65() { return &___dynamicColliderMesh2_65; }
	inline void set_dynamicColliderMesh2_65(DynamicMesh_t574034906 * value)
	{
		___dynamicColliderMesh2_65 = value;
		Il2CppCodeGenWriteBarrier(&___dynamicColliderMesh2_65, value);
	}

	inline static int32_t get_offset_of_dynamicColliderMesh3_66() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___dynamicColliderMesh3_66)); }
	inline DynamicMesh_t574034906 * get_dynamicColliderMesh3_66() const { return ___dynamicColliderMesh3_66; }
	inline DynamicMesh_t574034906 ** get_address_of_dynamicColliderMesh3_66() { return &___dynamicColliderMesh3_66; }
	inline void set_dynamicColliderMesh3_66(DynamicMesh_t574034906 * value)
	{
		___dynamicColliderMesh3_66 = value;
		Il2CppCodeGenWriteBarrier(&___dynamicColliderMesh3_66, value);
	}

	inline static int32_t get_offset_of_dynamicColliderMesh4_67() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___dynamicColliderMesh4_67)); }
	inline DynamicMesh_t574034906 * get_dynamicColliderMesh4_67() const { return ___dynamicColliderMesh4_67; }
	inline DynamicMesh_t574034906 ** get_address_of_dynamicColliderMesh4_67() { return &___dynamicColliderMesh4_67; }
	inline void set_dynamicColliderMesh4_67(DynamicMesh_t574034906 * value)
	{
		___dynamicColliderMesh4_67 = value;
		Il2CppCodeGenWriteBarrier(&___dynamicColliderMesh4_67, value);
	}

	inline static int32_t get_offset_of_dynamicBottomMesh_68() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___dynamicBottomMesh_68)); }
	inline DynamicMesh_t574034906 * get_dynamicBottomMesh_68() const { return ___dynamicBottomMesh_68; }
	inline DynamicMesh_t574034906 ** get_address_of_dynamicBottomMesh_68() { return &___dynamicBottomMesh_68; }
	inline void set_dynamicBottomMesh_68(DynamicMesh_t574034906 * value)
	{
		___dynamicBottomMesh_68 = value;
		Il2CppCodeGenWriteBarrier(&___dynamicBottomMesh_68, value);
	}

	inline static int32_t get_offset_of_trackTextureStyleIndex_69() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___trackTextureStyleIndex_69)); }
	inline int32_t get_trackTextureStyleIndex_69() const { return ___trackTextureStyleIndex_69; }
	inline int32_t* get_address_of_trackTextureStyleIndex_69() { return &___trackTextureStyleIndex_69; }
	inline void set_trackTextureStyleIndex_69(int32_t value)
	{
		___trackTextureStyleIndex_69 = value;
	}

	inline static int32_t get_offset_of_offroadTextureStyleIndex_70() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___offroadTextureStyleIndex_70)); }
	inline int32_t get_offroadTextureStyleIndex_70() const { return ___offroadTextureStyleIndex_70; }
	inline int32_t* get_address_of_offroadTextureStyleIndex_70() { return &___offroadTextureStyleIndex_70; }
	inline void set_offroadTextureStyleIndex_70(int32_t value)
	{
		___offroadTextureStyleIndex_70 = value;
	}

	inline static int32_t get_offset_of_boundaryTextureStyleIndex_71() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___boundaryTextureStyleIndex_71)); }
	inline int32_t get_boundaryTextureStyleIndex_71() const { return ___boundaryTextureStyleIndex_71; }
	inline int32_t* get_address_of_boundaryTextureStyleIndex_71() { return &___boundaryTextureStyleIndex_71; }
	inline void set_boundaryTextureStyleIndex_71(int32_t value)
	{
		___boundaryTextureStyleIndex_71 = value;
	}

	inline static int32_t get_offset_of_bumperTextureStyleIndex_72() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___bumperTextureStyleIndex_72)); }
	inline int32_t get_bumperTextureStyleIndex_72() const { return ___bumperTextureStyleIndex_72; }
	inline int32_t* get_address_of_bumperTextureStyleIndex_72() { return &___bumperTextureStyleIndex_72; }
	inline void set_bumperTextureStyleIndex_72(int32_t value)
	{
		___bumperTextureStyleIndex_72 = value;
	}

	inline static int32_t get_offset_of_bottomTextureStyleIndex_73() { return static_cast<int32_t>(offsetof(TrackBuildRPoint_t4137046561, ___bottomTextureStyleIndex_73)); }
	inline int32_t get_bottomTextureStyleIndex_73() const { return ___bottomTextureStyleIndex_73; }
	inline int32_t* get_address_of_bottomTextureStyleIndex_73() { return &___bottomTextureStyleIndex_73; }
	inline void set_bottomTextureStyleIndex_73(int32_t value)
	{
		___bottomTextureStyleIndex_73 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
