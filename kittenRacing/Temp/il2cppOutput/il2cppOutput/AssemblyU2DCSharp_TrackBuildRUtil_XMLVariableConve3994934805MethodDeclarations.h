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

// TrackBuildRUtil.XMLVariableConverter
struct XMLVariableConverter_t3994934805;
// System.String
struct String_t;
// System.Xml.XmlNode
struct XmlNode_t856910923;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "System_Xml_System_Xml_XmlNode856910923.h"

// System.Void TrackBuildRUtil.XMLVariableConverter::.ctor()
extern "C"  void XMLVariableConverter__ctor_m3049801233 (XMLVariableConverter_t3994934805 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TrackBuildRUtil.XMLVariableConverter::ToXML(UnityEngine.Quaternion,System.String)
extern "C"  String_t* XMLVariableConverter_ToXML_m1290385231 (Il2CppObject * __this /* static, unused */, Quaternion_t1553702882  ___variable0, String_t* ___variableName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TrackBuildRUtil.XMLVariableConverter::ToXML(UnityEngine.Vector3,System.String)
extern "C"  String_t* XMLVariableConverter_ToXML_m3403322061 (Il2CppObject * __this /* static, unused */, Vector3_t4282066566  ___variable0, String_t* ___variableName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TrackBuildRUtil.XMLVariableConverter::ToXML(UnityEngine.Vector2,System.String)
extern "C"  String_t* XMLVariableConverter_ToXML_m3913856238 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___variable0, String_t* ___variableName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String TrackBuildRUtil.XMLVariableConverter::ToXML(UnityEngine.Color,System.String)
extern "C"  String_t* XMLVariableConverter_ToXML_m2735972442 (Il2CppObject * __this /* static, unused */, Color_t4194546905  ___variable0, String_t* ___variableName1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion TrackBuildRUtil.XMLVariableConverter::FromXMLQuaternion(System.Xml.XmlNode)
extern "C"  Quaternion_t1553702882  XMLVariableConverter_FromXMLQuaternion_m1735561743 (Il2CppObject * __this /* static, unused */, XmlNode_t856910923 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 TrackBuildRUtil.XMLVariableConverter::FromXMLVector3(System.Xml.XmlNode)
extern "C"  Vector3_t4282066566  XMLVariableConverter_FromXMLVector3_m177679469 (Il2CppObject * __this /* static, unused */, XmlNode_t856910923 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 TrackBuildRUtil.XMLVariableConverter::FromXMLVector2(System.Xml.XmlNode)
extern "C"  Vector2_t4282066565  XMLVariableConverter_FromXMLVector2_m3817684429 (Il2CppObject * __this /* static, unused */, XmlNode_t856910923 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color TrackBuildRUtil.XMLVariableConverter::FromXMLtoColour(System.Xml.XmlNode)
extern "C"  Color_t4194546905  XMLVariableConverter_FromXMLtoColour_m2994530009 (Il2CppObject * __this /* static, unused */, XmlNode_t856910923 * ___node0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
