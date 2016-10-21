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

// SplineMaths
struct SplineMaths_t3123938554;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

// System.Void SplineMaths::.ctor()
extern "C"  void SplineMaths__ctor_m3496275889 (SplineMaths_t3123938554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 SplineMaths::CalculateBezierPoint(System.Single,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  Vector3_t4282066566  SplineMaths_CalculateBezierPoint_m138961875 (Il2CppObject * __this /* static, unused */, float ___t0, Vector3_t4282066566  ___p01, Vector3_t4282066566  ___p12, Vector3_t4282066566  ___p23, Vector3_t4282066566  ___p34, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 SplineMaths::CalculateBezierPoint(System.Single,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  Vector2_t4282066565  SplineMaths_CalculateBezierPoint_m1375728696 (Il2CppObject * __this /* static, unused */, float ___t0, Vector2_t4282066565  ___p01, Vector2_t4282066565  ___p12, Vector2_t4282066565  ___p23, Vector2_t4282066565  ___p34, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion SplineMaths::CalculateCubicRotation(UnityEngine.Quaternion,UnityEngine.Quaternion,UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C"  Quaternion_t1553702882  SplineMaths_CalculateCubicRotation_m2890932606 (Il2CppObject * __this /* static, unused */, Quaternion_t1553702882  ___p0, Quaternion_t1553702882  ___a1, Quaternion_t1553702882  ___b2, Quaternion_t1553702882  ___q3, float ___t4, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SplineMaths::CalculateHermite(System.Single)
extern "C"  float SplineMaths_CalculateHermite_m4269500424 (Il2CppObject * __this /* static, unused */, float ___val0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion SplineMaths::SquadTangent(UnityEngine.Quaternion,UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  Quaternion_t1553702882  SplineMaths_SquadTangent_m1656726977 (Il2CppObject * __this /* static, unused */, Quaternion_t1553702882  ___before0, Quaternion_t1553702882  ___center1, Quaternion_t1553702882  ___after2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion SplineMaths::lnDif(UnityEngine.Quaternion,UnityEngine.Quaternion)
extern "C"  Quaternion_t1553702882  SplineMaths_lnDif_m491658128 (Il2CppObject * __this /* static, unused */, Quaternion_t1553702882  ___a0, Quaternion_t1553702882  ___b1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion SplineMaths::Normalize(UnityEngine.Quaternion)
extern "C"  Quaternion_t1553702882  SplineMaths_Normalize_m4173833583 (Il2CppObject * __this /* static, unused */, Quaternion_t1553702882  ___q0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion SplineMaths::exp(UnityEngine.Quaternion)
extern "C"  Quaternion_t1553702882  SplineMaths_exp_m4175655199 (Il2CppObject * __this /* static, unused */, Quaternion_t1553702882  ___q0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion SplineMaths::log(UnityEngine.Quaternion)
extern "C"  Quaternion_t1553702882  SplineMaths_log_m3552855366 (Il2CppObject * __this /* static, unused */, Quaternion_t1553702882  ___q0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion SplineMaths::Slerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C"  Quaternion_t1553702882  SplineMaths_Slerp_m348352938 (Il2CppObject * __this /* static, unused */, Quaternion_t1553702882  ___p0, Quaternion_t1553702882  ___q1, float ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion SplineMaths::Nlerp(UnityEngine.Quaternion,UnityEngine.Quaternion,System.Single)
extern "C"  Quaternion_t1553702882  SplineMaths_Nlerp_m30787855 (Il2CppObject * __this /* static, unused */, Quaternion_t1553702882  ___p0, Quaternion_t1553702882  ___q1, float ___t2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion SplineMaths::GetQuatConjugate(UnityEngine.Quaternion)
extern "C"  Quaternion_t1553702882  SplineMaths_GetQuatConjugate_m2612976193 (Il2CppObject * __this /* static, unused */, Quaternion_t1553702882  ___q0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SplineMaths::ClampAngle(System.Single,System.Single,System.Single)
extern "C"  float SplineMaths_ClampAngle_m1200583062 (Il2CppObject * __this /* static, unused */, float ___angle0, float ___from1, float ___to2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single SplineMaths::ClampAngle(System.Single)
extern "C"  float SplineMaths_ClampAngle_m29874828 (Il2CppObject * __this /* static, unused */, float ___angle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
