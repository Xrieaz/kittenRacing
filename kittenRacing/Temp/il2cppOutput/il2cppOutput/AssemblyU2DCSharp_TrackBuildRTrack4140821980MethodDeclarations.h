#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// TrackBuildRTrack
struct TrackBuildRTrack_t4140821980;
// TrackBuildRPoint
struct TrackBuildRPoint_t4137046561;
// TrackBuildRPoint[]
struct TrackBuildRPointU5BU5D_t3804963900;
// TrackBuildRTexture
struct TrackBuildRTexture_t1839788396;
// TrackBuildRTexture[]
struct TrackBuildRTextureU5BU5D_t1271193445;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_TrackBuildRTexture1839788396.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "AssemblyU2DCSharp_TrackBuildRPoint4137046561.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

// System.Void TrackBuildRTrack::.ctor()
extern "C"  void TrackBuildRTrack__ctor_m389877823 (TrackBuildRTrack_t4140821980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRTrack::InitTextures()
extern "C"  void TrackBuildRTrack_InitTextures_m2346050317 (TrackBuildRTrack_t4140821980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRTrack::CheckDiagram()
extern "C"  void TrackBuildRTrack_CheckDiagram_m1647550736 (TrackBuildRTrack_t4140821980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRTrack::OnEnable()
extern "C"  void TrackBuildRTrack_OnEnable_m3330235111 (TrackBuildRTrack_t4140821980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TrackBuildRPoint TrackBuildRTrack::get_Item(System.Int32)
extern "C"  TrackBuildRPoint_t4137046561 * TrackBuildRTrack_get_Item_m1759048718 (TrackBuildRTrack_t4140821980 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TrackBuildRPoint[] TrackBuildRTrack::get_points()
extern "C"  TrackBuildRPointU5BU5D_t3804963900* TrackBuildRTrack_get_points_m3833240843 (TrackBuildRTrack_t4140821980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TrackBuildRTexture TrackBuildRTrack::Texture(System.Int32)
extern "C"  TrackBuildRTexture_t1839788396 * TrackBuildRTrack_Texture_m234148440 (TrackBuildRTrack_t4140821980 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRTrack::AddTexture()
extern "C"  void TrackBuildRTrack_AddTexture_m2807575775 (TrackBuildRTrack_t4140821980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRTrack::RemoveTexture(TrackBuildRTexture)
extern "C"  void TrackBuildRTrack_RemoveTexture_m2087200488 (TrackBuildRTrack_t4140821980 * __this, TrackBuildRTexture_t1839788396 * ___texture0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TrackBuildRTrack::get_numberOfTextures()
extern "C"  int32_t TrackBuildRTrack_get_numberOfTextures_m941805684 (TrackBuildRTrack_t4140821980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TrackBuildRTexture[] TrackBuildRTrack::GetTexturesArray()
extern "C"  TrackBuildRTextureU5BU5D_t1271193445* TrackBuildRTrack_GetTexturesArray_m606349535 (TrackBuildRTrack_t4140821980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TrackBuildRTrack::get_numberOfPoints()
extern "C"  int32_t TrackBuildRTrack_get_numberOfPoints_m146862751 (TrackBuildRTrack_t4140821980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TrackBuildRTrack::get_realNumberOfPoints()
extern "C"  int32_t TrackBuildRTrack_get_realNumberOfPoints_m824241885 (TrackBuildRTrack_t4140821980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TrackBuildRTrack::get_tangentsGenerated()
extern "C"  bool TrackBuildRTrack_get_tangentsGenerated_m3883281665 (TrackBuildRTrack_t4140821980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TrackBuildRTrack::get_lightmapGenerated()
extern "C"  bool TrackBuildRTrack_get_lightmapGenerated_m3805151305 (TrackBuildRTrack_t4140821980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TrackBuildRTrack::get_optimised()
extern "C"  bool TrackBuildRTrack_get_optimised_m3400772800 (TrackBuildRTrack_t4140821980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TrackBuildRTrack::get_numberOfCurves()
extern "C"  int32_t TrackBuildRTrack_get_numberOfCurves_m259823328 (TrackBuildRTrack_t4140821980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TrackBuildRTrack::get_loop()
extern "C"  bool TrackBuildRTrack_get_loop_m3726602854 (TrackBuildRTrack_t4140821980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRTrack::set_loop(System.Boolean)
extern "C"  void TrackBuildRTrack_set_loop_m732652061 (TrackBuildRTrack_t4140821980 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TrackBuildRTrack::get_trackLength()
extern "C"  float TrackBuildRTrack_get_trackLength_m277645529 (TrackBuildRTrack_t4140821980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TrackBuildRTrack::get_meshResolution()
extern "C"  float TrackBuildRTrack_get_meshResolution_m2951712723 (TrackBuildRTrack_t4140821980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRTrack::set_meshResolution(System.Single)
extern "C"  void TrackBuildRTrack_set_meshResolution_m2719443216 (TrackBuildRTrack_t4140821980 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TrackBuildRTrack::get_disconnectBoundary()
extern "C"  bool TrackBuildRTrack_get_disconnectBoundary_m851723880 (TrackBuildRTrack_t4140821980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRTrack::set_disconnectBoundary(System.Boolean)
extern "C"  void TrackBuildRTrack_set_disconnectBoundary_m1293204127 (TrackBuildRTrack_t4140821980 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TrackBuildRTrack::get_showWireframe()
extern "C"  bool TrackBuildRTrack_get_showWireframe_m1655049515 (TrackBuildRTrack_t4140821980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRTrack::set_showWireframe(System.Boolean)
extern "C"  void TrackBuildRTrack_set_showWireframe_m6934178 (TrackBuildRTrack_t4140821980 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TrackBuildRTrack::get_isDirty()
extern "C"  bool TrackBuildRTrack_get_isDirty_m2781995112 (TrackBuildRTrack_t4140821980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TrackBuildRTrack::get_renderBoundaryWallReverse()
extern "C"  bool TrackBuildRTrack_get_renderBoundaryWallReverse_m3893743512 (TrackBuildRTrack_t4140821980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRTrack::set_renderBoundaryWallReverse(System.Boolean)
extern "C"  void TrackBuildRTrack_set_renderBoundaryWallReverse_m3598151247 (TrackBuildRTrack_t4140821980 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TrackBuildRTrack::get_render()
extern "C"  bool TrackBuildRTrack_get_render_m806620312 (TrackBuildRTrack_t4140821980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRTrack::set_render(System.Boolean)
extern "C"  void TrackBuildRTrack_set_render_m2229210319 (TrackBuildRTrack_t4140821980 * __this, bool ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TrackBuildRPoint TrackBuildRTrack::AddPoint(UnityEngine.Vector3)
extern "C"  TrackBuildRPoint_t4137046561 * TrackBuildRTrack_AddPoint_m4023336265 (TrackBuildRTrack_t4140821980 * __this, Vector3_t4282066566  ___position0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRTrack::AddPoint(TrackBuildRPoint)
extern "C"  void TrackBuildRTrack_AddPoint_m2032872659 (TrackBuildRTrack_t4140821980 * __this, TrackBuildRPoint_t4137046561 * ___point0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRTrack::InsertPoint(TrackBuildRPoint,System.Int32)
extern "C"  void TrackBuildRTrack_InsertPoint_m462720708 (TrackBuildRTrack_t4140821980 * __this, TrackBuildRPoint_t4137046561 * ___point0, int32_t ___index1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TrackBuildRPoint TrackBuildRTrack::InsertPoint(System.Int32)
extern "C"  TrackBuildRPoint_t4137046561 * TrackBuildRTrack_InsertPoint_m526931209 (TrackBuildRTrack_t4140821980 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRTrack::RemovePoint(TrackBuildRPoint)
extern "C"  void TrackBuildRTrack_RemovePoint_m202467016 (TrackBuildRTrack_t4140821980 * __this, TrackBuildRPoint_t4137046561 * ___point0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TrackBuildRTrack::GetTrackPosition(System.Single)
extern "C"  Vector3_t4282066566  TrackBuildRTrack_GetTrackPosition_m3414634702 (TrackBuildRTrack_t4140821980 * __this, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TrackBuildRTrack::GetTrackWidth(System.Single)
extern "C"  float TrackBuildRTrack_GetTrackWidth_m1058413545 (TrackBuildRTrack_t4140821980 * __this, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion TrackBuildRTrack::GetTrackUp(System.Single)
extern "C"  Quaternion_t1553702882  TrackBuildRTrack_GetTrackUp_m2682796174 (TrackBuildRTrack_t4140821980 * __this, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TrackBuildRTrack::GetTrackCrownAngle(System.Single)
extern "C"  float TrackBuildRTrack_GetTrackCrownAngle_m1616740201 (TrackBuildRTrack_t4140821980 * __this, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TrackBuildRTrack::GetTrackCross(System.Single)
extern "C"  Vector3_t4282066566  TrackBuildRTrack_GetTrackCross_m726206045 (TrackBuildRTrack_t4140821980 * __this, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TrackBuildRTrack::GetTrackPercentage(TrackBuildRPoint)
extern "C"  float TrackBuildRTrack_GetTrackPercentage_m977336895 (TrackBuildRTrack_t4140821980 * __this, TrackBuildRPoint_t4137046561 * ___point0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TrackBuildRTrack::GetTrackPercentage(System.Int32)
extern "C"  float TrackBuildRTrack_GetTrackPercentage_m3398724497 (TrackBuildRTrack_t4140821980 * __this, int32_t ___pointIndex0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TrackBuildRTrack::GetNearestPointIndex(System.Single)
extern "C"  int32_t TrackBuildRTrack_GetNearestPointIndex_m346286766 (TrackBuildRTrack_t4140821980 * __this, float ___trackPercentage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TrackBuildRTrack::GetLastPointIndex(System.Single)
extern "C"  int32_t TrackBuildRTrack_GetLastPointIndex_m4057480430 (TrackBuildRTrack_t4140821980 * __this, float ___trackPercentage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TrackBuildRTrack::GetNextPointIndex(System.Single)
extern "C"  int32_t TrackBuildRTrack_GetNextPointIndex_m642873137 (TrackBuildRTrack_t4140821980 * __this, float ___trackPercentage0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TrackBuildRTrack::GetLeftBoundaryPosition(System.Single)
extern "C"  Vector3_t4282066566  TrackBuildRTrack_GetLeftBoundaryPosition_m827259352 (TrackBuildRTrack_t4140821980 * __this, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TrackBuildRTrack::GetRightBoundaryPosition(System.Single)
extern "C"  Vector3_t4282066566  TrackBuildRTrack_GetRightBoundaryPosition_m4230138195 (TrackBuildRTrack_t4140821980 * __this, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TrackBuildRTrack::GetTrackDirection(System.Single)
extern "C"  Vector3_t4282066566  TrackBuildRTrack_GetTrackDirection_m603779006 (TrackBuildRTrack_t4140821980 * __this, float ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRTrack::RecalculateCurves()
extern "C"  void TrackBuildRTrack_RecalculateCurves_m2354675572 (TrackBuildRTrack_t4140821980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TrackBuildRTrack::GetNearestPoint(UnityEngine.Vector3)
extern "C"  float TrackBuildRTrack_GetNearestPoint_m3449656544 (TrackBuildRTrack_t4140821980 * __this, Vector3_t4282066566  ___fromPostition0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRTrack::Clear()
extern "C"  void TrackBuildRTrack_Clear_m2090978410 (TrackBuildRTrack_t4140821980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// TrackBuildRPoint TrackBuildRTrack::GetPoint(System.Int32)
extern "C"  TrackBuildRPoint_t4137046561 * TrackBuildRTrack_GetPoint_m2762055948 (TrackBuildRTrack_t4140821980 * __this, int32_t ___index0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TrackBuildRTrack::SignedAngle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float TrackBuildRTrack_SignedAngle_m10541591 (TrackBuildRTrack_t4140821980 * __this, Vector3_t4282066566  ___from0, Vector3_t4282066566  ___to1, Vector3_t4282066566  ___up2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRTrack::TrackRendered()
extern "C"  void TrackBuildRTrack_TrackRendered_m2447191165 (TrackBuildRTrack_t4140821980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRTrack::SetTrackDirty()
extern "C"  void TrackBuildRTrack_SetTrackDirty_m1820625510 (TrackBuildRTrack_t4140821980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRTrack::ReRenderTrack()
extern "C"  void TrackBuildRTrack_ReRenderTrack_m3453006335 (TrackBuildRTrack_t4140821980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRTrack::GenerateSecondaryUVSet()
extern "C"  void TrackBuildRTrack_GenerateSecondaryUVSet_m2438338951 (TrackBuildRTrack_t4140821980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRTrack::OptimseMeshes()
extern "C"  void TrackBuildRTrack_OptimseMeshes_m2117301441 (TrackBuildRTrack_t4140821980 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
