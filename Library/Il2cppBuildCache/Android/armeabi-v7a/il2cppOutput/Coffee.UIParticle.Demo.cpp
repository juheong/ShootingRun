#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<UnityEngine.Transform>
struct Action_1_t018138B4CBF5B6B867B79945B5ACB92C21456DE7;
// System.Action`1<Coffee.UIExtensions.UIParticle>
struct Action_1_t09F525F43A32BF424791557854B156F4D9403D4D;
// System.Collections.Generic.HashSet`1<UnityEngine.UI.IClippable>
struct HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38;
// System.Collections.Generic.HashSet`1<UnityEngine.UI.MaskableGraphic>
struct HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
struct List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63;
// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>
struct List_1_t5709CD2CBFF795FF126CD146B019D4F8EC972EA0;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0;
// System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticle>
struct List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// Coffee.UIExtensions.AnimatableProperty[]
struct AnimatablePropertyU5BU5D_t6C258C617AAB73DF8E000037B670ED757286E1DD;
// UnityEngine.Animator[]
struct AnimatorU5BU5D_tCE401FBE19F331BC5946D07EDB3BF24F3FD888A2;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.UI.Mask[]
struct MaskU5BU5D_t167C647F5E42B90615C5168C07EA571A905590FD;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7;
// UnityEngine.UI.RectMask2D[]
struct RectMask2DU5BU5D_tB3154B58708CFB10CC9FCB6C15301C2EFEAAB2D7;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// Coffee.UIExtensions.UIParticle[]
struct UIParticleU5BU5D_t121270CDE2DFB68E154FAA2CDD401ED60988CA26;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.UI.Mask
struct Mask_t8DE5E31E7C928D3B32AA60E36E49B4DCFED4417D;
// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.ParticleSystem
struct ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E;
// UnityEngine.ParticleSystemRenderer
struct ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.UI.RectangularVertexClipper
struct RectangularVertexClipper_t34360F92063A8540ABA87922B62269ADA99EB5E7;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Shader
struct Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E;
// Coffee.UIExtensions.UIParticle
struct UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E;
// Coffee.UIExtensions.Demos.UIParticleSystem_Demo
struct UIParticleSystem_Demo_t1D214B17155CF88C2C6AF99583C3F6297D79E66B;
// Coffee.UIExtensions.Demo.UIParticle_Demo
struct UIParticle_Demo_t5AD82A4FE6A6A48E30C026CEA5F91CCE239E2B27;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// Coffee.UIExtensions.Demo.UIParticle_Demo/<>c__DisplayClass8_0
struct U3CU3Ec__DisplayClass8_0_t283154FF27B91AB111F28C923C07D11D71534F43;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t018138B4CBF5B6B867B79945B5ACB92C21456DE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t09F525F43A32BF424791557854B156F4D9403D4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass8_0_t283154FF27B91AB111F28C923C07D11D71534F43_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21;
IL2CPP_EXTERN_C String_t* _stringLiteral54F48823060A5886D12558C4BBB0CDBB0E83F58A;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mD2CE23274C0262B2EDCC0A58819E931CD69DE140_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mF1CCB00FD33FDB4B265B700D9066CED98601C772_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD63281542675697ADC038B664E30F73F6BC1F1D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m433D0F036D744378DDD67C566DDC69B19052E933_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ForEach_m13DCD577F8287F50BF39B106F1234376691FFDF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ForEach_m2AE32B8064EAC467E4492B97F1B02DB26DE48802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7D1A839C1BAE4BD9CCBD0203D0AF23A6C337B4F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF1D464BA700E6389AEA8AF2F197270F387D9A41F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m8800B20C99AC8962ED4CD2935D35CD235A1CE85B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisMask_t8DE5E31E7C928D3B32AA60E36E49B4DCFED4417D_m135B38DAEE1FB8B9E8139692B41D3A06E1FC1FA5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_mAC0C66B0266541B72238324BB2D44DB64319A7B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisRectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15_mBC4C1E2503E0C715D887445C4E68A60980D0139F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisUIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_mA205BB9F2D055434C58BD7F12E89A244EC1CAF57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CSetScaleU3Eb__0_m641D93EACE7282F8EA577044BE210C8FB186A036_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass8_0_U3CSetScaleU3Eb__1_mD9941A1C6A695DE9B77781B0EC522F04E447C4B0_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct AnimatorU5BU5D_tCE401FBE19F331BC5946D07EDB3BF24F3FD888A2;
struct MaskU5BU5D_t167C647F5E42B90615C5168C07EA571A905590FD;
struct ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7;
struct RectMask2DU5BU5D_tB3154B58708CFB10CC9FCB6C15301C2EFEAAB2D7;
struct UIParticleU5BU5D_t121270CDE2DFB68E154FAA2CDD401ED60988CA26;
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
struct ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tE8FA700CC52E817B9E1F154580E2772551BC0986 
{
public:

public:
};


// System.Object


// System.Collections.Generic.List`1<UnityEngine.Transform>
struct  List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____items_1)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get__items_1() const { return ____items_1; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_StaticFields, ____emptyArray_5)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticle>
struct  List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UIParticleU5BU5D_t121270CDE2DFB68E154FAA2CDD401ED60988CA26* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF, ____items_1)); }
	inline UIParticleU5BU5D_t121270CDE2DFB68E154FAA2CDD401ED60988CA26* get__items_1() const { return ____items_1; }
	inline UIParticleU5BU5D_t121270CDE2DFB68E154FAA2CDD401ED60988CA26** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UIParticleU5BU5D_t121270CDE2DFB68E154FAA2CDD401ED60988CA26* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UIParticleU5BU5D_t121270CDE2DFB68E154FAA2CDD401ED60988CA26* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF_StaticFields, ____emptyArray_5)); }
	inline UIParticleU5BU5D_t121270CDE2DFB68E154FAA2CDD401ED60988CA26* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UIParticleU5BU5D_t121270CDE2DFB68E154FAA2CDD401ED60988CA26** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UIParticleU5BU5D_t121270CDE2DFB68E154FAA2CDD401ED60988CA26* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Coffee.UIExtensions.Demo.UIParticle_Demo/<>c__DisplayClass8_0
struct  U3CU3Ec__DisplayClass8_0_t283154FF27B91AB111F28C923C07D11D71534F43  : public RuntimeObject
{
public:
	// System.Single Coffee.UIExtensions.Demo.UIParticle_Demo/<>c__DisplayClass8_0::scale
	float ___scale_0;

public:
	inline static int32_t get_offset_of_scale_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass8_0_t283154FF27B91AB111F28C923C07D11D71534F43, ___scale_0)); }
	inline float get_scale_0() const { return ___scale_0; }
	inline float* get_address_of_scale_0() { return &___scale_0; }
	inline void set_scale_0(float value)
	{
		___scale_0 = value;
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.Color32
struct  Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Rect
struct  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector2Int
struct  Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 
{
public:
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;

public:
	inline static int32_t get_offset_of_m_X_0() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_X_0)); }
	inline int32_t get_m_X_0() const { return ___m_X_0; }
	inline int32_t* get_address_of_m_X_0() { return &___m_X_0; }
	inline void set_m_X_0(int32_t value)
	{
		___m_X_0 = value;
	}

	inline static int32_t get_offset_of_m_Y_1() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9, ___m_Y_1)); }
	inline int32_t get_m_Y_1() const { return ___m_Y_1; }
	inline int32_t* get_address_of_m_Y_1() { return &___m_Y_1; }
	inline void set_m_Y_1(int32_t value)
	{
		___m_Y_1 = value;
	}
};

struct Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields
{
public:
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___s_Right_7;

public:
	inline static int32_t get_offset_of_s_Zero_2() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Zero_2)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Zero_2() const { return ___s_Zero_2; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Zero_2() { return &___s_Zero_2; }
	inline void set_s_Zero_2(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Zero_2 = value;
	}

	inline static int32_t get_offset_of_s_One_3() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_One_3)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_One_3() const { return ___s_One_3; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_One_3() { return &___s_One_3; }
	inline void set_s_One_3(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_One_3 = value;
	}

	inline static int32_t get_offset_of_s_Up_4() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Up_4)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Up_4() const { return ___s_Up_4; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Up_4() { return &___s_Up_4; }
	inline void set_s_Up_4(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Up_4 = value;
	}

	inline static int32_t get_offset_of_s_Down_5() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Down_5)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Down_5() const { return ___s_Down_5; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Down_5() { return &___s_Down_5; }
	inline void set_s_Down_5(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Down_5 = value;
	}

	inline static int32_t get_offset_of_s_Left_6() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Left_6)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Left_6() const { return ___s_Left_6; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Left_6() { return &___s_Left_6; }
	inline void set_s_Left_6(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Left_6 = value;
	}

	inline static int32_t get_offset_of_s_Right_7() { return static_cast<int32_t>(offsetof(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9_StaticFields, ___s_Right_7)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_s_Right_7() const { return ___s_Right_7; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_s_Right_7() { return &___s_Right_7; }
	inline void set_s_Right_7(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___s_Right_7 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.ParticleSystem/MainModule
struct  MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/MainModule::m_ParticleSystem
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParticleSystem_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B_marshaled_pinvoke
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/MainModule
struct MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B_marshaled_com
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/TextureSheetAnimationModule
struct  TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/TextureSheetAnimationModule::m_ParticleSystem
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParticleSystem_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/TextureSheetAnimationModule
struct TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2_marshaled_pinvoke
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/TextureSheetAnimationModule
struct TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2_marshaled_com
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};

// UnityEngine.ParticleSystem/TrailModule
struct  TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/TrailModule::m_ParticleSystem
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParticleSystem_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/TrailModule
struct TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_marshaled_pinvoke
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/TrailModule
struct TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8_marshaled_com
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};

// UnityEngine.AnimationCurve
struct  AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.ParticleSystemAnimationType
struct  ParticleSystemAnimationType_t047E86A9ED85760203E2DAA7E75F58AD74297CFA 
{
public:
	// System.Int32 UnityEngine.ParticleSystemAnimationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParticleSystemAnimationType_t047E86A9ED85760203E2DAA7E75F58AD74297CFA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ParticleSystemCurveMode
struct  ParticleSystemCurveMode_t1B9D50590BC22BDD142A21664B8E2F9475409342 
{
public:
	// System.Int32 UnityEngine.ParticleSystemCurveMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParticleSystemCurveMode_t1B9D50590BC22BDD142A21664B8E2F9475409342, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ParticleSystemScalingMode
struct  ParticleSystemScalingMode_t7412EA1EC1652B7889578A8B3F5A26739AB270C2 
{
public:
	// System.Int32 UnityEngine.ParticleSystemScalingMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParticleSystemScalingMode_t7412EA1EC1652B7889578A8B3F5A26739AB270C2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ParticleSystemSimulationSpace
struct  ParticleSystemSimulationSpace_tC10E7C116E400697EDF9E5C81AD5BAAFD08F4C11 
{
public:
	// System.Int32 UnityEngine.ParticleSystemSimulationSpace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParticleSystemSimulationSpace_tC10E7C116E400697EDF9E5C81AD5BAAFD08F4C11, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ParticleSystemTrailMode
struct  ParticleSystemTrailMode_t6C4AE51DD0B1B937CBC5CC43A25997674284862A 
{
public:
	// System.Int32 UnityEngine.ParticleSystemTrailMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParticleSystemTrailMode_t6C4AE51DD0B1B937CBC5CC43A25997674284862A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.RenderMode
struct  RenderMode_tFF8E9ABC771ACEBD5ACC2D9DFB02264E0EA6CDBF 
{
public:
	// System.Int32 UnityEngine.RenderMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderMode_tFF8E9ABC771ACEBD5ACC2D9DFB02264E0EA6CDBF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UIVertex
struct  UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A 
{
public:
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal_1;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___tangent_2;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_3;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv0
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv0_4;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv1
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv1_5;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv2
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv2_6;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv3
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv3_7;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_normal_1() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_normal_1() const { return ___normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_normal_1() { return &___normal_1; }
	inline void set_normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___normal_1 = value;
	}

	inline static int32_t get_offset_of_tangent_2() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___tangent_2)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_tangent_2() const { return ___tangent_2; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_tangent_2() { return &___tangent_2; }
	inline void set_tangent_2(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___tangent_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___color_3)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_3() const { return ___color_3; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_uv0_4() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv0_4)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv0_4() const { return ___uv0_4; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv0_4() { return &___uv0_4; }
	inline void set_uv0_4(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv0_4 = value;
	}

	inline static int32_t get_offset_of_uv1_5() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv1_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv1_5() const { return ___uv1_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv1_5() { return &___uv1_5; }
	inline void set_uv1_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv1_5 = value;
	}

	inline static int32_t get_offset_of_uv2_6() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv2_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv2_6() const { return ___uv2_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv2_6() { return &___uv2_6; }
	inline void set_uv2_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv2_6 = value;
	}

	inline static int32_t get_offset_of_uv3_7() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv3_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv3_7() const { return ___uv3_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv3_7() { return &___uv3_7; }
	inline void set_uv3_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv3_7 = value;
	}
};

struct UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields
{
public:
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___s_DefaultColor_8;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___s_DefaultTangent_9;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  ___simpleVert_10;

public:
	inline static int32_t get_offset_of_s_DefaultColor_8() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields, ___s_DefaultColor_8)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_s_DefaultColor_8() const { return ___s_DefaultColor_8; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_s_DefaultColor_8() { return &___s_DefaultColor_8; }
	inline void set_s_DefaultColor_8(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___s_DefaultColor_8 = value;
	}

	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_simpleVert_10() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields, ___simpleVert_10)); }
	inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  get_simpleVert_10() const { return ___simpleVert_10; }
	inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A * get_address_of_simpleVert_10() { return &___simpleVert_10; }
	inline void set_simpleVert_10(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  value)
	{
		___simpleVert_10 = value;
	}
};


// UnityEngine.UI.VertexHelper
struct  VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Positions
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___m_Positions_0;
	// System.Collections.Generic.List`1<UnityEngine.Color32> UnityEngine.UI.VertexHelper::m_Colors
	List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * ___m_Colors_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv0S
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Uv0S_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv1S
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Uv1S_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv2S
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Uv2S_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv3S
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Uv3S_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Normals
	List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___m_Normals_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Tangents
	List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___m_Tangents_7;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UI.VertexHelper::m_Indices
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___m_Indices_8;
	// System.Boolean UnityEngine.UI.VertexHelper::m_ListsInitalized
	bool ___m_ListsInitalized_11;

public:
	inline static int32_t get_offset_of_m_Positions_0() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Positions_0)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_m_Positions_0() const { return ___m_Positions_0; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_m_Positions_0() { return &___m_Positions_0; }
	inline void set_m_Positions_0(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___m_Positions_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Positions_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Colors_1() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Colors_1)); }
	inline List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * get_m_Colors_1() const { return ___m_Colors_1; }
	inline List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 ** get_address_of_m_Colors_1() { return &___m_Colors_1; }
	inline void set_m_Colors_1(List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * value)
	{
		___m_Colors_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Colors_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uv0S_2() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Uv0S_2)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Uv0S_2() const { return ___m_Uv0S_2; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Uv0S_2() { return &___m_Uv0S_2; }
	inline void set_m_Uv0S_2(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Uv0S_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uv0S_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uv1S_3() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Uv1S_3)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Uv1S_3() const { return ___m_Uv1S_3; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Uv1S_3() { return &___m_Uv1S_3; }
	inline void set_m_Uv1S_3(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Uv1S_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uv1S_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uv2S_4() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Uv2S_4)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Uv2S_4() const { return ___m_Uv2S_4; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Uv2S_4() { return &___m_Uv2S_4; }
	inline void set_m_Uv2S_4(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Uv2S_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uv2S_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Uv3S_5() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Uv3S_5)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Uv3S_5() const { return ___m_Uv3S_5; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Uv3S_5() { return &___m_Uv3S_5; }
	inline void set_m_Uv3S_5(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Uv3S_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Uv3S_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Normals_6() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Normals_6)); }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * get_m_Normals_6() const { return ___m_Normals_6; }
	inline List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 ** get_address_of_m_Normals_6() { return &___m_Normals_6; }
	inline void set_m_Normals_6(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * value)
	{
		___m_Normals_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Normals_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Tangents_7() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Tangents_7)); }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * get_m_Tangents_7() const { return ___m_Tangents_7; }
	inline List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A ** get_address_of_m_Tangents_7() { return &___m_Tangents_7; }
	inline void set_m_Tangents_7(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * value)
	{
		___m_Tangents_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tangents_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Indices_8() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_Indices_8)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_m_Indices_8() const { return ___m_Indices_8; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_m_Indices_8() { return &___m_Indices_8; }
	inline void set_m_Indices_8(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___m_Indices_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Indices_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_ListsInitalized_11() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55, ___m_ListsInitalized_11)); }
	inline bool get_m_ListsInitalized_11() const { return ___m_ListsInitalized_11; }
	inline bool* get_address_of_m_ListsInitalized_11() { return &___m_ListsInitalized_11; }
	inline void set_m_ListsInitalized_11(bool value)
	{
		___m_ListsInitalized_11 = value;
	}
};

struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.UI.VertexHelper::s_DefaultTangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___s_DefaultTangent_9;
	// UnityEngine.Vector3 UnityEngine.UI.VertexHelper::s_DefaultNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___s_DefaultNormal_10;

public:
	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_s_DefaultNormal_10() { return static_cast<int32_t>(offsetof(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55_StaticFields, ___s_DefaultNormal_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_s_DefaultNormal_10() const { return ___s_DefaultNormal_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_s_DefaultNormal_10() { return &___s_DefaultNormal_10; }
	inline void set_s_DefaultNormal_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___s_DefaultNormal_10 = value;
	}
};


// UnityEngine.ParticleSystem/Particle
struct  Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 
{
public:
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Position_0;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Velocity_1;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AnimatedVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_AnimatedVelocity_2;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_InitialVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_InitialVelocity_3;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AxisOfRotation
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_AxisOfRotation_4;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_Rotation
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Rotation_5;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_AngularVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_AngularVelocity_6;
	// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::m_StartSize
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_StartSize_7;
	// UnityEngine.Color32 UnityEngine.ParticleSystem/Particle::m_StartColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___m_StartColor_8;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_RandomSeed
	uint32_t ___m_RandomSeed_9;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_ParentRandomSeed
	uint32_t ___m_ParentRandomSeed_10;
	// System.Single UnityEngine.ParticleSystem/Particle::m_Lifetime
	float ___m_Lifetime_11;
	// System.Single UnityEngine.ParticleSystem/Particle::m_StartLifetime
	float ___m_StartLifetime_12;
	// System.Int32 UnityEngine.ParticleSystem/Particle::m_MeshIndex
	int32_t ___m_MeshIndex_13;
	// System.Single UnityEngine.ParticleSystem/Particle::m_EmitAccumulator0
	float ___m_EmitAccumulator0_14;
	// System.Single UnityEngine.ParticleSystem/Particle::m_EmitAccumulator1
	float ___m_EmitAccumulator1_15;
	// System.UInt32 UnityEngine.ParticleSystem/Particle::m_Flags
	uint32_t ___m_Flags_16;

public:
	inline static int32_t get_offset_of_m_Position_0() { return static_cast<int32_t>(offsetof(Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1, ___m_Position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Position_0() const { return ___m_Position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Position_0() { return &___m_Position_0; }
	inline void set_m_Position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Position_0 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_1() { return static_cast<int32_t>(offsetof(Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1, ___m_Velocity_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Velocity_1() const { return ___m_Velocity_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Velocity_1() { return &___m_Velocity_1; }
	inline void set_m_Velocity_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Velocity_1 = value;
	}

	inline static int32_t get_offset_of_m_AnimatedVelocity_2() { return static_cast<int32_t>(offsetof(Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1, ___m_AnimatedVelocity_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_AnimatedVelocity_2() const { return ___m_AnimatedVelocity_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_AnimatedVelocity_2() { return &___m_AnimatedVelocity_2; }
	inline void set_m_AnimatedVelocity_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_AnimatedVelocity_2 = value;
	}

	inline static int32_t get_offset_of_m_InitialVelocity_3() { return static_cast<int32_t>(offsetof(Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1, ___m_InitialVelocity_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_InitialVelocity_3() const { return ___m_InitialVelocity_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_InitialVelocity_3() { return &___m_InitialVelocity_3; }
	inline void set_m_InitialVelocity_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_InitialVelocity_3 = value;
	}

	inline static int32_t get_offset_of_m_AxisOfRotation_4() { return static_cast<int32_t>(offsetof(Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1, ___m_AxisOfRotation_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_AxisOfRotation_4() const { return ___m_AxisOfRotation_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_AxisOfRotation_4() { return &___m_AxisOfRotation_4; }
	inline void set_m_AxisOfRotation_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_AxisOfRotation_4 = value;
	}

	inline static int32_t get_offset_of_m_Rotation_5() { return static_cast<int32_t>(offsetof(Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1, ___m_Rotation_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Rotation_5() const { return ___m_Rotation_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Rotation_5() { return &___m_Rotation_5; }
	inline void set_m_Rotation_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Rotation_5 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocity_6() { return static_cast<int32_t>(offsetof(Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1, ___m_AngularVelocity_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_AngularVelocity_6() const { return ___m_AngularVelocity_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_AngularVelocity_6() { return &___m_AngularVelocity_6; }
	inline void set_m_AngularVelocity_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_AngularVelocity_6 = value;
	}

	inline static int32_t get_offset_of_m_StartSize_7() { return static_cast<int32_t>(offsetof(Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1, ___m_StartSize_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_StartSize_7() const { return ___m_StartSize_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_StartSize_7() { return &___m_StartSize_7; }
	inline void set_m_StartSize_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_StartSize_7 = value;
	}

	inline static int32_t get_offset_of_m_StartColor_8() { return static_cast<int32_t>(offsetof(Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1, ___m_StartColor_8)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_m_StartColor_8() const { return ___m_StartColor_8; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_m_StartColor_8() { return &___m_StartColor_8; }
	inline void set_m_StartColor_8(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___m_StartColor_8 = value;
	}

	inline static int32_t get_offset_of_m_RandomSeed_9() { return static_cast<int32_t>(offsetof(Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1, ___m_RandomSeed_9)); }
	inline uint32_t get_m_RandomSeed_9() const { return ___m_RandomSeed_9; }
	inline uint32_t* get_address_of_m_RandomSeed_9() { return &___m_RandomSeed_9; }
	inline void set_m_RandomSeed_9(uint32_t value)
	{
		___m_RandomSeed_9 = value;
	}

	inline static int32_t get_offset_of_m_ParentRandomSeed_10() { return static_cast<int32_t>(offsetof(Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1, ___m_ParentRandomSeed_10)); }
	inline uint32_t get_m_ParentRandomSeed_10() const { return ___m_ParentRandomSeed_10; }
	inline uint32_t* get_address_of_m_ParentRandomSeed_10() { return &___m_ParentRandomSeed_10; }
	inline void set_m_ParentRandomSeed_10(uint32_t value)
	{
		___m_ParentRandomSeed_10 = value;
	}

	inline static int32_t get_offset_of_m_Lifetime_11() { return static_cast<int32_t>(offsetof(Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1, ___m_Lifetime_11)); }
	inline float get_m_Lifetime_11() const { return ___m_Lifetime_11; }
	inline float* get_address_of_m_Lifetime_11() { return &___m_Lifetime_11; }
	inline void set_m_Lifetime_11(float value)
	{
		___m_Lifetime_11 = value;
	}

	inline static int32_t get_offset_of_m_StartLifetime_12() { return static_cast<int32_t>(offsetof(Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1, ___m_StartLifetime_12)); }
	inline float get_m_StartLifetime_12() const { return ___m_StartLifetime_12; }
	inline float* get_address_of_m_StartLifetime_12() { return &___m_StartLifetime_12; }
	inline void set_m_StartLifetime_12(float value)
	{
		___m_StartLifetime_12 = value;
	}

	inline static int32_t get_offset_of_m_MeshIndex_13() { return static_cast<int32_t>(offsetof(Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1, ___m_MeshIndex_13)); }
	inline int32_t get_m_MeshIndex_13() const { return ___m_MeshIndex_13; }
	inline int32_t* get_address_of_m_MeshIndex_13() { return &___m_MeshIndex_13; }
	inline void set_m_MeshIndex_13(int32_t value)
	{
		___m_MeshIndex_13 = value;
	}

	inline static int32_t get_offset_of_m_EmitAccumulator0_14() { return static_cast<int32_t>(offsetof(Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1, ___m_EmitAccumulator0_14)); }
	inline float get_m_EmitAccumulator0_14() const { return ___m_EmitAccumulator0_14; }
	inline float* get_address_of_m_EmitAccumulator0_14() { return &___m_EmitAccumulator0_14; }
	inline void set_m_EmitAccumulator0_14(float value)
	{
		___m_EmitAccumulator0_14 = value;
	}

	inline static int32_t get_offset_of_m_EmitAccumulator1_15() { return static_cast<int32_t>(offsetof(Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1, ___m_EmitAccumulator1_15)); }
	inline float get_m_EmitAccumulator1_15() const { return ___m_EmitAccumulator1_15; }
	inline float* get_address_of_m_EmitAccumulator1_15() { return &___m_EmitAccumulator1_15; }
	inline void set_m_EmitAccumulator1_15(float value)
	{
		___m_EmitAccumulator1_15 = value;
	}

	inline static int32_t get_offset_of_m_Flags_16() { return static_cast<int32_t>(offsetof(Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1, ___m_Flags_16)); }
	inline uint32_t get_m_Flags_16() const { return ___m_Flags_16; }
	inline uint32_t* get_address_of_m_Flags_16() { return &___m_Flags_16; }
	inline void set_m_Flags_16(uint32_t value)
	{
		___m_Flags_16 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Material
struct  Material_t8927C00353A72755313F046D0CE85178AE8218EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.Shader
struct  Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Texture
struct  Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.ParticleSystem/MinMaxCurve
struct  MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD 
{
public:
	// UnityEngine.ParticleSystemCurveMode UnityEngine.ParticleSystem/MinMaxCurve::m_Mode
	int32_t ___m_Mode_0;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMultiplier
	float ___m_CurveMultiplier_1;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMin
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_CurveMin_2;
	// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::m_CurveMax
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_CurveMax_3;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMin
	float ___m_ConstantMin_4;
	// System.Single UnityEngine.ParticleSystem/MinMaxCurve::m_ConstantMax
	float ___m_ConstantMax_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_CurveMultiplier_1() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_CurveMultiplier_1)); }
	inline float get_m_CurveMultiplier_1() const { return ___m_CurveMultiplier_1; }
	inline float* get_address_of_m_CurveMultiplier_1() { return &___m_CurveMultiplier_1; }
	inline void set_m_CurveMultiplier_1(float value)
	{
		___m_CurveMultiplier_1 = value;
	}

	inline static int32_t get_offset_of_m_CurveMin_2() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_CurveMin_2)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_CurveMin_2() const { return ___m_CurveMin_2; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_CurveMin_2() { return &___m_CurveMin_2; }
	inline void set_m_CurveMin_2(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_CurveMin_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurveMin_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CurveMax_3() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_CurveMax_3)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_CurveMax_3() const { return ___m_CurveMax_3; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_CurveMax_3() { return &___m_CurveMax_3; }
	inline void set_m_CurveMax_3(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_CurveMax_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CurveMax_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ConstantMin_4() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_ConstantMin_4)); }
	inline float get_m_ConstantMin_4() const { return ___m_ConstantMin_4; }
	inline float* get_address_of_m_ConstantMin_4() { return &___m_ConstantMin_4; }
	inline void set_m_ConstantMin_4(float value)
	{
		___m_ConstantMin_4 = value;
	}

	inline static int32_t get_offset_of_m_ConstantMax_5() { return static_cast<int32_t>(offsetof(MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD, ___m_ConstantMax_5)); }
	inline float get_m_ConstantMax_5() const { return ___m_ConstantMax_5; }
	inline float* get_address_of_m_ConstantMax_5() { return &___m_ConstantMax_5; }
	inline void set_m_ConstantMax_5(float value)
	{
		___m_ConstantMax_5 = value;
	}
};


// System.Action`1<UnityEngine.Transform>
struct  Action_1_t018138B4CBF5B6B867B79945B5ACB92C21456DE7  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<Coffee.UIExtensions.UIParticle>
struct  Action_1_t09F525F43A32BF424791557854B156F4D9403D4D  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.ParticleSystem
struct  ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Texture2D
struct  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animator
struct  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Canvas
struct  Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields
{
public:
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___willRenderCanvases_5;

public:
	inline static int32_t get_offset_of_preWillRenderCanvases_4() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___preWillRenderCanvases_4)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_preWillRenderCanvases_4() const { return ___preWillRenderCanvases_4; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_preWillRenderCanvases_4() { return &___preWillRenderCanvases_4; }
	inline void set_preWillRenderCanvases_4(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___preWillRenderCanvases_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___preWillRenderCanvases_4), (void*)value);
	}

	inline static int32_t get_offset_of_willRenderCanvases_5() { return static_cast<int32_t>(offsetof(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_StaticFields, ___willRenderCanvases_5)); }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * get_willRenderCanvases_5() const { return ___willRenderCanvases_5; }
	inline WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 ** get_address_of_willRenderCanvases_5() { return &___willRenderCanvases_5; }
	inline void set_willRenderCanvases_5(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * value)
	{
		___willRenderCanvases_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___willRenderCanvases_5), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.ParticleSystemRenderer
struct  ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Coffee.UIExtensions.Demo.UIParticle_Demo
struct  UIParticle_Demo_t5AD82A4FE6A6A48E30C026CEA5F91CCE239E2B27  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.ParticleSystem[] Coffee.UIExtensions.Demo.UIParticle_Demo::m_ParticleSystems
	ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* ___m_ParticleSystems_4;
	// System.Collections.Generic.List`1<UnityEngine.Transform> Coffee.UIExtensions.Demo.UIParticle_Demo::m_ScalingByTransforms
	List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * ___m_ScalingByTransforms_5;
	// System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticle> Coffee.UIExtensions.Demo.UIParticle_Demo::m_ScalingByUIParticles
	List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF * ___m_ScalingByUIParticles_6;

public:
	inline static int32_t get_offset_of_m_ParticleSystems_4() { return static_cast<int32_t>(offsetof(UIParticle_Demo_t5AD82A4FE6A6A48E30C026CEA5F91CCE239E2B27, ___m_ParticleSystems_4)); }
	inline ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* get_m_ParticleSystems_4() const { return ___m_ParticleSystems_4; }
	inline ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7** get_address_of_m_ParticleSystems_4() { return &___m_ParticleSystems_4; }
	inline void set_m_ParticleSystems_4(ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* value)
	{
		___m_ParticleSystems_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParticleSystems_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScalingByTransforms_5() { return static_cast<int32_t>(offsetof(UIParticle_Demo_t5AD82A4FE6A6A48E30C026CEA5F91CCE239E2B27, ___m_ScalingByTransforms_5)); }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * get_m_ScalingByTransforms_5() const { return ___m_ScalingByTransforms_5; }
	inline List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 ** get_address_of_m_ScalingByTransforms_5() { return &___m_ScalingByTransforms_5; }
	inline void set_m_ScalingByTransforms_5(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * value)
	{
		___m_ScalingByTransforms_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ScalingByTransforms_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ScalingByUIParticles_6() { return static_cast<int32_t>(offsetof(UIParticle_Demo_t5AD82A4FE6A6A48E30C026CEA5F91CCE239E2B27, ___m_ScalingByUIParticles_6)); }
	inline List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF * get_m_ScalingByUIParticles_6() const { return ___m_ScalingByUIParticles_6; }
	inline List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF ** get_address_of_m_ScalingByUIParticles_6() { return &___m_ScalingByUIParticles_6; }
	inline void set_m_ScalingByUIParticles_6(List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF * value)
	{
		___m_ScalingByUIParticles_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ScalingByUIParticles_6), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Mask
struct  Mask_t8DE5E31E7C928D3B32AA60E36E49B4DCFED4417D  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Mask::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_4;
	// System.Boolean UnityEngine.UI.Mask::m_ShowMaskGraphic
	bool ___m_ShowMaskGraphic_5;
	// UnityEngine.UI.Graphic UnityEngine.UI.Mask::m_Graphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_Graphic_6;
	// UnityEngine.Material UnityEngine.UI.Mask::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_7;
	// UnityEngine.Material UnityEngine.UI.Mask::m_UnmaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_UnmaskMaterial_8;

public:
	inline static int32_t get_offset_of_m_RectTransform_4() { return static_cast<int32_t>(offsetof(Mask_t8DE5E31E7C928D3B32AA60E36E49B4DCFED4417D, ___m_RectTransform_4)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_4() const { return ___m_RectTransform_4; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_4() { return &___m_RectTransform_4; }
	inline void set_m_RectTransform_4(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShowMaskGraphic_5() { return static_cast<int32_t>(offsetof(Mask_t8DE5E31E7C928D3B32AA60E36E49B4DCFED4417D, ___m_ShowMaskGraphic_5)); }
	inline bool get_m_ShowMaskGraphic_5() const { return ___m_ShowMaskGraphic_5; }
	inline bool* get_address_of_m_ShowMaskGraphic_5() { return &___m_ShowMaskGraphic_5; }
	inline void set_m_ShowMaskGraphic_5(bool value)
	{
		___m_ShowMaskGraphic_5 = value;
	}

	inline static int32_t get_offset_of_m_Graphic_6() { return static_cast<int32_t>(offsetof(Mask_t8DE5E31E7C928D3B32AA60E36E49B4DCFED4417D, ___m_Graphic_6)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_Graphic_6() const { return ___m_Graphic_6; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_Graphic_6() { return &___m_Graphic_6; }
	inline void set_m_Graphic_6(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_Graphic_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Graphic_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_MaskMaterial_7() { return static_cast<int32_t>(offsetof(Mask_t8DE5E31E7C928D3B32AA60E36E49B4DCFED4417D, ___m_MaskMaterial_7)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_7() const { return ___m_MaskMaterial_7; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_7() { return &___m_MaskMaterial_7; }
	inline void set_m_MaskMaterial_7(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_UnmaskMaterial_8() { return static_cast<int32_t>(offsetof(Mask_t8DE5E31E7C928D3B32AA60E36E49B4DCFED4417D, ___m_UnmaskMaterial_8)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_UnmaskMaterial_8() const { return ___m_UnmaskMaterial_8; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_UnmaskMaterial_8() { return &___m_UnmaskMaterial_8; }
	inline void set_m_UnmaskMaterial_8(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_UnmaskMaterial_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_UnmaskMaterial_8), (void*)value);
	}
};


// UnityEngine.UI.RectMask2D
struct  RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.UI.RectangularVertexClipper UnityEngine.UI.RectMask2D::m_VertexClipper
	RectangularVertexClipper_t34360F92063A8540ABA87922B62269ADA99EB5E7 * ___m_VertexClipper_4;
	// UnityEngine.RectTransform UnityEngine.UI.RectMask2D::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_5;
	// System.Collections.Generic.HashSet`1<UnityEngine.UI.MaskableGraphic> UnityEngine.UI.RectMask2D::m_MaskableTargets
	HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB * ___m_MaskableTargets_6;
	// System.Collections.Generic.HashSet`1<UnityEngine.UI.IClippable> UnityEngine.UI.RectMask2D::m_ClipTargets
	HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38 * ___m_ClipTargets_7;
	// System.Boolean UnityEngine.UI.RectMask2D::m_ShouldRecalculateClipRects
	bool ___m_ShouldRecalculateClipRects_8;
	// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D> UnityEngine.UI.RectMask2D::m_Clippers
	List_1_t5709CD2CBFF795FF126CD146B019D4F8EC972EA0 * ___m_Clippers_9;
	// UnityEngine.Rect UnityEngine.UI.RectMask2D::m_LastClipRectCanvasSpace
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  ___m_LastClipRectCanvasSpace_10;
	// System.Boolean UnityEngine.UI.RectMask2D::m_ForceClip
	bool ___m_ForceClip_11;
	// UnityEngine.Vector4 UnityEngine.UI.RectMask2D::m_Padding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_Padding_12;
	// UnityEngine.Vector2Int UnityEngine.UI.RectMask2D::m_Softness
	Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  ___m_Softness_13;
	// UnityEngine.Canvas UnityEngine.UI.RectMask2D::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// UnityEngine.Vector3[] UnityEngine.UI.RectMask2D::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_15;

public:
	inline static int32_t get_offset_of_m_VertexClipper_4() { return static_cast<int32_t>(offsetof(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15, ___m_VertexClipper_4)); }
	inline RectangularVertexClipper_t34360F92063A8540ABA87922B62269ADA99EB5E7 * get_m_VertexClipper_4() const { return ___m_VertexClipper_4; }
	inline RectangularVertexClipper_t34360F92063A8540ABA87922B62269ADA99EB5E7 ** get_address_of_m_VertexClipper_4() { return &___m_VertexClipper_4; }
	inline void set_m_VertexClipper_4(RectangularVertexClipper_t34360F92063A8540ABA87922B62269ADA99EB5E7 * value)
	{
		___m_VertexClipper_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_VertexClipper_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_RectTransform_5() { return static_cast<int32_t>(offsetof(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15, ___m_RectTransform_5)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_5() const { return ___m_RectTransform_5; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_5() { return &___m_RectTransform_5; }
	inline void set_m_RectTransform_5(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_MaskableTargets_6() { return static_cast<int32_t>(offsetof(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15, ___m_MaskableTargets_6)); }
	inline HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB * get_m_MaskableTargets_6() const { return ___m_MaskableTargets_6; }
	inline HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB ** get_address_of_m_MaskableTargets_6() { return &___m_MaskableTargets_6; }
	inline void set_m_MaskableTargets_6(HashSet_1_t6A951F9CCEDD6A2D0480C901C10CF800711136EB * value)
	{
		___m_MaskableTargets_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskableTargets_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_ClipTargets_7() { return static_cast<int32_t>(offsetof(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15, ___m_ClipTargets_7)); }
	inline HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38 * get_m_ClipTargets_7() const { return ___m_ClipTargets_7; }
	inline HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38 ** get_address_of_m_ClipTargets_7() { return &___m_ClipTargets_7; }
	inline void set_m_ClipTargets_7(HashSet_1_t65DA2BDEB7E6E6B1C9F283153F3104A4029F9A38 * value)
	{
		___m_ClipTargets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClipTargets_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculateClipRects_8() { return static_cast<int32_t>(offsetof(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15, ___m_ShouldRecalculateClipRects_8)); }
	inline bool get_m_ShouldRecalculateClipRects_8() const { return ___m_ShouldRecalculateClipRects_8; }
	inline bool* get_address_of_m_ShouldRecalculateClipRects_8() { return &___m_ShouldRecalculateClipRects_8; }
	inline void set_m_ShouldRecalculateClipRects_8(bool value)
	{
		___m_ShouldRecalculateClipRects_8 = value;
	}

	inline static int32_t get_offset_of_m_Clippers_9() { return static_cast<int32_t>(offsetof(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15, ___m_Clippers_9)); }
	inline List_1_t5709CD2CBFF795FF126CD146B019D4F8EC972EA0 * get_m_Clippers_9() const { return ___m_Clippers_9; }
	inline List_1_t5709CD2CBFF795FF126CD146B019D4F8EC972EA0 ** get_address_of_m_Clippers_9() { return &___m_Clippers_9; }
	inline void set_m_Clippers_9(List_1_t5709CD2CBFF795FF126CD146B019D4F8EC972EA0 * value)
	{
		___m_Clippers_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Clippers_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_LastClipRectCanvasSpace_10() { return static_cast<int32_t>(offsetof(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15, ___m_LastClipRectCanvasSpace_10)); }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  get_m_LastClipRectCanvasSpace_10() const { return ___m_LastClipRectCanvasSpace_10; }
	inline Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * get_address_of_m_LastClipRectCanvasSpace_10() { return &___m_LastClipRectCanvasSpace_10; }
	inline void set_m_LastClipRectCanvasSpace_10(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  value)
	{
		___m_LastClipRectCanvasSpace_10 = value;
	}

	inline static int32_t get_offset_of_m_ForceClip_11() { return static_cast<int32_t>(offsetof(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15, ___m_ForceClip_11)); }
	inline bool get_m_ForceClip_11() const { return ___m_ForceClip_11; }
	inline bool* get_address_of_m_ForceClip_11() { return &___m_ForceClip_11; }
	inline void set_m_ForceClip_11(bool value)
	{
		___m_ForceClip_11 = value;
	}

	inline static int32_t get_offset_of_m_Padding_12() { return static_cast<int32_t>(offsetof(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15, ___m_Padding_12)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_Padding_12() const { return ___m_Padding_12; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_Padding_12() { return &___m_Padding_12; }
	inline void set_m_Padding_12(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_Padding_12 = value;
	}

	inline static int32_t get_offset_of_m_Softness_13() { return static_cast<int32_t>(offsetof(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15, ___m_Softness_13)); }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  get_m_Softness_13() const { return ___m_Softness_13; }
	inline Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9 * get_address_of_m_Softness_13() { return &___m_Softness_13; }
	inline void set_m_Softness_13(Vector2Int_tF49F5C2443670DE126D9EC8DBE81D8F480EAA6E9  value)
	{
		___m_Softness_13 = value;
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Corners_15() { return static_cast<int32_t>(offsetof(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15, ___m_Corners_15)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_15() const { return ___m_Corners_15; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_15() { return &___m_Corners_15; }
	inline void set_m_Corners_15(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_15), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// Coffee.UIExtensions.UIParticle
struct  UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// System.Boolean Coffee.UIExtensions.UIParticle::m_IsTrail
	bool ___m_IsTrail_36;
	// System.Boolean Coffee.UIExtensions.UIParticle::m_IgnoreCanvasScaler
	bool ___m_IgnoreCanvasScaler_37;
	// System.Single Coffee.UIExtensions.UIParticle::m_Scale
	float ___m_Scale_38;
	// UnityEngine.Vector3 Coffee.UIExtensions.UIParticle::m_Scale3D
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Scale3D_39;
	// Coffee.UIExtensions.AnimatableProperty[] Coffee.UIExtensions.UIParticle::m_AnimatableProperties
	AnimatablePropertyU5BU5D_t6C258C617AAB73DF8E000037B670ED757286E1DD* ___m_AnimatableProperties_40;
	// System.Collections.Generic.List`1<UnityEngine.ParticleSystem> Coffee.UIExtensions.UIParticle::m_Particles
	List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * ___m_Particles_41;
	// System.Boolean Coffee.UIExtensions.UIParticle::m_ShrinkByMaterial
	bool ___m_ShrinkByMaterial_42;
	// System.Boolean Coffee.UIExtensions.UIParticle::_shouldBeRemoved
	bool ____shouldBeRemoved_43;
	// UnityEngine.DrivenRectTransformTracker Coffee.UIExtensions.UIParticle::_tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ____tracker_44;
	// UnityEngine.Mesh Coffee.UIExtensions.UIParticle::_bakedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ____bakedMesh_45;
	// System.Collections.Generic.List`1<UnityEngine.Material> Coffee.UIExtensions.UIParticle::_modifiedMaterials
	List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * ____modifiedMaterials_46;
	// System.Collections.Generic.List`1<UnityEngine.Material> Coffee.UIExtensions.UIParticle::_maskMaterials
	List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * ____maskMaterials_47;
	// System.Collections.Generic.List`1<System.Boolean> Coffee.UIExtensions.UIParticle::_activeMeshIndices
	List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * ____activeMeshIndices_48;
	// UnityEngine.Vector3 Coffee.UIExtensions.UIParticle::_cachedPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ____cachedPosition_49;

public:
	inline static int32_t get_offset_of_m_IsTrail_36() { return static_cast<int32_t>(offsetof(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E, ___m_IsTrail_36)); }
	inline bool get_m_IsTrail_36() const { return ___m_IsTrail_36; }
	inline bool* get_address_of_m_IsTrail_36() { return &___m_IsTrail_36; }
	inline void set_m_IsTrail_36(bool value)
	{
		___m_IsTrail_36 = value;
	}

	inline static int32_t get_offset_of_m_IgnoreCanvasScaler_37() { return static_cast<int32_t>(offsetof(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E, ___m_IgnoreCanvasScaler_37)); }
	inline bool get_m_IgnoreCanvasScaler_37() const { return ___m_IgnoreCanvasScaler_37; }
	inline bool* get_address_of_m_IgnoreCanvasScaler_37() { return &___m_IgnoreCanvasScaler_37; }
	inline void set_m_IgnoreCanvasScaler_37(bool value)
	{
		___m_IgnoreCanvasScaler_37 = value;
	}

	inline static int32_t get_offset_of_m_Scale_38() { return static_cast<int32_t>(offsetof(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E, ___m_Scale_38)); }
	inline float get_m_Scale_38() const { return ___m_Scale_38; }
	inline float* get_address_of_m_Scale_38() { return &___m_Scale_38; }
	inline void set_m_Scale_38(float value)
	{
		___m_Scale_38 = value;
	}

	inline static int32_t get_offset_of_m_Scale3D_39() { return static_cast<int32_t>(offsetof(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E, ___m_Scale3D_39)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Scale3D_39() const { return ___m_Scale3D_39; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Scale3D_39() { return &___m_Scale3D_39; }
	inline void set_m_Scale3D_39(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Scale3D_39 = value;
	}

	inline static int32_t get_offset_of_m_AnimatableProperties_40() { return static_cast<int32_t>(offsetof(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E, ___m_AnimatableProperties_40)); }
	inline AnimatablePropertyU5BU5D_t6C258C617AAB73DF8E000037B670ED757286E1DD* get_m_AnimatableProperties_40() const { return ___m_AnimatableProperties_40; }
	inline AnimatablePropertyU5BU5D_t6C258C617AAB73DF8E000037B670ED757286E1DD** get_address_of_m_AnimatableProperties_40() { return &___m_AnimatableProperties_40; }
	inline void set_m_AnimatableProperties_40(AnimatablePropertyU5BU5D_t6C258C617AAB73DF8E000037B670ED757286E1DD* value)
	{
		___m_AnimatableProperties_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimatableProperties_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_Particles_41() { return static_cast<int32_t>(offsetof(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E, ___m_Particles_41)); }
	inline List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * get_m_Particles_41() const { return ___m_Particles_41; }
	inline List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 ** get_address_of_m_Particles_41() { return &___m_Particles_41; }
	inline void set_m_Particles_41(List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * value)
	{
		___m_Particles_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Particles_41), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShrinkByMaterial_42() { return static_cast<int32_t>(offsetof(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E, ___m_ShrinkByMaterial_42)); }
	inline bool get_m_ShrinkByMaterial_42() const { return ___m_ShrinkByMaterial_42; }
	inline bool* get_address_of_m_ShrinkByMaterial_42() { return &___m_ShrinkByMaterial_42; }
	inline void set_m_ShrinkByMaterial_42(bool value)
	{
		___m_ShrinkByMaterial_42 = value;
	}

	inline static int32_t get_offset_of__shouldBeRemoved_43() { return static_cast<int32_t>(offsetof(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E, ____shouldBeRemoved_43)); }
	inline bool get__shouldBeRemoved_43() const { return ____shouldBeRemoved_43; }
	inline bool* get_address_of__shouldBeRemoved_43() { return &____shouldBeRemoved_43; }
	inline void set__shouldBeRemoved_43(bool value)
	{
		____shouldBeRemoved_43 = value;
	}

	inline static int32_t get_offset_of__tracker_44() { return static_cast<int32_t>(offsetof(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E, ____tracker_44)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get__tracker_44() const { return ____tracker_44; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of__tracker_44() { return &____tracker_44; }
	inline void set__tracker_44(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		____tracker_44 = value;
	}

	inline static int32_t get_offset_of__bakedMesh_45() { return static_cast<int32_t>(offsetof(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E, ____bakedMesh_45)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get__bakedMesh_45() const { return ____bakedMesh_45; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of__bakedMesh_45() { return &____bakedMesh_45; }
	inline void set__bakedMesh_45(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		____bakedMesh_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____bakedMesh_45), (void*)value);
	}

	inline static int32_t get_offset_of__modifiedMaterials_46() { return static_cast<int32_t>(offsetof(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E, ____modifiedMaterials_46)); }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * get__modifiedMaterials_46() const { return ____modifiedMaterials_46; }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 ** get_address_of__modifiedMaterials_46() { return &____modifiedMaterials_46; }
	inline void set__modifiedMaterials_46(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * value)
	{
		____modifiedMaterials_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____modifiedMaterials_46), (void*)value);
	}

	inline static int32_t get_offset_of__maskMaterials_47() { return static_cast<int32_t>(offsetof(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E, ____maskMaterials_47)); }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * get__maskMaterials_47() const { return ____maskMaterials_47; }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 ** get_address_of__maskMaterials_47() { return &____maskMaterials_47; }
	inline void set__maskMaterials_47(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * value)
	{
		____maskMaterials_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maskMaterials_47), (void*)value);
	}

	inline static int32_t get_offset_of__activeMeshIndices_48() { return static_cast<int32_t>(offsetof(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E, ____activeMeshIndices_48)); }
	inline List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * get__activeMeshIndices_48() const { return ____activeMeshIndices_48; }
	inline List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 ** get_address_of__activeMeshIndices_48() { return &____activeMeshIndices_48; }
	inline void set__activeMeshIndices_48(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * value)
	{
		____activeMeshIndices_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____activeMeshIndices_48), (void*)value);
	}

	inline static int32_t get_offset_of__cachedPosition_49() { return static_cast<int32_t>(offsetof(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E, ____cachedPosition_49)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get__cachedPosition_49() const { return ____cachedPosition_49; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of__cachedPosition_49() { return &____cachedPosition_49; }
	inline void set__cachedPosition_49(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		____cachedPosition_49 = value;
	}
};

struct UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Material> Coffee.UIExtensions.UIParticle::s_TempMaterials
	List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * ___s_TempMaterials_50;
	// UnityEngine.MaterialPropertyBlock Coffee.UIExtensions.UIParticle::s_Mpb
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___s_Mpb_51;
	// System.Collections.Generic.List`1<UnityEngine.Material> Coffee.UIExtensions.UIParticle::s_PrevMaskMaterials
	List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * ___s_PrevMaskMaterials_52;
	// System.Collections.Generic.List`1<UnityEngine.Material> Coffee.UIExtensions.UIParticle::s_PrevModifiedMaterials
	List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * ___s_PrevModifiedMaterials_53;
	// System.Collections.Generic.List`1<UnityEngine.Component> Coffee.UIExtensions.UIParticle::s_Components
	List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * ___s_Components_54;
	// System.Collections.Generic.List`1<UnityEngine.ParticleSystem> Coffee.UIExtensions.UIParticle::s_ParticleSystems
	List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * ___s_ParticleSystems_55;

public:
	inline static int32_t get_offset_of_s_TempMaterials_50() { return static_cast<int32_t>(offsetof(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields, ___s_TempMaterials_50)); }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * get_s_TempMaterials_50() const { return ___s_TempMaterials_50; }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 ** get_address_of_s_TempMaterials_50() { return &___s_TempMaterials_50; }
	inline void set_s_TempMaterials_50(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * value)
	{
		___s_TempMaterials_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TempMaterials_50), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mpb_51() { return static_cast<int32_t>(offsetof(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields, ___s_Mpb_51)); }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * get_s_Mpb_51() const { return ___s_Mpb_51; }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 ** get_address_of_s_Mpb_51() { return &___s_Mpb_51; }
	inline void set_s_Mpb_51(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * value)
	{
		___s_Mpb_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mpb_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_PrevMaskMaterials_52() { return static_cast<int32_t>(offsetof(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields, ___s_PrevMaskMaterials_52)); }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * get_s_PrevMaskMaterials_52() const { return ___s_PrevMaskMaterials_52; }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 ** get_address_of_s_PrevMaskMaterials_52() { return &___s_PrevMaskMaterials_52; }
	inline void set_s_PrevMaskMaterials_52(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * value)
	{
		___s_PrevMaskMaterials_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PrevMaskMaterials_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_PrevModifiedMaterials_53() { return static_cast<int32_t>(offsetof(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields, ___s_PrevModifiedMaterials_53)); }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * get_s_PrevModifiedMaterials_53() const { return ___s_PrevModifiedMaterials_53; }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 ** get_address_of_s_PrevModifiedMaterials_53() { return &___s_PrevModifiedMaterials_53; }
	inline void set_s_PrevModifiedMaterials_53(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * value)
	{
		___s_PrevModifiedMaterials_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_PrevModifiedMaterials_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Components_54() { return static_cast<int32_t>(offsetof(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields, ___s_Components_54)); }
	inline List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * get_s_Components_54() const { return ___s_Components_54; }
	inline List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F ** get_address_of_s_Components_54() { return &___s_Components_54; }
	inline void set_s_Components_54(List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * value)
	{
		___s_Components_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Components_54), (void*)value);
	}

	inline static int32_t get_offset_of_s_ParticleSystems_55() { return static_cast<int32_t>(offsetof(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields, ___s_ParticleSystems_55)); }
	inline List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * get_s_ParticleSystems_55() const { return ___s_ParticleSystems_55; }
	inline List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 ** get_address_of_s_ParticleSystems_55() { return &___s_ParticleSystems_55; }
	inline void set_s_ParticleSystems_55(List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * value)
	{
		___s_ParticleSystems_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ParticleSystems_55), (void*)value);
	}
};


// Coffee.UIExtensions.Demos.UIParticleSystem_Demo
struct  UIParticleSystem_Demo_t1D214B17155CF88C2C6AF99583C3F6297D79E66B  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// System.Boolean Coffee.UIExtensions.Demos.UIParticleSystem_Demo::fixedTime
	bool ___fixedTime_36;
	// UnityEngine.Transform Coffee.UIExtensions.Demos.UIParticleSystem_Demo::_transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____transform_37;
	// UnityEngine.ParticleSystem Coffee.UIExtensions.Demos.UIParticleSystem_Demo::pSystem
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___pSystem_38;
	// UnityEngine.ParticleSystem/Particle[] Coffee.UIExtensions.Demos.UIParticleSystem_Demo::particles
	ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C* ___particles_39;
	// UnityEngine.UIVertex[] Coffee.UIExtensions.Demos.UIParticleSystem_Demo::_quad
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ____quad_40;
	// UnityEngine.Vector4 Coffee.UIExtensions.Demos.UIParticleSystem_Demo::imageUV
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___imageUV_41;
	// UnityEngine.ParticleSystem/TextureSheetAnimationModule Coffee.UIExtensions.Demos.UIParticleSystem_Demo::textureSheetAnimation
	TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2  ___textureSheetAnimation_42;
	// System.Int32 Coffee.UIExtensions.Demos.UIParticleSystem_Demo::textureSheetAnimationFrames
	int32_t ___textureSheetAnimationFrames_43;
	// UnityEngine.Vector2 Coffee.UIExtensions.Demos.UIParticleSystem_Demo::textureSheetAnimationFrameSize
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___textureSheetAnimationFrameSize_44;
	// UnityEngine.ParticleSystemRenderer Coffee.UIExtensions.Demos.UIParticleSystem_Demo::pRenderer
	ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * ___pRenderer_45;
	// UnityEngine.Material Coffee.UIExtensions.Demos.UIParticleSystem_Demo::currentMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___currentMaterial_46;
	// UnityEngine.Texture Coffee.UIExtensions.Demos.UIParticleSystem_Demo::currentTexture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___currentTexture_47;
	// UnityEngine.ParticleSystem/MainModule Coffee.UIExtensions.Demos.UIParticleSystem_Demo::mainModule
	MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  ___mainModule_48;

public:
	inline static int32_t get_offset_of_fixedTime_36() { return static_cast<int32_t>(offsetof(UIParticleSystem_Demo_t1D214B17155CF88C2C6AF99583C3F6297D79E66B, ___fixedTime_36)); }
	inline bool get_fixedTime_36() const { return ___fixedTime_36; }
	inline bool* get_address_of_fixedTime_36() { return &___fixedTime_36; }
	inline void set_fixedTime_36(bool value)
	{
		___fixedTime_36 = value;
	}

	inline static int32_t get_offset_of__transform_37() { return static_cast<int32_t>(offsetof(UIParticleSystem_Demo_t1D214B17155CF88C2C6AF99583C3F6297D79E66B, ____transform_37)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get__transform_37() const { return ____transform_37; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of__transform_37() { return &____transform_37; }
	inline void set__transform_37(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		____transform_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____transform_37), (void*)value);
	}

	inline static int32_t get_offset_of_pSystem_38() { return static_cast<int32_t>(offsetof(UIParticleSystem_Demo_t1D214B17155CF88C2C6AF99583C3F6297D79E66B, ___pSystem_38)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_pSystem_38() const { return ___pSystem_38; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_pSystem_38() { return &___pSystem_38; }
	inline void set_pSystem_38(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___pSystem_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pSystem_38), (void*)value);
	}

	inline static int32_t get_offset_of_particles_39() { return static_cast<int32_t>(offsetof(UIParticleSystem_Demo_t1D214B17155CF88C2C6AF99583C3F6297D79E66B, ___particles_39)); }
	inline ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C* get_particles_39() const { return ___particles_39; }
	inline ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C** get_address_of_particles_39() { return &___particles_39; }
	inline void set_particles_39(ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C* value)
	{
		___particles_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___particles_39), (void*)value);
	}

	inline static int32_t get_offset_of__quad_40() { return static_cast<int32_t>(offsetof(UIParticleSystem_Demo_t1D214B17155CF88C2C6AF99583C3F6297D79E66B, ____quad_40)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get__quad_40() const { return ____quad_40; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of__quad_40() { return &____quad_40; }
	inline void set__quad_40(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		____quad_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____quad_40), (void*)value);
	}

	inline static int32_t get_offset_of_imageUV_41() { return static_cast<int32_t>(offsetof(UIParticleSystem_Demo_t1D214B17155CF88C2C6AF99583C3F6297D79E66B, ___imageUV_41)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_imageUV_41() const { return ___imageUV_41; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_imageUV_41() { return &___imageUV_41; }
	inline void set_imageUV_41(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___imageUV_41 = value;
	}

	inline static int32_t get_offset_of_textureSheetAnimation_42() { return static_cast<int32_t>(offsetof(UIParticleSystem_Demo_t1D214B17155CF88C2C6AF99583C3F6297D79E66B, ___textureSheetAnimation_42)); }
	inline TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2  get_textureSheetAnimation_42() const { return ___textureSheetAnimation_42; }
	inline TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 * get_address_of_textureSheetAnimation_42() { return &___textureSheetAnimation_42; }
	inline void set_textureSheetAnimation_42(TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2  value)
	{
		___textureSheetAnimation_42 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___textureSheetAnimation_42))->___m_ParticleSystem_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_textureSheetAnimationFrames_43() { return static_cast<int32_t>(offsetof(UIParticleSystem_Demo_t1D214B17155CF88C2C6AF99583C3F6297D79E66B, ___textureSheetAnimationFrames_43)); }
	inline int32_t get_textureSheetAnimationFrames_43() const { return ___textureSheetAnimationFrames_43; }
	inline int32_t* get_address_of_textureSheetAnimationFrames_43() { return &___textureSheetAnimationFrames_43; }
	inline void set_textureSheetAnimationFrames_43(int32_t value)
	{
		___textureSheetAnimationFrames_43 = value;
	}

	inline static int32_t get_offset_of_textureSheetAnimationFrameSize_44() { return static_cast<int32_t>(offsetof(UIParticleSystem_Demo_t1D214B17155CF88C2C6AF99583C3F6297D79E66B, ___textureSheetAnimationFrameSize_44)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_textureSheetAnimationFrameSize_44() const { return ___textureSheetAnimationFrameSize_44; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_textureSheetAnimationFrameSize_44() { return &___textureSheetAnimationFrameSize_44; }
	inline void set_textureSheetAnimationFrameSize_44(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___textureSheetAnimationFrameSize_44 = value;
	}

	inline static int32_t get_offset_of_pRenderer_45() { return static_cast<int32_t>(offsetof(UIParticleSystem_Demo_t1D214B17155CF88C2C6AF99583C3F6297D79E66B, ___pRenderer_45)); }
	inline ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * get_pRenderer_45() const { return ___pRenderer_45; }
	inline ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 ** get_address_of_pRenderer_45() { return &___pRenderer_45; }
	inline void set_pRenderer_45(ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * value)
	{
		___pRenderer_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pRenderer_45), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterial_46() { return static_cast<int32_t>(offsetof(UIParticleSystem_Demo_t1D214B17155CF88C2C6AF99583C3F6297D79E66B, ___currentMaterial_46)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_currentMaterial_46() const { return ___currentMaterial_46; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_currentMaterial_46() { return &___currentMaterial_46; }
	inline void set_currentMaterial_46(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___currentMaterial_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentMaterial_46), (void*)value);
	}

	inline static int32_t get_offset_of_currentTexture_47() { return static_cast<int32_t>(offsetof(UIParticleSystem_Demo_t1D214B17155CF88C2C6AF99583C3F6297D79E66B, ___currentTexture_47)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_currentTexture_47() const { return ___currentTexture_47; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_currentTexture_47() { return &___currentTexture_47; }
	inline void set_currentTexture_47(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___currentTexture_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentTexture_47), (void*)value);
	}

	inline static int32_t get_offset_of_mainModule_48() { return static_cast<int32_t>(offsetof(UIParticleSystem_Demo_t1D214B17155CF88C2C6AF99583C3F6297D79E66B, ___mainModule_48)); }
	inline MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  get_mainModule_48() const { return ___mainModule_48; }
	inline MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * get_address_of_mainModule_48() { return &___mainModule_48; }
	inline void set_mainModule_48(MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  value)
	{
		___mainModule_48 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___mainModule_48))->___m_ParticleSystem_0), (void*)NULL);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1  m_Items[1];

public:
	inline Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  m_Items[1];

public:
	inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * m_Items[1];

public:
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Mask[]
struct MaskU5BU5D_t167C647F5E42B90615C5168C07EA571A905590FD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Mask_t8DE5E31E7C928D3B32AA60E36E49B4DCFED4417D * m_Items[1];

public:
	inline Mask_t8DE5E31E7C928D3B32AA60E36E49B4DCFED4417D * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Mask_t8DE5E31E7C928D3B32AA60E36E49B4DCFED4417D ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Mask_t8DE5E31E7C928D3B32AA60E36E49B4DCFED4417D * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Mask_t8DE5E31E7C928D3B32AA60E36E49B4DCFED4417D * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Mask_t8DE5E31E7C928D3B32AA60E36E49B4DCFED4417D ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Mask_t8DE5E31E7C928D3B32AA60E36E49B4DCFED4417D * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.RectMask2D[]
struct RectMask2DU5BU5D_tB3154B58708CFB10CC9FCB6C15301C2EFEAAB2D7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * m_Items[1];

public:
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Coffee.UIExtensions.UIParticle[]
struct UIParticleU5BU5D_t121270CDE2DFB68E154FAA2CDD401ED60988CA26  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * m_Items[1];

public:
	inline UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Animator[]
struct AnimatorU5BU5D_tCE401FBE19F331BC5946D07EDB3BF24F3FD888A2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * m_Items[1];

public:
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared (const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::ForEach(System.Action`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m1C08725A39127C32D56B9E8A36D813F08D3BFF4D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___action0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);

// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.ParticleSystem>()
inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  ParticleSystem_get_main_m8F17DCC63679B15CE548BE83332FDB6635AE74A0 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.ParticleSystem/MainModule::get_maxParticles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MainModule_get_maxParticles_m4A95D2105C1B414331F15EF86ADBC23CC6C8DD35 (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/MainModule::set_maxParticles(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_maxParticles_m6FD14B44787B44D38DEDAE4FCBE9596A86A0460D (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.ParticleSystemRenderer>()
inline ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * Component_GetComponent_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m433D0F036D744378DDD67C566DDC69B19052E933 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Material::HasProperty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_HasProperty_mB6F155CD45C688DA232B56BD1A74474C224BE37E (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * Material_get_mainTexture_mD1F98F8E09F68857D5408796A76A521925A04FAC (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// UnityEngine.Texture2D UnityEngine.Texture2D::get_whiteTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * Texture2D_get_whiteTexture_m4ED96995BA1D42F7D2823BD9D18023CFE3C680A0 (const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/MainModule::set_scalingMode(UnityEngine.ParticleSystemScalingMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainModule_set_scalingMode_m0992C03429ABFBD1021009BF669BF362705D4E23 (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2 (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// UnityEngine.ParticleSystem/TextureSheetAnimationModule UnityEngine.ParticleSystem::get_textureSheetAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2  ParticleSystem_get_textureSheetAnimation_mE7D4FF28B018DD7BB94904CE014F5FD56E53AA90 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828 (const RuntimeMethod* method);
// System.Boolean UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureSheetAnimationModule_get_enabled_mBE8A1D92B11C7F586D02915FC5E6D611BD310C26 (TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_numTilesX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_numTilesX_mE3A7AF9EF20B76FABFD759FA4793CE974E9CDAEB (TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_numTilesY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_numTilesY_m26CD476E7EED12D6897A2F312D461AA28C229F08 (TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.EventSystems.UIBehaviour::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_Awake_m0A6FB0A0089B29A53768BFE65D6E06183A1B60BE (UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E * __this, const RuntimeMethod* method);
// System.Boolean Coffee.UIExtensions.Demos.UIParticleSystem_Demo::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIParticleSystem_Demo_Initialize_mC6A7FE1B1E7FE00DED400C8BE4E1DF3D73EA8462 (UIParticleSystem_Demo_t1D214B17155CF88C2C6AF99583C3F6297D79E66B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.VertexHelper::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_Clear_mBF3FB3CEA5153F8F72C74FFD6006A7AFF62C18BA (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticleSystem_GetParticles_mAE8894E2B022EE009C6DDB1390AB331E7D40A344 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C* ___particles0, const RuntimeMethod* method);
// UnityEngine.ParticleSystemSimulationSpace UnityEngine.ParticleSystem/MainModule::get_simulationSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MainModule_get_simulationSpace_mD08447602DF2E2AC9790D900A1BD04AB8D4FD0A2 (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Particle_get_position_m73D35C09484E06CC11E1E96CE61C5BBDBE654C8E (Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Single UnityEngine.ParticleSystem/Particle::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Particle_get_rotation_m71F23093980FD3664263E217EB65974F061B0E37 (Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * __this, const RuntimeMethod* method);
// UnityEngine.Color32 UnityEngine.ParticleSystem/Particle::GetCurrentColor(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  Particle_GetCurrentColor_mA2CE4823723947D60622CF93C3892CF9EE8C5864 (Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * __this, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___system0, const RuntimeMethod* method);
// System.Single UnityEngine.ParticleSystem/Particle::GetCurrentSize(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Particle_GetCurrentSize_m1DF525CFD2C484B60551A5BC6E2091444E408715 (Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * __this, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___system0, const RuntimeMethod* method);
// UnityEngine.ParticleSystemScalingMode UnityEngine.ParticleSystem/MainModule::get_scalingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MainModule_get_scalingMode_m2FEDBC7969A4BD0071B9467AFFD1B98EE64A9C51 (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * __this, const RuntimeMethod* method);
// UnityEngine.Canvas UnityEngine.UI.Graphic::get_canvas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * Graphic_get_canvas_mDB17EC66AF3FD40E8D368FC11C8F07319BB9D1B0 (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Canvas::get_scaleFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Canvas_get_scaleFactor_m3F0D7E3B97B0493F4E98B2BBCA7A57BC1E1CB710 (Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// System.Single UnityEngine.ParticleSystem/Particle::get_remainingLifetime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Particle_get_remainingLifetime_m705066C38062C7075B114C307F765B13475409BE (Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.ParticleSystem/Particle::get_startLifetime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Particle_get_startLifetime_m0BAD1BB529E779F8B3AA29FE17B65046DF3DBEF5 (Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * __this, const RuntimeMethod* method);
// UnityEngine.ParticleSystem/MinMaxCurve UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_frameOverTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  TextureSheetAnimationModule_get_frameOverTime_mA7E0C207B64CACE5005EC2928DCA6255229EE0BD (TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 * __this, const RuntimeMethod* method);
// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::get_curveMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * MinMaxCurve_get_curveMin_m129B3CCBA5C36B7C4255E26AA2AF8B50AA2F88B1 (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD * __this, const RuntimeMethod* method);
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A (AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * __this, float ___time0, const RuntimeMethod* method);
// UnityEngine.AnimationCurve UnityEngine.ParticleSystem/MinMaxCurve::get_curve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * MinMaxCurve_get_curve_m7E823FD28FB10790E5F2106061B7EF785315A483 (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD * __this, const RuntimeMethod* method);
// System.Single UnityEngine.ParticleSystem/MinMaxCurve::get_constant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MinMaxCurve_get_constant_mBC0C29DF6F1C6C999931E28BC1F8DD26BD3BB624 (MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_cycleCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_cycleCount_mBA2272C5F63D4A958381D8F09684F20670AC2B14 (TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Repeat(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Repeat_mBAB712BA039DF58DBB1B31B669E502C54F3F13CE (float ___t0, float ___length1, const RuntimeMethod* method);
// UnityEngine.ParticleSystemAnimationType UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_animation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_animation_m929A5FBA87B423B6C7B07A5A6A6BEDA65BA5475F (TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::FloorToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E (float ___f0, const RuntimeMethod* method);
// System.Int32 UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_rowIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_rowIndex_mB1E6A720AA8D09FC5B03C84C3128CD69DD06F005 (TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 * __this, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.UI.VertexHelper::AddUIVertexQuad(UnityEngine.UIVertex[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_AddUIVertexQuad_m16C46AF7CE9A2D9E1AE47A4B9799081A707C47B5 (VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * __this, UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___verts0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567 (const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_unscaledDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84 (const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::Simulate(System.Single,System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Simulate_m68A0105281A8BC3F4E9242181586483BA7B796A3 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, float ___t0, bool ___withChildren1, bool ___restart2, bool ___fixedTimeStep3, const RuntimeMethod* method);
// UnityEngine.Shader UnityEngine.Material::get_shader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.Vector4::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  Vector4_get_zero_m9E807FEBC8B638914DF4A0BA87C0BD95A19F5200 (const RuntimeMethod* method);
// System.Void UnityEngine.UI.MaskableGraphic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaskableGraphic__ctor_m89126DB114322D1D18F67BA3B8D0695FF1371A4D (MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA (float ___value0, const RuntimeMethod* method);
// UnityEngine.ParticleSystem/TrailModule UnityEngine.ParticleSystem::get_trails()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8  ParticleSystem_get_trails_m9514134A5A05CCDEF2C901BC0D60FC287959414C (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/TrailModule::set_mode(UnityEngine.ParticleSystemTrailMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrailModule_set_mode_m5BA40070E8E4DB540CC3ADC9D402531806D6EA35 (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/TextureSheetAnimationModule::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_enabled_mC4BBCD51B2D99A255770F6C87DB02BB9F0E0CEAC (TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 * __this, bool ___value0, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<UnityEngine.UI.Mask>()
inline MaskU5BU5D_t167C647F5E42B90615C5168C07EA571A905590FD* Object_FindObjectsOfType_TisMask_t8DE5E31E7C928D3B32AA60E36E49B4DCFED4417D_m135B38DAEE1FB8B9E8139692B41D3A06E1FC1FA5 (const RuntimeMethod* method)
{
	return ((  MaskU5BU5D_t167C647F5E42B90615C5168C07EA571A905590FD* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared)(method);
}
// !!0[] UnityEngine.Object::FindObjectsOfType<UnityEngine.UI.RectMask2D>()
inline RectMask2DU5BU5D_tB3154B58708CFB10CC9FCB6C15301C2EFEAAB2D7* Object_FindObjectsOfType_TisRectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15_mBC4C1E2503E0C715D887445C4E68A60980D0139F (const RuntimeMethod* method)
{
	return ((  RectMask2DU5BU5D_tB3154B58708CFB10CC9FCB6C15301C2EFEAAB2D7* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared)(method);
}
// System.Void Coffee.UIExtensions.Demo.UIParticle_Demo/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_mDA28F794480F11992DCA5BF2013B38059B857FCE (U3CU3Ec__DisplayClass8_0_t283154FF27B91AB111F28C923C07D11D71534F43 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.Transform>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mD2CE23274C0262B2EDCC0A58819E931CD69DE140 (Action_1_t018138B4CBF5B6B867B79945B5ACB92C21456DE7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t018138B4CBF5B6B867B79945B5ACB92C21456DE7 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::ForEach(System.Action`1<!0>)
inline void List_1_ForEach_m2AE32B8064EAC467E4492B97F1B02DB26DE48802 (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * __this, Action_1_t018138B4CBF5B6B867B79945B5ACB92C21456DE7 * ___action0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *, Action_1_t018138B4CBF5B6B867B79945B5ACB92C21456DE7 *, const RuntimeMethod*))List_1_ForEach_m1C08725A39127C32D56B9E8A36D813F08D3BFF4D_gshared)(__this, ___action0, method);
}
// System.Void System.Action`1<Coffee.UIExtensions.UIParticle>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mF1CCB00FD33FDB4B265B700D9066CED98601C772 (Action_1_t09F525F43A32BF424791557854B156F4D9403D4D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t09F525F43A32BF424791557854B156F4D9403D4D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticle>::ForEach(System.Action`1<!0>)
inline void List_1_ForEach_m13DCD577F8287F50BF39B106F1234376691FFDF1 (List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF * __this, Action_1_t09F525F43A32BF424791557854B156F4D9403D4D * ___action0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF *, Action_1_t09F525F43A32BF424791557854B156F4D9403D4D *, const RuntimeMethod*))List_1_ForEach_m1C08725A39127C32D56B9E8A36D813F08D3BFF4D_gshared)(__this, ___action0, method);
}
// !!0[] UnityEngine.Object::FindObjectsOfType<Coffee.UIExtensions.UIParticle>()
inline UIParticleU5BU5D_t121270CDE2DFB68E154FAA2CDD401ED60988CA26* Object_FindObjectsOfType_TisUIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_mA205BB9F2D055434C58BD7F12E89A244EC1CAF57 (const RuntimeMethod* method)
{
	return ((  UIParticleU5BU5D_t121270CDE2DFB68E154FAA2CDD401ED60988CA26* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared)(method);
}
// System.Void Coffee.UIExtensions.UIParticle::set_scale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_set_scale_mB3F4F443D2F4EE4956FD2D7889424E33F126D78F (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<UnityEngine.Animator>()
inline AnimatorU5BU5D_tCE401FBE19F331BC5946D07EDB3BF24F3FD888A2* Object_FindObjectsOfType_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m8800B20C99AC8962ED4CD2935D35CD235A1CE85B (const RuntimeMethod* method)
{
	return ((  AnimatorU5BU5D_tCE401FBE19F331BC5946D07EDB3BF24F3FD888A2* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared)(method);
}
// System.Void UnityEngine.Animator::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___stateName0, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<UnityEngine.ParticleSystem>()
inline ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* Object_FindObjectsOfType_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_mAC0C66B0266541B72238324BB2D44DB64319A7B7 (const RuntimeMethod* method)
{
	return ((  ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared)(method);
}
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Canvas>()
inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * Component_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD63281542675697ADC038B664E30F73F6BC1F1D1 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Canvas::set_renderMode(UnityEngine.RenderMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_set_renderMode_mE19EA5E3E4758704CCA6A6A2E4EB84DB75096088 (Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___euler0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_mF1D464BA700E6389AEA8AF2F197270F387D9A41F (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticle>::.ctor()
inline void List_1__ctor_m7D1A839C1BAE4BD9CCBD0203D0AF23A6C337B4F5 (List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.Texture Coffee.UIExtensions.Demos.UIParticleSystem_Demo::get_mainTexture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * UIParticleSystem_Demo_get_mainTexture_mD38FC9041ED2DB9C567420170D7FE517A5534477 (UIParticleSystem_Demo_t1D214B17155CF88C2C6AF99583C3F6297D79E66B * __this, const RuntimeMethod* method)
{
	{
		// return currentTexture;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_0 = __this->get_currentTexture_47();
		return L_0;
	}
}
// System.Boolean Coffee.UIExtensions.Demos.UIParticleSystem_Demo::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIParticleSystem_Demo_Initialize_mC6A7FE1B1E7FE00DED400C8BE4E1DF3D73EA8462 (UIParticleSystem_Demo_t1D214B17155CF88C2C6AF99583C3F6297D79E66B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m433D0F036D744378DDD67C566DDC69B19052E933_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21);
		s_Il2CppMethodInitialized = true;
	}
	MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (_transform == null)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get__transform_37();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// _transform = transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		__this->set__transform_37(L_2);
	}

IL_001a:
	{
		// if (pSystem == null)
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_3 = __this->get_pSystem_38();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0121;
		}
	}
	{
		// pSystem = GetComponent<ParticleSystem>();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_5;
		L_5 = Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3(__this, /*hidden argument*/Component_GetComponent_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m91CE0171326B90198E69EAFA60F45473CAC6E0C3_RuntimeMethod_var);
		__this->set_pSystem_38(L_5);
		// if (pSystem == null)
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_6 = __this->get_pSystem_38();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0047:
	{
		// mainModule = pSystem.main;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_8 = __this->get_pSystem_38();
		NullCheck(L_8);
		MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  L_9;
		L_9 = ParticleSystem_get_main_m8F17DCC63679B15CE548BE83332FDB6635AE74A0(L_8, /*hidden argument*/NULL);
		__this->set_mainModule_48(L_9);
		// if (pSystem.main.maxParticles > 14000)
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_10 = __this->get_pSystem_38();
		NullCheck(L_10);
		MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  L_11;
		L_11 = ParticleSystem_get_main_m8F17DCC63679B15CE548BE83332FDB6635AE74A0(L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		int32_t L_12;
		L_12 = MainModule_get_maxParticles_m4A95D2105C1B414331F15EF86ADBC23CC6C8DD35((MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *)(&V_0), /*hidden argument*/NULL);
		if ((((int32_t)L_12) <= ((int32_t)((int32_t)14000))))
		{
			goto IL_0082;
		}
	}
	{
		// mainModule.maxParticles = 14000;
		MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * L_13 = __this->get_address_of_mainModule_48();
		MainModule_set_maxParticles_m6FD14B44787B44D38DEDAE4FCBE9596A86A0460D((MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *)L_13, ((int32_t)14000), /*hidden argument*/NULL);
	}

IL_0082:
	{
		// pRenderer = pSystem.GetComponent<ParticleSystemRenderer>();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_14 = __this->get_pSystem_38();
		NullCheck(L_14);
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_15;
		L_15 = Component_GetComponent_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m433D0F036D744378DDD67C566DDC69B19052E933(L_14, /*hidden argument*/Component_GetComponent_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m433D0F036D744378DDD67C566DDC69B19052E933_RuntimeMethod_var);
		__this->set_pRenderer_45(L_15);
		// if (pRenderer != null)
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_16 = __this->get_pRenderer_45();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_16, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00ad;
		}
	}
	{
		// pRenderer.enabled = false;
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_18 = __this->get_pRenderer_45();
		NullCheck(L_18);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_18, (bool)0, /*hidden argument*/NULL);
	}

IL_00ad:
	{
		// currentMaterial = material;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19;
		L_19 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, __this);
		__this->set_currentMaterial_46(L_19);
		// if (currentMaterial && currentMaterial.HasProperty("_MainTex"))
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_20 = __this->get_currentMaterial_46();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_20, /*hidden argument*/NULL);
		if (!L_21)
		{
			goto IL_0102;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_22 = __this->get_currentMaterial_46();
		NullCheck(L_22);
		bool L_23;
		L_23 = Material_HasProperty_mB6F155CD45C688DA232B56BD1A74474C224BE37E(L_22, _stringLiteral4B8146FB95E4F51B29DA41EB5F6D60F8FD0ECF21, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0102;
		}
	}
	{
		// currentTexture = currentMaterial.mainTexture;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_24 = __this->get_currentMaterial_46();
		NullCheck(L_24);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_25;
		L_25 = Material_get_mainTexture_mD1F98F8E09F68857D5408796A76A521925A04FAC(L_24, /*hidden argument*/NULL);
		__this->set_currentTexture_47(L_25);
		// if (currentTexture == null)
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_26 = __this->get_currentTexture_47();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_26, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_0102;
		}
	}
	{
		// currentTexture = Texture2D.whiteTexture;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_28;
		L_28 = Texture2D_get_whiteTexture_m4ED96995BA1D42F7D2823BD9D18023CFE3C680A0(/*hidden argument*/NULL);
		__this->set_currentTexture_47(L_28);
	}

IL_0102:
	{
		// material = currentMaterial;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_29 = __this->get_currentMaterial_46();
		VirtActionInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(33 /* System.Void UnityEngine.UI.Graphic::set_material(UnityEngine.Material) */, __this, L_29);
		// mainModule.scalingMode = ParticleSystemScalingMode.Hierarchy;
		MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * L_30 = __this->get_address_of_mainModule_48();
		MainModule_set_scalingMode_m0992C03429ABFBD1021009BF669BF362705D4E23((MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *)L_30, 0, /*hidden argument*/NULL);
		// particles = null;
		__this->set_particles_39((ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C*)NULL);
	}

IL_0121:
	{
		// if (particles == null)
		ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C* L_31 = __this->get_particles_39();
		if (L_31)
		{
			goto IL_0147;
		}
	}
	{
		// particles = new ParticleSystem.Particle[pSystem.main.maxParticles];
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_32 = __this->get_pSystem_38();
		NullCheck(L_32);
		MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  L_33;
		L_33 = ParticleSystem_get_main_m8F17DCC63679B15CE548BE83332FDB6635AE74A0(L_32, /*hidden argument*/NULL);
		V_0 = L_33;
		int32_t L_34;
		L_34 = MainModule_get_maxParticles_m4A95D2105C1B414331F15EF86ADBC23CC6C8DD35((MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *)(&V_0), /*hidden argument*/NULL);
		ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C* L_35 = (ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C*)(ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C*)SZArrayNew(ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C_il2cpp_TypeInfo_var, (uint32_t)L_34);
		__this->set_particles_39(L_35);
	}

IL_0147:
	{
		// imageUV = new Vector4(0, 0, 1, 1);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector4__ctor_mCAB598A37C4D5E80282277E828B8A3EAD936D3B2((&L_36), (0.0f), (0.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_imageUV_41(L_36);
		// textureSheetAnimation = pSystem.textureSheetAnimation;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_37 = __this->get_pSystem_38();
		NullCheck(L_37);
		TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2  L_38;
		L_38 = ParticleSystem_get_textureSheetAnimation_mE7D4FF28B018DD7BB94904CE014F5FD56E53AA90(L_37, /*hidden argument*/NULL);
		__this->set_textureSheetAnimation_42(L_38);
		// textureSheetAnimationFrames = 0;
		__this->set_textureSheetAnimationFrames_43(0);
		// textureSheetAnimationFrameSize = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_39;
		L_39 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		__this->set_textureSheetAnimationFrameSize_44(L_39);
		// if (textureSheetAnimation.enabled)
		TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 * L_40 = __this->get_address_of_textureSheetAnimation_42();
		bool L_41;
		L_41 = TextureSheetAnimationModule_get_enabled_mBE8A1D92B11C7F586D02915FC5E6D611BD310C26((TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 *)L_40, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_01e2;
		}
	}
	{
		// textureSheetAnimationFrames = textureSheetAnimation.numTilesX * textureSheetAnimation.numTilesY;
		TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 * L_42 = __this->get_address_of_textureSheetAnimation_42();
		int32_t L_43;
		L_43 = TextureSheetAnimationModule_get_numTilesX_mE3A7AF9EF20B76FABFD759FA4793CE974E9CDAEB((TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 *)L_42, /*hidden argument*/NULL);
		TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 * L_44 = __this->get_address_of_textureSheetAnimation_42();
		int32_t L_45;
		L_45 = TextureSheetAnimationModule_get_numTilesY_m26CD476E7EED12D6897A2F312D461AA28C229F08((TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 *)L_44, /*hidden argument*/NULL);
		__this->set_textureSheetAnimationFrames_43(((int32_t)il2cpp_codegen_multiply((int32_t)L_43, (int32_t)L_45)));
		// textureSheetAnimationFrameSize = new Vector2(1f / textureSheetAnimation.numTilesX, 1f / textureSheetAnimation.numTilesY);
		TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 * L_46 = __this->get_address_of_textureSheetAnimation_42();
		int32_t L_47;
		L_47 = TextureSheetAnimationModule_get_numTilesX_mE3A7AF9EF20B76FABFD759FA4793CE974E9CDAEB((TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 *)L_46, /*hidden argument*/NULL);
		TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 * L_48 = __this->get_address_of_textureSheetAnimation_42();
		int32_t L_49;
		L_49 = TextureSheetAnimationModule_get_numTilesY_m26CD476E7EED12D6897A2F312D461AA28C229F08((TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 *)L_48, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_50;
		memset((&L_50), 0, sizeof(L_50));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_50), ((float)((float)(1.0f)/(float)((float)((float)L_47)))), ((float)((float)(1.0f)/(float)((float)((float)L_49)))), /*hidden argument*/NULL);
		__this->set_textureSheetAnimationFrameSize_44(L_50);
	}

IL_01e2:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Coffee.UIExtensions.Demos.UIParticleSystem_Demo::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleSystem_Demo_Awake_m3C43655475CF684305C007848DCFBA74327F0A25 (UIParticleSystem_Demo_t1D214B17155CF88C2C6AF99583C3F6297D79E66B * __this, const RuntimeMethod* method)
{
	{
		// base.Awake();
		UIBehaviour_Awake_m0A6FB0A0089B29A53768BFE65D6E06183A1B60BE(__this, /*hidden argument*/NULL);
		// if (!Initialize())
		bool L_0;
		L_0 = UIParticleSystem_Demo_Initialize_mC6A7FE1B1E7FE00DED400C8BE4E1DF3D73EA8462(__this, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
	}

IL_0015:
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.Demos.UIParticleSystem_Demo::OnPopulateMesh(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleSystem_Demo_OnPopulateMesh_m721AAA5D4D97531AFDE5909B19CBF98EF84542CF (UIParticleSystem_Demo_t1D214B17155CF88C2C6AF99583C3F6297D79E66B * __this, VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___vh0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_6;
	memset((&V_6), 0, sizeof(V_6));
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  V_9;
	memset((&V_9), 0, sizeof(V_9));
	float V_10 = 0.0f;
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_11;
	memset((&V_11), 0, sizeof(V_11));
	float V_12 = 0.0f;
	int32_t V_13 = 0;
	MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  V_14;
	memset((&V_14), 0, sizeof(V_14));
	int32_t V_15 = 0;
	int32_t V_16 = 0;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_17;
	memset((&V_17), 0, sizeof(V_17));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_18;
	memset((&V_18), 0, sizeof(V_18));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	{
		// vh.Clear();
		VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * L_0 = ___vh0;
		NullCheck(L_0);
		VertexHelper_Clear_mBF3FB3CEA5153F8F72C74FFD6006A7AFF62C18BA(L_0, /*hidden argument*/NULL);
		// if (!gameObject.activeInHierarchy)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeInHierarchy_mA3990AC5F61BB35283188E925C2BE7F7BF67734B(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0014;
		}
	}
	{
		// return;
		return;
	}

IL_0014:
	{
		// Vector2 temp = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		V_0 = L_3;
		// Vector2 corner1 = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		L_4 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		V_1 = L_4;
		// Vector2 corner2 = Vector2.zero;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5;
		L_5 = Vector2_get_zero_m621041B9DF5FAE86C1EF4CB28C224FEA089CB828(/*hidden argument*/NULL);
		V_2 = L_5;
		// int count = pSystem.GetParticles(particles);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_6 = __this->get_pSystem_38();
		ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C* L_7 = __this->get_particles_39();
		NullCheck(L_6);
		int32_t L_8;
		L_8 = ParticleSystem_GetParticles_mAE8894E2B022EE009C6DDB1390AB331E7D40A344(L_6, L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		// for (int i = 0; i < count; ++i)
		V_4 = 0;
		goto IL_0640;
	}

IL_0040:
	{
		// ParticleSystem.Particle particle = particles[i];
		ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C* L_9 = __this->get_particles_39();
		int32_t L_10 = V_4;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1  L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_5 = L_12;
		// Vector2 position = (mainModule.simulationSpace == ParticleSystemSimulationSpace.Local ? particle.position : _transform.InverseTransformPoint(particle.position));
		MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * L_13 = __this->get_address_of_mainModule_48();
		int32_t L_14;
		L_14 = MainModule_get_simulationSpace_mD08447602DF2E2AC9790D900A1BD04AB8D4FD0A2((MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *)L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_0070;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15 = __this->get__transform_37();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Particle_get_position_m73D35C09484E06CC11E1E96CE61C5BBDBE654C8E((Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *)(&V_5), /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_15, L_16, /*hidden argument*/NULL);
		G_B6_0 = L_17;
		goto IL_0077;
	}

IL_0070:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18;
		L_18 = Particle_get_position_m73D35C09484E06CC11E1E96CE61C5BBDBE654C8E((Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *)(&V_5), /*hidden argument*/NULL);
		G_B6_0 = L_18;
	}

IL_0077:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_19;
		L_19 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(G_B6_0, /*hidden argument*/NULL);
		V_6 = L_19;
		// float rotation = -particle.rotation * Mathf.Deg2Rad;
		float L_20;
		L_20 = Particle_get_rotation_m71F23093980FD3664263E217EB65974F061B0E37((Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *)(&V_5), /*hidden argument*/NULL);
		V_7 = ((float)il2cpp_codegen_multiply((float)((-L_20)), (float)(0.0174532924f)));
		// float rotation90 = rotation + Mathf.PI / 2;
		float L_21 = V_7;
		V_8 = ((float)il2cpp_codegen_add((float)L_21, (float)(1.57079637f)));
		// Color32 color = particle.GetCurrentColor(pSystem);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_22 = __this->get_pSystem_38();
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_23;
		L_23 = Particle_GetCurrentColor_mA2CE4823723947D60622CF93C3892CF9EE8C5864((Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *)(&V_5), L_22, /*hidden argument*/NULL);
		V_9 = L_23;
		// float size = particle.GetCurrentSize(pSystem) * 0.5f;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_24 = __this->get_pSystem_38();
		float L_25;
		L_25 = Particle_GetCurrentSize_m1DF525CFD2C484B60551A5BC6E2091444E408715((Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *)(&V_5), L_24, /*hidden argument*/NULL);
		V_10 = ((float)il2cpp_codegen_multiply((float)L_25, (float)(0.5f)));
		// if (mainModule.scalingMode == ParticleSystemScalingMode.Shape)
		MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * L_26 = __this->get_address_of_mainModule_48();
		int32_t L_27;
		L_27 = MainModule_get_scalingMode_m2FEDBC7969A4BD0071B9467AFFD1B98EE64A9C51((MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *)L_26, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_27) == ((uint32_t)2))))
		{
			goto IL_00de;
		}
	}
	{
		// position /= canvas.scaleFactor;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28 = V_6;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_29;
		L_29 = Graphic_get_canvas_mDB17EC66AF3FD40E8D368FC11C8F07319BB9D1B0(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		float L_30;
		L_30 = Canvas_get_scaleFactor_m3F0D7E3B97B0493F4E98B2BBCA7A57BC1E1CB710(L_29, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31;
		L_31 = Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_inline(L_28, L_30, /*hidden argument*/NULL);
		V_6 = L_31;
	}

IL_00de:
	{
		// Vector4 particleUV = imageUV;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_32 = __this->get_imageUV_41();
		V_11 = L_32;
		// if (textureSheetAnimation.enabled)
		TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 * L_33 = __this->get_address_of_textureSheetAnimation_42();
		bool L_34;
		L_34 = TextureSheetAnimationModule_get_enabled_mBE8A1D92B11C7F586D02915FC5E6D611BD310C26((TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 *)L_33, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_02e9;
		}
	}
	{
		// float frameProgress = 1 - (particle.remainingLifetime / particle.startLifetime);
		float L_35;
		L_35 = Particle_get_remainingLifetime_m705066C38062C7075B114C307F765B13475409BE((Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *)(&V_5), /*hidden argument*/NULL);
		float L_36;
		L_36 = Particle_get_startLifetime_m0BAD1BB529E779F8B3AA29FE17B65046DF3DBEF5((Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *)(&V_5), /*hidden argument*/NULL);
		V_12 = ((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)((float)L_35/(float)L_36))));
		// if (textureSheetAnimation.frameOverTime.curveMin != null)
		TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 * L_37 = __this->get_address_of_textureSheetAnimation_42();
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_38;
		L_38 = TextureSheetAnimationModule_get_frameOverTime_mA7E0C207B64CACE5005EC2928DCA6255229EE0BD((TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 *)L_37, /*hidden argument*/NULL);
		V_14 = L_38;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_39;
		L_39 = MinMaxCurve_get_curveMin_m129B3CCBA5C36B7C4255E26AA2AF8B50AA2F88B1((MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD *)(&V_14), /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_0158;
		}
	}
	{
		// frameProgress = textureSheetAnimation.frameOverTime.curveMin.Evaluate(1 - (particle.remainingLifetime / particle.startLifetime));
		TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 * L_40 = __this->get_address_of_textureSheetAnimation_42();
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_41;
		L_41 = TextureSheetAnimationModule_get_frameOverTime_mA7E0C207B64CACE5005EC2928DCA6255229EE0BD((TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 *)L_40, /*hidden argument*/NULL);
		V_14 = L_41;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_42;
		L_42 = MinMaxCurve_get_curveMin_m129B3CCBA5C36B7C4255E26AA2AF8B50AA2F88B1((MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD *)(&V_14), /*hidden argument*/NULL);
		float L_43;
		L_43 = Particle_get_remainingLifetime_m705066C38062C7075B114C307F765B13475409BE((Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *)(&V_5), /*hidden argument*/NULL);
		float L_44;
		L_44 = Particle_get_startLifetime_m0BAD1BB529E779F8B3AA29FE17B65046DF3DBEF5((Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *)(&V_5), /*hidden argument*/NULL);
		NullCheck(L_42);
		float L_45;
		L_45 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_42, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)((float)L_43/(float)L_44)))), /*hidden argument*/NULL);
		V_12 = L_45;
		// }
		goto IL_01e1;
	}

IL_0158:
	{
		// else if (textureSheetAnimation.frameOverTime.curve != null)
		TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 * L_46 = __this->get_address_of_textureSheetAnimation_42();
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_47;
		L_47 = TextureSheetAnimationModule_get_frameOverTime_mA7E0C207B64CACE5005EC2928DCA6255229EE0BD((TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 *)L_46, /*hidden argument*/NULL);
		V_14 = L_47;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_48;
		L_48 = MinMaxCurve_get_curve_m7E823FD28FB10790E5F2106061B7EF785315A483((MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD *)(&V_14), /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_01a0;
		}
	}
	{
		// frameProgress = textureSheetAnimation.frameOverTime.curve.Evaluate(1 - (particle.remainingLifetime / particle.startLifetime));
		TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 * L_49 = __this->get_address_of_textureSheetAnimation_42();
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_50;
		L_50 = TextureSheetAnimationModule_get_frameOverTime_mA7E0C207B64CACE5005EC2928DCA6255229EE0BD((TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 *)L_49, /*hidden argument*/NULL);
		V_14 = L_50;
		AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * L_51;
		L_51 = MinMaxCurve_get_curve_m7E823FD28FB10790E5F2106061B7EF785315A483((MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD *)(&V_14), /*hidden argument*/NULL);
		float L_52;
		L_52 = Particle_get_remainingLifetime_m705066C38062C7075B114C307F765B13475409BE((Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *)(&V_5), /*hidden argument*/NULL);
		float L_53;
		L_53 = Particle_get_startLifetime_m0BAD1BB529E779F8B3AA29FE17B65046DF3DBEF5((Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *)(&V_5), /*hidden argument*/NULL);
		NullCheck(L_51);
		float L_54;
		L_54 = AnimationCurve_Evaluate_m1248B5B167F1FFFDC847A08C56B7D63B32311E6A(L_51, ((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)((float)L_52/(float)L_53)))), /*hidden argument*/NULL);
		V_12 = L_54;
		// }
		goto IL_01e1;
	}

IL_01a0:
	{
		// else if (textureSheetAnimation.frameOverTime.constant > 0)
		TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 * L_55 = __this->get_address_of_textureSheetAnimation_42();
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_56;
		L_56 = TextureSheetAnimationModule_get_frameOverTime_mA7E0C207B64CACE5005EC2928DCA6255229EE0BD((TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 *)L_55, /*hidden argument*/NULL);
		V_14 = L_56;
		float L_57;
		L_57 = MinMaxCurve_get_constant_mBC0C29DF6F1C6C999931E28BC1F8DD26BD3BB624((MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD *)(&V_14), /*hidden argument*/NULL);
		if ((!(((float)L_57) > ((float)(0.0f)))))
		{
			goto IL_01e1;
		}
	}
	{
		// frameProgress = textureSheetAnimation.frameOverTime.constant - (particle.remainingLifetime / particle.startLifetime);
		TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 * L_58 = __this->get_address_of_textureSheetAnimation_42();
		MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD  L_59;
		L_59 = TextureSheetAnimationModule_get_frameOverTime_mA7E0C207B64CACE5005EC2928DCA6255229EE0BD((TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 *)L_58, /*hidden argument*/NULL);
		V_14 = L_59;
		float L_60;
		L_60 = MinMaxCurve_get_constant_mBC0C29DF6F1C6C999931E28BC1F8DD26BD3BB624((MinMaxCurve_tF036239442AB2D438B1EDABEBC785426871084CD *)(&V_14), /*hidden argument*/NULL);
		float L_61;
		L_61 = Particle_get_remainingLifetime_m705066C38062C7075B114C307F765B13475409BE((Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *)(&V_5), /*hidden argument*/NULL);
		float L_62;
		L_62 = Particle_get_startLifetime_m0BAD1BB529E779F8B3AA29FE17B65046DF3DBEF5((Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *)(&V_5), /*hidden argument*/NULL);
		V_12 = ((float)il2cpp_codegen_subtract((float)L_60, (float)((float)((float)L_61/(float)L_62))));
	}

IL_01e1:
	{
		// frameProgress = Mathf.Repeat(frameProgress * textureSheetAnimation.cycleCount, 1);
		float L_63 = V_12;
		TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 * L_64 = __this->get_address_of_textureSheetAnimation_42();
		int32_t L_65;
		L_65 = TextureSheetAnimationModule_get_cycleCount_mBA2272C5F63D4A958381D8F09684F20670AC2B14((TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 *)L_64, /*hidden argument*/NULL);
		float L_66;
		L_66 = Mathf_Repeat_mBAB712BA039DF58DBB1B31B669E502C54F3F13CE(((float)il2cpp_codegen_multiply((float)L_63, (float)((float)((float)L_65)))), (1.0f), /*hidden argument*/NULL);
		V_12 = L_66;
		// int frame = 0;
		V_13 = 0;
		// switch (textureSheetAnimation.animation)
		TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 * L_67 = __this->get_address_of_textureSheetAnimation_42();
		int32_t L_68;
		L_68 = TextureSheetAnimationModule_get_animation_m929A5FBA87B423B6C7B07A5A6A6BEDA65BA5475F((TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 *)L_67, /*hidden argument*/NULL);
		V_16 = L_68;
		int32_t L_69 = V_16;
		if (!L_69)
		{
			goto IL_0217;
		}
	}
	{
		int32_t L_70 = V_16;
		if ((((int32_t)L_70) == ((int32_t)1)))
		{
			goto IL_022a;
		}
	}
	{
		goto IL_0260;
	}

IL_0217:
	{
		// frame = Mathf.FloorToInt(frameProgress * textureSheetAnimationFrames);
		float L_71 = V_12;
		int32_t L_72 = __this->get_textureSheetAnimationFrames_43();
		int32_t L_73;
		L_73 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(((float)il2cpp_codegen_multiply((float)L_71, (float)((float)((float)L_72)))), /*hidden argument*/NULL);
		V_13 = L_73;
		// break;
		goto IL_0260;
	}

IL_022a:
	{
		// frame = Mathf.FloorToInt(frameProgress * textureSheetAnimation.numTilesX);
		float L_74 = V_12;
		TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 * L_75 = __this->get_address_of_textureSheetAnimation_42();
		int32_t L_76;
		L_76 = TextureSheetAnimationModule_get_numTilesX_mE3A7AF9EF20B76FABFD759FA4793CE974E9CDAEB((TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 *)L_75, /*hidden argument*/NULL);
		int32_t L_77;
		L_77 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(((float)il2cpp_codegen_multiply((float)L_74, (float)((float)((float)L_76)))), /*hidden argument*/NULL);
		V_13 = L_77;
		// int row = textureSheetAnimation.rowIndex;
		TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 * L_78 = __this->get_address_of_textureSheetAnimation_42();
		int32_t L_79;
		L_79 = TextureSheetAnimationModule_get_rowIndex_mB1E6A720AA8D09FC5B03C84C3128CD69DD06F005((TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 *)L_78, /*hidden argument*/NULL);
		V_15 = L_79;
		// frame += row * textureSheetAnimation.numTilesX;
		int32_t L_80 = V_13;
		int32_t L_81 = V_15;
		TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 * L_82 = __this->get_address_of_textureSheetAnimation_42();
		int32_t L_83;
		L_83 = TextureSheetAnimationModule_get_numTilesX_mE3A7AF9EF20B76FABFD759FA4793CE974E9CDAEB((TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 *)L_82, /*hidden argument*/NULL);
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_80, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_81, (int32_t)L_83))));
	}

IL_0260:
	{
		// frame %= textureSheetAnimationFrames;
		int32_t L_84 = V_13;
		int32_t L_85 = __this->get_textureSheetAnimationFrames_43();
		V_13 = ((int32_t)((int32_t)L_84%(int32_t)L_85));
		// particleUV.x = (frame % textureSheetAnimation.numTilesX) * textureSheetAnimationFrameSize.x;
		int32_t L_86 = V_13;
		TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 * L_87 = __this->get_address_of_textureSheetAnimation_42();
		int32_t L_88;
		L_88 = TextureSheetAnimationModule_get_numTilesX_mE3A7AF9EF20B76FABFD759FA4793CE974E9CDAEB((TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 *)L_87, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_89 = __this->get_address_of_textureSheetAnimationFrameSize_44();
		float L_90 = L_89->get_x_0();
		(&V_11)->set_x_1(((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)((int32_t)L_86%(int32_t)L_88)))), (float)L_90)));
		// particleUV.y = Mathf.FloorToInt(frame / textureSheetAnimation.numTilesX) * textureSheetAnimationFrameSize.y;
		int32_t L_91 = V_13;
		TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 * L_92 = __this->get_address_of_textureSheetAnimation_42();
		int32_t L_93;
		L_93 = TextureSheetAnimationModule_get_numTilesX_mE3A7AF9EF20B76FABFD759FA4793CE974E9CDAEB((TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 *)L_92, /*hidden argument*/NULL);
		int32_t L_94;
		L_94 = Mathf_FloorToInt_m9164D538D17B8C3C8A6C4E4FA95032F757D9091E(((float)((float)((int32_t)((int32_t)L_91/(int32_t)L_93)))), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_95 = __this->get_address_of_textureSheetAnimationFrameSize_44();
		float L_96 = L_95->get_y_1();
		(&V_11)->set_y_2(((float)il2cpp_codegen_multiply((float)((float)((float)L_94)), (float)L_96)));
		// particleUV.z = particleUV.x + textureSheetAnimationFrameSize.x;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_97 = V_11;
		float L_98 = L_97.get_x_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_99 = __this->get_address_of_textureSheetAnimationFrameSize_44();
		float L_100 = L_99->get_x_0();
		(&V_11)->set_z_3(((float)il2cpp_codegen_add((float)L_98, (float)L_100)));
		// particleUV.w = particleUV.y + textureSheetAnimationFrameSize.y;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_101 = V_11;
		float L_102 = L_101.get_y_2();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_103 = __this->get_address_of_textureSheetAnimationFrameSize_44();
		float L_104 = L_103->get_y_1();
		(&V_11)->set_w_4(((float)il2cpp_codegen_add((float)L_102, (float)L_104)));
	}

IL_02e9:
	{
		// temp.x = particleUV.x;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_105 = V_11;
		float L_106 = L_105.get_x_1();
		(&V_0)->set_x_0(L_106);
		// temp.y = particleUV.y;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_107 = V_11;
		float L_108 = L_107.get_y_2();
		(&V_0)->set_y_1(L_108);
		// _quad[0] = UIVertex.simpleVert;
		UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* L_109 = __this->get__quad_40();
		IL2CPP_RUNTIME_CLASS_INIT(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_il2cpp_TypeInfo_var);
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  L_110 = ((UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields*)il2cpp_codegen_static_fields_for(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_il2cpp_TypeInfo_var))->get_simpleVert_10();
		NullCheck(L_109);
		(L_109)->SetAt(static_cast<il2cpp_array_size_t>(0), (UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A )L_110);
		// _quad[0].color = color;
		UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* L_111 = __this->get__quad_40();
		NullCheck(L_111);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_112 = V_9;
		((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->set_color_3(L_112);
		// _quad[0].uv0 = temp;
		UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* L_113 = __this->get__quad_40();
		NullCheck(L_113);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_114 = V_0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_115;
		L_115 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504(L_114, /*hidden argument*/NULL);
		((L_113)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->set_uv0_4(L_115);
		// temp.x = particleUV.x;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_116 = V_11;
		float L_117 = L_116.get_x_1();
		(&V_0)->set_x_0(L_117);
		// temp.y = particleUV.w;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_118 = V_11;
		float L_119 = L_118.get_w_4();
		(&V_0)->set_y_1(L_119);
		// _quad[1] = UIVertex.simpleVert;
		UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* L_120 = __this->get__quad_40();
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  L_121 = ((UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields*)il2cpp_codegen_static_fields_for(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_il2cpp_TypeInfo_var))->get_simpleVert_10();
		NullCheck(L_120);
		(L_120)->SetAt(static_cast<il2cpp_array_size_t>(1), (UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A )L_121);
		// _quad[1].color = color;
		UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* L_122 = __this->get__quad_40();
		NullCheck(L_122);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_123 = V_9;
		((L_122)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->set_color_3(L_123);
		// _quad[1].uv0 = temp;
		UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* L_124 = __this->get__quad_40();
		NullCheck(L_124);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_125 = V_0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_126;
		L_126 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504(L_125, /*hidden argument*/NULL);
		((L_124)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->set_uv0_4(L_126);
		// temp.x = particleUV.z;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_127 = V_11;
		float L_128 = L_127.get_z_3();
		(&V_0)->set_x_0(L_128);
		// temp.y = particleUV.w;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_129 = V_11;
		float L_130 = L_129.get_w_4();
		(&V_0)->set_y_1(L_130);
		// _quad[2] = UIVertex.simpleVert;
		UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* L_131 = __this->get__quad_40();
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  L_132 = ((UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields*)il2cpp_codegen_static_fields_for(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_il2cpp_TypeInfo_var))->get_simpleVert_10();
		NullCheck(L_131);
		(L_131)->SetAt(static_cast<il2cpp_array_size_t>(2), (UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A )L_132);
		// _quad[2].color = color;
		UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* L_133 = __this->get__quad_40();
		NullCheck(L_133);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_134 = V_9;
		((L_133)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->set_color_3(L_134);
		// _quad[2].uv0 = temp;
		UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* L_135 = __this->get__quad_40();
		NullCheck(L_135);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_136 = V_0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_137;
		L_137 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504(L_136, /*hidden argument*/NULL);
		((L_135)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->set_uv0_4(L_137);
		// temp.x = particleUV.z;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_138 = V_11;
		float L_139 = L_138.get_z_3();
		(&V_0)->set_x_0(L_139);
		// temp.y = particleUV.y;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_140 = V_11;
		float L_141 = L_140.get_y_2();
		(&V_0)->set_y_1(L_141);
		// _quad[3] = UIVertex.simpleVert;
		UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* L_142 = __this->get__quad_40();
		UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  L_143 = ((UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields*)il2cpp_codegen_static_fields_for(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_il2cpp_TypeInfo_var))->get_simpleVert_10();
		NullCheck(L_142);
		(L_142)->SetAt(static_cast<il2cpp_array_size_t>(3), (UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A )L_143);
		// _quad[3].color = color;
		UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* L_144 = __this->get__quad_40();
		NullCheck(L_144);
		Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  L_145 = V_9;
		((L_144)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))->set_color_3(L_145);
		// _quad[3].uv0 = temp;
		UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* L_146 = __this->get__quad_40();
		NullCheck(L_146);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_147 = V_0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_148;
		L_148 = Vector4_op_Implicit_mFFF2D39354FC98FDEDA761EDB4326E4F11B87504(L_147, /*hidden argument*/NULL);
		((L_146)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))->set_uv0_4(L_148);
		// if (rotation == 0)
		float L_149 = V_7;
		if ((!(((float)L_149) == ((float)(0.0f)))))
		{
			goto IL_055e;
		}
	}
	{
		// corner1.x = position.x - size;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_150 = V_6;
		float L_151 = L_150.get_x_0();
		float L_152 = V_10;
		(&V_1)->set_x_0(((float)il2cpp_codegen_subtract((float)L_151, (float)L_152)));
		// corner1.y = position.y - size;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_153 = V_6;
		float L_154 = L_153.get_y_1();
		float L_155 = V_10;
		(&V_1)->set_y_1(((float)il2cpp_codegen_subtract((float)L_154, (float)L_155)));
		// corner2.x = position.x + size;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_156 = V_6;
		float L_157 = L_156.get_x_0();
		float L_158 = V_10;
		(&V_2)->set_x_0(((float)il2cpp_codegen_add((float)L_157, (float)L_158)));
		// corner2.y = position.y + size;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_159 = V_6;
		float L_160 = L_159.get_y_1();
		float L_161 = V_10;
		(&V_2)->set_y_1(((float)il2cpp_codegen_add((float)L_160, (float)L_161)));
		// temp.x = corner1.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_162 = V_1;
		float L_163 = L_162.get_x_0();
		(&V_0)->set_x_0(L_163);
		// temp.y = corner1.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_164 = V_1;
		float L_165 = L_164.get_y_1();
		(&V_0)->set_y_1(L_165);
		// _quad[0].position = temp;
		UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* L_166 = __this->get__quad_40();
		NullCheck(L_166);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_167 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_168;
		L_168 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_167, /*hidden argument*/NULL);
		((L_166)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->set_position_0(L_168);
		// temp.x = corner1.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_169 = V_1;
		float L_170 = L_169.get_x_0();
		(&V_0)->set_x_0(L_170);
		// temp.y = corner2.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_171 = V_2;
		float L_172 = L_171.get_y_1();
		(&V_0)->set_y_1(L_172);
		// _quad[1].position = temp;
		UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* L_173 = __this->get__quad_40();
		NullCheck(L_173);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_174 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_175;
		L_175 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_174, /*hidden argument*/NULL);
		((L_173)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->set_position_0(L_175);
		// temp.x = corner2.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_176 = V_2;
		float L_177 = L_176.get_x_0();
		(&V_0)->set_x_0(L_177);
		// temp.y = corner2.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_178 = V_2;
		float L_179 = L_178.get_y_1();
		(&V_0)->set_y_1(L_179);
		// _quad[2].position = temp;
		UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* L_180 = __this->get__quad_40();
		NullCheck(L_180);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_181 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_182;
		L_182 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_181, /*hidden argument*/NULL);
		((L_180)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->set_position_0(L_182);
		// temp.x = corner2.x;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_183 = V_2;
		float L_184 = L_183.get_x_0();
		(&V_0)->set_x_0(L_184);
		// temp.y = corner1.y;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_185 = V_1;
		float L_186 = L_185.get_y_1();
		(&V_0)->set_y_1(L_186);
		// _quad[3].position = temp;
		UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* L_187 = __this->get__quad_40();
		NullCheck(L_187);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_188 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_189;
		L_189 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_188, /*hidden argument*/NULL);
		((L_187)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))->set_position_0(L_189);
		// }
		goto IL_062e;
	}

IL_055e:
	{
		// Vector2 right = new Vector2(Mathf.Cos(rotation), Mathf.Sin(rotation)) * size;
		float L_190 = V_7;
		float L_191;
		L_191 = cosf(L_190);
		float L_192 = V_7;
		float L_193;
		L_193 = sinf(L_192);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_194;
		memset((&L_194), 0, sizeof(L_194));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_194), L_191, L_193, /*hidden argument*/NULL);
		float L_195 = V_10;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_196;
		L_196 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_194, L_195, /*hidden argument*/NULL);
		V_17 = L_196;
		// Vector2 up = new Vector2(Mathf.Cos(rotation90), Mathf.Sin(rotation90)) * size;
		float L_197 = V_8;
		float L_198;
		L_198 = cosf(L_197);
		float L_199 = V_8;
		float L_200;
		L_200 = sinf(L_199);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_201;
		memset((&L_201), 0, sizeof(L_201));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_201), L_198, L_200, /*hidden argument*/NULL);
		float L_202 = V_10;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_203;
		L_203 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_201, L_202, /*hidden argument*/NULL);
		V_18 = L_203;
		// _quad[0].position = position - right - up;
		UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* L_204 = __this->get__quad_40();
		NullCheck(L_204);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_205 = V_6;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_206 = V_17;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_207;
		L_207 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_205, L_206, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_208 = V_18;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_209;
		L_209 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_207, L_208, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_210;
		L_210 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_209, /*hidden argument*/NULL);
		((L_204)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->set_position_0(L_210);
		// _quad[1].position = position - right + up;
		UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* L_211 = __this->get__quad_40();
		NullCheck(L_211);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_212 = V_6;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_213 = V_17;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_214;
		L_214 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_212, L_213, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_215 = V_18;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_216;
		L_216 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_214, L_215, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_217;
		L_217 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_216, /*hidden argument*/NULL);
		((L_211)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->set_position_0(L_217);
		// _quad[2].position = position + right + up;
		UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* L_218 = __this->get__quad_40();
		NullCheck(L_218);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_219 = V_6;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_220 = V_17;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_221;
		L_221 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_219, L_220, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_222 = V_18;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_223;
		L_223 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_221, L_222, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_224;
		L_224 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_223, /*hidden argument*/NULL);
		((L_218)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->set_position_0(L_224);
		// _quad[3].position = position + right - up;
		UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* L_225 = __this->get__quad_40();
		NullCheck(L_225);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_226 = V_6;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_227 = V_17;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_228;
		L_228 = Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline(L_226, L_227, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_229 = V_18;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_230;
		L_230 = Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline(L_228, L_229, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_231;
		L_231 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_230, /*hidden argument*/NULL);
		((L_225)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))->set_position_0(L_231);
	}

IL_062e:
	{
		// vh.AddUIVertexQuad(_quad);
		VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * L_232 = ___vh0;
		UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* L_233 = __this->get__quad_40();
		NullCheck(L_232);
		VertexHelper_AddUIVertexQuad_m16C46AF7CE9A2D9E1AE47A4B9799081A707C47B5(L_232, L_233, /*hidden argument*/NULL);
		// for (int i = 0; i < count; ++i)
		int32_t L_234 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_234, (int32_t)1));
	}

IL_0640:
	{
		// for (int i = 0; i < count; ++i)
		int32_t L_235 = V_4;
		int32_t L_236 = V_3;
		if ((((int32_t)L_235) < ((int32_t)L_236)))
		{
			goto IL_0040;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.Demos.UIParticleSystem_Demo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleSystem_Demo_Update_m4E4349FCB485D5EF00567E6E9884B4F76CB92633 (UIParticleSystem_Demo_t1D214B17155CF88C2C6AF99583C3F6297D79E66B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!fixedTime && Application.isPlaying)
		bool L_0 = __this->get_fixedTime_36();
		if (L_0)
		{
			goto IL_009b;
		}
	}
	{
		bool L_1;
		L_1 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_009b;
		}
	}
	{
		// pSystem.Simulate(Time.unscaledDeltaTime, false, false, true);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_2 = __this->get_pSystem_38();
		float L_3;
		L_3 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84(/*hidden argument*/NULL);
		NullCheck(L_2);
		ParticleSystem_Simulate_m68A0105281A8BC3F4E9242181586483BA7B796A3(L_2, L_3, (bool)0, (bool)0, (bool)1, /*hidden argument*/NULL);
		// SetAllDirty();
		VirtActionInvoker0::Invoke(26 /* System.Void UnityEngine.UI.Graphic::SetAllDirty() */, __this);
		// if ((currentMaterial != null && currentTexture != currentMaterial.mainTexture) ||
		//     (material != null && currentMaterial != null && material.shader != currentMaterial.shader))
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = __this->get_currentMaterial_46();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0054;
		}
	}
	{
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_6 = __this->get_currentTexture_47();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = __this->get_currentMaterial_46();
		NullCheck(L_7);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_8;
		L_8 = Material_get_mainTexture_mD1F98F8E09F68857D5408796A76A521925A04FAC(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_008d;
		}
	}

IL_0054:
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10;
		L_10 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_009b;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = __this->get_currentMaterial_46();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_009b;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_14;
		L_14 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, __this);
		NullCheck(L_14);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_15;
		L_15 = Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097(L_14, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_16 = __this->get_currentMaterial_46();
		NullCheck(L_16);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_17;
		L_17 = Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_15, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_009b;
		}
	}

IL_008d:
	{
		// pSystem = null;
		__this->set_pSystem_38((ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E *)NULL);
		// Initialize();
		bool L_19;
		L_19 = UIParticleSystem_Demo_Initialize_mC6A7FE1B1E7FE00DED400C8BE4E1DF3D73EA8462(__this, /*hidden argument*/NULL);
	}

IL_009b:
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.Demos.UIParticleSystem_Demo::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleSystem_Demo_LateUpdate_m5DBF949B8FBF274CC6E1ABDC8E876584974466B0 (UIParticleSystem_Demo_t1D214B17155CF88C2C6AF99583C3F6297D79E66B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!Application.isPlaying)
		bool L_0;
		L_0 = Application_get_isPlaying_m7BB718D8E58B807184491F64AFF0649517E56567(/*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		// SetAllDirty();
		VirtActionInvoker0::Invoke(26 /* System.Void UnityEngine.UI.Graphic::SetAllDirty() */, __this);
		// }
		goto IL_00a3;
	}

IL_0012:
	{
		// if (fixedTime)
		bool L_1 = __this->get_fixedTime_36();
		if (!L_1)
		{
			goto IL_00a3;
		}
	}
	{
		// pSystem.Simulate(Time.unscaledDeltaTime, false, false, true);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_2 = __this->get_pSystem_38();
		float L_3;
		L_3 = Time_get_unscaledDeltaTime_m2C153F1E5C77C6AF655054BC6C76D0C334C0DC84(/*hidden argument*/NULL);
		NullCheck(L_2);
		ParticleSystem_Simulate_m68A0105281A8BC3F4E9242181586483BA7B796A3(L_2, L_3, (bool)0, (bool)0, (bool)1, /*hidden argument*/NULL);
		// SetAllDirty();
		VirtActionInvoker0::Invoke(26 /* System.Void UnityEngine.UI.Graphic::SetAllDirty() */, __this);
		// if ((currentMaterial != null && currentTexture != currentMaterial.mainTexture) ||
		//     (material != null && currentMaterial != null && material.shader != currentMaterial.shader))
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = __this->get_currentMaterial_46();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_005c;
		}
	}
	{
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_6 = __this->get_currentTexture_47();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = __this->get_currentMaterial_46();
		NullCheck(L_7);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_8;
		L_8 = Material_get_mainTexture_mD1F98F8E09F68857D5408796A76A521925A04FAC(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0095;
		}
	}

IL_005c:
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10;
		L_10 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, __this);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_11;
		L_11 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_00a3;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = __this->get_currentMaterial_46();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_12, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00a3;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_14;
		L_14 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, __this);
		NullCheck(L_14);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_15;
		L_15 = Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097(L_14, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_16 = __this->get_currentMaterial_46();
		NullCheck(L_16);
		Shader_tB2355DC4F3CAF20B2F1AB5AABBF37C3555FFBC39 * L_17;
		L_17 = Material_get_shader_mEB85A8B8CA57235C464C2CC255E77A4EFF7A6097(L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_15, L_17, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_00a3;
		}
	}

IL_0095:
	{
		// pSystem = null;
		__this->set_pSystem_38((ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E *)NULL);
		// Initialize();
		bool L_19;
		L_19 = UIParticleSystem_Demo_Initialize_mC6A7FE1B1E7FE00DED400C8BE4E1DF3D73EA8462(__this, /*hidden argument*/NULL);
	}

IL_00a3:
	{
		// if (material == currentMaterial)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_20;
		L_20 = VirtFuncInvoker0< Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(32 /* UnityEngine.Material UnityEngine.UI.Graphic::get_material() */, __this);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_21 = __this->get_currentMaterial_46();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_20, L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00b7;
		}
	}
	{
		// return;
		return;
	}

IL_00b7:
	{
		// pSystem = null;
		__this->set_pSystem_38((ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E *)NULL);
		// Initialize();
		bool L_23;
		L_23 = UIParticleSystem_Demo_Initialize_mC6A7FE1B1E7FE00DED400C8BE4E1DF3D73EA8462(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.Demos.UIParticleSystem_Demo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleSystem_Demo__ctor_m6C422DD273935857C0F1F4DE79EBA5FC5C07A363 (UIParticleSystem_Demo_t1D214B17155CF88C2C6AF99583C3F6297D79E66B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool fixedTime = true;
		__this->set_fixedTime_36((bool)1);
		// private UIVertex[] _quad = new UIVertex[4];
		UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* L_0 = (UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A*)(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A*)SZArrayNew(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->set__quad_40(L_0);
		// private Vector4 imageUV = Vector4.zero;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1;
		L_1 = Vector4_get_zero_m9E807FEBC8B638914DF4A0BA87C0BD95A19F5200(/*hidden argument*/NULL);
		__this->set_imageUV_41(L_1);
		MaskableGraphic__ctor_m89126DB114322D1D18F67BA3B8D0695FF1371A4D(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Coffee.UIExtensions.Demo.UIParticle_Demo::SetTimeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_Demo_SetTimeScale_m2EEA2A7776EED61D7952E983FF28D15E2F705F73 (UIParticle_Demo_t5AD82A4FE6A6A48E30C026CEA5F91CCE239E2B27 * __this, float ___scale0, const RuntimeMethod* method)
{
	{
		// Time.timeScale = scale;
		float L_0 = ___scale0;
		Time_set_timeScale_m1987DE9E74FC6C0126CE4F59A6293E3B85BD01EA(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.Demo.UIParticle_Demo::EnableTrailRibbon(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_Demo_EnableTrailRibbon_m3A554473E9FD36BBAA96D8D516AF36EA5CB2BF12 (UIParticle_Demo_t5AD82A4FE6A6A48E30C026CEA5F91CCE239E2B27 * __this, bool ___ribbonMode0, const RuntimeMethod* method)
{
	ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* V_0 = NULL;
	int32_t V_1 = 0;
	TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8  V_2;
	memset((&V_2), 0, sizeof(V_2));
	TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 * G_B3_0 = NULL;
	TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 * G_B4_1 = NULL;
	{
		// foreach (var p in m_ParticleSystems)
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_0 = __this->get_m_ParticleSystems_4();
		V_0 = L_0;
		V_1 = 0;
		goto IL_0026;
	}

IL_000b:
	{
		// foreach (var p in m_ParticleSystems)
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// var trails = p.trails;
		NullCheck(L_4);
		TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8  L_5;
		L_5 = ParticleSystem_get_trails_m9514134A5A05CCDEF2C901BC0D60FC287959414C(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		// trails.mode = ribbonMode ? ParticleSystemTrailMode.Ribbon : ParticleSystemTrailMode.PerParticle;
		bool L_6 = ___ribbonMode0;
		G_B2_0 = (&V_2);
		if (L_6)
		{
			G_B3_0 = (&V_2);
			goto IL_001c;
		}
	}
	{
		G_B4_0 = 0;
		G_B4_1 = G_B2_0;
		goto IL_001d;
	}

IL_001c:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_001d:
	{
		TrailModule_set_mode_m5BA40070E8E4DB540CC3ADC9D402531806D6EA35((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)G_B4_1, G_B4_0, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0026:
	{
		// foreach (var p in m_ParticleSystems)
		int32_t L_8 = V_1;
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.Demo.UIParticle_Demo::EnableSprite(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_Demo_EnableSprite_mB6D99B940F46DE6500812EA79E18BE677AE765EE (UIParticle_Demo_t5AD82A4FE6A6A48E30C026CEA5F91CCE239E2B27 * __this, bool ___enabled0, const RuntimeMethod* method)
{
	ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* V_0 = NULL;
	int32_t V_1 = 0;
	TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// foreach (var p in m_ParticleSystems)
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_0 = __this->get_m_ParticleSystems_4();
		V_0 = L_0;
		V_1 = 0;
		goto IL_0020;
	}

IL_000b:
	{
		// foreach (var p in m_ParticleSystems)
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// var tex = p.textureSheetAnimation;
		NullCheck(L_4);
		TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2  L_5;
		L_5 = ParticleSystem_get_textureSheetAnimation_mE7D4FF28B018DD7BB94904CE014F5FD56E53AA90(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		// tex.enabled = enabled;
		bool L_6 = ___enabled0;
		TextureSheetAnimationModule_set_enabled_mC4BBCD51B2D99A255770F6C87DB02BB9F0E0CEAC((TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 *)(&V_2), L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0020:
	{
		// foreach (var p in m_ParticleSystems)
		int32_t L_8 = V_1;
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.Demo.UIParticle_Demo::EnableMask(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_Demo_EnableMask_mD90E1878B342704DA05793CA406500CF899D83A6 (UIParticle_Demo_t5AD82A4FE6A6A48E30C026CEA5F91CCE239E2B27 * __this, bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisMask_t8DE5E31E7C928D3B32AA60E36E49B4DCFED4417D_m135B38DAEE1FB8B9E8139692B41D3A06E1FC1FA5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MaskU5BU5D_t167C647F5E42B90615C5168C07EA571A905590FD* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (var m in FindObjectsOfType<Mask> ())
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		MaskU5BU5D_t167C647F5E42B90615C5168C07EA571A905590FD* L_0;
		L_0 = Object_FindObjectsOfType_TisMask_t8DE5E31E7C928D3B32AA60E36E49B4DCFED4417D_m135B38DAEE1FB8B9E8139692B41D3A06E1FC1FA5(/*hidden argument*/Object_FindObjectsOfType_TisMask_t8DE5E31E7C928D3B32AA60E36E49B4DCFED4417D_m135B38DAEE1FB8B9E8139692B41D3A06E1FC1FA5_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0017;
	}

IL_000a:
	{
		// foreach (var m in FindObjectsOfType<Mask> ())
		MaskU5BU5D_t167C647F5E42B90615C5168C07EA571A905590FD* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Mask_t8DE5E31E7C928D3B32AA60E36E49B4DCFED4417D * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// m.enabled = enabled;
		bool L_5 = ___enabled0;
		NullCheck(L_4);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_4, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0017:
	{
		// foreach (var m in FindObjectsOfType<Mask> ())
		int32_t L_7 = V_1;
		MaskU5BU5D_t167C647F5E42B90615C5168C07EA571A905590FD* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.Demo.UIParticle_Demo::EnableMask2D(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_Demo_EnableMask2D_mD39D18C68C16067E7924196F32AEE9830C7FB656 (UIParticle_Demo_t5AD82A4FE6A6A48E30C026CEA5F91CCE239E2B27 * __this, bool ___enabled0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisRectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15_mBC4C1E2503E0C715D887445C4E68A60980D0139F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RectMask2DU5BU5D_tB3154B58708CFB10CC9FCB6C15301C2EFEAAB2D7* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (var m in FindObjectsOfType<RectMask2D> ())
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		RectMask2DU5BU5D_tB3154B58708CFB10CC9FCB6C15301C2EFEAAB2D7* L_0;
		L_0 = Object_FindObjectsOfType_TisRectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15_mBC4C1E2503E0C715D887445C4E68A60980D0139F(/*hidden argument*/Object_FindObjectsOfType_TisRectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15_mBC4C1E2503E0C715D887445C4E68A60980D0139F_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0017;
	}

IL_000a:
	{
		// foreach (var m in FindObjectsOfType<RectMask2D> ())
		RectMask2DU5BU5D_tB3154B58708CFB10CC9FCB6C15301C2EFEAAB2D7* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// m.enabled = enabled;
		bool L_5 = ___enabled0;
		NullCheck(L_4);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_4, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0017:
	{
		// foreach (var m in FindObjectsOfType<RectMask2D> ())
		int32_t L_7 = V_1;
		RectMask2DU5BU5D_tB3154B58708CFB10CC9FCB6C15301C2EFEAAB2D7* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.Demo.UIParticle_Demo::SetScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_Demo_SetScale_mDB69E4E8BDE8516BFC9319BA24427CBD94F98EFF (UIParticle_Demo_t5AD82A4FE6A6A48E30C026CEA5F91CCE239E2B27 * __this, float ___scale0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mD2CE23274C0262B2EDCC0A58819E931CD69DE140_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_mF1CCB00FD33FDB4B265B700D9066CED98601C772_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t018138B4CBF5B6B867B79945B5ACB92C21456DE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t09F525F43A32BF424791557854B156F4D9403D4D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ForEach_m13DCD577F8287F50BF39B106F1234376691FFDF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ForEach_m2AE32B8064EAC467E4492B97F1B02DB26DE48802_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CSetScaleU3Eb__0_m641D93EACE7282F8EA577044BE210C8FB186A036_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_U3CSetScaleU3Eb__1_mD9941A1C6A695DE9B77781B0EC522F04E447C4B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass8_0_t283154FF27B91AB111F28C923C07D11D71534F43_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass8_0_t283154FF27B91AB111F28C923C07D11D71534F43 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass8_0_t283154FF27B91AB111F28C923C07D11D71534F43 * L_0 = (U3CU3Ec__DisplayClass8_0_t283154FF27B91AB111F28C923C07D11D71534F43 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass8_0_t283154FF27B91AB111F28C923C07D11D71534F43_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass8_0__ctor_mDA28F794480F11992DCA5BF2013B38059B857FCE(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass8_0_t283154FF27B91AB111F28C923C07D11D71534F43 * L_1 = V_0;
		float L_2 = ___scale0;
		NullCheck(L_1);
		L_1->set_scale_0(L_2);
		// m_ScalingByTransforms.ForEach (x => x.localScale = Vector3.one * (10 * scale));
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_3 = __this->get_m_ScalingByTransforms_5();
		U3CU3Ec__DisplayClass8_0_t283154FF27B91AB111F28C923C07D11D71534F43 * L_4 = V_0;
		Action_1_t018138B4CBF5B6B867B79945B5ACB92C21456DE7 * L_5 = (Action_1_t018138B4CBF5B6B867B79945B5ACB92C21456DE7 *)il2cpp_codegen_object_new(Action_1_t018138B4CBF5B6B867B79945B5ACB92C21456DE7_il2cpp_TypeInfo_var);
		Action_1__ctor_mD2CE23274C0262B2EDCC0A58819E931CD69DE140(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass8_0_U3CSetScaleU3Eb__0_m641D93EACE7282F8EA577044BE210C8FB186A036_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mD2CE23274C0262B2EDCC0A58819E931CD69DE140_RuntimeMethod_var);
		NullCheck(L_3);
		List_1_ForEach_m2AE32B8064EAC467E4492B97F1B02DB26DE48802(L_3, L_5, /*hidden argument*/List_1_ForEach_m2AE32B8064EAC467E4492B97F1B02DB26DE48802_RuntimeMethod_var);
		// m_ScalingByUIParticles.ForEach (x => x.scale = scale);
		List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF * L_6 = __this->get_m_ScalingByUIParticles_6();
		U3CU3Ec__DisplayClass8_0_t283154FF27B91AB111F28C923C07D11D71534F43 * L_7 = V_0;
		Action_1_t09F525F43A32BF424791557854B156F4D9403D4D * L_8 = (Action_1_t09F525F43A32BF424791557854B156F4D9403D4D *)il2cpp_codegen_object_new(Action_1_t09F525F43A32BF424791557854B156F4D9403D4D_il2cpp_TypeInfo_var);
		Action_1__ctor_mF1CCB00FD33FDB4B265B700D9066CED98601C772(L_8, L_7, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass8_0_U3CSetScaleU3Eb__1_mD9941A1C6A695DE9B77781B0EC522F04E447C4B0_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mF1CCB00FD33FDB4B265B700D9066CED98601C772_RuntimeMethod_var);
		NullCheck(L_6);
		List_1_ForEach_m13DCD577F8287F50BF39B106F1234376691FFDF1(L_6, L_8, /*hidden argument*/List_1_ForEach_m13DCD577F8287F50BF39B106F1234376691FFDF1_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.Demo.UIParticle_Demo::SetUIParticleScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_Demo_SetUIParticleScale_mDD498623848DE4E69BF1D507F18AB4125F208C5A (UIParticle_Demo_t5AD82A4FE6A6A48E30C026CEA5F91CCE239E2B27 * __this, float ___scale0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisUIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_mA205BB9F2D055434C58BD7F12E89A244EC1CAF57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UIParticleU5BU5D_t121270CDE2DFB68E154FAA2CDD401ED60988CA26* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (var uip in FindObjectsOfType<UIParticle> ())
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		UIParticleU5BU5D_t121270CDE2DFB68E154FAA2CDD401ED60988CA26* L_0;
		L_0 = Object_FindObjectsOfType_TisUIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_mA205BB9F2D055434C58BD7F12E89A244EC1CAF57(/*hidden argument*/Object_FindObjectsOfType_TisUIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_mA205BB9F2D055434C58BD7F12E89A244EC1CAF57_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0017;
	}

IL_000a:
	{
		// foreach (var uip in FindObjectsOfType<UIParticle> ())
		UIParticleU5BU5D_t121270CDE2DFB68E154FAA2CDD401ED60988CA26* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// uip.scale = scale;
		float L_5 = ___scale0;
		NullCheck(L_4);
		UIParticle_set_scale_mB3F4F443D2F4EE4956FD2D7889424E33F126D78F(L_4, L_5, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0017:
	{
		// foreach (var uip in FindObjectsOfType<UIParticle> ())
		int32_t L_7 = V_1;
		UIParticleU5BU5D_t121270CDE2DFB68E154FAA2CDD401ED60988CA26* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.Demo.UIParticle_Demo::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_Demo_LoadScene_m7AA90A271A6BADED97511850771D0FE2B4B6C589 (UIParticle_Demo_t5AD82A4FE6A6A48E30C026CEA5F91CCE239E2B27 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene (name);
		String_t* L_0 = ___name0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.Demo.UIParticle_Demo::PlayAllParticleEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_Demo_PlayAllParticleEffect_mA45924FDBB7BF8ED04C8A55A0329A78F3230C167 (UIParticle_Demo_t5AD82A4FE6A6A48E30C026CEA5F91CCE239E2B27 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m8800B20C99AC8962ED4CD2935D35CD235A1CE85B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_mAC0C66B0266541B72238324BB2D44DB64319A7B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54F48823060A5886D12558C4BBB0CDBB0E83F58A);
		s_Il2CppMethodInitialized = true;
	}
	AnimatorU5BU5D_tCE401FBE19F331BC5946D07EDB3BF24F3FD888A2* V_0 = NULL;
	int32_t V_1 = 0;
	ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* V_2 = NULL;
	{
		// foreach (var animator in FindObjectsOfType<Animator> ())
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		AnimatorU5BU5D_tCE401FBE19F331BC5946D07EDB3BF24F3FD888A2* L_0;
		L_0 = Object_FindObjectsOfType_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m8800B20C99AC8962ED4CD2935D35CD235A1CE85B(/*hidden argument*/Object_FindObjectsOfType_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m8800B20C99AC8962ED4CD2935D35CD235A1CE85B_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_001b;
	}

IL_000a:
	{
		// foreach (var animator in FindObjectsOfType<Animator> ())
		AnimatorU5BU5D_tCE401FBE19F331BC5946D07EDB3BF24F3FD888A2* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		// animator.Play ("Play");
		NullCheck(L_4);
		Animator_Play_mE5E8B1753FFDF754EAD1ACEFF6C5B6ACA506363C(L_4, _stringLiteral54F48823060A5886D12558C4BBB0CDBB0E83F58A, /*hidden argument*/NULL);
		int32_t L_5 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_001b:
	{
		// foreach (var animator in FindObjectsOfType<Animator> ())
		int32_t L_6 = V_1;
		AnimatorU5BU5D_tCE401FBE19F331BC5946D07EDB3BF24F3FD888A2* L_7 = V_0;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		// foreach (var particle in FindObjectsOfType<ParticleSystem> ())
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_8;
		L_8 = Object_FindObjectsOfType_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_mAC0C66B0266541B72238324BB2D44DB64319A7B7(/*hidden argument*/Object_FindObjectsOfType_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_mAC0C66B0266541B72238324BB2D44DB64319A7B7_RuntimeMethod_var);
		V_2 = L_8;
		V_1 = 0;
		goto IL_0037;
	}

IL_002b:
	{
		// foreach (var particle in FindObjectsOfType<ParticleSystem> ())
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_9 = V_2;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		// particle.Play ();
		NullCheck(L_12);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_12, /*hidden argument*/NULL);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0037:
	{
		// foreach (var particle in FindObjectsOfType<ParticleSystem> ())
		int32_t L_14 = V_1;
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_15 = V_2;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))))))
		{
			goto IL_002b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.Demo.UIParticle_Demo::SetWorldSpase(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_Demo_SetWorldSpase_m1B06EF961635A48529C7015CE1E84199A63D15D6 (UIParticle_Demo_t5AD82A4FE6A6A48E30C026CEA5F91CCE239E2B27 * __this, bool ___flag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD63281542675697ADC038B664E30F73F6BC1F1D1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flag)
		bool L_0 = ___flag0;
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		// GetComponent<Canvas> ().renderMode = RenderMode.ScreenSpaceCamera;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_1;
		L_1 = Component_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD63281542675697ADC038B664E30F73F6BC1F1D1(__this, /*hidden argument*/Component_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD63281542675697ADC038B664E30F73F6BC1F1D1_RuntimeMethod_var);
		NullCheck(L_1);
		Canvas_set_renderMode_mE19EA5E3E4758704CCA6A6A2E4EB84DB75096088(L_1, 1, /*hidden argument*/NULL);
		// GetComponent<Canvas> ().renderMode = RenderMode.WorldSpace;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_2;
		L_2 = Component_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD63281542675697ADC038B664E30F73F6BC1F1D1(__this, /*hidden argument*/Component_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD63281542675697ADC038B664E30F73F6BC1F1D1_RuntimeMethod_var);
		NullCheck(L_2);
		Canvas_set_renderMode_mE19EA5E3E4758704CCA6A6A2E4EB84DB75096088(L_2, 2, /*hidden argument*/NULL);
		// transform.rotation = Quaternion.Euler (new Vector3 (0, 6, 0));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), (0.0f), (6.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_3, L_5, /*hidden argument*/NULL);
	}

IL_003f:
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.Demo.UIParticle_Demo::SetScreenSpase(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_Demo_SetScreenSpase_mA3C8E21D7EA98677F03A2ABF28F516832B82E863 (UIParticle_Demo_t5AD82A4FE6A6A48E30C026CEA5F91CCE239E2B27 * __this, bool ___flag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD63281542675697ADC038B664E30F73F6BC1F1D1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flag)
		bool L_0 = ___flag0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// GetComponent<Canvas> ().renderMode = RenderMode.ScreenSpaceCamera;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_1;
		L_1 = Component_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD63281542675697ADC038B664E30F73F6BC1F1D1(__this, /*hidden argument*/Component_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD63281542675697ADC038B664E30F73F6BC1F1D1_RuntimeMethod_var);
		NullCheck(L_1);
		Canvas_set_renderMode_mE19EA5E3E4758704CCA6A6A2E4EB84DB75096088(L_1, 1, /*hidden argument*/NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.Demo.UIParticle_Demo::SetOverlay(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_Demo_SetOverlay_mFA151B4FC4DBFB39E47A0F28B686312F4E053950 (UIParticle_Demo_t5AD82A4FE6A6A48E30C026CEA5F91CCE239E2B27 * __this, bool ___flag0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD63281542675697ADC038B664E30F73F6BC1F1D1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (flag)
		bool L_0 = ___flag0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// GetComponent<Canvas> ().renderMode = RenderMode.ScreenSpaceOverlay;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_1;
		L_1 = Component_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD63281542675697ADC038B664E30F73F6BC1F1D1(__this, /*hidden argument*/Component_GetComponent_TisCanvas_t2B7E56B7BDC287962E092755372E214ACB6393EA_mD63281542675697ADC038B664E30F73F6BC1F1D1_RuntimeMethod_var);
		NullCheck(L_1);
		Canvas_set_renderMode_mE19EA5E3E4758704CCA6A6A2E4EB84DB75096088(L_1, 0, /*hidden argument*/NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.Demo.UIParticle_Demo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_Demo__ctor_mEC78CF10F3E74F31E8F0305040357C17A4C37260 (UIParticle_Demo_t5AD82A4FE6A6A48E30C026CEA5F91CCE239E2B27 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7D1A839C1BAE4BD9CCBD0203D0AF23A6C337B4F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF1D464BA700E6389AEA8AF2F197270F387D9A41F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] ParticleSystem [] m_ParticleSystems = new ParticleSystem [0];
		ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* L_0 = (ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7*)(ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7*)SZArrayNew(ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_m_ParticleSystems_4(L_0);
		// [SerializeField] List<Transform> m_ScalingByTransforms = new List<Transform> ();
		List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 * L_1 = (List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0 *)il2cpp_codegen_object_new(List_1_t27D7842CA3FD659C9BE64845F118C2590EE2D2C0_il2cpp_TypeInfo_var);
		List_1__ctor_mF1D464BA700E6389AEA8AF2F197270F387D9A41F(L_1, /*hidden argument*/List_1__ctor_mF1D464BA700E6389AEA8AF2F197270F387D9A41F_RuntimeMethod_var);
		__this->set_m_ScalingByTransforms_5(L_1);
		// [SerializeField] List<UIParticle> m_ScalingByUIParticles = new List<UIParticle> ();
		List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF * L_2 = (List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF *)il2cpp_codegen_object_new(List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF_il2cpp_TypeInfo_var);
		List_1__ctor_m7D1A839C1BAE4BD9CCBD0203D0AF23A6C337B4F5(L_2, /*hidden argument*/List_1__ctor_m7D1A839C1BAE4BD9CCBD0203D0AF23A6C337B4F5_RuntimeMethod_var);
		__this->set_m_ScalingByUIParticles_6(L_2);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Coffee.UIExtensions.Demo.UIParticle_Demo/<>c__DisplayClass8_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0__ctor_mDA28F794480F11992DCA5BF2013B38059B857FCE (U3CU3Ec__DisplayClass8_0_t283154FF27B91AB111F28C923C07D11D71534F43 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Coffee.UIExtensions.Demo.UIParticle_Demo/<>c__DisplayClass8_0::<SetScale>b__0(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CSetScaleU3Eb__0_m641D93EACE7282F8EA577044BE210C8FB186A036 (U3CU3Ec__DisplayClass8_0_t283154FF27B91AB111F28C923C07D11D71534F43 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___x0, const RuntimeMethod* method)
{
	{
		// m_ScalingByTransforms.ForEach (x => x.localScale = Vector3.one * (10 * scale));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = ___x0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Vector3_get_one_m9CDE5C456038B133ED94402673859EC37B1C1CCB(/*hidden argument*/NULL);
		float L_2 = __this->get_scale_0();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_1, ((float)il2cpp_codegen_multiply((float)(10.0f), (float)L_2)), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Coffee.UIExtensions.Demo.UIParticle_Demo/<>c__DisplayClass8_0::<SetScale>b__1(Coffee.UIExtensions.UIParticle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass8_0_U3CSetScaleU3Eb__1_mD9941A1C6A695DE9B77781B0EC522F04E447C4B0 (U3CU3Ec__DisplayClass8_0_t283154FF27B91AB111F28C923C07D11D71534F43 * __this, UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * ___x0, const RuntimeMethod* method)
{
	{
		// m_ScalingByUIParticles.ForEach (x => x.scale = scale);
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_0 = ___x0;
		float L_1 = __this->get_scale_0();
		NullCheck(L_0);
		UIParticle_set_scale_mB3F4F443D2F4EE4956FD2D7889424E33F126D78F(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Division_m9E0ABD4CB731137B84249278B80D4C2624E58AC6_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)((float)L_1/(float)L_2)), ((float)((float)L_4/(float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Subtraction_m6E536A8C72FEAA37FF8D5E26E11D6E71EB59599A_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Addition_m5EACC2AEA80FEE29F380397CF1F4B11D04BE71CC_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___b1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___b1;
		float L_3 = L_2.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___a0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___b1;
		float L_7 = L_6.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
