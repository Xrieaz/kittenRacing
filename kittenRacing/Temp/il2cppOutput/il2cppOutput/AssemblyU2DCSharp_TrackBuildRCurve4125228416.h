#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TrackBuildRPoint
struct TrackBuildRPoint_t4137046561;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// System.Int32[]
struct Int32U5BU5D_t3230847821;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// System.Boolean[]
struct BooleanU5BU5D_t3456302923;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// TrackBuildRUtil.DynamicMesh
struct DynamicMesh_t574034906;

#include "UnityEngine_UnityEngine_ScriptableObject2970544072.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TrackBuildRCurve
struct  TrackBuildRCurve_t4125228416  : public ScriptableObject_t2970544072
{
public:
	// TrackBuildRPoint TrackBuildRCurve::pointA
	TrackBuildRPoint_t4137046561 * ___pointA_2;
	// TrackBuildRPoint TrackBuildRCurve::pointB
	TrackBuildRPoint_t4137046561 * ___pointB_3;
	// UnityEngine.Vector3 TrackBuildRCurve::center
	Vector3_t4282066566  ___center_4;
	// System.Int32 TrackBuildRCurve::storedPointSize
	int32_t ___storedPointSize_5;
	// System.Single TrackBuildRCurve::arcLength
	float ___arcLength_6;
	// System.Single[] TrackBuildRCurve::storedArcLengths
	SingleU5BU5D_t2316563989* ___storedArcLengths_7;
	// System.Single[] TrackBuildRCurve::storedArcLengthsFull
	SingleU5BU5D_t2316563989* ___storedArcLengthsFull_8;
	// System.Int32 TrackBuildRCurve::storedArcLengthArraySize
	int32_t ___storedArcLengthArraySize_9;
	// System.Single[] TrackBuildRCurve::normalisedT
	SingleU5BU5D_t2316563989* ___normalisedT_10;
	// System.Single TrackBuildRCurve::boundaryHeight
	float ___boundaryHeight_11;
	// System.Single[] TrackBuildRCurve::midPointPerc
	SingleU5BU5D_t2316563989* ___midPointPerc_12;
	// System.Single[] TrackBuildRCurve::targetSize
	SingleU5BU5D_t2316563989* ___targetSize_13;
	// System.Int32[] TrackBuildRCurve::prevNormIndex
	Int32U5BU5D_t3230847821* ___prevNormIndex_14;
	// System.Int32[] TrackBuildRCurve::nextNormIndex
	Int32U5BU5D_t3230847821* ___nextNormIndex_15;
	// UnityEngine.Vector3[] TrackBuildRCurve::sampledPoints
	Vector3U5BU5D_t215400611* ___sampledPoints_16;
	// System.Single[] TrackBuildRCurve::sampledCants
	SingleU5BU5D_t2316563989* ___sampledCants_17;
	// System.Single[] TrackBuildRCurve::sampledWidths
	SingleU5BU5D_t2316563989* ___sampledWidths_18;
	// System.Single[] TrackBuildRCurve::sampledCrowns
	SingleU5BU5D_t2316563989* ___sampledCrowns_19;
	// UnityEngine.Vector3[] TrackBuildRCurve::sampledLeftBoundaryPoints
	Vector3U5BU5D_t215400611* ___sampledLeftBoundaryPoints_20;
	// UnityEngine.Vector3[] TrackBuildRCurve::sampledRightBoundaryPoints
	Vector3U5BU5D_t215400611* ___sampledRightBoundaryPoints_21;
	// UnityEngine.Vector3[] TrackBuildRCurve::sampledTrackDirections
	Vector3U5BU5D_t215400611* ___sampledTrackDirections_22;
	// UnityEngine.Vector3[] TrackBuildRCurve::sampledTrackUps
	Vector3U5BU5D_t215400611* ___sampledTrackUps_23;
	// UnityEngine.Vector3[] TrackBuildRCurve::sampledTrackCrosses
	Vector3U5BU5D_t215400611* ___sampledTrackCrosses_24;
	// System.Single[] TrackBuildRCurve::sampledAngles
	SingleU5BU5D_t2316563989* ___sampledAngles_25;
	// System.Boolean[] TrackBuildRCurve::clipArrayLeft
	BooleanU5BU5D_t3456302923* ___clipArrayLeft_26;
	// System.Boolean[] TrackBuildRCurve::clipArrayRight
	BooleanU5BU5D_t3456302923* ___clipArrayRight_27;
	// UnityEngine.GameObject TrackBuildRCurve::holder
	GameObject_t3674682005 * ___holder_28;
	// TrackBuildRUtil.DynamicMesh TrackBuildRCurve::dynamicTrackMesh
	DynamicMesh_t574034906 * ___dynamicTrackMesh_29;
	// TrackBuildRUtil.DynamicMesh TrackBuildRCurve::dynamicBoundaryMesh
	DynamicMesh_t574034906 * ___dynamicBoundaryMesh_30;
	// TrackBuildRUtil.DynamicMesh TrackBuildRCurve::dynamicOffroadMesh
	DynamicMesh_t574034906 * ___dynamicOffroadMesh_31;
	// TrackBuildRUtil.DynamicMesh TrackBuildRCurve::dynamicBumperMesh
	DynamicMesh_t574034906 * ___dynamicBumperMesh_32;
	// TrackBuildRUtil.DynamicMesh TrackBuildRCurve::dynamicColliderMesh
	DynamicMesh_t574034906 * ___dynamicColliderMesh_33;
	// System.Int32 TrackBuildRCurve::trackTextureStyleIndex
	int32_t ___trackTextureStyleIndex_34;
	// System.Int32 TrackBuildRCurve::offroadTextureStyleIndex
	int32_t ___offroadTextureStyleIndex_35;
	// System.Int32 TrackBuildRCurve::boundaryTextureStyleIndex
	int32_t ___boundaryTextureStyleIndex_36;
	// System.Int32 TrackBuildRCurve::bumperTextureStyleIndex
	int32_t ___bumperTextureStyleIndex_37;

public:
	inline static int32_t get_offset_of_pointA_2() { return static_cast<int32_t>(offsetof(TrackBuildRCurve_t4125228416, ___pointA_2)); }
	inline TrackBuildRPoint_t4137046561 * get_pointA_2() const { return ___pointA_2; }
	inline TrackBuildRPoint_t4137046561 ** get_address_of_pointA_2() { return &___pointA_2; }
	inline void set_pointA_2(TrackBuildRPoint_t4137046561 * value)
	{
		___pointA_2 = value;
		Il2CppCodeGenWriteBarrier(&___pointA_2, value);
	}

	inline static int32_t get_offset_of_pointB_3() { return static_cast<int32_t>(offsetof(TrackBuildRCurve_t4125228416, ___pointB_3)); }
	inline TrackBuildRPoint_t4137046561 * get_pointB_3() const { return ___pointB_3; }
	inline TrackBuildRPoint_t4137046561 ** get_address_of_pointB_3() { return &___pointB_3; }
	inline void set_pointB_3(TrackBuildRPoint_t4137046561 * value)
	{
		___pointB_3 = value;
		Il2CppCodeGenWriteBarrier(&___pointB_3, value);
	}

	inline static int32_t get_offset_of_center_4() { return static_cast<int32_t>(offsetof(TrackBuildRCurve_t4125228416, ___center_4)); }
	inline Vector3_t4282066566  get_center_4() const { return ___center_4; }
	inline Vector3_t4282066566 * get_address_of_center_4() { return &___center_4; }
	inline void set_center_4(Vector3_t4282066566  value)
	{
		___center_4 = value;
	}

	inline static int32_t get_offset_of_storedPointSize_5() { return static_cast<int32_t>(offsetof(TrackBuildRCurve_t4125228416, ___storedPointSize_5)); }
	inline int32_t get_storedPointSize_5() const { return ___storedPointSize_5; }
	inline int32_t* get_address_of_storedPointSize_5() { return &___storedPointSize_5; }
	inline void set_storedPointSize_5(int32_t value)
	{
		___storedPointSize_5 = value;
	}

	inline static int32_t get_offset_of_arcLength_6() { return static_cast<int32_t>(offsetof(TrackBuildRCurve_t4125228416, ___arcLength_6)); }
	inline float get_arcLength_6() const { return ___arcLength_6; }
	inline float* get_address_of_arcLength_6() { return &___arcLength_6; }
	inline void set_arcLength_6(float value)
	{
		___arcLength_6 = value;
	}

	inline static int32_t get_offset_of_storedArcLengths_7() { return static_cast<int32_t>(offsetof(TrackBuildRCurve_t4125228416, ___storedArcLengths_7)); }
	inline SingleU5BU5D_t2316563989* get_storedArcLengths_7() const { return ___storedArcLengths_7; }
	inline SingleU5BU5D_t2316563989** get_address_of_storedArcLengths_7() { return &___storedArcLengths_7; }
	inline void set_storedArcLengths_7(SingleU5BU5D_t2316563989* value)
	{
		___storedArcLengths_7 = value;
		Il2CppCodeGenWriteBarrier(&___storedArcLengths_7, value);
	}

	inline static int32_t get_offset_of_storedArcLengthsFull_8() { return static_cast<int32_t>(offsetof(TrackBuildRCurve_t4125228416, ___storedArcLengthsFull_8)); }
	inline SingleU5BU5D_t2316563989* get_storedArcLengthsFull_8() const { return ___storedArcLengthsFull_8; }
	inline SingleU5BU5D_t2316563989** get_address_of_storedArcLengthsFull_8() { return &___storedArcLengthsFull_8; }
	inline void set_storedArcLengthsFull_8(SingleU5BU5D_t2316563989* value)
	{
		___storedArcLengthsFull_8 = value;
		Il2CppCodeGenWriteBarrier(&___storedArcLengthsFull_8, value);
	}

	inline static int32_t get_offset_of_storedArcLengthArraySize_9() { return static_cast<int32_t>(offsetof(TrackBuildRCurve_t4125228416, ___storedArcLengthArraySize_9)); }
	inline int32_t get_storedArcLengthArraySize_9() const { return ___storedArcLengthArraySize_9; }
	inline int32_t* get_address_of_storedArcLengthArraySize_9() { return &___storedArcLengthArraySize_9; }
	inline void set_storedArcLengthArraySize_9(int32_t value)
	{
		___storedArcLengthArraySize_9 = value;
	}

	inline static int32_t get_offset_of_normalisedT_10() { return static_cast<int32_t>(offsetof(TrackBuildRCurve_t4125228416, ___normalisedT_10)); }
	inline SingleU5BU5D_t2316563989* get_normalisedT_10() const { return ___normalisedT_10; }
	inline SingleU5BU5D_t2316563989** get_address_of_normalisedT_10() { return &___normalisedT_10; }
	inline void set_normalisedT_10(SingleU5BU5D_t2316563989* value)
	{
		___normalisedT_10 = value;
		Il2CppCodeGenWriteBarrier(&___normalisedT_10, value);
	}

	inline static int32_t get_offset_of_boundaryHeight_11() { return static_cast<int32_t>(offsetof(TrackBuildRCurve_t4125228416, ___boundaryHeight_11)); }
	inline float get_boundaryHeight_11() const { return ___boundaryHeight_11; }
	inline float* get_address_of_boundaryHeight_11() { return &___boundaryHeight_11; }
	inline void set_boundaryHeight_11(float value)
	{
		___boundaryHeight_11 = value;
	}

	inline static int32_t get_offset_of_midPointPerc_12() { return static_cast<int32_t>(offsetof(TrackBuildRCurve_t4125228416, ___midPointPerc_12)); }
	inline SingleU5BU5D_t2316563989* get_midPointPerc_12() const { return ___midPointPerc_12; }
	inline SingleU5BU5D_t2316563989** get_address_of_midPointPerc_12() { return &___midPointPerc_12; }
	inline void set_midPointPerc_12(SingleU5BU5D_t2316563989* value)
	{
		___midPointPerc_12 = value;
		Il2CppCodeGenWriteBarrier(&___midPointPerc_12, value);
	}

	inline static int32_t get_offset_of_targetSize_13() { return static_cast<int32_t>(offsetof(TrackBuildRCurve_t4125228416, ___targetSize_13)); }
	inline SingleU5BU5D_t2316563989* get_targetSize_13() const { return ___targetSize_13; }
	inline SingleU5BU5D_t2316563989** get_address_of_targetSize_13() { return &___targetSize_13; }
	inline void set_targetSize_13(SingleU5BU5D_t2316563989* value)
	{
		___targetSize_13 = value;
		Il2CppCodeGenWriteBarrier(&___targetSize_13, value);
	}

	inline static int32_t get_offset_of_prevNormIndex_14() { return static_cast<int32_t>(offsetof(TrackBuildRCurve_t4125228416, ___prevNormIndex_14)); }
	inline Int32U5BU5D_t3230847821* get_prevNormIndex_14() const { return ___prevNormIndex_14; }
	inline Int32U5BU5D_t3230847821** get_address_of_prevNormIndex_14() { return &___prevNormIndex_14; }
	inline void set_prevNormIndex_14(Int32U5BU5D_t3230847821* value)
	{
		___prevNormIndex_14 = value;
		Il2CppCodeGenWriteBarrier(&___prevNormIndex_14, value);
	}

	inline static int32_t get_offset_of_nextNormIndex_15() { return static_cast<int32_t>(offsetof(TrackBuildRCurve_t4125228416, ___nextNormIndex_15)); }
	inline Int32U5BU5D_t3230847821* get_nextNormIndex_15() const { return ___nextNormIndex_15; }
	inline Int32U5BU5D_t3230847821** get_address_of_nextNormIndex_15() { return &___nextNormIndex_15; }
	inline void set_nextNormIndex_15(Int32U5BU5D_t3230847821* value)
	{
		___nextNormIndex_15 = value;
		Il2CppCodeGenWriteBarrier(&___nextNormIndex_15, value);
	}

	inline static int32_t get_offset_of_sampledPoints_16() { return static_cast<int32_t>(offsetof(TrackBuildRCurve_t4125228416, ___sampledPoints_16)); }
	inline Vector3U5BU5D_t215400611* get_sampledPoints_16() const { return ___sampledPoints_16; }
	inline Vector3U5BU5D_t215400611** get_address_of_sampledPoints_16() { return &___sampledPoints_16; }
	inline void set_sampledPoints_16(Vector3U5BU5D_t215400611* value)
	{
		___sampledPoints_16 = value;
		Il2CppCodeGenWriteBarrier(&___sampledPoints_16, value);
	}

	inline static int32_t get_offset_of_sampledCants_17() { return static_cast<int32_t>(offsetof(TrackBuildRCurve_t4125228416, ___sampledCants_17)); }
	inline SingleU5BU5D_t2316563989* get_sampledCants_17() const { return ___sampledCants_17; }
	inline SingleU5BU5D_t2316563989** get_address_of_sampledCants_17() { return &___sampledCants_17; }
	inline void set_sampledCants_17(SingleU5BU5D_t2316563989* value)
	{
		___sampledCants_17 = value;
		Il2CppCodeGenWriteBarrier(&___sampledCants_17, value);
	}

	inline static int32_t get_offset_of_sampledWidths_18() { return static_cast<int32_t>(offsetof(TrackBuildRCurve_t4125228416, ___sampledWidths_18)); }
	inline SingleU5BU5D_t2316563989* get_sampledWidths_18() const { return ___sampledWidths_18; }
	inline SingleU5BU5D_t2316563989** get_address_of_sampledWidths_18() { return &___sampledWidths_18; }
	inline void set_sampledWidths_18(SingleU5BU5D_t2316563989* value)
	{
		___sampledWidths_18 = value;
		Il2CppCodeGenWriteBarrier(&___sampledWidths_18, value);
	}

	inline static int32_t get_offset_of_sampledCrowns_19() { return static_cast<int32_t>(offsetof(TrackBuildRCurve_t4125228416, ___sampledCrowns_19)); }
	inline SingleU5BU5D_t2316563989* get_sampledCrowns_19() const { return ___sampledCrowns_19; }
	inline SingleU5BU5D_t2316563989** get_address_of_sampledCrowns_19() { return &___sampledCrowns_19; }
	inline void set_sampledCrowns_19(SingleU5BU5D_t2316563989* value)
	{
		___sampledCrowns_19 = value;
		Il2CppCodeGenWriteBarrier(&___sampledCrowns_19, value);
	}

	inline static int32_t get_offset_of_sampledLeftBoundaryPoints_20() { return static_cast<int32_t>(offsetof(TrackBuildRCurve_t4125228416, ___sampledLeftBoundaryPoints_20)); }
	inline Vector3U5BU5D_t215400611* get_sampledLeftBoundaryPoints_20() const { return ___sampledLeftBoundaryPoints_20; }
	inline Vector3U5BU5D_t215400611** get_address_of_sampledLeftBoundaryPoints_20() { return &___sampledLeftBoundaryPoints_20; }
	inline void set_sampledLeftBoundaryPoints_20(Vector3U5BU5D_t215400611* value)
	{
		___sampledLeftBoundaryPoints_20 = value;
		Il2CppCodeGenWriteBarrier(&___sampledLeftBoundaryPoints_20, value);
	}

	inline static int32_t get_offset_of_sampledRightBoundaryPoints_21() { return static_cast<int32_t>(offsetof(TrackBuildRCurve_t4125228416, ___sampledRightBoundaryPoints_21)); }
	inline Vector3U5BU5D_t215400611* get_sampledRightBoundaryPoints_21() const { return ___sampledRightBoundaryPoints_21; }
	inline Vector3U5BU5D_t215400611** get_address_of_sampledRightBoundaryPoints_21() { return &___sampledRightBoundaryPoints_21; }
	inline void set_sampledRightBoundaryPoints_21(Vector3U5BU5D_t215400611* value)
	{
		___sampledRightBoundaryPoints_21 = value;
		Il2CppCodeGenWriteBarrier(&___sampledRightBoundaryPoints_21, value);
	}

	inline static int32_t get_offset_of_sampledTrackDirections_22() { return static_cast<int32_t>(offsetof(TrackBuildRCurve_t4125228416, ___sampledTrackDirections_22)); }
	inline Vector3U5BU5D_t215400611* get_sampledTrackDirections_22() const { return ___sampledTrackDirections_22; }
	inline Vector3U5BU5D_t215400611** get_address_of_sampledTrackDirections_22() { return &___sampledTrackDirections_22; }
	inline void set_sampledTrackDirections_22(Vector3U5BU5D_t215400611* value)
	{
		___sampledTrackDirections_22 = value;
		Il2CppCodeGenWriteBarrier(&___sampledTrackDirections_22, value);
	}

	inline static int32_t get_offset_of_sampledTrackUps_23() { return static_cast<int32_t>(offsetof(TrackBuildRCurve_t4125228416, ___sampledTrackUps_23)); }
	inline Vector3U5BU5D_t215400611* get_sampledTrackUps_23() const { return ___sampledTrackUps_23; }
	inline Vector3U5BU5D_t215400611** get_address_of_sampledTrackUps_23() { return &___sampledTrackUps_23; }
	inline void set_sampledTrackUps_23(Vector3U5BU5D_t215400611* value)
	{
		___sampledTrackUps_23 = value;
		Il2CppCodeGenWriteBarrier(&___sampledTrackUps_23, value);
	}

	inline static int32_t get_offset_of_sampledTrackCrosses_24() { return static_cast<int32_t>(offsetof(TrackBuildRCurve_t4125228416, ___sampledTrackCrosses_24)); }
	inline Vector3U5BU5D_t215400611* get_sampledTrackCrosses_24() const { return ___sampledTrackCrosses_24; }
	inline Vector3U5BU5D_t215400611** get_address_of_sampledTrackCrosses_24() { return &___sampledTrackCrosses_24; }
	inline void set_sampledTrackCrosses_24(Vector3U5BU5D_t215400611* value)
	{
		___sampledTrackCrosses_24 = value;
		Il2CppCodeGenWriteBarrier(&___sampledTrackCrosses_24, value);
	}

	inline static int32_t get_offset_of_sampledAngles_25() { return static_cast<int32_t>(offsetof(TrackBuildRCurve_t4125228416, ___sampledAngles_25)); }
	inline SingleU5BU5D_t2316563989* get_sampledAngles_25() const { return ___sampledAngles_25; }
	inline SingleU5BU5D_t2316563989** get_address_of_sampledAngles_25() { return &___sampledAngles_25; }
	inline void set_sampledAngles_25(SingleU5BU5D_t2316563989* value)
	{
		___sampledAngles_25 = value;
		Il2CppCodeGenWriteBarrier(&___sampledAngles_25, value);
	}

	inline static int32_t get_offset_of_clipArrayLeft_26() { return static_cast<int32_t>(offsetof(TrackBuildRCurve_t4125228416, ___clipArrayLeft_26)); }
	inline BooleanU5BU5D_t3456302923* get_clipArrayLeft_26() const { return ___clipArrayLeft_26; }
	inline BooleanU5BU5D_t3456302923** get_address_of_clipArrayLeft_26() { return &___clipArrayLeft_26; }
	inline void set_clipArrayLeft_26(BooleanU5BU5D_t3456302923* value)
	{
		___clipArrayLeft_26 = value;
		Il2CppCodeGenWriteBarrier(&___clipArrayLeft_26, value);
	}

	inline static int32_t get_offset_of_clipArrayRight_27() { return static_cast<int32_t>(offsetof(TrackBuildRCurve_t4125228416, ___clipArrayRight_27)); }
	inline BooleanU5BU5D_t3456302923* get_clipArrayRight_27() const { return ___clipArrayRight_27; }
	inline BooleanU5BU5D_t3456302923** get_address_of_clipArrayRight_27() { return &___clipArrayRight_27; }
	inline void set_clipArrayRight_27(BooleanU5BU5D_t3456302923* value)
	{
		___clipArrayRight_27 = value;
		Il2CppCodeGenWriteBarrier(&___clipArrayRight_27, value);
	}

	inline static int32_t get_offset_of_holder_28() { return static_cast<int32_t>(offsetof(TrackBuildRCurve_t4125228416, ___holder_28)); }
	inline GameObject_t3674682005 * get_holder_28() const { return ___holder_28; }
	inline GameObject_t3674682005 ** get_address_of_holder_28() { return &___holder_28; }
	inline void set_holder_28(GameObject_t3674682005 * value)
	{
		___holder_28 = value;
		Il2CppCodeGenWriteBarrier(&___holder_28, value);
	}

	inline static int32_t get_offset_of_dynamicTrackMesh_29() { return static_cast<int32_t>(offsetof(TrackBuildRCurve_t4125228416, ___dynamicTrackMesh_29)); }
	inline DynamicMesh_t574034906 * get_dynamicTrackMesh_29() const { return ___dynamicTrackMesh_29; }
	inline DynamicMesh_t574034906 ** get_address_of_dynamicTrackMesh_29() { return &___dynamicTrackMesh_29; }
	inline void set_dynamicTrackMesh_29(DynamicMesh_t574034906 * value)
	{
		___dynamicTrackMesh_29 = value;
		Il2CppCodeGenWriteBarrier(&___dynamicTrackMesh_29, value);
	}

	inline static int32_t get_offset_of_dynamicBoundaryMesh_30() { return static_cast<int32_t>(offsetof(TrackBuildRCurve_t4125228416, ___dynamicBoundaryMesh_30)); }
	inline DynamicMesh_t574034906 * get_dynamicBoundaryMesh_30() const { return ___dynamicBoundaryMesh_30; }
	inline DynamicMesh_t574034906 ** get_address_of_dynamicBoundaryMesh_30() { return &___dynamicBoundaryMesh_30; }
	inline void set_dynamicBoundaryMesh_30(DynamicMesh_t574034906 * value)
	{
		___dynamicBoundaryMesh_30 = value;
		Il2CppCodeGenWriteBarrier(&___dynamicBoundaryMesh_30, value);
	}

	inline static int32_t get_offset_of_dynamicOffroadMesh_31() { return static_cast<int32_t>(offsetof(TrackBuildRCurve_t4125228416, ___dynamicOffroadMesh_31)); }
	inline DynamicMesh_t574034906 * get_dynamicOffroadMesh_31() const { return ___dynamicOffroadMesh_31; }
	inline DynamicMesh_t574034906 ** get_address_of_dynamicOffroadMesh_31() { return &___dynamicOffroadMesh_31; }
	inline void set_dynamicOffroadMesh_31(DynamicMesh_t574034906 * value)
	{
		___dynamicOffroadMesh_31 = value;
		Il2CppCodeGenWriteBarrier(&___dynamicOffroadMesh_31, value);
	}

	inline static int32_t get_offset_of_dynamicBumperMesh_32() { return static_cast<int32_t>(offsetof(TrackBuildRCurve_t4125228416, ___dynamicBumperMesh_32)); }
	inline DynamicMesh_t574034906 * get_dynamicBumperMesh_32() const { return ___dynamicBumperMesh_32; }
	inline DynamicMesh_t574034906 ** get_address_of_dynamicBumperMesh_32() { return &___dynamicBumperMesh_32; }
	inline void set_dynamicBumperMesh_32(DynamicMesh_t574034906 * value)
	{
		___dynamicBumperMesh_32 = value;
		Il2CppCodeGenWriteBarrier(&___dynamicBumperMesh_32, value);
	}

	inline static int32_t get_offset_of_dynamicColliderMesh_33() { return static_cast<int32_t>(offsetof(TrackBuildRCurve_t4125228416, ___dynamicColliderMesh_33)); }
	inline DynamicMesh_t574034906 * get_dynamicColliderMesh_33() const { return ___dynamicColliderMesh_33; }
	inline DynamicMesh_t574034906 ** get_address_of_dynamicColliderMesh_33() { return &___dynamicColliderMesh_33; }
	inline void set_dynamicColliderMesh_33(DynamicMesh_t574034906 * value)
	{
		___dynamicColliderMesh_33 = value;
		Il2CppCodeGenWriteBarrier(&___dynamicColliderMesh_33, value);
	}

	inline static int32_t get_offset_of_trackTextureStyleIndex_34() { return static_cast<int32_t>(offsetof(TrackBuildRCurve_t4125228416, ___trackTextureStyleIndex_34)); }
	inline int32_t get_trackTextureStyleIndex_34() const { return ___trackTextureStyleIndex_34; }
	inline int32_t* get_address_of_trackTextureStyleIndex_34() { return &___trackTextureStyleIndex_34; }
	inline void set_trackTextureStyleIndex_34(int32_t value)
	{
		___trackTextureStyleIndex_34 = value;
	}

	inline static int32_t get_offset_of_offroadTextureStyleIndex_35() { return static_cast<int32_t>(offsetof(TrackBuildRCurve_t4125228416, ___offroadTextureStyleIndex_35)); }
	inline int32_t get_offroadTextureStyleIndex_35() const { return ___offroadTextureStyleIndex_35; }
	inline int32_t* get_address_of_offroadTextureStyleIndex_35() { return &___offroadTextureStyleIndex_35; }
	inline void set_offroadTextureStyleIndex_35(int32_t value)
	{
		___offroadTextureStyleIndex_35 = value;
	}

	inline static int32_t get_offset_of_boundaryTextureStyleIndex_36() { return static_cast<int32_t>(offsetof(TrackBuildRCurve_t4125228416, ___boundaryTextureStyleIndex_36)); }
	inline int32_t get_boundaryTextureStyleIndex_36() const { return ___boundaryTextureStyleIndex_36; }
	inline int32_t* get_address_of_boundaryTextureStyleIndex_36() { return &___boundaryTextureStyleIndex_36; }
	inline void set_boundaryTextureStyleIndex_36(int32_t value)
	{
		___boundaryTextureStyleIndex_36 = value;
	}

	inline static int32_t get_offset_of_bumperTextureStyleIndex_37() { return static_cast<int32_t>(offsetof(TrackBuildRCurve_t4125228416, ___bumperTextureStyleIndex_37)); }
	inline int32_t get_bumperTextureStyleIndex_37() const { return ___bumperTextureStyleIndex_37; }
	inline int32_t* get_address_of_bumperTextureStyleIndex_37() { return &___bumperTextureStyleIndex_37; }
	inline void set_bumperTextureStyleIndex_37(int32_t value)
	{
		___bumperTextureStyleIndex_37 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
