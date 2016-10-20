#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Generic.List`1<TrackBuildRPoint>
struct List_1_t1210264817;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Mesh
struct Mesh_t4241756145;
// System.String
struct String_t;
// UnityEngine.Material
struct Material_t3870600107;
// System.Collections.Generic.List`1<TrackBuildRTexture>
struct List_1_t3207973948;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3667593487;
// UnityEngine.Terrain
struct Terrain_t2520838763;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"
#include "AssemblyU2DCSharp_TrackBuildRTrack_BumperModes696774842.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TrackBuildRTrack
struct  TrackBuildRTrack_t4140821980  : public MonoBehaviour_t667441552
{
public:
	// System.Collections.Generic.List`1<TrackBuildRPoint> TrackBuildRTrack::_points
	List_1_t1210264817 * ____points_3;
	// System.Boolean TrackBuildRTrack::_looped
	bool ____looped_4;
	// UnityEngine.Transform TrackBuildRTrack::baseTransform
	Transform_t1659122786 * ___baseTransform_5;
	// System.Boolean TrackBuildRTrack::_disconnectBoundary
	bool ____disconnectBoundary_6;
	// System.Boolean TrackBuildRTrack::_renderBoundaryWallReverse
	bool ____renderBoundaryWallReverse_7;
	// System.Boolean TrackBuildRTrack::includeCollider
	bool ___includeCollider_8;
	// System.Boolean TrackBuildRTrack::includeColliderRoof
	bool ___includeColliderRoof_9;
	// System.Single TrackBuildRTrack::trackColliderWallHeight
	float ___trackColliderWallHeight_10;
	// System.Boolean TrackBuildRTrack::trackBumpers
	bool ___trackBumpers_11;
	// System.Single TrackBuildRTrack::bumperAngleThresold
	float ___bumperAngleThresold_12;
	// System.Single TrackBuildRTrack::bumperWidth
	float ___bumperWidth_13;
	// System.Single TrackBuildRTrack::bumperHeight
	float ___bumperHeight_14;
	// System.Single TrackBuildRTrack::additionalBumperHeight
	float ___additionalBumperHeight_15;
	// TrackBuildRTrack/BumperModes TrackBuildRTrack::bumperMode
	int32_t ___bumperMode_16;
	// System.Int32 TrackBuildRTrack::loopPoints
	int32_t ___loopPoints_17;
	// System.Single TrackBuildRTrack::loopRadius
	float ___loopRadius_18;
	// System.Single TrackBuildRTrack::jumpHeight
	float ___jumpHeight_19;
	// System.Single TrackBuildRTrack::maxJumpLength
	float ___maxJumpLength_20;
	// System.Single TrackBuildRTrack::twistAngle
	float ___twistAngle_21;
	// System.Int32 TrackBuildRTrack::twistPoints
	int32_t ___twistPoints_22;
	// System.Single TrackBuildRTrack::twistRadius
	float ___twistRadius_23;
	// System.Boolean TrackBuildRTrack::drawMode
	bool ___drawMode_24;
	// UnityEngine.GameObject TrackBuildRTrack::diagramGO
	GameObject_t3674682005 * ___diagramGO_25;
	// UnityEngine.Mesh TrackBuildRTrack::diagramMesh
	Mesh_t4241756145 * ___diagramMesh_26;
	// System.String TrackBuildRTrack::diagramFilepath
	String_t* ___diagramFilepath_27;
	// UnityEngine.Material TrackBuildRTrack::diagramMaterial
	Material_t3870600107 * ___diagramMaterial_28;
	// System.Single TrackBuildRTrack::scale
	float ___scale_29;
	// UnityEngine.Vector3 TrackBuildRTrack::scalePointA
	Vector3_t4282066566  ___scalePointA_30;
	// UnityEngine.Vector3 TrackBuildRTrack::scalePointB
	Vector3_t4282066566  ___scalePointB_31;
	// System.Boolean TrackBuildRTrack::showDiagram
	bool ___showDiagram_32;
	// System.Int32 TrackBuildRTrack::assignedPoints
	int32_t ___assignedPoints_33;
	// System.Boolean TrackBuildRTrack::_showWireframe
	bool ____showWireframe_34;
	// System.Single TrackBuildRTrack::_trackLength
	float ____trackLength_35;
	// System.Single TrackBuildRTrack::_meshResolution
	float ____meshResolution_36;
	// System.Single TrackBuildRTrack::editMeshResolution
	float ___editMeshResolution_37;
	// System.Collections.Generic.List`1<TrackBuildRTexture> TrackBuildRTrack::_textures
	List_1_t3207973948 * ____textures_38;
	// System.Single TrackBuildRTrack::terrainMergeWidth
	float ___terrainMergeWidth_39;
	// UnityEngine.AnimationCurve TrackBuildRTrack::mergeCurve
	AnimationCurve_t3667593487 * ___mergeCurve_40;
	// UnityEngine.Terrain TrackBuildRTrack::mergeTerrain
	Terrain_t2520838763 * ___mergeTerrain_41;
	// System.Single TrackBuildRTrack::terrainAccuracy
	float ___terrainAccuracy_42;
	// System.Single TrackBuildRTrack::terrainMergeMargin
	float ___terrainMergeMargin_43;
	// System.Single TrackBuildRTrack::conformAccuracy
	float ___conformAccuracy_44;
	// System.Boolean TrackBuildRTrack::_tangentsGenerated
	bool ____tangentsGenerated_45;
	// System.Boolean TrackBuildRTrack::_lightmapGenerated
	bool ____lightmapGenerated_46;
	// System.Boolean TrackBuildRTrack::_optimised
	bool ____optimised_47;
	// System.Boolean TrackBuildRTrack::_render
	bool ____render_48;
	// System.Int32 TrackBuildRTrack::lastPolycount
	int32_t ___lastPolycount_49;

public:
	inline static int32_t get_offset_of__points_3() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ____points_3)); }
	inline List_1_t1210264817 * get__points_3() const { return ____points_3; }
	inline List_1_t1210264817 ** get_address_of__points_3() { return &____points_3; }
	inline void set__points_3(List_1_t1210264817 * value)
	{
		____points_3 = value;
		Il2CppCodeGenWriteBarrier(&____points_3, value);
	}

	inline static int32_t get_offset_of__looped_4() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ____looped_4)); }
	inline bool get__looped_4() const { return ____looped_4; }
	inline bool* get_address_of__looped_4() { return &____looped_4; }
	inline void set__looped_4(bool value)
	{
		____looped_4 = value;
	}

	inline static int32_t get_offset_of_baseTransform_5() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ___baseTransform_5)); }
	inline Transform_t1659122786 * get_baseTransform_5() const { return ___baseTransform_5; }
	inline Transform_t1659122786 ** get_address_of_baseTransform_5() { return &___baseTransform_5; }
	inline void set_baseTransform_5(Transform_t1659122786 * value)
	{
		___baseTransform_5 = value;
		Il2CppCodeGenWriteBarrier(&___baseTransform_5, value);
	}

	inline static int32_t get_offset_of__disconnectBoundary_6() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ____disconnectBoundary_6)); }
	inline bool get__disconnectBoundary_6() const { return ____disconnectBoundary_6; }
	inline bool* get_address_of__disconnectBoundary_6() { return &____disconnectBoundary_6; }
	inline void set__disconnectBoundary_6(bool value)
	{
		____disconnectBoundary_6 = value;
	}

	inline static int32_t get_offset_of__renderBoundaryWallReverse_7() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ____renderBoundaryWallReverse_7)); }
	inline bool get__renderBoundaryWallReverse_7() const { return ____renderBoundaryWallReverse_7; }
	inline bool* get_address_of__renderBoundaryWallReverse_7() { return &____renderBoundaryWallReverse_7; }
	inline void set__renderBoundaryWallReverse_7(bool value)
	{
		____renderBoundaryWallReverse_7 = value;
	}

	inline static int32_t get_offset_of_includeCollider_8() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ___includeCollider_8)); }
	inline bool get_includeCollider_8() const { return ___includeCollider_8; }
	inline bool* get_address_of_includeCollider_8() { return &___includeCollider_8; }
	inline void set_includeCollider_8(bool value)
	{
		___includeCollider_8 = value;
	}

	inline static int32_t get_offset_of_includeColliderRoof_9() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ___includeColliderRoof_9)); }
	inline bool get_includeColliderRoof_9() const { return ___includeColliderRoof_9; }
	inline bool* get_address_of_includeColliderRoof_9() { return &___includeColliderRoof_9; }
	inline void set_includeColliderRoof_9(bool value)
	{
		___includeColliderRoof_9 = value;
	}

	inline static int32_t get_offset_of_trackColliderWallHeight_10() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ___trackColliderWallHeight_10)); }
	inline float get_trackColliderWallHeight_10() const { return ___trackColliderWallHeight_10; }
	inline float* get_address_of_trackColliderWallHeight_10() { return &___trackColliderWallHeight_10; }
	inline void set_trackColliderWallHeight_10(float value)
	{
		___trackColliderWallHeight_10 = value;
	}

	inline static int32_t get_offset_of_trackBumpers_11() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ___trackBumpers_11)); }
	inline bool get_trackBumpers_11() const { return ___trackBumpers_11; }
	inline bool* get_address_of_trackBumpers_11() { return &___trackBumpers_11; }
	inline void set_trackBumpers_11(bool value)
	{
		___trackBumpers_11 = value;
	}

	inline static int32_t get_offset_of_bumperAngleThresold_12() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ___bumperAngleThresold_12)); }
	inline float get_bumperAngleThresold_12() const { return ___bumperAngleThresold_12; }
	inline float* get_address_of_bumperAngleThresold_12() { return &___bumperAngleThresold_12; }
	inline void set_bumperAngleThresold_12(float value)
	{
		___bumperAngleThresold_12 = value;
	}

	inline static int32_t get_offset_of_bumperWidth_13() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ___bumperWidth_13)); }
	inline float get_bumperWidth_13() const { return ___bumperWidth_13; }
	inline float* get_address_of_bumperWidth_13() { return &___bumperWidth_13; }
	inline void set_bumperWidth_13(float value)
	{
		___bumperWidth_13 = value;
	}

	inline static int32_t get_offset_of_bumperHeight_14() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ___bumperHeight_14)); }
	inline float get_bumperHeight_14() const { return ___bumperHeight_14; }
	inline float* get_address_of_bumperHeight_14() { return &___bumperHeight_14; }
	inline void set_bumperHeight_14(float value)
	{
		___bumperHeight_14 = value;
	}

	inline static int32_t get_offset_of_additionalBumperHeight_15() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ___additionalBumperHeight_15)); }
	inline float get_additionalBumperHeight_15() const { return ___additionalBumperHeight_15; }
	inline float* get_address_of_additionalBumperHeight_15() { return &___additionalBumperHeight_15; }
	inline void set_additionalBumperHeight_15(float value)
	{
		___additionalBumperHeight_15 = value;
	}

	inline static int32_t get_offset_of_bumperMode_16() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ___bumperMode_16)); }
	inline int32_t get_bumperMode_16() const { return ___bumperMode_16; }
	inline int32_t* get_address_of_bumperMode_16() { return &___bumperMode_16; }
	inline void set_bumperMode_16(int32_t value)
	{
		___bumperMode_16 = value;
	}

	inline static int32_t get_offset_of_loopPoints_17() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ___loopPoints_17)); }
	inline int32_t get_loopPoints_17() const { return ___loopPoints_17; }
	inline int32_t* get_address_of_loopPoints_17() { return &___loopPoints_17; }
	inline void set_loopPoints_17(int32_t value)
	{
		___loopPoints_17 = value;
	}

	inline static int32_t get_offset_of_loopRadius_18() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ___loopRadius_18)); }
	inline float get_loopRadius_18() const { return ___loopRadius_18; }
	inline float* get_address_of_loopRadius_18() { return &___loopRadius_18; }
	inline void set_loopRadius_18(float value)
	{
		___loopRadius_18 = value;
	}

	inline static int32_t get_offset_of_jumpHeight_19() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ___jumpHeight_19)); }
	inline float get_jumpHeight_19() const { return ___jumpHeight_19; }
	inline float* get_address_of_jumpHeight_19() { return &___jumpHeight_19; }
	inline void set_jumpHeight_19(float value)
	{
		___jumpHeight_19 = value;
	}

	inline static int32_t get_offset_of_maxJumpLength_20() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ___maxJumpLength_20)); }
	inline float get_maxJumpLength_20() const { return ___maxJumpLength_20; }
	inline float* get_address_of_maxJumpLength_20() { return &___maxJumpLength_20; }
	inline void set_maxJumpLength_20(float value)
	{
		___maxJumpLength_20 = value;
	}

	inline static int32_t get_offset_of_twistAngle_21() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ___twistAngle_21)); }
	inline float get_twistAngle_21() const { return ___twistAngle_21; }
	inline float* get_address_of_twistAngle_21() { return &___twistAngle_21; }
	inline void set_twistAngle_21(float value)
	{
		___twistAngle_21 = value;
	}

	inline static int32_t get_offset_of_twistPoints_22() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ___twistPoints_22)); }
	inline int32_t get_twistPoints_22() const { return ___twistPoints_22; }
	inline int32_t* get_address_of_twistPoints_22() { return &___twistPoints_22; }
	inline void set_twistPoints_22(int32_t value)
	{
		___twistPoints_22 = value;
	}

	inline static int32_t get_offset_of_twistRadius_23() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ___twistRadius_23)); }
	inline float get_twistRadius_23() const { return ___twistRadius_23; }
	inline float* get_address_of_twistRadius_23() { return &___twistRadius_23; }
	inline void set_twistRadius_23(float value)
	{
		___twistRadius_23 = value;
	}

	inline static int32_t get_offset_of_drawMode_24() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ___drawMode_24)); }
	inline bool get_drawMode_24() const { return ___drawMode_24; }
	inline bool* get_address_of_drawMode_24() { return &___drawMode_24; }
	inline void set_drawMode_24(bool value)
	{
		___drawMode_24 = value;
	}

	inline static int32_t get_offset_of_diagramGO_25() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ___diagramGO_25)); }
	inline GameObject_t3674682005 * get_diagramGO_25() const { return ___diagramGO_25; }
	inline GameObject_t3674682005 ** get_address_of_diagramGO_25() { return &___diagramGO_25; }
	inline void set_diagramGO_25(GameObject_t3674682005 * value)
	{
		___diagramGO_25 = value;
		Il2CppCodeGenWriteBarrier(&___diagramGO_25, value);
	}

	inline static int32_t get_offset_of_diagramMesh_26() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ___diagramMesh_26)); }
	inline Mesh_t4241756145 * get_diagramMesh_26() const { return ___diagramMesh_26; }
	inline Mesh_t4241756145 ** get_address_of_diagramMesh_26() { return &___diagramMesh_26; }
	inline void set_diagramMesh_26(Mesh_t4241756145 * value)
	{
		___diagramMesh_26 = value;
		Il2CppCodeGenWriteBarrier(&___diagramMesh_26, value);
	}

	inline static int32_t get_offset_of_diagramFilepath_27() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ___diagramFilepath_27)); }
	inline String_t* get_diagramFilepath_27() const { return ___diagramFilepath_27; }
	inline String_t** get_address_of_diagramFilepath_27() { return &___diagramFilepath_27; }
	inline void set_diagramFilepath_27(String_t* value)
	{
		___diagramFilepath_27 = value;
		Il2CppCodeGenWriteBarrier(&___diagramFilepath_27, value);
	}

	inline static int32_t get_offset_of_diagramMaterial_28() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ___diagramMaterial_28)); }
	inline Material_t3870600107 * get_diagramMaterial_28() const { return ___diagramMaterial_28; }
	inline Material_t3870600107 ** get_address_of_diagramMaterial_28() { return &___diagramMaterial_28; }
	inline void set_diagramMaterial_28(Material_t3870600107 * value)
	{
		___diagramMaterial_28 = value;
		Il2CppCodeGenWriteBarrier(&___diagramMaterial_28, value);
	}

	inline static int32_t get_offset_of_scale_29() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ___scale_29)); }
	inline float get_scale_29() const { return ___scale_29; }
	inline float* get_address_of_scale_29() { return &___scale_29; }
	inline void set_scale_29(float value)
	{
		___scale_29 = value;
	}

	inline static int32_t get_offset_of_scalePointA_30() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ___scalePointA_30)); }
	inline Vector3_t4282066566  get_scalePointA_30() const { return ___scalePointA_30; }
	inline Vector3_t4282066566 * get_address_of_scalePointA_30() { return &___scalePointA_30; }
	inline void set_scalePointA_30(Vector3_t4282066566  value)
	{
		___scalePointA_30 = value;
	}

	inline static int32_t get_offset_of_scalePointB_31() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ___scalePointB_31)); }
	inline Vector3_t4282066566  get_scalePointB_31() const { return ___scalePointB_31; }
	inline Vector3_t4282066566 * get_address_of_scalePointB_31() { return &___scalePointB_31; }
	inline void set_scalePointB_31(Vector3_t4282066566  value)
	{
		___scalePointB_31 = value;
	}

	inline static int32_t get_offset_of_showDiagram_32() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ___showDiagram_32)); }
	inline bool get_showDiagram_32() const { return ___showDiagram_32; }
	inline bool* get_address_of_showDiagram_32() { return &___showDiagram_32; }
	inline void set_showDiagram_32(bool value)
	{
		___showDiagram_32 = value;
	}

	inline static int32_t get_offset_of_assignedPoints_33() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ___assignedPoints_33)); }
	inline int32_t get_assignedPoints_33() const { return ___assignedPoints_33; }
	inline int32_t* get_address_of_assignedPoints_33() { return &___assignedPoints_33; }
	inline void set_assignedPoints_33(int32_t value)
	{
		___assignedPoints_33 = value;
	}

	inline static int32_t get_offset_of__showWireframe_34() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ____showWireframe_34)); }
	inline bool get__showWireframe_34() const { return ____showWireframe_34; }
	inline bool* get_address_of__showWireframe_34() { return &____showWireframe_34; }
	inline void set__showWireframe_34(bool value)
	{
		____showWireframe_34 = value;
	}

	inline static int32_t get_offset_of__trackLength_35() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ____trackLength_35)); }
	inline float get__trackLength_35() const { return ____trackLength_35; }
	inline float* get_address_of__trackLength_35() { return &____trackLength_35; }
	inline void set__trackLength_35(float value)
	{
		____trackLength_35 = value;
	}

	inline static int32_t get_offset_of__meshResolution_36() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ____meshResolution_36)); }
	inline float get__meshResolution_36() const { return ____meshResolution_36; }
	inline float* get_address_of__meshResolution_36() { return &____meshResolution_36; }
	inline void set__meshResolution_36(float value)
	{
		____meshResolution_36 = value;
	}

	inline static int32_t get_offset_of_editMeshResolution_37() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ___editMeshResolution_37)); }
	inline float get_editMeshResolution_37() const { return ___editMeshResolution_37; }
	inline float* get_address_of_editMeshResolution_37() { return &___editMeshResolution_37; }
	inline void set_editMeshResolution_37(float value)
	{
		___editMeshResolution_37 = value;
	}

	inline static int32_t get_offset_of__textures_38() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ____textures_38)); }
	inline List_1_t3207973948 * get__textures_38() const { return ____textures_38; }
	inline List_1_t3207973948 ** get_address_of__textures_38() { return &____textures_38; }
	inline void set__textures_38(List_1_t3207973948 * value)
	{
		____textures_38 = value;
		Il2CppCodeGenWriteBarrier(&____textures_38, value);
	}

	inline static int32_t get_offset_of_terrainMergeWidth_39() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ___terrainMergeWidth_39)); }
	inline float get_terrainMergeWidth_39() const { return ___terrainMergeWidth_39; }
	inline float* get_address_of_terrainMergeWidth_39() { return &___terrainMergeWidth_39; }
	inline void set_terrainMergeWidth_39(float value)
	{
		___terrainMergeWidth_39 = value;
	}

	inline static int32_t get_offset_of_mergeCurve_40() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ___mergeCurve_40)); }
	inline AnimationCurve_t3667593487 * get_mergeCurve_40() const { return ___mergeCurve_40; }
	inline AnimationCurve_t3667593487 ** get_address_of_mergeCurve_40() { return &___mergeCurve_40; }
	inline void set_mergeCurve_40(AnimationCurve_t3667593487 * value)
	{
		___mergeCurve_40 = value;
		Il2CppCodeGenWriteBarrier(&___mergeCurve_40, value);
	}

	inline static int32_t get_offset_of_mergeTerrain_41() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ___mergeTerrain_41)); }
	inline Terrain_t2520838763 * get_mergeTerrain_41() const { return ___mergeTerrain_41; }
	inline Terrain_t2520838763 ** get_address_of_mergeTerrain_41() { return &___mergeTerrain_41; }
	inline void set_mergeTerrain_41(Terrain_t2520838763 * value)
	{
		___mergeTerrain_41 = value;
		Il2CppCodeGenWriteBarrier(&___mergeTerrain_41, value);
	}

	inline static int32_t get_offset_of_terrainAccuracy_42() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ___terrainAccuracy_42)); }
	inline float get_terrainAccuracy_42() const { return ___terrainAccuracy_42; }
	inline float* get_address_of_terrainAccuracy_42() { return &___terrainAccuracy_42; }
	inline void set_terrainAccuracy_42(float value)
	{
		___terrainAccuracy_42 = value;
	}

	inline static int32_t get_offset_of_terrainMergeMargin_43() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ___terrainMergeMargin_43)); }
	inline float get_terrainMergeMargin_43() const { return ___terrainMergeMargin_43; }
	inline float* get_address_of_terrainMergeMargin_43() { return &___terrainMergeMargin_43; }
	inline void set_terrainMergeMargin_43(float value)
	{
		___terrainMergeMargin_43 = value;
	}

	inline static int32_t get_offset_of_conformAccuracy_44() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ___conformAccuracy_44)); }
	inline float get_conformAccuracy_44() const { return ___conformAccuracy_44; }
	inline float* get_address_of_conformAccuracy_44() { return &___conformAccuracy_44; }
	inline void set_conformAccuracy_44(float value)
	{
		___conformAccuracy_44 = value;
	}

	inline static int32_t get_offset_of__tangentsGenerated_45() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ____tangentsGenerated_45)); }
	inline bool get__tangentsGenerated_45() const { return ____tangentsGenerated_45; }
	inline bool* get_address_of__tangentsGenerated_45() { return &____tangentsGenerated_45; }
	inline void set__tangentsGenerated_45(bool value)
	{
		____tangentsGenerated_45 = value;
	}

	inline static int32_t get_offset_of__lightmapGenerated_46() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ____lightmapGenerated_46)); }
	inline bool get__lightmapGenerated_46() const { return ____lightmapGenerated_46; }
	inline bool* get_address_of__lightmapGenerated_46() { return &____lightmapGenerated_46; }
	inline void set__lightmapGenerated_46(bool value)
	{
		____lightmapGenerated_46 = value;
	}

	inline static int32_t get_offset_of__optimised_47() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ____optimised_47)); }
	inline bool get__optimised_47() const { return ____optimised_47; }
	inline bool* get_address_of__optimised_47() { return &____optimised_47; }
	inline void set__optimised_47(bool value)
	{
		____optimised_47 = value;
	}

	inline static int32_t get_offset_of__render_48() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ____render_48)); }
	inline bool get__render_48() const { return ____render_48; }
	inline bool* get_address_of__render_48() { return &____render_48; }
	inline void set__render_48(bool value)
	{
		____render_48 = value;
	}

	inline static int32_t get_offset_of_lastPolycount_49() { return static_cast<int32_t>(offsetof(TrackBuildRTrack_t4140821980, ___lastPolycount_49)); }
	inline int32_t get_lastPolycount_49() const { return ___lastPolycount_49; }
	inline int32_t* get_address_of_lastPolycount_49() { return &___lastPolycount_49; }
	inline void set_lastPolycount_49(int32_t value)
	{
		___lastPolycount_49 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
