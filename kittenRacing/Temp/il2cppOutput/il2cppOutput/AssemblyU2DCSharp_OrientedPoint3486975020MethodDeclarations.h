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

// OrientedPoint
struct OrientedPoint_t3486975020;
struct OrientedPoint_t3486975020_marshaled_pinvoke;
struct OrientedPoint_t3486975020_marshaled_com;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_OrientedPoint3486975020.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

// System.Void OrientedPoint::.ctor(UnityEngine.Vector3,UnityEngine.Quaternion,System.Single)
extern "C"  void OrientedPoint__ctor_m372369020 (OrientedPoint_t3486975020 * __this, Vector3_t4282066566  ___position0, Quaternion_t1553702882  ___rotation1, float ___vCoordinate2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 OrientedPoint::LocalToWorld(UnityEngine.Vector3)
extern "C"  Vector3_t4282066566  OrientedPoint_LocalToWorld_m1487285794 (OrientedPoint_t3486975020 * __this, Vector3_t4282066566  ___point0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 OrientedPoint::WorldToLocal(UnityEngine.Vector3)
extern "C"  Vector3_t4282066566  OrientedPoint_WorldToLocal_m3810101136 (OrientedPoint_t3486975020 * __this, Vector3_t4282066566  ___point0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 OrientedPoint::LocalToWorldDirection(UnityEngine.Vector3)
extern "C"  Vector3_t4282066566  OrientedPoint_LocalToWorldDirection_m1832842639 (OrientedPoint_t3486975020 * __this, Vector3_t4282066566  ___dir0, const MethodInfo* method) IL2CPP_METHOD_ATTR;

// Methods for marshaling
struct OrientedPoint_t3486975020;
struct OrientedPoint_t3486975020_marshaled_pinvoke;

extern "C" void OrientedPoint_t3486975020_marshal_pinvoke(const OrientedPoint_t3486975020& unmarshaled, OrientedPoint_t3486975020_marshaled_pinvoke& marshaled);
extern "C" void OrientedPoint_t3486975020_marshal_pinvoke_back(const OrientedPoint_t3486975020_marshaled_pinvoke& marshaled, OrientedPoint_t3486975020& unmarshaled);
extern "C" void OrientedPoint_t3486975020_marshal_pinvoke_cleanup(OrientedPoint_t3486975020_marshaled_pinvoke& marshaled);

// Methods for marshaling
struct OrientedPoint_t3486975020;
struct OrientedPoint_t3486975020_marshaled_com;

extern "C" void OrientedPoint_t3486975020_marshal_com(const OrientedPoint_t3486975020& unmarshaled, OrientedPoint_t3486975020_marshaled_com& marshaled);
extern "C" void OrientedPoint_t3486975020_marshal_com_back(const OrientedPoint_t3486975020_marshaled_com& marshaled, OrientedPoint_t3486975020& unmarshaled);
extern "C" void OrientedPoint_t3486975020_marshal_com_cleanup(OrientedPoint_t3486975020_marshaled_com& marshaled);
