﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.ParticleSystem
struct ParticleSystem_t381473177;
// UnityEngine.ParticleSystem/IteratorDelegate
struct IteratorDelegate_t4269758102;
// UnityEngine.Transform
struct Transform_t1659122786;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_ParticleSystem381473177.h"
#include "UnityEngine_UnityEngine_ParticleSystem_IteratorDel4269758102.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"

// System.Boolean UnityEngine.ParticleSystem::Internal_Stop(UnityEngine.ParticleSystem)
extern "C"  bool ParticleSystem_Internal_Stop_m4175525512 (Il2CppObject * __this /* static, unused */, ParticleSystem_t381473177 * ___self0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Stop()
extern "C"  void ParticleSystem_Stop_m1331160206 (ParticleSystem_t381473177 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Stop(System.Boolean)
extern "C"  void ParticleSystem_Stop_m1876199813 (ParticleSystem_t381473177 * __this, bool ___withChildren0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::Emit(System.Int32)
extern "C"  void ParticleSystem_Emit_m1128282864 (ParticleSystem_t381473177 * __this, int32_t ___count0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ParticleSystem::INTERNAL_CALL_Emit(UnityEngine.ParticleSystem,System.Int32)
extern "C"  void ParticleSystem_INTERNAL_CALL_Emit_m2738975429 (Il2CppObject * __this /* static, unused */, ParticleSystem_t381473177 * ___self0, int32_t ___count1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::IterateParticleSystems(System.Boolean,UnityEngine.ParticleSystem/IteratorDelegate)
extern "C"  bool ParticleSystem_IterateParticleSystems_m2232250723 (ParticleSystem_t381473177 * __this, bool ___recurse0, IteratorDelegate_t4269758102 * ___func1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::IterateParticleSystemsRecursive(UnityEngine.Transform,UnityEngine.ParticleSystem/IteratorDelegate)
extern "C"  bool ParticleSystem_IterateParticleSystemsRecursive_m389741621 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___transform0, IteratorDelegate_t4269758102 * ___func1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.ParticleSystem::<Stop>m__2(UnityEngine.ParticleSystem)
extern "C"  bool ParticleSystem_U3CStopU3Em__2_m2892570987 (Il2CppObject * __this /* static, unused */, ParticleSystem_t381473177 * ___ps0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
