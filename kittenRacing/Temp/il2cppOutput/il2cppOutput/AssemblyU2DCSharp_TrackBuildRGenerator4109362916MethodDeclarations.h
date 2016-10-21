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

// TrackBuildRGenerator
struct TrackBuildRGenerator_t4109362916;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"

// System.Void TrackBuildRGenerator::.ctor()
extern "C"  void TrackBuildRGenerator__ctor_m3424908343 (TrackBuildRGenerator_t4109362916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRGenerator::OnEnable()
extern "C"  void TrackBuildRGenerator_OnEnable_m2272941039 (TrackBuildRGenerator_t4109362916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrackBuildRGenerator::UpdateRender()
extern "C"  void TrackBuildRGenerator_UpdateRender_m748937772 (TrackBuildRGenerator_t4109362916 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TrackBuildRGenerator::CalculateUV(System.Int32,System.Int32,System.Single)
extern "C"  Vector2_t4282066565  TrackBuildRGenerator_CalculateUV_m3565220490 (TrackBuildRGenerator_t4109362916 * __this, int32_t ___i0, int32_t ___pointNumber1, float ___UVy2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single TrackBuildRGenerator::SignedAngle(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
extern "C"  float TrackBuildRGenerator_SignedAngle_m1860333343 (TrackBuildRGenerator_t4109362916 * __this, Vector3_t4282066566  ___from0, Vector3_t4282066566  ___to1, Vector3_t4282066566  ___up2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
