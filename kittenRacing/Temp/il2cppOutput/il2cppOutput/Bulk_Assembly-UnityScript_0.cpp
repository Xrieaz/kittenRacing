#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// kittenEvents
struct kittenEvents_t1552414080;
// UnityEngine.Animation
struct Animation_t1724966010;
// System.Object
struct Il2CppObject;
// kittenIthcing
struct kittenIthcing_t80417589;
// kittenMeow
struct kittenMeow_t2813007783;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array1146569071.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E86524790.h"
#include "AssemblyU2DUnityScript_U3CModuleU3E86524790MethodDeclarations.h"
#include "AssemblyU2DUnityScript_kittenEvents1552414080.h"
#include "AssemblyU2DUnityScript_kittenEvents1552414080MethodDeclarations.h"
#include "mscorlib_System_Void2863195528.h"
#include "UnityEngine_UnityEngine_MonoBehaviour667441552MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Component3501516275MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Animation1724966010MethodDeclarations.h"
#include "UnityEngine_UnityEngine_AnimationState3682323633MethodDeclarations.h"
#include "UnityEngine_UnityEngine_Animation1724966010.h"
#include "UnityEngine_UnityEngine_Component3501516275.h"
#include "mscorlib_System_String7231557.h"
#include "UnityEngine_UnityEngine_AnimationState3682323633.h"
#include "mscorlib_System_Int321153838500.h"
#include "UnityEngine_UnityEngine_WrapMode1491636113.h"
#include "UnityEngine_UnityEngine_Input4200062272MethodDeclarations.h"
#include "mscorlib_System_Boolean476798718.h"
#include "AssemblyU2DUnityScript_kittenIthcing80417589.h"
#include "AssemblyU2DUnityScript_kittenIthcing80417589MethodDeclarations.h"
#include "AssemblyU2DUnityScript_kittenMeow2813007783.h"
#include "AssemblyU2DUnityScript_kittenMeow2813007783MethodDeclarations.h"

// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C"  Il2CppObject * Component_GetComponent_TisIl2CppObject_m267839954_gshared (Component_t3501516275 * __this, const MethodInfo* method);
#define Component_GetComponent_TisIl2CppObject_m267839954(__this, method) ((  Il2CppObject * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animation>()
#define Component_GetComponent_TisAnimation_t1724966010_m3967689943(__this, method) ((  Animation_t1724966010 * (*) (Component_t3501516275 *, const MethodInfo*))Component_GetComponent_TisIl2CppObject_m267839954_gshared)(__this, method)
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void kittenEvents::.ctor()
extern "C"  void kittenEvents__ctor_m2793090320 (kittenEvents_t1552414080 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void kittenEvents::Start()
extern const MethodInfo* Component_GetComponent_TisAnimation_t1724966010_m3967689943_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral3783340700;
extern Il2CppCodeGenString* _stringLiteral2394528;
extern const uint32_t kittenEvents_Start_m1740228112_MetadataUsageId;
extern "C"  void kittenEvents_Start_m1740228112 (kittenEvents_t1552414080 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (kittenEvents_Start_m1740228112_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Animation_t1724966010 * L_0 = Component_GetComponent_TisAnimation_t1724966010_m3967689943(__this, /*hidden argument*/Component_GetComponent_TisAnimation_t1724966010_m3967689943_MethodInfo_var);
		NullCheck(L_0);
		AnimationState_t3682323633 * L_1 = Animation_get_Item_m2669576386(L_0, _stringLiteral3783340700, /*hidden argument*/NULL);
		NullCheck(L_1);
		AnimationState_set_layer_m2805758051(L_1, 1, /*hidden argument*/NULL);
		Animation_t1724966010 * L_2 = Component_GetComponent_TisAnimation_t1724966010_m3967689943(__this, /*hidden argument*/Component_GetComponent_TisAnimation_t1724966010_m3967689943_MethodInfo_var);
		NullCheck(L_2);
		AnimationState_t3682323633 * L_3 = Animation_get_Item_m2669576386(L_2, _stringLiteral3783340700, /*hidden argument*/NULL);
		NullCheck(L_3);
		AnimationState_set_wrapMode_m3837047690(L_3, 1, /*hidden argument*/NULL);
		Animation_t1724966010 * L_4 = Component_GetComponent_TisAnimation_t1724966010_m3967689943(__this, /*hidden argument*/Component_GetComponent_TisAnimation_t1724966010_m3967689943_MethodInfo_var);
		NullCheck(L_4);
		AnimationState_t3682323633 * L_5 = Animation_get_Item_m2669576386(L_4, _stringLiteral2394528, /*hidden argument*/NULL);
		NullCheck(L_5);
		AnimationState_set_layer_m2805758051(L_5, 1, /*hidden argument*/NULL);
		Animation_t1724966010 * L_6 = Component_GetComponent_TisAnimation_t1724966010_m3967689943(__this, /*hidden argument*/Component_GetComponent_TisAnimation_t1724966010_m3967689943_MethodInfo_var);
		NullCheck(L_6);
		AnimationState_t3682323633 * L_7 = Animation_get_Item_m2669576386(L_6, _stringLiteral2394528, /*hidden argument*/NULL);
		NullCheck(L_7);
		AnimationState_set_wrapMode_m3837047690(L_7, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void kittenEvents::Update()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisAnimation_t1724966010_m3967689943_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral99;
extern Il2CppCodeGenString* _stringLiteral3783340700;
extern Il2CppCodeGenString* _stringLiteral109;
extern Il2CppCodeGenString* _stringLiteral2394528;
extern const uint32_t kittenEvents_Update_m2413316093_MetadataUsageId;
extern "C"  void kittenEvents_Update_m2413316093 (kittenEvents_t1552414080 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (kittenEvents_Update_m2413316093_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKey_m3403617450(NULL /*static, unused*/, _stringLiteral99, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		Animation_t1724966010 * L_1 = Component_GetComponent_TisAnimation_t1724966010_m3967689943(__this, /*hidden argument*/Component_GetComponent_TisAnimation_t1724966010_m3967689943_MethodInfo_var);
		NullCheck(L_1);
		Animation_Play_m900498501(L_1, _stringLiteral3783340700, /*hidden argument*/NULL);
	}

IL_0020:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKey_m3403617450(NULL /*static, unused*/, _stringLiteral109, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		Animation_t1724966010 * L_3 = Component_GetComponent_TisAnimation_t1724966010_m3967689943(__this, /*hidden argument*/Component_GetComponent_TisAnimation_t1724966010_m3967689943_MethodInfo_var);
		NullCheck(L_3);
		Animation_Play_m900498501(L_3, _stringLiteral2394528, /*hidden argument*/NULL);
	}

IL_0040:
	{
		return;
	}
}
// System.Void kittenEvents::Main()
extern "C"  void kittenEvents_Main_m3746372013 (kittenEvents_t1552414080 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void kittenIthcing::.ctor()
extern "C"  void kittenIthcing__ctor_m3815381121 (kittenIthcing_t80417589 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void kittenIthcing::Start()
extern const MethodInfo* Component_GetComponent_TisAnimation_t1724966010_m3967689943_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2592589504;
extern const uint32_t kittenIthcing_Start_m2762518913_MetadataUsageId;
extern "C"  void kittenIthcing_Start_m2762518913 (kittenIthcing_t80417589 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (kittenIthcing_Start_m2762518913_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Animation_t1724966010 * L_0 = Component_GetComponent_TisAnimation_t1724966010_m3967689943(__this, /*hidden argument*/Component_GetComponent_TisAnimation_t1724966010_m3967689943_MethodInfo_var);
		NullCheck(L_0);
		AnimationState_t3682323633 * L_1 = Animation_get_Item_m2669576386(L_0, _stringLiteral2592589504, /*hidden argument*/NULL);
		NullCheck(L_1);
		AnimationState_set_layer_m2805758051(L_1, 1, /*hidden argument*/NULL);
		Animation_t1724966010 * L_2 = Component_GetComponent_TisAnimation_t1724966010_m3967689943(__this, /*hidden argument*/Component_GetComponent_TisAnimation_t1724966010_m3967689943_MethodInfo_var);
		NullCheck(L_2);
		AnimationState_t3682323633 * L_3 = Animation_get_Item_m2669576386(L_2, _stringLiteral2592589504, /*hidden argument*/NULL);
		NullCheck(L_3);
		AnimationState_set_wrapMode_m3837047690(L_3, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void kittenIthcing::Update()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisAnimation_t1724966010_m3967689943_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral99;
extern Il2CppCodeGenString* _stringLiteral2592589504;
extern const uint32_t kittenIthcing_Update_m4039559852_MetadataUsageId;
extern "C"  void kittenIthcing_Update_m4039559852 (kittenIthcing_t80417589 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (kittenIthcing_Update_m4039559852_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKey_m3403617450(NULL /*static, unused*/, _stringLiteral99, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		Animation_t1724966010 * L_1 = Component_GetComponent_TisAnimation_t1724966010_m3967689943(__this, /*hidden argument*/Component_GetComponent_TisAnimation_t1724966010_m3967689943_MethodInfo_var);
		NullCheck(L_1);
		Animation_Play_m900498501(L_1, _stringLiteral2592589504, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void kittenIthcing::Main()
extern "C"  void kittenIthcing_Main_m4194991132 (kittenIthcing_t80417589 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void kittenMeow::.ctor()
extern "C"  void kittenMeow__ctor_m1126934025 (kittenMeow_t2813007783 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m2022291967(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void kittenMeow::Start()
extern const MethodInfo* Component_GetComponent_TisAnimation_t1724966010_m3967689943_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2555316220;
extern const uint32_t kittenMeow_Start_m74071817_MetadataUsageId;
extern "C"  void kittenMeow_Start_m74071817 (kittenMeow_t2813007783 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (kittenMeow_Start_m74071817_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		Animation_t1724966010 * L_0 = Component_GetComponent_TisAnimation_t1724966010_m3967689943(__this, /*hidden argument*/Component_GetComponent_TisAnimation_t1724966010_m3967689943_MethodInfo_var);
		NullCheck(L_0);
		AnimationState_t3682323633 * L_1 = Animation_get_Item_m2669576386(L_0, _stringLiteral2555316220, /*hidden argument*/NULL);
		NullCheck(L_1);
		AnimationState_set_layer_m2805758051(L_1, 1, /*hidden argument*/NULL);
		Animation_t1724966010 * L_2 = Component_GetComponent_TisAnimation_t1724966010_m3967689943(__this, /*hidden argument*/Component_GetComponent_TisAnimation_t1724966010_m3967689943_MethodInfo_var);
		NullCheck(L_2);
		AnimationState_t3682323633 * L_3 = Animation_get_Item_m2669576386(L_2, _stringLiteral2555316220, /*hidden argument*/NULL);
		NullCheck(L_3);
		AnimationState_set_wrapMode_m3837047690(L_3, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void kittenMeow::Update()
extern Il2CppClass* Input_t4200062272_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisAnimation_t1724966010_m3967689943_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral109;
extern Il2CppCodeGenString* _stringLiteral2555316220;
extern const uint32_t kittenMeow_Update_m2302078500_MetadataUsageId;
extern "C"  void kittenMeow_Update_m2302078500 (kittenMeow_t2813007783 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		il2cpp_codegen_initialize_method (kittenMeow_Update_m2302078500_MetadataUsageId);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t4200062272_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKey_m3403617450(NULL /*static, unused*/, _stringLiteral109, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		Animation_t1724966010 * L_1 = Component_GetComponent_TisAnimation_t1724966010_m3967689943(__this, /*hidden argument*/Component_GetComponent_TisAnimation_t1724966010_m3967689943_MethodInfo_var);
		NullCheck(L_1);
		Animation_Play_m900498501(L_1, _stringLiteral2555316220, /*hidden argument*/NULL);
	}

IL_0020:
	{
		return;
	}
}
// System.Void kittenMeow::Main()
extern "C"  void kittenMeow_Main_m3969719700 (kittenMeow_t2813007783 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
