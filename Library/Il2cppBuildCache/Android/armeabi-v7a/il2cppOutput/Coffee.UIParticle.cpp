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
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`1<UnityEngine.ParticleSystem>
struct Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B;
// System.Comparison`1<System.Object>
struct Comparison_1_tB56E8E7C2BF431D44E8EBD15EA3E6F41AAFF03D2;
// System.Comparison`1<UnityEngine.ParticleSystem>
struct Comparison_1_tF57F49CF96CEC329DB3C15911D3B5B784133A008;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.CombineInstance[]>
struct Dictionary_2_tAFAC43DCAF688DC93628A59EA943D13A05C32E76;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5;
// System.Collections.Generic.IEnumerable`1<System.Boolean>
struct IEnumerable_1_t90AD96F2C518D6F04343C83B67B02220C715C642;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Material>
struct IEnumerable_1_tC56A812DB62E3B254ED968BE9E6EE9AD8151B7BB;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IList`1<UnityEngine.ParticleSystem>
struct IList_1_t10DACFED13F923CF5C340ADDFC029F4554FF4F7E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.CombineInstance[]>
struct KeyCollection_tB80789A7737A623400EF888CE96406CFF555FDCF;
// System.Collections.Generic.List`1<System.Boolean>
struct List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3;
// System.Collections.Generic.List`1<UnityEngine.CombineInstance>
struct List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF;
// System.Collections.Generic.List`1<Coffee.UIParticleExtensions.CombineInstanceEx>
struct List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F;
// System.Collections.Generic.List`1<UnityEngine.Material>
struct List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
struct List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63;
// System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticle>
struct List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF;
// System.Collections.Generic.List`1<Coffee.UIParticleExtensions.ModifiedMaterial/MatEntry>
struct List_1_t8EFCAFAE60F257CBDEA4CF1BEEFF376201A30B03;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<UnityEngine.ParticleSystem>
struct Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C;
// System.Collections.Generic.Stack`1<UnityEngine.Mesh>
struct Stack_1_t9B0A1D93361238182708268525DABDC931439A17;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.CombineInstance[]>
struct ValueCollection_t3A4A51D9F3BF0E62173498A37C3325A88B5F99F5;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.CombineInstance[]>[]
struct EntryU5BU5D_tFEDC7043BF7C3C68C1A9B603504CABB78F0F1394;
// System.Collections.Generic.HashSet`1/Slot<System.Int32>[]
struct SlotU5BU5D_t464AE2F4120A3C0E4A56A29ED1393EC87FBAA975;
// Coffee.UIExtensions.AnimatableProperty[]
struct AnimatablePropertyU5BU5D_t6C258C617AAB73DF8E000037B670ED757286E1DD;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.CombineInstance[]
struct CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF;
// Coffee.UIParticleExtensions.CombineInstanceEx[]
struct CombineInstanceExU5BU5D_t3523989A6D7DB2CD38FBAA30FDE7A358DAA5B6E2;
// UnityEngine.Component[]
struct ComponentU5BU5D_t181D1A0F31BD71963DE10ADB58D85A11E19FFF4A;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.Material[]
struct MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492;
// UnityEngine.Mesh[]
struct MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// Coffee.UIExtensions.UIParticle[]
struct UIParticleU5BU5D_t121270CDE2DFB68E154FAA2CDD401ED60988CA26;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// Coffee.UIParticleExtensions.ModifiedMaterial/MatEntry[]
struct MatEntryU5BU5D_t9697812121D43EE9510DC40291ED984A0C13CF37;
// UnityEngine.ParticleSystem/Particle[]
struct ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C;
// Coffee.UIExtensions.AnimatableProperty
struct AnimatableProperty_t1C4E28F37643462525F81B462CF1EC460DD18814;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// Coffee.UIParticleExtensions.BakingCamera
struct BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// Coffee.UIParticleExtensions.CombineInstanceEx
struct CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.MaterialPropertyBlock
struct MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Coffee.UIParticleExtensions.ModifiedMaterial
struct ModifiedMaterial_t035B918924C47AEE757A8D0897C6EF8EFF782EE7;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
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
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// Coffee.UIExtensions.UIParticle
struct UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// Coffee.UIParticleExtensions.ModifiedMaterial/MatEntry
struct MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143;
// Coffee.UIParticleExtensions.ParticleSystemExtensions/<>c
struct U3CU3Ec_t7C65392AB7B89EB93CD97F4D2C256FF531662AFA;
// Coffee.UIParticleExtensions.ParticleSystemExtensions/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t410A51546B9C637DD1CE839ED94804B7C5005A80;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE;
// Coffee.UIExtensions.UIParticle/<>c
struct U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848;
// Coffee.UIExtensions.UIParticle/<Start>d__64
struct U3CStartU3Ed__64_t7BB41721AF1EF379EB6185056ADF644F90A4B065;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AnimatablePropertyU5BU5D_t6C258C617AAB73DF8E000037B670ED757286E1DD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CombineInstanceArrayPool_t13D673FAA6CDC2996CB9628491E571DBF55634E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Comparison_1_tF57F49CF96CEC329DB3C15911D3B5B784133A008_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tAFAC43DCAF688DC93628A59EA943D13A05C32E76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tD81B558EAB7EDCD37929FCB48540D2F6A3A551A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t10DACFED13F923CF5C340ADDFC029F4554FF4F7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMaterialModifier_t36437594488A51EC8B02886F7FAC5D32027A33DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t8EFCAFAE60F257CBDEA4CF1BEEFF376201A30B03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ModifiedMaterial_t035B918924C47AEE757A8D0897C6EF8EFF782EE7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t9B0A1D93361238182708268525DABDC931439A17_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StencilMaterial_t498DA9A7C15643B79E27575F27F1D2FC2FEA6AC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartU3Ed__64_t7BB41721AF1EF379EB6185056ADF644F90A4B065_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_t410A51546B9C637DD1CE839ED94804B7C5005A80_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7C65392AB7B89EB93CD97F4D2C256FF531662AFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralCA95F4A37D28DD74140609EDBE8F5C0C006966AD;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m11A8909AF17DB54C2399B548B37E3DB0C5CAC25B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Comparison_1__ctor_m0E65C2A306623C841A061C4330F69FF738D5341E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisUIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_mC9B08D8738AEB9AA87E6C2C2A171A631C7C58AB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m433D0F036D744378DDD67C566DDC69B19052E933_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m1BA90639BF94849A162DBBBE2D51C11C87280086_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m4F75362249261B3425FE3403FB7A77CD48479C64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m24E92C7D957DD723750CC68EEC11C4B064EAEB99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m9DEBD94A834E7D9E6A4B407E1B103559405E1327_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mF8947E77DF8E2A5E7FDDD5AE5068EED63238218D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m2D9B2AE14EAA49B9CD53037426644D4BA1A5FD35_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mB381E883DF3917B1939FCC6ACAFB0D2F261E84DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mBF6A108518D945770396C6AD62AA4206F03ACED3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m8853CA3A6E508B9E310384EC2339E680BD0AE125_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m9C4955A7BB9E2779D07D1025464DB59B8EDFE23E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBDF9C2CE29A407750480474BA191248286A4CDD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m0F57CB6207605CE09FE2619C57FECF7C5BEF3A0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m2B293FE9ED2E11EFBA638DC3B4B5AB211F85C41E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m3BDED7BDE61A99820C96FB446198B850B4CCF068_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisBakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_m29E3FA27ED0C77E7855F40C895AA48523653BFE5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_m30A12D305C7F27946BFB6D84B7C754E899E1562C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_mAAB09D18EF9CE309F3324D68B1A82274FCAEF6D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_mBA8BA1E2EE63D6BFF50F9483EC5F281CF2F45920_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Contains_m90455A5864CF4193E243B3DF80D0366956FD48E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Remove_m166ED666B4C5E879ACED5F85C2FF6D10C9A52F74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m9B21BAAD4C19CA98ED32C01B726F2582CBA60B77_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListExtensions_AnyFast_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_mA832995BC042C5CEF3C4D2E9DB38E21FCB25D40A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ListExtensions_AnyFast_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_mDC26D93BC277BF64AAC4801E25D8382523A97190_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m3547993FB352517F6F60B5848050BACDF2888876_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_mA7CC85A1456655584AA666037C9EE401745CA8DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m36874AE3230618C5996C030D9BE84120CA0F9735_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m583619246DFE5A4BE61DBA1CA5153C5BE8A82363_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m72E02E882488482876D83617E79085CF92557957_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m94A297AF43A89F187AA7F2F7F2544999DFCDC4D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE885F528560A99DD40033971E510608ED1D02418_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m099848ADBF5C4E55AF58C6CD892989DABB39C77E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m58DE04C3BBC03B16192027F9A20F6B2CDEBCE668_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_mB8E9D7255428F65F7CF16903E93107CF11658163_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ForEach_m0325E291BDDB04FD83E58B7DD06E3FDC6555AFC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m01E37193361B61CC3FF93E932ECCBB8FF556044C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m0E52F4D4795DF4986F3EF9D506B57651DA5AAEDD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mE2CC0234A84FD3EFAFCA830CB61D4953E8718E7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAll_m975FA01DA7977F9E40CACA1B48B4816EBF9754E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mA9639AE7F375EF7A7B504939A97139429A63AF80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m0C079BFFAB901970D0252B5C7676F67958B311AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Sort_m7E0AFBB3DA1676E64DB175B3E45A37525022133D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2029C17525D75C12FB08DA4DCE5C4BF7BCC53EF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m497DA7006D664307F20A0546E5B717AA4B5E8A86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m591231B7598A4DDA3EB1ED69AB7B839E59DB7F1C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m779B55F6DAABBA10D912F806FA7817324335501B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7D1A839C1BAE4BD9CCBD0203D0AF23A6C337B4F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9547905C9B84B4FC18BBD1612EDD958836BD4420_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m990003915EFF426412433A7AA54BAABDBB68C0EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9F48966694ED21085AFB16EED54F1186D4B9D39C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE7168794D5E35E36D5509A0E57C2B8E37D2E3EF5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m1F09162EE29C285E04352BAA41B6DF15F2445862_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m2D5331F0E51DEDFD0BC68D4AE665FD93010CA0BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m32EAB7C20FE929AB4D52FE42710A40B827F4EE31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m4771A5EE25C154DEA876C4AF3D454F275922A771_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m717EDAB95A84624B81D546CBEDC84B4664B7B678_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m8547E31DBBBA85E2090BA3076611614A4C8F1A18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m9F55C8ADF8B0877FF8961B5A9BA55A9A7BFF904E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB1CDDFA55D0D9F185610C10267D0832FD89C53B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m13B9C8BE116476A73890AFB00F5596C13FC3FFAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m176BBCF7B77DAAE4B11DB833081BF12EB14605D8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m6608CAE85049DBB39679FB41D1266AF732C97461_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m6F9722B9A4F59EFF06216F059A98F13B56F1F35D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8B121A3D20746F588DB7B35604E8F1F30FD5342A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m99F4A60865784DCE41B4ECAEBD910543BBB87A1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF4824FE05AB99D77D5181B66EFB09DFC0E8C6768_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m208C043761C61621F0BA9E59EDB2E88C94E0AA51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_mF5306FB753D6295E974C36F08935DA484A23B166_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Predicate_1__ctor_mC62A94144C701E9EC5A659E5DE76CF29A717AD83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m2D7A13FCFD0DC5B184536CBC69B67A1BE7640DA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m1CBA5E24B493ACFFF6467F328233B7278FC58C42_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m242356D2EDC78CAD2B67D5AB9995E7F173A8DE3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_m6A63DFAFC39156A894BD3CCE397821CC04CA836E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartU3Ed__64_System_Collections_IEnumerator_Reset_m4C804CBF2929597F04D0243D5B85D1E8EF703193_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CClearU3Eb__52_0_mB0C876F32AC5CC357A244FC7AAA4941AEDC38D00_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CExecU3Eb__4_0_m00103062797FB632C636D1121701F549177D1B4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COnDisableU3Eb__65_0_m0873D88D78A472141724261B57680D2477818F47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COnEnableU3Eb__63_0_m42AB4AE7166163450682F0F8F8EEFB86ABD8074E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CPauseU3Eb__50_0_mDCC52D582B2F890218C18E481ACFA1BFC793ECCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CPlayU3Eb__49_0_m68892900DB4B2D962E6E8F2FD6675468A93DC724_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__64_0_m34CF1F9CE85B5759D360922EF5F5D679C378D519_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStartU3Eb__64_1_mFC25FC496F24A97AF28408FC0BDC2E8D1AECD9F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CStopU3Eb__51_0_mBEC5AD812335E6B397EB8F6964DE01CA2F7B6B17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CSortForRenderingU3Eb__0_m48956996D3FB13708AB0AC8A06D49A369D232ED7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIParticleUpdater_Refresh_mBAF1837B476F9CF0792E336448A859EA263C0811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIParticle_U3CRefreshParticlesU3Eb__57_0_m1883FBA26ECBA42D33A035DB055F4051CD89259A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIParticle_U3CRefreshParticlesU3Eb__57_1_m9031288D5CB43EC3F8B2FC677737665374634EB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* IMaterialModifier_t36437594488A51EC8B02886F7FAC5D32027A33DA_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AnimatablePropertyU5BU5D_t6C258C617AAB73DF8E000037B670ED757286E1DD;
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
struct CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t1393FB63DBE788778DCD00EF8C5951B2224111A4 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.CombineInstance[]>
struct  Dictionary_2_tAFAC43DCAF688DC93628A59EA943D13A05C32E76  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tFEDC7043BF7C3C68C1A9B603504CABB78F0F1394* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_tB80789A7737A623400EF888CE96406CFF555FDCF * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t3A4A51D9F3BF0E62173498A37C3325A88B5F99F5 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tAFAC43DCAF688DC93628A59EA943D13A05C32E76, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tAFAC43DCAF688DC93628A59EA943D13A05C32E76, ___entries_1)); }
	inline EntryU5BU5D_tFEDC7043BF7C3C68C1A9B603504CABB78F0F1394* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tFEDC7043BF7C3C68C1A9B603504CABB78F0F1394** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tFEDC7043BF7C3C68C1A9B603504CABB78F0F1394* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tAFAC43DCAF688DC93628A59EA943D13A05C32E76, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tAFAC43DCAF688DC93628A59EA943D13A05C32E76, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tAFAC43DCAF688DC93628A59EA943D13A05C32E76, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tAFAC43DCAF688DC93628A59EA943D13A05C32E76, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tAFAC43DCAF688DC93628A59EA943D13A05C32E76, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tAFAC43DCAF688DC93628A59EA943D13A05C32E76, ___keys_7)); }
	inline KeyCollection_tB80789A7737A623400EF888CE96406CFF555FDCF * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tB80789A7737A623400EF888CE96406CFF555FDCF ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tB80789A7737A623400EF888CE96406CFF555FDCF * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tAFAC43DCAF688DC93628A59EA943D13A05C32E76, ___values_8)); }
	inline ValueCollection_t3A4A51D9F3BF0E62173498A37C3325A88B5F99F5 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t3A4A51D9F3BF0E62173498A37C3325A88B5F99F5 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t3A4A51D9F3BF0E62173498A37C3325A88B5F99F5 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tAFAC43DCAF688DC93628A59EA943D13A05C32E76, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.Int32>
struct  HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t464AE2F4120A3C0E4A56A29ED1393EC87FBAA975* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5, ____slots_8)); }
	inline SlotU5BU5D_t464AE2F4120A3C0E4A56A29ED1393EC87FBAA975* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_t464AE2F4120A3C0E4A56A29ED1393EC87FBAA975** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_t464AE2F4120A3C0E4A56A29ED1393EC87FBAA975* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Boolean>
struct  List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3, ____items_1)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get__items_1() const { return ____items_1; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3_StaticFields, ____emptyArray_5)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.CombineInstance>
struct  List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF, ____items_1)); }
	inline CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* get__items_1() const { return ____items_1; }
	inline CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF_StaticFields, ____emptyArray_5)); }
	inline CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* get__emptyArray_5() const { return ____emptyArray_5; }
	inline CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Coffee.UIParticleExtensions.CombineInstanceEx>
struct  List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	CombineInstanceExU5BU5D_t3523989A6D7DB2CD38FBAA30FDE7A358DAA5B6E2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A, ____items_1)); }
	inline CombineInstanceExU5BU5D_t3523989A6D7DB2CD38FBAA30FDE7A358DAA5B6E2* get__items_1() const { return ____items_1; }
	inline CombineInstanceExU5BU5D_t3523989A6D7DB2CD38FBAA30FDE7A358DAA5B6E2** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(CombineInstanceExU5BU5D_t3523989A6D7DB2CD38FBAA30FDE7A358DAA5B6E2* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	CombineInstanceExU5BU5D_t3523989A6D7DB2CD38FBAA30FDE7A358DAA5B6E2* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A_StaticFields, ____emptyArray_5)); }
	inline CombineInstanceExU5BU5D_t3523989A6D7DB2CD38FBAA30FDE7A358DAA5B6E2* get__emptyArray_5() const { return ____emptyArray_5; }
	inline CombineInstanceExU5BU5D_t3523989A6D7DB2CD38FBAA30FDE7A358DAA5B6E2** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(CombineInstanceExU5BU5D_t3523989A6D7DB2CD38FBAA30FDE7A358DAA5B6E2* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Component>
struct  List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ComponentU5BU5D_t181D1A0F31BD71963DE10ADB58D85A11E19FFF4A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F, ____items_1)); }
	inline ComponentU5BU5D_t181D1A0F31BD71963DE10ADB58D85A11E19FFF4A* get__items_1() const { return ____items_1; }
	inline ComponentU5BU5D_t181D1A0F31BD71963DE10ADB58D85A11E19FFF4A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ComponentU5BU5D_t181D1A0F31BD71963DE10ADB58D85A11E19FFF4A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ComponentU5BU5D_t181D1A0F31BD71963DE10ADB58D85A11E19FFF4A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F_StaticFields, ____emptyArray_5)); }
	inline ComponentU5BU5D_t181D1A0F31BD71963DE10ADB58D85A11E19FFF4A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ComponentU5BU5D_t181D1A0F31BD71963DE10ADB58D85A11E19FFF4A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ComponentU5BU5D_t181D1A0F31BD71963DE10ADB58D85A11E19FFF4A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Material>
struct  List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4, ____items_1)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get__items_1() const { return ____items_1; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4_StaticFields, ____emptyArray_5)); }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MaterialU5BU5D_t3AE4936F3CA08FB9EE182A935E665EA9CDA5E492* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.ParticleSystem>
struct  List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63, ____items_1)); }
	inline ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* get__items_1() const { return ____items_1; }
	inline ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63_StaticFields, ____emptyArray_5)); }
	inline ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ParticleSystemU5BU5D_t9786AE8909F75284FDCB6BAD155E24AAFDB88CC7* value)
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


// System.Collections.Generic.List`1<Coffee.UIParticleExtensions.ModifiedMaterial/MatEntry>
struct  List_1_t8EFCAFAE60F257CBDEA4CF1BEEFF376201A30B03  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MatEntryU5BU5D_t9697812121D43EE9510DC40291ED984A0C13CF37* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t8EFCAFAE60F257CBDEA4CF1BEEFF376201A30B03, ____items_1)); }
	inline MatEntryU5BU5D_t9697812121D43EE9510DC40291ED984A0C13CF37* get__items_1() const { return ____items_1; }
	inline MatEntryU5BU5D_t9697812121D43EE9510DC40291ED984A0C13CF37** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MatEntryU5BU5D_t9697812121D43EE9510DC40291ED984A0C13CF37* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t8EFCAFAE60F257CBDEA4CF1BEEFF376201A30B03, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t8EFCAFAE60F257CBDEA4CF1BEEFF376201A30B03, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t8EFCAFAE60F257CBDEA4CF1BEEFF376201A30B03, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t8EFCAFAE60F257CBDEA4CF1BEEFF376201A30B03_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MatEntryU5BU5D_t9697812121D43EE9510DC40291ED984A0C13CF37* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t8EFCAFAE60F257CBDEA4CF1BEEFF376201A30B03_StaticFields, ____emptyArray_5)); }
	inline MatEntryU5BU5D_t9697812121D43EE9510DC40291ED984A0C13CF37* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MatEntryU5BU5D_t9697812121D43EE9510DC40291ED984A0C13CF37** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MatEntryU5BU5D_t9697812121D43EE9510DC40291ED984A0C13CF37* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<UnityEngine.Mesh>
struct  Stack_1_t9B0A1D93361238182708268525DABDC931439A17  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t9B0A1D93361238182708268525DABDC931439A17, ____array_0)); }
	inline MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* get__array_0() const { return ____array_0; }
	inline MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(MeshU5BU5D_t9083AB7B9B72E4E05B55B7CA24A5D6020DC1C6D8* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t9B0A1D93361238182708268525DABDC931439A17, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t9B0A1D93361238182708268525DABDC931439A17, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t9B0A1D93361238182708268525DABDC931439A17, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<System.Object>
struct  Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Coffee.UIParticleExtensions.CombineInstanceArrayPool
struct  CombineInstanceArrayPool_t13D673FAA6CDC2996CB9628491E571DBF55634E2  : public RuntimeObject
{
public:

public:
};

struct CombineInstanceArrayPool_t13D673FAA6CDC2996CB9628491E571DBF55634E2_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.CombineInstance[]> Coffee.UIParticleExtensions.CombineInstanceArrayPool::s_Pool
	Dictionary_2_tAFAC43DCAF688DC93628A59EA943D13A05C32E76 * ___s_Pool_0;

public:
	inline static int32_t get_offset_of_s_Pool_0() { return static_cast<int32_t>(offsetof(CombineInstanceArrayPool_t13D673FAA6CDC2996CB9628491E571DBF55634E2_StaticFields, ___s_Pool_0)); }
	inline Dictionary_2_tAFAC43DCAF688DC93628A59EA943D13A05C32E76 * get_s_Pool_0() const { return ___s_Pool_0; }
	inline Dictionary_2_tAFAC43DCAF688DC93628A59EA943D13A05C32E76 ** get_address_of_s_Pool_0() { return &___s_Pool_0; }
	inline void set_s_Pool_0(Dictionary_2_tAFAC43DCAF688DC93628A59EA943D13A05C32E76 * value)
	{
		___s_Pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Pool_0), (void*)value);
	}
};


// Coffee.UIParticleExtensions.ListExtensions
struct  ListExtensions_tC5207C060E86A635F9A4894F93297CC057DC5CD4  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Coffee.UIParticleExtensions.MeshExtensions
struct  MeshExtensions_tC71E093857368679D1EF91309ADFB9E4E3135F55  : public RuntimeObject
{
public:

public:
};


// Coffee.UIParticleExtensions.MeshHelper
struct  MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E  : public RuntimeObject
{
public:

public:
};

struct MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_StaticFields
{
public:
	// System.Collections.Generic.List`1<System.Boolean> Coffee.UIParticleExtensions.MeshHelper::<activeMeshIndices>k__BackingField
	List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * ___U3CactiveMeshIndicesU3Ek__BackingField_0;
	// System.Collections.Generic.List`1<Coffee.UIParticleExtensions.CombineInstanceEx> Coffee.UIParticleExtensions.MeshHelper::s_CachedInstance
	List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A * ___s_CachedInstance_1;
	// System.Int32 Coffee.UIParticleExtensions.MeshHelper::count
	int32_t ___count_2;

public:
	inline static int32_t get_offset_of_U3CactiveMeshIndicesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_StaticFields, ___U3CactiveMeshIndicesU3Ek__BackingField_0)); }
	inline List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * get_U3CactiveMeshIndicesU3Ek__BackingField_0() const { return ___U3CactiveMeshIndicesU3Ek__BackingField_0; }
	inline List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 ** get_address_of_U3CactiveMeshIndicesU3Ek__BackingField_0() { return &___U3CactiveMeshIndicesU3Ek__BackingField_0; }
	inline void set_U3CactiveMeshIndicesU3Ek__BackingField_0(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * value)
	{
		___U3CactiveMeshIndicesU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CactiveMeshIndicesU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_CachedInstance_1() { return static_cast<int32_t>(offsetof(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_StaticFields, ___s_CachedInstance_1)); }
	inline List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A * get_s_CachedInstance_1() const { return ___s_CachedInstance_1; }
	inline List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A ** get_address_of_s_CachedInstance_1() { return &___s_CachedInstance_1; }
	inline void set_s_CachedInstance_1(List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A * value)
	{
		___s_CachedInstance_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_CachedInstance_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_StaticFields, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}
};


// Coffee.UIParticleExtensions.MeshPool
struct  MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3  : public RuntimeObject
{
public:

public:
};

struct MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_StaticFields
{
public:
	// System.Collections.Generic.Stack`1<UnityEngine.Mesh> Coffee.UIParticleExtensions.MeshPool::s_Pool
	Stack_1_t9B0A1D93361238182708268525DABDC931439A17 * ___s_Pool_0;
	// System.Collections.Generic.HashSet`1<System.Int32> Coffee.UIParticleExtensions.MeshPool::s_HashPool
	HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * ___s_HashPool_1;

public:
	inline static int32_t get_offset_of_s_Pool_0() { return static_cast<int32_t>(offsetof(MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_StaticFields, ___s_Pool_0)); }
	inline Stack_1_t9B0A1D93361238182708268525DABDC931439A17 * get_s_Pool_0() const { return ___s_Pool_0; }
	inline Stack_1_t9B0A1D93361238182708268525DABDC931439A17 ** get_address_of_s_Pool_0() { return &___s_Pool_0; }
	inline void set_s_Pool_0(Stack_1_t9B0A1D93361238182708268525DABDC931439A17 * value)
	{
		___s_Pool_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Pool_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_HashPool_1() { return static_cast<int32_t>(offsetof(MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_StaticFields, ___s_HashPool_1)); }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * get_s_HashPool_1() const { return ___s_HashPool_1; }
	inline HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 ** get_address_of_s_HashPool_1() { return &___s_HashPool_1; }
	inline void set_s_HashPool_1(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * value)
	{
		___s_HashPool_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_HashPool_1), (void*)value);
	}
};


// Coffee.UIParticleExtensions.ModifiedMaterial
struct  ModifiedMaterial_t035B918924C47AEE757A8D0897C6EF8EFF782EE7  : public RuntimeObject
{
public:

public:
};

struct ModifiedMaterial_t035B918924C47AEE757A8D0897C6EF8EFF782EE7_StaticFields
{
public:
	// System.Collections.Generic.List`1<Coffee.UIParticleExtensions.ModifiedMaterial/MatEntry> Coffee.UIParticleExtensions.ModifiedMaterial::s_Entries
	List_1_t8EFCAFAE60F257CBDEA4CF1BEEFF376201A30B03 * ___s_Entries_0;

public:
	inline static int32_t get_offset_of_s_Entries_0() { return static_cast<int32_t>(offsetof(ModifiedMaterial_t035B918924C47AEE757A8D0897C6EF8EFF782EE7_StaticFields, ___s_Entries_0)); }
	inline List_1_t8EFCAFAE60F257CBDEA4CF1BEEFF376201A30B03 * get_s_Entries_0() const { return ___s_Entries_0; }
	inline List_1_t8EFCAFAE60F257CBDEA4CF1BEEFF376201A30B03 ** get_address_of_s_Entries_0() { return &___s_Entries_0; }
	inline void set_s_Entries_0(List_1_t8EFCAFAE60F257CBDEA4CF1BEEFF376201A30B03 * value)
	{
		___s_Entries_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Entries_0), (void*)value);
	}
};


// Coffee.UIParticleExtensions.ParticleSystemExtensions
struct  ParticleSystemExtensions_tA1BB2C546C5756A9C9398BCE706855E60EB30940  : public RuntimeObject
{
public:

public:
};


// Coffee.UIParticleExtensions.SpriteExtensions
struct  SpriteExtensions_t10570E85E2CF1ECE91634404F51751C10DAB418C  : public RuntimeObject
{
public:

public:
};


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


// Coffee.UIExtensions.UIParticleUpdater
struct  UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8  : public RuntimeObject
{
public:

public:
};

struct UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_StaticFields
{
public:
	// System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticle> Coffee.UIExtensions.UIParticleUpdater::s_ActiveParticles
	List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF * ___s_ActiveParticles_0;
	// UnityEngine.MaterialPropertyBlock Coffee.UIExtensions.UIParticleUpdater::s_Mpb
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___s_Mpb_1;
	// UnityEngine.ParticleSystem/Particle[] Coffee.UIExtensions.UIParticleUpdater::s_Particles
	ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C* ___s_Particles_2;
	// System.Int32 Coffee.UIExtensions.UIParticleUpdater::frameCount
	int32_t ___frameCount_3;

public:
	inline static int32_t get_offset_of_s_ActiveParticles_0() { return static_cast<int32_t>(offsetof(UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_StaticFields, ___s_ActiveParticles_0)); }
	inline List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF * get_s_ActiveParticles_0() const { return ___s_ActiveParticles_0; }
	inline List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF ** get_address_of_s_ActiveParticles_0() { return &___s_ActiveParticles_0; }
	inline void set_s_ActiveParticles_0(List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF * value)
	{
		___s_ActiveParticles_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActiveParticles_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mpb_1() { return static_cast<int32_t>(offsetof(UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_StaticFields, ___s_Mpb_1)); }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * get_s_Mpb_1() const { return ___s_Mpb_1; }
	inline MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 ** get_address_of_s_Mpb_1() { return &___s_Mpb_1; }
	inline void set_s_Mpb_1(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * value)
	{
		___s_Mpb_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mpb_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_Particles_2() { return static_cast<int32_t>(offsetof(UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_StaticFields, ___s_Particles_2)); }
	inline ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C* get_s_Particles_2() const { return ___s_Particles_2; }
	inline ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C** get_address_of_s_Particles_2() { return &___s_Particles_2; }
	inline void set_s_Particles_2(ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C* value)
	{
		___s_Particles_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Particles_2), (void*)value);
	}

	inline static int32_t get_offset_of_frameCount_3() { return static_cast<int32_t>(offsetof(UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_StaticFields, ___frameCount_3)); }
	inline int32_t get_frameCount_3() const { return ___frameCount_3; }
	inline int32_t* get_address_of_frameCount_3() { return &___frameCount_3; }
	inline void set_frameCount_3(int32_t value)
	{
		___frameCount_3 = value;
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

// Coffee.UIParticleExtensions.ModifiedMaterial/MatEntry
struct  MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143  : public RuntimeObject
{
public:
	// UnityEngine.Material Coffee.UIParticleExtensions.ModifiedMaterial/MatEntry::baseMat
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___baseMat_0;
	// UnityEngine.Material Coffee.UIParticleExtensions.ModifiedMaterial/MatEntry::customMat
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___customMat_1;
	// System.Int32 Coffee.UIParticleExtensions.ModifiedMaterial/MatEntry::count
	int32_t ___count_2;
	// UnityEngine.Texture Coffee.UIParticleExtensions.ModifiedMaterial/MatEntry::texture
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___texture_3;
	// System.Int32 Coffee.UIParticleExtensions.ModifiedMaterial/MatEntry::id
	int32_t ___id_4;

public:
	inline static int32_t get_offset_of_baseMat_0() { return static_cast<int32_t>(offsetof(MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143, ___baseMat_0)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_baseMat_0() const { return ___baseMat_0; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_baseMat_0() { return &___baseMat_0; }
	inline void set_baseMat_0(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___baseMat_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseMat_0), (void*)value);
	}

	inline static int32_t get_offset_of_customMat_1() { return static_cast<int32_t>(offsetof(MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143, ___customMat_1)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_customMat_1() const { return ___customMat_1; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_customMat_1() { return &___customMat_1; }
	inline void set_customMat_1(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___customMat_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___customMat_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_texture_3() { return static_cast<int32_t>(offsetof(MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143, ___texture_3)); }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * get_texture_3() const { return ___texture_3; }
	inline Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE ** get_address_of_texture_3() { return &___texture_3; }
	inline void set_texture_3(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * value)
	{
		___texture_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___texture_3), (void*)value);
	}

	inline static int32_t get_offset_of_id_4() { return static_cast<int32_t>(offsetof(MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143, ___id_4)); }
	inline int32_t get_id_4() const { return ___id_4; }
	inline int32_t* get_address_of_id_4() { return &___id_4; }
	inline void set_id_4(int32_t value)
	{
		___id_4 = value;
	}
};


// Coffee.UIParticleExtensions.ParticleSystemExtensions/<>c
struct  U3CU3Ec_t7C65392AB7B89EB93CD97F4D2C256FF531662AFA  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t7C65392AB7B89EB93CD97F4D2C256FF531662AFA_StaticFields
{
public:
	// Coffee.UIParticleExtensions.ParticleSystemExtensions/<>c Coffee.UIParticleExtensions.ParticleSystemExtensions/<>c::<>9
	U3CU3Ec_t7C65392AB7B89EB93CD97F4D2C256FF531662AFA * ___U3CU3E9_0;
	// System.Predicate`1<UnityEngine.ParticleSystem> Coffee.UIParticleExtensions.ParticleSystemExtensions/<>c::<>9__4_0
	Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C * ___U3CU3E9__4_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7C65392AB7B89EB93CD97F4D2C256FF531662AFA_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t7C65392AB7B89EB93CD97F4D2C256FF531662AFA * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t7C65392AB7B89EB93CD97F4D2C256FF531662AFA ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t7C65392AB7B89EB93CD97F4D2C256FF531662AFA * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7C65392AB7B89EB93CD97F4D2C256FF531662AFA_StaticFields, ___U3CU3E9__4_0_1)); }
	inline Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C * get_U3CU3E9__4_0_1() const { return ___U3CU3E9__4_0_1; }
	inline Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C ** get_address_of_U3CU3E9__4_0_1() { return &___U3CU3E9__4_0_1; }
	inline void set_U3CU3E9__4_0_1(Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C * value)
	{
		___U3CU3E9__4_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_0_1), (void*)value);
	}
};


// Coffee.UIParticleExtensions.ParticleSystemExtensions/<>c__DisplayClass0_0
struct  U3CU3Ec__DisplayClass0_0_t410A51546B9C637DD1CE839ED94804B7C5005A80  : public RuntimeObject
{
public:
	// UnityEngine.Transform Coffee.UIParticleExtensions.ParticleSystemExtensions/<>c__DisplayClass0_0::transform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform_0;
	// System.Boolean Coffee.UIParticleExtensions.ParticleSystemExtensions/<>c__DisplayClass0_0::sortByMaterial
	bool ___sortByMaterial_1;
	// System.Collections.Generic.List`1<UnityEngine.ParticleSystem> Coffee.UIParticleExtensions.ParticleSystemExtensions/<>c__DisplayClass0_0::self
	List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * ___self_2;

public:
	inline static int32_t get_offset_of_transform_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t410A51546B9C637DD1CE839ED94804B7C5005A80, ___transform_0)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_transform_0() const { return ___transform_0; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_transform_0() { return &___transform_0; }
	inline void set_transform_0(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___transform_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transform_0), (void*)value);
	}

	inline static int32_t get_offset_of_sortByMaterial_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t410A51546B9C637DD1CE839ED94804B7C5005A80, ___sortByMaterial_1)); }
	inline bool get_sortByMaterial_1() const { return ___sortByMaterial_1; }
	inline bool* get_address_of_sortByMaterial_1() { return &___sortByMaterial_1; }
	inline void set_sortByMaterial_1(bool value)
	{
		___sortByMaterial_1 = value;
	}

	inline static int32_t get_offset_of_self_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass0_0_t410A51546B9C637DD1CE839ED94804B7C5005A80, ___self_2)); }
	inline List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * get_self_2() const { return ___self_2; }
	inline List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 ** get_address_of_self_2() { return &___self_2; }
	inline void set_self_2(List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * value)
	{
		___self_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___self_2), (void*)value);
	}
};


// Coffee.UIExtensions.UIParticle/<>c
struct  U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_StaticFields
{
public:
	// Coffee.UIExtensions.UIParticle/<>c Coffee.UIExtensions.UIParticle/<>c::<>9
	U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848 * ___U3CU3E9_0;
	// System.Action`1<UnityEngine.ParticleSystem> Coffee.UIExtensions.UIParticle/<>c::<>9__49_0
	Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * ___U3CU3E9__49_0_1;
	// System.Action`1<UnityEngine.ParticleSystem> Coffee.UIExtensions.UIParticle/<>c::<>9__50_0
	Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * ___U3CU3E9__50_0_2;
	// System.Action`1<UnityEngine.ParticleSystem> Coffee.UIExtensions.UIParticle/<>c::<>9__51_0
	Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * ___U3CU3E9__51_0_3;
	// System.Action`1<UnityEngine.ParticleSystem> Coffee.UIExtensions.UIParticle/<>c::<>9__52_0
	Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * ___U3CU3E9__52_0_4;
	// System.Action`1<UnityEngine.ParticleSystem> Coffee.UIExtensions.UIParticle/<>c::<>9__63_0
	Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * ___U3CU3E9__63_0_5;
	// System.Predicate`1<UnityEngine.ParticleSystem> Coffee.UIExtensions.UIParticle/<>c::<>9__64_1
	Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C * ___U3CU3E9__64_1_6;
	// System.Predicate`1<UnityEngine.ParticleSystem> Coffee.UIExtensions.UIParticle/<>c::<>9__64_0
	Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C * ___U3CU3E9__64_0_7;
	// System.Action`1<UnityEngine.ParticleSystem> Coffee.UIExtensions.UIParticle/<>c::<>9__65_0
	Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * ___U3CU3E9__65_0_8;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__49_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_StaticFields, ___U3CU3E9__49_0_1)); }
	inline Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * get_U3CU3E9__49_0_1() const { return ___U3CU3E9__49_0_1; }
	inline Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B ** get_address_of_U3CU3E9__49_0_1() { return &___U3CU3E9__49_0_1; }
	inline void set_U3CU3E9__49_0_1(Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * value)
	{
		___U3CU3E9__49_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__49_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__50_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_StaticFields, ___U3CU3E9__50_0_2)); }
	inline Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * get_U3CU3E9__50_0_2() const { return ___U3CU3E9__50_0_2; }
	inline Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B ** get_address_of_U3CU3E9__50_0_2() { return &___U3CU3E9__50_0_2; }
	inline void set_U3CU3E9__50_0_2(Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * value)
	{
		___U3CU3E9__50_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__50_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__51_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_StaticFields, ___U3CU3E9__51_0_3)); }
	inline Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * get_U3CU3E9__51_0_3() const { return ___U3CU3E9__51_0_3; }
	inline Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B ** get_address_of_U3CU3E9__51_0_3() { return &___U3CU3E9__51_0_3; }
	inline void set_U3CU3E9__51_0_3(Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * value)
	{
		___U3CU3E9__51_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__51_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__52_0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_StaticFields, ___U3CU3E9__52_0_4)); }
	inline Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * get_U3CU3E9__52_0_4() const { return ___U3CU3E9__52_0_4; }
	inline Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B ** get_address_of_U3CU3E9__52_0_4() { return &___U3CU3E9__52_0_4; }
	inline void set_U3CU3E9__52_0_4(Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * value)
	{
		___U3CU3E9__52_0_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__52_0_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__63_0_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_StaticFields, ___U3CU3E9__63_0_5)); }
	inline Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * get_U3CU3E9__63_0_5() const { return ___U3CU3E9__63_0_5; }
	inline Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B ** get_address_of_U3CU3E9__63_0_5() { return &___U3CU3E9__63_0_5; }
	inline void set_U3CU3E9__63_0_5(Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * value)
	{
		___U3CU3E9__63_0_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__63_0_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__64_1_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_StaticFields, ___U3CU3E9__64_1_6)); }
	inline Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C * get_U3CU3E9__64_1_6() const { return ___U3CU3E9__64_1_6; }
	inline Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C ** get_address_of_U3CU3E9__64_1_6() { return &___U3CU3E9__64_1_6; }
	inline void set_U3CU3E9__64_1_6(Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C * value)
	{
		___U3CU3E9__64_1_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__64_1_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__64_0_7() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_StaticFields, ___U3CU3E9__64_0_7)); }
	inline Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C * get_U3CU3E9__64_0_7() const { return ___U3CU3E9__64_0_7; }
	inline Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C ** get_address_of_U3CU3E9__64_0_7() { return &___U3CU3E9__64_0_7; }
	inline void set_U3CU3E9__64_0_7(Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C * value)
	{
		___U3CU3E9__64_0_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__64_0_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__65_0_8() { return static_cast<int32_t>(offsetof(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_StaticFields, ___U3CU3E9__65_0_8)); }
	inline Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * get_U3CU3E9__65_0_8() const { return ___U3CU3E9__65_0_8; }
	inline Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B ** get_address_of_U3CU3E9__65_0_8() { return &___U3CU3E9__65_0_8; }
	inline void set_U3CU3E9__65_0_8(Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * value)
	{
		___U3CU3E9__65_0_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__65_0_8), (void*)value);
	}
};


// Coffee.UIExtensions.UIParticle/<Start>d__64
struct  U3CStartU3Ed__64_t7BB41721AF1EF379EB6185056ADF644F90A4B065  : public RuntimeObject
{
public:
	// System.Int32 Coffee.UIExtensions.UIParticle/<Start>d__64::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Coffee.UIExtensions.UIParticle/<Start>d__64::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Coffee.UIExtensions.UIParticle Coffee.UIExtensions.UIParticle/<Start>d__64::<>4__this
	UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__64_t7BB41721AF1EF379EB6185056ADF644F90A4B065, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__64_t7BB41721AF1EF379EB6185056ADF644F90A4B065, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartU3Ed__64_t7BB41721AF1EF379EB6185056ADF644F90A4B065, ___U3CU3E4__this_2)); }
	inline UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Coffee.UIParticleExtensions.CombineInstanceEx>
struct  Enumerator_t250018180E53D2193DBE84E32FBEF13F3EAE159C 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t250018180E53D2193DBE84E32FBEF13F3EAE159C, ___list_0)); }
	inline List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A * get_list_0() const { return ___list_0; }
	inline List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t250018180E53D2193DBE84E32FBEF13F3EAE159C, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t250018180E53D2193DBE84E32FBEF13F3EAE159C, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t250018180E53D2193DBE84E32FBEF13F3EAE159C, ___current_3)); }
	inline CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * get_current_3() const { return ___current_3; }
	inline CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.Material>
struct  Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83, ___list_0)); }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * get_list_0() const { return ___list_0; }
	inline List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83, ___current_3)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_current_3() const { return ___current_3; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UnityEngine.ParticleSystem>
struct  Enumerator_t98A8303225347C32B273C93CEAB5C421F46D6756 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t98A8303225347C32B273C93CEAB5C421F46D6756, ___list_0)); }
	inline List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * get_list_0() const { return ___list_0; }
	inline List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t98A8303225347C32B273C93CEAB5C421F46D6756, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t98A8303225347C32B273C93CEAB5C421F46D6756, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t98A8303225347C32B273C93CEAB5C421F46D6756, ___current_3)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_current_3() const { return ___current_3; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
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


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// UnityEngine.Matrix4x4
struct  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
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

// UnityEngine.ParticleSystem/SubEmittersModule
struct  SubEmittersModule_t0336A6F2B5D3339D93468AED015E2356FBE9E61C 
{
public:
	// UnityEngine.ParticleSystem UnityEngine.ParticleSystem/SubEmittersModule::m_ParticleSystem
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;

public:
	inline static int32_t get_offset_of_m_ParticleSystem_0() { return static_cast<int32_t>(offsetof(SubEmittersModule_t0336A6F2B5D3339D93468AED015E2356FBE9E61C, ___m_ParticleSystem_0)); }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * get_m_ParticleSystem_0() const { return ___m_ParticleSystem_0; }
	inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E ** get_address_of_m_ParticleSystem_0() { return &___m_ParticleSystem_0; }
	inline void set_m_ParticleSystem_0(ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * value)
	{
		___m_ParticleSystem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParticleSystem_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ParticleSystem/SubEmittersModule
struct SubEmittersModule_t0336A6F2B5D3339D93468AED015E2356FBE9E61C_marshaled_pinvoke
{
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___m_ParticleSystem_0;
};
// Native definition for COM marshalling of UnityEngine.ParticleSystem/SubEmittersModule
struct SubEmittersModule_t0336A6F2B5D3339D93468AED015E2356FBE9E61C_marshaled_com
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

// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.ColorWriteMask
struct  ColorWriteMask_t3FA3CB36396FDF33FC5192A387BC3E75232299C0 
{
public:
	// System.Int32 UnityEngine.Rendering.ColorWriteMask::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorWriteMask_t3FA3CB36396FDF33FC5192A387BC3E75232299C0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.CombineInstance
struct  CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C 
{
public:
	// System.Int32 UnityEngine.CombineInstance::m_MeshInstanceID
	int32_t ___m_MeshInstanceID_0;
	// System.Int32 UnityEngine.CombineInstance::m_SubMeshIndex
	int32_t ___m_SubMeshIndex_1;
	// UnityEngine.Matrix4x4 UnityEngine.CombineInstance::m_Transform
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___m_Transform_2;
	// UnityEngine.Vector4 UnityEngine.CombineInstance::m_LightmapScaleOffset
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_LightmapScaleOffset_3;
	// UnityEngine.Vector4 UnityEngine.CombineInstance::m_RealtimeLightmapScaleOffset
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RealtimeLightmapScaleOffset_4;

public:
	inline static int32_t get_offset_of_m_MeshInstanceID_0() { return static_cast<int32_t>(offsetof(CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C, ___m_MeshInstanceID_0)); }
	inline int32_t get_m_MeshInstanceID_0() const { return ___m_MeshInstanceID_0; }
	inline int32_t* get_address_of_m_MeshInstanceID_0() { return &___m_MeshInstanceID_0; }
	inline void set_m_MeshInstanceID_0(int32_t value)
	{
		___m_MeshInstanceID_0 = value;
	}

	inline static int32_t get_offset_of_m_SubMeshIndex_1() { return static_cast<int32_t>(offsetof(CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C, ___m_SubMeshIndex_1)); }
	inline int32_t get_m_SubMeshIndex_1() const { return ___m_SubMeshIndex_1; }
	inline int32_t* get_address_of_m_SubMeshIndex_1() { return &___m_SubMeshIndex_1; }
	inline void set_m_SubMeshIndex_1(int32_t value)
	{
		___m_SubMeshIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Transform_2() { return static_cast<int32_t>(offsetof(CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C, ___m_Transform_2)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_m_Transform_2() const { return ___m_Transform_2; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_m_Transform_2() { return &___m_Transform_2; }
	inline void set_m_Transform_2(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___m_Transform_2 = value;
	}

	inline static int32_t get_offset_of_m_LightmapScaleOffset_3() { return static_cast<int32_t>(offsetof(CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C, ___m_LightmapScaleOffset_3)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_LightmapScaleOffset_3() const { return ___m_LightmapScaleOffset_3; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_LightmapScaleOffset_3() { return &___m_LightmapScaleOffset_3; }
	inline void set_m_LightmapScaleOffset_3(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_LightmapScaleOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_RealtimeLightmapScaleOffset_4() { return static_cast<int32_t>(offsetof(CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C, ___m_RealtimeLightmapScaleOffset_4)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RealtimeLightmapScaleOffset_4() const { return ___m_RealtimeLightmapScaleOffset_4; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RealtimeLightmapScaleOffset_4() { return &___m_RealtimeLightmapScaleOffset_4; }
	inline void set_m_RealtimeLightmapScaleOffset_4(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RealtimeLightmapScaleOffset_4 = value;
	}
};


// Coffee.UIParticleExtensions.CombineInstanceEx
struct  CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E  : public RuntimeObject
{
public:
	// System.Int32 Coffee.UIParticleExtensions.CombineInstanceEx::count
	int32_t ___count_0;
	// System.Int64 Coffee.UIParticleExtensions.CombineInstanceEx::hash
	int64_t ___hash_1;
	// System.Int32 Coffee.UIParticleExtensions.CombineInstanceEx::index
	int32_t ___index_2;
	// System.Collections.Generic.List`1<UnityEngine.CombineInstance> Coffee.UIParticleExtensions.CombineInstanceEx::combineInstances
	List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * ___combineInstances_3;
	// UnityEngine.Mesh Coffee.UIParticleExtensions.CombineInstanceEx::mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh_4;
	// UnityEngine.Matrix4x4 Coffee.UIParticleExtensions.CombineInstanceEx::transform
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___transform_5;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_hash_1() { return static_cast<int32_t>(offsetof(CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E, ___hash_1)); }
	inline int64_t get_hash_1() const { return ___hash_1; }
	inline int64_t* get_address_of_hash_1() { return &___hash_1; }
	inline void set_hash_1(int64_t value)
	{
		___hash_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_combineInstances_3() { return static_cast<int32_t>(offsetof(CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E, ___combineInstances_3)); }
	inline List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * get_combineInstances_3() const { return ___combineInstances_3; }
	inline List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF ** get_address_of_combineInstances_3() { return &___combineInstances_3; }
	inline void set_combineInstances_3(List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * value)
	{
		___combineInstances_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___combineInstances_3), (void*)value);
	}

	inline static int32_t get_offset_of_mesh_4() { return static_cast<int32_t>(offsetof(CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E, ___mesh_4)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_mesh_4() const { return ___mesh_4; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_mesh_4() { return &___mesh_4; }
	inline void set_mesh_4(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___mesh_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mesh_4), (void*)value);
	}

	inline static int32_t get_offset_of_transform_5() { return static_cast<int32_t>(offsetof(CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E, ___transform_5)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_transform_5() const { return ___transform_5; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_transform_5() { return &___transform_5; }
	inline void set_transform_5(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___transform_5 = value;
	}
};


// UnityEngine.Rendering.CompareFunction
struct  CompareFunction_tBF5493E8F362C82B59254A3737D21710E0B70075 
{
public:
	// System.Int32 UnityEngine.Rendering.CompareFunction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompareFunction_tBF5493E8F362C82B59254A3737D21710E0B70075, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// UnityEngine.DrivenTransformProperties
struct  DrivenTransformProperties_t3AD3E95057A9FBFD9600C7C8F2F446D93250DF62 
{
public:
	// System.Int32 UnityEngine.DrivenTransformProperties::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DrivenTransformProperties_t3AD3E95057A9FBFD9600C7C8F2F446D93250DF62, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.HideFlags
struct  HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12 
{
public:
	// System.Int32 UnityEngine.HideFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HideFlags_tDC64149E37544FF83B2B4222D3E9DC8188766A12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.MaterialPropertyBlock
struct  MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.MaterialPropertyBlock::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
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

// UnityEngine.ParticleSystemAnimationMode
struct  ParticleSystemAnimationMode_t4B7D0E5B5299C89B7D2A77C1159D17BA16EE4690 
{
public:
	// System.Int32 UnityEngine.ParticleSystemAnimationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParticleSystemAnimationMode_t4B7D0E5B5299C89B7D2A77C1159D17BA16EE4690, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ParticleSystemRenderMode
struct  ParticleSystemRenderMode_t59F40974ED8FD0F14A4D20136E551AAFFDC0999D 
{
public:
	// System.Int32 UnityEngine.ParticleSystemRenderMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParticleSystemRenderMode_t59F40974ED8FD0F14A4D20136E551AAFFDC0999D, ___value___2)); }
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


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.Rendering.StencilOp
struct  StencilOp_t29403ED1B3D9A0953577E567FA3BF403E13FA6AD 
{
public:
	// System.Int32 UnityEngine.Rendering.StencilOp::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StencilOp_t29403ED1B3D9A0953577E567FA3BF403E13FA6AD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Rendering.UVChannelFlags
struct  UVChannelFlags_tEF0B5D8CC56FEAF65A167439CFE17F67E9F901E1 
{
public:
	// System.Int32 UnityEngine.Rendering.UVChannelFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UVChannelFlags_tEF0B5D8CC56FEAF65A167439CFE17F67E9F901E1, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Coffee.UIExtensions.AnimatableProperty/ShaderPropertyType
struct  ShaderPropertyType_tEC1F25882D801E4331FA43EF78193E0176891279 
{
public:
	// System.Int32 Coffee.UIExtensions.AnimatableProperty/ShaderPropertyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ShaderPropertyType_tEC1F25882D801E4331FA43EF78193E0176891279, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// Coffee.UIExtensions.AnimatableProperty
struct  AnimatableProperty_t1C4E28F37643462525F81B462CF1EC460DD18814  : public RuntimeObject
{
public:
	// System.String Coffee.UIExtensions.AnimatableProperty::m_Name
	String_t* ___m_Name_0;
	// Coffee.UIExtensions.AnimatableProperty/ShaderPropertyType Coffee.UIExtensions.AnimatableProperty::m_Type
	int32_t ___m_Type_1;
	// System.Int32 Coffee.UIExtensions.AnimatableProperty::<id>k__BackingField
	int32_t ___U3CidU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(AnimatableProperty_t1C4E28F37643462525F81B462CF1EC460DD18814, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(AnimatableProperty_t1C4E28F37643462525F81B462CF1EC460DD18814, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AnimatableProperty_t1C4E28F37643462525F81B462CF1EC460DD18814, ___U3CidU3Ek__BackingField_2)); }
	inline int32_t get_U3CidU3Ek__BackingField_2() const { return ___U3CidU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CidU3Ek__BackingField_2() { return &___U3CidU3Ek__BackingField_2; }
	inline void set_U3CidU3Ek__BackingField_2(int32_t value)
	{
		___U3CidU3Ek__BackingField_2 = value;
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


// UnityEngine.Mesh
struct  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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

// UnityEngine.Sprite
struct  Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
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


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Action`1<UnityEngine.ParticleSystem>
struct  Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B  : public MulticastDelegate_t
{
public:

public:
};


// System.Comparison`1<UnityEngine.ParticleSystem>
struct  Comparison_1_tF57F49CF96CEC329DB3C15911D3B5B784133A008  : public MulticastDelegate_t
{
public:

public:
};


// System.Predicate`1<UnityEngine.ParticleSystem>
struct  Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C  : public MulticastDelegate_t
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


// UnityEngine.CanvasRenderer
struct  CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:
	// System.Boolean UnityEngine.CanvasRenderer::<isMask>k__BackingField
	bool ___U3CisMaskU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CisMaskU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E, ___U3CisMaskU3Ek__BackingField_4)); }
	inline bool get_U3CisMaskU3Ek__BackingField_4() const { return ___U3CisMaskU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CisMaskU3Ek__BackingField_4() { return &___U3CisMaskU3Ek__BackingField_4; }
	inline void set_U3CisMaskU3Ek__BackingField_4(bool value)
	{
		___U3CisMaskU3Ek__BackingField_4 = value;
	}
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// UnityEngine.Canvas/WillRenderCanvases
struct  WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
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


// UnityEngine.RectTransform
struct  RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072  : public Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1
{
public:

public:
};

struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields
{
public:
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * ___reapplyDrivenProperties_4;

public:
	inline static int32_t get_offset_of_reapplyDrivenProperties_4() { return static_cast<int32_t>(offsetof(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_StaticFields, ___reapplyDrivenProperties_4)); }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * get_reapplyDrivenProperties_4() const { return ___reapplyDrivenProperties_4; }
	inline ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE ** get_address_of_reapplyDrivenProperties_4() { return &___reapplyDrivenProperties_4; }
	inline void set_reapplyDrivenProperties_4(ReapplyDrivenProperties_t1441259DADA8FE33A95334AC24C017DFA3DEB4CE * value)
	{
		___reapplyDrivenProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reapplyDrivenProperties_4), (void*)value);
	}
};


// Coffee.UIParticleExtensions.BakingCamera
struct  BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Camera Coffee.UIParticleExtensions.BakingCamera::_camera
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ____camera_7;

public:
	inline static int32_t get_offset_of__camera_7() { return static_cast<int32_t>(offsetof(BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765, ____camera_7)); }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * get__camera_7() const { return ____camera_7; }
	inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C ** get_address_of__camera_7() { return &____camera_7; }
	inline void set__camera_7(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * value)
	{
		____camera_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____camera_7), (void*)value);
	}
};

struct BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_StaticFields
{
public:
	// Coffee.UIParticleExtensions.BakingCamera Coffee.UIParticleExtensions.BakingCamera::s_Instance
	BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765 * ___s_Instance_4;
	// UnityEngine.Vector3 Coffee.UIParticleExtensions.BakingCamera::s_OrthoPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___s_OrthoPosition_5;
	// UnityEngine.Quaternion Coffee.UIParticleExtensions.BakingCamera::s_OrthoRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___s_OrthoRotation_6;

public:
	inline static int32_t get_offset_of_s_Instance_4() { return static_cast<int32_t>(offsetof(BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_StaticFields, ___s_Instance_4)); }
	inline BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765 * get_s_Instance_4() const { return ___s_Instance_4; }
	inline BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765 ** get_address_of_s_Instance_4() { return &___s_Instance_4; }
	inline void set_s_Instance_4(BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765 * value)
	{
		___s_Instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Instance_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_OrthoPosition_5() { return static_cast<int32_t>(offsetof(BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_StaticFields, ___s_OrthoPosition_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_s_OrthoPosition_5() const { return ___s_OrthoPosition_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_s_OrthoPosition_5() { return &___s_OrthoPosition_5; }
	inline void set_s_OrthoPosition_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___s_OrthoPosition_5 = value;
	}

	inline static int32_t get_offset_of_s_OrthoRotation_6() { return static_cast<int32_t>(offsetof(BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_StaticFields, ___s_OrthoRotation_6)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_s_OrthoRotation_6() const { return ___s_OrthoRotation_6; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_s_OrthoRotation_6() { return &___s_OrthoRotation_6; }
	inline void set_s_OrthoRotation_6(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___s_OrthoRotation_6 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.CombineInstance[]
struct CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C  m_Items[1];

public:
	inline CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C  value)
	{
		m_Items[index] = value;
	}
};
// Coffee.UIExtensions.AnimatableProperty[]
struct AnimatablePropertyU5BU5D_t6C258C617AAB73DF8E000037B670ED757286E1DD  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AnimatableProperty_t1C4E28F37643462525F81B462CF1EC460DD18814 * m_Items[1];

public:
	inline AnimatableProperty_t1C4E28F37643462525F81B462CF1EC460DD18814 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AnimatableProperty_t1C4E28F37643462525F81B462CF1EC460DD18814 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AnimatableProperty_t1C4E28F37643462525F81B462CF1EC460DD18814 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AnimatableProperty_t1C4E28F37643462525F81B462CF1EC460DD18814 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AnimatableProperty_t1C4E28F37643462525F81B462CF1EC460DD18814 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AnimatableProperty_t1C4E28F37643462525F81B462CF1EC460DD18814 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};


// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m14135ABCC9D07B90731529E85DFAAA2BBD1ED8DB_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CombineInstance>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m32EAB7C20FE929AB4D52FE42710A40B827F4EE31_gshared_inline (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.CombineInstance>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C  List_1_get_Item_m8B121A3D20746F588DB7B35604E8F1F30FD5342A_gshared_inline (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * __this, int32_t ___index0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.CombineInstance>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_mF5306FB753D6295E974C36F08935DA484A23B166_gshared (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * __this, int32_t ___index0, CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C  ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.CombineInstance>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_mB8E9D7255428F65F7CF16903E93107CF11658163_gshared (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.CombineInstance>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m583619246DFE5A4BE61DBA1CA5153C5BE8A82363_gshared (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * __this, CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C  ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.CombineInstance>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE7168794D5E35E36D5509A0E57C2B8E37D2E3EF5_gshared (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m8547E31DBBBA85E2090BA3076611614A4C8F1A18_gshared_inline (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Boolean>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool List_1_get_Item_m6608CAE85049DBB39679FB41D1266AF732C97461_gshared_inline (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m2029C17525D75C12FB08DA4DCE5C4BF7BCC53EF9_gshared (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Boolean>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m208C043761C61621F0BA9E59EDB2E88C94E0AA51_gshared (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * __this, int32_t ___index0, bool ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Boolean>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m099848ADBF5C4E55AF58C6CD892989DABB39C77E_gshared (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mAE1FB95F74EC6E95E880BF1B3E7CC57000321DA4_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9B21BAAD4C19CA98ED32C01B726F2582CBA60B77_gshared (HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mBA8BA1E2EE63D6BFF50F9483EC5F281CF2F45920_gshared (HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * __this, int32_t ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Remove_m166ED666B4C5E879ACED5F85C2FF6D10C9A52F74_gshared (HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_gshared_inline (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Contains_m90455A5864CF4193E243B3DF80D0366956FD48E8_gshared (HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Comparison`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Comparison_1__ctor_mDE1798563694D30022D3B7E1010347C573690B4A_gshared (Comparison_1_tB56E8E7C2BF431D44E8EBD15EA3E6F41AAFF03D2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Sort(System.Comparison`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Sort_m5EB3F127CD42F1ACA97F4DB8754C49F23B64D750_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, Comparison_1_tB56E8E7C2BF431D44E8EBD15EA3E6F41AAFF03D2 * ___comparison0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3F41E32C976C3C48B3FC63FBFD3FBBC5B5F23EDD_gshared (Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::RemoveAll(System.Predicate`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_RemoveAll_m3CA48D06F70CC498ADA7410EB930969256F43675_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___match0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::ForEach(System.Action`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_ForEach_m1C08725A39127C32D56B9E8A36D813F08D3BFF4D_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___action0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Boolean>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m3547993FB352517F6F60B5848050BACDF2888876_gshared (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::GetComponentsInChildren<System.Object>(System.Collections.Generic.List`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_GetComponentsInChildren_TisRuntimeObject_m0F6B7256CFDE29B99F52869B4EA0DC4505437C58_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___results0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Boolean Coffee.UIParticleExtensions.ListExtensions::AnyFast<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListExtensions_AnyFast_TisRuntimeObject_m49B03D39E750D230E1C3EA26440BEA0F71D717DF_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___self0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Boolean>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m36874AE3230618C5996C030D9BE84120CA0F9735_gshared (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * __this, bool ___item0, const RuntimeMethod* method);
// System.Void UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean,System.Collections.Generic.List`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponentsInChildren_TisRuntimeObject_mCFD9EE28706E43CCE81CF186BF0E5EED482B56D9_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, bool ___includeInactive0, List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___result1, const RuntimeMethod* method);
// System.Boolean Coffee.UIParticleExtensions.ListExtensions::AnyFast<System.Object>(System.Collections.Generic.List`1<T>,System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListExtensions_AnyFast_TisRuntimeObject_mD6289F896645DA32BA1647F1D89E46B6F2D223C8_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___self0, Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___predicate1, const RuntimeMethod* method);

// System.Int32 Coffee.UIExtensions.AnimatableProperty::get_id()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AnimatableProperty_get_id_m4639FB09C0BF0DFD4327D1A081453AED3F3AF729_inline (AnimatableProperty_t1C4E28F37643462525F81B462CF1EC460DD18814 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Material::HasProperty(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Material_HasProperty_m699B4D99152E3A99733B8BD7D41EAE08BB8B1657 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, int32_t ___nameID0, const RuntimeMethod* method);
// Coffee.UIExtensions.AnimatableProperty/ShaderPropertyType Coffee.UIExtensions.AnimatableProperty::get_type()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AnimatableProperty_get_type_mBDFF96FA1A951BAF898A0CE3209F8BA499634933_inline (AnimatableProperty_t1C4E28F37643462525F81B462CF1EC460DD18814 * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.MaterialPropertyBlock::GetColor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  MaterialPropertyBlock_GetColor_m67F9B2721AF014398AA7AFD079CC435FA749611E (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * __this, int32_t ___nameID0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Color::op_Inequality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Color_op_Inequality_m6A9C7B9297D92024848ABFD305DDFE13DF40C86D (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___lhs0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetColor(System.Int32,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetColor_m9DE63FCC5A31918F8A9A2E4FCED70C298677A7B4 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, int32_t ___nameID0, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value1, const RuntimeMethod* method);
// UnityEngine.Vector4 UnityEngine.MaterialPropertyBlock::GetVector(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  MaterialPropertyBlock_GetVector_m7BAAE04A6D06A748DB3275CE093C032C2C446E0A (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * __this, int32_t ___nameID0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector4::op_Inequality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Inequality_m2B976EE8649EE1AE9DE1771CEE183AC70E3A75B7_inline (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___lhs0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetVector(System.Int32,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetVector_m47F7F5B5B21FA28885C4E747AF1C32F40C1022CB (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, int32_t ___nameID0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___value1, const RuntimeMethod* method);
// System.Single UnityEngine.MaterialPropertyBlock::GetFloat(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MaterialPropertyBlock_GetFloat_m20C2147E16CA3B7050DF4EB97448A11DC8D85DCC (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * __this, int32_t ___nameID0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetFloat_mAC7DC962B356565CF6743E358C7A19D0322EA060 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, int32_t ___nameID0, float ___value1, const RuntimeMethod* method);
// UnityEngine.Texture UnityEngine.MaterialPropertyBlock::GetTexture(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * MaterialPropertyBlock_GetTexture_m0417B72AF4285DD967C7F46B590FCD4B9048D5E2 (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * __this, int32_t ___nameID0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Material::SetTexture(System.Int32,UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_SetTexture_mECB29488B89AB3E516331DA41409510D570E9B60 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, int32_t ___nameID0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Shader::PropertyToID(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F (String_t* ___name0, const RuntimeMethod* method);
// System.Void Coffee.UIExtensions.AnimatableProperty::set_id(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnimatableProperty_set_id_mDE27575E1BBEAFDE92E4D369D1400E906189BD29_inline (AnimatableProperty_t1C4E28F37643462525F81B462CF1EC460DD18814 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// Coffee.UIParticleExtensions.BakingCamera Coffee.UIParticleExtensions.BakingCamera::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765 * BakingCamera_Create_mCC87BECB5DB059F7E06CEE9F094BDAAD0996FACB (const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_hideFlags(UnityEngine.HideFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<Coffee.UIParticleExtensions.BakingCamera>()
inline BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765 * GameObject_AddComponent_TisBakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_m29E3FA27ED0C77E7855F40C895AA48523653BFE5 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Camera>()
inline Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * GameObject_AddComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_m30A12D305C7F27946BFB6D84B7C754E899E1562C (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_orthographic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographic_m38A872FC2D448915EE94C4FB72FB02D4C3F56C52 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Canvas UnityEngine.Canvas::get_rootCanvas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * Canvas_get_rootCanvas_mB1C93410A4AA793D88130FD08C05D71327641DC5 (Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2 (RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rect_get_size_m752B3BB45AE862F6EAE941ED5E5C1B01C0973A00 (Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 * __this, const RuntimeMethod* method);
// Coffee.UIParticleExtensions.BakingCamera Coffee.UIParticleExtensions.BakingCamera::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765 * BakingCamera_get_Instance_m38D0259A6B00FAC1C828968907214B3F7F07EEFD (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775 (float ___a0, float ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Canvas::get_scaleFactor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Canvas_get_scaleFactor_m3F0D7E3B97B0493F4E98B2BBCA7A57BC1E1CB710 (Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_orthographicSize(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_orthographicSize_mFC4BBB0BB0097A5FE13E99D8388DF3008971085F (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Canvas_get_worldCamera_mFE4C9FDA7996FE20AC5CA3CB45B4190C40122D51 (Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * __this, const RuntimeMethod* method);
// UnityEngine.RenderMode UnityEngine.Canvas::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Canvas_get_renderMode_mAEC8A341577CC74EC89D5890E6D6E4A82B03574D (Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetPositionAndRotation(UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetPositionAndRotation_m33418A6BDFB6395B98D0B5733F5E522B7EEDDCDE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation1, const RuntimeMethod* method);
// System.Void UnityEngine.Camera::set_farClipPlane(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_farClipPlane_m63F1302068433A72A5103281327C68CD8F67AD41 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.CombineInstance[]>::Clear()
inline void Dictionary_2_Clear_m24E92C7D957DD723750CC68EEC11C4B064EAEB99 (Dictionary_2_tAFAC43DCAF688DC93628A59EA943D13A05C32E76 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAFAC43DCAF688DC93628A59EA943D13A05C32E76 *, const RuntimeMethod*))Dictionary_2_Clear_m14135ABCC9D07B90731529E85DFAAA2BBD1ED8DB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.CombineInstance[]>::.ctor()
inline void Dictionary_2__ctor_mF8947E77DF8E2A5E7FDDD5AE5068EED63238218D (Dictionary_2_tAFAC43DCAF688DC93628A59EA943D13A05C32E76 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAFAC43DCAF688DC93628A59EA943D13A05C32E76 *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.CombineInstance>::get_Count()
inline int32_t List_1_get_Count_m32EAB7C20FE929AB4D52FE42710A40B827F4EE31_inline (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF *, const RuntimeMethod*))List_1_get_Count_m32EAB7C20FE929AB4D52FE42710A40B827F4EE31_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.CombineInstance[]>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m9DEBD94A834E7D9E6A4B407E1B103559405E1327 (Dictionary_2_tAFAC43DCAF688DC93628A59EA943D13A05C32E76 * __this, int32_t ___key0, CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tAFAC43DCAF688DC93628A59EA943D13A05C32E76 *, int32_t, CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF**, const RuntimeMethod*))Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.CombineInstance[]>::Add(!0,!1)
inline void Dictionary_2_Add_m4F75362249261B3425FE3403FB7A77CD48479C64 (Dictionary_2_tAFAC43DCAF688DC93628A59EA943D13A05C32E76 * __this, int32_t ___key0, CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tAFAC43DCAF688DC93628A59EA943D13A05C32E76 *, int32_t, CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF*, const RuntimeMethod*))Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared)(__this, ___key0, ___value1, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.CombineInstance>::get_Item(System.Int32)
inline CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C  List_1_get_Item_m8B121A3D20746F588DB7B35604E8F1F30FD5342A_inline (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C  (*) (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF *, int32_t, const RuntimeMethod*))List_1_get_Item_m8B121A3D20746F588DB7B35604E8F1F30FD5342A_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Mesh UnityEngine.CombineInstance::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * CombineInstance_get_mesh_mB92C30E87A4B25AEA12DEBFA3EDEC8D3B115E6F4 (CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.CombineInstance::set_mesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineInstance_set_mesh_m4188D448CFD58C46FC3824D791572D07905FC824 (CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___value0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.CombineInstance::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  CombineInstance_get_transform_m183630FC919CA1D35C5803AC7985E197408468B5 (CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.CombineInstance::set_transform(UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineInstance_set_transform_mF1C28A1BC0733CD0A10481215C4FCB418C7CDA1D (CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C * __this, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___value0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Coffee.UIParticleExtensions.CombineInstanceEx>::get_Item(System.Int32)
inline CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * List_1_get_Item_m6F9722B9A4F59EFF06216F059A98F13B56F1F35D_inline (List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * (*) (List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.CombineInstance[] Coffee.UIParticleExtensions.CombineInstanceArrayPool::Get(System.Collections.Generic.List`1<UnityEngine.CombineInstance>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* CombineInstanceArrayPool_Get_m625187288E6EB5124F2F8983E401173047F9C136 (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * ___src0, const RuntimeMethod* method);
// UnityEngine.Mesh Coffee.UIParticleExtensions.MeshPool::Rent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * MeshPool_Rent_m933858E92DC47D62ACB2DA8178F810D1B36FC322 (const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::CombineMeshes(UnityEngine.CombineInstance[],System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_CombineMeshes_m406030E08EC44C147C6F0CC46E26F82A7255FB6E (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* ___combine0, bool ___mergeSubMeshes1, bool ___useMatrices2, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596 (const RuntimeMethod* method);
// System.Void Coffee.UIParticleExtensions.MeshExtensions::Clear(UnityEngine.CombineInstance[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshExtensions_Clear_m0ACA76314A298EFF9A733BBE2CDC4A71046EC377 (CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* ___self0, const RuntimeMethod* method);
// System.Void Coffee.UIParticleExtensions.MeshPool::Return(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshPool_Return_m6A14627D2C7C9498CA6B6C6CD22370B0A0D7559E (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.CombineInstance>::set_Item(System.Int32,!0)
inline void List_1_set_Item_mF5306FB753D6295E974C36F08935DA484A23B166 (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * __this, int32_t ___index0, CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C  ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF *, int32_t, CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C , const RuntimeMethod*))List_1_set_Item_mF5306FB753D6295E974C36F08935DA484A23B166_gshared)(__this, ___index0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.CombineInstance>::Clear()
inline void List_1_Clear_mB8E9D7255428F65F7CF16903E93107CF11658163 (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF *, const RuntimeMethod*))List_1_Clear_mB8E9D7255428F65F7CF16903E93107CF11658163_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.CombineInstance>::Add(!0)
inline void List_1_Add_m583619246DFE5A4BE61DBA1CA5153C5BE8A82363 (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * __this, CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C  ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF *, CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C , const RuntimeMethod*))List_1_Add_m583619246DFE5A4BE61DBA1CA5153C5BE8A82363_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.CombineInstance>::.ctor(System.Int32)
inline void List_1__ctor_mE7168794D5E35E36D5509A0E57C2B8E37D2E3EF5 (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF *, int32_t, const RuntimeMethod*))List_1__ctor_mE7168794D5E35E36D5509A0E57C2B8E37D2E3EF5_gshared)(__this, ___capacity0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Boolean>::get_Count()
inline int32_t List_1_get_Count_m8547E31DBBBA85E2090BA3076611614A4C8F1A18_inline (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 *, const RuntimeMethod*))List_1_get_Count_m8547E31DBBBA85E2090BA3076611614A4C8F1A18_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Boolean>::get_Item(System.Int32)
inline bool List_1_get_Item_m6608CAE85049DBB39679FB41D1266AF732C97461_inline (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 *, int32_t, const RuntimeMethod*))List_1_get_Item_m6608CAE85049DBB39679FB41D1266AF732C97461_gshared_inline)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.Boolean>::.ctor()
inline void List_1__ctor_m2029C17525D75C12FB08DA4DCE5C4BF7BCC53EF9 (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 *, const RuntimeMethod*))List_1__ctor_m2029C17525D75C12FB08DA4DCE5C4BF7BCC53EF9_gshared)(__this, method);
}
// System.Void Coffee.UIParticleExtensions.MeshHelper::set_activeMeshIndices(System.Collections.Generic.List`1<System.Boolean>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeshHelper_set_activeMeshIndices_m6A2C685F625B13E92EBFC3336627A7592A3403D2_inline (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Coffee.UIParticleExtensions.CombineInstanceEx>::.ctor(System.Int32)
inline void List_1__ctor_m591231B7598A4DDA3EB1ED69AB7B839E59DB7F1C (List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.Void Coffee.UIParticleExtensions.CombineInstanceEx::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineInstanceEx__ctor_mB0BAA3DA9EF0ECEC635C7F1FBA73F60EBC3F86A8 (CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Coffee.UIParticleExtensions.CombineInstanceEx>::Add(!0)
inline void List_1_Add_m94A297AF43A89F187AA7F2F7F2544999DFCDC4D1 (List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A * __this, CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A *, CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<Coffee.UIParticleExtensions.CombineInstanceEx>::get_Count()
inline int32_t List_1_get_Count_m4771A5EE25C154DEA876C4AF3D454F275922A771_inline (List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Mesh::get_vertexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_vertexCount_m1EF3DD16EE298B955311F53EA1CAF05007A7722F (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void Coffee.UIParticleExtensions.MeshHelper::DiscardTemporaryMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshHelper_DiscardTemporaryMesh_m21B64454950E1DC3D5E3A4E072C64436DD510274 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh0, const RuntimeMethod* method);
// Coffee.UIParticleExtensions.CombineInstanceEx Coffee.UIParticleExtensions.MeshHelper::Get(System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * MeshHelper_Get_mCF90C8A9C906BFFA841C8824E004B98D58411436 (int32_t ___index0, int64_t ___hash1, const RuntimeMethod* method);
// System.Void Coffee.UIParticleExtensions.CombineInstanceEx::Push(UnityEngine.Mesh,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineInstanceEx_Push_m2ADEAD8360533A3EC187DB74F6A7356EB7996505 (CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___transform1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Boolean> Coffee.UIParticleExtensions.MeshHelper::get_activeMeshIndices()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * MeshHelper_get_activeMeshIndices_m6E866395890B87CD4AC987657DA66509592FB225_inline (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Boolean>::set_Item(System.Int32,!0)
inline void List_1_set_Item_m208C043761C61621F0BA9E59EDB2E88C94E0AA51 (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * __this, int32_t ___index0, bool ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 *, int32_t, bool, const RuntimeMethod*))List_1_set_Item_m208C043761C61621F0BA9E59EDB2E88C94E0AA51_gshared)(__this, ___index0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<System.Boolean>::Clear()
inline void List_1_Clear_m099848ADBF5C4E55AF58C6CD892989DABB39C77E (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 *, const RuntimeMethod*))List_1_Clear_m099848ADBF5C4E55AF58C6CD892989DABB39C77E_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Coffee.UIParticleExtensions.CombineInstanceEx>::GetEnumerator()
inline Enumerator_t250018180E53D2193DBE84E32FBEF13F3EAE159C  List_1_GetEnumerator_mE2CC0234A84FD3EFAFCA830CB61D4953E8718E7C (List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t250018180E53D2193DBE84E32FBEF13F3EAE159C  (*) (List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Coffee.UIParticleExtensions.CombineInstanceEx>::get_Current()
inline CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * Enumerator_get_Current_m2B293FE9ED2E11EFBA638DC3B4B5AB211F85C41E_inline (Enumerator_t250018180E53D2193DBE84E32FBEF13F3EAE159C * __this, const RuntimeMethod* method)
{
	return ((  CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * (*) (Enumerator_t250018180E53D2193DBE84E32FBEF13F3EAE159C *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void Coffee.UIParticleExtensions.CombineInstanceEx::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineInstanceEx_Clear_m750F47BDB31141810646C7BCA5E39B28DF878D37 (CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Coffee.UIParticleExtensions.CombineInstanceEx>::MoveNext()
inline bool Enumerator_MoveNext_m9C4955A7BB9E2779D07D1025464DB59B8EDFE23E (Enumerator_t250018180E53D2193DBE84E32FBEF13F3EAE159C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t250018180E53D2193DBE84E32FBEF13F3EAE159C *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Coffee.UIParticleExtensions.CombineInstanceEx>::Dispose()
inline void Enumerator_Dispose_m2D9B2AE14EAA49B9CD53037426644D4BA1A5FD35 (Enumerator_t250018180E53D2193DBE84E32FBEF13F3EAE159C * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t250018180E53D2193DBE84E32FBEF13F3EAE159C *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void Coffee.UIParticleExtensions.CombineInstanceEx::Combine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineInstanceEx_Combine_m081513E02EC4774345327357861F0F5FA98BF79C (CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * __this, const RuntimeMethod* method);
// UnityEngine.CombineInstance[] Coffee.UIParticleExtensions.CombineInstanceArrayPool::Get(System.Collections.Generic.List`1<Coffee.UIParticleExtensions.CombineInstanceEx>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* CombineInstanceArrayPool_Get_m526CC4E5AF012BC876558348D72F6C450C405008 (List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A * ___src0, int32_t ___count1, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::RecalculateBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateBounds_mC39556595CFE3E4D8EFA777476ECD22B97FC2737 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<UnityEngine.Mesh>::.ctor(System.Int32)
inline void Stack_1__ctor_m242356D2EDC78CAD2B67D5AB9995E7F173A8DE3D (Stack_1_t9B0A1D93361238182708268525DABDC931439A17 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t9B0A1D93361238182708268525DABDC931439A17 *, int32_t, const RuntimeMethod*))Stack_1__ctor_mAE1FB95F74EC6E95E880BF1B3E7CC57000321DA4_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor()
inline void HashSet_1__ctor_m9B21BAAD4C19CA98ED32C01B726F2582CBA60B77 (HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 *, const RuntimeMethod*))HashSet_1__ctor_m9B21BAAD4C19CA98ED32C01B726F2582CBA60B77_gshared)(__this, method);
}
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::MarkDynamic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_MarkDynamic_m11FFDC281C64F11C36EDDA47BC132EAC95082999 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<UnityEngine.Mesh>::Push(!0)
inline void Stack_1_Push_m1CBA5E24B493ACFFF6467F328233B7278FC58C42 (Stack_1_t9B0A1D93361238182708268525DABDC931439A17 * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t9B0A1D93361238182708268525DABDC931439A17 *, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *, const RuntimeMethod*))Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_gshared)(__this, ___item0, method);
}
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Add(!0)
inline bool HashSet_1_Add_mBA8BA1E2EE63D6BFF50F9483EC5F281CF2F45920 (HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 *, int32_t, const RuntimeMethod*))HashSet_1_Add_mBA8BA1E2EE63D6BFF50F9483EC5F281CF2F45920_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.Stack`1<UnityEngine.Mesh>::Pop()
inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * Stack_1_Pop_m2D7A13FCFD0DC5B184536CBC69B67A1BE7640DA9 (Stack_1_t9B0A1D93361238182708268525DABDC931439A17 * __this, const RuntimeMethod* method)
{
	return ((  Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * (*) (Stack_1_t9B0A1D93361238182708268525DABDC931439A17 *, const RuntimeMethod*))Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Remove(!0)
inline bool HashSet_1_Remove_m166ED666B4C5E879ACED5F85C2FF6D10C9A52F74 (HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 *, int32_t, const RuntimeMethod*))HashSet_1_Remove_m166ED666B4C5E879ACED5F85C2FF6D10C9A52F74_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.Stack`1<UnityEngine.Mesh>::get_Count()
inline int32_t Stack_1_get_Count_m6A63DFAFC39156A894BD3CCE397821CC04CA836E_inline (Stack_1_t9B0A1D93361238182708268525DABDC931439A17 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t9B0A1D93361238182708268525DABDC931439A17 *, const RuntimeMethod*))Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Contains(!0)
inline bool HashSet_1_Contains_m90455A5864CF4193E243B3DF80D0366956FD48E8 (HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 *, int32_t, const RuntimeMethod*))HashSet_1_Contains_m90455A5864CF4193E243B3DF80D0366956FD48E8_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Mesh::Clear(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_Clear_mD35FF3850B83B635DA849033E25D0D718E34D92B (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, bool ___keepVertexLayout0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Coffee.UIParticleExtensions.ModifiedMaterial/MatEntry>::get_Item(System.Int32)
inline MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143 * List_1_get_Item_m176BBCF7B77DAAE4B11DB833081BF12EB14605D8_inline (List_1_t8EFCAFAE60F257CBDEA4CF1BEEFF376201A30B03 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143 * (*) (List_1_t8EFCAFAE60F257CBDEA4CF1BEEFF376201A30B03 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<Coffee.UIParticleExtensions.ModifiedMaterial/MatEntry>::get_Count()
inline int32_t List_1_get_Count_m1F09162EE29C285E04352BAA41B6DF15F2445862_inline (List_1_t8EFCAFAE60F257CBDEA4CF1BEEFF376201A30B03 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t8EFCAFAE60F257CBDEA4CF1BEEFF376201A30B03 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void Coffee.UIParticleExtensions.ModifiedMaterial/MatEntry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatEntry__ctor_m36A3B61203F0FEB8AAD0A20DF331D2E41F2EBC45 (MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material__ctor_mD0C3D9CFAFE0FB858D864092467387D7FA178245 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___source0, const RuntimeMethod* method);
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Material_set_mainTexture_m1F715422BE5C75B4A7AC951691F0DC16A8C294C5 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Coffee.UIParticleExtensions.ModifiedMaterial/MatEntry>::Add(!0)
inline void List_1_Add_m72E02E882488482876D83617E79085CF92557957 (List_1_t8EFCAFAE60F257CBDEA4CF1BEEFF376201A30B03 * __this, MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8EFCAFAE60F257CBDEA4CF1BEEFF376201A30B03 *, MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void Coffee.UIParticleExtensions.ModifiedMaterial::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModifiedMaterial_DestroyImmediate_m4821F141230826F641E81F97312687AA9DD84C57 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Coffee.UIParticleExtensions.ModifiedMaterial/MatEntry>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mA9639AE7F375EF7A7B504939A97139429A63AF80 (List_1_t8EFCAFAE60F257CBDEA4CF1BEEFF376201A30B03 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8EFCAFAE60F257CBDEA4CF1BEEFF376201A30B03 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// System.Boolean UnityEngine.Application::get_isEditor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921 (const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Coffee.UIParticleExtensions.ModifiedMaterial/MatEntry>::.ctor()
inline void List_1__ctor_m9547905C9B84B4FC18BBD1612EDD958836BD4420 (List_1_t8EFCAFAE60F257CBDEA4CF1BEEFF376201A30B03 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t8EFCAFAE60F257CBDEA4CF1BEEFF376201A30B03 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void Coffee.UIParticleExtensions.ParticleSystemExtensions/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mC35DF534F3069DC5232DB150FDC2AD6841D249EE (U3CU3Ec__DisplayClass0_0_t410A51546B9C637DD1CE839ED94804B7C5005A80 * __this, const RuntimeMethod* method);
// System.Void System.Comparison`1<UnityEngine.ParticleSystem>::.ctor(System.Object,System.IntPtr)
inline void Comparison_1__ctor_m0E65C2A306623C841A061C4330F69FF738D5341E (Comparison_1_tF57F49CF96CEC329DB3C15911D3B5B784133A008 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Comparison_1_tF57F49CF96CEC329DB3C15911D3B5B784133A008 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Comparison_1__ctor_mDE1798563694D30022D3B7E1010347C573690B4A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Sort(System.Comparison`1<!0>)
inline void List_1_Sort_m7E0AFBB3DA1676E64DB175B3E45A37525022133D (List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * __this, Comparison_1_tF57F49CF96CEC329DB3C15911D3B5B784133A008 * ___comparison0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 *, Comparison_1_tF57F49CF96CEC329DB3C15911D3B5B784133A008 *, const RuntimeMethod*))List_1_Sort_m5EB3F127CD42F1ACA97F4DB8754C49F23B64D750_gshared)(__this, ___comparison0, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.ParticleSystemRenderer>()
inline ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * Component_GetComponent_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m433D0F036D744378DDD67C566DDC69B19052E933 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Material UnityEngine.Renderer::get_sharedMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.ParticleSystemRenderer::get_trailMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * ParticleSystemRenderer_get_trailMaterial_mB7C8AE9C0D9B9A2092E2FCF55AA6CFE3B0B3A400 (ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * __this, const RuntimeMethod* method);
// UnityEngine.Texture2D Coffee.UIParticleExtensions.ParticleSystemExtensions::GetTextureForSprite(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ParticleSystemExtensions_GetTextureForSprite_m2995FEB5A3A46D54AADB90DA1F3029BA34A160A7 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___self0, const RuntimeMethod* method);
// UnityEngine.ParticleSystem/TextureSheetAnimationModule UnityEngine.ParticleSystem::get_textureSheetAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2  ParticleSystem_get_textureSheetAnimation_mE7D4FF28B018DD7BB94904CE014F5FD56E53AA90 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TextureSheetAnimationModule_get_enabled_mBE8A1D92B11C7F586D02915FC5E6D611BD310C26 (TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 * __this, const RuntimeMethod* method);
// UnityEngine.ParticleSystemAnimationMode UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_mode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_mode_m677809FD153831D57EE0FAA1EA1F3750BBB04C7F (TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 * __this, const RuntimeMethod* method);
// UnityEngine.Sprite UnityEngine.ParticleSystem/TextureSheetAnimationModule::GetSprite(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * TextureSheetAnimationModule_GetSprite_m606BC775E648FC22D94213162C6F2001B3664231 (TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.Texture2D Coffee.UIParticleExtensions.SpriteExtensions::GetActualTexture(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * SpriteExtensions_GetActualTexture_mD864F923F3852033B7CE98519E8191C567A15CFE (Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___self0, const RuntimeMethod* method);
// System.Int32 UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_spriteCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_spriteCount_mC5586E837EBF7E3363F20ED58F910A48E87A25EB (TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 * __this, const RuntimeMethod* method);
// System.Void System.Predicate`1<UnityEngine.ParticleSystem>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mC62A94144C701E9EC5A659E5DE76CF29A717AD83 (Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3F41E32C976C3C48B3FC63FBFD3FBBC5B5F23EDD_gshared)(__this, ___object0, ___method1, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::RemoveAll(System.Predicate`1<!0>)
inline int32_t List_1_RemoveAll_m975FA01DA7977F9E40CACA1B48B4816EBF9754E2 (List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * __this, Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C * ___match0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 *, Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C *, const RuntimeMethod*))List_1_RemoveAll_m3CA48D06F70CC498ADA7410EB930969256F43675_gshared)(__this, ___match0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::ForEach(System.Action`1<!0>)
inline void List_1_ForEach_m0325E291BDDB04FD83E58B7DD06E3FDC6555AFC3 (List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * __this, Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * ___action0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 *, Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B *, const RuntimeMethod*))List_1_ForEach_m1C08725A39127C32D56B9E8A36D813F08D3BFF4D_gshared)(__this, ___action0, method);
}
// UnityEngine.Texture2D UnityEngine.Sprite::get_texture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * Sprite_get_texture_mD03E68058C9F727321FE643CBDB3A469F96E49FB (Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.DrivenRectTransformTracker::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrivenRectTransformTracker_Clear_m41F9B0AA2025AF5B76D38E68B08C111D7D8EB845 (DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_isActiveAndEnabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_isActiveAndEnabled_mDD843C0271D492C1E08E0F8DEE8B6F1CFA951BFA (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// UnityEngine.RectTransform UnityEngine.UI.Graphic::get_rectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.DrivenRectTransformTracker::Add(UnityEngine.Object,UnityEngine.RectTransform,UnityEngine.DrivenTransformProperties)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrivenRectTransformTracker_Add_m65814604ABCE8B9F81270F3C2E1632CCB9E9A5E7 (DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * __this, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___driver0, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___rectTransform1, int32_t ___drivenProperties2, const RuntimeMethod* method);
// System.Void Coffee.UIExtensions.UIParticle::RefreshParticles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_RefreshParticles_mBC1B3BFDCA0180591ED0AE73C030C4C1BF7D11DD (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___lhs0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rhs1, const RuntimeMethod* method);
// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::get_canvasRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * Graphic_get_canvasRenderer_m33EC3A53310593E87C540654486C7A73A66FCF4A (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * __this, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.CanvasRenderer::GetMaterial(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * CanvasRenderer_GetMaterial_mA674C9DC47C63CCFCDED7382D923A7796C8BE308 (CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Boolean Coffee.UIParticleExtensions.ListExtensions::SequenceEqualFast(System.Collections.Generic.List`1<System.Boolean>,System.Collections.Generic.List`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListExtensions_SequenceEqualFast_m671F15B87407B6356BFB72C9E9C04A61C8ADCFFE (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * ___self0, List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Boolean>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m3547993FB352517F6F60B5848050BACDF2888876 (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m3547993FB352517F6F60B5848050BACDF2888876_gshared)(__this, ___collection0, method);
}
// System.Collections.Generic.List`1<UnityEngine.ParticleSystem> Coffee.UIExtensions.UIParticle::get_particles()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * UIParticle_get_particles_m248BEC4C388F11152591A68AC7B94ECD8622AC0F_inline (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.ParticleSystem>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m11A8909AF17DB54C2399B548B37E3DB0C5CAC25B (Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void Coffee.UIParticleExtensions.ParticleSystemExtensions::Exec(System.Collections.Generic.List`1<UnityEngine.ParticleSystem>,System.Action`1<UnityEngine.ParticleSystem>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystemExtensions_Exec_mCCB132CCB2A89AFF806CC812A35C7A9577B3E56D (List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * ___self0, Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * ___action1, const RuntimeMethod* method);
// System.Void Coffee.UIExtensions.UIParticle::SetParticleSystemInstance(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_SetParticleSystemInstance_mB22CC88FA27F7EF1C2577F6A6293C63CAC6E5B3F (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___instance0, bool ___destroyOldParticles1, const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___parent0, bool ___worldPositionStays1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void Coffee.UIExtensions.UIParticle::RefreshParticles(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_RefreshParticles_m3499C7B47CFF340A13F711AE77A121FC9AB624E8 (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___root0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// System.Void UnityEngine.GameObject::GetComponentsInChildren<UnityEngine.ParticleSystem>(System.Collections.Generic.List`1<!!0>)
inline void GameObject_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_mAAB09D18EF9CE309F3324D68B1A82274FCAEF6D3 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * ___results0, const RuntimeMethod* method)
{
	((  void (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 *, const RuntimeMethod*))GameObject_GetComponentsInChildren_TisRuntimeObject_m0F6B7256CFDE29B99F52869B4EA0DC4505437C58_gshared)(__this, ___results0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::GetEnumerator()
inline Enumerator_t98A8303225347C32B273C93CEAB5C421F46D6756  List_1_GetEnumerator_m0E52F4D4795DF4986F3EF9D506B57651DA5AAEDD (List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t98A8303225347C32B273C93CEAB5C421F46D6756  (*) (List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.ParticleSystem>::get_Current()
inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * Enumerator_get_Current_m3BDED7BDE61A99820C96FB446198B850B4CCF068_inline (Enumerator_t98A8303225347C32B273C93CEAB5C421F46D6756 * __this, const RuntimeMethod* method)
{
	return ((  ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * (*) (Enumerator_t98A8303225347C32B273C93CEAB5C421F46D6756 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// UnityEngine.Rendering.UVChannelFlags UnityEngine.ParticleSystem/TextureSheetAnimationModule::get_uvChannelMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TextureSheetAnimationModule_get_uvChannelMask_mE16F59DB6035B9B2AD11440F3FB2E1AE3265A59D (TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/TextureSheetAnimationModule::set_uvChannelMask(UnityEngine.Rendering.UVChannelFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TextureSheetAnimationModule_set_uvChannelMask_mF18E3A9BE6A049C4C81D39F9B5FC8A6755787247 (TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.ParticleSystem>::MoveNext()
inline bool Enumerator_MoveNext_m8853CA3A6E508B9E310384EC2339E680BD0AE125 (Enumerator_t98A8303225347C32B273C93CEAB5C421F46D6756 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t98A8303225347C32B273C93CEAB5C421F46D6756 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.ParticleSystem>::Dispose()
inline void Enumerator_Dispose_mBF6A108518D945770396C6AD62AA4206F03ACED3 (Enumerator_t98A8303225347C32B273C93CEAB5C421F46D6756 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t98A8303225347C32B273C93CEAB5C421F46D6756 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void Coffee.UIParticleExtensions.ParticleSystemExtensions::SortForRendering(System.Collections.Generic.List`1<UnityEngine.ParticleSystem>,UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystemExtensions_SortForRendering_m816138288A23F920DFA67E6CF327D97D775C84BF (List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * ___self0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform1, bool ___sortByMaterial2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_mA7CC85A1456655584AA666037C9EE401745CA8DF (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared)(__this, ___collection0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Clear()
inline void List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.UI.MaskUtilities::FindRootSortOverrideCanvas(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * MaskUtilities_FindRootSortOverrideCanvas_m4760B83EDA0BF632346FDE90302AB43EAC0524E0 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___start0, const RuntimeMethod* method);
// System.Boolean UnityEngine.UI.MaskableGraphic::get_maskable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MaskableGraphic_get_maskable_mAB089F676929CD6D1CA9FC204EE04A10EF86B6E8_inline (MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.UI.MaskUtilities::GetStencilDepth(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MaskUtilities_GetStencilDepth_m102B187BAF39A903EA0BEC302B9DFC2993BC1E30 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___stopAfter1, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.Boolean> Coffee.UIExtensions.UIParticle::get_activeMeshIndices()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * UIParticle_get_activeMeshIndices_m423987C46CE4EC5176502A0BF43439C08B44E8FF_inline (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method);
// System.Int32 Coffee.UIParticleExtensions.ListExtensions::CountFast(System.Collections.Generic.List`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ListExtensions_CountFast_mB56B0BE6BCAC5AE99E6E829D67E89054C308EFC7 (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * ___self0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::get_Count()
inline int32_t List_1_get_Count_m717EDAB95A84624B81D546CBEDC84B4664B7B678_inline (List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void UnityEngine.CanvasRenderer::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasRenderer_Clear_m8793B46F28365E540BB2B2ADBA439D255E350CC4 (CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * __this, const RuntimeMethod* method);
// System.Void Coffee.UIExtensions.UIParticle::ClearPreviousMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_ClearPreviousMaterials_m07B5E24ACBE55CEC116E97C495FDA000FB007E11 (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponents_m0268D42CD0215CD9247CF74AA881BAACE10357FC (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, Type_t * ___type0, List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * ___results1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519 (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.CanvasRenderer::set_materialCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasRenderer_set_materialCount_m00FE6113ACA7FE9AD51DA0A9A0B013D7C811E5DB (CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * __this, int32_t ___value0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::get_Item(System.Int32)
inline ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_inline (List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * (*) (List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void UnityEngine.Renderer::GetSharedMaterials(System.Collections.Generic.List`1<UnityEngine.Material>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_GetSharedMaterials_mC59AC759DA507513FA4C81F417AD23EF4BFAAC92 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * ___m0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Material>::get_Count()
inline int32_t List_1_get_Count_m2D5331F0E51DEDFD0BC68D4AE665FD93010CA0BC_inline (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<UnityEngine.Material>::get_Item(System.Int32)
inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * List_1_get_Item_m13B9C8BE116476A73890AFB00F5596C13FC3FFAF_inline (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Material_t8927C00353A72755313F046D0CE85178AE8218EE * (*) (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Material Coffee.UIExtensions.UIParticle::GetModifiedMaterial(UnityEngine.Material,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * UIParticle_GetModifiedMaterial_mB47045F1F91D55A1726442D5E517D4EBAADCD30A (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___baseMaterial0, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.Component>::get_Item(System.Int32)
inline Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * List_1_get_Item_m99F4A60865784DCE41B4ECAEBD910543BBB87A1F_inline (List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * (*) (List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Component>::get_Count()
inline int32_t List_1_get_Count_m9F55C8ADF8B0877FF8961B5A9BA55A9A7BFF904E_inline (List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void UnityEngine.CanvasRenderer::SetMaterial(UnityEngine.Material,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasRenderer_SetMaterial_m1D7A8BD75D5DEFC5F0A27FFBA2A2A84755EE421F (CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material0, int32_t ___index1, const RuntimeMethod* method);
// System.Void Coffee.UIExtensions.UIParticle::UpdateMaterialProperties(UnityEngine.Renderer,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_UpdateMaterialProperties_m08FC37AEC07DE379D715496994CAC154E346ADAE (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___r0, int32_t ___index1, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.Material>::GetEnumerator()
inline Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83  List_1_GetEnumerator_m01E37193361B61CC3FF93E932ECCBB8FF556044C (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83  (*) (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.Material>::get_Current()
inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * Enumerator_get_Current_m0F57CB6207605CE09FE2619C57FECF7C5BEF3A0F_inline (Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83 * __this, const RuntimeMethod* method)
{
	return ((  Material_t8927C00353A72755313F046D0CE85178AE8218EE * (*) (Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Void UnityEngine.UI.StencilMaterial::Remove(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StencilMaterial_Remove_m8C971D3D0DDDD92710C011FD7B630E6C853B744D (Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___customMat0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.Material>::MoveNext()
inline bool Enumerator_MoveNext_mBDF9C2CE29A407750480474BA191248286A4CDD4 (Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.Material>::Dispose()
inline void Enumerator_Dispose_mB381E883DF3917B1939FCC6ACAFB0D2F261E84DC (Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void Coffee.UIParticleExtensions.ModifiedMaterial::Remove(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModifiedMaterial_Remove_mC5A4773C7C17AFFCD0567F3BEB88C46C26A47E6D (Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___customMat0, const RuntimeMethod* method);
// UnityEngine.Material UnityEngine.UI.StencilMaterial::Add(UnityEngine.Material,System.Int32,UnityEngine.Rendering.StencilOp,UnityEngine.Rendering.CompareFunction,UnityEngine.Rendering.ColorWriteMask,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * StencilMaterial_Add_m096013C81D92CB4B37053C97B427A64EDFA61F25 (Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___baseMat0, int32_t ___stencilID1, int32_t ___operation2, int32_t ___compareFunction3, int32_t ___colorWriteMask4, int32_t ___readMask5, int32_t ___writeMask6, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::Add(!0)
inline void List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10 (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *, Material_t8927C00353A72755313F046D0CE85178AE8218EE *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// UnityEngine.Material Coffee.UIParticleExtensions.ModifiedMaterial::Add(UnityEngine.Material,UnityEngine.Texture,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * ModifiedMaterial_Add_mF7D0D18F25ED663C544D586D4A172D437F82843C (Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___baseMat0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___texture1, int32_t ___id2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.Int32 UnityEngine.CanvasRenderer::get_materialCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CanvasRenderer_get_materialCount_mF29C9816FEC6D8189DDC7AB16B40EC56FAB59488 (CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock__ctor_m8EB29E415C68427B841A0C68A902A8368B9228E8 (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Renderer::GetPropertyBlock(UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_GetPropertyBlock_mE73E51E42ED4F800C6422F5461A4D9E1DB61AEDC (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___properties0, const RuntimeMethod* method);
// System.Boolean UnityEngine.MaterialPropertyBlock::get_isEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MaterialPropertyBlock_get_isEmpty_mAAFA06394C15E68FD9749DD2B94E5ACFBC1FDED4 (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * __this, const RuntimeMethod* method);
// System.Void Coffee.UIExtensions.AnimatableProperty::UpdateMaterialProperties(UnityEngine.Material,UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatableProperty_UpdateMaterialProperties_m7F9408DC439BB312C6AB1466B78AAFF452C54AD5 (AnimatableProperty_t1C4E28F37643462525F81B462CF1EC460DD18814 * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material0, MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___mpb1, const RuntimeMethod* method);
// System.Void UnityEngine.MaterialPropertyBlock::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaterialPropertyBlock_Clear_mAB598168AB3F657597804EE57D62E67443794813 (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * __this, const RuntimeMethod* method);
// System.Void Coffee.UIExtensions.UIParticleUpdater::Register(Coffee.UIExtensions.UIParticle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleUpdater_Register_mE403F54BF9DF35AF9AB1FB73B3EEB370E8AAF446 (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * ___particle0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.MaskableGraphic::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaskableGraphic_OnEnable_m61F2B68A4560CAB2A40C3C6F6AF74C3C10D80AE8 (MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE * __this, const RuntimeMethod* method);
// System.Void Coffee.UIExtensions.UIParticle::InitializeIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_InitializeIfNeeded_m76437723BB0D0884B283F51A6341CD635DAFA1B0 (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method);
// System.Void Coffee.UIExtensions.UIParticle/<Start>d__64::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__64__ctor_m7E27FAF472B8D8EB2B2A8F4C3259C287EE98355C (U3CStartU3Ed__64_t7BB41721AF1EF379EB6185056ADF644F90A4B065 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Coffee.UIExtensions.UIParticleUpdater::Unregister(Coffee.UIExtensions.UIParticle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleUpdater_Unregister_mF0CB511DAF293A8C6373702E281F033439037B4C (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * ___particle0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.MaskableGraphic::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaskableGraphic_OnDisable_m85189B68E2DBE5ECCFBC9B2A1385F38050FE2686 (MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarningFormat(UnityEngine.Object,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarningFormat_m2DED8BDFB26AFA883EEDD701573B30B093270CA7 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___context0, String_t* ___format1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, const RuntimeMethod* method);
// System.Boolean Coffee.UIParticleExtensions.ListExtensions::AnyFast<UnityEngine.ParticleSystem>(System.Collections.Generic.List`1<T>)
inline bool ListExtensions_AnyFast_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_mA832995BC042C5CEF3C4D2E9DB38E21FCB25D40A (List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * ___self0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 *, const RuntimeMethod*))ListExtensions_AnyFast_TisRuntimeObject_m49B03D39E750D230E1C3EA26440BEA0F71D717DF_gshared)(___self0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::.ctor()
inline void List_1__ctor_m990003915EFF426412433A7AA54BAABDBB68C0EE (List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::.ctor()
inline void List_1__ctor_m497DA7006D664307F20A0546E5B717AA4B5E8A86 (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.UI.MaskableGraphic::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaskableGraphic__ctor_m89126DB114322D1D18F67BA3B8D0695FF1371A4D (MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Material>::.ctor(System.Int32)
inline void List_1__ctor_m779B55F6DAABBA10D912F806FA7817324335501B (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.Component>::.ctor()
inline void List_1__ctor_m9F48966694ED21085AFB16EED54F1186D4B9D39C (List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponentInParent<Coffee.UIExtensions.UIParticle>()
inline UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * Component_GetComponentInParent_TisUIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_mC9B08D8738AEB9AA87E6C2C2A171A631C7C58AB2 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_mADA186D1675BEA6779C469918206294354385EC3_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticle>::Add(!0)
inline void List_1_Add_mE885F528560A99DD40033971E510608ED1D02418 (List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF * __this, UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF *, UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticle>::Remove(!0)
inline bool List_1_Remove_m0C079BFFAB901970D0252B5C7676F67958B311AF (List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF * __this, UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF *, UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Void Coffee.UIParticleExtensions.MeshHelper::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshHelper_Init_m9D0B0F506ADF9E5FFD9C9A150F14A11C8F0C89F0 (const RuntimeMethod* method);
// System.Void Coffee.UIParticleExtensions.MeshPool::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshPool_Init_mF660DF2AC3199488B36538CC265AFDD648F39BAF (const RuntimeMethod* method);
// System.Void Coffee.UIParticleExtensions.CombineInstanceArrayPool::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineInstanceArrayPool_Init_m7F0D754479ED6BCB313E73240A7A310EE446828E (const RuntimeMethod* method);
// System.Void UnityEngine.Canvas/WillRenderCanvases::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WillRenderCanvases__ctor_m8A46E9A5DED6B54DC2A8A3137AE3637081EADFB6 (WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Canvas::remove_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_remove_willRenderCanvases_m4A631D84D6DBB6035620ED9496542E43F19D0EF9 (WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Canvas::add_willRenderCanvases(UnityEngine.Canvas/WillRenderCanvases)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Canvas_add_willRenderCanvases_m00E391FCCE9839EEB6D7A729DCBF6B841FDF02B7 (WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Time::get_frameCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0 (const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticle>::get_Item(System.Int32)
inline UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * List_1_get_Item_mF4824FE05AB99D77D5181B66EFB09DFC0E8C6768_inline (List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * (*) (List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Void Coffee.UIExtensions.UIParticleUpdater::Refresh(Coffee.UIExtensions.UIParticle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleUpdater_Refresh_m1906B8C7F9DFDB619FC9D38C4CC939BB2917394B (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * ___particle0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA (Exception_t * ___exception0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticle>::get_Count()
inline int32_t List_1_get_Count_mB1CDDFA55D0D9F185610C10267D0832FD89C53B6_inline (List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// UnityEngine.Mesh Coffee.UIExtensions.UIParticle::get_bakedMesh()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * UIParticle_get_bakedMesh_m8ECD19D62E8B19E41FD8F1BAB590154190A3AE7E_inline (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method);
// UnityEngine.Canvas UnityEngine.UI.Graphic::get_canvas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * Graphic_get_canvas_mDB17EC66AF3FD40E8D368FC11C8F07319BB9D1B0 (Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * __this, const RuntimeMethod* method);
// System.Void Coffee.UIExtensions.UIParticleUpdater::ModifyScale(Coffee.UIExtensions.UIParticle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleUpdater_ModifyScale_mD93E250C3A55898858DD883517F84C24CBC83AC0 (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * ___particle0, const RuntimeMethod* method);
// System.Void Coffee.UIExtensions.UIParticleUpdater::BakeMesh(Coffee.UIExtensions.UIParticle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleUpdater_BakeMesh_m02D5B965341991766B4F9CF70E04ADB433B71762 (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * ___particle0, const RuntimeMethod* method);
// System.Void UnityEngine.CanvasRenderer::SetMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasRenderer_SetMesh_mB506682F318E5D8D8FE3888BF50E40DC34B726DF (CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh0, const RuntimeMethod* method);
// System.Void Coffee.UIExtensions.UIParticle::UpdateMaterialProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_UpdateMaterialProperties_m3E45E7D56DA32D4C93078F08ABE3D5F46390EECC (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method);
// System.Boolean Coffee.UIExtensions.UIParticle::get_ignoreCanvasScaler()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UIParticle_get_ignoreCanvasScaler_mDD8AA041E85CB24E0AE7F2F161CFDF4C5718E2B2_inline (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Mathf::Approximately(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55 (float ___a0, float ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.ParticleSystem/MainModule UnityEngine.ParticleSystem::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  ParticleSystem_get_main_m8F17DCC63679B15CE548BE83332FDB6635AE74A0 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// UnityEngine.ParticleSystemSimulationSpace UnityEngine.ParticleSystem/MainModule::get_simulationSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MainModule_get_simulationSpace_mD08447602DF2E2AC9790D900A1BD04AB8D4FD0A2 (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.ParticleSystem/MainModule::get_customSimulationSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * MainModule_get_customSimulationSpace_m252596FE004ABB9EB82C9CC987AC2DE4B2562F00 (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Rotate(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_Rotate_m783F8A008EC7D0C3C02A5718002491F017F21E0E (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___q0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::get_inverse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_get_inverse_mFA34ECC790B269522F60FC32370D628DAFCAE225 (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Scale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_Scale_m62CFAE1F96495BD3F39D6FB21385C04B9ACC50ED (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::op_Multiply(UnityEngine.Matrix4x4,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F (Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___lhs0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Transform_get_worldToLocalMatrix_mE22FDE24767E1DE402D3E7A1C9803379B2E8399D (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  Matrix4x4_Translate_m48688727FA7BBA42DF2108C1A9395FC23431AC9A (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___vector0, const RuntimeMethod* method);
// System.Void Coffee.UIParticleExtensions.MeshHelper::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshHelper_Clear_mBD6823C35D072FBF6D61B7CE4AF5D2DEAC6B6912 (const RuntimeMethod* method);
// UnityEngine.Camera Coffee.UIParticleExtensions.BakingCamera::GetCamera(UnityEngine.Canvas)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * BakingCamera_GetCamera_m071EF68B224E11DEA0E5291A689D39EC14092E84 (Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___canvas0, const RuntimeMethod* method);
// UnityEngine.Vector3 Coffee.UIExtensions.UIParticle::get_scale3D()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  UIParticle_get_scale3D_mA6A3841E1A258F1150D9CB64FB08B8CDF5C99EED_inline (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Scale(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Scale_m8805EE8D2586DE7B6143FA35819B3D5CF1981FB3_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 Coffee.UIExtensions.UIParticle::get_cachedPosition()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  UIParticle_get_cachedPosition_mFF26D3060E2F13A056FB640EDDD7E33BDE6EE0BC_inline (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method);
// System.Void Coffee.UIExtensions.UIParticle::set_cachedPosition(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UIParticle_set_cachedPosition_mEDA61F1A70EF8A9CE6966CCA0126E8C47ED34FE6_inline (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Boolean>::Add(!0)
inline void List_1_Add_m36874AE3230618C5996C030D9BE84120CA0F9735 (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * __this, bool ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 *, bool, const RuntimeMethod*))List_1_Add_m36874AE3230618C5996C030D9BE84120CA0F9735_gshared)(__this, ___item0, method);
}
// System.Boolean UnityEngine.ParticleSystem::IsAlive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParticleSystem_IsAlive_m59D28AC79A1A5FD1D97523D83D687ACFA2510198 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.ParticleSystem::get_particleCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticleSystem_get_particleCount_mAD1793317BD6BBCB0C7A7853A9E82D19703B0A52 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 Coffee.UIExtensions.UIParticleUpdater::GetScaledMatrix(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  UIParticleUpdater_GetScaledMatrix_mC9E956691A3CBBB07FF3387FF6B682A4BF8A56C9 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___particle0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::NextPowerOfTwo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_NextPowerOfTwo_m89DB0674631948FE00FD5660B18D9E62CE85CAF5 (int32_t ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.ParticleSystem::GetParticles(UnityEngine.ParticleSystem/Particle[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticleSystem_GetParticles_mAE8894E2B022EE009C6DDB1390AB331E7D40A344 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C* ___particles0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.ParticleSystem/Particle::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Particle_get_position_m73D35C09484E06CC11E1E96CE61C5BBDBE654C8E (Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem/Particle::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Particle_set_position_mB749E41CD3C4C6DF501C0D68B6211CF7E2217FC2 (Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::SetParticles(UnityEngine.ParticleSystem/Particle[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_SetParticles_m0658B777D1C6DDA7D244607AC55D5225774CEBFA (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C* ___particles0, int32_t ___size1, const RuntimeMethod* method);
// System.Single UnityEngine.CanvasRenderer::GetInheritedAlpha()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CanvasRenderer_GetInheritedAlpha_m41BBA6DD00E33E791232B5BC2A6EDB7CB7BD6496 (CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * __this, const RuntimeMethod* method);
// System.Boolean Coffee.UIExtensions.UIParticleUpdater::CanBakeMesh(UnityEngine.ParticleSystemRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIParticleUpdater_CanBakeMesh_m1649175541F2480D8DBF150CF98E1C75B4A9B5FC (ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * ___renderer0, const RuntimeMethod* method);
// System.Int64 Coffee.UIParticleExtensions.ParticleSystemExtensions::GetMaterialHash(UnityEngine.ParticleSystem,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ParticleSystemExtensions_GetMaterialHash_m3945DF66D4DE99C62ED508CBD66B4FCDC9866D4D (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___self0, bool ___trail1, const RuntimeMethod* method);
// UnityEngine.Mesh Coffee.UIParticleExtensions.MeshHelper::GetTemporaryMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * MeshHelper_GetTemporaryMesh_mF6A8895295BCCE34BC5A15B21810967A14DFDE5C (const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystemRenderer::BakeMesh(UnityEngine.Mesh,UnityEngine.Camera,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystemRenderer_BakeMesh_m1A53F569D7DFCBE964E66D5E3ACA11D85ED56C9E (ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh0, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera1, bool ___useTransform2, const RuntimeMethod* method);
// System.Void Coffee.UIParticleExtensions.MeshHelper::Push(System.Int32,System.Int64,UnityEngine.Mesh,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshHelper_Push_m796C5719F64A3A27C5C5BF8F146A307A91C60C76 (int32_t ___index0, int64_t ___hash1, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh2, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___transform3, const RuntimeMethod* method);
// UnityEngine.ParticleSystem/TrailModule UnityEngine.ParticleSystem::get_trails()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8  ParticleSystem_get_trails_m9514134A5A05CCDEF2C901BC0D60FC287959414C (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.ParticleSystem/TrailModule::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrailModule_get_enabled_mC8F78FC387B7317940FBF057E3663D27E61FFC0E (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.ParticleSystem/TrailModule::get_worldSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrailModule_get_worldSpace_m3720B01F60BFFF13888FF12BDCBE8504D2737B8D (TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystemRenderer::BakeTrailsMesh(UnityEngine.Mesh,UnityEngine.Camera,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystemRenderer_BakeTrailsMesh_m7BE3F730731BBFA0C6A9399BF91813236AC14E3F (ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh0, Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * ___camera1, bool ___useTransform2, const RuntimeMethod* method);
// System.Void Coffee.UIExtensions.UIParticle::set_activeMeshIndices(System.Collections.Generic.List`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_set_activeMeshIndices_m7818D19F7F023BA051A1D1C9A06BBB598E4647FD (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * ___value0, const RuntimeMethod* method);
// System.Void Coffee.UIParticleExtensions.MeshHelper::CombineMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshHelper_CombineMesh_mD63A256D9888B45713B7E6FA7677163A30F46C59 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___result0, const RuntimeMethod* method);
// UnityEngine.ParticleSystemRenderMode UnityEngine.ParticleSystemRenderer::get_renderMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticleSystemRenderer_get_renderMode_mE203DEDF25DAA9E549CECD34F7552E8B39A81576 (ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * __this, const RuntimeMethod* method);
// UnityEngine.Mesh UnityEngine.ParticleSystemRenderer::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ParticleSystemRenderer_get_mesh_m32A036955DAEA0FDDA2D4B8EE3D5AEE7FD67A92F (ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Coffee.UIExtensions.UIParticle>::.ctor()
inline void List_1__ctor_m7D1A839C1BAE4BD9CCBD0203D0AF23A6C337B4F5 (List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void Coffee.UIParticleExtensions.ParticleSystemExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEDFDCEECADBF4B760EF79BF8F47C4EF0209C403E (U3CU3Ec_t7C65392AB7B89EB93CD97F4D2C256FF531662AFA * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Material::get_renderQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Material_get_renderQueue_m6057A6297BDA9EB2828AAD344D2C8CC82F81939C (Material_t8927C00353A72755313F046D0CE85178AE8218EE * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Renderer::get_sortingLayerID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Renderer_get_sortingLayerID_m668C1AA36751AF6655BAAD42BE7627E7950E48E8 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Renderer::get_sortingOrder()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Renderer_get_sortingOrder_m043173C955559C12E0A33BD7F7945DA12B755AE0 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// System.Single UnityEngine.ParticleSystemRenderer::get_sortingFudge()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ParticleSystemRenderer_get_sortingFudge_m2F9B4EFF4F196E685AECB9462D69B13E340C43EA (ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Sign(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB (float ___f0, const RuntimeMethod* method);
// System.Int32 Coffee.UIParticleExtensions.ParticleSystemExtensions::GetIndex(System.Collections.Generic.IList`1<UnityEngine.ParticleSystem>,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticleSystemExtensions_GetIndex_mE6E34A8F45D6833DB06D66CABE37194DC8911732 (RuntimeObject* ___list0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___ps1, const RuntimeMethod* method);
// System.Void Coffee.UIExtensions.UIParticle/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m74DF06DCBDEFF847631A9E912B62737FE3712049 (U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Pause_mA5AE4D5A290E9DD75A0572738CB0910D6A7E2121 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ParticleSystem::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Clear_mD8C9DCD1267F221B0546E4B9B55DBD9354893797 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Component::GetComponentsInChildren<UnityEngine.ParticleSystem>(System.Boolean,System.Collections.Generic.List`1<!!0>)
inline void Component_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m1BA90639BF94849A162DBBBE2D51C11C87280086 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, bool ___includeInactive0, List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * ___result1, const RuntimeMethod* method)
{
	((  void (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, bool, List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_mCFD9EE28706E43CCE81CF186BF0E5EED482B56D9_gshared)(__this, ___includeInactive0, ___result1, method);
}
// System.Boolean Coffee.UIParticleExtensions.ListExtensions::AnyFast<UnityEngine.ParticleSystem>(System.Collections.Generic.List`1<T>,System.Predicate`1<T>)
inline bool ListExtensions_AnyFast_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_mDC26D93BC277BF64AAC4801E25D8382523A97190 (List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * ___self0, Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C * ___predicate1, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 *, Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C *, const RuntimeMethod*))ListExtensions_AnyFast_TisRuntimeObject_mD6289F896645DA32BA1647F1D89E46B6F2D223C8_gshared)(___self0, ___predicate1, method);
}
// System.Boolean UnityEngine.ParticleSystem::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParticleSystem_get_isPlaying_m36FD03CBF99EE4C243B01F37D77CB6B1CFA526BA (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// UnityEngine.ParticleSystem/SubEmittersModule UnityEngine.ParticleSystem::get_subEmitters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SubEmittersModule_t0336A6F2B5D3339D93468AED015E2356FBE9E61C  ParticleSystem_get_subEmitters_mCFE3CAEF76ADEAF3754210EC731A54A9DA836428 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.ParticleSystem/SubEmittersModule::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SubEmittersModule_get_enabled_m02FBEA1699B26DD9C012746333F688F8D320D769 (SubEmittersModule_t0336A6F2B5D3339D93468AED015E2356FBE9E61C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.ParticleSystem/MainModule::get_prewarm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MainModule_get_prewarm_mED3F6C53F9474FE31E12566B192438C78E7B50D2 (MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.ParticleSystem>::Clear()
inline void List_1_Clear_m58DE04C3BBC03B16192027F9A20F6B2CDEBCE668 (List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void Coffee.UIExtensions.UIParticle::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_Stop_m0FC069ADB3AC983B6F9E4405959DDB42D468DAD4 (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method);
// System.Void Coffee.UIExtensions.UIParticle::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_Clear_m1D4CFD0A52983C95FE21C2D1BA4CA1D96C97A444 (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method);
// System.Void Coffee.UIExtensions.UIParticle::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_Play_m6F941796E6E1507CFE22E6D89E80A6FCAF67545F (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mAC86329F5E0AF56A4A1067AB4299C291221720AE_inline (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___lhs0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___rhs1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Int32 Coffee.UIExtensions.AnimatableProperty::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatableProperty_get_id_m4639FB09C0BF0DFD4327D1A081453AED3F3AF729 (AnimatableProperty_t1C4E28F37643462525F81B462CF1EC460DD18814 * __this, const RuntimeMethod* method)
{
	{
		// public int id { get; private set; }
		int32_t L_0 = __this->get_U3CidU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Coffee.UIExtensions.AnimatableProperty::set_id(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatableProperty_set_id_mDE27575E1BBEAFDE92E4D369D1400E906189BD29 (AnimatableProperty_t1C4E28F37643462525F81B462CF1EC460DD18814 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int id { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_2(L_0);
		return;
	}
}
// Coffee.UIExtensions.AnimatableProperty/ShaderPropertyType Coffee.UIExtensions.AnimatableProperty::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimatableProperty_get_type_mBDFF96FA1A951BAF898A0CE3209F8BA499634933 (AnimatableProperty_t1C4E28F37643462525F81B462CF1EC460DD18814 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Type; }
		int32_t L_0 = __this->get_m_Type_1();
		return L_0;
	}
}
// System.Void Coffee.UIExtensions.AnimatableProperty::UpdateMaterialProperties(UnityEngine.Material,UnityEngine.MaterialPropertyBlock)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatableProperty_UpdateMaterialProperties_m7F9408DC439BB312C6AB1466B78AAFF452C54AD5 (AnimatableProperty_t1C4E28F37643462525F81B462CF1EC460DD18814 * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___material0, MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * ___mpb1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * V_3 = NULL;
	int32_t V_4 = 0;
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// if (!material.HasProperty(id)) return;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = ___material0;
		int32_t L_1;
		L_1 = AnimatableProperty_get_id_m4639FB09C0BF0DFD4327D1A081453AED3F3AF729_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_2;
		L_2 = Material_HasProperty_m699B4D99152E3A99733B8BD7D41EAE08BB8B1657(L_0, L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_000f;
		}
	}
	{
		// if (!material.HasProperty(id)) return;
		return;
	}

IL_000f:
	{
		// switch (type)
		int32_t L_3;
		L_3 = AnimatableProperty_get_type_mBDFF96FA1A951BAF898A0CE3209F8BA499634933_inline(__this, /*hidden argument*/NULL);
		V_4 = L_3;
		int32_t L_4 = V_4;
		switch (L_4)
		{
			case 0:
			{
				goto IL_0033;
			}
			case 1:
			{
				goto IL_0063;
			}
			case 2:
			{
				goto IL_0090;
			}
			case 3:
			{
				goto IL_0090;
			}
			case 4:
			{
				goto IL_00b3;
			}
		}
	}
	{
		return;
	}

IL_0033:
	{
		// var color = mpb.GetColor(id);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_5 = ___mpb1;
		int32_t L_6;
		L_6 = AnimatableProperty_get_id_m4639FB09C0BF0DFD4327D1A081453AED3F3AF729_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7;
		L_7 = MaterialPropertyBlock_GetColor_m67F9B2721AF014398AA7AFD079CC435FA749611E(L_5, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// if (color != default(Color))
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8 = V_0;
		il2cpp_codegen_initobj((&V_5), sizeof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 ));
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_9 = V_5;
		bool L_10;
		L_10 = Color_op_Inequality_m6A9C7B9297D92024848ABFD305DDFE13DF40C86D(L_8, L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00d6;
		}
	}
	{
		// material.SetColor(id, color);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11 = ___material0;
		int32_t L_12;
		L_12 = AnimatableProperty_get_id_m4639FB09C0BF0DFD4327D1A081453AED3F3AF729_inline(__this, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13 = V_0;
		NullCheck(L_11);
		Material_SetColor_m9DE63FCC5A31918F8A9A2E4FCED70C298677A7B4(L_11, L_12, L_13, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0063:
	{
		// var vector = mpb.GetVector(id);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_14 = ___mpb1;
		int32_t L_15;
		L_15 = AnimatableProperty_get_id_m4639FB09C0BF0DFD4327D1A081453AED3F3AF729_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_16;
		L_16 = MaterialPropertyBlock_GetVector_m7BAAE04A6D06A748DB3275CE093C032C2C446E0A(L_14, L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		// if (vector != default(Vector4))
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_17 = V_1;
		il2cpp_codegen_initobj((&V_6), sizeof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 ));
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_18 = V_6;
		bool L_19;
		L_19 = Vector4_op_Inequality_m2B976EE8649EE1AE9DE1771CEE183AC70E3A75B7_inline(L_17, L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00d6;
		}
	}
	{
		// material.SetVector(id, vector);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_20 = ___material0;
		int32_t L_21;
		L_21 = AnimatableProperty_get_id_m4639FB09C0BF0DFD4327D1A081453AED3F3AF729_inline(__this, /*hidden argument*/NULL);
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_22 = V_1;
		NullCheck(L_20);
		Material_SetVector_m47F7F5B5B21FA28885C4E747AF1C32F40C1022CB(L_20, L_21, L_22, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_0090:
	{
		// var value = mpb.GetFloat(id);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_23 = ___mpb1;
		int32_t L_24;
		L_24 = AnimatableProperty_get_id_m4639FB09C0BF0DFD4327D1A081453AED3F3AF729_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		float L_25;
		L_25 = MaterialPropertyBlock_GetFloat_m20C2147E16CA3B7050DF4EB97448A11DC8D85DCC(L_23, L_24, /*hidden argument*/NULL);
		V_2 = L_25;
		// if (value != default(float))
		float L_26 = V_2;
		if ((((float)L_26) == ((float)(0.0f))))
		{
			goto IL_00d6;
		}
	}
	{
		// material.SetFloat(id, value);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_27 = ___material0;
		int32_t L_28;
		L_28 = AnimatableProperty_get_id_m4639FB09C0BF0DFD4327D1A081453AED3F3AF729_inline(__this, /*hidden argument*/NULL);
		float L_29 = V_2;
		NullCheck(L_27);
		Material_SetFloat_mAC7DC962B356565CF6743E358C7A19D0322EA060(L_27, L_28, L_29, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00b3:
	{
		// var tex = mpb.GetTexture(id);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_30 = ___mpb1;
		int32_t L_31;
		L_31 = AnimatableProperty_get_id_m4639FB09C0BF0DFD4327D1A081453AED3F3AF729_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_32;
		L_32 = MaterialPropertyBlock_GetTexture_m0417B72AF4285DD967C7F46B590FCD4B9048D5E2(L_30, L_31, /*hidden argument*/NULL);
		V_3 = L_32;
		// if (tex != default(Texture))
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_33 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_33, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_34)
		{
			goto IL_00d6;
		}
	}
	{
		// material.SetTexture(id, tex);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_35 = ___material0;
		int32_t L_36;
		L_36 = AnimatableProperty_get_id_m4639FB09C0BF0DFD4327D1A081453AED3F3AF729_inline(__this, /*hidden argument*/NULL);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_37 = V_3;
		NullCheck(L_35);
		Material_SetTexture_mECB29488B89AB3E516331DA41409510D570E9B60(L_35, L_36, L_37, /*hidden argument*/NULL);
	}

IL_00d6:
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.AnimatableProperty::OnBeforeSerialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatableProperty_OnBeforeSerialize_m6D92CBB428496CFA5801F0EA559BFA75F2111845 (AnimatableProperty_t1C4E28F37643462525F81B462CF1EC460DD18814 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.AnimatableProperty::OnAfterDeserialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatableProperty_OnAfterDeserialize_m0BE2002D118726C90FB906F8F1F1A8FF1F205022 (AnimatableProperty_t1C4E28F37643462525F81B462CF1EC460DD18814 * __this, const RuntimeMethod* method)
{
	{
		// id = Shader.PropertyToID(m_Name);
		String_t* L_0 = __this->get_m_Name_0();
		int32_t L_1;
		L_1 = Shader_PropertyToID_m8C1BEBBAC0CC3015B142AF0FA856495D5D239F5F(L_0, /*hidden argument*/NULL);
		AnimatableProperty_set_id_mDE27575E1BBEAFDE92E4D369D1400E906189BD29_inline(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.AnimatableProperty::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimatableProperty__ctor_mD46335BC4A9E9F389A7BFFF1BF33F906F5134451 (AnimatableProperty_t1C4E28F37643462525F81B462CF1EC460DD18814 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// [SerializeField] string m_Name = "";
		__this->set_m_Name_0(_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// [SerializeField] ShaderPropertyType m_Type = ShaderPropertyType.Vector;
		__this->set_m_Type_1(1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// Coffee.UIParticleExtensions.BakingCamera Coffee.UIParticleExtensions.BakingCamera::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765 * BakingCamera_get_Instance_m38D0259A6B00FAC1C828968907214B3F7F07EEFD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return s_Instance
		//     ? s_Instance
		//     : (s_Instance = Create());
		IL2CPP_RUNTIME_CLASS_INIT(BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_il2cpp_TypeInfo_var);
		BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765 * L_0 = ((BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_StaticFields*)il2cpp_codegen_static_fields_for(BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_il2cpp_TypeInfo_var))->get_s_Instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_il2cpp_TypeInfo_var);
		BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765 * L_2;
		L_2 = BakingCamera_Create_mCC87BECB5DB059F7E06CEE9F094BDAAD0996FACB(/*hidden argument*/NULL);
		BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765 * L_3 = L_2;
		((BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_StaticFields*)il2cpp_codegen_static_fields_for(BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_il2cpp_TypeInfo_var))->set_s_Instance_4(L_3);
		return L_3;
	}

IL_0018:
	{
		IL2CPP_RUNTIME_CLASS_INIT(BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_il2cpp_TypeInfo_var);
		BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765 * L_4 = ((BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_StaticFields*)il2cpp_codegen_static_fields_for(BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_il2cpp_TypeInfo_var))->get_s_Instance_4();
		return L_4;
	}
}
// Coffee.UIParticleExtensions.BakingCamera Coffee.UIParticleExtensions.BakingCamera::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765 * BakingCamera_Create_mCC87BECB5DB059F7E06CEE9F094BDAAD0996FACB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_m29E3FA27ED0C77E7855F40C895AA48523653BFE5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_m30A12D305C7F27946BFB6D84B7C754E899E1562C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	{
		// var gameObject = new GameObject(typeof(BakingCamera).Name);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)il2cpp_codegen_object_new(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_il2cpp_TypeInfo_var);
		GameObject__ctor_mDF8BF31EAE3E03F24421531B25FB4BEDB7C87144(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// gameObject.hideFlags = HideFlags.HideAndDontSave;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = V_0;
		NullCheck(L_4);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_4, ((int32_t)61), /*hidden argument*/NULL);
		// var inst = gameObject.AddComponent<BakingCamera>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_0;
		NullCheck(L_5);
		BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765 * L_6;
		L_6 = GameObject_AddComponent_TisBakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_m29E3FA27ED0C77E7855F40C895AA48523653BFE5(L_5, /*hidden argument*/GameObject_AddComponent_TisBakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_m29E3FA27ED0C77E7855F40C895AA48523653BFE5_RuntimeMethod_var);
		// inst._camera = gameObject.AddComponent<Camera>();
		BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765 * L_7 = L_6;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = V_0;
		NullCheck(L_8);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_9;
		L_9 = GameObject_AddComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_m30A12D305C7F27946BFB6D84B7C754E899E1562C(L_8, /*hidden argument*/GameObject_AddComponent_TisCamera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_m30A12D305C7F27946BFB6D84B7C754E899E1562C_RuntimeMethod_var);
		NullCheck(L_7);
		L_7->set__camera_7(L_9);
		// inst._camera.enabled = false;
		BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765 * L_10 = L_7;
		NullCheck(L_10);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_11 = L_10->get__camera_7();
		NullCheck(L_11);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_11, (bool)0, /*hidden argument*/NULL);
		// inst._camera.orthographic = true;
		BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765 * L_12 = L_10;
		NullCheck(L_12);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_13 = L_12->get__camera_7();
		NullCheck(L_13);
		Camera_set_orthographic_m38A872FC2D448915EE94C4FB72FB02D4C3F56C52(L_13, (bool)1, /*hidden argument*/NULL);
		// gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = V_0;
		NullCheck(L_14);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_14, (bool)0, /*hidden argument*/NULL);
		// return inst;
		return L_12;
	}
}
// System.Void Coffee.UIParticleExtensions.BakingCamera::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BakingCamera_Awake_m7B24CF62569C8FECC7F801D5ABD45A76139B5B77 (BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (this == s_Instance)
		IL2CPP_RUNTIME_CLASS_INIT(BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_il2cpp_TypeInfo_var);
		BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765 * L_0 = ((BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_StaticFields*)il2cpp_codegen_static_fields_for(BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_il2cpp_TypeInfo_var))->get_s_Instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(__this, L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m03007A68ABBA4CCD8C27B944964983395E7640F9(L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// UnityEngine.Camera Coffee.UIParticleExtensions.BakingCamera::GetCamera(UnityEngine.Canvas)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * BakingCamera_GetCamera_m071EF68B224E11DEA0E5291A689D39EC14092E84 (Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___canvas0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * V_1 = NULL;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B4_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B3_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B5_0 = NULL;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B6_1 = NULL;
	{
		// if (!canvas) return Camera.main;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_0 = ___canvas0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (!canvas) return Camera.main;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_2;
		L_2 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		return L_2;
	}

IL_000e:
	{
		// canvas = canvas.rootCanvas;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_3 = ___canvas0;
		NullCheck(L_3);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_4;
		L_4 = Canvas_get_rootCanvas_mB1C93410A4AA793D88130FD08C05D71327641DC5(L_3, /*hidden argument*/NULL);
		___canvas0 = L_4;
		// var size = ((RectTransform) canvas.transform).rect.size;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_5 = ___canvas0;
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		NullCheck(((RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)CastclassSealed((RuntimeObject*)L_6, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)));
		Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  L_7;
		L_7 = RectTransform_get_rect_m7B24A1D6E0CB87F3481DDD2584C82C97025404E2(((RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 *)CastclassSealed((RuntimeObject*)L_6, RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_3 = L_7;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Rect_get_size_m752B3BB45AE862F6EAE941ED5E5C1B01C0973A00((Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 *)(&V_3), /*hidden argument*/NULL);
		V_0 = L_8;
		// Instance._camera.orthographicSize = Mathf.Max(size.x, size.y) * canvas.scaleFactor;
		IL2CPP_RUNTIME_CLASS_INIT(BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_il2cpp_TypeInfo_var);
		BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765 * L_9;
		L_9 = BakingCamera_get_Instance_m38D0259A6B00FAC1C828968907214B3F7F07EEFD(/*hidden argument*/NULL);
		NullCheck(L_9);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_10 = L_9->get__camera_7();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_11 = V_0;
		float L_12 = L_11.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_13 = V_0;
		float L_14 = L_13.get_y_1();
		float L_15;
		L_15 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775(L_12, L_14, /*hidden argument*/NULL);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_16 = ___canvas0;
		NullCheck(L_16);
		float L_17;
		L_17 = Canvas_get_scaleFactor_m3F0D7E3B97B0493F4E98B2BBCA7A57BC1E1CB710(L_16, /*hidden argument*/NULL);
		NullCheck(L_10);
		Camera_set_orthographicSize_mFC4BBB0BB0097A5FE13E99D8388DF3008971085F(L_10, ((float)il2cpp_codegen_multiply((float)L_15, (float)L_17)), /*hidden argument*/NULL);
		// var camera = canvas.worldCamera;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_18 = ___canvas0;
		NullCheck(L_18);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_19;
		L_19 = Canvas_get_worldCamera_mFE4C9FDA7996FE20AC5CA3CB45B4190C40122D51(L_18, /*hidden argument*/NULL);
		V_1 = L_19;
		// var transform = Instance.transform;
		BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765 * L_20;
		L_20 = BakingCamera_get_Instance_m38D0259A6B00FAC1C828968907214B3F7F07EEFD(/*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_20, /*hidden argument*/NULL);
		// var rotation = canvas.renderMode != RenderMode.ScreenSpaceOverlay && camera
		//     ? camera.transform.rotation
		//     : s_OrthoRotation;
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_22 = ___canvas0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = Canvas_get_renderMode_mAEC8A341577CC74EC89D5890E6D6E4A82B03574D(L_22, /*hidden argument*/NULL);
		G_B3_0 = L_21;
		if (!L_23)
		{
			G_B4_0 = L_21;
			goto IL_0077;
		}
	}
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_24 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_24, /*hidden argument*/NULL);
		G_B4_0 = G_B3_0;
		if (L_25)
		{
			G_B5_0 = G_B3_0;
			goto IL_007e;
		}
	}

IL_0077:
	{
		IL2CPP_RUNTIME_CLASS_INIT(BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_il2cpp_TypeInfo_var);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_26 = ((BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_StaticFields*)il2cpp_codegen_static_fields_for(BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_il2cpp_TypeInfo_var))->get_s_OrthoRotation_6();
		G_B6_0 = L_26;
		G_B6_1 = G_B4_0;
		goto IL_0089;
	}

IL_007e:
	{
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_27 = V_1;
		NullCheck(L_27);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_29;
		L_29 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_28, /*hidden argument*/NULL);
		G_B6_0 = L_29;
		G_B6_1 = G_B5_0;
	}

IL_0089:
	{
		V_2 = G_B6_0;
		// transform.SetPositionAndRotation(s_OrthoPosition, rotation);
		IL2CPP_RUNTIME_CLASS_INIT(BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_il2cpp_TypeInfo_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30 = ((BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_StaticFields*)il2cpp_codegen_static_fields_for(BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_il2cpp_TypeInfo_var))->get_s_OrthoPosition_5();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_31 = V_2;
		NullCheck(G_B6_1);
		Transform_SetPositionAndRotation_m33418A6BDFB6395B98D0B5733F5E522B7EEDDCDE(G_B6_1, L_30, L_31, /*hidden argument*/NULL);
		// Instance._camera.orthographic = true;
		BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765 * L_32;
		L_32 = BakingCamera_get_Instance_m38D0259A6B00FAC1C828968907214B3F7F07EEFD(/*hidden argument*/NULL);
		NullCheck(L_32);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_33 = L_32->get__camera_7();
		NullCheck(L_33);
		Camera_set_orthographic_m38A872FC2D448915EE94C4FB72FB02D4C3F56C52(L_33, (bool)1, /*hidden argument*/NULL);
		// Instance._camera.farClipPlane = 2000f;
		BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765 * L_34;
		L_34 = BakingCamera_get_Instance_m38D0259A6B00FAC1C828968907214B3F7F07EEFD(/*hidden argument*/NULL);
		NullCheck(L_34);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_35 = L_34->get__camera_7();
		NullCheck(L_35);
		Camera_set_farClipPlane_m63F1302068433A72A5103281327C68CD8F67AD41(L_35, (2000.0f), /*hidden argument*/NULL);
		// return Instance._camera;
		BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765 * L_36;
		L_36 = BakingCamera_get_Instance_m38D0259A6B00FAC1C828968907214B3F7F07EEFD(/*hidden argument*/NULL);
		NullCheck(L_36);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_37 = L_36->get__camera_7();
		return L_37;
	}
}
// System.Void Coffee.UIParticleExtensions.BakingCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BakingCamera__ctor_m89D41CA877825CC3C95B98F2C81279DC9B14ED0E (BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Coffee.UIParticleExtensions.BakingCamera::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BakingCamera__cctor_m69C33CC9E08D0A72C235C8D8B121E15439F904C7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly Vector3 s_OrthoPosition = new Vector3(0, 0, -1000);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (0.0f), (0.0f), (-1000.0f), /*hidden argument*/NULL);
		((BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_StaticFields*)il2cpp_codegen_static_fields_for(BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_il2cpp_TypeInfo_var))->set_s_OrthoPosition_5(L_0);
		// private static readonly Quaternion s_OrthoRotation = Quaternion.identity;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_1;
		L_1 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		((BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_StaticFields*)il2cpp_codegen_static_fields_for(BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_il2cpp_TypeInfo_var))->set_s_OrthoRotation_6(L_1);
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
// System.Void Coffee.UIParticleExtensions.CombineInstanceArrayPool::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineInstanceArrayPool_Init_m7F0D754479ED6BCB313E73240A7A310EE446828E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CombineInstanceArrayPool_t13D673FAA6CDC2996CB9628491E571DBF55634E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m24E92C7D957DD723750CC68EEC11C4B064EAEB99_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Pool.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(CombineInstanceArrayPool_t13D673FAA6CDC2996CB9628491E571DBF55634E2_il2cpp_TypeInfo_var);
		Dictionary_2_tAFAC43DCAF688DC93628A59EA943D13A05C32E76 * L_0 = ((CombineInstanceArrayPool_t13D673FAA6CDC2996CB9628491E571DBF55634E2_StaticFields*)il2cpp_codegen_static_fields_for(CombineInstanceArrayPool_t13D673FAA6CDC2996CB9628491E571DBF55634E2_il2cpp_TypeInfo_var))->get_s_Pool_0();
		NullCheck(L_0);
		Dictionary_2_Clear_m24E92C7D957DD723750CC68EEC11C4B064EAEB99(L_0, /*hidden argument*/Dictionary_2_Clear_m24E92C7D957DD723750CC68EEC11C4B064EAEB99_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Coffee.UIParticleExtensions.CombineInstanceArrayPool::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineInstanceArrayPool__cctor_m02A40E44C4BF12FE0CE15C29DD91510CCB335A2B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CombineInstanceArrayPool_t13D673FAA6CDC2996CB9628491E571DBF55634E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mF8947E77DF8E2A5E7FDDD5AE5068EED63238218D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tAFAC43DCAF688DC93628A59EA943D13A05C32E76_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Pool = new Dictionary<int, CombineInstance[]>();
		Dictionary_2_tAFAC43DCAF688DC93628A59EA943D13A05C32E76 * L_0 = (Dictionary_2_tAFAC43DCAF688DC93628A59EA943D13A05C32E76 *)il2cpp_codegen_object_new(Dictionary_2_tAFAC43DCAF688DC93628A59EA943D13A05C32E76_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mF8947E77DF8E2A5E7FDDD5AE5068EED63238218D(L_0, /*hidden argument*/Dictionary_2__ctor_mF8947E77DF8E2A5E7FDDD5AE5068EED63238218D_RuntimeMethod_var);
		((CombineInstanceArrayPool_t13D673FAA6CDC2996CB9628491E571DBF55634E2_StaticFields*)il2cpp_codegen_static_fields_for(CombineInstanceArrayPool_t13D673FAA6CDC2996CB9628491E571DBF55634E2_il2cpp_TypeInfo_var))->set_s_Pool_0(L_0);
		// }
		return;
	}
}
// UnityEngine.CombineInstance[] Coffee.UIParticleExtensions.CombineInstanceArrayPool::Get(System.Collections.Generic.List`1<UnityEngine.CombineInstance>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* CombineInstanceArrayPool_Get_m625187288E6EB5124F2F8983E401173047F9C136 (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * ___src0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CombineInstanceArrayPool_t13D673FAA6CDC2996CB9628491E571DBF55634E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4F75362249261B3425FE3403FB7A77CD48479C64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m9DEBD94A834E7D9E6A4B407E1B103559405E1327_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m32EAB7C20FE929AB4D52FE42710A40B827F4EE31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8B121A3D20746F588DB7B35604E8F1F30FD5342A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var count = src.Count;
		List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * L_0 = ___src0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m32EAB7C20FE929AB4D52FE42710A40B827F4EE31_inline(L_0, /*hidden argument*/List_1_get_Count_m32EAB7C20FE929AB4D52FE42710A40B827F4EE31_RuntimeMethod_var);
		V_1 = L_1;
		// if (!s_Pool.TryGetValue(count, out dst))
		IL2CPP_RUNTIME_CLASS_INIT(CombineInstanceArrayPool_t13D673FAA6CDC2996CB9628491E571DBF55634E2_il2cpp_TypeInfo_var);
		Dictionary_2_tAFAC43DCAF688DC93628A59EA943D13A05C32E76 * L_2 = ((CombineInstanceArrayPool_t13D673FAA6CDC2996CB9628491E571DBF55634E2_StaticFields*)il2cpp_codegen_static_fields_for(CombineInstanceArrayPool_t13D673FAA6CDC2996CB9628491E571DBF55634E2_il2cpp_TypeInfo_var))->get_s_Pool_0();
		int32_t L_3 = V_1;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_m9DEBD94A834E7D9E6A4B407E1B103559405E1327(L_2, L_3, (CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF**)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m9DEBD94A834E7D9E6A4B407E1B103559405E1327_RuntimeMethod_var);
		if (L_4)
		{
			goto IL_0029;
		}
	}
	{
		// dst = new CombineInstance[count];
		int32_t L_5 = V_1;
		CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* L_6 = (CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF*)(CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF*)SZArrayNew(CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF_il2cpp_TypeInfo_var, (uint32_t)L_5);
		V_0 = L_6;
		// s_Pool.Add(count, dst);
		IL2CPP_RUNTIME_CLASS_INIT(CombineInstanceArrayPool_t13D673FAA6CDC2996CB9628491E571DBF55634E2_il2cpp_TypeInfo_var);
		Dictionary_2_tAFAC43DCAF688DC93628A59EA943D13A05C32E76 * L_7 = ((CombineInstanceArrayPool_t13D673FAA6CDC2996CB9628491E571DBF55634E2_StaticFields*)il2cpp_codegen_static_fields_for(CombineInstanceArrayPool_t13D673FAA6CDC2996CB9628491E571DBF55634E2_il2cpp_TypeInfo_var))->get_s_Pool_0();
		int32_t L_8 = V_1;
		CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* L_9 = V_0;
		NullCheck(L_7);
		Dictionary_2_Add_m4F75362249261B3425FE3403FB7A77CD48479C64(L_7, L_8, L_9, /*hidden argument*/Dictionary_2_Add_m4F75362249261B3425FE3403FB7A77CD48479C64_RuntimeMethod_var);
	}

IL_0029:
	{
		// for (var i = 0; i < src.Count; i++)
		V_2 = 0;
		goto IL_0067;
	}

IL_002d:
	{
		// dst[i].mesh = src[i].mesh;
		CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* L_10 = V_0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * L_12 = ___src0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C  L_14;
		L_14 = List_1_get_Item_m8B121A3D20746F588DB7B35604E8F1F30FD5342A_inline(L_12, L_13, /*hidden argument*/List_1_get_Item_m8B121A3D20746F588DB7B35604E8F1F30FD5342A_RuntimeMethod_var);
		V_3 = L_14;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_15;
		L_15 = CombineInstance_get_mesh_mB92C30E87A4B25AEA12DEBFA3EDEC8D3B115E6F4((CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C *)(&V_3), /*hidden argument*/NULL);
		CombineInstance_set_mesh_m4188D448CFD58C46FC3824D791572D07905FC824((CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C *)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), L_15, /*hidden argument*/NULL);
		// dst[i].transform = src[i].transform;
		CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* L_16 = V_0;
		int32_t L_17 = V_2;
		NullCheck(L_16);
		List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * L_18 = ___src0;
		int32_t L_19 = V_2;
		NullCheck(L_18);
		CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C  L_20;
		L_20 = List_1_get_Item_m8B121A3D20746F588DB7B35604E8F1F30FD5342A_inline(L_18, L_19, /*hidden argument*/List_1_get_Item_m8B121A3D20746F588DB7B35604E8F1F30FD5342A_RuntimeMethod_var);
		V_3 = L_20;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_21;
		L_21 = CombineInstance_get_transform_m183630FC919CA1D35C5803AC7985E197408468B5((CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C *)(&V_3), /*hidden argument*/NULL);
		CombineInstance_set_transform_mF1C28A1BC0733CD0A10481215C4FCB418C7CDA1D((CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C *)((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17))), L_21, /*hidden argument*/NULL);
		// for (var i = 0; i < src.Count; i++)
		int32_t L_22 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_0067:
	{
		// for (var i = 0; i < src.Count; i++)
		int32_t L_23 = V_2;
		List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * L_24 = ___src0;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = List_1_get_Count_m32EAB7C20FE929AB4D52FE42710A40B827F4EE31_inline(L_24, /*hidden argument*/List_1_get_Count_m32EAB7C20FE929AB4D52FE42710A40B827F4EE31_RuntimeMethod_var);
		if ((((int32_t)L_23) < ((int32_t)L_25)))
		{
			goto IL_002d;
		}
	}
	{
		// return dst;
		CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* L_26 = V_0;
		return L_26;
	}
}
// UnityEngine.CombineInstance[] Coffee.UIParticleExtensions.CombineInstanceArrayPool::Get(System.Collections.Generic.List`1<Coffee.UIParticleExtensions.CombineInstanceEx>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* CombineInstanceArrayPool_Get_m526CC4E5AF012BC876558348D72F6C450C405008 (List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A * ___src0, int32_t ___count1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CombineInstanceArrayPool_t13D673FAA6CDC2996CB9628491E571DBF55634E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m4F75362249261B3425FE3403FB7A77CD48479C64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m9DEBD94A834E7D9E6A4B407E1B103559405E1327_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6F9722B9A4F59EFF06216F059A98F13B56F1F35D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (!s_Pool.TryGetValue(count, out dst))
		IL2CPP_RUNTIME_CLASS_INIT(CombineInstanceArrayPool_t13D673FAA6CDC2996CB9628491E571DBF55634E2_il2cpp_TypeInfo_var);
		Dictionary_2_tAFAC43DCAF688DC93628A59EA943D13A05C32E76 * L_0 = ((CombineInstanceArrayPool_t13D673FAA6CDC2996CB9628491E571DBF55634E2_StaticFields*)il2cpp_codegen_static_fields_for(CombineInstanceArrayPool_t13D673FAA6CDC2996CB9628491E571DBF55634E2_il2cpp_TypeInfo_var))->get_s_Pool_0();
		int32_t L_1 = ___count1;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m9DEBD94A834E7D9E6A4B407E1B103559405E1327(L_0, L_1, (CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF**)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m9DEBD94A834E7D9E6A4B407E1B103559405E1327_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		// dst = new CombineInstance[count];
		int32_t L_3 = ___count1;
		CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* L_4 = (CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF*)(CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF*)SZArrayNew(CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF_il2cpp_TypeInfo_var, (uint32_t)L_3);
		V_0 = L_4;
		// s_Pool.Add(count, dst);
		IL2CPP_RUNTIME_CLASS_INIT(CombineInstanceArrayPool_t13D673FAA6CDC2996CB9628491E571DBF55634E2_il2cpp_TypeInfo_var);
		Dictionary_2_tAFAC43DCAF688DC93628A59EA943D13A05C32E76 * L_5 = ((CombineInstanceArrayPool_t13D673FAA6CDC2996CB9628491E571DBF55634E2_StaticFields*)il2cpp_codegen_static_fields_for(CombineInstanceArrayPool_t13D673FAA6CDC2996CB9628491E571DBF55634E2_il2cpp_TypeInfo_var))->get_s_Pool_0();
		int32_t L_6 = ___count1;
		CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* L_7 = V_0;
		NullCheck(L_5);
		Dictionary_2_Add_m4F75362249261B3425FE3403FB7A77CD48479C64(L_5, L_6, L_7, /*hidden argument*/Dictionary_2_Add_m4F75362249261B3425FE3403FB7A77CD48479C64_RuntimeMethod_var);
	}

IL_0022:
	{
		// for (var i = 0; i < count; i++)
		V_1 = 0;
		goto IL_005a;
	}

IL_0026:
	{
		// dst[i].mesh = src[i].mesh;
		CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* L_8 = V_0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A * L_10 = ___src0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * L_12;
		L_12 = List_1_get_Item_m6F9722B9A4F59EFF06216F059A98F13B56F1F35D_inline(L_10, L_11, /*hidden argument*/List_1_get_Item_m6F9722B9A4F59EFF06216F059A98F13B56F1F35D_RuntimeMethod_var);
		NullCheck(L_12);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_13 = L_12->get_mesh_4();
		CombineInstance_set_mesh_m4188D448CFD58C46FC3824D791572D07905FC824((CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C *)((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), L_13, /*hidden argument*/NULL);
		// dst[i].transform = src[i].transform;
		CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* L_14 = V_0;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A * L_16 = ___src0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * L_18;
		L_18 = List_1_get_Item_m6F9722B9A4F59EFF06216F059A98F13B56F1F35D_inline(L_16, L_17, /*hidden argument*/List_1_get_Item_m6F9722B9A4F59EFF06216F059A98F13B56F1F35D_RuntimeMethod_var);
		NullCheck(L_18);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_19 = L_18->get_transform_5();
		CombineInstance_set_transform_mF1C28A1BC0733CD0A10481215C4FCB418C7CDA1D((CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C *)((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), L_19, /*hidden argument*/NULL);
		// for (var i = 0; i < count; i++)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_005a:
	{
		// for (var i = 0; i < count; i++)
		int32_t L_21 = V_1;
		int32_t L_22 = ___count1;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0026;
		}
	}
	{
		// return dst;
		CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* L_23 = V_0;
		return L_23;
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
// System.Void Coffee.UIParticleExtensions.CombineInstanceEx::Combine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineInstanceEx_Combine_m081513E02EC4774345327357861F0F5FA98BF79C (CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CombineInstanceArrayPool_t13D673FAA6CDC2996CB9628491E571DBF55634E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8B121A3D20746F588DB7B35604E8F1F30FD5342A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* V_2 = NULL;
	{
		// switch (count)
		int32_t L_0 = __this->get_count_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0011;
		}
	}
	{
		goto IL_0046;
	}

IL_0010:
	{
		// return;
		return;
	}

IL_0011:
	{
		// mesh = combineInstances[0].mesh;
		List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * L_3 = __this->get_combineInstances_3();
		NullCheck(L_3);
		CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C  L_4;
		L_4 = List_1_get_Item_m8B121A3D20746F588DB7B35604E8F1F30FD5342A_inline(L_3, 0, /*hidden argument*/List_1_get_Item_m8B121A3D20746F588DB7B35604E8F1F30FD5342A_RuntimeMethod_var);
		V_1 = L_4;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_5;
		L_5 = CombineInstance_get_mesh_mB92C30E87A4B25AEA12DEBFA3EDEC8D3B115E6F4((CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C *)(&V_1), /*hidden argument*/NULL);
		__this->set_mesh_4(L_5);
		// transform = combineInstances[0].transform;
		List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * L_6 = __this->get_combineInstances_3();
		NullCheck(L_6);
		CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C  L_7;
		L_7 = List_1_get_Item_m8B121A3D20746F588DB7B35604E8F1F30FD5342A_inline(L_6, 0, /*hidden argument*/List_1_get_Item_m8B121A3D20746F588DB7B35604E8F1F30FD5342A_RuntimeMethod_var);
		V_1 = L_7;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_8;
		L_8 = CombineInstance_get_transform_m183630FC919CA1D35C5803AC7985E197408468B5((CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C *)(&V_1), /*hidden argument*/NULL);
		__this->set_transform_5(L_8);
		// return;
		return;
	}

IL_0046:
	{
		// var cis = CombineInstanceArrayPool.Get(combineInstances);
		List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * L_9 = __this->get_combineInstances_3();
		IL2CPP_RUNTIME_CLASS_INIT(CombineInstanceArrayPool_t13D673FAA6CDC2996CB9628491E571DBF55634E2_il2cpp_TypeInfo_var);
		CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* L_10;
		L_10 = CombineInstanceArrayPool_Get_m625187288E6EB5124F2F8983E401173047F9C136(L_9, /*hidden argument*/NULL);
		V_2 = L_10;
		// mesh = MeshPool.Rent();
		IL2CPP_RUNTIME_CLASS_INIT(MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_il2cpp_TypeInfo_var);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_11;
		L_11 = MeshPool_Rent_m933858E92DC47D62ACB2DA8178F810D1B36FC322(/*hidden argument*/NULL);
		__this->set_mesh_4(L_11);
		// mesh.CombineMeshes(cis, true, true);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_12 = __this->get_mesh_4();
		CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* L_13 = V_2;
		NullCheck(L_12);
		Mesh_CombineMeshes_m406030E08EC44C147C6F0CC46E26F82A7255FB6E(L_12, L_13, (bool)1, (bool)1, /*hidden argument*/NULL);
		// transform = Matrix4x4.identity;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_14;
		L_14 = Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596(/*hidden argument*/NULL);
		__this->set_transform_5(L_14);
		// cis.Clear();
		CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* L_15 = V_2;
		MeshExtensions_Clear_m0ACA76314A298EFF9A733BBE2CDC4A71046EC377(L_15, /*hidden argument*/NULL);
		// return;
		return;
	}
}
// System.Void Coffee.UIParticleExtensions.CombineInstanceEx::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineInstanceEx_Clear_m750F47BDB31141810646C7BCA5E39B28DF878D37 (CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_mB8E9D7255428F65F7CF16903E93107CF11658163_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m32EAB7C20FE929AB4D52FE42710A40B827F4EE31_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8B121A3D20746F588DB7B35604E8F1F30FD5342A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mF5306FB753D6295E974C36F08935DA484A23B166_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// for (var i = 0; i < combineInstances.Count; i++)
		V_0 = 0;
		goto IL_0036;
	}

IL_0004:
	{
		// var inst = combineInstances[i];
		List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * L_0 = __this->get_combineInstances_3();
		int32_t L_1 = V_0;
		NullCheck(L_0);
		CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C  L_2;
		L_2 = List_1_get_Item_m8B121A3D20746F588DB7B35604E8F1F30FD5342A_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m8B121A3D20746F588DB7B35604E8F1F30FD5342A_RuntimeMethod_var);
		V_1 = L_2;
		// MeshPool.Return(inst.mesh);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_3;
		L_3 = CombineInstance_get_mesh_mB92C30E87A4B25AEA12DEBFA3EDEC8D3B115E6F4((CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_il2cpp_TypeInfo_var);
		MeshPool_Return_m6A14627D2C7C9498CA6B6C6CD22370B0A0D7559E(L_3, /*hidden argument*/NULL);
		// inst.mesh = null;
		CombineInstance_set_mesh_m4188D448CFD58C46FC3824D791572D07905FC824((CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C *)(&V_1), (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)NULL, /*hidden argument*/NULL);
		// combineInstances[i] = inst;
		List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * L_4 = __this->get_combineInstances_3();
		int32_t L_5 = V_0;
		CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C  L_6 = V_1;
		NullCheck(L_4);
		List_1_set_Item_mF5306FB753D6295E974C36F08935DA484A23B166(L_4, L_5, L_6, /*hidden argument*/List_1_set_Item_mF5306FB753D6295E974C36F08935DA484A23B166_RuntimeMethod_var);
		// for (var i = 0; i < combineInstances.Count; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0036:
	{
		// for (var i = 0; i < combineInstances.Count; i++)
		int32_t L_8 = V_0;
		List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * L_9 = __this->get_combineInstances_3();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m32EAB7C20FE929AB4D52FE42710A40B827F4EE31_inline(L_9, /*hidden argument*/List_1_get_Count_m32EAB7C20FE929AB4D52FE42710A40B827F4EE31_RuntimeMethod_var);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// combineInstances.Clear();
		List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * L_11 = __this->get_combineInstances_3();
		NullCheck(L_11);
		List_1_Clear_mB8E9D7255428F65F7CF16903E93107CF11658163(L_11, /*hidden argument*/List_1_Clear_mB8E9D7255428F65F7CF16903E93107CF11658163_RuntimeMethod_var);
		// MeshPool.Return(mesh);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_12 = __this->get_mesh_4();
		IL2CPP_RUNTIME_CLASS_INIT(MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_il2cpp_TypeInfo_var);
		MeshPool_Return_m6A14627D2C7C9498CA6B6C6CD22370B0A0D7559E(L_12, /*hidden argument*/NULL);
		// mesh = null;
		__this->set_mesh_4((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)NULL);
		// count = 0;
		__this->set_count_0(0);
		// hash = -1;
		__this->set_hash_1(((int64_t)((int64_t)(-1))));
		// index = -1;
		__this->set_index_2((-1));
		// }
		return;
	}
}
// System.Void Coffee.UIParticleExtensions.CombineInstanceEx::Push(UnityEngine.Mesh,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineInstanceEx_Push_m2ADEAD8360533A3EC187DB74F6A7356EB7996505 (CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * __this, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh0, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___transform1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m583619246DFE5A4BE61DBA1CA5153C5BE8A82363_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// combineInstances.Add(new CombineInstance {mesh = mesh, transform = transform});
		List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * L_0 = __this->get_combineInstances_3();
		il2cpp_codegen_initobj((&V_0), sizeof(CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C ));
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_1 = ___mesh0;
		CombineInstance_set_mesh_m4188D448CFD58C46FC3824D791572D07905FC824((CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C *)(&V_0), L_1, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_2 = ___transform1;
		CombineInstance_set_transform_mF1C28A1BC0733CD0A10481215C4FCB418C7CDA1D((CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C *)(&V_0), L_2, /*hidden argument*/NULL);
		CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C  L_3 = V_0;
		NullCheck(L_0);
		List_1_Add_m583619246DFE5A4BE61DBA1CA5153C5BE8A82363(L_0, L_3, /*hidden argument*/List_1_Add_m583619246DFE5A4BE61DBA1CA5153C5BE8A82363_RuntimeMethod_var);
		// count++;
		int32_t L_4 = __this->get_count_0();
		__this->set_count_0(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
		// }
		return;
	}
}
// System.Void Coffee.UIParticleExtensions.CombineInstanceEx::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CombineInstanceEx__ctor_mB0BAA3DA9EF0ECEC635C7F1FBA73F60EBC3F86A8 (CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE7168794D5E35E36D5509A0E57C2B8E37D2E3EF5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public long hash = -1;
		__this->set_hash_1(((int64_t)((int64_t)(-1))));
		// public int index = -1;
		__this->set_index_2((-1));
		// private readonly List<CombineInstance> combineInstances = new List<CombineInstance>(32);
		List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * L_0 = (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF *)il2cpp_codegen_object_new(List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF_il2cpp_TypeInfo_var);
		List_1__ctor_mE7168794D5E35E36D5509A0E57C2B8E37D2E3EF5(L_0, ((int32_t)32), /*hidden argument*/List_1__ctor_mE7168794D5E35E36D5509A0E57C2B8E37D2E3EF5_RuntimeMethod_var);
		__this->set_combineInstances_3(L_0);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Boolean Coffee.UIParticleExtensions.ListExtensions::SequenceEqualFast(System.Collections.Generic.List`1<System.Boolean>,System.Collections.Generic.List`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListExtensions_SequenceEqualFast_m671F15B87407B6356BFB72C9E9C04A61C8ADCFFE (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * ___self0, List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8547E31DBBBA85E2090BA3076611614A4C8F1A18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6608CAE85049DBB39679FB41D1266AF732C97461_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (self.Count != value.Count) return false;
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_0 = ___self0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m8547E31DBBBA85E2090BA3076611614A4C8F1A18_inline(L_0, /*hidden argument*/List_1_get_Count_m8547E31DBBBA85E2090BA3076611614A4C8F1A18_RuntimeMethod_var);
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_2 = ___value1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m8547E31DBBBA85E2090BA3076611614A4C8F1A18_inline(L_2, /*hidden argument*/List_1_get_Count_m8547E31DBBBA85E2090BA3076611614A4C8F1A18_RuntimeMethod_var);
		if ((((int32_t)L_1) == ((int32_t)L_3)))
		{
			goto IL_0010;
		}
	}
	{
		// if (self.Count != value.Count) return false;
		return (bool)0;
	}

IL_0010:
	{
		// for (var i = 0; i < self.Count; ++i)
		V_0 = 0;
		goto IL_002a;
	}

IL_0014:
	{
		// if (self[i] != value[i]) return false;
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_4 = ___self0;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = List_1_get_Item_m6608CAE85049DBB39679FB41D1266AF732C97461_inline(L_4, L_5, /*hidden argument*/List_1_get_Item_m6608CAE85049DBB39679FB41D1266AF732C97461_RuntimeMethod_var);
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_7 = ___value1;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		bool L_9;
		L_9 = List_1_get_Item_m6608CAE85049DBB39679FB41D1266AF732C97461_inline(L_7, L_8, /*hidden argument*/List_1_get_Item_m6608CAE85049DBB39679FB41D1266AF732C97461_RuntimeMethod_var);
		if ((((int32_t)L_6) == ((int32_t)L_9)))
		{
			goto IL_0026;
		}
	}
	{
		// if (self[i] != value[i]) return false;
		return (bool)0;
	}

IL_0026:
	{
		// for (var i = 0; i < self.Count; ++i)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002a:
	{
		// for (var i = 0; i < self.Count; ++i)
		int32_t L_11 = V_0;
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_12 = ___self0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = List_1_get_Count_m8547E31DBBBA85E2090BA3076611614A4C8F1A18_inline(L_12, /*hidden argument*/List_1_get_Count_m8547E31DBBBA85E2090BA3076611614A4C8F1A18_RuntimeMethod_var);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0014;
		}
	}
	{
		// return true;
		return (bool)1;
	}
}
// System.Int32 Coffee.UIParticleExtensions.ListExtensions::CountFast(System.Collections.Generic.List`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ListExtensions_CountFast_mB56B0BE6BCAC5AE99E6E829D67E89054C308EFC7 (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * ___self0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8547E31DBBBA85E2090BA3076611614A4C8F1A18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6608CAE85049DBB39679FB41D1266AF732C97461_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// var count = 0;
		V_0 = 0;
		// for (var i = 0; i < self.Count; ++i)
		V_1 = 0;
		goto IL_0017;
	}

IL_0006:
	{
		// if (self[i]) count++;
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_0 = ___self0;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_get_Item_m6608CAE85049DBB39679FB41D1266AF732C97461_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m6608CAE85049DBB39679FB41D1266AF732C97461_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// if (self[i]) count++;
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0013:
	{
		// for (var i = 0; i < self.Count; ++i)
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0017:
	{
		// for (var i = 0; i < self.Count; ++i)
		int32_t L_5 = V_1;
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_6 = ___self0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = List_1_get_Count_m8547E31DBBBA85E2090BA3076611614A4C8F1A18_inline(L_6, /*hidden argument*/List_1_get_Count_m8547E31DBBBA85E2090BA3076611614A4C8F1A18_RuntimeMethod_var);
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			goto IL_0006;
		}
	}
	{
		// return count;
		int32_t L_8 = V_0;
		return L_8;
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
// System.Void Coffee.UIParticleExtensions.MeshExtensions::Clear(UnityEngine.CombineInstance[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshExtensions_Clear_m0ACA76314A298EFF9A733BBE2CDC4A71046EC377 (CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* ___self0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (var i = 0; i < self.Length; i++)
		V_0 = 0;
		goto IL_0026;
	}

IL_0004:
	{
		// MeshPool.Return(self[i].mesh);
		CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* L_0 = ___self0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_2;
		L_2 = CombineInstance_get_mesh_mB92C30E87A4B25AEA12DEBFA3EDEC8D3B115E6F4((CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C *)((L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_1))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_il2cpp_TypeInfo_var);
		MeshPool_Return_m6A14627D2C7C9498CA6B6C6CD22370B0A0D7559E(L_2, /*hidden argument*/NULL);
		// self[i].mesh = null;
		CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* L_3 = ___self0;
		int32_t L_4 = V_0;
		NullCheck(L_3);
		CombineInstance_set_mesh_m4188D448CFD58C46FC3824D791572D07905FC824((CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C *)((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)NULL, /*hidden argument*/NULL);
		// for (var i = 0; i < self.Length; i++)
		int32_t L_5 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_0026:
	{
		// for (var i = 0; i < self.Length; i++)
		int32_t L_6 = V_0;
		CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* L_7 = ___self0;
		NullCheck(L_7);
		if ((((int32_t)L_6) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))))))
		{
			goto IL_0004;
		}
	}
	{
		// }
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
// System.Collections.Generic.List`1<System.Boolean> Coffee.UIParticleExtensions.MeshHelper::get_activeMeshIndices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * MeshHelper_get_activeMeshIndices_m6E866395890B87CD4AC987657DA66509592FB225 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static List<bool> activeMeshIndices { get; private set; }
		IL2CPP_RUNTIME_CLASS_INIT(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_0 = ((MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_StaticFields*)il2cpp_codegen_static_fields_for(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var))->get_U3CactiveMeshIndicesU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Coffee.UIParticleExtensions.MeshHelper::set_activeMeshIndices(System.Collections.Generic.List`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshHelper_set_activeMeshIndices_m6A2C685F625B13E92EBFC3336627A7592A3403D2 (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static List<bool> activeMeshIndices { get; private set; }
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		((MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_StaticFields*)il2cpp_codegen_static_fields_for(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var))->set_U3CactiveMeshIndicesU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Void Coffee.UIParticleExtensions.MeshHelper::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshHelper_Init_m9D0B0F506ADF9E5FFD9C9A150F14A11C8F0C89F0 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2029C17525D75C12FB08DA4DCE5C4BF7BCC53EF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeMeshIndices = new List<bool>();
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_0 = (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 *)il2cpp_codegen_object_new(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3_il2cpp_TypeInfo_var);
		List_1__ctor_m2029C17525D75C12FB08DA4DCE5C4BF7BCC53EF9(L_0, /*hidden argument*/List_1__ctor_m2029C17525D75C12FB08DA4DCE5C4BF7BCC53EF9_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		MeshHelper_set_activeMeshIndices_m6A2C685F625B13E92EBFC3336627A7592A3403D2_inline(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Coffee.UIParticleExtensions.MeshHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshHelper__cctor_mCA5D9B1794DE181AB74C6D5DFB42C949C6FAD439 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m94A297AF43A89F187AA7F2F7F2544999DFCDC4D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m591231B7598A4DDA3EB1ED69AB7B839E59DB7F1C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// s_CachedInstance = new List<CombineInstanceEx>(8);
		List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A * L_0 = (List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A *)il2cpp_codegen_object_new(List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A_il2cpp_TypeInfo_var);
		List_1__ctor_m591231B7598A4DDA3EB1ED69AB7B839E59DB7F1C(L_0, 8, /*hidden argument*/List_1__ctor_m591231B7598A4DDA3EB1ED69AB7B839E59DB7F1C_RuntimeMethod_var);
		((MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_StaticFields*)il2cpp_codegen_static_fields_for(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var))->set_s_CachedInstance_1(L_0);
		// for (var i = 0; i < 8; i++)
		V_0 = 0;
		goto IL_0022;
	}

IL_000f:
	{
		// s_CachedInstance.Add(new CombineInstanceEx());
		List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A * L_1 = ((MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_StaticFields*)il2cpp_codegen_static_fields_for(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var))->get_s_CachedInstance_1();
		CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * L_2 = (CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E *)il2cpp_codegen_object_new(CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E_il2cpp_TypeInfo_var);
		CombineInstanceEx__ctor_mB0BAA3DA9EF0ECEC635C7F1FBA73F60EBC3F86A8(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		List_1_Add_m94A297AF43A89F187AA7F2F7F2544999DFCDC4D1(L_1, L_2, /*hidden argument*/List_1_Add_m94A297AF43A89F187AA7F2F7F2544999DFCDC4D1_RuntimeMethod_var);
		// for (var i = 0; i < 8; i++)
		int32_t L_3 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1));
	}

IL_0022:
	{
		// for (var i = 0; i < 8; i++)
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) < ((int32_t)8)))
		{
			goto IL_000f;
		}
	}
	{
		// }
		return;
	}
}
// Coffee.UIParticleExtensions.CombineInstanceEx Coffee.UIParticleExtensions.MeshHelper::Get(System.Int32,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * MeshHelper_Get_mCF90C8A9C906BFFA841C8824E004B98D58411436 (int32_t ___index0, int64_t ___hash1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m94A297AF43A89F187AA7F2F7F2544999DFCDC4D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m4771A5EE25C154DEA876C4AF3D454F275922A771_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6F9722B9A4F59EFF06216F059A98F13B56F1F35D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * V_0 = NULL;
	CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * V_1 = NULL;
	{
		// if (0 < count && s_CachedInstance[count - 1].hash == hash)
		IL2CPP_RUNTIME_CLASS_INIT(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		int32_t L_0 = ((MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_StaticFields*)il2cpp_codegen_static_fields_for(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var))->get_count_2();
		if ((((int32_t)0) >= ((int32_t)L_0)))
		{
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A * L_1 = ((MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_StaticFields*)il2cpp_codegen_static_fields_for(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var))->get_s_CachedInstance_1();
		int32_t L_2 = ((MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_StaticFields*)il2cpp_codegen_static_fields_for(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var))->get_count_2();
		NullCheck(L_1);
		CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * L_3;
		L_3 = List_1_get_Item_m6F9722B9A4F59EFF06216F059A98F13B56F1F35D_inline(L_1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)), /*hidden argument*/List_1_get_Item_m6F9722B9A4F59EFF06216F059A98F13B56F1F35D_RuntimeMethod_var);
		NullCheck(L_3);
		int64_t L_4 = L_3->get_hash_1();
		int64_t L_5 = ___hash1;
		if ((!(((uint64_t)L_4) == ((uint64_t)L_5))))
		{
			goto IL_0033;
		}
	}
	{
		// return s_CachedInstance[count - 1];
		IL2CPP_RUNTIME_CLASS_INIT(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A * L_6 = ((MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_StaticFields*)il2cpp_codegen_static_fields_for(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var))->get_s_CachedInstance_1();
		int32_t L_7 = ((MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_StaticFields*)il2cpp_codegen_static_fields_for(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var))->get_count_2();
		NullCheck(L_6);
		CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * L_8;
		L_8 = List_1_get_Item_m6F9722B9A4F59EFF06216F059A98F13B56F1F35D_inline(L_6, ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)1)), /*hidden argument*/List_1_get_Item_m6F9722B9A4F59EFF06216F059A98F13B56F1F35D_RuntimeMethod_var);
		return L_8;
	}

IL_0033:
	{
		// if (s_CachedInstance.Count <= count)
		IL2CPP_RUNTIME_CLASS_INIT(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A * L_9 = ((MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_StaticFields*)il2cpp_codegen_static_fields_for(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var))->get_s_CachedInstance_1();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = List_1_get_Count_m4771A5EE25C154DEA876C4AF3D454F275922A771_inline(L_9, /*hidden argument*/List_1_get_Count_m4771A5EE25C154DEA876C4AF3D454F275922A771_RuntimeMethod_var);
		int32_t L_11 = ((MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_StaticFields*)il2cpp_codegen_static_fields_for(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var))->get_count_2();
		if ((((int32_t)L_10) > ((int32_t)L_11)))
		{
			goto IL_0055;
		}
	}
	{
		// var newInst = new CombineInstanceEx();
		CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * L_12 = (CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E *)il2cpp_codegen_object_new(CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E_il2cpp_TypeInfo_var);
		CombineInstanceEx__ctor_mB0BAA3DA9EF0ECEC635C7F1FBA73F60EBC3F86A8(L_12, /*hidden argument*/NULL);
		V_1 = L_12;
		// s_CachedInstance.Add(newInst);
		IL2CPP_RUNTIME_CLASS_INIT(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A * L_13 = ((MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_StaticFields*)il2cpp_codegen_static_fields_for(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var))->get_s_CachedInstance_1();
		CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * L_14 = V_1;
		NullCheck(L_13);
		List_1_Add_m94A297AF43A89F187AA7F2F7F2544999DFCDC4D1(L_13, L_14, /*hidden argument*/List_1_Add_m94A297AF43A89F187AA7F2F7F2544999DFCDC4D1_RuntimeMethod_var);
	}

IL_0055:
	{
		// var inst = s_CachedInstance[count];
		IL2CPP_RUNTIME_CLASS_INIT(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A * L_15 = ((MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_StaticFields*)il2cpp_codegen_static_fields_for(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var))->get_s_CachedInstance_1();
		int32_t L_16 = ((MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_StaticFields*)il2cpp_codegen_static_fields_for(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var))->get_count_2();
		NullCheck(L_15);
		CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * L_17;
		L_17 = List_1_get_Item_m6F9722B9A4F59EFF06216F059A98F13B56F1F35D_inline(L_15, L_16, /*hidden argument*/List_1_get_Item_m6F9722B9A4F59EFF06216F059A98F13B56F1F35D_RuntimeMethod_var);
		V_0 = L_17;
		// inst.hash = hash;
		CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * L_18 = V_0;
		int64_t L_19 = ___hash1;
		NullCheck(L_18);
		L_18->set_hash_1(L_19);
		// if (inst.index != -1) return inst;
		CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = L_20->get_index_2();
		if ((((int32_t)L_21) == ((int32_t)(-1))))
		{
			goto IL_0077;
		}
	}
	{
		// if (inst.index != -1) return inst;
		CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * L_22 = V_0;
		return L_22;
	}

IL_0077:
	{
		// inst.index = index;
		CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * L_23 = V_0;
		int32_t L_24 = ___index0;
		NullCheck(L_23);
		L_23->set_index_2(L_24);
		// count++;
		IL2CPP_RUNTIME_CLASS_INIT(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		int32_t L_25 = ((MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_StaticFields*)il2cpp_codegen_static_fields_for(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var))->get_count_2();
		((MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_StaticFields*)il2cpp_codegen_static_fields_for(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var))->set_count_2(((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1)));
		// return inst;
		CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * L_26 = V_0;
		return L_26;
	}
}
// UnityEngine.Mesh Coffee.UIParticleExtensions.MeshHelper::GetTemporaryMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * MeshHelper_GetTemporaryMesh_mF6A8895295BCCE34BC5A15B21810967A14DFDE5C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return MeshPool.Rent();
		IL2CPP_RUNTIME_CLASS_INIT(MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_il2cpp_TypeInfo_var);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_0;
		L_0 = MeshPool_Rent_m933858E92DC47D62ACB2DA8178F810D1B36FC322(/*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Coffee.UIParticleExtensions.MeshHelper::Push(System.Int32,System.Int64,UnityEngine.Mesh,UnityEngine.Matrix4x4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshHelper_Push_m796C5719F64A3A27C5C5BF8F146A307A91C60C76 (int32_t ___index0, int64_t ___hash1, Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh2, Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___transform3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m208C043761C61621F0BA9E59EDB2E88C94E0AA51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * V_0 = NULL;
	{
		// if (mesh.vertexCount <= 0)
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_0 = ___mesh2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Mesh_get_vertexCount_m1EF3DD16EE298B955311F53EA1CAF05007A7722F(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		// DiscardTemporaryMesh(mesh);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_2 = ___mesh2;
		IL2CPP_RUNTIME_CLASS_INIT(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		MeshHelper_DiscardTemporaryMesh_m21B64454950E1DC3D5E3A4E072C64436DD510274(L_2, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0010:
	{
		// var inst = Get(index, hash);
		int32_t L_3 = ___index0;
		int64_t L_4 = ___hash1;
		IL2CPP_RUNTIME_CLASS_INIT(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * L_5;
		L_5 = MeshHelper_Get_mCF90C8A9C906BFFA841C8824E004B98D58411436(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// inst.Push(mesh, transform);
		CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * L_6 = V_0;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_7 = ___mesh2;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_8 = ___transform3;
		NullCheck(L_6);
		CombineInstanceEx_Push_m2ADEAD8360533A3EC187DB74F6A7356EB7996505(L_6, L_7, L_8, /*hidden argument*/NULL);
		// activeMeshIndices[inst.index] = true;
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_9;
		L_9 = MeshHelper_get_activeMeshIndices_m6E866395890B87CD4AC987657DA66509592FB225_inline(/*hidden argument*/NULL);
		CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * L_10 = V_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_index_2();
		NullCheck(L_9);
		List_1_set_Item_m208C043761C61621F0BA9E59EDB2E88C94E0AA51(L_9, L_11, (bool)1, /*hidden argument*/List_1_set_Item_m208C043761C61621F0BA9E59EDB2E88C94E0AA51_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Coffee.UIParticleExtensions.MeshHelper::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshHelper_Clear_mBD6823C35D072FBF6D61B7CE4AF5D2DEAC6B6912 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m2D9B2AE14EAA49B9CD53037426644D4BA1A5FD35_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m9C4955A7BB9E2779D07D1025464DB59B8EDFE23E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m2B293FE9ED2E11EFBA638DC3B4B5AB211F85C41E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m099848ADBF5C4E55AF58C6CD892989DABB39C77E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mE2CC0234A84FD3EFAFCA830CB61D4953E8718E7C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t250018180E53D2193DBE84E32FBEF13F3EAE159C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// count = 0;
		IL2CPP_RUNTIME_CLASS_INIT(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		((MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_StaticFields*)il2cpp_codegen_static_fields_for(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var))->set_count_2(0);
		// activeMeshIndices.Clear();
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_0;
		L_0 = MeshHelper_get_activeMeshIndices_m6E866395890B87CD4AC987657DA66509592FB225_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_Clear_m099848ADBF5C4E55AF58C6CD892989DABB39C77E(L_0, /*hidden argument*/List_1_Clear_m099848ADBF5C4E55AF58C6CD892989DABB39C77E_RuntimeMethod_var);
		// foreach (var inst in s_CachedInstance)
		List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A * L_1 = ((MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_StaticFields*)il2cpp_codegen_static_fields_for(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var))->get_s_CachedInstance_1();
		NullCheck(L_1);
		Enumerator_t250018180E53D2193DBE84E32FBEF13F3EAE159C  L_2;
		L_2 = List_1_GetEnumerator_mE2CC0234A84FD3EFAFCA830CB61D4953E8718E7C(L_1, /*hidden argument*/List_1_GetEnumerator_mE2CC0234A84FD3EFAFCA830CB61D4953E8718E7C_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_001b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0029;
		}

IL_001d:
		{
			// foreach (var inst in s_CachedInstance)
			CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * L_3;
			L_3 = Enumerator_get_Current_m2B293FE9ED2E11EFBA638DC3B4B5AB211F85C41E_inline((Enumerator_t250018180E53D2193DBE84E32FBEF13F3EAE159C *)(&V_0), /*hidden argument*/Enumerator_get_Current_m2B293FE9ED2E11EFBA638DC3B4B5AB211F85C41E_RuntimeMethod_var);
			// inst.Clear();
			NullCheck(L_3);
			CombineInstanceEx_Clear_m750F47BDB31141810646C7BCA5E39B28DF878D37(L_3, /*hidden argument*/NULL);
		}

IL_0029:
		{
			// foreach (var inst in s_CachedInstance)
			bool L_4;
			L_4 = Enumerator_MoveNext_m9C4955A7BB9E2779D07D1025464DB59B8EDFE23E((Enumerator_t250018180E53D2193DBE84E32FBEF13F3EAE159C *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m9C4955A7BB9E2779D07D1025464DB59B8EDFE23E_RuntimeMethod_var);
			if (L_4)
			{
				goto IL_001d;
			}
		}

IL_0032:
		{
			IL2CPP_LEAVE(0x42, FINALLY_0034);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0034;
	}

FINALLY_0034:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m2D9B2AE14EAA49B9CD53037426644D4BA1A5FD35((Enumerator_t250018180E53D2193DBE84E32FBEF13F3EAE159C *)(&V_0), /*hidden argument*/Enumerator_Dispose_m2D9B2AE14EAA49B9CD53037426644D4BA1A5FD35_RuntimeMethod_var);
		IL2CPP_END_FINALLY(52)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(52)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x42, IL_0042)
	}

IL_0042:
	{
		// }
		return;
	}
}
// System.Void Coffee.UIParticleExtensions.MeshHelper::CombineMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshHelper_CombineMesh_mD63A256D9888B45713B7E6FA7677163A30F46C59 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___result0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CombineInstanceArrayPool_t13D673FAA6CDC2996CB9628491E571DBF55634E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6F9722B9A4F59EFF06216F059A98F13B56F1F35D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (count == 0) return;
		IL2CPP_RUNTIME_CLASS_INIT(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		int32_t L_0 = ((MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_StaticFields*)il2cpp_codegen_static_fields_for(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var))->get_count_2();
		if (L_0)
		{
			goto IL_0008;
		}
	}
	{
		// if (count == 0) return;
		return;
	}

IL_0008:
	{
		// for (var i = 0; i < count; i++)
		V_1 = 0;
		goto IL_0020;
	}

IL_000c:
	{
		// s_CachedInstance[i].Combine();
		IL2CPP_RUNTIME_CLASS_INIT(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A * L_1 = ((MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_StaticFields*)il2cpp_codegen_static_fields_for(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var))->get_s_CachedInstance_1();
		int32_t L_2 = V_1;
		NullCheck(L_1);
		CombineInstanceEx_t4095DECE600A1E27D9D540CB91347FF215A3B80E * L_3;
		L_3 = List_1_get_Item_m6F9722B9A4F59EFF06216F059A98F13B56F1F35D_inline(L_1, L_2, /*hidden argument*/List_1_get_Item_m6F9722B9A4F59EFF06216F059A98F13B56F1F35D_RuntimeMethod_var);
		NullCheck(L_3);
		CombineInstanceEx_Combine_m081513E02EC4774345327357861F0F5FA98BF79C(L_3, /*hidden argument*/NULL);
		// for (var i = 0; i < count; i++)
		int32_t L_4 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_0020:
	{
		// for (var i = 0; i < count; i++)
		int32_t L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		int32_t L_6 = ((MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_StaticFields*)il2cpp_codegen_static_fields_for(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var))->get_count_2();
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_000c;
		}
	}
	{
		// var cis = CombineInstanceArrayPool.Get(s_CachedInstance, count);
		IL2CPP_RUNTIME_CLASS_INIT(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		List_1_tB1ADDD10B7514ED172641994BCB07BCEF0719A9A * L_7 = ((MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_StaticFields*)il2cpp_codegen_static_fields_for(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var))->get_s_CachedInstance_1();
		int32_t L_8 = ((MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_StaticFields*)il2cpp_codegen_static_fields_for(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var))->get_count_2();
		IL2CPP_RUNTIME_CLASS_INIT(CombineInstanceArrayPool_t13D673FAA6CDC2996CB9628491E571DBF55634E2_il2cpp_TypeInfo_var);
		CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* L_9;
		L_9 = CombineInstanceArrayPool_Get_m526CC4E5AF012BC876558348D72F6C450C405008(L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// result.CombineMeshes(cis, false, true);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_10 = ___result0;
		CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* L_11 = V_0;
		NullCheck(L_10);
		Mesh_CombineMeshes_m406030E08EC44C147C6F0CC46E26F82A7255FB6E(L_10, L_11, (bool)0, (bool)1, /*hidden argument*/NULL);
		// cis.Clear();
		CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* L_12 = V_0;
		MeshExtensions_Clear_m0ACA76314A298EFF9A733BBE2CDC4A71046EC377(L_12, /*hidden argument*/NULL);
		// result.RecalculateBounds();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_13 = ___result0;
		NullCheck(L_13);
		Mesh_RecalculateBounds_mC39556595CFE3E4D8EFA777476ECD22B97FC2737(L_13, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Coffee.UIParticleExtensions.MeshHelper::DiscardTemporaryMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshHelper_DiscardTemporaryMesh_m21B64454950E1DC3D5E3A4E072C64436DD510274 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MeshPool.Return(mesh);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_0 = ___mesh0;
		IL2CPP_RUNTIME_CLASS_INIT(MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_il2cpp_TypeInfo_var);
		MeshPool_Return_m6A14627D2C7C9498CA6B6C6CD22370B0A0D7559E(L_0, /*hidden argument*/NULL);
		// }
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
// System.Void Coffee.UIParticleExtensions.MeshPool::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshPool_Init_mF660DF2AC3199488B36538CC265AFDD648F39BAF (const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Coffee.UIParticleExtensions.MeshPool::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshPool__cctor_m6E676151E2C2D66A54224269703A95E24A9DFCA5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mBA8BA1E2EE63D6BFF50F9483EC5F281CF2F45920_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m9B21BAAD4C19CA98ED32C01B726F2582CBA60B77_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m1CBA5E24B493ACFFF6467F328233B7278FC58C42_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m242356D2EDC78CAD2B67D5AB9995E7F173A8DE3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t9B0A1D93361238182708268525DABDC931439A17_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * V_1 = NULL;
	{
		// private static readonly Stack<Mesh> s_Pool = new Stack<Mesh>(32);
		Stack_1_t9B0A1D93361238182708268525DABDC931439A17 * L_0 = (Stack_1_t9B0A1D93361238182708268525DABDC931439A17 *)il2cpp_codegen_object_new(Stack_1_t9B0A1D93361238182708268525DABDC931439A17_il2cpp_TypeInfo_var);
		Stack_1__ctor_m242356D2EDC78CAD2B67D5AB9995E7F173A8DE3D(L_0, ((int32_t)32), /*hidden argument*/Stack_1__ctor_m242356D2EDC78CAD2B67D5AB9995E7F173A8DE3D_RuntimeMethod_var);
		((MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_StaticFields*)il2cpp_codegen_static_fields_for(MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_il2cpp_TypeInfo_var))->set_s_Pool_0(L_0);
		// private static readonly HashSet<int> s_HashPool = new HashSet<int>();
		HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * L_1 = (HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 *)il2cpp_codegen_object_new(HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m9B21BAAD4C19CA98ED32C01B726F2582CBA60B77(L_1, /*hidden argument*/HashSet_1__ctor_m9B21BAAD4C19CA98ED32C01B726F2582CBA60B77_RuntimeMethod_var);
		((MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_StaticFields*)il2cpp_codegen_static_fields_for(MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_il2cpp_TypeInfo_var))->set_s_HashPool_1(L_1);
		// for (var i = 0; i < 32; i++)
		V_0 = 0;
		goto IL_0046;
	}

IL_001a:
	{
		// var m = new Mesh();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_2 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)il2cpp_codegen_object_new(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		// m.MarkDynamic();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_3 = V_1;
		NullCheck(L_3);
		Mesh_MarkDynamic_m11FFDC281C64F11C36EDDA47BC132EAC95082999(L_3, /*hidden argument*/NULL);
		// s_Pool.Push(m);
		Stack_1_t9B0A1D93361238182708268525DABDC931439A17 * L_4 = ((MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_StaticFields*)il2cpp_codegen_static_fields_for(MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_il2cpp_TypeInfo_var))->get_s_Pool_0();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_5 = V_1;
		NullCheck(L_4);
		Stack_1_Push_m1CBA5E24B493ACFFF6467F328233B7278FC58C42(L_4, L_5, /*hidden argument*/Stack_1_Push_m1CBA5E24B493ACFFF6467F328233B7278FC58C42_RuntimeMethod_var);
		// s_HashPool.Add(m.GetInstanceID());
		HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * L_6 = ((MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_StaticFields*)il2cpp_codegen_static_fields_for(MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_il2cpp_TypeInfo_var))->get_s_HashPool_1();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_9;
		L_9 = HashSet_1_Add_mBA8BA1E2EE63D6BFF50F9483EC5F281CF2F45920(L_6, L_8, /*hidden argument*/HashSet_1_Add_mBA8BA1E2EE63D6BFF50F9483EC5F281CF2F45920_RuntimeMethod_var);
		// for (var i = 0; i < 32; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0046:
	{
		// for (var i = 0; i < 32; i++)
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)32))))
		{
			goto IL_001a;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Mesh Coffee.UIParticleExtensions.MeshPool::Rent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * MeshPool_Rent_m933858E92DC47D62ACB2DA8178F810D1B36FC322 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Remove_m166ED666B4C5E879ACED5F85C2FF6D10C9A52F74_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m2D7A13FCFD0DC5B184536CBC69B67A1BE7640DA9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m6A63DFAFC39156A894BD3CCE397821CC04CA836E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * V_0 = NULL;
	{
		goto IL_0028;
	}

IL_0002:
	{
		// m = s_Pool.Pop();
		IL2CPP_RUNTIME_CLASS_INIT(MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_il2cpp_TypeInfo_var);
		Stack_1_t9B0A1D93361238182708268525DABDC931439A17 * L_0 = ((MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_StaticFields*)il2cpp_codegen_static_fields_for(MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_il2cpp_TypeInfo_var))->get_s_Pool_0();
		NullCheck(L_0);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_1;
		L_1 = Stack_1_Pop_m2D7A13FCFD0DC5B184536CBC69B67A1BE7640DA9(L_0, /*hidden argument*/Stack_1_Pop_m2D7A13FCFD0DC5B184536CBC69B67A1BE7640DA9_RuntimeMethod_var);
		V_0 = L_1;
		// if (m)
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// s_HashPool.Remove(m.GetInstanceID());
		IL2CPP_RUNTIME_CLASS_INIT(MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_il2cpp_TypeInfo_var);
		HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * L_4 = ((MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_StaticFields*)il2cpp_codegen_static_fields_for(MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_il2cpp_TypeInfo_var))->get_s_HashPool_1();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_7;
		L_7 = HashSet_1_Remove_m166ED666B4C5E879ACED5F85C2FF6D10C9A52F74(L_4, L_6, /*hidden argument*/HashSet_1_Remove_m166ED666B4C5E879ACED5F85C2FF6D10C9A52F74_RuntimeMethod_var);
		// return m;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_8 = V_0;
		return L_8;
	}

IL_0028:
	{
		// while (0 < s_Pool.Count)
		IL2CPP_RUNTIME_CLASS_INIT(MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_il2cpp_TypeInfo_var);
		Stack_1_t9B0A1D93361238182708268525DABDC931439A17 * L_9 = ((MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_StaticFields*)il2cpp_codegen_static_fields_for(MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_il2cpp_TypeInfo_var))->get_s_Pool_0();
		NullCheck(L_9);
		int32_t L_10;
		L_10 = Stack_1_get_Count_m6A63DFAFC39156A894BD3CCE397821CC04CA836E_inline(L_9, /*hidden argument*/Stack_1_get_Count_m6A63DFAFC39156A894BD3CCE397821CC04CA836E_RuntimeMethod_var);
		if ((((int32_t)0) < ((int32_t)L_10)))
		{
			goto IL_0002;
		}
	}
	{
		// m = new Mesh();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_11 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)il2cpp_codegen_object_new(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6(L_11, /*hidden argument*/NULL);
		V_0 = L_11;
		// m.MarkDynamic();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_12 = V_0;
		NullCheck(L_12);
		Mesh_MarkDynamic_m11FFDC281C64F11C36EDDA47BC132EAC95082999(L_12, /*hidden argument*/NULL);
		// return m;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_13 = V_0;
		return L_13;
	}
}
// System.Void Coffee.UIParticleExtensions.MeshPool::Return(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshPool_Return_m6A14627D2C7C9498CA6B6C6CD22370B0A0D7559E (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___mesh0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_mBA8BA1E2EE63D6BFF50F9483EC5F281CF2F45920_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Contains_m90455A5864CF4193E243B3DF80D0366956FD48E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m1CBA5E24B493ACFFF6467F328233B7278FC58C42_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (!mesh) return;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_0 = ___mesh0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		// if (!mesh) return;
		return;
	}

IL_0009:
	{
		// var id = mesh.GetInstanceID();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_2 = ___mesh0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (s_HashPool.Contains(id)) return;
		IL2CPP_RUNTIME_CLASS_INIT(MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_il2cpp_TypeInfo_var);
		HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * L_4 = ((MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_StaticFields*)il2cpp_codegen_static_fields_for(MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_il2cpp_TypeInfo_var))->get_s_HashPool_1();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		bool L_6;
		L_6 = HashSet_1_Contains_m90455A5864CF4193E243B3DF80D0366956FD48E8(L_4, L_5, /*hidden argument*/HashSet_1_Contains_m90455A5864CF4193E243B3DF80D0366956FD48E8_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_001e;
		}
	}
	{
		// if (s_HashPool.Contains(id)) return;
		return;
	}

IL_001e:
	{
		// mesh.Clear(false);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_7 = ___mesh0;
		NullCheck(L_7);
		Mesh_Clear_mD35FF3850B83B635DA849033E25D0D718E34D92B(L_7, (bool)0, /*hidden argument*/NULL);
		// s_Pool.Push(mesh);
		IL2CPP_RUNTIME_CLASS_INIT(MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_il2cpp_TypeInfo_var);
		Stack_1_t9B0A1D93361238182708268525DABDC931439A17 * L_8 = ((MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_StaticFields*)il2cpp_codegen_static_fields_for(MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_il2cpp_TypeInfo_var))->get_s_Pool_0();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_9 = ___mesh0;
		NullCheck(L_8);
		Stack_1_Push_m1CBA5E24B493ACFFF6467F328233B7278FC58C42(L_8, L_9, /*hidden argument*/Stack_1_Push_m1CBA5E24B493ACFFF6467F328233B7278FC58C42_RuntimeMethod_var);
		// s_HashPool.Add(id);
		HashSet_1_tF187707BD5564B6808CE30721FBC083F00B385E5 * L_10 = ((MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_StaticFields*)il2cpp_codegen_static_fields_for(MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_il2cpp_TypeInfo_var))->get_s_HashPool_1();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		bool L_12;
		L_12 = HashSet_1_Add_mBA8BA1E2EE63D6BFF50F9483EC5F281CF2F45920(L_10, L_11, /*hidden argument*/HashSet_1_Add_mBA8BA1E2EE63D6BFF50F9483EC5F281CF2F45920_RuntimeMethod_var);
		// }
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
// UnityEngine.Material Coffee.UIParticleExtensions.ModifiedMaterial::Add(UnityEngine.Material,UnityEngine.Texture,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * ModifiedMaterial_Add_mF7D0D18F25ED663C544D586D4A172D437F82843C (Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___baseMat0, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___texture1, int32_t ___id2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m72E02E882488482876D83617E79085CF92557957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1F09162EE29C285E04352BAA41B6DF15F2445862_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m176BBCF7B77DAAE4B11DB833081BF12EB14605D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModifiedMaterial_t035B918924C47AEE757A8D0897C6EF8EFF782EE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// for (var i = 0; i < s_Entries.Count; ++i)
		V_1 = 0;
		goto IL_004e;
	}

IL_0004:
	{
		// e = s_Entries[i];
		IL2CPP_RUNTIME_CLASS_INIT(ModifiedMaterial_t035B918924C47AEE757A8D0897C6EF8EFF782EE7_il2cpp_TypeInfo_var);
		List_1_t8EFCAFAE60F257CBDEA4CF1BEEFF376201A30B03 * L_0 = ((ModifiedMaterial_t035B918924C47AEE757A8D0897C6EF8EFF782EE7_StaticFields*)il2cpp_codegen_static_fields_for(ModifiedMaterial_t035B918924C47AEE757A8D0897C6EF8EFF782EE7_il2cpp_TypeInfo_var))->get_s_Entries_0();
		int32_t L_1 = V_1;
		NullCheck(L_0);
		MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143 * L_2;
		L_2 = List_1_get_Item_m176BBCF7B77DAAE4B11DB833081BF12EB14605D8_inline(L_0, L_1, /*hidden argument*/List_1_get_Item_m176BBCF7B77DAAE4B11DB833081BF12EB14605D8_RuntimeMethod_var);
		V_0 = L_2;
		// if (e.baseMat != baseMat || e.texture != texture || e.id != id) continue;
		MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143 * L_3 = V_0;
		NullCheck(L_3);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4 = L_3->get_baseMat_0();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_5 = ___baseMat0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_4, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_004a;
		}
	}
	{
		MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143 * L_7 = V_0;
		NullCheck(L_7);
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_8 = L_7->get_texture_3();
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_9 = ___texture1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_8, L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_004a;
		}
	}
	{
		MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143 * L_11 = V_0;
		NullCheck(L_11);
		int32_t L_12 = L_11->get_id_4();
		int32_t L_13 = ___id2;
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_004a;
		}
	}
	{
		// ++e.count;
		MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143 * L_14 = V_0;
		MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143 * L_15 = L_14;
		NullCheck(L_15);
		int32_t L_16 = L_15->get_count_2();
		NullCheck(L_15);
		L_15->set_count_2(((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)));
		// return e.customMat;
		MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143 * L_17 = V_0;
		NullCheck(L_17);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_18 = L_17->get_customMat_1();
		return L_18;
	}

IL_004a:
	{
		// for (var i = 0; i < s_Entries.Count; ++i)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_004e:
	{
		// for (var i = 0; i < s_Entries.Count; ++i)
		int32_t L_20 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(ModifiedMaterial_t035B918924C47AEE757A8D0897C6EF8EFF782EE7_il2cpp_TypeInfo_var);
		List_1_t8EFCAFAE60F257CBDEA4CF1BEEFF376201A30B03 * L_21 = ((ModifiedMaterial_t035B918924C47AEE757A8D0897C6EF8EFF782EE7_StaticFields*)il2cpp_codegen_static_fields_for(ModifiedMaterial_t035B918924C47AEE757A8D0897C6EF8EFF782EE7_il2cpp_TypeInfo_var))->get_s_Entries_0();
		NullCheck(L_21);
		int32_t L_22;
		L_22 = List_1_get_Count_m1F09162EE29C285E04352BAA41B6DF15F2445862_inline(L_21, /*hidden argument*/List_1_get_Count_m1F09162EE29C285E04352BAA41B6DF15F2445862_RuntimeMethod_var);
		if ((((int32_t)L_20) < ((int32_t)L_22)))
		{
			goto IL_0004;
		}
	}
	{
		// e = new MatEntry();
		MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143 * L_23 = (MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143 *)il2cpp_codegen_object_new(MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143_il2cpp_TypeInfo_var);
		MatEntry__ctor_m36A3B61203F0FEB8AAD0A20DF331D2E41F2EBC45(L_23, /*hidden argument*/NULL);
		V_0 = L_23;
		// e.count = 1;
		MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143 * L_24 = V_0;
		NullCheck(L_24);
		L_24->set_count_2(1);
		// e.baseMat = baseMat;
		MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143 * L_25 = V_0;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26 = ___baseMat0;
		NullCheck(L_25);
		L_25->set_baseMat_0(L_26);
		// e.texture = texture;
		MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143 * L_27 = V_0;
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_28 = ___texture1;
		NullCheck(L_27);
		L_27->set_texture_3(L_28);
		// e.id = id;
		MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143 * L_29 = V_0;
		int32_t L_30 = ___id2;
		NullCheck(L_29);
		L_29->set_id_4(L_30);
		// e.customMat = new Material(baseMat);
		MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143 * L_31 = V_0;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_32 = ___baseMat0;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_33 = (Material_t8927C00353A72755313F046D0CE85178AE8218EE *)il2cpp_codegen_object_new(Material_t8927C00353A72755313F046D0CE85178AE8218EE_il2cpp_TypeInfo_var);
		Material__ctor_mD0C3D9CFAFE0FB858D864092467387D7FA178245(L_33, L_32, /*hidden argument*/NULL);
		NullCheck(L_31);
		L_31->set_customMat_1(L_33);
		// e.customMat.hideFlags = HideFlags.HideAndDontSave;
		MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143 * L_34 = V_0;
		NullCheck(L_34);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_35 = L_34->get_customMat_1();
		NullCheck(L_35);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_35, ((int32_t)61), /*hidden argument*/NULL);
		// if (texture)
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_36 = ___texture1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_37;
		L_37 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_36, /*hidden argument*/NULL);
		if (!L_37)
		{
			goto IL_00aa;
		}
	}
	{
		// e.customMat.mainTexture = texture;
		MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143 * L_38 = V_0;
		NullCheck(L_38);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_39 = L_38->get_customMat_1();
		Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * L_40 = ___texture1;
		NullCheck(L_39);
		Material_set_mainTexture_m1F715422BE5C75B4A7AC951691F0DC16A8C294C5(L_39, L_40, /*hidden argument*/NULL);
	}

IL_00aa:
	{
		// s_Entries.Add(e);
		IL2CPP_RUNTIME_CLASS_INIT(ModifiedMaterial_t035B918924C47AEE757A8D0897C6EF8EFF782EE7_il2cpp_TypeInfo_var);
		List_1_t8EFCAFAE60F257CBDEA4CF1BEEFF376201A30B03 * L_41 = ((ModifiedMaterial_t035B918924C47AEE757A8D0897C6EF8EFF782EE7_StaticFields*)il2cpp_codegen_static_fields_for(ModifiedMaterial_t035B918924C47AEE757A8D0897C6EF8EFF782EE7_il2cpp_TypeInfo_var))->get_s_Entries_0();
		MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143 * L_42 = V_0;
		NullCheck(L_41);
		List_1_Add_m72E02E882488482876D83617E79085CF92557957(L_41, L_42, /*hidden argument*/List_1_Add_m72E02E882488482876D83617E79085CF92557957_RuntimeMethod_var);
		// return e.customMat;
		MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143 * L_43 = V_0;
		NullCheck(L_43);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_44 = L_43->get_customMat_1();
		return L_44;
	}
}
// System.Void Coffee.UIParticleExtensions.ModifiedMaterial::Remove(UnityEngine.Material)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModifiedMaterial_Remove_mC5A4773C7C17AFFCD0567F3BEB88C46C26A47E6D (Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___customMat0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mA9639AE7F375EF7A7B504939A97139429A63AF80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m1F09162EE29C285E04352BAA41B6DF15F2445862_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m176BBCF7B77DAAE4B11DB833081BF12EB14605D8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModifiedMaterial_t035B918924C47AEE757A8D0897C6EF8EFF782EE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143 * V_1 = NULL;
	int32_t V_2 = 0;
	{
		// if (!customMat) return;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_0 = ___customMat0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		// if (!customMat) return;
		return;
	}

IL_0009:
	{
		// for (var i = 0; i < s_Entries.Count; ++i)
		V_0 = 0;
		goto IL_0063;
	}

IL_000d:
	{
		// var e = s_Entries[i];
		IL2CPP_RUNTIME_CLASS_INIT(ModifiedMaterial_t035B918924C47AEE757A8D0897C6EF8EFF782EE7_il2cpp_TypeInfo_var);
		List_1_t8EFCAFAE60F257CBDEA4CF1BEEFF376201A30B03 * L_2 = ((ModifiedMaterial_t035B918924C47AEE757A8D0897C6EF8EFF782EE7_StaticFields*)il2cpp_codegen_static_fields_for(ModifiedMaterial_t035B918924C47AEE757A8D0897C6EF8EFF782EE7_il2cpp_TypeInfo_var))->get_s_Entries_0();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143 * L_4;
		L_4 = List_1_get_Item_m176BBCF7B77DAAE4B11DB833081BF12EB14605D8_inline(L_2, L_3, /*hidden argument*/List_1_get_Item_m176BBCF7B77DAAE4B11DB833081BF12EB14605D8_RuntimeMethod_var);
		V_1 = L_4;
		// if (e.customMat != customMat) continue;
		MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143 * L_5 = V_1;
		NullCheck(L_5);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_6 = L_5->get_customMat_1();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = ___customMat0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, L_7, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_005f;
		}
	}
	{
		// if (--e.count == 0)
		MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143 * L_9 = V_1;
		MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143 * L_10 = L_9;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_count_2();
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)1));
		int32_t L_12 = V_2;
		NullCheck(L_10);
		L_10->set_count_2(L_12);
		int32_t L_13 = V_2;
		if (L_13)
		{
			goto IL_0070;
		}
	}
	{
		// DestroyImmediate(e.customMat);
		MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143 * L_14 = V_1;
		NullCheck(L_14);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_15 = L_14->get_customMat_1();
		IL2CPP_RUNTIME_CLASS_INIT(ModifiedMaterial_t035B918924C47AEE757A8D0897C6EF8EFF782EE7_il2cpp_TypeInfo_var);
		ModifiedMaterial_DestroyImmediate_m4821F141230826F641E81F97312687AA9DD84C57(L_15, /*hidden argument*/NULL);
		// e.baseMat = null;
		MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143 * L_16 = V_1;
		NullCheck(L_16);
		L_16->set_baseMat_0((Material_t8927C00353A72755313F046D0CE85178AE8218EE *)NULL);
		// e.texture = null;
		MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143 * L_17 = V_1;
		NullCheck(L_17);
		L_17->set_texture_3((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)NULL);
		// s_Entries.RemoveAt(i);
		List_1_t8EFCAFAE60F257CBDEA4CF1BEEFF376201A30B03 * L_18 = ((ModifiedMaterial_t035B918924C47AEE757A8D0897C6EF8EFF782EE7_StaticFields*)il2cpp_codegen_static_fields_for(ModifiedMaterial_t035B918924C47AEE757A8D0897C6EF8EFF782EE7_il2cpp_TypeInfo_var))->get_s_Entries_0();
		int32_t L_19 = V_0;
		NullCheck(L_18);
		List_1_RemoveAt_mA9639AE7F375EF7A7B504939A97139429A63AF80(L_18, L_19, /*hidden argument*/List_1_RemoveAt_mA9639AE7F375EF7A7B504939A97139429A63AF80_RuntimeMethod_var);
		// break;
		return;
	}

IL_005f:
	{
		// for (var i = 0; i < s_Entries.Count; ++i)
		int32_t L_20 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0063:
	{
		// for (var i = 0; i < s_Entries.Count; ++i)
		int32_t L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ModifiedMaterial_t035B918924C47AEE757A8D0897C6EF8EFF782EE7_il2cpp_TypeInfo_var);
		List_1_t8EFCAFAE60F257CBDEA4CF1BEEFF376201A30B03 * L_22 = ((ModifiedMaterial_t035B918924C47AEE757A8D0897C6EF8EFF782EE7_StaticFields*)il2cpp_codegen_static_fields_for(ModifiedMaterial_t035B918924C47AEE757A8D0897C6EF8EFF782EE7_il2cpp_TypeInfo_var))->get_s_Entries_0();
		NullCheck(L_22);
		int32_t L_23;
		L_23 = List_1_get_Count_m1F09162EE29C285E04352BAA41B6DF15F2445862_inline(L_22, /*hidden argument*/List_1_get_Count_m1F09162EE29C285E04352BAA41B6DF15F2445862_RuntimeMethod_var);
		if ((((int32_t)L_21) < ((int32_t)L_23)))
		{
			goto IL_000d;
		}
	}

IL_0070:
	{
		// }
		return;
	}
}
// System.Void Coffee.UIParticleExtensions.ModifiedMaterial::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModifiedMaterial_DestroyImmediate_m4821F141230826F641E81F97312687AA9DD84C57 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!obj) return;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		// if (!obj) return;
		return;
	}

IL_0009:
	{
		// if (Application.isEditor)
		bool L_2;
		L_2 = Application_get_isEditor_m7367DDB72F13E4846E8EB76FFAAACA84840BE921(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		// Object.DestroyImmediate(obj);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_3 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_3, /*hidden argument*/NULL);
		return;
	}

IL_0017:
	{
		// Object.Destroy(obj);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_4 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Coffee.UIParticleExtensions.ModifiedMaterial::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModifiedMaterial__ctor_m2E3D58F8B079A90000E56340B447111D90C0ABDC (ModifiedMaterial_t035B918924C47AEE757A8D0897C6EF8EFF782EE7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Coffee.UIParticleExtensions.ModifiedMaterial::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModifiedMaterial__cctor_m6146710EA27744B8B6B2B928A491532B08DA5EE9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9547905C9B84B4FC18BBD1612EDD958836BD4420_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t8EFCAFAE60F257CBDEA4CF1BEEFF376201A30B03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModifiedMaterial_t035B918924C47AEE757A8D0897C6EF8EFF782EE7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly List<MatEntry> s_Entries = new List<MatEntry>();
		List_1_t8EFCAFAE60F257CBDEA4CF1BEEFF376201A30B03 * L_0 = (List_1_t8EFCAFAE60F257CBDEA4CF1BEEFF376201A30B03 *)il2cpp_codegen_object_new(List_1_t8EFCAFAE60F257CBDEA4CF1BEEFF376201A30B03_il2cpp_TypeInfo_var);
		List_1__ctor_m9547905C9B84B4FC18BBD1612EDD958836BD4420(L_0, /*hidden argument*/List_1__ctor_m9547905C9B84B4FC18BBD1612EDD958836BD4420_RuntimeMethod_var);
		((ModifiedMaterial_t035B918924C47AEE757A8D0897C6EF8EFF782EE7_StaticFields*)il2cpp_codegen_static_fields_for(ModifiedMaterial_t035B918924C47AEE757A8D0897C6EF8EFF782EE7_il2cpp_TypeInfo_var))->set_s_Entries_0(L_0);
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
// System.Void Coffee.UIParticleExtensions.ParticleSystemExtensions::SortForRendering(System.Collections.Generic.List`1<UnityEngine.ParticleSystem>,UnityEngine.Transform,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystemExtensions_SortForRendering_m816138288A23F920DFA67E6CF327D97D775C84BF (List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * ___self0, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___transform1, bool ___sortByMaterial2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1__ctor_m0E65C2A306623C841A061C4330F69FF738D5341E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Comparison_1_tF57F49CF96CEC329DB3C15911D3B5B784133A008_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Sort_m7E0AFBB3DA1676E64DB175B3E45A37525022133D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CSortForRenderingU3Eb__0_m48956996D3FB13708AB0AC8A06D49A369D232ED7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_t410A51546B9C637DD1CE839ED94804B7C5005A80_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_t410A51546B9C637DD1CE839ED94804B7C5005A80 * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass0_0_t410A51546B9C637DD1CE839ED94804B7C5005A80 * L_0 = (U3CU3Ec__DisplayClass0_0_t410A51546B9C637DD1CE839ED94804B7C5005A80 *)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_t410A51546B9C637DD1CE839ED94804B7C5005A80_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass0_0__ctor_mC35DF534F3069DC5232DB150FDC2AD6841D249EE(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_0_t410A51546B9C637DD1CE839ED94804B7C5005A80 * L_1 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2 = ___transform1;
		NullCheck(L_1);
		L_1->set_transform_0(L_2);
		U3CU3Ec__DisplayClass0_0_t410A51546B9C637DD1CE839ED94804B7C5005A80 * L_3 = V_0;
		bool L_4 = ___sortByMaterial2;
		NullCheck(L_3);
		L_3->set_sortByMaterial_1(L_4);
		U3CU3Ec__DisplayClass0_0_t410A51546B9C637DD1CE839ED94804B7C5005A80 * L_5 = V_0;
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_6 = ___self0;
		NullCheck(L_5);
		L_5->set_self_2(L_6);
		// self.Sort((a, b) =>
		// {
		//     var tr = transform;
		//     var aRenderer = a.GetComponent<ParticleSystemRenderer>();
		//     var bRenderer = b.GetComponent<ParticleSystemRenderer>();
		// 
		//     // Render queue: ascending
		//     var aMat = aRenderer.sharedMaterial ?? aRenderer.trailMaterial;
		//     var bMat = bRenderer.sharedMaterial ?? bRenderer.trailMaterial;
		//     if (!aMat && !bMat) return 0;
		//     if (!aMat) return -1;
		//     if (!bMat) return 1;
		// 
		//     if (sortByMaterial)
		//         return aMat.GetInstanceID() - bMat.GetInstanceID();
		// 
		//     if (aMat.renderQueue != bMat.renderQueue)
		//         return aMat.renderQueue - bMat.renderQueue;
		// 
		//     // Sorting layer: ascending
		//     if (aRenderer.sortingLayerID != bRenderer.sortingLayerID)
		//         return aRenderer.sortingLayerID - bRenderer.sortingLayerID;
		// 
		//     // Sorting order: ascending
		//     if (aRenderer.sortingOrder != bRenderer.sortingOrder)
		//         return aRenderer.sortingOrder - bRenderer.sortingOrder;
		// 
		//     // Z position & sortingFudge: descending
		//     var aTransform = a.transform;
		//     var bTransform = b.transform;
		//     var aPos = tr.InverseTransformPoint(aTransform.position).z + aRenderer.sortingFudge;
		//     var bPos = tr.InverseTransformPoint(bTransform.position).z + bRenderer.sortingFudge;
		//     if (!Mathf.Approximately(aPos, bPos))
		//         return (int) Mathf.Sign(bPos - aPos);
		// 
		//     return (int) Mathf.Sign(GetIndex(self, a) - GetIndex(self, b));
		// });
		U3CU3Ec__DisplayClass0_0_t410A51546B9C637DD1CE839ED94804B7C5005A80 * L_7 = V_0;
		NullCheck(L_7);
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_8 = L_7->get_self_2();
		U3CU3Ec__DisplayClass0_0_t410A51546B9C637DD1CE839ED94804B7C5005A80 * L_9 = V_0;
		Comparison_1_tF57F49CF96CEC329DB3C15911D3B5B784133A008 * L_10 = (Comparison_1_tF57F49CF96CEC329DB3C15911D3B5B784133A008 *)il2cpp_codegen_object_new(Comparison_1_tF57F49CF96CEC329DB3C15911D3B5B784133A008_il2cpp_TypeInfo_var);
		Comparison_1__ctor_m0E65C2A306623C841A061C4330F69FF738D5341E(L_10, L_9, (intptr_t)((intptr_t)U3CU3Ec__DisplayClass0_0_U3CSortForRenderingU3Eb__0_m48956996D3FB13708AB0AC8A06D49A369D232ED7_RuntimeMethod_var), /*hidden argument*/Comparison_1__ctor_m0E65C2A306623C841A061C4330F69FF738D5341E_RuntimeMethod_var);
		NullCheck(L_8);
		List_1_Sort_m7E0AFBB3DA1676E64DB175B3E45A37525022133D(L_8, L_10, /*hidden argument*/List_1_Sort_m7E0AFBB3DA1676E64DB175B3E45A37525022133D_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Int32 Coffee.UIParticleExtensions.ParticleSystemExtensions::GetIndex(System.Collections.Generic.IList`1<UnityEngine.ParticleSystem>,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParticleSystemExtensions_GetIndex_mE6E34A8F45D6833DB06D66CABE37194DC8911732 (RuntimeObject* ___list0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___ps1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tD81B558EAB7EDCD37929FCB48540D2F6A3A551A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t10DACFED13F923CF5C340ADDFC029F4554FF4F7E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// for (var i = 0; i < list.Count; i++)
		V_0 = 0;
		goto IL_001e;
	}

IL_0004:
	{
		// if (list[i].GetInstanceID() == ps.GetInstanceID()) return i;
		RuntimeObject* L_0 = ___list0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_2;
		L_2 = InterfaceFuncInvoker1< ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<UnityEngine.ParticleSystem>::get_Item(System.Int32) */, IList_1_t10DACFED13F923CF5C340ADDFC029F4554FF4F7E_il2cpp_TypeInfo_var, L_0, L_1);
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501(L_2, /*hidden argument*/NULL);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_4 = ___ps1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501(L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)L_5))))
		{
			goto IL_001a;
		}
	}
	{
		// if (list[i].GetInstanceID() == ps.GetInstanceID()) return i;
		int32_t L_6 = V_0;
		return L_6;
	}

IL_001a:
	{
		// for (var i = 0; i < list.Count; i++)
		int32_t L_7 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_001e:
	{
		// for (var i = 0; i < list.Count; i++)
		int32_t L_8 = V_0;
		RuntimeObject* L_9 = ___list0;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ParticleSystem>::get_Count() */, ICollection_1_tD81B558EAB7EDCD37929FCB48540D2F6A3A551A8_il2cpp_TypeInfo_var, L_9);
		if ((((int32_t)L_8) < ((int32_t)L_10)))
		{
			goto IL_0004;
		}
	}
	{
		// return 0;
		return 0;
	}
}
// System.Int64 Coffee.UIParticleExtensions.ParticleSystemExtensions::GetMaterialHash(UnityEngine.ParticleSystem,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ParticleSystemExtensions_GetMaterialHash_m3945DF66D4DE99C62ED508CBD66B4FCDC9866D4D (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___self0, bool ___trail1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m433D0F036D744378DDD67C566DDC69B19052E933_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * V_0 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * V_1 = NULL;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * V_2 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B5_0 = NULL;
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * G_B10_0 = NULL;
	int64_t G_B12_0 = 0;
	int64_t G_B11_0 = 0;
	int32_t G_B13_0 = 0;
	int64_t G_B13_1 = 0;
	{
		// if (!self) return 0;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_0 = ___self0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		// if (!self) return 0;
		return ((int64_t)((int64_t)0));
	}

IL_000b:
	{
		// var r = self.GetComponent<ParticleSystemRenderer>();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_2 = ___self0;
		NullCheck(L_2);
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_3;
		L_3 = Component_GetComponent_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m433D0F036D744378DDD67C566DDC69B19052E933(L_2, /*hidden argument*/Component_GetComponent_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m433D0F036D744378DDD67C566DDC69B19052E933_RuntimeMethod_var);
		V_0 = L_3;
		// var mat = trail ? r.trailMaterial : r.sharedMaterial;
		bool L_4 = ___trail1;
		if (L_4)
		{
			goto IL_001d;
		}
	}
	{
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_5 = V_0;
		NullCheck(L_5);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_6;
		L_6 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_5, /*hidden argument*/NULL);
		G_B5_0 = L_6;
		goto IL_0023;
	}

IL_001d:
	{
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_7 = V_0;
		NullCheck(L_7);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_8;
		L_8 = ParticleSystemRenderer_get_trailMaterial_mB7C8AE9C0D9B9A2092E2FCF55AA6CFE3B0B3A400(L_7, /*hidden argument*/NULL);
		G_B5_0 = L_8;
	}

IL_0023:
	{
		V_1 = G_B5_0;
		// if (!mat) return 0;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_002f;
		}
	}
	{
		// if (!mat) return 0;
		return ((int64_t)((int64_t)0));
	}

IL_002f:
	{
		// var tex = trail ? null : self.GetTextureForSprite();
		bool L_11 = ___trail1;
		if (L_11)
		{
			goto IL_003a;
		}
	}
	{
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_12 = ___self0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_13;
		L_13 = ParticleSystemExtensions_GetTextureForSprite_m2995FEB5A3A46D54AADB90DA1F3029BA34A160A7(L_12, /*hidden argument*/NULL);
		G_B10_0 = L_13;
		goto IL_003b;
	}

IL_003a:
	{
		G_B10_0 = ((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)(NULL));
	}

IL_003b:
	{
		V_2 = G_B10_0;
		// return ((long) mat.GetHashCode() << 32) + (tex ? tex.GetHashCode() : 0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_14 = V_1;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_14);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_16 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_16, /*hidden argument*/NULL);
		G_B11_0 = ((int64_t)((int64_t)((int64_t)((int64_t)L_15))<<(int32_t)((int32_t)32)));
		if (L_17)
		{
			G_B12_0 = ((int64_t)((int64_t)((int64_t)((int64_t)L_15))<<(int32_t)((int32_t)32)));
			goto IL_0051;
		}
	}
	{
		G_B13_0 = 0;
		G_B13_1 = G_B11_0;
		goto IL_0057;
	}

IL_0051:
	{
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_18 = V_2;
		NullCheck(L_18);
		int32_t L_19;
		L_19 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_18);
		G_B13_0 = L_19;
		G_B13_1 = G_B12_0;
	}

IL_0057:
	{
		return ((int64_t)il2cpp_codegen_add((int64_t)G_B13_1, (int64_t)((int64_t)((int64_t)G_B13_0))));
	}
}
// UnityEngine.Texture2D Coffee.UIParticleExtensions.ParticleSystemExtensions::GetTextureForSprite(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ParticleSystemExtensions_GetTextureForSprite_m2995FEB5A3A46D54AADB90DA1F3029BA34A160A7 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___self0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * V_2 = NULL;
	{
		// if (!self) return null;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_0 = ___self0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		// if (!self) return null;
		return (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL;
	}

IL_000a:
	{
		// var tsaModule = self.textureSheetAnimation;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_2 = ___self0;
		NullCheck(L_2);
		TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2  L_3;
		L_3 = ParticleSystem_get_textureSheetAnimation_mE7D4FF28B018DD7BB94904CE014F5FD56E53AA90(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (!tsaModule.enabled || tsaModule.mode != ParticleSystemAnimationMode.Sprites) return null;
		bool L_4;
		L_4 = TextureSheetAnimationModule_get_enabled_mBE8A1D92B11C7F586D02915FC5E6D611BD310C26((TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 *)(&V_0), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_5;
		L_5 = TextureSheetAnimationModule_get_mode_m677809FD153831D57EE0FAA1EA1F3750BBB04C7F((TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 *)(&V_0), /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_0026;
		}
	}

IL_0024:
	{
		// if (!tsaModule.enabled || tsaModule.mode != ParticleSystemAnimationMode.Sprites) return null;
		return (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL;
	}

IL_0026:
	{
		// for (var i = 0; i < tsaModule.spriteCount; i++)
		V_1 = 0;
		goto IL_0046;
	}

IL_002a:
	{
		// var sprite = tsaModule.GetSprite(i);
		int32_t L_6 = V_1;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_7;
		L_7 = TextureSheetAnimationModule_GetSprite_m606BC775E648FC22D94213162C6F2001B3664231((TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 *)(&V_0), L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		// if (!sprite) continue;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_8 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0042;
		}
	}
	{
		// return sprite.GetActualTexture();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_10 = V_2;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_11;
		L_11 = SpriteExtensions_GetActualTexture_mD864F923F3852033B7CE98519E8191C567A15CFE(L_10, /*hidden argument*/NULL);
		return L_11;
	}

IL_0042:
	{
		// for (var i = 0; i < tsaModule.spriteCount; i++)
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0046:
	{
		// for (var i = 0; i < tsaModule.spriteCount; i++)
		int32_t L_13 = V_1;
		int32_t L_14;
		L_14 = TextureSheetAnimationModule_get_spriteCount_mC5586E837EBF7E3363F20ED58F910A48E87A25EB((TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 *)(&V_0), /*hidden argument*/NULL);
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_002a;
		}
	}
	{
		// return null;
		return (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL;
	}
}
// System.Void Coffee.UIParticleExtensions.ParticleSystemExtensions::Exec(System.Collections.Generic.List`1<UnityEngine.ParticleSystem>,System.Action`1<UnityEngine.ParticleSystem>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystemExtensions_Exec_mCCB132CCB2A89AFF806CC812A35C7A9577B3E56D (List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * ___self0, Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * ___action1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ForEach_m0325E291BDDB04FD83E58B7DD06E3FDC6555AFC3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAll_m975FA01DA7977F9E40CACA1B48B4816EBF9754E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1__ctor_mC62A94144C701E9EC5A659E5DE76CF29A717AD83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CExecU3Eb__4_0_m00103062797FB632C636D1121701F549177D1B4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7C65392AB7B89EB93CD97F4D2C256FF531662AFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C * G_B2_0 = NULL;
	List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * G_B2_1 = NULL;
	Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C * G_B1_0 = NULL;
	List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * G_B1_1 = NULL;
	{
		// self.RemoveAll(p => !p);
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_0 = ___self0;
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7C65392AB7B89EB93CD97F4D2C256FF531662AFA_il2cpp_TypeInfo_var);
		Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C * L_1 = ((U3CU3Ec_t7C65392AB7B89EB93CD97F4D2C256FF531662AFA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7C65392AB7B89EB93CD97F4D2C256FF531662AFA_il2cpp_TypeInfo_var))->get_U3CU3E9__4_0_1();
		Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0020;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7C65392AB7B89EB93CD97F4D2C256FF531662AFA_il2cpp_TypeInfo_var);
		U3CU3Ec_t7C65392AB7B89EB93CD97F4D2C256FF531662AFA * L_3 = ((U3CU3Ec_t7C65392AB7B89EB93CD97F4D2C256FF531662AFA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7C65392AB7B89EB93CD97F4D2C256FF531662AFA_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C * L_4 = (Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C *)il2cpp_codegen_object_new(Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C_il2cpp_TypeInfo_var);
		Predicate_1__ctor_mC62A94144C701E9EC5A659E5DE76CF29A717AD83(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3CExecU3Eb__4_0_m00103062797FB632C636D1121701F549177D1B4D_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_mC62A94144C701E9EC5A659E5DE76CF29A717AD83_RuntimeMethod_var);
		Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C * L_5 = L_4;
		((U3CU3Ec_t7C65392AB7B89EB93CD97F4D2C256FF531662AFA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7C65392AB7B89EB93CD97F4D2C256FF531662AFA_il2cpp_TypeInfo_var))->set_U3CU3E9__4_0_1(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0020:
	{
		NullCheck(G_B2_1);
		int32_t L_6;
		L_6 = List_1_RemoveAll_m975FA01DA7977F9E40CACA1B48B4816EBF9754E2(G_B2_1, G_B2_0, /*hidden argument*/List_1_RemoveAll_m975FA01DA7977F9E40CACA1B48B4816EBF9754E2_RuntimeMethod_var);
		// self.ForEach(action);
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_7 = ___self0;
		Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * L_8 = ___action1;
		NullCheck(L_7);
		List_1_ForEach_m0325E291BDDB04FD83E58B7DD06E3FDC6555AFC3(L_7, L_8, /*hidden argument*/List_1_ForEach_m0325E291BDDB04FD83E58B7DD06E3FDC6555AFC3_RuntimeMethod_var);
		// }
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
// UnityEngine.Texture2D Coffee.UIParticleExtensions.SpriteExtensions::GetActualTexture(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * SpriteExtensions_GetActualTexture_mD864F923F3852033B7CE98519E8191C567A15CFE (Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___self0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return self ? self.texture : null;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_0 = ___self0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL;
	}

IL_000a:
	{
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_2 = ___self0;
		NullCheck(L_2);
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_3;
		L_3 = Sprite_get_texture_mD03E68058C9F727321FE643CBDB3A469F96E49FB(L_2, /*hidden argument*/NULL);
		return L_3;
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
// System.Boolean Coffee.UIExtensions.UIParticle::get_raycastTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIParticle_get_raycastTarget_mB7DB27395AE05FC2331F47945DD480F195189F96 (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method)
{
	{
		// get { return false; }
		return (bool)0;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::set_raycastTarget(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_set_raycastTarget_mD78530E5FE60F6A581F167281BC469D5B080F916 (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { }
		return;
	}
}
// System.Boolean Coffee.UIExtensions.UIParticle::get_ignoreCanvasScaler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIParticle_get_ignoreCanvasScaler_mDD8AA041E85CB24E0AE7F2F161CFDF4C5718E2B2 (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method)
{
	{
		// get { return m_IgnoreCanvasScaler; }
		bool L_0 = __this->get_m_IgnoreCanvasScaler_37();
		return L_0;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::set_ignoreCanvasScaler(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_set_ignoreCanvasScaler_mDBDBC2FDE69C2611BA2CCD49FB5F819675A2D1A9 (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// m_IgnoreCanvasScaler = value;
		bool L_0 = ___value0;
		__this->set_m_IgnoreCanvasScaler_37(L_0);
		// _tracker.Clear();
		DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * L_1 = __this->get_address_of__tracker_44();
		DrivenRectTransformTracker_Clear_m41F9B0AA2025AF5B76D38E68B08C111D7D8EB845((DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 *)L_1, /*hidden argument*/NULL);
		// if (isActiveAndEnabled && m_IgnoreCanvasScaler)
		bool L_2;
		L_2 = Behaviour_get_isActiveAndEnabled_mDD843C0271D492C1E08E0F8DEE8B6F1CFA951BFA(__this, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0039;
		}
	}
	{
		bool L_3 = __this->get_m_IgnoreCanvasScaler_37();
		if (!L_3)
		{
			goto IL_0039;
		}
	}
	{
		// _tracker.Add(this, rectTransform, DrivenTransformProperties.Scale);
		DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * L_4 = __this->get_address_of__tracker_44();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_5;
		L_5 = Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF(__this, /*hidden argument*/NULL);
		DrivenRectTransformTracker_Add_m65814604ABCE8B9F81270F3C2E1632CCB9E9A5E7((DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 *)L_4, __this, L_5, ((int32_t)224), /*hidden argument*/NULL);
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Boolean Coffee.UIExtensions.UIParticle::get_shrinkByMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIParticle_get_shrinkByMaterial_m8F6020CCA1D4F6A060A696BB9A66A4620738C4BB (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method)
{
	{
		// get { return m_ShrinkByMaterial; }
		bool L_0 = __this->get_m_ShrinkByMaterial_42();
		return L_0;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::set_shrinkByMaterial(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_set_shrinkByMaterial_mF782D40C025B88DBEFC955BCC29765C983AE217F (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// if (m_ShrinkByMaterial == value) return;
		bool L_0 = __this->get_m_ShrinkByMaterial_42();
		bool L_1 = ___value0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		// if (m_ShrinkByMaterial == value) return;
		return;
	}

IL_000a:
	{
		// m_ShrinkByMaterial = value;
		bool L_2 = ___value0;
		__this->set_m_ShrinkByMaterial_42(L_2);
		// RefreshParticles();
		UIParticle_RefreshParticles_mBC1B3BFDCA0180591ED0AE73C030C4C1BF7D11DD(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Single Coffee.UIExtensions.UIParticle::get_scale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UIParticle_get_scale_m222FD2D2443ED23315643D5C0A6BC35F6F02CC11 (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Scale3D.x; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_0 = __this->get_address_of_m_Scale3D_39();
		float L_1 = L_0->get_x_2();
		return L_1;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::set_scale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_set_scale_mB3F4F443D2F4EE4956FD2D7889424E33F126D78F (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// m_Scale = Mathf.Max(0.001f, value);
		float L_0 = ___value0;
		float L_1;
		L_1 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775((0.00100000005f), L_0, /*hidden argument*/NULL);
		__this->set_m_Scale_38(L_1);
		// m_Scale3D = new Vector3(m_Scale, m_Scale, m_Scale);
		float L_2 = __this->get_m_Scale_38();
		float L_3 = __this->get_m_Scale_38();
		float L_4 = __this->get_m_Scale_38();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), L_2, L_3, L_4, /*hidden argument*/NULL);
		__this->set_m_Scale3D_39(L_5);
		// }
		return;
	}
}
// UnityEngine.Vector3 Coffee.UIExtensions.UIParticle::get_scale3D()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  UIParticle_get_scale3D_mA6A3841E1A258F1150D9CB64FB08B8CDF5C99EED (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Scale3D; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_m_Scale3D_39();
		return L_0;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::set_scale3D(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_set_scale3D_m3683065AC883C24DBA1DBCF2B950E5A923C1C014 (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// if (m_Scale3D == value) return;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_m_Scale3D_39();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___value0;
		bool L_2;
		L_2 = Vector3_op_Equality_m8A98C7F38641110A2F90445EF8E98ECE14B08296(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		// if (m_Scale3D == value) return;
		return;
	}

IL_000f:
	{
		// m_Scale3D.x = Mathf.Max(0.001f, value.x);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_3 = __this->get_address_of_m_Scale3D_39();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___value0;
		float L_5 = L_4.get_x_2();
		float L_6;
		L_6 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775((0.00100000005f), L_5, /*hidden argument*/NULL);
		L_3->set_x_2(L_6);
		// m_Scale3D.y = Mathf.Max(0.001f, value.y);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_7 = __this->get_address_of_m_Scale3D_39();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___value0;
		float L_9 = L_8.get_y_3();
		float L_10;
		L_10 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775((0.00100000005f), L_9, /*hidden argument*/NULL);
		L_7->set_y_3(L_10);
		// m_Scale3D.z = Mathf.Max(0.001f, value.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_11 = __this->get_address_of_m_Scale3D_39();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = ___value0;
		float L_13 = L_12.get_z_4();
		float L_14;
		L_14 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775((0.00100000005f), L_13, /*hidden argument*/NULL);
		L_11->set_z_4(L_14);
		// }
		return;
	}
}
// UnityEngine.Mesh Coffee.UIExtensions.UIParticle::get_bakedMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * UIParticle_get_bakedMesh_m8ECD19D62E8B19E41FD8F1BAB590154190A3AE7E (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method)
{
	{
		// get { return _bakedMesh; }
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_0 = __this->get__bakedMesh_45();
		return L_0;
	}
}
// System.Collections.Generic.List`1<UnityEngine.ParticleSystem> Coffee.UIExtensions.UIParticle::get_particles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * UIParticle_get_particles_m248BEC4C388F11152591A68AC7B94ECD8622AC0F (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Particles; }
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_0 = __this->get_m_Particles_41();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerable`1<UnityEngine.Material> Coffee.UIExtensions.UIParticle::get_materials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIParticle_get_materials_m03BD17D7CCE5C089C997E2DFF420B5ADD92CA5CD (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method)
{
	{
		// get { return _modifiedMaterials; }
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_0 = __this->get__modifiedMaterials_46();
		return L_0;
	}
}
// UnityEngine.Material Coffee.UIExtensions.UIParticle::get_materialForRendering()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * UIParticle_get_materialForRendering_m506FC42ABD0D68D0388C084B0EB56EF85A5BACAE (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method)
{
	{
		// get { return canvasRenderer.GetMaterial(0); }
		CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * L_0;
		L_0 = Graphic_get_canvasRenderer_m33EC3A53310593E87C540654486C7A73A66FCF4A(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1;
		L_1 = CanvasRenderer_GetMaterial_mA674C9DC47C63CCFCDED7382D923A7796C8BE308(L_0, 0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Collections.Generic.List`1<System.Boolean> Coffee.UIExtensions.UIParticle::get_activeMeshIndices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * UIParticle_get_activeMeshIndices_m423987C46CE4EC5176502A0BF43439C08B44E8FF (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method)
{
	{
		// get { return _activeMeshIndices; }
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_0 = __this->get__activeMeshIndices_48();
		return L_0;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::set_activeMeshIndices(System.Collections.Generic.List`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_set_activeMeshIndices_m7818D19F7F023BA051A1D1C9A06BBB598E4647FD (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m3547993FB352517F6F60B5848050BACDF2888876_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m099848ADBF5C4E55AF58C6CD892989DABB39C77E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_activeMeshIndices.SequenceEqualFast(value)) return;
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_0 = __this->get__activeMeshIndices_48();
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_1 = ___value0;
		bool L_2;
		L_2 = ListExtensions_SequenceEqualFast_m671F15B87407B6356BFB72C9E9C04A61C8ADCFFE(L_0, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_000f;
		}
	}
	{
		// if (_activeMeshIndices.SequenceEqualFast(value)) return;
		return;
	}

IL_000f:
	{
		// _activeMeshIndices.Clear();
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_3 = __this->get__activeMeshIndices_48();
		NullCheck(L_3);
		List_1_Clear_m099848ADBF5C4E55AF58C6CD892989DABB39C77E(L_3, /*hidden argument*/List_1_Clear_m099848ADBF5C4E55AF58C6CD892989DABB39C77E_RuntimeMethod_var);
		// _activeMeshIndices.AddRange(value);
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_4 = __this->get__activeMeshIndices_48();
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_5 = ___value0;
		NullCheck(L_4);
		List_1_AddRange_m3547993FB352517F6F60B5848050BACDF2888876(L_4, L_5, /*hidden argument*/List_1_AddRange_m3547993FB352517F6F60B5848050BACDF2888876_RuntimeMethod_var);
		// UpdateMaterial();
		VirtActionInvoker0::Invoke(40 /* System.Void UnityEngine.UI.Graphic::UpdateMaterial() */, __this);
		// }
		return;
	}
}
// UnityEngine.Vector3 Coffee.UIExtensions.UIParticle::get_cachedPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  UIParticle_get_cachedPosition_mFF26D3060E2F13A056FB640EDDD7E33BDE6EE0BC (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method)
{
	{
		// get { return _cachedPosition; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get__cachedPosition_49();
		return L_0;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::set_cachedPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_set_cachedPosition_mEDA61F1A70EF8A9CE6966CCA0126E8C47ED34FE6 (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// set { _cachedPosition = value; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set__cachedPosition_49(L_0);
		// set { _cachedPosition = value; }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_Play_m6F941796E6E1507CFE22E6D89E80A6FCAF67545F (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m11A8909AF17DB54C2399B548B37E3DB0C5CAC25B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CPlayU3Eb__49_0_m68892900DB4B2D962E6E8F2FD6675468A93DC724_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * G_B2_0 = NULL;
	List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * G_B2_1 = NULL;
	Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * G_B1_0 = NULL;
	List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * G_B1_1 = NULL;
	{
		// particles.Exec(p => p.Play());
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_0;
		L_0 = UIParticle_get_particles_m248BEC4C388F11152591A68AC7B94ECD8622AC0F_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var);
		Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * L_1 = ((U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var))->get_U3CU3E9__49_0_1();
		Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var);
		U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848 * L_3 = ((U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * L_4 = (Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B *)il2cpp_codegen_object_new(Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B_il2cpp_TypeInfo_var);
		Action_1__ctor_m11A8909AF17DB54C2399B548B37E3DB0C5CAC25B(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3CPlayU3Eb__49_0_m68892900DB4B2D962E6E8F2FD6675468A93DC724_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m11A8909AF17DB54C2399B548B37E3DB0C5CAC25B_RuntimeMethod_var);
		Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * L_5 = L_4;
		((U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var))->set_U3CU3E9__49_0_1(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		ParticleSystemExtensions_Exec_mCCB132CCB2A89AFF806CC812A35C7A9577B3E56D(G_B2_1, G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_Pause_m963A33DF2342C0719FB0B5E6AF9CE2E541C4FB03 (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m11A8909AF17DB54C2399B548B37E3DB0C5CAC25B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CPauseU3Eb__50_0_mDCC52D582B2F890218C18E481ACFA1BFC793ECCA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * G_B2_0 = NULL;
	List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * G_B2_1 = NULL;
	Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * G_B1_0 = NULL;
	List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * G_B1_1 = NULL;
	{
		// particles.Exec(p => p.Pause());
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_0;
		L_0 = UIParticle_get_particles_m248BEC4C388F11152591A68AC7B94ECD8622AC0F_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var);
		Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * L_1 = ((U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var))->get_U3CU3E9__50_0_2();
		Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var);
		U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848 * L_3 = ((U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * L_4 = (Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B *)il2cpp_codegen_object_new(Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B_il2cpp_TypeInfo_var);
		Action_1__ctor_m11A8909AF17DB54C2399B548B37E3DB0C5CAC25B(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3CPauseU3Eb__50_0_mDCC52D582B2F890218C18E481ACFA1BFC793ECCA_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m11A8909AF17DB54C2399B548B37E3DB0C5CAC25B_RuntimeMethod_var);
		Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * L_5 = L_4;
		((U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var))->set_U3CU3E9__50_0_2(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		ParticleSystemExtensions_Exec_mCCB132CCB2A89AFF806CC812A35C7A9577B3E56D(G_B2_1, G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_Stop_m0FC069ADB3AC983B6F9E4405959DDB42D468DAD4 (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m11A8909AF17DB54C2399B548B37E3DB0C5CAC25B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStopU3Eb__51_0_mBEC5AD812335E6B397EB8F6964DE01CA2F7B6B17_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * G_B2_0 = NULL;
	List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * G_B2_1 = NULL;
	Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * G_B1_0 = NULL;
	List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * G_B1_1 = NULL;
	{
		// particles.Exec(p => p.Stop());
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_0;
		L_0 = UIParticle_get_particles_m248BEC4C388F11152591A68AC7B94ECD8622AC0F_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var);
		Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * L_1 = ((U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var))->get_U3CU3E9__51_0_3();
		Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var);
		U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848 * L_3 = ((U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * L_4 = (Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B *)il2cpp_codegen_object_new(Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B_il2cpp_TypeInfo_var);
		Action_1__ctor_m11A8909AF17DB54C2399B548B37E3DB0C5CAC25B(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3CStopU3Eb__51_0_mBEC5AD812335E6B397EB8F6964DE01CA2F7B6B17_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m11A8909AF17DB54C2399B548B37E3DB0C5CAC25B_RuntimeMethod_var);
		Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * L_5 = L_4;
		((U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var))->set_U3CU3E9__51_0_3(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		ParticleSystemExtensions_Exec_mCCB132CCB2A89AFF806CC812A35C7A9577B3E56D(G_B2_1, G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_Clear_m1D4CFD0A52983C95FE21C2D1BA4CA1D96C97A444 (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m11A8909AF17DB54C2399B548B37E3DB0C5CAC25B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CClearU3Eb__52_0_mB0C876F32AC5CC357A244FC7AAA4941AEDC38D00_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * G_B2_0 = NULL;
	List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * G_B2_1 = NULL;
	Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * G_B1_0 = NULL;
	List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * G_B1_1 = NULL;
	{
		// particles.Exec(p => p.Clear());
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_0;
		L_0 = UIParticle_get_particles_m248BEC4C388F11152591A68AC7B94ECD8622AC0F_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var);
		Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * L_1 = ((U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var))->get_U3CU3E9__52_0_4();
		Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var);
		U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848 * L_3 = ((U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * L_4 = (Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B *)il2cpp_codegen_object_new(Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B_il2cpp_TypeInfo_var);
		Action_1__ctor_m11A8909AF17DB54C2399B548B37E3DB0C5CAC25B(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3CClearU3Eb__52_0_mB0C876F32AC5CC357A244FC7AAA4941AEDC38D00_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m11A8909AF17DB54C2399B548B37E3DB0C5CAC25B_RuntimeMethod_var);
		Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * L_5 = L_4;
		((U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var))->set_U3CU3E9__52_0_4(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		ParticleSystemExtensions_Exec_mCCB132CCB2A89AFF806CC812A35C7A9577B3E56D(G_B2_1, G_B2_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::SetParticleSystemInstance(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_SetParticleSystemInstance_m7A41DF43BBEA7C3E53CEB153E89610E09728A4A5 (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___instance0, const RuntimeMethod* method)
{
	{
		// SetParticleSystemInstance(instance, true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___instance0;
		UIParticle_SetParticleSystemInstance_mB22CC88FA27F7EF1C2577F6A6293C63CAC6E5B3F(__this, L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::SetParticleSystemInstance(UnityEngine.GameObject,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_SetParticleSystemInstance_mB22CC88FA27F7EF1C2577F6A6293C63CAC6E5B3F (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___instance0, bool ___destroyOldParticles1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (!instance) return;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___instance0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		// if (!instance) return;
		return;
	}

IL_0009:
	{
		// foreach (Transform child in transform)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
	}

IL_0015:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0038;
		}

IL_0017:
		{
			// foreach (Transform child in transform)
			RuntimeObject* L_4 = V_0;
			NullCheck(L_4);
			RuntimeObject * L_5;
			L_5 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_4);
			// var go = child.gameObject;
			NullCheck(((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_5, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var)));
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
			L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_5, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			V_1 = L_6;
			// go.SetActive(false);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = V_1;
			NullCheck(L_7);
			GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
			// if (!destroyOldParticles) continue;
			bool L_8 = ___destroyOldParticles1;
			if (!L_8)
			{
				goto IL_0038;
			}
		}

IL_0032:
		{
			// Destroy(go);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_9, /*hidden argument*/NULL);
		}

IL_0038:
		{
			// foreach (Transform child in transform)
			RuntimeObject* L_10 = V_0;
			NullCheck(L_10);
			bool L_11;
			L_11 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_10);
			if (L_11)
			{
				goto IL_0017;
			}
		}

IL_0040:
		{
			IL2CPP_LEAVE(0x53, FINALLY_0042);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0042;
	}

FINALLY_0042:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_12 = V_0;
			V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_12, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_13 = V_2;
			if (!L_13)
			{
				goto IL_0052;
			}
		}

IL_004c:
		{
			RuntimeObject* L_14 = V_2;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_14);
		}

IL_0052:
		{
			IL2CPP_END_FINALLY(66)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(66)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x53, IL_0053)
	}

IL_0053:
	{
		// var tr = instance.transform;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = ___instance0;
		NullCheck(L_15);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		// tr.SetParent(transform, false);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17 = L_16;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_SetParent_mA6A651EDE81F139E1D6C7BA894834AD71D07227A(L_17, L_18, (bool)0, /*hidden argument*/NULL);
		// tr.localPosition = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_17, L_19, /*hidden argument*/NULL);
		// RefreshParticles(instance);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = ___instance0;
		UIParticle_RefreshParticles_m3499C7B47CFF340A13F711AE77A121FC9AB624E8(__this, L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::SetParticleSystemPrefab(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_SetParticleSystemPrefab_m1872C72C58C3BECC3A728E1300A7F1DC1730B917 (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefab0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!prefab) return;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___prefab0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		// if (!prefab) return;
		return;
	}

IL_0009:
	{
		// SetParticleSystemInstance(Instantiate(prefab.gameObject), true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = ___prefab0;
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_3, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		UIParticle_SetParticleSystemInstance_mB22CC88FA27F7EF1C2577F6A6293C63CAC6E5B3F(__this, L_4, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::RefreshParticles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_RefreshParticles_mBC1B3BFDCA0180591ED0AE73C030C4C1BF7D11DD (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method)
{
	{
		// RefreshParticles(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		UIParticle_RefreshParticles_m3499C7B47CFF340A13F711AE77A121FC9AB624E8(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::RefreshParticles(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_RefreshParticles_m3499C7B47CFF340A13F711AE77A121FC9AB624E8 (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___root0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m11A8909AF17DB54C2399B548B37E3DB0C5CAC25B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mBF6A108518D945770396C6AD62AA4206F03ACED3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8853CA3A6E508B9E310384EC2339E680BD0AE125_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m3BDED7BDE61A99820C96FB446198B850B4CCF068_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_mAAB09D18EF9CE309F3324D68B1A82274FCAEF6D3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m0E52F4D4795DF4986F3EF9D506B57651DA5AAEDD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAll_m975FA01DA7977F9E40CACA1B48B4816EBF9754E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1__ctor_mC62A94144C701E9EC5A659E5DE76CF29A717AD83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticle_U3CRefreshParticlesU3Eb__57_0_m1883FBA26ECBA42D33A035DB055F4051CD89259A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticle_U3CRefreshParticlesU3Eb__57_1_m9031288D5CB43EC3F8B2FC677737665374634EB3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t98A8303225347C32B273C93CEAB5C421F46D6756  V_0;
	memset((&V_0), 0, sizeof(V_0));
	TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (!root) return;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___root0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		// if (!root) return;
		return;
	}

IL_0009:
	{
		// root.GetComponentsInChildren(particles);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = ___root0;
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_3;
		L_3 = UIParticle_get_particles_m248BEC4C388F11152591A68AC7B94ECD8622AC0F_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		GameObject_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_mAAB09D18EF9CE309F3324D68B1A82274FCAEF6D3(L_2, L_3, /*hidden argument*/GameObject_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_mAAB09D18EF9CE309F3324D68B1A82274FCAEF6D3_RuntimeMethod_var);
		// particles.RemoveAll(x => x.GetComponentInParent<UIParticle>() != this);
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_4;
		L_4 = UIParticle_get_particles_m248BEC4C388F11152591A68AC7B94ECD8622AC0F_inline(__this, /*hidden argument*/NULL);
		Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C * L_5 = (Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C *)il2cpp_codegen_object_new(Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C_il2cpp_TypeInfo_var);
		Predicate_1__ctor_mC62A94144C701E9EC5A659E5DE76CF29A717AD83(L_5, __this, (intptr_t)((intptr_t)UIParticle_U3CRefreshParticlesU3Eb__57_0_m1883FBA26ECBA42D33A035DB055F4051CD89259A_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_mC62A94144C701E9EC5A659E5DE76CF29A717AD83_RuntimeMethod_var);
		NullCheck(L_4);
		int32_t L_6;
		L_6 = List_1_RemoveAll_m975FA01DA7977F9E40CACA1B48B4816EBF9754E2(L_4, L_5, /*hidden argument*/List_1_RemoveAll_m975FA01DA7977F9E40CACA1B48B4816EBF9754E2_RuntimeMethod_var);
		// foreach (var ps in particles)
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_7;
		L_7 = UIParticle_get_particles_m248BEC4C388F11152591A68AC7B94ECD8622AC0F_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Enumerator_t98A8303225347C32B273C93CEAB5C421F46D6756  L_8;
		L_8 = List_1_GetEnumerator_m0E52F4D4795DF4986F3EF9D506B57651DA5AAEDD(L_7, /*hidden argument*/List_1_GetEnumerator_m0E52F4D4795DF4986F3EF9D506B57651DA5AAEDD_RuntimeMethod_var);
		V_0 = L_8;
	}

IL_0039:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0063;
		}

IL_003b:
		{
			// foreach (var ps in particles)
			ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_9;
			L_9 = Enumerator_get_Current_m3BDED7BDE61A99820C96FB446198B850B4CCF068_inline((Enumerator_t98A8303225347C32B273C93CEAB5C421F46D6756 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m3BDED7BDE61A99820C96FB446198B850B4CCF068_RuntimeMethod_var);
			// var tsa = ps.textureSheetAnimation;
			NullCheck(L_9);
			TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2  L_10;
			L_10 = ParticleSystem_get_textureSheetAnimation_mE7D4FF28B018DD7BB94904CE014F5FD56E53AA90(L_9, /*hidden argument*/NULL);
			V_1 = L_10;
			// if (tsa.mode == ParticleSystemAnimationMode.Sprites && tsa.uvChannelMask == (UVChannelFlags) 0)
			int32_t L_11;
			L_11 = TextureSheetAnimationModule_get_mode_m677809FD153831D57EE0FAA1EA1F3750BBB04C7F((TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 *)(&V_1), /*hidden argument*/NULL);
			if ((!(((uint32_t)L_11) == ((uint32_t)1))))
			{
				goto IL_0063;
			}
		}

IL_0052:
		{
			int32_t L_12;
			L_12 = TextureSheetAnimationModule_get_uvChannelMask_mE16F59DB6035B9B2AD11440F3FB2E1AE3265A59D((TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 *)(&V_1), /*hidden argument*/NULL);
			if (L_12)
			{
				goto IL_0063;
			}
		}

IL_005b:
		{
			// tsa.uvChannelMask = UVChannelFlags.UV0;
			TextureSheetAnimationModule_set_uvChannelMask_mF18E3A9BE6A049C4C81D39F9B5FC8A6755787247((TextureSheetAnimationModule_t66D02BA0838858C4921EFC059CC3412141A8FCF2 *)(&V_1), 1, /*hidden argument*/NULL);
		}

IL_0063:
		{
			// foreach (var ps in particles)
			bool L_13;
			L_13 = Enumerator_MoveNext_m8853CA3A6E508B9E310384EC2339E680BD0AE125((Enumerator_t98A8303225347C32B273C93CEAB5C421F46D6756 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m8853CA3A6E508B9E310384EC2339E680BD0AE125_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_003b;
			}
		}

IL_006c:
		{
			IL2CPP_LEAVE(0x7C, FINALLY_006e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_006e;
	}

FINALLY_006e:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mBF6A108518D945770396C6AD62AA4206F03ACED3((Enumerator_t98A8303225347C32B273C93CEAB5C421F46D6756 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mBF6A108518D945770396C6AD62AA4206F03ACED3_RuntimeMethod_var);
		IL2CPP_END_FINALLY(110)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(110)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x7C, IL_007c)
	}

IL_007c:
	{
		// particles.Exec(p => p.GetComponent<ParticleSystemRenderer>().enabled = !enabled);
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_14;
		L_14 = UIParticle_get_particles_m248BEC4C388F11152591A68AC7B94ECD8622AC0F_inline(__this, /*hidden argument*/NULL);
		Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * L_15 = (Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B *)il2cpp_codegen_object_new(Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B_il2cpp_TypeInfo_var);
		Action_1__ctor_m11A8909AF17DB54C2399B548B37E3DB0C5CAC25B(L_15, __this, (intptr_t)((intptr_t)UIParticle_U3CRefreshParticlesU3Eb__57_1_m9031288D5CB43EC3F8B2FC677737665374634EB3_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m11A8909AF17DB54C2399B548B37E3DB0C5CAC25B_RuntimeMethod_var);
		ParticleSystemExtensions_Exec_mCCB132CCB2A89AFF806CC812A35C7A9577B3E56D(L_14, L_15, /*hidden argument*/NULL);
		// particles.SortForRendering(transform, m_ShrinkByMaterial);
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_16;
		L_16 = UIParticle_get_particles_m248BEC4C388F11152591A68AC7B94ECD8622AC0F_inline(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		bool L_18 = __this->get_m_ShrinkByMaterial_42();
		ParticleSystemExtensions_SortForRendering_m816138288A23F920DFA67E6CF327D97D775C84BF(L_16, L_17, L_18, /*hidden argument*/NULL);
		// SetMaterialDirty();
		VirtActionInvoker0::Invoke(29 /* System.Void UnityEngine.UI.Graphic::SetMaterialDirty() */, __this);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::UpdateMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_UpdateMaterial_mAD89A1A0CE356A252DAAB866AAF5DA46A06973C9 (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m433D0F036D744378DDD67C566DDC69B19052E933_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMaterialModifier_t36437594488A51EC8B02886F7FAC5D32027A33DA_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMaterialModifier_t36437594488A51EC8B02886F7FAC5D32027A33DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_mA7CC85A1456655584AA666037C9EE401745CA8DF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2D5331F0E51DEDFD0BC68D4AE665FD93010CA0BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m717EDAB95A84624B81D546CBEDC84B4664B7B678_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8547E31DBBBA85E2090BA3076611614A4C8F1A18_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m9F55C8ADF8B0877FF8961B5A9BA55A9A7BFF904E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m13B9C8BE116476A73890AFB00F5596C13FC3FFAF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6608CAE85049DBB39679FB41D1266AF732C97461_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m99F4A60865784DCE41B4ECAEBD910543BBB87A1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_3 = NULL;
	int32_t V_4 = 0;
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * V_5 = NULL;
	ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * V_6 = NULL;
	int32_t V_7 = 0;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * V_8 = NULL;
	int32_t V_9 = 0;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * V_10 = NULL;
	int32_t V_11 = 0;
	UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * G_B3_0 = NULL;
	UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * G_B4_1 = NULL;
	{
		// s_PrevMaskMaterials.AddRange(_maskMaterials);
		IL2CPP_RUNTIME_CLASS_INIT(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_0 = ((UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields*)il2cpp_codegen_static_fields_for(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var))->get_s_PrevMaskMaterials_52();
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_1 = __this->get__maskMaterials_47();
		NullCheck(L_0);
		List_1_AddRange_mA7CC85A1456655584AA666037C9EE401745CA8DF(L_0, L_1, /*hidden argument*/List_1_AddRange_mA7CC85A1456655584AA666037C9EE401745CA8DF_RuntimeMethod_var);
		// _maskMaterials.Clear();
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_2 = __this->get__maskMaterials_47();
		NullCheck(L_2);
		List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB(L_2, /*hidden argument*/List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB_RuntimeMethod_var);
		// s_PrevModifiedMaterials.AddRange(_modifiedMaterials);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_3 = ((UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields*)il2cpp_codegen_static_fields_for(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var))->get_s_PrevModifiedMaterials_53();
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_4 = __this->get__modifiedMaterials_46();
		NullCheck(L_3);
		List_1_AddRange_mA7CC85A1456655584AA666037C9EE401745CA8DF(L_3, L_4, /*hidden argument*/List_1_AddRange_mA7CC85A1456655584AA666037C9EE401745CA8DF_RuntimeMethod_var);
		// _modifiedMaterials.Clear();
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_5 = __this->get__modifiedMaterials_46();
		NullCheck(L_5);
		List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB(L_5, /*hidden argument*/List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB_RuntimeMethod_var);
		// if (m_ShouldRecalculateStencil)
		bool L_6 = ((MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE *)__this)->get_m_ShouldRecalculateStencil_26();
		if (!L_6)
		{
			goto IL_006e;
		}
	}
	{
		// var rootCanvas = MaskUtilities.FindRootSortOverrideCanvas(transform);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = MaskUtilities_FindRootSortOverrideCanvas_m4760B83EDA0BF632346FDE90302AB43EAC0524E0(L_7, /*hidden argument*/NULL);
		V_3 = L_8;
		// m_StencilValue = maskable ? MaskUtilities.GetStencilDepth(transform, rootCanvas) : 0;
		bool L_9;
		L_9 = MaskableGraphic_get_maskable_mAB089F676929CD6D1CA9FC204EE04A10EF86B6E8_inline(__this, /*hidden argument*/NULL);
		G_B2_0 = __this;
		if (L_9)
		{
			G_B3_0 = __this;
			goto IL_0056;
		}
	}
	{
		G_B4_0 = 0;
		G_B4_1 = G_B2_0;
		goto IL_0062;
	}

IL_0056:
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = V_3;
		int32_t L_12;
		L_12 = MaskUtilities_GetStencilDepth_m102B187BAF39A903EA0BEC302B9DFC2993BC1E30(L_10, L_11, /*hidden argument*/NULL);
		G_B4_0 = L_12;
		G_B4_1 = G_B3_0;
	}

IL_0062:
	{
		NullCheck(G_B4_1);
		((MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE *)G_B4_1)->set_m_StencilValue_34(G_B4_0);
		// m_ShouldRecalculateStencil = false;
		((MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE *)__this)->set_m_ShouldRecalculateStencil_26((bool)0);
	}

IL_006e:
	{
		// var count = activeMeshIndices.CountFast();
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_13;
		L_13 = UIParticle_get_activeMeshIndices_m423987C46CE4EC5176502A0BF43439C08B44E8FF_inline(__this, /*hidden argument*/NULL);
		int32_t L_14;
		L_14 = ListExtensions_CountFast_mB56B0BE6BCAC5AE99E6E829D67E89054C308EFC7(L_13, /*hidden argument*/NULL);
		V_0 = L_14;
		// if (count == 0 || !isActiveAndEnabled || particles.Count == 0)
		int32_t L_15 = V_0;
		if (!L_15)
		{
			goto IL_0092;
		}
	}
	{
		bool L_16;
		L_16 = Behaviour_get_isActiveAndEnabled_mDD843C0271D492C1E08E0F8DEE8B6F1CFA951BFA(__this, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0092;
		}
	}
	{
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_17;
		L_17 = UIParticle_get_particles_m248BEC4C388F11152591A68AC7B94ECD8622AC0F_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		int32_t L_18;
		L_18 = List_1_get_Count_m717EDAB95A84624B81D546CBEDC84B4664B7B678_inline(L_17, /*hidden argument*/List_1_get_Count_m717EDAB95A84624B81D546CBEDC84B4664B7B678_RuntimeMethod_var);
		if (L_18)
		{
			goto IL_00a4;
		}
	}

IL_0092:
	{
		// canvasRenderer.Clear();
		CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * L_19;
		L_19 = Graphic_get_canvasRenderer_m33EC3A53310593E87C540654486C7A73A66FCF4A(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		CanvasRenderer_Clear_m8793B46F28365E540BB2B2ADBA439D255E350CC4(L_19, /*hidden argument*/NULL);
		// ClearPreviousMaterials();
		UIParticle_ClearPreviousMaterials_m07B5E24ACBE55CEC116E97C495FDA000FB007E11(__this, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_00a4:
	{
		// GetComponents(typeof(IMaterialModifier), s_Components);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_20 = { reinterpret_cast<intptr_t> (IMaterialModifier_t36437594488A51EC8B02886F7FAC5D32027A33DA_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21;
		L_21 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_20, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var);
		List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * L_22 = ((UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields*)il2cpp_codegen_static_fields_for(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var))->get_s_Components_54();
		Component_GetComponents_m0268D42CD0215CD9247CF74AA881BAACE10357FC(__this, L_21, L_22, /*hidden argument*/NULL);
		// var materialCount = Mathf.Min(8, count);
		int32_t L_23 = V_0;
		int32_t L_24;
		L_24 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519(8, L_23, /*hidden argument*/NULL);
		V_1 = L_24;
		// canvasRenderer.materialCount = materialCount;
		CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * L_25;
		L_25 = Graphic_get_canvasRenderer_m33EC3A53310593E87C540654486C7A73A66FCF4A(__this, /*hidden argument*/NULL);
		int32_t L_26 = V_1;
		NullCheck(L_25);
		CanvasRenderer_set_materialCount_m00FE6113ACA7FE9AD51DA0A9A0B013D7C811E5DB(L_25, L_26, /*hidden argument*/NULL);
		// var j = 0;
		V_2 = 0;
		// for (var i = 0; i < particles.Count; i++)
		V_4 = 0;
		goto IL_0244;
	}

IL_00d7:
	{
		// if (materialCount <= j) break;
		int32_t L_27 = V_1;
		int32_t L_28 = V_2;
		if ((((int32_t)L_27) <= ((int32_t)L_28)))
		{
			goto IL_0256;
		}
	}
	{
		// var ps = particles[i];
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_29;
		L_29 = UIParticle_get_particles_m248BEC4C388F11152591A68AC7B94ECD8622AC0F_inline(__this, /*hidden argument*/NULL);
		int32_t L_30 = V_4;
		NullCheck(L_29);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_31;
		L_31 = List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_inline(L_29, L_30, /*hidden argument*/List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_RuntimeMethod_var);
		V_5 = L_31;
		// if (!ps) continue;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_32 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_33;
		L_33 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_32, /*hidden argument*/NULL);
		if (!L_33)
		{
			goto IL_023e;
		}
	}
	{
		// var r = ps.GetComponent<ParticleSystemRenderer>();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_34 = V_5;
		NullCheck(L_34);
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_35;
		L_35 = Component_GetComponent_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m433D0F036D744378DDD67C566DDC69B19052E933(L_34, /*hidden argument*/Component_GetComponent_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m433D0F036D744378DDD67C566DDC69B19052E933_RuntimeMethod_var);
		V_6 = L_35;
		// r.GetSharedMaterials(s_TempMaterials);
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_36 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_37 = ((UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields*)il2cpp_codegen_static_fields_for(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var))->get_s_TempMaterials_50();
		NullCheck(L_36);
		Renderer_GetSharedMaterials_mC59AC759DA507513FA4C81F417AD23EF4BFAAC92(L_36, L_37, /*hidden argument*/NULL);
		// var index = i * 2;
		int32_t L_38 = V_4;
		V_7 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_38, (int32_t)2));
		// if (activeMeshIndices.Count <= index) break;
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_39;
		L_39 = UIParticle_get_activeMeshIndices_m423987C46CE4EC5176502A0BF43439C08B44E8FF_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_39);
		int32_t L_40;
		L_40 = List_1_get_Count_m8547E31DBBBA85E2090BA3076611614A4C8F1A18_inline(L_39, /*hidden argument*/List_1_get_Count_m8547E31DBBBA85E2090BA3076611614A4C8F1A18_RuntimeMethod_var);
		int32_t L_41 = V_7;
		if ((((int32_t)L_40) <= ((int32_t)L_41)))
		{
			goto IL_0256;
		}
	}
	{
		// if (activeMeshIndices[index] && 0 < s_TempMaterials.Count)
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_42;
		L_42 = UIParticle_get_activeMeshIndices_m423987C46CE4EC5176502A0BF43439C08B44E8FF_inline(__this, /*hidden argument*/NULL);
		int32_t L_43 = V_7;
		NullCheck(L_42);
		bool L_44;
		L_44 = List_1_get_Item_m6608CAE85049DBB39679FB41D1266AF732C97461_inline(L_42, L_43, /*hidden argument*/List_1_get_Item_m6608CAE85049DBB39679FB41D1266AF732C97461_RuntimeMethod_var);
		if (!L_44)
		{
			goto IL_01aa;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_45 = ((UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields*)il2cpp_codegen_static_fields_for(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var))->get_s_TempMaterials_50();
		NullCheck(L_45);
		int32_t L_46;
		L_46 = List_1_get_Count_m2D5331F0E51DEDFD0BC68D4AE665FD93010CA0BC_inline(L_45, /*hidden argument*/List_1_get_Count_m2D5331F0E51DEDFD0BC68D4AE665FD93010CA0BC_RuntimeMethod_var);
		if ((((int32_t)0) >= ((int32_t)L_46)))
		{
			goto IL_01aa;
		}
	}
	{
		// var mat = GetModifiedMaterial(s_TempMaterials[0], ps.GetTextureForSprite());
		IL2CPP_RUNTIME_CLASS_INIT(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_47 = ((UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields*)il2cpp_codegen_static_fields_for(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var))->get_s_TempMaterials_50();
		NullCheck(L_47);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_48;
		L_48 = List_1_get_Item_m13B9C8BE116476A73890AFB00F5596C13FC3FFAF_inline(L_47, 0, /*hidden argument*/List_1_get_Item_m13B9C8BE116476A73890AFB00F5596C13FC3FFAF_RuntimeMethod_var);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_49 = V_5;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_50;
		L_50 = ParticleSystemExtensions_GetTextureForSprite_m2995FEB5A3A46D54AADB90DA1F3029BA34A160A7(L_49, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_51;
		L_51 = UIParticle_GetModifiedMaterial_mB47045F1F91D55A1726442D5E517D4EBAADCD30A(__this, L_48, L_50, /*hidden argument*/NULL);
		V_8 = L_51;
		// for (var k = 1; k < s_Components.Count; k++)
		V_9 = 1;
		goto IL_0181;
	}

IL_0161:
	{
		// mat = (s_Components[k] as IMaterialModifier).GetModifiedMaterial(mat);
		IL2CPP_RUNTIME_CLASS_INIT(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var);
		List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * L_52 = ((UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields*)il2cpp_codegen_static_fields_for(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var))->get_s_Components_54();
		int32_t L_53 = V_9;
		NullCheck(L_52);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_54;
		L_54 = List_1_get_Item_m99F4A60865784DCE41B4ECAEBD910543BBB87A1F_inline(L_52, L_53, /*hidden argument*/List_1_get_Item_m99F4A60865784DCE41B4ECAEBD910543BBB87A1F_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_55 = V_8;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_54, IMaterialModifier_t36437594488A51EC8B02886F7FAC5D32027A33DA_il2cpp_TypeInfo_var)));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_56;
		L_56 = InterfaceFuncInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE *, Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(0 /* UnityEngine.Material UnityEngine.UI.IMaterialModifier::GetModifiedMaterial(UnityEngine.Material) */, IMaterialModifier_t36437594488A51EC8B02886F7FAC5D32027A33DA_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_54, IMaterialModifier_t36437594488A51EC8B02886F7FAC5D32027A33DA_il2cpp_TypeInfo_var)), L_55);
		V_8 = L_56;
		// for (var k = 1; k < s_Components.Count; k++)
		int32_t L_57 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_57, (int32_t)1));
	}

IL_0181:
	{
		// for (var k = 1; k < s_Components.Count; k++)
		int32_t L_58 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var);
		List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * L_59 = ((UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields*)il2cpp_codegen_static_fields_for(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var))->get_s_Components_54();
		NullCheck(L_59);
		int32_t L_60;
		L_60 = List_1_get_Count_m9F55C8ADF8B0877FF8961B5A9BA55A9A7BFF904E_inline(L_59, /*hidden argument*/List_1_get_Count_m9F55C8ADF8B0877FF8961B5A9BA55A9A7BFF904E_RuntimeMethod_var);
		if ((((int32_t)L_58) < ((int32_t)L_60)))
		{
			goto IL_0161;
		}
	}
	{
		// canvasRenderer.SetMaterial(mat, j);
		CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * L_61;
		L_61 = Graphic_get_canvasRenderer_m33EC3A53310593E87C540654486C7A73A66FCF4A(__this, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_62 = V_8;
		int32_t L_63 = V_2;
		NullCheck(L_61);
		CanvasRenderer_SetMaterial_m1D7A8BD75D5DEFC5F0A27FFBA2A2A84755EE421F(L_61, L_62, L_63, /*hidden argument*/NULL);
		// UpdateMaterialProperties(r, j);
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_64 = V_6;
		int32_t L_65 = V_2;
		UIParticle_UpdateMaterialProperties_m08FC37AEC07DE379D715496994CAC154E346ADAE(__this, L_64, L_65, /*hidden argument*/NULL);
		// j++;
		int32_t L_66 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
	}

IL_01aa:
	{
		// index++;
		int32_t L_67 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
		// if (activeMeshIndices.Count <= index || materialCount <= j) break;
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_68;
		L_68 = UIParticle_get_activeMeshIndices_m423987C46CE4EC5176502A0BF43439C08B44E8FF_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_68);
		int32_t L_69;
		L_69 = List_1_get_Count_m8547E31DBBBA85E2090BA3076611614A4C8F1A18_inline(L_68, /*hidden argument*/List_1_get_Count_m8547E31DBBBA85E2090BA3076611614A4C8F1A18_RuntimeMethod_var);
		int32_t L_70 = V_7;
		if ((((int32_t)L_69) <= ((int32_t)L_70)))
		{
			goto IL_0256;
		}
	}
	{
		int32_t L_71 = V_1;
		int32_t L_72 = V_2;
		if ((((int32_t)L_71) <= ((int32_t)L_72)))
		{
			goto IL_0256;
		}
	}
	{
		// if (activeMeshIndices[index] && 1 < s_TempMaterials.Count)
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_73;
		L_73 = UIParticle_get_activeMeshIndices_m423987C46CE4EC5176502A0BF43439C08B44E8FF_inline(__this, /*hidden argument*/NULL);
		int32_t L_74 = V_7;
		NullCheck(L_73);
		bool L_75;
		L_75 = List_1_get_Item_m6608CAE85049DBB39679FB41D1266AF732C97461_inline(L_73, L_74, /*hidden argument*/List_1_get_Item_m6608CAE85049DBB39679FB41D1266AF732C97461_RuntimeMethod_var);
		if (!L_75)
		{
			goto IL_023e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_76 = ((UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields*)il2cpp_codegen_static_fields_for(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var))->get_s_TempMaterials_50();
		NullCheck(L_76);
		int32_t L_77;
		L_77 = List_1_get_Count_m2D5331F0E51DEDFD0BC68D4AE665FD93010CA0BC_inline(L_76, /*hidden argument*/List_1_get_Count_m2D5331F0E51DEDFD0BC68D4AE665FD93010CA0BC_RuntimeMethod_var);
		if ((((int32_t)1) >= ((int32_t)L_77)))
		{
			goto IL_023e;
		}
	}
	{
		// var mat = GetModifiedMaterial(s_TempMaterials[1], null);
		IL2CPP_RUNTIME_CLASS_INIT(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_78 = ((UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields*)il2cpp_codegen_static_fields_for(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var))->get_s_TempMaterials_50();
		NullCheck(L_78);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_79;
		L_79 = List_1_get_Item_m13B9C8BE116476A73890AFB00F5596C13FC3FFAF_inline(L_78, 1, /*hidden argument*/List_1_get_Item_m13B9C8BE116476A73890AFB00F5596C13FC3FFAF_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_80;
		L_80 = UIParticle_GetModifiedMaterial_mB47045F1F91D55A1726442D5E517D4EBAADCD30A(__this, L_79, (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)NULL, /*hidden argument*/NULL);
		V_10 = L_80;
		// for (var k = 1; k < s_Components.Count; k++)
		V_11 = 1;
		goto IL_021e;
	}

IL_01fe:
	{
		// mat = (s_Components[k] as IMaterialModifier).GetModifiedMaterial(mat);
		IL2CPP_RUNTIME_CLASS_INIT(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var);
		List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * L_81 = ((UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields*)il2cpp_codegen_static_fields_for(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var))->get_s_Components_54();
		int32_t L_82 = V_11;
		NullCheck(L_81);
		Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * L_83;
		L_83 = List_1_get_Item_m99F4A60865784DCE41B4ECAEBD910543BBB87A1F_inline(L_81, L_82, /*hidden argument*/List_1_get_Item_m99F4A60865784DCE41B4ECAEBD910543BBB87A1F_RuntimeMethod_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_84 = V_10;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_83, IMaterialModifier_t36437594488A51EC8B02886F7FAC5D32027A33DA_il2cpp_TypeInfo_var)));
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_85;
		L_85 = InterfaceFuncInvoker1< Material_t8927C00353A72755313F046D0CE85178AE8218EE *, Material_t8927C00353A72755313F046D0CE85178AE8218EE * >::Invoke(0 /* UnityEngine.Material UnityEngine.UI.IMaterialModifier::GetModifiedMaterial(UnityEngine.Material) */, IMaterialModifier_t36437594488A51EC8B02886F7FAC5D32027A33DA_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_83, IMaterialModifier_t36437594488A51EC8B02886F7FAC5D32027A33DA_il2cpp_TypeInfo_var)), L_84);
		V_10 = L_85;
		// for (var k = 1; k < s_Components.Count; k++)
		int32_t L_86 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)1));
	}

IL_021e:
	{
		// for (var k = 1; k < s_Components.Count; k++)
		int32_t L_87 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var);
		List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * L_88 = ((UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields*)il2cpp_codegen_static_fields_for(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var))->get_s_Components_54();
		NullCheck(L_88);
		int32_t L_89;
		L_89 = List_1_get_Count_m9F55C8ADF8B0877FF8961B5A9BA55A9A7BFF904E_inline(L_88, /*hidden argument*/List_1_get_Count_m9F55C8ADF8B0877FF8961B5A9BA55A9A7BFF904E_RuntimeMethod_var);
		if ((((int32_t)L_87) < ((int32_t)L_89)))
		{
			goto IL_01fe;
		}
	}
	{
		// canvasRenderer.SetMaterial(mat, j++);
		CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * L_90;
		L_90 = Graphic_get_canvasRenderer_m33EC3A53310593E87C540654486C7A73A66FCF4A(__this, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_91 = V_10;
		int32_t L_92 = V_2;
		int32_t L_93 = L_92;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_93, (int32_t)1));
		NullCheck(L_90);
		CanvasRenderer_SetMaterial_m1D7A8BD75D5DEFC5F0A27FFBA2A2A84755EE421F(L_90, L_91, L_93, /*hidden argument*/NULL);
	}

IL_023e:
	{
		// for (var i = 0; i < particles.Count; i++)
		int32_t L_94 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_94, (int32_t)1));
	}

IL_0244:
	{
		// for (var i = 0; i < particles.Count; i++)
		int32_t L_95 = V_4;
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_96;
		L_96 = UIParticle_get_particles_m248BEC4C388F11152591A68AC7B94ECD8622AC0F_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_96);
		int32_t L_97;
		L_97 = List_1_get_Count_m717EDAB95A84624B81D546CBEDC84B4664B7B678_inline(L_96, /*hidden argument*/List_1_get_Count_m717EDAB95A84624B81D546CBEDC84B4664B7B678_RuntimeMethod_var);
		if ((((int32_t)L_95) < ((int32_t)L_97)))
		{
			goto IL_00d7;
		}
	}

IL_0256:
	{
		// ClearPreviousMaterials();
		UIParticle_ClearPreviousMaterials_m07B5E24ACBE55CEC116E97C495FDA000FB007E11(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::ClearPreviousMaterials()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_ClearPreviousMaterials_m07B5E24ACBE55CEC116E97C495FDA000FB007E11 (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mB381E883DF3917B1939FCC6ACAFB0D2F261E84DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBDF9C2CE29A407750480474BA191248286A4CDD4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m0F57CB6207605CE09FE2619C57FECF7C5BEF3A0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m01E37193361B61CC3FF93E932ECCBB8FF556044C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModifiedMaterial_t035B918924C47AEE757A8D0897C6EF8EFF782EE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StencilMaterial_t498DA9A7C15643B79E27575F27F1D2FC2FEA6AC5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// foreach (var m in s_PrevMaskMaterials)
		IL2CPP_RUNTIME_CLASS_INIT(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_0 = ((UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields*)il2cpp_codegen_static_fields_for(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var))->get_s_PrevMaskMaterials_52();
		NullCheck(L_0);
		Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83  L_1;
		L_1 = List_1_GetEnumerator_m01E37193361B61CC3FF93E932ECCBB8FF556044C(L_0, /*hidden argument*/List_1_GetEnumerator_m01E37193361B61CC3FF93E932ECCBB8FF556044C_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000b:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0019;
		}

IL_000d:
		{
			// foreach (var m in s_PrevMaskMaterials)
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_2;
			L_2 = Enumerator_get_Current_m0F57CB6207605CE09FE2619C57FECF7C5BEF3A0F_inline((Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m0F57CB6207605CE09FE2619C57FECF7C5BEF3A0F_RuntimeMethod_var);
			// StencilMaterial.Remove(m);
			IL2CPP_RUNTIME_CLASS_INIT(StencilMaterial_t498DA9A7C15643B79E27575F27F1D2FC2FEA6AC5_il2cpp_TypeInfo_var);
			StencilMaterial_Remove_m8C971D3D0DDDD92710C011FD7B630E6C853B744D(L_2, /*hidden argument*/NULL);
		}

IL_0019:
		{
			// foreach (var m in s_PrevMaskMaterials)
			bool L_3;
			L_3 = Enumerator_MoveNext_mBDF9C2CE29A407750480474BA191248286A4CDD4((Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mBDF9C2CE29A407750480474BA191248286A4CDD4_RuntimeMethod_var);
			if (L_3)
			{
				goto IL_000d;
			}
		}

IL_0022:
		{
			IL2CPP_LEAVE(0x32, FINALLY_0024);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mB381E883DF3917B1939FCC6ACAFB0D2F261E84DC((Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mB381E883DF3917B1939FCC6ACAFB0D2F261E84DC_RuntimeMethod_var);
		IL2CPP_END_FINALLY(36)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x32, IL_0032)
	}

IL_0032:
	{
		// s_PrevMaskMaterials.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_4 = ((UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields*)il2cpp_codegen_static_fields_for(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var))->get_s_PrevMaskMaterials_52();
		NullCheck(L_4);
		List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB(L_4, /*hidden argument*/List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB_RuntimeMethod_var);
		// foreach (var m in s_PrevModifiedMaterials)
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_5 = ((UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields*)il2cpp_codegen_static_fields_for(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var))->get_s_PrevModifiedMaterials_53();
		NullCheck(L_5);
		Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83  L_6;
		L_6 = List_1_GetEnumerator_m01E37193361B61CC3FF93E932ECCBB8FF556044C(L_5, /*hidden argument*/List_1_GetEnumerator_m01E37193361B61CC3FF93E932ECCBB8FF556044C_RuntimeMethod_var);
		V_0 = L_6;
	}

IL_0047:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0055;
		}

IL_0049:
		{
			// foreach (var m in s_PrevModifiedMaterials)
			Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7;
			L_7 = Enumerator_get_Current_m0F57CB6207605CE09FE2619C57FECF7C5BEF3A0F_inline((Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m0F57CB6207605CE09FE2619C57FECF7C5BEF3A0F_RuntimeMethod_var);
			// ModifiedMaterial.Remove(m);
			IL2CPP_RUNTIME_CLASS_INIT(ModifiedMaterial_t035B918924C47AEE757A8D0897C6EF8EFF782EE7_il2cpp_TypeInfo_var);
			ModifiedMaterial_Remove_mC5A4773C7C17AFFCD0567F3BEB88C46C26A47E6D(L_7, /*hidden argument*/NULL);
		}

IL_0055:
		{
			// foreach (var m in s_PrevModifiedMaterials)
			bool L_8;
			L_8 = Enumerator_MoveNext_mBDF9C2CE29A407750480474BA191248286A4CDD4((Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mBDF9C2CE29A407750480474BA191248286A4CDD4_RuntimeMethod_var);
			if (L_8)
			{
				goto IL_0049;
			}
		}

IL_005e:
		{
			IL2CPP_LEAVE(0x6E, FINALLY_0060);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0060;
	}

FINALLY_0060:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mB381E883DF3917B1939FCC6ACAFB0D2F261E84DC((Enumerator_t3C12EFB053DE987953C2A8A4793E00F2E1FF9A83 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mB381E883DF3917B1939FCC6ACAFB0D2F261E84DC_RuntimeMethod_var);
		IL2CPP_END_FINALLY(96)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(96)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x6E, IL_006e)
	}

IL_006e:
	{
		// s_PrevModifiedMaterials.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_9 = ((UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields*)il2cpp_codegen_static_fields_for(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var))->get_s_PrevModifiedMaterials_53();
		NullCheck(L_9);
		List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB(L_9, /*hidden argument*/List_1_Clear_m736C259A1E09CD44D00E684A387870B1E021F8CB_RuntimeMethod_var);
		// }
		return;
	}
}
// UnityEngine.Material Coffee.UIExtensions.UIParticle::GetModifiedMaterial(UnityEngine.Material,UnityEngine.Texture2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Material_t8927C00353A72755313F046D0CE85178AE8218EE * UIParticle_GetModifiedMaterial_mB47045F1F91D55A1726442D5E517D4EBAADCD30A (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___baseMaterial0, Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___texture1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ModifiedMaterial_t035B918924C47AEE757A8D0897C6EF8EFF782EE7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StencilMaterial_t498DA9A7C15643B79E27575F27F1D2FC2FEA6AC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// if (0 < m_StencilValue)
		int32_t L_0 = ((MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE *)__this)->get_m_StencilValue_34();
		if ((((int32_t)0) >= ((int32_t)L_0)))
		{
			goto IL_003c;
		}
	}
	{
		// baseMaterial = StencilMaterial.Add(baseMaterial, (1 << m_StencilValue) - 1, StencilOp.Keep, CompareFunction.Equal, ColorWriteMask.All, (1 << m_StencilValue) - 1, 0);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_1 = ___baseMaterial0;
		int32_t L_2 = ((MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE *)__this)->get_m_StencilValue_34();
		int32_t L_3 = ((MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE *)__this)->get_m_StencilValue_34();
		IL2CPP_RUNTIME_CLASS_INIT(StencilMaterial_t498DA9A7C15643B79E27575F27F1D2FC2FEA6AC5_il2cpp_TypeInfo_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_4;
		L_4 = StencilMaterial_Add_m096013C81D92CB4B37053C97B427A64EDFA61F25(L_1, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)31))))), (int32_t)1)), 0, 3, ((int32_t)15), ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)1<<(int32_t)((int32_t)((int32_t)L_3&(int32_t)((int32_t)31))))), (int32_t)1)), 0, /*hidden argument*/NULL);
		___baseMaterial0 = L_4;
		// _maskMaterials.Add(baseMaterial);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_5 = __this->get__maskMaterials_47();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_6 = ___baseMaterial0;
		NullCheck(L_5);
		List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10(L_5, L_6, /*hidden argument*/List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10_RuntimeMethod_var);
	}

IL_003c:
	{
		// if (texture == null && m_AnimatableProperties.Length == 0) return baseMaterial;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_7 = ___texture1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_7, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0050;
		}
	}
	{
		AnimatablePropertyU5BU5D_t6C258C617AAB73DF8E000037B670ED757286E1DD* L_9 = __this->get_m_AnimatableProperties_40();
		NullCheck(L_9);
		if ((((RuntimeArray*)L_9)->max_length))
		{
			goto IL_0050;
		}
	}
	{
		// if (texture == null && m_AnimatableProperties.Length == 0) return baseMaterial;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_10 = ___baseMaterial0;
		return L_10;
	}

IL_0050:
	{
		// var id = m_AnimatableProperties.Length == 0 ? 0 : GetInstanceID();
		AnimatablePropertyU5BU5D_t6C258C617AAB73DF8E000037B670ED757286E1DD* L_11 = __this->get_m_AnimatableProperties_40();
		NullCheck(L_11);
		if (!(((RuntimeArray*)L_11)->max_length))
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_12;
		L_12 = Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501(__this, /*hidden argument*/NULL);
		G_B8_0 = L_12;
		goto IL_0062;
	}

IL_0061:
	{
		G_B8_0 = 0;
	}

IL_0062:
	{
		V_0 = G_B8_0;
		// baseMaterial = ModifiedMaterial.Add(baseMaterial, texture, id);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13 = ___baseMaterial0;
		Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * L_14 = ___texture1;
		int32_t L_15 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(ModifiedMaterial_t035B918924C47AEE757A8D0897C6EF8EFF782EE7_il2cpp_TypeInfo_var);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_16;
		L_16 = ModifiedMaterial_Add_mF7D0D18F25ED663C544D586D4A172D437F82843C(L_13, L_14, L_15, /*hidden argument*/NULL);
		___baseMaterial0 = L_16;
		// _modifiedMaterials.Add(baseMaterial);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_17 = __this->get__modifiedMaterials_46();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_18 = ___baseMaterial0;
		NullCheck(L_17);
		List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10(L_17, L_18, /*hidden argument*/List_1_Add_m93A08EA489A09A73780119772DE17BA06864EB10_RuntimeMethod_var);
		// return baseMaterial;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19 = ___baseMaterial0;
		return L_19;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::UpdateMaterialProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_UpdateMaterialProperties_m3E45E7D56DA32D4C93078F08ABE3D5F46390EECC (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m433D0F036D744378DDD67C566DDC69B19052E933_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m2D5331F0E51DEDFD0BC68D4AE665FD93010CA0BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m717EDAB95A84624B81D546CBEDC84B4664B7B678_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m6608CAE85049DBB39679FB41D1266AF732C97461_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * V_4 = NULL;
	ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * V_5 = NULL;
	{
		// if (m_AnimatableProperties.Length == 0) return;
		AnimatablePropertyU5BU5D_t6C258C617AAB73DF8E000037B670ED757286E1DD* L_0 = __this->get_m_AnimatableProperties_40();
		NullCheck(L_0);
		if ((((RuntimeArray*)L_0)->max_length))
		{
			goto IL_000a;
		}
	}
	{
		// if (m_AnimatableProperties.Length == 0) return;
		return;
	}

IL_000a:
	{
		// var count = activeMeshIndices.CountFast();
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_1;
		L_1 = UIParticle_get_activeMeshIndices_m423987C46CE4EC5176502A0BF43439C08B44E8FF_inline(__this, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = ListExtensions_CountFast_mB56B0BE6BCAC5AE99E6E829D67E89054C308EFC7(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// var materialCount = Mathf.Max(8, count);
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(8, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// canvasRenderer.materialCount = materialCount;
		CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * L_5;
		L_5 = Graphic_get_canvasRenderer_m33EC3A53310593E87C540654486C7A73A66FCF4A(__this, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		NullCheck(L_5);
		CanvasRenderer_set_materialCount_m00FE6113ACA7FE9AD51DA0A9A0B013D7C811E5DB(L_5, L_6, /*hidden argument*/NULL);
		// var j = 0;
		V_2 = 0;
		// for (var i = 0; i < particles.Count; i++)
		V_3 = 0;
		goto IL_008e;
	}

IL_0030:
	{
		// if (materialCount <= j) break;
		int32_t L_7 = V_1;
		int32_t L_8 = V_2;
		if ((((int32_t)L_7) <= ((int32_t)L_8)))
		{
			goto IL_009c;
		}
	}
	{
		// var ps = particles[i];
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_9;
		L_9 = UIParticle_get_particles_m248BEC4C388F11152591A68AC7B94ECD8622AC0F_inline(__this, /*hidden argument*/NULL);
		int32_t L_10 = V_3;
		NullCheck(L_9);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_11;
		L_11 = List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_inline(L_9, L_10, /*hidden argument*/List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_RuntimeMethod_var);
		V_4 = L_11;
		// if (!ps) continue;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_12 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_008a;
		}
	}
	{
		// var r = ps.GetComponent<ParticleSystemRenderer>();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_14 = V_4;
		NullCheck(L_14);
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_15;
		L_15 = Component_GetComponent_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m433D0F036D744378DDD67C566DDC69B19052E933(L_14, /*hidden argument*/Component_GetComponent_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m433D0F036D744378DDD67C566DDC69B19052E933_RuntimeMethod_var);
		V_5 = L_15;
		// r.GetSharedMaterials(s_TempMaterials);
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_16 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_17 = ((UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields*)il2cpp_codegen_static_fields_for(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var))->get_s_TempMaterials_50();
		NullCheck(L_16);
		Renderer_GetSharedMaterials_mC59AC759DA507513FA4C81F417AD23EF4BFAAC92(L_16, L_17, /*hidden argument*/NULL);
		// if (activeMeshIndices[i * 2] && 0 < s_TempMaterials.Count)
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_18;
		L_18 = UIParticle_get_activeMeshIndices_m423987C46CE4EC5176502A0BF43439C08B44E8FF_inline(__this, /*hidden argument*/NULL);
		int32_t L_19 = V_3;
		NullCheck(L_18);
		bool L_20;
		L_20 = List_1_get_Item_m6608CAE85049DBB39679FB41D1266AF732C97461_inline(L_18, ((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)2)), /*hidden argument*/List_1_get_Item_m6608CAE85049DBB39679FB41D1266AF732C97461_RuntimeMethod_var);
		if (!L_20)
		{
			goto IL_008a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_21 = ((UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields*)il2cpp_codegen_static_fields_for(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var))->get_s_TempMaterials_50();
		NullCheck(L_21);
		int32_t L_22;
		L_22 = List_1_get_Count_m2D5331F0E51DEDFD0BC68D4AE665FD93010CA0BC_inline(L_21, /*hidden argument*/List_1_get_Count_m2D5331F0E51DEDFD0BC68D4AE665FD93010CA0BC_RuntimeMethod_var);
		if ((((int32_t)0) >= ((int32_t)L_22)))
		{
			goto IL_008a;
		}
	}
	{
		// UpdateMaterialProperties(r, j);
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_23 = V_5;
		int32_t L_24 = V_2;
		UIParticle_UpdateMaterialProperties_m08FC37AEC07DE379D715496994CAC154E346ADAE(__this, L_23, L_24, /*hidden argument*/NULL);
		// j++;
		int32_t L_25 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_25, (int32_t)1));
	}

IL_008a:
	{
		// for (var i = 0; i < particles.Count; i++)
		int32_t L_26 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_008e:
	{
		// for (var i = 0; i < particles.Count; i++)
		int32_t L_27 = V_3;
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_28;
		L_28 = UIParticle_get_particles_m248BEC4C388F11152591A68AC7B94ECD8622AC0F_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		int32_t L_29;
		L_29 = List_1_get_Count_m717EDAB95A84624B81D546CBEDC84B4664B7B678_inline(L_28, /*hidden argument*/List_1_get_Count_m717EDAB95A84624B81D546CBEDC84B4664B7B678_RuntimeMethod_var);
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_0030;
		}
	}

IL_009c:
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::UpdateMaterialProperties(UnityEngine.Renderer,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_UpdateMaterialProperties_m08FC37AEC07DE379D715496994CAC154E346ADAE (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * ___r0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * V_0 = NULL;
	AnimatablePropertyU5BU5D_t6C258C617AAB73DF8E000037B670ED757286E1DD* V_1 = NULL;
	int32_t V_2 = 0;
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * G_B5_0 = NULL;
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * G_B5_1 = NULL;
	MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * G_B4_0 = NULL;
	Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * G_B4_1 = NULL;
	{
		// if (m_AnimatableProperties.Length == 0 || canvasRenderer.materialCount <= index) return;
		AnimatablePropertyU5BU5D_t6C258C617AAB73DF8E000037B670ED757286E1DD* L_0 = __this->get_m_AnimatableProperties_40();
		NullCheck(L_0);
		if (!(((RuntimeArray*)L_0)->max_length))
		{
			goto IL_0017;
		}
	}
	{
		CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * L_1;
		L_1 = Graphic_get_canvasRenderer_m33EC3A53310593E87C540654486C7A73A66FCF4A(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = CanvasRenderer_get_materialCount_mF29C9816FEC6D8189DDC7AB16B40EC56FAB59488(L_1, /*hidden argument*/NULL);
		int32_t L_3 = ___index1;
		if ((((int32_t)L_2) > ((int32_t)L_3)))
		{
			goto IL_0018;
		}
	}

IL_0017:
	{
		// if (m_AnimatableProperties.Length == 0 || canvasRenderer.materialCount <= index) return;
		return;
	}

IL_0018:
	{
		// r.GetPropertyBlock(s_Mpb ?? (s_Mpb = new MaterialPropertyBlock()));
		Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * L_4 = ___r0;
		IL2CPP_RUNTIME_CLASS_INIT(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_5 = ((UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields*)il2cpp_codegen_static_fields_for(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var))->get_s_Mpb_51();
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_6 = L_5;
		G_B4_0 = L_6;
		G_B4_1 = L_4;
		if (L_6)
		{
			G_B5_0 = L_6;
			G_B5_1 = L_4;
			goto IL_002d;
		}
	}
	{
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_7 = (MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 *)il2cpp_codegen_object_new(MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0_il2cpp_TypeInfo_var);
		MaterialPropertyBlock__ctor_m8EB29E415C68427B841A0C68A902A8368B9228E8(L_7, /*hidden argument*/NULL);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_8 = L_7;
		IL2CPP_RUNTIME_CLASS_INIT(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var);
		((UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields*)il2cpp_codegen_static_fields_for(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var))->set_s_Mpb_51(L_8);
		G_B5_0 = L_8;
		G_B5_1 = G_B4_1;
	}

IL_002d:
	{
		NullCheck(G_B5_1);
		Renderer_GetPropertyBlock_mE73E51E42ED4F800C6422F5461A4D9E1DB61AEDC(G_B5_1, G_B5_0, /*hidden argument*/NULL);
		// if (s_Mpb.isEmpty) return;
		IL2CPP_RUNTIME_CLASS_INIT(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_9 = ((UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields*)il2cpp_codegen_static_fields_for(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var))->get_s_Mpb_51();
		NullCheck(L_9);
		bool L_10;
		L_10 = MaterialPropertyBlock_get_isEmpty_mAAFA06394C15E68FD9749DD2B94E5ACFBC1FDED4(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_003f;
		}
	}
	{
		// if (s_Mpb.isEmpty) return;
		return;
	}

IL_003f:
	{
		// var mat = canvasRenderer.GetMaterial(index);
		CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * L_11;
		L_11 = Graphic_get_canvasRenderer_m33EC3A53310593E87C540654486C7A73A66FCF4A(__this, /*hidden argument*/NULL);
		int32_t L_12 = ___index1;
		NullCheck(L_11);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_13;
		L_13 = CanvasRenderer_GetMaterial_mA674C9DC47C63CCFCDED7382D923A7796C8BE308(L_11, L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		// if (!mat) return;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_15;
		L_15 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_0055;
		}
	}
	{
		// if (!mat) return;
		return;
	}

IL_0055:
	{
		// foreach (var ap in m_AnimatableProperties)
		AnimatablePropertyU5BU5D_t6C258C617AAB73DF8E000037B670ED757286E1DD* L_16 = __this->get_m_AnimatableProperties_40();
		V_1 = L_16;
		V_2 = 0;
		goto IL_0072;
	}

IL_0060:
	{
		// foreach (var ap in m_AnimatableProperties)
		AnimatablePropertyU5BU5D_t6C258C617AAB73DF8E000037B670ED757286E1DD* L_17 = V_1;
		int32_t L_18 = V_2;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		AnimatableProperty_t1C4E28F37643462525F81B462CF1EC460DD18814 * L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		// ap.UpdateMaterialProperties(mat, s_Mpb);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_22 = ((UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields*)il2cpp_codegen_static_fields_for(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var))->get_s_Mpb_51();
		NullCheck(L_20);
		AnimatableProperty_UpdateMaterialProperties_m7F9408DC439BB312C6AB1466B78AAFF452C54AD5(L_20, L_21, L_22, /*hidden argument*/NULL);
		int32_t L_23 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0072:
	{
		// foreach (var ap in m_AnimatableProperties)
		int32_t L_24 = V_2;
		AnimatablePropertyU5BU5D_t6C258C617AAB73DF8E000037B670ED757286E1DD* L_25 = V_1;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length))))))
		{
			goto IL_0060;
		}
	}
	{
		// s_Mpb.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var);
		MaterialPropertyBlock_t6C45FC5DE951DA662BBB7A55EEB3DEF33C5431A0 * L_26 = ((UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields*)il2cpp_codegen_static_fields_for(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var))->get_s_Mpb_51();
		NullCheck(L_26);
		MaterialPropertyBlock_Clear_mAB598168AB3F657597804EE57D62E67443794813(L_26, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_OnEnable_mF62BBDFC1D6DEFEC5CD5B0ED258975B242E8FED9 (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m11A8909AF17DB54C2399B548B37E3DB0C5CAC25B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m099848ADBF5C4E55AF58C6CD892989DABB39C77E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3COnEnableU3Eb__63_0_m42AB4AE7166163450682F0F8F8EEFB86ABD8074E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * G_B2_0 = NULL;
	List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * G_B2_1 = NULL;
	Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * G_B1_0 = NULL;
	List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * G_B1_1 = NULL;
	{
		// activeMeshIndices.Clear();
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_0;
		L_0 = UIParticle_get_activeMeshIndices_m423987C46CE4EC5176502A0BF43439C08B44E8FF_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		List_1_Clear_m099848ADBF5C4E55AF58C6CD892989DABB39C77E(L_0, /*hidden argument*/List_1_Clear_m099848ADBF5C4E55AF58C6CD892989DABB39C77E_RuntimeMethod_var);
		// UIParticleUpdater.Register(this);
		IL2CPP_RUNTIME_CLASS_INIT(UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var);
		UIParticleUpdater_Register_mE403F54BF9DF35AF9AB1FB73B3EEB370E8AAF446(__this, /*hidden argument*/NULL);
		// particles.Exec(p => p.GetComponent<ParticleSystemRenderer>().enabled = false);
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_1;
		L_1 = UIParticle_get_particles_m248BEC4C388F11152591A68AC7B94ECD8622AC0F_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var);
		Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * L_2 = ((U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var))->get_U3CU3E9__63_0_5();
		Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_0036;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var);
		U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848 * L_4 = ((U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * L_5 = (Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B *)il2cpp_codegen_object_new(Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B_il2cpp_TypeInfo_var);
		Action_1__ctor_m11A8909AF17DB54C2399B548B37E3DB0C5CAC25B(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3COnEnableU3Eb__63_0_m42AB4AE7166163450682F0F8F8EEFB86ABD8074E_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m11A8909AF17DB54C2399B548B37E3DB0C5CAC25B_RuntimeMethod_var);
		Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * L_6 = L_5;
		((U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var))->set_U3CU3E9__63_0_5(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_0036:
	{
		ParticleSystemExtensions_Exec_mCCB132CCB2A89AFF806CC812A35C7A9577B3E56D(G_B2_1, G_B2_0, /*hidden argument*/NULL);
		// if (isActiveAndEnabled && m_IgnoreCanvasScaler)
		bool L_7;
		L_7 = Behaviour_get_isActiveAndEnabled_mDD843C0271D492C1E08E0F8DEE8B6F1CFA951BFA(__this, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0062;
		}
	}
	{
		bool L_8 = __this->get_m_IgnoreCanvasScaler_37();
		if (!L_8)
		{
			goto IL_0062;
		}
	}
	{
		// _tracker.Add(this, rectTransform, DrivenTransformProperties.Scale);
		DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * L_9 = __this->get_address_of__tracker_44();
		RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * L_10;
		L_10 = Graphic_get_rectTransform_m87D5A808474C6B71649CBB153DEBF5F268189EFF(__this, /*hidden argument*/NULL);
		DrivenRectTransformTracker_Add_m65814604ABCE8B9F81270F3C2E1632CCB9E9A5E7((DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 *)L_9, __this, L_10, ((int32_t)224), /*hidden argument*/NULL);
	}

IL_0062:
	{
		// _bakedMesh = MeshPool.Rent();
		IL2CPP_RUNTIME_CLASS_INIT(MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_il2cpp_TypeInfo_var);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_11;
		L_11 = MeshPool_Rent_m933858E92DC47D62ACB2DA8178F810D1B36FC322(/*hidden argument*/NULL);
		__this->set__bakedMesh_45(L_11);
		// base.OnEnable();
		MaskableGraphic_OnEnable_m61F2B68A4560CAB2A40C3C6F6AF74C3C10D80AE8(__this, /*hidden argument*/NULL);
		// InitializeIfNeeded();
		UIParticle_InitializeIfNeeded_m76437723BB0D0884B283F51A6341CD635DAFA1B0(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Coffee.UIExtensions.UIParticle::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIParticle_Start_m3B3E7DDBB4CFB7E6071127DD051C9A11C132197B (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CStartU3Ed__64_t7BB41721AF1EF379EB6185056ADF644F90A4B065_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartU3Ed__64_t7BB41721AF1EF379EB6185056ADF644F90A4B065 * L_0 = (U3CStartU3Ed__64_t7BB41721AF1EF379EB6185056ADF644F90A4B065 *)il2cpp_codegen_object_new(U3CStartU3Ed__64_t7BB41721AF1EF379EB6185056ADF644F90A4B065_il2cpp_TypeInfo_var);
		U3CStartU3Ed__64__ctor_m7E27FAF472B8D8EB2B2A8F4C3259C287EE98355C(L_0, 0, /*hidden argument*/NULL);
		U3CStartU3Ed__64_t7BB41721AF1EF379EB6185056ADF644F90A4B065 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_OnDisable_mAECF1FA345010D421E6E572474E15482394709EE (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m11A8909AF17DB54C2399B548B37E3DB0C5CAC25B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3COnDisableU3Eb__65_0_m0873D88D78A472141724261B57680D2477818F47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * G_B3_0 = NULL;
	List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * G_B3_1 = NULL;
	Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * G_B2_0 = NULL;
	List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * G_B2_1 = NULL;
	{
		// UIParticleUpdater.Unregister(this);
		IL2CPP_RUNTIME_CLASS_INIT(UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var);
		UIParticleUpdater_Unregister_mF0CB511DAF293A8C6373702E281F033439037B4C(__this, /*hidden argument*/NULL);
		// if (!_shouldBeRemoved)
		bool L_0 = __this->get__shouldBeRemoved_43();
		if (L_0)
		{
			goto IL_0038;
		}
	}
	{
		// particles.Exec(p => p.GetComponent<ParticleSystemRenderer>().enabled = true);
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_1;
		L_1 = UIParticle_get_particles_m248BEC4C388F11152591A68AC7B94ECD8622AC0F_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var);
		Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * L_2 = ((U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var))->get_U3CU3E9__65_0_8();
		Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * L_3 = L_2;
		G_B2_0 = L_3;
		G_B2_1 = L_1;
		if (L_3)
		{
			G_B3_0 = L_3;
			G_B3_1 = L_1;
			goto IL_0033;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var);
		U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848 * L_4 = ((U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * L_5 = (Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B *)il2cpp_codegen_object_new(Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B_il2cpp_TypeInfo_var);
		Action_1__ctor_m11A8909AF17DB54C2399B548B37E3DB0C5CAC25B(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3COnDisableU3Eb__65_0_m0873D88D78A472141724261B57680D2477818F47_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m11A8909AF17DB54C2399B548B37E3DB0C5CAC25B_RuntimeMethod_var);
		Action_1_tA1504478FB76E8FA495F5C6362AC579421E75C0B * L_6 = L_5;
		((U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var))->set_U3CU3E9__65_0_8(L_6);
		G_B3_0 = L_6;
		G_B3_1 = G_B2_1;
	}

IL_0033:
	{
		ParticleSystemExtensions_Exec_mCCB132CCB2A89AFF806CC812A35C7A9577B3E56D(G_B3_1, G_B3_0, /*hidden argument*/NULL);
	}

IL_0038:
	{
		// _tracker.Clear();
		DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * L_7 = __this->get_address_of__tracker_44();
		DrivenRectTransformTracker_Clear_m41F9B0AA2025AF5B76D38E68B08C111D7D8EB845((DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 *)L_7, /*hidden argument*/NULL);
		// MeshPool.Return(_bakedMesh);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_8 = __this->get__bakedMesh_45();
		IL2CPP_RUNTIME_CLASS_INIT(MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_il2cpp_TypeInfo_var);
		MeshPool_Return_m6A14627D2C7C9498CA6B6C6CD22370B0A0D7559E(L_8, /*hidden argument*/NULL);
		// _bakedMesh = null;
		__this->set__bakedMesh_45((Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)NULL);
		// base.OnDisable();
		MaskableGraphic_OnDisable_m85189B68E2DBE5ECCFBC9B2A1385F38050FE2686(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::UpdateGeometry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_UpdateGeometry_mE913D33C8D95EE37BD13E41FF89814C754D49133 (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::OnDidApplyAnimationProperties()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_OnDidApplyAnimationProperties_m580AA0132E53FDDC8660ECE7ABE061E8080054E4 (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::InitializeIfNeeded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_InitializeIfNeeded_m76437723BB0D0884B283F51A6341CD635DAFA1B0 (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListExtensions_AnyFast_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_mA832995BC042C5CEF3C4D2E9DB38E21FCB25D40A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA95F4A37D28DD74140609EDBE8F5C0C006966AD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (enabled && m_IsTrail)
		bool L_0;
		L_0 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0045;
		}
	}
	{
		bool L_1 = __this->get_m_IsTrail_36();
		if (!L_1)
		{
			goto IL_0045;
		}
	}
	{
		// UnityEngine.Debug.LogWarningFormat(this, "[UIParticle] The UIParticle component should be removed: {0}\nReason: UIParticle for trails is no longer needed.", name);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		String_t* L_4;
		L_4 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarningFormat_m2DED8BDFB26AFA883EEDD701573B30B093270CA7(__this, _stringLiteralCA95F4A37D28DD74140609EDBE8F5C0C006966AD, L_3, /*hidden argument*/NULL);
		// gameObject.hideFlags = HideFlags.None;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Object_set_hideFlags_m7DE229AF60B92F0C68819F77FEB27D775E66F3AC(L_5, 0, /*hidden argument*/NULL);
		// _shouldBeRemoved = true;
		__this->set__shouldBeRemoved_43((bool)1);
		// enabled = false;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0045:
	{
		// if (!this || particles.AnyFast()) return;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(__this, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_005a;
		}
	}
	{
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_7;
		L_7 = UIParticle_get_particles_m248BEC4C388F11152591A68AC7B94ECD8622AC0F_inline(__this, /*hidden argument*/NULL);
		bool L_8;
		L_8 = ListExtensions_AnyFast_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_mA832995BC042C5CEF3C4D2E9DB38E21FCB25D40A(L_7, /*hidden argument*/ListExtensions_AnyFast_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_mA832995BC042C5CEF3C4D2E9DB38E21FCB25D40A_RuntimeMethod_var);
		if (!L_8)
		{
			goto IL_005b;
		}
	}

IL_005a:
	{
		// if (!this || particles.AnyFast()) return;
		return;
	}

IL_005b:
	{
		// RefreshParticles();
		UIParticle_RefreshParticles_mBC1B3BFDCA0180591ED0AE73C030C4C1BF7D11DD(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle__ctor_m40CF4369882BD5782924C6F60180EAF7DE89EDA0 (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AnimatablePropertyU5BU5D_t6C258C617AAB73DF8E000037B670ED757286E1DD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m2029C17525D75C12FB08DA4DCE5C4BF7BCC53EF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m497DA7006D664307F20A0546E5B717AA4B5E8A86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m990003915EFF426412433A7AA54BAABDBB68C0EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bool m_IgnoreCanvasScaler = true;
		__this->set_m_IgnoreCanvasScaler_37((bool)1);
		// float m_Scale = 100;
		__this->set_m_Scale_38((100.0f));
		// internal AnimatableProperty[] m_AnimatableProperties = new AnimatableProperty[0];
		AnimatablePropertyU5BU5D_t6C258C617AAB73DF8E000037B670ED757286E1DD* L_0 = (AnimatablePropertyU5BU5D_t6C258C617AAB73DF8E000037B670ED757286E1DD*)(AnimatablePropertyU5BU5D_t6C258C617AAB73DF8E000037B670ED757286E1DD*)SZArrayNew(AnimatablePropertyU5BU5D_t6C258C617AAB73DF8E000037B670ED757286E1DD_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->set_m_AnimatableProperties_40(L_0);
		// private List<ParticleSystem> m_Particles = new List<ParticleSystem>();
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_1 = (List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 *)il2cpp_codegen_object_new(List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63_il2cpp_TypeInfo_var);
		List_1__ctor_m990003915EFF426412433A7AA54BAABDBB68C0EE(L_1, /*hidden argument*/List_1__ctor_m990003915EFF426412433A7AA54BAABDBB68C0EE_RuntimeMethod_var);
		__this->set_m_Particles_41(L_1);
		// private readonly List<Material> _modifiedMaterials = new List<Material>();
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_2 = (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *)il2cpp_codegen_object_new(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4_il2cpp_TypeInfo_var);
		List_1__ctor_m497DA7006D664307F20A0546E5B717AA4B5E8A86(L_2, /*hidden argument*/List_1__ctor_m497DA7006D664307F20A0546E5B717AA4B5E8A86_RuntimeMethod_var);
		__this->set__modifiedMaterials_46(L_2);
		// private readonly List<Material> _maskMaterials = new List<Material>();
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_3 = (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *)il2cpp_codegen_object_new(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4_il2cpp_TypeInfo_var);
		List_1__ctor_m497DA7006D664307F20A0546E5B717AA4B5E8A86(L_3, /*hidden argument*/List_1__ctor_m497DA7006D664307F20A0546E5B717AA4B5E8A86_RuntimeMethod_var);
		__this->set__maskMaterials_47(L_3);
		// private readonly List<bool> _activeMeshIndices = new List<bool>();
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_4 = (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 *)il2cpp_codegen_object_new(List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3_il2cpp_TypeInfo_var);
		List_1__ctor_m2029C17525D75C12FB08DA4DCE5C4BF7BCC53EF9(L_4, /*hidden argument*/List_1__ctor_m2029C17525D75C12FB08DA4DCE5C4BF7BCC53EF9_RuntimeMethod_var);
		__this->set__activeMeshIndices_48(L_4);
		MaskableGraphic__ctor_m89126DB114322D1D18F67BA3B8D0695FF1371A4D(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle__cctor_m073F4E41BCF6C1E1D1617ED9E3AE5C73D52F8EB8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m497DA7006D664307F20A0546E5B717AA4B5E8A86_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m779B55F6DAABBA10D912F806FA7817324335501B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m990003915EFF426412433A7AA54BAABDBB68C0EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m9F48966694ED21085AFB16EED54F1186D4B9D39C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static readonly List<Material> s_TempMaterials = new List<Material>(2);
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_0 = (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *)il2cpp_codegen_object_new(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4_il2cpp_TypeInfo_var);
		List_1__ctor_m779B55F6DAABBA10D912F806FA7817324335501B(L_0, 2, /*hidden argument*/List_1__ctor_m779B55F6DAABBA10D912F806FA7817324335501B_RuntimeMethod_var);
		((UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields*)il2cpp_codegen_static_fields_for(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var))->set_s_TempMaterials_50(L_0);
		// private static readonly List<Material> s_PrevMaskMaterials = new List<Material>();
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_1 = (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *)il2cpp_codegen_object_new(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4_il2cpp_TypeInfo_var);
		List_1__ctor_m497DA7006D664307F20A0546E5B717AA4B5E8A86(L_1, /*hidden argument*/List_1__ctor_m497DA7006D664307F20A0546E5B717AA4B5E8A86_RuntimeMethod_var);
		((UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields*)il2cpp_codegen_static_fields_for(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var))->set_s_PrevMaskMaterials_52(L_1);
		// private static readonly List<Material> s_PrevModifiedMaterials = new List<Material>();
		List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 * L_2 = (List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4 *)il2cpp_codegen_object_new(List_1_t434825DCF3B4911FA61F9B2A235567430BDDD9F4_il2cpp_TypeInfo_var);
		List_1__ctor_m497DA7006D664307F20A0546E5B717AA4B5E8A86(L_2, /*hidden argument*/List_1__ctor_m497DA7006D664307F20A0546E5B717AA4B5E8A86_RuntimeMethod_var);
		((UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields*)il2cpp_codegen_static_fields_for(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var))->set_s_PrevModifiedMaterials_53(L_2);
		// private static readonly List<Component> s_Components = new List<Component>();
		List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * L_3 = (List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F *)il2cpp_codegen_object_new(List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F_il2cpp_TypeInfo_var);
		List_1__ctor_m9F48966694ED21085AFB16EED54F1186D4B9D39C(L_3, /*hidden argument*/List_1__ctor_m9F48966694ED21085AFB16EED54F1186D4B9D39C_RuntimeMethod_var);
		((UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields*)il2cpp_codegen_static_fields_for(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var))->set_s_Components_54(L_3);
		// private static readonly List<ParticleSystem> s_ParticleSystems = new List<ParticleSystem>();
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_4 = (List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 *)il2cpp_codegen_object_new(List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63_il2cpp_TypeInfo_var);
		List_1__ctor_m990003915EFF426412433A7AA54BAABDBB68C0EE(L_4, /*hidden argument*/List_1__ctor_m990003915EFF426412433A7AA54BAABDBB68C0EE_RuntimeMethod_var);
		((UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields*)il2cpp_codegen_static_fields_for(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var))->set_s_ParticleSystems_55(L_4);
		return;
	}
}
// System.Boolean Coffee.UIExtensions.UIParticle::<RefreshParticles>b__57_0(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIParticle_U3CRefreshParticlesU3Eb__57_0_m1883FBA26ECBA42D33A035DB055F4051CD89259A (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___x0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisUIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_mC9B08D8738AEB9AA87E6C2C2A171A631C7C58AB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// particles.RemoveAll(x => x.GetComponentInParent<UIParticle>() != this);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_0 = ___x0;
		NullCheck(L_0);
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_1;
		L_1 = Component_GetComponentInParent_TisUIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_mC9B08D8738AEB9AA87E6C2C2A171A631C7C58AB2(L_0, /*hidden argument*/Component_GetComponentInParent_TisUIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_mC9B08D8738AEB9AA87E6C2C2A171A631C7C58AB2_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_1, __this, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Coffee.UIExtensions.UIParticle::<RefreshParticles>b__57_1(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticle_U3CRefreshParticlesU3Eb__57_1_m9031288D5CB43EC3F8B2FC677737665374634EB3 (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m433D0F036D744378DDD67C566DDC69B19052E933_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// particles.Exec(p => p.GetComponent<ParticleSystemRenderer>().enabled = !enabled);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_0 = ___p0;
		NullCheck(L_0);
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_1;
		L_1 = Component_GetComponent_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m433D0F036D744378DDD67C566DDC69B19052E933(L_0, /*hidden argument*/Component_GetComponent_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m433D0F036D744378DDD67C566DDC69B19052E933_RuntimeMethod_var);
		bool L_2;
		L_2 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_1, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
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
// System.Void Coffee.UIExtensions.UIParticleUpdater::Register(Coffee.UIExtensions.UIParticle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleUpdater_Register_mE403F54BF9DF35AF9AB1FB73B3EEB370E8AAF446 (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * ___particle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE885F528560A99DD40033971E510608ED1D02418_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!particle) return;
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_0 = ___particle0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		// if (!particle) return;
		return;
	}

IL_0009:
	{
		// s_ActiveParticles.Add(particle);
		IL2CPP_RUNTIME_CLASS_INIT(UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var);
		List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF * L_2 = ((UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var))->get_s_ActiveParticles_0();
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_3 = ___particle0;
		NullCheck(L_2);
		List_1_Add_mE885F528560A99DD40033971E510608ED1D02418(L_2, L_3, /*hidden argument*/List_1_Add_mE885F528560A99DD40033971E510608ED1D02418_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticleUpdater::Unregister(Coffee.UIExtensions.UIParticle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleUpdater_Unregister_mF0CB511DAF293A8C6373702E281F033439037B4C (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * ___particle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m0C079BFFAB901970D0252B5C7676F67958B311AF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!particle) return;
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_0 = ___particle0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0009;
		}
	}
	{
		// if (!particle) return;
		return;
	}

IL_0009:
	{
		// s_ActiveParticles.Remove(particle);
		IL2CPP_RUNTIME_CLASS_INIT(UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var);
		List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF * L_2 = ((UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var))->get_s_ActiveParticles_0();
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_3 = ___particle0;
		NullCheck(L_2);
		bool L_4;
		L_4 = List_1_Remove_m0C079BFFAB901970D0252B5C7676F67958B311AF(L_2, L_3, /*hidden argument*/List_1_Remove_m0C079BFFAB901970D0252B5C7676F67958B311AF_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticleUpdater::InitializeOnLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleUpdater_InitializeOnLoad_mAEABF0A1707B645C597956817FD6D6F75F9B82BC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CombineInstanceArrayPool_t13D673FAA6CDC2996CB9628491E571DBF55634E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticleUpdater_Refresh_mBAF1837B476F9CF0792E336448A859EA263C0811_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MeshHelper.Init();
		IL2CPP_RUNTIME_CLASS_INIT(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		MeshHelper_Init_m9D0B0F506ADF9E5FFD9C9A150F14A11C8F0C89F0(/*hidden argument*/NULL);
		// MeshPool.Init();
		IL2CPP_RUNTIME_CLASS_INIT(MeshPool_t5AE7D588C893C5BB719877C24D579D0AE319E7D3_il2cpp_TypeInfo_var);
		MeshPool_Init_mF660DF2AC3199488B36538CC265AFDD648F39BAF(/*hidden argument*/NULL);
		// CombineInstanceArrayPool.Init();
		IL2CPP_RUNTIME_CLASS_INIT(CombineInstanceArrayPool_t13D673FAA6CDC2996CB9628491E571DBF55634E2_il2cpp_TypeInfo_var);
		CombineInstanceArrayPool_Init_m7F0D754479ED6BCB313E73240A7A310EE446828E(/*hidden argument*/NULL);
		// Canvas.willRenderCanvases -= Refresh;
		WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * L_0 = (WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 *)il2cpp_codegen_object_new(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958_il2cpp_TypeInfo_var);
		WillRenderCanvases__ctor_m8A46E9A5DED6B54DC2A8A3137AE3637081EADFB6(L_0, NULL, (intptr_t)((intptr_t)UIParticleUpdater_Refresh_mBAF1837B476F9CF0792E336448A859EA263C0811_RuntimeMethod_var), /*hidden argument*/NULL);
		Canvas_remove_willRenderCanvases_m4A631D84D6DBB6035620ED9496542E43F19D0EF9(L_0, /*hidden argument*/NULL);
		// Canvas.willRenderCanvases += Refresh;
		WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 * L_1 = (WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958 *)il2cpp_codegen_object_new(WillRenderCanvases_t459621B4F3FA2571DE0ED6B4DEF0752F2E9EE958_il2cpp_TypeInfo_var);
		WillRenderCanvases__ctor_m8A46E9A5DED6B54DC2A8A3137AE3637081EADFB6(L_1, NULL, (intptr_t)((intptr_t)UIParticleUpdater_Refresh_mBAF1837B476F9CF0792E336448A859EA263C0811_RuntimeMethod_var), /*hidden argument*/NULL);
		Canvas_add_willRenderCanvases_m00E391FCCE9839EEB6D7A729DCBF6B841FDF02B7(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticleUpdater::Refresh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleUpdater_Refresh_mBAF1837B476F9CF0792E336448A859EA263C0811 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB1CDDFA55D0D9F185610C10267D0832FD89C53B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF4824FE05AB99D77D5181B66EFB09DFC0E8C6768_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (frameCount == Time.frameCount) return;
		IL2CPP_RUNTIME_CLASS_INIT(UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var);
		int32_t L_0 = ((UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var))->get_frameCount_3();
		int32_t L_1;
		L_1 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000d;
		}
	}
	{
		// if (frameCount == Time.frameCount) return;
		return;
	}

IL_000d:
	{
		// frameCount = Time.frameCount;
		int32_t L_2;
		L_2 = Time_get_frameCount_m8601F5FB5B701680076B40D2F31405F304D963F0(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var);
		((UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var))->set_frameCount_3(L_2);
		// for (var i = 0; i < s_ActiveParticles.Count; i++)
		V_0 = 0;
		goto IL_0039;
	}

IL_001b:
	{
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		// Refresh(s_ActiveParticles[i]);
		IL2CPP_RUNTIME_CLASS_INIT(UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var);
		List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF * L_3 = ((UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var))->get_s_ActiveParticles_0();
		int32_t L_4 = V_0;
		NullCheck(L_3);
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_5;
		L_5 = List_1_get_Item_mF4824FE05AB99D77D5181B66EFB09DFC0E8C6768_inline(L_3, L_4, /*hidden argument*/List_1_get_Item_mF4824FE05AB99D77D5181B66EFB09DFC0E8C6768_RuntimeMethod_var);
		UIParticleUpdater_Refresh_m1906B8C7F9DFDB619FC9D38C4CC939BB2917394B(L_5, /*hidden argument*/NULL);
		// }
		goto IL_0035;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_002e;
		}
		throw e;
	}

CATCH_002e:
	{ // begin catch(System.Exception)
		// Debug.LogException(e);
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var)));
		Debug_LogException_m1BE957624F4DD291B1B4265D4A55A34EFAA8D7BA(((Exception_t *)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t *)), /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0035;
	} // end catch (depth: 1)

IL_0035:
	{
		// for (var i = 0; i < s_ActiveParticles.Count; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0039:
	{
		// for (var i = 0; i < s_ActiveParticles.Count; i++)
		int32_t L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var);
		List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF * L_8 = ((UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var))->get_s_ActiveParticles_0();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_mB1CDDFA55D0D9F185610C10267D0832FD89C53B6_inline(L_8, /*hidden argument*/List_1_get_Count_mB1CDDFA55D0D9F185610C10267D0832FD89C53B6_RuntimeMethod_var);
		if ((((int32_t)L_7) < ((int32_t)L_9)))
		{
			goto IL_001b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticleUpdater::Refresh(Coffee.UIExtensions.UIParticle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleUpdater_Refresh_m1906B8C7F9DFDB619FC9D38C4CC939BB2917394B (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * ___particle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!particle || !particle.bakedMesh || !particle.canvas || !particle.canvasRenderer) return;
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_0 = ___particle0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_002f;
		}
	}
	{
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_2 = ___particle0;
		NullCheck(L_2);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_3;
		L_3 = UIParticle_get_bakedMesh_m8ECD19D62E8B19E41FD8F1BAB590154190A3AE7E_inline(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002f;
		}
	}
	{
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_5 = ___particle0;
		NullCheck(L_5);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_6;
		L_6 = Graphic_get_canvas_mDB17EC66AF3FD40E8D368FC11C8F07319BB9D1B0(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_002f;
		}
	}
	{
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_8 = ___particle0;
		NullCheck(L_8);
		CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * L_9;
		L_9 = Graphic_get_canvasRenderer_m33EC3A53310593E87C540654486C7A73A66FCF4A(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0030;
		}
	}

IL_002f:
	{
		// if (!particle || !particle.bakedMesh || !particle.canvas || !particle.canvasRenderer) return;
		return;
	}

IL_0030:
	{
		// ModifyScale(particle);
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_11 = ___particle0;
		IL2CPP_RUNTIME_CLASS_INIT(UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var);
		UIParticleUpdater_ModifyScale_mD93E250C3A55898858DD883517F84C24CBC83AC0(L_11, /*hidden argument*/NULL);
		// BakeMesh(particle);
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_12 = ___particle0;
		UIParticleUpdater_BakeMesh_m02D5B965341991766B4F9CF70E04ADB433B71762(L_12, /*hidden argument*/NULL);
		// particle.canvasRenderer.SetMesh(particle.bakedMesh);
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_13 = ___particle0;
		NullCheck(L_13);
		CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * L_14;
		L_14 = Graphic_get_canvasRenderer_m33EC3A53310593E87C540654486C7A73A66FCF4A(L_13, /*hidden argument*/NULL);
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_15 = ___particle0;
		NullCheck(L_15);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_16;
		L_16 = UIParticle_get_bakedMesh_m8ECD19D62E8B19E41FD8F1BAB590154190A3AE7E_inline(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		CanvasRenderer_SetMesh_mB506682F318E5D8D8FE3888BF50E40DC34B726DF(L_14, L_16, /*hidden argument*/NULL);
		// particle.UpdateMaterialProperties();
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_17 = ___particle0;
		NullCheck(L_17);
		UIParticle_UpdateMaterialProperties_m3E45E7D56DA32D4C93078F08ABE3D5F46390EECC(L_17, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticleUpdater::ModifyScale(Coffee.UIExtensions.UIParticle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleUpdater_ModifyScale_mD93E250C3A55898858DD883517F84C24CBC83AC0 (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * ___particle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_2 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B5_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B6_1 = NULL;
	float G_B8_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B8_1 = NULL;
	float G_B7_0 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B7_1 = NULL;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B9_2 = NULL;
	float G_B11_0 = 0.0f;
	float G_B11_1 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B11_2 = NULL;
	float G_B10_0 = 0.0f;
	float G_B10_1 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B10_2 = NULL;
	float G_B12_0 = 0.0f;
	float G_B12_1 = 0.0f;
	float G_B12_2 = 0.0f;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * G_B12_3 = NULL;
	{
		// if (!particle.ignoreCanvasScaler || !particle.canvas) return;
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_0 = ___particle0;
		NullCheck(L_0);
		bool L_1;
		L_1 = UIParticle_get_ignoreCanvasScaler_mDD8AA041E85CB24E0AE7F2F161CFDF4C5718E2B2_inline(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_2 = ___particle0;
		NullCheck(L_2);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_3;
		L_3 = Graphic_get_canvas_mDB17EC66AF3FD40E8D368FC11C8F07319BB9D1B0(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0016;
		}
	}

IL_0015:
	{
		// if (!particle.ignoreCanvasScaler || !particle.canvas) return;
		return;
	}

IL_0016:
	{
		// var s = particle.canvas.rootCanvas.transform.localScale;
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_5 = ___particle0;
		NullCheck(L_5);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_6;
		L_6 = Graphic_get_canvas_mDB17EC66AF3FD40E8D368FC11C8F07319BB9D1B0(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_7;
		L_7 = Canvas_get_rootCanvas_mB1C93410A4AA793D88130FD08C05D71327641DC5(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// var modifiedScale = new Vector3(
		//     Mathf.Approximately(s.x, 0) ? 1 : 1 / s.x,
		//     Mathf.Approximately(s.y, 0) ? 1 : 1 / s.y,
		//     Mathf.Approximately(s.z, 0) ? 1 : 1 / s.z);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		float L_11 = L_10.get_x_2();
		bool L_12;
		L_12 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_11, (0.0f), /*hidden argument*/NULL);
		G_B4_0 = (&V_1);
		if (L_12)
		{
			G_B5_0 = (&V_1);
			goto IL_004e;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		float L_14 = L_13.get_x_2();
		G_B6_0 = ((float)((float)(1.0f)/(float)L_14));
		G_B6_1 = G_B4_0;
		goto IL_0053;
	}

IL_004e:
	{
		G_B6_0 = (1.0f);
		G_B6_1 = G_B5_0;
	}

IL_0053:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_0;
		float L_16 = L_15.get_y_3();
		bool L_17;
		L_17 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_16, (0.0f), /*hidden argument*/NULL);
		G_B7_0 = G_B6_0;
		G_B7_1 = G_B6_1;
		if (L_17)
		{
			G_B8_0 = G_B6_0;
			G_B8_1 = G_B6_1;
			goto IL_0073;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_18 = V_0;
		float L_19 = L_18.get_y_3();
		G_B9_0 = ((float)((float)(1.0f)/(float)L_19));
		G_B9_1 = G_B7_0;
		G_B9_2 = G_B7_1;
		goto IL_0078;
	}

IL_0073:
	{
		G_B9_0 = (1.0f);
		G_B9_1 = G_B8_0;
		G_B9_2 = G_B8_1;
	}

IL_0078:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = V_0;
		float L_21 = L_20.get_z_4();
		bool L_22;
		L_22 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_21, (0.0f), /*hidden argument*/NULL);
		G_B10_0 = G_B9_0;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
		if (L_22)
		{
			G_B11_0 = G_B9_0;
			G_B11_1 = G_B9_1;
			G_B11_2 = G_B9_2;
			goto IL_0098;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23 = V_0;
		float L_24 = L_23.get_z_4();
		G_B12_0 = ((float)((float)(1.0f)/(float)L_24));
		G_B12_1 = G_B10_0;
		G_B12_2 = G_B10_1;
		G_B12_3 = G_B10_2;
		goto IL_009d;
	}

IL_0098:
	{
		G_B12_0 = (1.0f);
		G_B12_1 = G_B11_0;
		G_B12_2 = G_B11_1;
		G_B12_3 = G_B11_2;
	}

IL_009d:
	{
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)G_B12_3, G_B12_2, G_B12_1, G_B12_0, /*hidden argument*/NULL);
		// var transform = particle.transform;
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_25 = ___particle0;
		NullCheck(L_25);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_25, /*hidden argument*/NULL);
		V_2 = L_26;
		// if (Mathf.Approximately((transform.localScale - modifiedScale).sqrMagnitude, 0)) return;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27 = V_2;
		NullCheck(L_27);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_27, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_28, L_29, /*hidden argument*/NULL);
		V_3 = L_30;
		float L_31;
		L_31 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_3), /*hidden argument*/NULL);
		bool L_32;
		L_32 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_31, (0.0f), /*hidden argument*/NULL);
		if (!L_32)
		{
			goto IL_00ca;
		}
	}
	{
		// if (Mathf.Approximately((transform.localScale - modifiedScale).sqrMagnitude, 0)) return;
		return;
	}

IL_00ca:
	{
		// transform.localScale = modifiedScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34 = V_1;
		NullCheck(L_33);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_33, L_34, /*hidden argument*/NULL);
		// }
		return;
	}
}
// UnityEngine.Matrix4x4 Coffee.UIExtensions.UIParticleUpdater::GetScaledMatrix(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  UIParticleUpdater_GetScaledMatrix_mC9E956691A3CBBB07FF3387FF6B682A4BF8A56C9 (ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___particle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// var transform = particle.transform;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_0 = ___particle0;
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// var main = particle.main;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_2 = ___particle0;
		NullCheck(L_2);
		MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  L_3;
		L_3 = ParticleSystem_get_main_m8F17DCC63679B15CE548BE83332FDB6635AE74A0(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// var space = main.simulationSpace;
		int32_t L_4;
		L_4 = MainModule_get_simulationSpace_mD08447602DF2E2AC9790D900A1BD04AB8D4FD0A2((MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *)(&V_1), /*hidden argument*/NULL);
		V_2 = L_4;
		// if (space == ParticleSystemSimulationSpace.Custom && !main.customSimulationSpace)
		int32_t L_5 = V_2;
		if ((!(((uint32_t)L_5) == ((uint32_t)2))))
		{
			goto IL_002a;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = MainModule_get_customSimulationSpace_m252596FE004ABB9EB82C9CC987AC2DE4B2562F00((MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_002a;
		}
	}
	{
		// space = ParticleSystemSimulationSpace.Local;
		V_2 = 0;
	}

IL_002a:
	{
		int32_t L_8 = V_2;
		switch (L_8)
		{
			case 0:
			{
				goto IL_003e;
			}
			case 1:
			{
				goto IL_006a;
			}
			case 2:
			{
				goto IL_0071;
			}
		}
	}
	{
		goto IL_008e;
	}

IL_003e:
	{
		// return Matrix4x4.Rotate(transform.rotation).inverse
		//        * Matrix4x4.Scale(transform.lossyScale).inverse;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = V_0;
		NullCheck(L_9);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_9, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_11;
		L_11 = Matrix4x4_Rotate_m783F8A008EC7D0C3C02A5718002491F017F21E0E(L_10, /*hidden argument*/NULL);
		V_3 = L_11;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_12;
		L_12 = Matrix4x4_get_inverse_mFA34ECC790B269522F60FC32370D628DAFCAE225((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_3), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13 = V_0;
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331(L_13, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_15;
		L_15 = Matrix4x4_Scale_m62CFAE1F96495BD3F39D6FB21385C04B9ACC50ED(L_14, /*hidden argument*/NULL);
		V_3 = L_15;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_16;
		L_16 = Matrix4x4_get_inverse_mFA34ECC790B269522F60FC32370D628DAFCAE225((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_3), /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_17;
		L_17 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F(L_12, L_16, /*hidden argument*/NULL);
		return L_17;
	}

IL_006a:
	{
		// return transform.worldToLocalMatrix;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18 = V_0;
		NullCheck(L_18);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_19;
		L_19 = Transform_get_worldToLocalMatrix_mE22FDE24767E1DE402D3E7A1C9803379B2E8399D(L_18, /*hidden argument*/NULL);
		return L_19;
	}

IL_0071:
	{
		// return transform.worldToLocalMatrix
		//        * Matrix4x4.Translate(main.customSimulationSpace.position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20 = V_0;
		NullCheck(L_20);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_21;
		L_21 = Transform_get_worldToLocalMatrix_mE22FDE24767E1DE402D3E7A1C9803379B2E8399D(L_20, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = MainModule_get_customSimulationSpace_m252596FE004ABB9EB82C9CC987AC2DE4B2562F00((MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_22);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_23;
		L_23 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_22, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_24;
		L_24 = Matrix4x4_Translate_m48688727FA7BBA42DF2108C1A9395FC23431AC9A(L_23, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_25;
		L_25 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F(L_21, L_24, /*hidden argument*/NULL);
		return L_25;
	}

IL_008e:
	{
		// return Matrix4x4.identity;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_26;
		L_26 = Matrix4x4_get_identity_mC91289718DDD3DDBE0A10551BDA59A446414A596(/*hidden argument*/NULL);
		return L_26;
	}
}
// System.Void Coffee.UIExtensions.UIParticleUpdater::BakeMesh(Coffee.UIExtensions.UIParticle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleUpdater_BakeMesh_m02D5B965341991766B4F9CF70E04ADB433B71762 (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * ___particle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m433D0F036D744378DDD67C566DDC69B19052E933_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36874AE3230618C5996C030D9BE84120CA0F9735_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m717EDAB95A84624B81D546CBEDC84B4664B7B678_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * V_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_1 = NULL;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * V_9 = NULL;
	ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * V_10 = NULL;
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_11;
	memset((&V_11), 0, sizeof(V_11));
	MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  V_12;
	memset((&V_12), 0, sizeof(V_12));
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1  V_15;
	memset((&V_15), 0, sizeof(V_15));
	int64_t V_16 = 0;
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * V_17 = NULL;
	TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8  V_18;
	memset((&V_18), 0, sizeof(V_18));
	int64_t V_19 = 0;
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * V_20 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  G_B34_0;
	memset((&G_B34_0), 0, sizeof(G_B34_0));
	{
		// MeshHelper.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		MeshHelper_Clear_mBD6823C35D072FBF6D61B7CE4AF5D2DEAC6B6912(/*hidden argument*/NULL);
		// particle.bakedMesh.Clear(false);
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_0 = ___particle0;
		NullCheck(L_0);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_1;
		L_1 = UIParticle_get_bakedMesh_m8ECD19D62E8B19E41FD8F1BAB590154190A3AE7E_inline(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Mesh_Clear_mD35FF3850B83B635DA849033E25D0D718E34D92B(L_1, (bool)0, /*hidden argument*/NULL);
		// var camera = BakingCamera.GetCamera(particle.canvas);
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_2 = ___particle0;
		NullCheck(L_2);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_3;
		L_3 = Graphic_get_canvas_mDB17EC66AF3FD40E8D368FC11C8F07319BB9D1B0(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(BakingCamera_tD67C43741C504DAFBC3E316B1DEBB109644AD765_il2cpp_TypeInfo_var);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_4;
		L_4 = BakingCamera_GetCamera_m071EF68B224E11DEA0E5291A689D39EC14092E84(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// var root = particle.transform;
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_5 = ___particle0;
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// var rootMatrix = Matrix4x4.Rotate(root.rotation).inverse
		//                  * Matrix4x4.Scale(root.lossyScale).inverse;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7 = V_1;
		NullCheck(L_7);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_7, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_9;
		L_9 = Matrix4x4_Rotate_m783F8A008EC7D0C3C02A5718002491F017F21E0E(L_8, /*hidden argument*/NULL);
		V_7 = L_9;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_10;
		L_10 = Matrix4x4_get_inverse_mFA34ECC790B269522F60FC32370D628DAFCAE225((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_7), /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11 = V_1;
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_lossyScale_m469A16F93F135C1E4D5955C7EBDB893D1892A331(L_11, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_13;
		L_13 = Matrix4x4_Scale_m62CFAE1F96495BD3F39D6FB21385C04B9ACC50ED(L_12, /*hidden argument*/NULL);
		V_7 = L_13;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_14;
		L_14 = Matrix4x4_get_inverse_mFA34ECC790B269522F60FC32370D628DAFCAE225((Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 *)(&V_7), /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_15;
		L_15 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F(L_10, L_14, /*hidden argument*/NULL);
		V_2 = L_15;
		// var scale = particle.ignoreCanvasScaler
		//     ? Vector3.Scale(particle.canvas.rootCanvas.transform.localScale, particle.scale3D)
		//     : particle.scale3D;
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_16 = ___particle0;
		NullCheck(L_16);
		bool L_17;
		L_17 = UIParticle_get_ignoreCanvasScaler_mDD8AA041E85CB24E0AE7F2F161CFDF4C5718E2B2_inline(L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_0062;
		}
	}
	{
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_18 = ___particle0;
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = UIParticle_get_scale3D_mA6A3841E1A258F1150D9CB64FB08B8CDF5C99EED_inline(L_18, /*hidden argument*/NULL);
		G_B3_0 = L_19;
		goto IL_0082;
	}

IL_0062:
	{
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_20 = ___particle0;
		NullCheck(L_20);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_21;
		L_21 = Graphic_get_canvas_mDB17EC66AF3FD40E8D368FC11C8F07319BB9D1B0(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * L_22;
		L_22 = Canvas_get_rootCanvas_mB1C93410A4AA793D88130FD08C05D71327641DC5(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_23, /*hidden argument*/NULL);
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_25 = ___particle0;
		NullCheck(L_25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = UIParticle_get_scale3D_mA6A3841E1A258F1150D9CB64FB08B8CDF5C99EED_inline(L_25, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector3_Scale_m8805EE8D2586DE7B6143FA35819B3D5CF1981FB3_inline(L_24, L_26, /*hidden argument*/NULL);
		G_B3_0 = L_27;
	}

IL_0082:
	{
		V_3 = G_B3_0;
		// var scaleMatrix = Matrix4x4.Scale(scale);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28 = V_3;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_29;
		L_29 = Matrix4x4_Scale_m62CFAE1F96495BD3F39D6FB21385C04B9ACC50ED(L_28, /*hidden argument*/NULL);
		V_4 = L_29;
		// var position = particle.transform.position;
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_30 = ___particle0;
		NullCheck(L_30);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_31, /*hidden argument*/NULL);
		V_5 = L_32;
		// var diff = position - particle.cachedPosition;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = V_5;
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_34 = ___particle0;
		NullCheck(L_34);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_35;
		L_35 = UIParticle_get_cachedPosition_mFF26D3060E2F13A056FB640EDDD7E33BDE6EE0BC_inline(L_34, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_33, L_35, /*hidden argument*/NULL);
		V_6 = L_36;
		// diff.x *= 1f - 1f / Mathf.Max(0.001f, scale.x);
		float* L_37 = (&V_6)->get_address_of_x_2();
		float* L_38 = L_37;
		float L_39 = *((float*)L_38);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_40 = V_3;
		float L_41 = L_40.get_x_2();
		float L_42;
		L_42 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775((0.00100000005f), L_41, /*hidden argument*/NULL);
		*((float*)L_38) = (float)((float)il2cpp_codegen_multiply((float)L_39, (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)((float)(1.0f)/(float)L_42))))));
		// diff.y *= 1f - 1f / Mathf.Max(0.001f, scale.y);
		float* L_43 = (&V_6)->get_address_of_y_3();
		float* L_44 = L_43;
		float L_45 = *((float*)L_44);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_46 = V_3;
		float L_47 = L_46.get_y_3();
		float L_48;
		L_48 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775((0.00100000005f), L_47, /*hidden argument*/NULL);
		*((float*)L_44) = (float)((float)il2cpp_codegen_multiply((float)L_45, (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)((float)(1.0f)/(float)L_48))))));
		// diff.z *= 1f - 1f / Mathf.Max(0.001f, scale.z);
		float* L_49 = (&V_6)->get_address_of_z_4();
		float* L_50 = L_49;
		float L_51 = *((float*)L_50);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52 = V_3;
		float L_53 = L_52.get_z_4();
		float L_54;
		L_54 = Mathf_Max_m4CE510E1F1013B33275F01543731A51A58BA0775((0.00100000005f), L_53, /*hidden argument*/NULL);
		*((float*)L_50) = (float)((float)il2cpp_codegen_multiply((float)L_51, (float)((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)((float)(1.0f)/(float)L_54))))));
		// particle.cachedPosition = position;
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_55 = ___particle0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56 = V_5;
		NullCheck(L_55);
		UIParticle_set_cachedPosition_mEDA61F1A70EF8A9CE6966CCA0126E8C47ED34FE6_inline(L_55, L_56, /*hidden argument*/NULL);
		// if (particle.activeMeshIndices.CountFast() == 0)
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_57 = ___particle0;
		NullCheck(L_57);
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_58;
		L_58 = UIParticle_get_activeMeshIndices_m423987C46CE4EC5176502A0BF43439C08B44E8FF_inline(L_57, /*hidden argument*/NULL);
		int32_t L_59;
		L_59 = ListExtensions_CountFast_mB56B0BE6BCAC5AE99E6E829D67E89054C308EFC7(L_58, /*hidden argument*/NULL);
		if (L_59)
		{
			goto IL_0138;
		}
	}
	{
		// diff = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60;
		L_60 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		V_6 = L_60;
	}

IL_0138:
	{
		// for (var i = 0; i < particle.particles.Count; i++)
		V_8 = 0;
		goto IL_03bf;
	}

IL_0140:
	{
		// MeshHelper.activeMeshIndices.Add(false);
		IL2CPP_RUNTIME_CLASS_INIT(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_61;
		L_61 = MeshHelper_get_activeMeshIndices_m6E866395890B87CD4AC987657DA66509592FB225_inline(/*hidden argument*/NULL);
		NullCheck(L_61);
		List_1_Add_m36874AE3230618C5996C030D9BE84120CA0F9735(L_61, (bool)0, /*hidden argument*/List_1_Add_m36874AE3230618C5996C030D9BE84120CA0F9735_RuntimeMethod_var);
		// MeshHelper.activeMeshIndices.Add(false);
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_62;
		L_62 = MeshHelper_get_activeMeshIndices_m6E866395890B87CD4AC987657DA66509592FB225_inline(/*hidden argument*/NULL);
		NullCheck(L_62);
		List_1_Add_m36874AE3230618C5996C030D9BE84120CA0F9735(L_62, (bool)0, /*hidden argument*/List_1_Add_m36874AE3230618C5996C030D9BE84120CA0F9735_RuntimeMethod_var);
		// var currentPs = particle.particles[i];
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_63 = ___particle0;
		NullCheck(L_63);
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_64;
		L_64 = UIParticle_get_particles_m248BEC4C388F11152591A68AC7B94ECD8622AC0F_inline(L_63, /*hidden argument*/NULL);
		int32_t L_65 = V_8;
		NullCheck(L_64);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_66;
		L_66 = List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_inline(L_64, L_65, /*hidden argument*/List_1_get_Item_mA4BF0C8DAC109A8EF2C91C7918218364672650BE_RuntimeMethod_var);
		V_9 = L_66;
		// if (!currentPs || !currentPs.IsAlive() || currentPs.particleCount == 0) continue;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_67 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_68;
		L_68 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_67, /*hidden argument*/NULL);
		if (!L_68)
		{
			goto IL_03b9;
		}
	}
	{
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_69 = V_9;
		NullCheck(L_69);
		bool L_70;
		L_70 = ParticleSystem_IsAlive_m59D28AC79A1A5FD1D97523D83D687ACFA2510198(L_69, /*hidden argument*/NULL);
		if (!L_70)
		{
			goto IL_03b9;
		}
	}
	{
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_71 = V_9;
		NullCheck(L_71);
		int32_t L_72;
		L_72 = ParticleSystem_get_particleCount_mAD1793317BD6BBCB0C7A7853A9E82D19703B0A52(L_71, /*hidden argument*/NULL);
		if (!L_72)
		{
			goto IL_03b9;
		}
	}
	{
		// var r = currentPs.GetComponent<ParticleSystemRenderer>();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_73 = V_9;
		NullCheck(L_73);
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_74;
		L_74 = Component_GetComponent_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m433D0F036D744378DDD67C566DDC69B19052E933(L_73, /*hidden argument*/Component_GetComponent_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m433D0F036D744378DDD67C566DDC69B19052E933_RuntimeMethod_var);
		V_10 = L_74;
		// if (!r.sharedMaterial && !r.trailMaterial) continue;
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_75 = V_10;
		NullCheck(L_75);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_76;
		L_76 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_75, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_77;
		L_77 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_76, /*hidden argument*/NULL);
		if (L_77)
		{
			goto IL_01b1;
		}
	}
	{
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_78 = V_10;
		NullCheck(L_78);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_79;
		L_79 = ParticleSystemRenderer_get_trailMaterial_mB7C8AE9C0D9B9A2092E2FCF55AA6CFE3B0B3A400(L_78, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_80;
		L_80 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_79, /*hidden argument*/NULL);
		if (!L_80)
		{
			goto IL_03b9;
		}
	}

IL_01b1:
	{
		// var matrix = rootMatrix;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_81 = V_2;
		V_11 = L_81;
		// if (currentPs.transform != root)
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_82 = V_9;
		NullCheck(L_82);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_83;
		L_83 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_82, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_84 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_85;
		L_85 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_83, L_84, /*hidden argument*/NULL);
		if (!L_85)
		{
			goto IL_0212;
		}
	}
	{
		// if (currentPs.main.simulationSpace == ParticleSystemSimulationSpace.Local)
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_86 = V_9;
		NullCheck(L_86);
		MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  L_87;
		L_87 = ParticleSystem_get_main_m8F17DCC63679B15CE548BE83332FDB6635AE74A0(L_86, /*hidden argument*/NULL);
		V_12 = L_87;
		int32_t L_88;
		L_88 = MainModule_get_simulationSpace_mD08447602DF2E2AC9790D900A1BD04AB8D4FD0A2((MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *)(&V_12), /*hidden argument*/NULL);
		if (L_88)
		{
			goto IL_01f7;
		}
	}
	{
		// var relativePos = root.InverseTransformPoint(currentPs.transform.position);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_89 = V_1;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_90 = V_9;
		NullCheck(L_90);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_91;
		L_91 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_90, /*hidden argument*/NULL);
		NullCheck(L_91);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_92;
		L_92 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_91, /*hidden argument*/NULL);
		NullCheck(L_89);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_93;
		L_93 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_89, L_92, /*hidden argument*/NULL);
		// matrix = Matrix4x4.Translate(relativePos) * matrix;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_94;
		L_94 = Matrix4x4_Translate_m48688727FA7BBA42DF2108C1A9395FC23431AC9A(L_93, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_95 = V_11;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_96;
		L_96 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F(L_94, L_95, /*hidden argument*/NULL);
		V_11 = L_96;
		// }
		goto IL_021b;
	}

IL_01f7:
	{
		// matrix = matrix * Matrix4x4.Translate(-root.position);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_97 = V_11;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_98 = V_1;
		NullCheck(L_98);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_99;
		L_99 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_98, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_100;
		L_100 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_99, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_101;
		L_101 = Matrix4x4_Translate_m48688727FA7BBA42DF2108C1A9395FC23431AC9A(L_100, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_102;
		L_102 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F(L_97, L_101, /*hidden argument*/NULL);
		V_11 = L_102;
		// }
		goto IL_021b;
	}

IL_0212:
	{
		// matrix = GetScaledMatrix(currentPs);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_103 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_104;
		L_104 = UIParticleUpdater_GetScaledMatrix_mC9E956691A3CBBB07FF3387FF6B682A4BF8A56C9(L_103, /*hidden argument*/NULL);
		V_11 = L_104;
	}

IL_021b:
	{
		// matrix = scaleMatrix * matrix;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_105 = V_4;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_106 = V_11;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_107;
		L_107 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F(L_105, L_106, /*hidden argument*/NULL);
		V_11 = L_107;
		// if (currentPs.main.simulationSpace == ParticleSystemSimulationSpace.World && 0 < diff.sqrMagnitude)
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_108 = V_9;
		NullCheck(L_108);
		MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  L_109;
		L_109 = ParticleSystem_get_main_m8F17DCC63679B15CE548BE83332FDB6635AE74A0(L_108, /*hidden argument*/NULL);
		V_12 = L_109;
		int32_t L_110;
		L_110 = MainModule_get_simulationSpace_mD08447602DF2E2AC9790D900A1BD04AB8D4FD0A2((MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *)(&V_12), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_110) == ((uint32_t)1))))
		{
			goto IL_02ce;
		}
	}
	{
		float L_111;
		L_111 = Vector3_get_sqrMagnitude_mC567EE6DF411501A8FE1F23A0038862630B88249((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_6), /*hidden argument*/NULL);
		if ((!(((float)(0.0f)) < ((float)L_111))))
		{
			goto IL_02ce;
		}
	}
	{
		// var count = currentPs.particleCount;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_112 = V_9;
		NullCheck(L_112);
		int32_t L_113;
		L_113 = ParticleSystem_get_particleCount_mAD1793317BD6BBCB0C7A7853A9E82D19703B0A52(L_112, /*hidden argument*/NULL);
		V_13 = L_113;
		// if (s_Particles.Length < count)
		IL2CPP_RUNTIME_CLASS_INIT(UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var);
		ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C* L_114 = ((UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var))->get_s_Particles_2();
		NullCheck(L_114);
		int32_t L_115 = V_13;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_114)->max_length)))) >= ((int32_t)L_115)))
		{
			goto IL_0272;
		}
	}
	{
		// var size = Mathf.NextPowerOfTwo(count);
		int32_t L_116 = V_13;
		int32_t L_117;
		L_117 = Mathf_NextPowerOfTwo_m89DB0674631948FE00FD5660B18D9E62CE85CAF5(L_116, /*hidden argument*/NULL);
		// s_Particles = new ParticleSystem.Particle[size];
		ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C* L_118 = (ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C*)(ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C*)SZArrayNew(ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C_il2cpp_TypeInfo_var, (uint32_t)L_117);
		IL2CPP_RUNTIME_CLASS_INIT(UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var);
		((UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var))->set_s_Particles_2(L_118);
	}

IL_0272:
	{
		// currentPs.GetParticles(s_Particles);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_119 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var);
		ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C* L_120 = ((UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var))->get_s_Particles_2();
		NullCheck(L_119);
		int32_t L_121;
		L_121 = ParticleSystem_GetParticles_mAE8894E2B022EE009C6DDB1390AB331E7D40A344(L_119, L_120, /*hidden argument*/NULL);
		// for (var j = 0; j < count; j++)
		V_14 = 0;
		goto IL_02ba;
	}

IL_0284:
	{
		// var p = s_Particles[j];
		IL2CPP_RUNTIME_CLASS_INIT(UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var);
		ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C* L_122 = ((UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var))->get_s_Particles_2();
		int32_t L_123 = V_14;
		NullCheck(L_122);
		int32_t L_124 = L_123;
		Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1  L_125 = (L_122)->GetAt(static_cast<il2cpp_array_size_t>(L_124));
		V_15 = L_125;
		// p.position += diff;
		Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 * L_126 = (&V_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_127;
		L_127 = Particle_get_position_m73D35C09484E06CC11E1E96CE61C5BBDBE654C8E((Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *)L_126, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_128 = V_6;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_129;
		L_129 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_127, L_128, /*hidden argument*/NULL);
		Particle_set_position_mB749E41CD3C4C6DF501C0D68B6211CF7E2217FC2((Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 *)L_126, L_129, /*hidden argument*/NULL);
		// s_Particles[j] = p;
		ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C* L_130 = ((UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var))->get_s_Particles_2();
		int32_t L_131 = V_14;
		Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1  L_132 = V_15;
		NullCheck(L_130);
		(L_130)->SetAt(static_cast<il2cpp_array_size_t>(L_131), (Particle_tDAEF22C4F9FB70E048551ECB203B6A81185832E1 )L_132);
		// for (var j = 0; j < count; j++)
		int32_t L_133 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_133, (int32_t)1));
	}

IL_02ba:
	{
		// for (var j = 0; j < count; j++)
		int32_t L_134 = V_14;
		int32_t L_135 = V_13;
		if ((((int32_t)L_134) < ((int32_t)L_135)))
		{
			goto IL_0284;
		}
	}
	{
		// currentPs.SetParticles(s_Particles, count);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_136 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var);
		ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C* L_137 = ((UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var))->get_s_Particles_2();
		int32_t L_138 = V_13;
		NullCheck(L_136);
		ParticleSystem_SetParticles_m0658B777D1C6DDA7D244607AC55D5225774CEBFA(L_136, L_137, L_138, /*hidden argument*/NULL);
	}

IL_02ce:
	{
		// if (Mathf.Approximately(particle.canvasRenderer.GetInheritedAlpha(), 0))
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_139 = ___particle0;
		NullCheck(L_139);
		CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * L_140;
		L_140 = Graphic_get_canvasRenderer_m33EC3A53310593E87C540654486C7A73A66FCF4A(L_139, /*hidden argument*/NULL);
		NullCheck(L_140);
		float L_141;
		L_141 = CanvasRenderer_GetInheritedAlpha_m41BBA6DD00E33E791232B5BC2A6EDB7CB7BD6496(L_140, /*hidden argument*/NULL);
		bool L_142;
		L_142 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_141, (0.0f), /*hidden argument*/NULL);
		if (L_142)
		{
			goto IL_03b9;
		}
	}
	{
		// if (CanBakeMesh(r))
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_143 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var);
		bool L_144;
		L_144 = UIParticleUpdater_CanBakeMesh_m1649175541F2480D8DBF150CF98E1C75B4A9B5FC(L_143, /*hidden argument*/NULL);
		if (!L_144)
		{
			goto IL_0320;
		}
	}
	{
		// var hash = currentPs.GetMaterialHash(false);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_145 = V_9;
		int64_t L_146;
		L_146 = ParticleSystemExtensions_GetMaterialHash_m3945DF66D4DE99C62ED508CBD66B4FCDC9866D4D(L_145, (bool)0, /*hidden argument*/NULL);
		V_16 = L_146;
		// if (hash != 0)
		int64_t L_147 = V_16;
		if (!L_147)
		{
			goto IL_0320;
		}
	}
	{
		// var m = MeshHelper.GetTemporaryMesh();
		IL2CPP_RUNTIME_CLASS_INIT(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_148;
		L_148 = MeshHelper_GetTemporaryMesh_mF6A8895295BCCE34BC5A15B21810967A14DFDE5C(/*hidden argument*/NULL);
		V_17 = L_148;
		// r.BakeMesh(m, camera, true);
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_149 = V_10;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_150 = V_17;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_151 = V_0;
		NullCheck(L_149);
		ParticleSystemRenderer_BakeMesh_m1A53F569D7DFCBE964E66D5E3ACA11D85ED56C9E(L_149, L_150, L_151, (bool)1, /*hidden argument*/NULL);
		// MeshHelper.Push(i * 2, hash, m, matrix);
		int32_t L_152 = V_8;
		int64_t L_153 = V_16;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_154 = V_17;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_155 = V_11;
		MeshHelper_Push_m796C5719F64A3A27C5C5BF8F146A307A91C60C76(((int32_t)il2cpp_codegen_multiply((int32_t)L_152, (int32_t)2)), L_153, L_154, L_155, /*hidden argument*/NULL);
	}

IL_0320:
	{
		// if (currentPs.trails.enabled)
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_156 = V_9;
		NullCheck(L_156);
		TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8  L_157;
		L_157 = ParticleSystem_get_trails_m9514134A5A05CCDEF2C901BC0D60FC287959414C(L_156, /*hidden argument*/NULL);
		V_18 = L_157;
		bool L_158;
		L_158 = TrailModule_get_enabled_mC8F78FC387B7317940FBF057E3663D27E61FFC0E((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_18), /*hidden argument*/NULL);
		if (!L_158)
		{
			goto IL_03b9;
		}
	}
	{
		// var hash = currentPs.GetMaterialHash(true);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_159 = V_9;
		int64_t L_160;
		L_160 = ParticleSystemExtensions_GetMaterialHash_m3945DF66D4DE99C62ED508CBD66B4FCDC9866D4D(L_159, (bool)1, /*hidden argument*/NULL);
		V_19 = L_160;
		// if (hash != 0)
		int64_t L_161 = V_19;
		if (!L_161)
		{
			goto IL_03b9;
		}
	}
	{
		// matrix = currentPs.main.simulationSpace == ParticleSystemSimulationSpace.Local && currentPs.trails.worldSpace
		//     ? matrix * Matrix4x4.Translate(-currentPs.transform.position)
		//     : matrix;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_162 = V_9;
		NullCheck(L_162);
		MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  L_163;
		L_163 = ParticleSystem_get_main_m8F17DCC63679B15CE548BE83332FDB6635AE74A0(L_162, /*hidden argument*/NULL);
		V_12 = L_163;
		int32_t L_164;
		L_164 = MainModule_get_simulationSpace_mD08447602DF2E2AC9790D900A1BD04AB8D4FD0A2((MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *)(&V_12), /*hidden argument*/NULL);
		if (L_164)
		{
			goto IL_0367;
		}
	}
	{
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_165 = V_9;
		NullCheck(L_165);
		TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8  L_166;
		L_166 = ParticleSystem_get_trails_m9514134A5A05CCDEF2C901BC0D60FC287959414C(L_165, /*hidden argument*/NULL);
		V_18 = L_166;
		bool L_167;
		L_167 = TrailModule_get_worldSpace_m3720B01F60BFFF13888FF12BDCBE8504D2737B8D((TrailModule_t95D15372971E64A1977B7587ABAA87B1A31EF5C8 *)(&V_18), /*hidden argument*/NULL);
		if (L_167)
		{
			goto IL_036b;
		}
	}

IL_0367:
	{
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_168 = V_11;
		G_B34_0 = L_168;
		goto IL_0388;
	}

IL_036b:
	{
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_169 = V_11;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_170 = V_9;
		NullCheck(L_170);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_171;
		L_171 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_170, /*hidden argument*/NULL);
		NullCheck(L_171);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_172;
		L_172 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_171, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_173;
		L_173 = Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline(L_172, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_174;
		L_174 = Matrix4x4_Translate_m48688727FA7BBA42DF2108C1A9395FC23431AC9A(L_173, /*hidden argument*/NULL);
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_175;
		L_175 = Matrix4x4_op_Multiply_mC2B30D333D4399C1693414F1A73D87FB3450F39F(L_169, L_174, /*hidden argument*/NULL);
		G_B34_0 = L_175;
	}

IL_0388:
	{
		V_11 = G_B34_0;
		// var m = MeshHelper.GetTemporaryMesh();
		IL2CPP_RUNTIME_CLASS_INIT(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_176;
		L_176 = MeshHelper_GetTemporaryMesh_mF6A8895295BCCE34BC5A15B21810967A14DFDE5C(/*hidden argument*/NULL);
		V_20 = L_176;
	}

IL_0391:
	try
	{ // begin try (depth: 1)
		// r.BakeTrailsMesh(m, camera, true);
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_177 = V_10;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_178 = V_20;
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_179 = V_0;
		NullCheck(L_177);
		ParticleSystemRenderer_BakeTrailsMesh_m7BE3F730731BBFA0C6A9399BF91813236AC14E3F(L_177, L_178, L_179, (bool)1, /*hidden argument*/NULL);
		// MeshHelper.Push(i * 2 + 1, hash, m, matrix);
		int32_t L_180 = V_8;
		int64_t L_181 = V_19;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_182 = V_20;
		Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  L_183 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		MeshHelper_Push_m796C5719F64A3A27C5C5BF8F146A307A91C60C76(((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_180, (int32_t)2)), (int32_t)1)), L_181, L_182, L_183, /*hidden argument*/NULL);
		// }
		goto IL_03b9;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_03af;
		}
		throw e;
	}

CATCH_03af:
	{ // begin catch(System.Object)
		// catch
		// MeshHelper.DiscardTemporaryMesh(m);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_184 = V_20;
		IL2CPP_RUNTIME_CLASS_INIT(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var)));
		MeshHelper_DiscardTemporaryMesh_m21B64454950E1DC3D5E3A4E072C64436DD510274(L_184, /*hidden argument*/NULL);
		// }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_03b9;
	} // end catch (depth: 1)

IL_03b9:
	{
		// for (var i = 0; i < particle.particles.Count; i++)
		int32_t L_185 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_185, (int32_t)1));
	}

IL_03bf:
	{
		// for (var i = 0; i < particle.particles.Count; i++)
		int32_t L_186 = V_8;
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_187 = ___particle0;
		NullCheck(L_187);
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_188;
		L_188 = UIParticle_get_particles_m248BEC4C388F11152591A68AC7B94ECD8622AC0F_inline(L_187, /*hidden argument*/NULL);
		NullCheck(L_188);
		int32_t L_189;
		L_189 = List_1_get_Count_m717EDAB95A84624B81D546CBEDC84B4664B7B678_inline(L_188, /*hidden argument*/List_1_get_Count_m717EDAB95A84624B81D546CBEDC84B4664B7B678_RuntimeMethod_var);
		if ((((int32_t)L_186) < ((int32_t)L_189)))
		{
			goto IL_0140;
		}
	}
	{
		// particle.activeMeshIndices = MeshHelper.activeMeshIndices;
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_190 = ___particle0;
		IL2CPP_RUNTIME_CLASS_INIT(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_191;
		L_191 = MeshHelper_get_activeMeshIndices_m6E866395890B87CD4AC987657DA66509592FB225_inline(/*hidden argument*/NULL);
		NullCheck(L_190);
		UIParticle_set_activeMeshIndices_m7818D19F7F023BA051A1D1C9A06BBB598E4647FD(L_190, L_191, /*hidden argument*/NULL);
		// MeshHelper.CombineMesh(particle.bakedMesh);
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_192 = ___particle0;
		NullCheck(L_192);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_193;
		L_193 = UIParticle_get_bakedMesh_m8ECD19D62E8B19E41FD8F1BAB590154190A3AE7E_inline(L_192, /*hidden argument*/NULL);
		MeshHelper_CombineMesh_mD63A256D9888B45713B7E6FA7677163A30F46C59(L_193, /*hidden argument*/NULL);
		// MeshHelper.Clear();
		MeshHelper_Clear_mBD6823C35D072FBF6D61B7CE4AF5D2DEAC6B6912(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Coffee.UIExtensions.UIParticleUpdater::CanBakeMesh(UnityEngine.ParticleSystemRenderer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIParticleUpdater_CanBakeMesh_m1649175541F2480D8DBF150CF98E1C75B4A9B5FC (ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * ___renderer0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (renderer.renderMode == ParticleSystemRenderMode.Mesh && renderer.mesh == null) return false;
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_0 = ___renderer0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ParticleSystemRenderer_get_renderMode_mE203DEDF25DAA9E549CECD34F7552E8B39A81576(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)4))))
		{
			goto IL_0019;
		}
	}
	{
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_2 = ___renderer0;
		NullCheck(L_2);
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_3;
		L_3 = ParticleSystemRenderer_get_mesh_m32A036955DAEA0FDDA2D4B8EE3D5AEE7FD67A92F(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0019;
		}
	}
	{
		// if (renderer.renderMode == ParticleSystemRenderMode.Mesh && renderer.mesh == null) return false;
		return (bool)0;
	}

IL_0019:
	{
		// if (renderer.renderMode == ParticleSystemRenderMode.None) return false;
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_5 = ___renderer0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = ParticleSystemRenderer_get_renderMode_mE203DEDF25DAA9E549CECD34F7552E8B39A81576(L_5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)5))))
		{
			goto IL_0024;
		}
	}
	{
		// if (renderer.renderMode == ParticleSystemRenderMode.None) return false;
		return (bool)0;
	}

IL_0024:
	{
		// return true;
		return (bool)1;
	}
}
// System.Void Coffee.UIExtensions.UIParticleUpdater::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIParticleUpdater__cctor_mC0F1B3B34106385544D3D15EEBAB9E4664DDB296 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7D1A839C1BAE4BD9CCBD0203D0AF23A6C337B4F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static readonly List<UIParticle> s_ActiveParticles = new List<UIParticle>();
		List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF * L_0 = (List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF *)il2cpp_codegen_object_new(List_1_tE11CDAE2CBEBEF3BE2FCF457CF2DEE8BD46789AF_il2cpp_TypeInfo_var);
		List_1__ctor_m7D1A839C1BAE4BD9CCBD0203D0AF23A6C337B4F5(L_0, /*hidden argument*/List_1__ctor_m7D1A839C1BAE4BD9CCBD0203D0AF23A6C337B4F5_RuntimeMethod_var);
		((UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var))->set_s_ActiveParticles_0(L_0);
		// static ParticleSystem.Particle[] s_Particles = new ParticleSystem.Particle[2048];
		ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C* L_1 = (ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C*)(ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C*)SZArrayNew(ParticleU5BU5D_tF02F4854575E99F3004B58B6CC6BB2373BAEB04C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)2048));
		((UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var))->set_s_Particles_2(L_1);
		// private static int frameCount = 0;
		((UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_StaticFields*)il2cpp_codegen_static_fields_for(UIParticleUpdater_t438E99C597F603C0FDB599A370E7773366AA51A8_il2cpp_TypeInfo_var))->set_frameCount_3(0);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Coffee.UIParticleExtensions.ModifiedMaterial/MatEntry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MatEntry__ctor_m36A3B61203F0FEB8AAD0A20DF331D2E41F2EBC45 (MatEntry_tA2ACBE665523516F389B1EF74DF30BF38D08E143 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void Coffee.UIParticleExtensions.ParticleSystemExtensions/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m8F6392BADBB39E271E69146C7301B364E9E5B908 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7C65392AB7B89EB93CD97F4D2C256FF531662AFA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7C65392AB7B89EB93CD97F4D2C256FF531662AFA * L_0 = (U3CU3Ec_t7C65392AB7B89EB93CD97F4D2C256FF531662AFA *)il2cpp_codegen_object_new(U3CU3Ec_t7C65392AB7B89EB93CD97F4D2C256FF531662AFA_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mEDFDCEECADBF4B760EF79BF8F47C4EF0209C403E(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t7C65392AB7B89EB93CD97F4D2C256FF531662AFA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7C65392AB7B89EB93CD97F4D2C256FF531662AFA_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Coffee.UIParticleExtensions.ParticleSystemExtensions/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mEDFDCEECADBF4B760EF79BF8F47C4EF0209C403E (U3CU3Ec_t7C65392AB7B89EB93CD97F4D2C256FF531662AFA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Coffee.UIParticleExtensions.ParticleSystemExtensions/<>c::<Exec>b__4_0(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CExecU3Eb__4_0_m00103062797FB632C636D1121701F549177D1B4D (U3CU3Ec_t7C65392AB7B89EB93CD97F4D2C256FF531662AFA * __this, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// self.RemoveAll(p => !p);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_0 = ___p0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
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
// System.Void Coffee.UIParticleExtensions.ParticleSystemExtensions/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mC35DF534F3069DC5232DB150FDC2AD6841D249EE (U3CU3Ec__DisplayClass0_0_t410A51546B9C637DD1CE839ED94804B7C5005A80 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 Coffee.UIParticleExtensions.ParticleSystemExtensions/<>c__DisplayClass0_0::<SortForRendering>b__0(UnityEngine.ParticleSystem,UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec__DisplayClass0_0_U3CSortForRenderingU3Eb__0_m48956996D3FB13708AB0AC8A06D49A369D232ED7 (U3CU3Ec__DisplayClass0_0_t410A51546B9C637DD1CE839ED94804B7C5005A80 * __this, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___a0, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___b1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m433D0F036D744378DDD67C566DDC69B19052E933_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_0 = NULL;
	ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * V_1 = NULL;
	ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * V_2 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * V_3 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * V_4 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_5 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * V_6 = NULL;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B2_0 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B1_0 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B4_0 = NULL;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * G_B3_0 = NULL;
	{
		// var tr = transform;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0 = __this->get_transform_0();
		V_0 = L_0;
		// var aRenderer = a.GetComponent<ParticleSystemRenderer>();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_1 = ___a0;
		NullCheck(L_1);
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_2;
		L_2 = Component_GetComponent_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m433D0F036D744378DDD67C566DDC69B19052E933(L_1, /*hidden argument*/Component_GetComponent_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m433D0F036D744378DDD67C566DDC69B19052E933_RuntimeMethod_var);
		V_1 = L_2;
		// var bRenderer = b.GetComponent<ParticleSystemRenderer>();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_3 = ___b1;
		NullCheck(L_3);
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_4;
		L_4 = Component_GetComponent_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m433D0F036D744378DDD67C566DDC69B19052E933(L_3, /*hidden argument*/Component_GetComponent_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m433D0F036D744378DDD67C566DDC69B19052E933_RuntimeMethod_var);
		V_2 = L_4;
		// var aMat = aRenderer.sharedMaterial ?? aRenderer.trailMaterial;
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_5 = V_1;
		NullCheck(L_5);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_6;
		L_6 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_5, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_7 = L_6;
		G_B1_0 = L_7;
		if (L_7)
		{
			G_B2_0 = L_7;
			goto IL_0025;
		}
	}
	{
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_8 = V_1;
		NullCheck(L_8);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_9;
		L_9 = ParticleSystemRenderer_get_trailMaterial_mB7C8AE9C0D9B9A2092E2FCF55AA6CFE3B0B3A400(L_8, /*hidden argument*/NULL);
		G_B2_0 = L_9;
	}

IL_0025:
	{
		V_3 = G_B2_0;
		// var bMat = bRenderer.sharedMaterial ?? bRenderer.trailMaterial;
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_10 = V_2;
		NullCheck(L_10);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_11;
		L_11 = Renderer_get_sharedMaterial_m42DF538F0C6EA249B1FB626485D45D083BA74FCC(L_10, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_12 = L_11;
		G_B3_0 = L_12;
		if (L_12)
		{
			G_B4_0 = L_12;
			goto IL_0036;
		}
	}
	{
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_13 = V_2;
		NullCheck(L_13);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_14;
		L_14 = ParticleSystemRenderer_get_trailMaterial_mB7C8AE9C0D9B9A2092E2FCF55AA6CFE3B0B3A400(L_13, /*hidden argument*/NULL);
		G_B4_0 = L_14;
	}

IL_0036:
	{
		V_4 = G_B4_0;
		// if (!aMat && !bMat) return 0;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_15 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_004b;
		}
	}
	{
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_17 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_004b;
		}
	}
	{
		// if (!aMat && !bMat) return 0;
		return 0;
	}

IL_004b:
	{
		// if (!aMat) return -1;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_19 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_0055;
		}
	}
	{
		// if (!aMat) return -1;
		return (-1);
	}

IL_0055:
	{
		// if (!bMat) return 1;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_21 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_21, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_0060;
		}
	}
	{
		// if (!bMat) return 1;
		return 1;
	}

IL_0060:
	{
		// if (sortByMaterial)
		bool L_23 = __this->get_sortByMaterial_1();
		if (!L_23)
		{
			goto IL_0077;
		}
	}
	{
		// return aMat.GetInstanceID() - bMat.GetInstanceID();
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_24 = V_3;
		NullCheck(L_24);
		int32_t L_25;
		L_25 = Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501(L_24, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_26 = V_4;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = Object_GetInstanceID_m7CF962BC1DB5C03F3522F88728CB2F514582B501(L_26, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_25, (int32_t)L_27));
	}

IL_0077:
	{
		// if (aMat.renderQueue != bMat.renderQueue)
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_28 = V_3;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = Material_get_renderQueue_m6057A6297BDA9EB2828AAD344D2C8CC82F81939C(L_28, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_30 = V_4;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = Material_get_renderQueue_m6057A6297BDA9EB2828AAD344D2C8CC82F81939C(L_30, /*hidden argument*/NULL);
		if ((((int32_t)L_29) == ((int32_t)L_31)))
		{
			goto IL_0095;
		}
	}
	{
		// return aMat.renderQueue - bMat.renderQueue;
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_32 = V_3;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = Material_get_renderQueue_m6057A6297BDA9EB2828AAD344D2C8CC82F81939C(L_32, /*hidden argument*/NULL);
		Material_t8927C00353A72755313F046D0CE85178AE8218EE * L_34 = V_4;
		NullCheck(L_34);
		int32_t L_35;
		L_35 = Material_get_renderQueue_m6057A6297BDA9EB2828AAD344D2C8CC82F81939C(L_34, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_33, (int32_t)L_35));
	}

IL_0095:
	{
		// if (aRenderer.sortingLayerID != bRenderer.sortingLayerID)
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_36 = V_1;
		NullCheck(L_36);
		int32_t L_37;
		L_37 = Renderer_get_sortingLayerID_m668C1AA36751AF6655BAAD42BE7627E7950E48E8(L_36, /*hidden argument*/NULL);
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_38 = V_2;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = Renderer_get_sortingLayerID_m668C1AA36751AF6655BAAD42BE7627E7950E48E8(L_38, /*hidden argument*/NULL);
		if ((((int32_t)L_37) == ((int32_t)L_39)))
		{
			goto IL_00b1;
		}
	}
	{
		// return aRenderer.sortingLayerID - bRenderer.sortingLayerID;
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_40 = V_1;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = Renderer_get_sortingLayerID_m668C1AA36751AF6655BAAD42BE7627E7950E48E8(L_40, /*hidden argument*/NULL);
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_42 = V_2;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = Renderer_get_sortingLayerID_m668C1AA36751AF6655BAAD42BE7627E7950E48E8(L_42, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_41, (int32_t)L_43));
	}

IL_00b1:
	{
		// if (aRenderer.sortingOrder != bRenderer.sortingOrder)
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_44 = V_1;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = Renderer_get_sortingOrder_m043173C955559C12E0A33BD7F7945DA12B755AE0(L_44, /*hidden argument*/NULL);
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_46 = V_2;
		NullCheck(L_46);
		int32_t L_47;
		L_47 = Renderer_get_sortingOrder_m043173C955559C12E0A33BD7F7945DA12B755AE0(L_46, /*hidden argument*/NULL);
		if ((((int32_t)L_45) == ((int32_t)L_47)))
		{
			goto IL_00cd;
		}
	}
	{
		// return aRenderer.sortingOrder - bRenderer.sortingOrder;
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_48 = V_1;
		NullCheck(L_48);
		int32_t L_49;
		L_49 = Renderer_get_sortingOrder_m043173C955559C12E0A33BD7F7945DA12B755AE0(L_48, /*hidden argument*/NULL);
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_50 = V_2;
		NullCheck(L_50);
		int32_t L_51;
		L_51 = Renderer_get_sortingOrder_m043173C955559C12E0A33BD7F7945DA12B755AE0(L_50, /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_49, (int32_t)L_51));
	}

IL_00cd:
	{
		// var aTransform = a.transform;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_52 = ___a0;
		NullCheck(L_52);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53;
		L_53 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_52, /*hidden argument*/NULL);
		V_5 = L_53;
		// var bTransform = b.transform;
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_54 = ___b1;
		NullCheck(L_54);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_55;
		L_55 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_54, /*hidden argument*/NULL);
		V_6 = L_55;
		// var aPos = tr.InverseTransformPoint(aTransform.position).z + aRenderer.sortingFudge;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_57 = V_5;
		NullCheck(L_57);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_58;
		L_58 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_57, /*hidden argument*/NULL);
		NullCheck(L_56);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59;
		L_59 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_56, L_58, /*hidden argument*/NULL);
		float L_60 = L_59.get_z_4();
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_61 = V_1;
		NullCheck(L_61);
		float L_62;
		L_62 = ParticleSystemRenderer_get_sortingFudge_m2F9B4EFF4F196E685AECB9462D69B13E340C43EA(L_61, /*hidden argument*/NULL);
		V_7 = ((float)il2cpp_codegen_add((float)L_60, (float)L_62));
		// var bPos = tr.InverseTransformPoint(bTransform.position).z + bRenderer.sortingFudge;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_63 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_64 = V_6;
		NullCheck(L_64);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_65;
		L_65 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_64, /*hidden argument*/NULL);
		NullCheck(L_63);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_66;
		L_66 = Transform_InverseTransformPoint_m476ABC8F3F14824D7D82FE2C54CEE5A151A669B8(L_63, L_65, /*hidden argument*/NULL);
		float L_67 = L_66.get_z_4();
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_68 = V_2;
		NullCheck(L_68);
		float L_69;
		L_69 = ParticleSystemRenderer_get_sortingFudge_m2F9B4EFF4F196E685AECB9462D69B13E340C43EA(L_68, /*hidden argument*/NULL);
		V_8 = ((float)il2cpp_codegen_add((float)L_67, (float)L_69));
		// if (!Mathf.Approximately(aPos, bPos))
		float L_70 = V_7;
		float L_71 = V_8;
		bool L_72;
		L_72 = Mathf_Approximately_mC2A3F657E3FD0CCAD4A4936CEE2F67D624A2AA55(L_70, L_71, /*hidden argument*/NULL);
		if (L_72)
		{
			goto IL_012a;
		}
	}
	{
		// return (int) Mathf.Sign(bPos - aPos);
		float L_73 = V_8;
		float L_74 = V_7;
		float L_75;
		L_75 = Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB(((float)il2cpp_codegen_subtract((float)L_73, (float)L_74)), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_75));
	}

IL_012a:
	{
		// return (int) Mathf.Sign(GetIndex(self, a) - GetIndex(self, b));
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_76 = __this->get_self_2();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_77 = ___a0;
		int32_t L_78;
		L_78 = ParticleSystemExtensions_GetIndex_mE6E34A8F45D6833DB06D66CABE37194DC8911732(L_76, L_77, /*hidden argument*/NULL);
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_79 = __this->get_self_2();
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_80 = ___b1;
		int32_t L_81;
		L_81 = ParticleSystemExtensions_GetIndex_mE6E34A8F45D6833DB06D66CABE37194DC8911732(L_79, L_80, /*hidden argument*/NULL);
		float L_82;
		L_82 = Mathf_Sign_m01716387C82B9523CFFADED7B2037D75F57FE2FB(((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_78, (int32_t)L_81)))), /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_82));
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
// System.Void Coffee.UIExtensions.UIParticle/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m574151F54591FB43097B4E1D1188D66DE9895E19 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848 * L_0 = (U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848 *)il2cpp_codegen_object_new(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m74DF06DCBDEFF847631A9E912B62737FE3712049(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m74DF06DCBDEFF847631A9E912B62737FE3712049 (U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle/<>c::<Play>b__49_0(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CPlayU3Eb__49_0_m68892900DB4B2D962E6E8F2FD6675468A93DC724 (U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848 * __this, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___p0, const RuntimeMethod* method)
{
	{
		// particles.Exec(p => p.Play());
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_0 = ___p0;
		NullCheck(L_0);
		ParticleSystem_Play_m28D27CC4CDC1D93195C75647E6F6DAECF8B6BC50(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle/<>c::<Pause>b__50_0(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CPauseU3Eb__50_0_mDCC52D582B2F890218C18E481ACFA1BFC793ECCA (U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848 * __this, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___p0, const RuntimeMethod* method)
{
	{
		// particles.Exec(p => p.Pause());
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_0 = ___p0;
		NullCheck(L_0);
		ParticleSystem_Pause_mA5AE4D5A290E9DD75A0572738CB0910D6A7E2121(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle/<>c::<Stop>b__51_0(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CStopU3Eb__51_0_mBEC5AD812335E6B397EB8F6964DE01CA2F7B6B17 (U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848 * __this, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___p0, const RuntimeMethod* method)
{
	{
		// particles.Exec(p => p.Stop());
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_0 = ___p0;
		NullCheck(L_0);
		ParticleSystem_Stop_m8CBF9268DE7B5A40952B4977462B857B5F5AFB9D(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle/<>c::<Clear>b__52_0(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CClearU3Eb__52_0_mB0C876F32AC5CC357A244FC7AAA4941AEDC38D00 (U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848 * __this, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___p0, const RuntimeMethod* method)
{
	{
		// particles.Exec(p => p.Clear());
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_0 = ___p0;
		NullCheck(L_0);
		ParticleSystem_Clear_mD8C9DCD1267F221B0546E4B9B55DBD9354893797(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle/<>c::<OnEnable>b__63_0(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnEnableU3Eb__63_0_m42AB4AE7166163450682F0F8F8EEFB86ABD8074E (U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848 * __this, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m433D0F036D744378DDD67C566DDC69B19052E933_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// particles.Exec(p => p.GetComponent<ParticleSystemRenderer>().enabled = false);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_0 = ___p0;
		NullCheck(L_0);
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_1;
		L_1 = Component_GetComponent_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m433D0F036D744378DDD67C566DDC69B19052E933(L_0, /*hidden argument*/Component_GetComponent_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m433D0F036D744378DDD67C566DDC69B19052E933_RuntimeMethod_var);
		NullCheck(L_1);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_1, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Coffee.UIExtensions.UIParticle/<>c::<Start>b__64_0(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CStartU3Eb__64_0_m34CF1F9CE85B5759D360922EF5F5D679C378D519 (U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848 * __this, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___ps0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m1BA90639BF94849A162DBBBE2D51C11C87280086_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListExtensions_AnyFast_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_mDC26D93BC277BF64AAC4801E25D8382523A97190_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1__ctor_mC62A94144C701E9EC5A659E5DE76CF29A717AD83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__64_1_mFC25FC496F24A97AF28408FC0BDC2E8D1AECD9F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C * G_B2_0 = NULL;
	List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * G_B2_1 = NULL;
	Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C * G_B1_0 = NULL;
	List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * G_B1_1 = NULL;
	{
		// ps.GetComponentsInChildren(false, s_ParticleSystems);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_0 = ___ps0;
		IL2CPP_RUNTIME_CLASS_INIT(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var);
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_1 = ((UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields*)il2cpp_codegen_static_fields_for(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var))->get_s_ParticleSystems_55();
		NullCheck(L_0);
		Component_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m1BA90639BF94849A162DBBBE2D51C11C87280086(L_0, (bool)0, L_1, /*hidden argument*/Component_GetComponentsInChildren_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_m1BA90639BF94849A162DBBBE2D51C11C87280086_RuntimeMethod_var);
		// return s_ParticleSystems.AnyFast(p => p.isPlaying && (p.subEmitters.enabled || p.main.prewarm));
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_2 = ((UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields*)il2cpp_codegen_static_fields_for(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var))->get_s_ParticleSystems_55();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var);
		Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C * L_3 = ((U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var))->get_U3CU3E9__64_1_6();
		Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C * L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			goto IL_0030;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var);
		U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848 * L_5 = ((U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C * L_6 = (Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C *)il2cpp_codegen_object_new(Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C_il2cpp_TypeInfo_var);
		Predicate_1__ctor_mC62A94144C701E9EC5A659E5DE76CF29A717AD83(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec_U3CStartU3Eb__64_1_mFC25FC496F24A97AF28408FC0BDC2E8D1AECD9F5_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_mC62A94144C701E9EC5A659E5DE76CF29A717AD83_RuntimeMethod_var);
		Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C * L_7 = L_6;
		((U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var))->set_U3CU3E9__64_1_6(L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_0030:
	{
		bool L_8;
		L_8 = ListExtensions_AnyFast_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_mDC26D93BC277BF64AAC4801E25D8382523A97190(G_B2_1, G_B2_0, /*hidden argument*/ListExtensions_AnyFast_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_mDC26D93BC277BF64AAC4801E25D8382523A97190_RuntimeMethod_var);
		return L_8;
	}
}
// System.Boolean Coffee.UIExtensions.UIParticle/<>c::<Start>b__64_1(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CStartU3Eb__64_1_mFC25FC496F24A97AF28408FC0BDC2E8D1AECD9F5 (U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848 * __this, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___p0, const RuntimeMethod* method)
{
	SubEmittersModule_t0336A6F2B5D3339D93468AED015E2356FBE9E61C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// return s_ParticleSystems.AnyFast(p => p.isPlaying && (p.subEmitters.enabled || p.main.prewarm));
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_0 = ___p0;
		NullCheck(L_0);
		bool L_1;
		L_1 = ParticleSystem_get_isPlaying_m36FD03CBF99EE4C243B01F37D77CB6B1CFA526BA(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_2 = ___p0;
		NullCheck(L_2);
		SubEmittersModule_t0336A6F2B5D3339D93468AED015E2356FBE9E61C  L_3;
		L_3 = ParticleSystem_get_subEmitters_mCFE3CAEF76ADEAF3754210EC731A54A9DA836428(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4;
		L_4 = SubEmittersModule_get_enabled_m02FBEA1699B26DD9C012746333F688F8D320D769((SubEmittersModule_t0336A6F2B5D3339D93468AED015E2356FBE9E61C *)(&V_0), /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0027;
		}
	}
	{
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_5 = ___p0;
		NullCheck(L_5);
		MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B  L_6;
		L_6 = ParticleSystem_get_main_m8F17DCC63679B15CE548BE83332FDB6635AE74A0(L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		bool L_7;
		L_7 = MainModule_get_prewarm_mED3F6C53F9474FE31E12566B192438C78E7B50D2((MainModule_t671F49558CB1A3CFAAD637A7927C076EC2E61F0B *)(&V_1), /*hidden argument*/NULL);
		return L_7;
	}

IL_0027:
	{
		return (bool)1;
	}

IL_0029:
	{
		return (bool)0;
	}
}
// System.Void Coffee.UIExtensions.UIParticle/<>c::<OnDisable>b__65_0(UnityEngine.ParticleSystem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3COnDisableU3Eb__65_0_m0873D88D78A472141724261B57680D2477818F47 (U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848 * __this, ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m433D0F036D744378DDD67C566DDC69B19052E933_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// particles.Exec(p => p.GetComponent<ParticleSystemRenderer>().enabled = true);
		ParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E * L_0 = ___p0;
		NullCheck(L_0);
		ParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269 * L_1;
		L_1 = Component_GetComponent_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m433D0F036D744378DDD67C566DDC69B19052E933(L_0, /*hidden argument*/Component_GetComponent_TisParticleSystemRenderer_tD559F69F1B7EB14FD58CEB08E46657B6A54A6269_m433D0F036D744378DDD67C566DDC69B19052E933_RuntimeMethod_var);
		NullCheck(L_1);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_1, (bool)1, /*hidden argument*/NULL);
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
// System.Void Coffee.UIExtensions.UIParticle/<Start>d__64::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__64__ctor_m7E27FAF472B8D8EB2B2A8F4C3259C287EE98355C (U3CStartU3Ed__64_t7BB41721AF1EF379EB6185056ADF644F90A4B065 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Coffee.UIExtensions.UIParticle/<Start>d__64::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__64_System_IDisposable_Dispose_m5D8DD9B7A806945F34759E0E222D417ADBFEDD8E (U3CStartU3Ed__64_t7BB41721AF1EF379EB6185056ADF644F90A4B065 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Coffee.UIExtensions.UIParticle/<Start>d__64::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartU3Ed__64_MoveNext_mE57792E1D305A4182C0222A1328A00811E1C27B4 (U3CStartU3Ed__64_t7BB41721AF1EF379EB6185056ADF644F90A4B065 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ListExtensions_AnyFast_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_mDC26D93BC277BF64AAC4801E25D8382523A97190_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m58DE04C3BBC03B16192027F9A20F6B2CDEBCE668_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1__ctor_mC62A94144C701E9EC5A659E5DE76CF29A717AD83_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CStartU3Eb__64_0_m34CF1F9CE85B5759D360922EF5F5D679C378D519_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * V_1 = NULL;
	Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C * G_B5_0 = NULL;
	List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * G_B5_1 = NULL;
	Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C * G_B4_0 = NULL;
	List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * G_B4_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0072;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// var delayToPlay = particles.AnyFast(ps =>
		// {
		//     ps.GetComponentsInChildren(false, s_ParticleSystems);
		//     return s_ParticleSystems.AnyFast(p => p.isPlaying && (p.subEmitters.enabled || p.main.prewarm));
		// });
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_4 = V_1;
		NullCheck(L_4);
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_5;
		L_5 = UIParticle_get_particles_m248BEC4C388F11152591A68AC7B94ECD8622AC0F_inline(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var);
		Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C * L_6 = ((U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var))->get_U3CU3E9__64_0_7();
		Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C * L_7 = L_6;
		G_B4_0 = L_7;
		G_B4_1 = L_5;
		if (L_7)
		{
			G_B5_0 = L_7;
			G_B5_1 = L_5;
			goto IL_0043;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var);
		U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848 * L_8 = ((U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C * L_9 = (Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C *)il2cpp_codegen_object_new(Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C_il2cpp_TypeInfo_var);
		Predicate_1__ctor_mC62A94144C701E9EC5A659E5DE76CF29A717AD83(L_9, L_8, (intptr_t)((intptr_t)U3CU3Ec_U3CStartU3Eb__64_0_m34CF1F9CE85B5759D360922EF5F5D679C378D519_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_mC62A94144C701E9EC5A659E5DE76CF29A717AD83_RuntimeMethod_var);
		Predicate_1_tB3849C4EB4551D913D10DC850052AFDD6131985C * L_10 = L_9;
		((U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tB24CD7EB40A2D77914B55045D7BB1DE997C26848_il2cpp_TypeInfo_var))->set_U3CU3E9__64_0_7(L_10);
		G_B5_0 = L_10;
		G_B5_1 = G_B4_1;
	}

IL_0043:
	{
		bool L_11;
		L_11 = ListExtensions_AnyFast_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_mDC26D93BC277BF64AAC4801E25D8382523A97190(G_B5_1, G_B5_0, /*hidden argument*/ListExtensions_AnyFast_TisParticleSystem_t2F526CCDBD3512879B3FCBE04BCAB20D7B4F391E_mDC26D93BC277BF64AAC4801E25D8382523A97190_RuntimeMethod_var);
		// s_ParticleSystems.Clear();
		IL2CPP_RUNTIME_CLASS_INIT(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var);
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_12 = ((UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_StaticFields*)il2cpp_codegen_static_fields_for(UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E_il2cpp_TypeInfo_var))->get_s_ParticleSystems_55();
		NullCheck(L_12);
		List_1_Clear_m58DE04C3BBC03B16192027F9A20F6B2CDEBCE668(L_12, /*hidden argument*/List_1_Clear_m58DE04C3BBC03B16192027F9A20F6B2CDEBCE668_RuntimeMethod_var);
		// if (!delayToPlay) yield break;
		if (L_11)
		{
			goto IL_0056;
		}
	}
	{
		// if (!delayToPlay) yield break;
		return (bool)0;
	}

IL_0056:
	{
		// Stop();
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_13 = V_1;
		NullCheck(L_13);
		UIParticle_Stop_m0FC069ADB3AC983B6F9E4405959DDB42D468DAD4(L_13, /*hidden argument*/NULL);
		// Clear();
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_14 = V_1;
		NullCheck(L_14);
		UIParticle_Clear_m1D4CFD0A52983C95FE21C2D1BA4CA1D96C97A444(L_14, /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0072:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Play();
		UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * L_15 = V_1;
		NullCheck(L_15);
		UIParticle_Play_m6F941796E6E1507CFE22E6D89E80A6FCAF67545F(L_15, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Coffee.UIExtensions.UIParticle/<Start>d__64::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__64_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m649AA3DB38E277506995C525182A0D2368CA3817 (U3CStartU3Ed__64_t7BB41721AF1EF379EB6185056ADF644F90A4B065 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Coffee.UIExtensions.UIParticle/<Start>d__64::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartU3Ed__64_System_Collections_IEnumerator_Reset_m4C804CBF2929597F04D0243D5B85D1E8EF703193 (U3CStartU3Ed__64_t7BB41721AF1EF379EB6185056ADF644F90A4B065 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CStartU3Ed__64_System_Collections_IEnumerator_Reset_m4C804CBF2929597F04D0243D5B85D1E8EF703193_RuntimeMethod_var)));
	}
}
// System.Object Coffee.UIExtensions.UIParticle/<Start>d__64::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartU3Ed__64_System_Collections_IEnumerator_get_Current_mDFCE575153C3E11814D0B4AEDE1AE06A1BAE7B8C (U3CStartU3Ed__64_t7BB41721AF1EF379EB6185056ADF644F90A4B065 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AnimatableProperty_get_id_m4639FB09C0BF0DFD4327D1A081453AED3F3AF729_inline (AnimatableProperty_t1C4E28F37643462525F81B462CF1EC460DD18814 * __this, const RuntimeMethod* method)
{
	{
		// public int id { get; private set; }
		int32_t L_0 = __this->get_U3CidU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t AnimatableProperty_get_type_mBDFF96FA1A951BAF898A0CE3209F8BA499634933_inline (AnimatableProperty_t1C4E28F37643462525F81B462CF1EC460DD18814 * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Type; }
		int32_t L_0 = __this->get_m_Type_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Inequality_m2B976EE8649EE1AE9DE1771CEE183AC70E3A75B7_inline (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___lhs0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___rhs1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = ___lhs0;
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector4_op_Equality_mAC86329F5E0AF56A4A1067AB4299C291221720AE_inline(L_0, L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AnimatableProperty_set_id_mDE27575E1BBEAFDE92E4D369D1400E906189BD29_inline (AnimatableProperty_t1C4E28F37643462525F81B462CF1EC460DD18814 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		// public int id { get; private set; }
		int32_t L_0 = ___value0;
		__this->set_U3CidU3Ek__BackingField_2(L_0);
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void MeshHelper_set_activeMeshIndices_m6A2C685F625B13E92EBFC3336627A7592A3403D2_inline (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static List<bool> activeMeshIndices { get; private set; }
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		((MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_StaticFields*)il2cpp_codegen_static_fields_for(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var))->set_U3CactiveMeshIndicesU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * MeshHelper_get_activeMeshIndices_m6E866395890B87CD4AC987657DA66509592FB225_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static List<bool> activeMeshIndices { get; private set; }
		IL2CPP_RUNTIME_CLASS_INIT(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var);
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_0 = ((MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_StaticFields*)il2cpp_codegen_static_fields_for(MeshHelper_t22A682BEFAADC5F8DD225DD646E3CA78CDDFE33E_il2cpp_TypeInfo_var))->get_U3CactiveMeshIndicesU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * UIParticle_get_particles_m248BEC4C388F11152591A68AC7B94ECD8622AC0F_inline (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Particles; }
		List_1_tD8CC88B2B9BB1EDCF26B37A438F2653117C58A63 * L_0 = __this->get_m_Particles_41();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool MaskableGraphic_get_maskable_mAB089F676929CD6D1CA9FC204EE04A10EF86B6E8_inline (MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Maskable; }
		bool L_0 = __this->get_m_Maskable_29();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * UIParticle_get_activeMeshIndices_m423987C46CE4EC5176502A0BF43439C08B44E8FF_inline (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method)
{
	{
		// get { return _activeMeshIndices; }
		List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * L_0 = __this->get__activeMeshIndices_48();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * UIParticle_get_bakedMesh_m8ECD19D62E8B19E41FD8F1BAB590154190A3AE7E_inline (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method)
{
	{
		// get { return _bakedMesh; }
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_0 = __this->get__bakedMesh_45();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool UIParticle_get_ignoreCanvasScaler_mDD8AA041E85CB24E0AE7F2F161CFDF4C5718E2B2_inline (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method)
{
	{
		// get { return m_IgnoreCanvasScaler; }
		bool L_0 = __this->get_m_IgnoreCanvasScaler_37();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  UIParticle_get_scale3D_mA6A3841E1A258F1150D9CB64FB08B8CDF5C99EED_inline (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Scale3D; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get_m_Scale3D_39();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Scale_m8805EE8D2586DE7B6143FA35819B3D5CF1981FB3_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_3)), ((float)il2cpp_codegen_multiply((float)L_5, (float)L_7)), ((float)il2cpp_codegen_multiply((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  UIParticle_get_cachedPosition_mFF26D3060E2F13A056FB640EDDD7E33BDE6EE0BC_inline (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, const RuntimeMethod* method)
{
	{
		// get { return _cachedPosition; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = __this->get__cachedPosition_49();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UIParticle_set_cachedPosition_mEDA61F1A70EF8A9CE6966CCA0126E8C47ED34FE6_inline (UIParticle_tA8AF00EB9B2CEB7B31634A6155ECCC968473831E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method)
{
	{
		// set { _cachedPosition = value; }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___value0;
		__this->set__cachedPosition_49(L_0);
		// set { _cachedPosition = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_UnaryNegation_m362EA356F4CADEDB39F965A0DBDED6EA890925F7_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___a0;
		float L_3 = L_2.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m32EAB7C20FE929AB4D52FE42710A40B827F4EE31_gshared_inline (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C  List_1_get_Item_m8B121A3D20746F588DB7B35604E8F1F30FD5342A_gshared_inline (List_1_t6B1E95FA5DF30925360D5903D54D1063F95AFFEF * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF* L_2 = (CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF*)__this->get__items_1();
		int32_t L_3 = ___index0;
		CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C  L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((CombineInstanceU5BU5D_tCEC5E0C06082119E1FF9C16E274C016F216803BF*)L_2, (int32_t)L_3);
		return (CombineInstance_t3ECBD54BBDD018CE04D23414CDFE0F78A447B45C )L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m8547E31DBBBA85E2090BA3076611614A4C8F1A18_gshared_inline (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool List_1_get_Item_m6608CAE85049DBB39679FB41D1266AF732C97461_gshared_inline (List_1_tD4D2BACE5281B6C85799892C1F12F5F2F81A2DF3 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_2 = (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)__this->get__items_1();
		int32_t L_3 = ___index0;
		bool L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)L_2, (int32_t)L_3);
		return (bool)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_gshared_inline (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_1();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mAC86329F5E0AF56A4A1067AB4299C291221720AE_inline (Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___lhs0, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	{
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_0 = ___lhs0;
		float L_1 = L_0.get_x_1();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_2 = ___rhs1;
		float L_3 = L_2.get_x_1();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3));
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_4 = ___lhs0;
		float L_5 = L_4.get_y_2();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_6 = ___rhs1;
		float L_7 = L_6.get_y_2();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7));
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_8 = ___lhs0;
		float L_9 = L_8.get_z_3();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_10 = ___rhs1;
		float L_11 = L_10.get_z_3();
		V_2 = ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11));
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_12 = ___lhs0;
		float L_13 = L_12.get_w_4();
		Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  L_14 = ___rhs1;
		float L_15 = L_14.get_w_4();
		V_3 = ((float)il2cpp_codegen_subtract((float)L_13, (float)L_15));
		float L_16 = V_0;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_1;
		float L_20 = V_2;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_3;
		V_4 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_16, (float)L_17)), (float)((float)il2cpp_codegen_multiply((float)L_18, (float)L_19)))), (float)((float)il2cpp_codegen_multiply((float)L_20, (float)L_21)))), (float)((float)il2cpp_codegen_multiply((float)L_22, (float)L_23))));
		float L_24 = V_4;
		V_5 = (bool)((((float)L_24) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0057;
	}

IL_0057:
	{
		bool L_25 = V_5;
		return L_25;
	}
}
