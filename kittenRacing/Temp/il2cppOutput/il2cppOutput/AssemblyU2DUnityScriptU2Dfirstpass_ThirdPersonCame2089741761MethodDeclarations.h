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

// ThirdPersonCamera
struct ThirdPersonCamera_t2089741761;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void ThirdPersonCamera::.ctor()
extern "C"  void ThirdPersonCamera__ctor_m582025601 (ThirdPersonCamera_t2089741761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::Awake()
extern "C"  void ThirdPersonCamera_Awake_m819630820 (ThirdPersonCamera_t2089741761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::DebugDrawStuff()
extern "C"  void ThirdPersonCamera_DebugDrawStuff_m2327878624 (ThirdPersonCamera_t2089741761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single ThirdPersonCamera::AngleDistance(System.Single,System.Single)
extern "C"  float ThirdPersonCamera_AngleDistance_m4229444829 (ThirdPersonCamera_t2089741761 * __this, float ___a0, float ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::Apply(UnityEngine.Transform,UnityEngine.Vector3)
extern "C"  void ThirdPersonCamera_Apply_m1143664739 (ThirdPersonCamera_t2089741761 * __this, Transform_t1659122786 * ___dummyTarget0, Vector3_t4282066566  ___dummyCenter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::LateUpdate()
extern "C"  void ThirdPersonCamera_LateUpdate_m3988656498 (ThirdPersonCamera_t2089741761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::Cut(UnityEngine.Transform,UnityEngine.Vector3)
extern "C"  void ThirdPersonCamera_Cut_m286332303 (ThirdPersonCamera_t2089741761 * __this, Transform_t1659122786 * ___dummyTarget0, Vector3_t4282066566  ___dummyCenter1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::SetUpRotation(UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  void ThirdPersonCamera_SetUpRotation_m3886350994 (ThirdPersonCamera_t2089741761 * __this, Vector3_t4282066566  ___centerPos0, Vector3_t4282066566  ___headPos1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 ThirdPersonCamera::GetCenterOffset()
extern "C"  Vector3_t4282066566  ThirdPersonCamera_GetCenterOffset_m1116354263 (ThirdPersonCamera_t2089741761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ThirdPersonCamera::Main()
extern "C"  void ThirdPersonCamera_Main_m2982310684 (ThirdPersonCamera_t2089741761 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
