#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


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
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]>
struct Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>
struct Dictionary_2_tAB18841F562A63D47AE3785E7F50DC415972EF9F;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>
struct Dictionary_2_t82BE383AE4E39D595E4593591923774B075CA60C;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>
struct Dictionary_2_t561523F5E3C140ED31D9B9CEDEBAF048916097E9;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct Dictionary_2_t445726BAE7CD3D5D5A88637A0BCA8CCBFA855C7F;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct Dictionary_2_t912F8784FB55D3C7125D052469FEE14E3BBD4819;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>
struct Dictionary_2_t38AAA43129883A56272556F3EA7E24864F40C1E4;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>
struct Dictionary_2_t6E1066B0BD86FB1DB5AABC39148F1A9BD76B7B94;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>
struct Dictionary_2_tDA33E054E343D826DBF1AC64F23B019265CDBB6E;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>
struct Dictionary_2_t1B25396813A0A3CD903D5974ED4C6E4768CF54CE;
// System.Func`2<System.Object,System.Int32>
struct Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C;
// System.Func`2<System.Object,System.String>
struct Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct IDictionary_2_t9761D347AC3B18ED56235F4DC19AAEABDBA24999;
// System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>
struct IDictionary_2_tC955822E3DE0538A7E51E47B322EF81959359946;
// System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata>
struct IDictionary_2_t2BB17539A7F01F16D70A00E2F82D4265B3B9362F;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct IDictionary_2_t8EFF7215559F49AE1D0B86461D7207337CD8C6F0;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct IDictionary_2_tF18CA5AA122FDD12A1A3DEDDEC417CC451BE7354;
// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct IDictionary_2_t054D5011E9FAB51900A645CAE16F70C363007856;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata>
struct IDictionary_2_t681571C74075C062CC3050E88056C76E66A4906E;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>
struct IDictionary_2_tFCF982DF2A2727A0CB4D47DF9FB4751C2CD4563E;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata>
struct IDictionary_2_t420D6709203746B9CB23A1AE6EB51D9182C52514;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct IEnumerator_1_t86A5A6F7D3C7CD908347C85A5DB004599ED744A8;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t7EEC9B4006D6D425748908D52AA799197F29A165;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct IList_1_t4B08B71BE47921FC7A106BF67F2A36BD4975222A;
// System.Collections.Generic.IList`1<LitJson.JsonData>
struct IList_1_t510D070C15B04BB26AEF8259EBB271B87504962A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct KeyCollection_t961F340F8ACCBED42AD893036649507AA35258E2;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32[]>
struct KeyCollection_t5077047791109DBE7A0587AB82F2C95BE65B70F7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,LitJson.JsonData>
struct KeyCollection_tC40AF5138E5BB940ACC7D12AFDCEDF9D3B88765E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct KeyCollection_tC70476F53E28136391773046751F609B11325E90;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct KeyCollection_t844639E4AE2CDEA47B5D4BFE76EA4B2BB4A736CD;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct KeyCollection_t54286C15EAB584343A966CF705500FB2F9A450C3;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LitJson.ArrayMetadata>
struct KeyCollection_t538A548DA5DCB8D4674A335FE296B3F71555A08E;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LitJson.ExporterFunc>
struct KeyCollection_tAF1E0F46B12F3E2B141C807C386E1BDDD838A956;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LitJson.ImporterFunc>
struct KeyCollection_tD708F71FE79B4FDAC610AD975C557EDADD8A1B64;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,LitJson.ObjectMetadata>
struct KeyCollection_t1B0DEC3373A4E36A1446C75609E1D792880254A2;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct List_1_t140BFB4B967C4C1B5334856B4265C018EF29DE3E;
// System.Collections.Generic.List`1<LitJson.JsonData>
struct List_1_tFF8C524282266EE4C4A7EE822259B9440F8C21F3;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.Stack`1<System.Int32>
struct Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981;
// System.Collections.Generic.Stack`1<LitJson.WriterContext>
struct Stack_1_tEFB614397DBC5AFE2026C45C8FD2A720C51C0F27;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct ValueCollection_t9F3A6CE2D590F3B64841D5D4E02A4D128DF764CD;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32[]>
struct ValueCollection_t741C0DBC2C72DD3AE5DB73E04049022DE427EACA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,LitJson.JsonData>
struct ValueCollection_t57C69D1FC7BB04DC8DB5C1ADAF63956EBBC287A0;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct ValueCollection_t03A8E8722BA230616655CFBCC52E5ED3F7EA8C5D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct ValueCollection_tD51345F635B18AE3A9D92C563D8067D3323D83FB;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct ValueCollection_tD8DB044ABDCC11EE0EBC3D98CC2CC50B953E7615;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ArrayMetadata>
struct ValueCollection_t4635301C4182165F613891CE8DB34CC68F2BEAAE;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ExporterFunc>
struct ValueCollection_tA023857E136A061A7A4133F5FD6CCE0282621E68;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>
struct ValueCollection_t304C0D1713722A5F9DD8A41ACDE76C8E13E207CB;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ObjectMetadata>
struct ValueCollection_tD30092654F4D7AE65B8CE2AC49267B3A4FD8A927;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>[]
struct EntryU5BU5D_tC05AA8F32DFF4C2C547ED680592E1D40011178A8;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Int32[]>[]
struct EntryU5BU5D_t4599023B1EC79584CD812F5998440BACF3085B58;
// System.Collections.Generic.Dictionary`2/Entry<System.String,LitJson.JsonData>[]
struct EntryU5BU5D_tC760C2E15C5E3EAFF3AF60A079DFF9263B987269;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>[]
struct EntryU5BU5D_tE89E446BFFE3CA5D0B57821F23BE988AED34BC2A;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>[]
struct EntryU5BU5D_t1D80DD634B63313D73B2A60BE290DDF77E5A8A5D;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>[]
struct EntryU5BU5D_t50A505981F1F466D9572D182041DBCD111E10024;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LitJson.ArrayMetadata>[]
struct EntryU5BU5D_tB232FF46A18B1B6C217D34D76FF81025352F577F;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LitJson.ExporterFunc>[]
struct EntryU5BU5D_tBF2D8ACC4935DA8888AC0E27172B001546844FEA;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LitJson.ImporterFunc>[]
struct EntryU5BU5D_t619063577459D2FC5949B771BB0C802D113DCC46;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,LitJson.ObjectMetadata>[]
struct EntryU5BU5D_tBF1EC22175A9451607A492B91870BC15147FA056;
// System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>[]
struct KeyValuePair_2U5BU5D_tFEB936F28151831FD82AFD55D83845A98F2E0E13;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// LitJson.JsonData[]
struct JsonDataU5BU5D_t4A6FBF822968FC83818F1B6493B552563CAE792B;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Globalization.TokenHashValue[]
struct TokenHashValueU5BU5D_t9A8634CBD651EB5F814E7CF9819D44963D8546D3;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// LitJson.WriterContext[]
struct WriterContextU5BU5D_t9B770A5C3AE75E6C451619617EC9670E9CB39353;
// LitJson.Lexer/StateHandler[]
struct StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19;
// System.ApplicationException
struct ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// LitJson.ExporterFunc
struct ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0;
// LitJson.FsmContext
struct FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.ICollection
struct ICollection_tC1E1DED86C0A66845675392606B302452210D5DA;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t8A89A8564EADF5FFB8494092DFED7D7C063F1501;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// LitJson.IJsonWrapper
struct IJsonWrapper_t95FB80D49B5F79F59317F3B6FCF40B1426F8124F;
// System.Collections.IList
struct IList_tB15A9D6625D09661D6E47976BB626C703EC81910;
// LitJson.ImporterFunc
struct ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// LitJson.JsonData
struct JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22;
// LitJson.JsonException
struct JsonException_tF4D20CEAA45C1D64D1C5E2AD15A6E819C2BB68AB;
// LitJson.JsonReader
struct JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06;
// LitJson.JsonWriter
struct JsonWriter_tF9057404715003DE4AB771FF865770690910FB89;
// LitJson.Lexer
struct Lexer_tA740F14E85682DB80300393CB63376A76BA37835;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// LitJson.OrderedDictionaryEnumerator
struct OrderedDictionaryEnumerator_t41C60BB9B4656C74962492FF2832858504473791;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.StringReader
struct StringReader_t74E352C280EAC22C878867444978741F19E1F895;
// System.IO.StringWriter
struct StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// System.IO.TextReader
struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F;
// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643;
// System.Type
struct Type_t;
// System.Text.UnicodeEncoding
struct UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// LitJson.WrapperFactory
struct WrapperFactory_tB55CB2530E34938522E06A75C4EDCC9466CCE22F;
// LitJson.WriterContext
struct WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB;
// LitJson.JsonMapper/<>c
struct U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A;
// LitJson.Lexer/StateHandler
struct StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t1B25396813A0A3CD903D5974ED4C6E4768CF54CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t38AAA43129883A56272556F3EA7E24864F40C1E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t445726BAE7CD3D5D5A88637A0BCA8CCBFA855C7F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t561523F5E3C140ED31D9B9CEDEBAF048916097E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6E1066B0BD86FB1DB5AABC39148F1A9BD76B7B94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t912F8784FB55D3C7125D052469FEE14E3BBD4819_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tDA33E054E343D826DBF1AC64F23B019265CDBB6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t169023694115FB523BFF0CA44B524C158DA46B23_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t15C4AE6FA28CC96AF7D1E9949947C8A7AA64B92C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t6C0139A1905D3944AB6C558EEB7B5E162CCC1752_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t8EFF7215559F49AE1D0B86461D7207337CD8C6F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t9761D347AC3B18ED56235F4DC19AAEABDBA24999_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tC955822E3DE0538A7E51E47B322EF81959359946_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tFCF982DF2A2727A0CB4D47DF9FB4751C2CD4563E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t0B9E85628EE4456D8FE6E476E74A86F861ABC03D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t86A5A6F7D3C7CD908347C85A5DB004599ED744A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IJsonWrapper_t95FB80D49B5F79F59317F3B6FCF40B1426F8124F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t4B08B71BE47921FC7A106BF67F2A36BD4975222A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t510D070C15B04BB26AEF8259EBB271B87504962A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOrderedDictionary_tDF6229DEC2DA4F759A019863EF5B5CDF4ECBCDF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonException_tF4D20CEAA45C1D64D1C5E2AD15A6E819C2BB68AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonWriter_tF9057404715003DE4AB771FF865770690910FB89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Lexer_tA740F14E85682DB80300393CB63376A76BA37835_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t140BFB4B967C4C1B5334856B4265C018EF29DE3E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFF8C524282266EE4C4A7EE822259B9440F8C21F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OrderedDictionaryEnumerator_t41C60BB9B4656C74962492FF2832858504473791_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParserToken_t3B28DE2638004DACF58EE90B7E2DF0F3426DE7E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_tEFB614397DBC5AFE2026C45C8FD2A720C51C0F27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WrapperFactory_tB55CB2530E34938522E06A75C4EDCC9466CCE22F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tB87B199FE555125F3A639420349ADA6B6B490122____148E9E3E864CD628C70D3DC1D8309483BD8C0E89_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tB87B199FE555125F3A639420349ADA6B6B490122____50B1635D1FB2907A171B71751E1A3FA79423CA17_1_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tB87B199FE555125F3A639420349ADA6B6B490122____5CF7299F6558A8AC3F821B4F2F65F23798D319D3_2_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tB87B199FE555125F3A639420349ADA6B6B490122____AAF72C1002FDBCAE040DAE16A10D82184CE83679_3_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tB87B199FE555125F3A639420349ADA6B6B490122____B67A7FB4648C62F6A1337CA473436D0E787E8633_4_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tB87B199FE555125F3A639420349ADA6B6B490122____C69BF4F300AD2C2E49A8072C2FE6B712FA73EA8F_5_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tB87B199FE555125F3A639420349ADA6B6B490122____FAD52931F5B79811D31566BB18B6E0B5D2E2A164_6_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral057118C49B28F31FA4955B194753088DDCD94999;
IL2CPP_EXTERN_C String_t* _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A;
IL2CPP_EXTERN_C String_t* _stringLiteral1168E92C164109D6220480DEDA987085B2A21155;
IL2CPP_EXTERN_C String_t* _stringLiteral1D59E6177FAE880C9EF94663465FEEDCD97D999F;
IL2CPP_EXTERN_C String_t* _stringLiteral242259752214E86B8CCBBF56AA4774B954BC34AD;
IL2CPP_EXTERN_C String_t* _stringLiteral3FB649A9FAAB5634336E279002E9E84D9AFCA0FC;
IL2CPP_EXTERN_C String_t* _stringLiteral447D2D55725EF428A6F4753B53612ECA1764ECE7;
IL2CPP_EXTERN_C String_t* _stringLiteral45C6FAA87CD0123CD17D47EA53DEAA5A748C6A04;
IL2CPP_EXTERN_C String_t* _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30;
IL2CPP_EXTERN_C String_t* _stringLiteral5149D2AD92135C0DFA7131CADBFCC669275E96B5;
IL2CPP_EXTERN_C String_t* _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral638C5441E8427B2B9D2C941DDBF958579B5FE3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral6BAB8F53EE6BDD0369569E27A174F474EA370914;
IL2CPP_EXTERN_C String_t* _stringLiteral6DEED36FFF14869BC9ABC87FCC45B3DA6985BEEC;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51;
IL2CPP_EXTERN_C String_t* _stringLiteral7B6EE056E549534162451A09C7F0AFAC372DBD06;
IL2CPP_EXTERN_C String_t* _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462;
IL2CPP_EXTERN_C String_t* _stringLiteral82A13B351F60D442B29C59FEDF02FF7E52C04163;
IL2CPP_EXTERN_C String_t* _stringLiteral84BE6DF7F5E86A94476E7ED44C8A9ACA10E6236A;
IL2CPP_EXTERN_C String_t* _stringLiteral8515553A5B3BDCBB0920E96A5FD0FC34F11C2713;
IL2CPP_EXTERN_C String_t* _stringLiteral8E284AA45C643AAA8D3553AA7AB6A1C3BC3E32D1;
IL2CPP_EXTERN_C String_t* _stringLiteral999DBDC959C03AA352D6BBA2EE5B69A49B9F2393;
IL2CPP_EXTERN_C String_t* _stringLiteral9CBCD572886BE3E0FA105AA3A7FE08AABFF19B79;
IL2CPP_EXTERN_C String_t* _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122;
IL2CPP_EXTERN_C String_t* _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralBBC2182A95A29E2752FA60C92F779B599B7B43ED;
IL2CPP_EXTERN_C String_t* _stringLiteralC31E66F919D06AD2730738EF7F884271E99BB7DA;
IL2CPP_EXTERN_C String_t* _stringLiteralC63496F78F80F09E4841EF5CD0DA8DAF7028FB4B;
IL2CPP_EXTERN_C String_t* _stringLiteralCDA723AA4DBB226A906416AA9BF1C2D4CEC53C89;
IL2CPP_EXTERN_C String_t* _stringLiteralCEE7535349ADB76DD55B08451D311FC3CF06A19C;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699;
IL2CPP_EXTERN_C String_t* _stringLiteralDCAF96AFD9825EC0819F85E3953F28B330B45CC3;
IL2CPP_EXTERN_C String_t* _stringLiteralE09E38B1A3E02297C148733DE7EED6E5DC8479F5;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralE53B6FBD162C91AD5A0438452E33647A61BBA15D;
IL2CPP_EXTERN_C String_t* _stringLiteralECAC83771A00C701043A940F621CC1C765D30D31;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m0042AB3E1A64BB363620361BBE7585680D722E16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m2EBF1ECBC92F80383944B79DCCDA176099E0BF78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m424C242531248278FDE282B92E7AEE5484947603_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m90772468780FDD4C4EA19623F829EC1D0C001CEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m90BB337659FFDAB593D3AC0ED602B7963C3B66E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m914FD0514FB108325301821466961F9DDB53F9E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD013C25087986CD840D626572440D4AB496207EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mD909E0A139978659E700B0CE49424A936C710762_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mE6DB8446420A7CECA7E2B4BA80B16868EC189D57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mED1D86EA443CCD2676703C1F9C7E562C036CA6AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_EnsureCollection_mB2735186EF16DB40EDF8C42A1EE3D0C5007EEB2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_EnsureDictionary_m246F744EBEA43393EE70B77AB8612B66347C356E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_EnsureList_mFF243E800CAB50135B94EC463B354843B67FF983_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_LitJson_IJsonWrapper_GetBoolean_mD31350D767D8DEE6840D522418AE813C256A35C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_LitJson_IJsonWrapper_GetDouble_m30E6CB05534E0AD0A5E79727A12C1B1C22125ECD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_LitJson_IJsonWrapper_GetInt_m487C8DDBB6E834C939DF5937E9C18CF5FC70E4AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_LitJson_IJsonWrapper_GetLong_m009C13EE50AAA13F3BDB7F08257E3F432E75F2B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_LitJson_IJsonWrapper_GetString_m6C48E06041C5B4AABB431ABD72B918FF493249D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData_System_Collections_IDictionary_set_Item_m4895BD29B0C2C4B3F2A9CA3EC89A00EC5A64B87A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonData__ctor_m0EEBDE7A2966ABF8D7BB49C85F0182B3774C0E02_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonReader_Read_m59D15EDA2E81ED1A1336339DDF8B71FF26F6EDAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonReader__ctor_m4C5C39FB6CC0798325232ED8823F68F35B444A6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter_DoValidation_mA59E12C4B3B46B655369424CCA9FBC421E4151EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonWriter__ctor_m674F2DE75D11F51D8E04A9F05598C53FB5FA9081_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_mE22F8D519A12B667FF3D6EA6BF98B229CDD39A07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m1AAB0CC2B2402A9B3A87A03355F95936321C2C3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m40F0202418FC88B5399F20ED515CD6609B4F9DA3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_NextToken_m2DD1411BF4E5102DF9F57AA88D218E052818FC9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State10_mAC1274EFA16E310E8FC04BDF5A6BA08943B2EB0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State11_mA0A57CF6721AA02F3A7401BB3B3122986A91D4BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State12_m8F25DBF94A0750253A14D5AAC45A09C4CFDED795_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State13_mE3DEE794AB7C2793C50315D146F3BCD17C0028B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State14_m29B8A9B209330587BAFAFDD27892349C66AFCF9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State15_mE7D3224557F1AE079F62BC59FD961B440C867285_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State16_mA5BF2347E88B3E24D46382FD9F1298376226C8A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State17_mC9D0AF7F6B8CCD7604348A6808C798C91E9B2169_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State18_mFDE216C198BA571EDA7E3BF1B024B0FD97A0D969_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State19_mD6F37CD8E15B45CB75139944FBAC81DB64F99CED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State1_mB75EDA9BA994E7A934F803D0DBE38382B941B48A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State20_m25B6F2E7D522F84A92D6F3C6EBD258E9C7E97A1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State21_mD931C771C5531A68033593B613F242010BF44E4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State22_m1F8E54434F916F93B06FD8D8678C85DB115E4979_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State23_m059B397DAF7319B1DD1E289E8B5B96E88B7BBC09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State24_m7F4DA1872535E3312165D84917829964A7FFF2F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State25_m57368B3F202D8295B927D2CE65B1318E74E69A0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State26_m63559988DCC0AEAC91906B6109CEB0FF623EF9AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State27_m99B50C5B549173BF767C43B39C93F14C8E4580EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State28_m9559337C58F4FA1186015F45A92CCCFABCAEAE85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State2_m21338C96318F4AEF135B6CECE65A3FE9DA66088E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State3_mC609A64317FBAB5C4B7D53283C949716E81695FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State4_mAFBCB7D348F66C17F839BD61CFB73F3F8B35CC49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State5_mB0D0D62E25612FC4AD9CA23CDCCF9D578EE18630_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State6_mA741D9118A33298446A9BE4E6D2A09446069210E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State7_m035FD60ED6969FDC8149CF836A16001F1C524B06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State8_mE0B57CCC0F8951C78221F29A851EF5363E0C8801_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Lexer_State9_mEE87D256E6437DC14F8BFB57B4131A656D421DC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m59DE115CE21F199388C58781EA6B6E2DF8BA3139_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m5C7FBF0259C3C8D2D595043CB1D1E96F4D5AB5F1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Clear_m65385AD770CB3137B6B0638B1C8B3F135A5E277D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Peek_m23F6D7DF90263D3517E91DE0F9A71870800C1E05_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Peek_m5677D80CE72817F059E7035EDC45E04FB2DB057B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_m975CA51F3A72228535A3AE9FE726481EF9E0B76C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mBCAA112320E9A1EE079981A98DC82F5BA174C2F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_mAAC659B8244405A0EB9B9405727EADF1200FD30C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_mB57657F2527B7C25AB60EB9BBD09C7B42B14F3C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m41EBD1EDB9A3AC64B4EE3B6AAC08868FF28DA954_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m85DCC15D944DFD51D4128D77168CE17B40060B96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_mF285F6000A866CB918AEBA65E173C15E61BF003C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_0_m6249EBC4A74804EE66A1205F001BB4285CE200D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_1_m3AADB25F3464E3E41A7ED3AB20BEFC811975CAC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_2_mCFABBAEC7AF0665F9533111A9786F1E110CDD3E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_3_m7F3CC90F1D7ADF01214351B3649C7D6E7D00F9B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_4_m6AABDBB705FA47FCC482F31E2046F626AC7E51DE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_5_m85B7EA966021153F04CB5424F96FD63DD1FFB60E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_6_m9C69C58F8E385CFAD7124079B86C22217B2C6C49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_7_m5B6BD8B592BD95B05EAA0B1B60FDE8A31EFFFB6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_8_m3017E1C0815094117222109632DAED7B7F87B700_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_9_mBE68A4753906B3CEA0F47734AD7EBFBF37A1F84F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_0_m84F1C30E7D6F4A03E4428A8BA927375179B59F4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_10_m4837983675D23BF71F6CF1659C1B3EA262B402A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_11_mD146809F6728ADDF40FE8ED642952570630C25EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_12_mDA4AFAE0ABE6DB9B8670D04B99D943DF65BF8167_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_13_m36D1DB2E465C0D955A8431B97D8164253ED06D43_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_14_m593A7FF346145A56F6A8C29F0FFE531E90460F7A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_1_m7D891713262678790412D70065C26230BE7FFDEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_2_mB80F214C846B68A0F9A8ED9699D2113E8CD7845C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_3_m04D39921596EE0683E6B1C067E52FC1BB7458B9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_4_m9B16D80C73B58D22470F446C1D6CFE06D32631BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_5_m5A0DAF44755CB4145005C435A156000A62651AB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_6_mAEE5A2C62AB3F36FCA4E2424E6574ADEFB30C12A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_7_mE9CB38CF0115B7EFE4ED70D73DCFF59F68148FCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_8_m64AF494237E4391228EC8F7BCE5943C73771FCCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_9_m2EF83B251A27A73F40996A30A4EBAD6C00C988BA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CToObjectU3Eb__32_0_mC187FB00203C4133AD5C2E0B59DA1A7F834BC814_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_0_0_0_var;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t5C02B340BBCECDB09E6FED2F0B319A776B808790 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>
struct  Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tC05AA8F32DFF4C2C547ED680592E1D40011178A8* ___entries_1;
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
	KeyCollection_t961F340F8ACCBED42AD893036649507AA35258E2 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9F3A6CE2D590F3B64841D5D4E02A4D128DF764CD * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9, ___entries_1)); }
	inline EntryU5BU5D_tC05AA8F32DFF4C2C547ED680592E1D40011178A8* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tC05AA8F32DFF4C2C547ED680592E1D40011178A8** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tC05AA8F32DFF4C2C547ED680592E1D40011178A8* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9, ___keys_7)); }
	inline KeyCollection_t961F340F8ACCBED42AD893036649507AA35258E2 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t961F340F8ACCBED42AD893036649507AA35258E2 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t961F340F8ACCBED42AD893036649507AA35258E2 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9, ___values_8)); }
	inline ValueCollection_t9F3A6CE2D590F3B64841D5D4E02A4D128DF764CD * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9F3A6CE2D590F3B64841D5D4E02A4D128DF764CD ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9F3A6CE2D590F3B64841D5D4E02A4D128DF764CD * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]>
struct  Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t4599023B1EC79584CD812F5998440BACF3085B58* ___entries_1;
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
	KeyCollection_t5077047791109DBE7A0587AB82F2C95BE65B70F7 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t741C0DBC2C72DD3AE5DB73E04049022DE427EACA * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4, ___entries_1)); }
	inline EntryU5BU5D_t4599023B1EC79584CD812F5998440BACF3085B58* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t4599023B1EC79584CD812F5998440BACF3085B58** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t4599023B1EC79584CD812F5998440BACF3085B58* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4, ___keys_7)); }
	inline KeyCollection_t5077047791109DBE7A0587AB82F2C95BE65B70F7 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t5077047791109DBE7A0587AB82F2C95BE65B70F7 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t5077047791109DBE7A0587AB82F2C95BE65B70F7 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4, ___values_8)); }
	inline ValueCollection_t741C0DBC2C72DD3AE5DB73E04049022DE427EACA * get_values_8() const { return ___values_8; }
	inline ValueCollection_t741C0DBC2C72DD3AE5DB73E04049022DE427EACA ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t741C0DBC2C72DD3AE5DB73E04049022DE427EACA * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>
struct  Dictionary_2_t561523F5E3C140ED31D9B9CEDEBAF048916097E9  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tC760C2E15C5E3EAFF3AF60A079DFF9263B987269* ___entries_1;
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
	KeyCollection_tC40AF5138E5BB940ACC7D12AFDCEDF9D3B88765E * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t57C69D1FC7BB04DC8DB5C1ADAF63956EBBC287A0 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t561523F5E3C140ED31D9B9CEDEBAF048916097E9, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t561523F5E3C140ED31D9B9CEDEBAF048916097E9, ___entries_1)); }
	inline EntryU5BU5D_tC760C2E15C5E3EAFF3AF60A079DFF9263B987269* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tC760C2E15C5E3EAFF3AF60A079DFF9263B987269** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tC760C2E15C5E3EAFF3AF60A079DFF9263B987269* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t561523F5E3C140ED31D9B9CEDEBAF048916097E9, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t561523F5E3C140ED31D9B9CEDEBAF048916097E9, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t561523F5E3C140ED31D9B9CEDEBAF048916097E9, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t561523F5E3C140ED31D9B9CEDEBAF048916097E9, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t561523F5E3C140ED31D9B9CEDEBAF048916097E9, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t561523F5E3C140ED31D9B9CEDEBAF048916097E9, ___keys_7)); }
	inline KeyCollection_tC40AF5138E5BB940ACC7D12AFDCEDF9D3B88765E * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC40AF5138E5BB940ACC7D12AFDCEDF9D3B88765E ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC40AF5138E5BB940ACC7D12AFDCEDF9D3B88765E * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t561523F5E3C140ED31D9B9CEDEBAF048916097E9, ___values_8)); }
	inline ValueCollection_t57C69D1FC7BB04DC8DB5C1ADAF63956EBBC287A0 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t57C69D1FC7BB04DC8DB5C1ADAF63956EBBC287A0 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t57C69D1FC7BB04DC8DB5C1ADAF63956EBBC287A0 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t561523F5E3C140ED31D9B9CEDEBAF048916097E9, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct  Dictionary_2_t445726BAE7CD3D5D5A88637A0BCA8CCBFA855C7F  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tE89E446BFFE3CA5D0B57821F23BE988AED34BC2A* ___entries_1;
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
	KeyCollection_tC70476F53E28136391773046751F609B11325E90 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t03A8E8722BA230616655CFBCC52E5ED3F7EA8C5D * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t445726BAE7CD3D5D5A88637A0BCA8CCBFA855C7F, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t445726BAE7CD3D5D5A88637A0BCA8CCBFA855C7F, ___entries_1)); }
	inline EntryU5BU5D_tE89E446BFFE3CA5D0B57821F23BE988AED34BC2A* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tE89E446BFFE3CA5D0B57821F23BE988AED34BC2A** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tE89E446BFFE3CA5D0B57821F23BE988AED34BC2A* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t445726BAE7CD3D5D5A88637A0BCA8CCBFA855C7F, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t445726BAE7CD3D5D5A88637A0BCA8CCBFA855C7F, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t445726BAE7CD3D5D5A88637A0BCA8CCBFA855C7F, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t445726BAE7CD3D5D5A88637A0BCA8CCBFA855C7F, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t445726BAE7CD3D5D5A88637A0BCA8CCBFA855C7F, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t445726BAE7CD3D5D5A88637A0BCA8CCBFA855C7F, ___keys_7)); }
	inline KeyCollection_tC70476F53E28136391773046751F609B11325E90 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC70476F53E28136391773046751F609B11325E90 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC70476F53E28136391773046751F609B11325E90 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t445726BAE7CD3D5D5A88637A0BCA8CCBFA855C7F, ___values_8)); }
	inline ValueCollection_t03A8E8722BA230616655CFBCC52E5ED3F7EA8C5D * get_values_8() const { return ___values_8; }
	inline ValueCollection_t03A8E8722BA230616655CFBCC52E5ED3F7EA8C5D ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t03A8E8722BA230616655CFBCC52E5ED3F7EA8C5D * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t445726BAE7CD3D5D5A88637A0BCA8CCBFA855C7F, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>
struct  Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t1D80DD634B63313D73B2A60BE290DDF77E5A8A5D* ___entries_1;
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
	KeyCollection_t844639E4AE2CDEA47B5D4BFE76EA4B2BB4A736CD * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tD51345F635B18AE3A9D92C563D8067D3323D83FB * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ___entries_1)); }
	inline EntryU5BU5D_t1D80DD634B63313D73B2A60BE290DDF77E5A8A5D* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t1D80DD634B63313D73B2A60BE290DDF77E5A8A5D** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t1D80DD634B63313D73B2A60BE290DDF77E5A8A5D* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ___keys_7)); }
	inline KeyCollection_t844639E4AE2CDEA47B5D4BFE76EA4B2BB4A736CD * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t844639E4AE2CDEA47B5D4BFE76EA4B2BB4A736CD ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t844639E4AE2CDEA47B5D4BFE76EA4B2BB4A736CD * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ___values_8)); }
	inline ValueCollection_tD51345F635B18AE3A9D92C563D8067D3323D83FB * get_values_8() const { return ___values_8; }
	inline ValueCollection_tD51345F635B18AE3A9D92C563D8067D3323D83FB ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tD51345F635B18AE3A9D92C563D8067D3323D83FB * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>
struct  Dictionary_2_t912F8784FB55D3C7125D052469FEE14E3BBD4819  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t50A505981F1F466D9572D182041DBCD111E10024* ___entries_1;
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
	KeyCollection_t54286C15EAB584343A966CF705500FB2F9A450C3 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tD8DB044ABDCC11EE0EBC3D98CC2CC50B953E7615 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t912F8784FB55D3C7125D052469FEE14E3BBD4819, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t912F8784FB55D3C7125D052469FEE14E3BBD4819, ___entries_1)); }
	inline EntryU5BU5D_t50A505981F1F466D9572D182041DBCD111E10024* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t50A505981F1F466D9572D182041DBCD111E10024** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t50A505981F1F466D9572D182041DBCD111E10024* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t912F8784FB55D3C7125D052469FEE14E3BBD4819, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t912F8784FB55D3C7125D052469FEE14E3BBD4819, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t912F8784FB55D3C7125D052469FEE14E3BBD4819, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t912F8784FB55D3C7125D052469FEE14E3BBD4819, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t912F8784FB55D3C7125D052469FEE14E3BBD4819, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t912F8784FB55D3C7125D052469FEE14E3BBD4819, ___keys_7)); }
	inline KeyCollection_t54286C15EAB584343A966CF705500FB2F9A450C3 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t54286C15EAB584343A966CF705500FB2F9A450C3 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t54286C15EAB584343A966CF705500FB2F9A450C3 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t912F8784FB55D3C7125D052469FEE14E3BBD4819, ___values_8)); }
	inline ValueCollection_tD8DB044ABDCC11EE0EBC3D98CC2CC50B953E7615 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tD8DB044ABDCC11EE0EBC3D98CC2CC50B953E7615 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tD8DB044ABDCC11EE0EBC3D98CC2CC50B953E7615 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t912F8784FB55D3C7125D052469FEE14E3BBD4819, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>
struct  Dictionary_2_t38AAA43129883A56272556F3EA7E24864F40C1E4  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tB232FF46A18B1B6C217D34D76FF81025352F577F* ___entries_1;
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
	KeyCollection_t538A548DA5DCB8D4674A335FE296B3F71555A08E * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t4635301C4182165F613891CE8DB34CC68F2BEAAE * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t38AAA43129883A56272556F3EA7E24864F40C1E4, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t38AAA43129883A56272556F3EA7E24864F40C1E4, ___entries_1)); }
	inline EntryU5BU5D_tB232FF46A18B1B6C217D34D76FF81025352F577F* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tB232FF46A18B1B6C217D34D76FF81025352F577F** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tB232FF46A18B1B6C217D34D76FF81025352F577F* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t38AAA43129883A56272556F3EA7E24864F40C1E4, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t38AAA43129883A56272556F3EA7E24864F40C1E4, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t38AAA43129883A56272556F3EA7E24864F40C1E4, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t38AAA43129883A56272556F3EA7E24864F40C1E4, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t38AAA43129883A56272556F3EA7E24864F40C1E4, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t38AAA43129883A56272556F3EA7E24864F40C1E4, ___keys_7)); }
	inline KeyCollection_t538A548DA5DCB8D4674A335FE296B3F71555A08E * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t538A548DA5DCB8D4674A335FE296B3F71555A08E ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t538A548DA5DCB8D4674A335FE296B3F71555A08E * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t38AAA43129883A56272556F3EA7E24864F40C1E4, ___values_8)); }
	inline ValueCollection_t4635301C4182165F613891CE8DB34CC68F2BEAAE * get_values_8() const { return ___values_8; }
	inline ValueCollection_t4635301C4182165F613891CE8DB34CC68F2BEAAE ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t4635301C4182165F613891CE8DB34CC68F2BEAAE * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t38AAA43129883A56272556F3EA7E24864F40C1E4, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>
struct  Dictionary_2_t6E1066B0BD86FB1DB5AABC39148F1A9BD76B7B94  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tBF2D8ACC4935DA8888AC0E27172B001546844FEA* ___entries_1;
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
	KeyCollection_tAF1E0F46B12F3E2B141C807C386E1BDDD838A956 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tA023857E136A061A7A4133F5FD6CCE0282621E68 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t6E1066B0BD86FB1DB5AABC39148F1A9BD76B7B94, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t6E1066B0BD86FB1DB5AABC39148F1A9BD76B7B94, ___entries_1)); }
	inline EntryU5BU5D_tBF2D8ACC4935DA8888AC0E27172B001546844FEA* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tBF2D8ACC4935DA8888AC0E27172B001546844FEA** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tBF2D8ACC4935DA8888AC0E27172B001546844FEA* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t6E1066B0BD86FB1DB5AABC39148F1A9BD76B7B94, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t6E1066B0BD86FB1DB5AABC39148F1A9BD76B7B94, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t6E1066B0BD86FB1DB5AABC39148F1A9BD76B7B94, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t6E1066B0BD86FB1DB5AABC39148F1A9BD76B7B94, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t6E1066B0BD86FB1DB5AABC39148F1A9BD76B7B94, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t6E1066B0BD86FB1DB5AABC39148F1A9BD76B7B94, ___keys_7)); }
	inline KeyCollection_tAF1E0F46B12F3E2B141C807C386E1BDDD838A956 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tAF1E0F46B12F3E2B141C807C386E1BDDD838A956 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tAF1E0F46B12F3E2B141C807C386E1BDDD838A956 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t6E1066B0BD86FB1DB5AABC39148F1A9BD76B7B94, ___values_8)); }
	inline ValueCollection_tA023857E136A061A7A4133F5FD6CCE0282621E68 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tA023857E136A061A7A4133F5FD6CCE0282621E68 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tA023857E136A061A7A4133F5FD6CCE0282621E68 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t6E1066B0BD86FB1DB5AABC39148F1A9BD76B7B94, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>
struct  Dictionary_2_tDA33E054E343D826DBF1AC64F23B019265CDBB6E  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t619063577459D2FC5949B771BB0C802D113DCC46* ___entries_1;
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
	KeyCollection_tD708F71FE79B4FDAC610AD975C557EDADD8A1B64 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t304C0D1713722A5F9DD8A41ACDE76C8E13E207CB * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDA33E054E343D826DBF1AC64F23B019265CDBB6E, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDA33E054E343D826DBF1AC64F23B019265CDBB6E, ___entries_1)); }
	inline EntryU5BU5D_t619063577459D2FC5949B771BB0C802D113DCC46* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t619063577459D2FC5949B771BB0C802D113DCC46** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t619063577459D2FC5949B771BB0C802D113DCC46* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDA33E054E343D826DBF1AC64F23B019265CDBB6E, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDA33E054E343D826DBF1AC64F23B019265CDBB6E, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDA33E054E343D826DBF1AC64F23B019265CDBB6E, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDA33E054E343D826DBF1AC64F23B019265CDBB6E, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDA33E054E343D826DBF1AC64F23B019265CDBB6E, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDA33E054E343D826DBF1AC64F23B019265CDBB6E, ___keys_7)); }
	inline KeyCollection_tD708F71FE79B4FDAC610AD975C557EDADD8A1B64 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tD708F71FE79B4FDAC610AD975C557EDADD8A1B64 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tD708F71FE79B4FDAC610AD975C557EDADD8A1B64 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDA33E054E343D826DBF1AC64F23B019265CDBB6E, ___values_8)); }
	inline ValueCollection_t304C0D1713722A5F9DD8A41ACDE76C8E13E207CB * get_values_8() const { return ___values_8; }
	inline ValueCollection_t304C0D1713722A5F9DD8A41ACDE76C8E13E207CB ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t304C0D1713722A5F9DD8A41ACDE76C8E13E207CB * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDA33E054E343D826DBF1AC64F23B019265CDBB6E, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>
struct  Dictionary_2_t1B25396813A0A3CD903D5974ED4C6E4768CF54CE  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tBF1EC22175A9451607A492B91870BC15147FA056* ___entries_1;
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
	KeyCollection_t1B0DEC3373A4E36A1446C75609E1D792880254A2 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tD30092654F4D7AE65B8CE2AC49267B3A4FD8A927 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t1B25396813A0A3CD903D5974ED4C6E4768CF54CE, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t1B25396813A0A3CD903D5974ED4C6E4768CF54CE, ___entries_1)); }
	inline EntryU5BU5D_tBF1EC22175A9451607A492B91870BC15147FA056* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tBF1EC22175A9451607A492B91870BC15147FA056** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tBF1EC22175A9451607A492B91870BC15147FA056* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t1B25396813A0A3CD903D5974ED4C6E4768CF54CE, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t1B25396813A0A3CD903D5974ED4C6E4768CF54CE, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t1B25396813A0A3CD903D5974ED4C6E4768CF54CE, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t1B25396813A0A3CD903D5974ED4C6E4768CF54CE, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t1B25396813A0A3CD903D5974ED4C6E4768CF54CE, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t1B25396813A0A3CD903D5974ED4C6E4768CF54CE, ___keys_7)); }
	inline KeyCollection_t1B0DEC3373A4E36A1446C75609E1D792880254A2 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t1B0DEC3373A4E36A1446C75609E1D792880254A2 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t1B0DEC3373A4E36A1446C75609E1D792880254A2 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t1B25396813A0A3CD903D5974ED4C6E4768CF54CE, ___values_8)); }
	inline ValueCollection_tD30092654F4D7AE65B8CE2AC49267B3A4FD8A927 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tD30092654F4D7AE65B8CE2AC49267B3A4FD8A927 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tD30092654F4D7AE65B8CE2AC49267B3A4FD8A927 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t1B25396813A0A3CD903D5974ED4C6E4768CF54CE, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>
struct  List_1_t140BFB4B967C4C1B5334856B4265C018EF29DE3E  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	KeyValuePair_2U5BU5D_tFEB936F28151831FD82AFD55D83845A98F2E0E13* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t140BFB4B967C4C1B5334856B4265C018EF29DE3E, ____items_1)); }
	inline KeyValuePair_2U5BU5D_tFEB936F28151831FD82AFD55D83845A98F2E0E13* get__items_1() const { return ____items_1; }
	inline KeyValuePair_2U5BU5D_tFEB936F28151831FD82AFD55D83845A98F2E0E13** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(KeyValuePair_2U5BU5D_tFEB936F28151831FD82AFD55D83845A98F2E0E13* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t140BFB4B967C4C1B5334856B4265C018EF29DE3E, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t140BFB4B967C4C1B5334856B4265C018EF29DE3E, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t140BFB4B967C4C1B5334856B4265C018EF29DE3E, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t140BFB4B967C4C1B5334856B4265C018EF29DE3E_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	KeyValuePair_2U5BU5D_tFEB936F28151831FD82AFD55D83845A98F2E0E13* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t140BFB4B967C4C1B5334856B4265C018EF29DE3E_StaticFields, ____emptyArray_5)); }
	inline KeyValuePair_2U5BU5D_tFEB936F28151831FD82AFD55D83845A98F2E0E13* get__emptyArray_5() const { return ____emptyArray_5; }
	inline KeyValuePair_2U5BU5D_tFEB936F28151831FD82AFD55D83845A98F2E0E13** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(KeyValuePair_2U5BU5D_tFEB936F28151831FD82AFD55D83845A98F2E0E13* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<LitJson.JsonData>
struct  List_1_tFF8C524282266EE4C4A7EE822259B9440F8C21F3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	JsonDataU5BU5D_t4A6FBF822968FC83818F1B6493B552563CAE792B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFF8C524282266EE4C4A7EE822259B9440F8C21F3, ____items_1)); }
	inline JsonDataU5BU5D_t4A6FBF822968FC83818F1B6493B552563CAE792B* get__items_1() const { return ____items_1; }
	inline JsonDataU5BU5D_t4A6FBF822968FC83818F1B6493B552563CAE792B** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(JsonDataU5BU5D_t4A6FBF822968FC83818F1B6493B552563CAE792B* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFF8C524282266EE4C4A7EE822259B9440F8C21F3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFF8C524282266EE4C4A7EE822259B9440F8C21F3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFF8C524282266EE4C4A7EE822259B9440F8C21F3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFF8C524282266EE4C4A7EE822259B9440F8C21F3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	JsonDataU5BU5D_t4A6FBF822968FC83818F1B6493B552563CAE792B* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFF8C524282266EE4C4A7EE822259B9440F8C21F3_StaticFields, ____emptyArray_5)); }
	inline JsonDataU5BU5D_t4A6FBF822968FC83818F1B6493B552563CAE792B* get__emptyArray_5() const { return ____emptyArray_5; }
	inline JsonDataU5BU5D_t4A6FBF822968FC83818F1B6493B552563CAE792B** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(JsonDataU5BU5D_t4A6FBF822968FC83818F1B6493B552563CAE792B* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<System.Int32>
struct  Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55, ____array_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__array_0() const { return ____array_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55, ____syncRoot_3)); }
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


// System.Collections.Generic.Stack`1<LitJson.WriterContext>
struct  Stack_1_tEFB614397DBC5AFE2026C45C8FD2A720C51C0F27  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	WriterContextU5BU5D_t9B770A5C3AE75E6C451619617EC9670E9CB39353* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_tEFB614397DBC5AFE2026C45C8FD2A720C51C0F27, ____array_0)); }
	inline WriterContextU5BU5D_t9B770A5C3AE75E6C451619617EC9670E9CB39353* get__array_0() const { return ____array_0; }
	inline WriterContextU5BU5D_t9B770A5C3AE75E6C451619617EC9670E9CB39353** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(WriterContextU5BU5D_t9B770A5C3AE75E6C451619617EC9670E9CB39353* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_tEFB614397DBC5AFE2026C45C8FD2A720C51C0F27, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_tEFB614397DBC5AFE2026C45C8FD2A720C51C0F27, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_tEFB614397DBC5AFE2026C45C8FD2A720C51C0F27, ____syncRoot_3)); }
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


// System.Globalization.CultureInfo
struct  CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// LitJson.FsmContext
struct  FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA  : public RuntimeObject
{
public:
	// System.Boolean LitJson.FsmContext::Return
	bool ___Return_0;
	// System.Int32 LitJson.FsmContext::NextState
	int32_t ___NextState_1;
	// LitJson.Lexer LitJson.FsmContext::L
	Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * ___L_2;
	// System.Int32 LitJson.FsmContext::StateStack
	int32_t ___StateStack_3;

public:
	inline static int32_t get_offset_of_Return_0() { return static_cast<int32_t>(offsetof(FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA, ___Return_0)); }
	inline bool get_Return_0() const { return ___Return_0; }
	inline bool* get_address_of_Return_0() { return &___Return_0; }
	inline void set_Return_0(bool value)
	{
		___Return_0 = value;
	}

	inline static int32_t get_offset_of_NextState_1() { return static_cast<int32_t>(offsetof(FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA, ___NextState_1)); }
	inline int32_t get_NextState_1() const { return ___NextState_1; }
	inline int32_t* get_address_of_NextState_1() { return &___NextState_1; }
	inline void set_NextState_1(int32_t value)
	{
		___NextState_1 = value;
	}

	inline static int32_t get_offset_of_L_2() { return static_cast<int32_t>(offsetof(FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA, ___L_2)); }
	inline Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * get_L_2() const { return ___L_2; }
	inline Lexer_tA740F14E85682DB80300393CB63376A76BA37835 ** get_address_of_L_2() { return &___L_2; }
	inline void set_L_2(Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * value)
	{
		___L_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___L_2), (void*)value);
	}

	inline static int32_t get_offset_of_StateStack_3() { return static_cast<int32_t>(offsetof(FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA, ___StateStack_3)); }
	inline int32_t get_StateStack_3() const { return ___StateStack_3; }
	inline int32_t* get_address_of_StateStack_3() { return &___StateStack_3; }
	inline void set_StateStack_3(int32_t value)
	{
		___StateStack_3 = value;
	}
};


// LitJson.JsonMapper
struct  JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F  : public RuntimeObject
{
public:

public:
};

struct JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields
{
public:
	// System.Int32 LitJson.JsonMapper::max_nesting_depth
	int32_t ___max_nesting_depth_0;
	// System.IFormatProvider LitJson.JsonMapper::datetime_format
	RuntimeObject* ___datetime_format_1;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc> LitJson.JsonMapper::base_exporters_table
	RuntimeObject* ___base_exporters_table_2;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc> LitJson.JsonMapper::custom_exporters_table
	RuntimeObject* ___custom_exporters_table_3;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>> LitJson.JsonMapper::base_importers_table
	RuntimeObject* ___base_importers_table_4;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>> LitJson.JsonMapper::custom_importers_table
	RuntimeObject* ___custom_importers_table_5;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ArrayMetadata> LitJson.JsonMapper::array_metadata
	RuntimeObject* ___array_metadata_6;
	// System.Object LitJson.JsonMapper::array_metadata_lock
	RuntimeObject * ___array_metadata_lock_7;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>> LitJson.JsonMapper::conv_ops
	RuntimeObject* ___conv_ops_8;
	// System.Object LitJson.JsonMapper::conv_ops_lock
	RuntimeObject * ___conv_ops_lock_9;
	// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ObjectMetadata> LitJson.JsonMapper::object_metadata
	RuntimeObject* ___object_metadata_10;
	// System.Object LitJson.JsonMapper::object_metadata_lock
	RuntimeObject * ___object_metadata_lock_11;
	// System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>> LitJson.JsonMapper::type_properties
	RuntimeObject* ___type_properties_12;
	// System.Object LitJson.JsonMapper::type_properties_lock
	RuntimeObject * ___type_properties_lock_13;
	// LitJson.JsonWriter LitJson.JsonMapper::static_writer
	JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * ___static_writer_14;
	// System.Object LitJson.JsonMapper::static_writer_lock
	RuntimeObject * ___static_writer_lock_15;

public:
	inline static int32_t get_offset_of_max_nesting_depth_0() { return static_cast<int32_t>(offsetof(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields, ___max_nesting_depth_0)); }
	inline int32_t get_max_nesting_depth_0() const { return ___max_nesting_depth_0; }
	inline int32_t* get_address_of_max_nesting_depth_0() { return &___max_nesting_depth_0; }
	inline void set_max_nesting_depth_0(int32_t value)
	{
		___max_nesting_depth_0 = value;
	}

	inline static int32_t get_offset_of_datetime_format_1() { return static_cast<int32_t>(offsetof(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields, ___datetime_format_1)); }
	inline RuntimeObject* get_datetime_format_1() const { return ___datetime_format_1; }
	inline RuntimeObject** get_address_of_datetime_format_1() { return &___datetime_format_1; }
	inline void set_datetime_format_1(RuntimeObject* value)
	{
		___datetime_format_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___datetime_format_1), (void*)value);
	}

	inline static int32_t get_offset_of_base_exporters_table_2() { return static_cast<int32_t>(offsetof(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields, ___base_exporters_table_2)); }
	inline RuntimeObject* get_base_exporters_table_2() const { return ___base_exporters_table_2; }
	inline RuntimeObject** get_address_of_base_exporters_table_2() { return &___base_exporters_table_2; }
	inline void set_base_exporters_table_2(RuntimeObject* value)
	{
		___base_exporters_table_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___base_exporters_table_2), (void*)value);
	}

	inline static int32_t get_offset_of_custom_exporters_table_3() { return static_cast<int32_t>(offsetof(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields, ___custom_exporters_table_3)); }
	inline RuntimeObject* get_custom_exporters_table_3() const { return ___custom_exporters_table_3; }
	inline RuntimeObject** get_address_of_custom_exporters_table_3() { return &___custom_exporters_table_3; }
	inline void set_custom_exporters_table_3(RuntimeObject* value)
	{
		___custom_exporters_table_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___custom_exporters_table_3), (void*)value);
	}

	inline static int32_t get_offset_of_base_importers_table_4() { return static_cast<int32_t>(offsetof(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields, ___base_importers_table_4)); }
	inline RuntimeObject* get_base_importers_table_4() const { return ___base_importers_table_4; }
	inline RuntimeObject** get_address_of_base_importers_table_4() { return &___base_importers_table_4; }
	inline void set_base_importers_table_4(RuntimeObject* value)
	{
		___base_importers_table_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___base_importers_table_4), (void*)value);
	}

	inline static int32_t get_offset_of_custom_importers_table_5() { return static_cast<int32_t>(offsetof(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields, ___custom_importers_table_5)); }
	inline RuntimeObject* get_custom_importers_table_5() const { return ___custom_importers_table_5; }
	inline RuntimeObject** get_address_of_custom_importers_table_5() { return &___custom_importers_table_5; }
	inline void set_custom_importers_table_5(RuntimeObject* value)
	{
		___custom_importers_table_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___custom_importers_table_5), (void*)value);
	}

	inline static int32_t get_offset_of_array_metadata_6() { return static_cast<int32_t>(offsetof(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields, ___array_metadata_6)); }
	inline RuntimeObject* get_array_metadata_6() const { return ___array_metadata_6; }
	inline RuntimeObject** get_address_of_array_metadata_6() { return &___array_metadata_6; }
	inline void set_array_metadata_6(RuntimeObject* value)
	{
		___array_metadata_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_metadata_6), (void*)value);
	}

	inline static int32_t get_offset_of_array_metadata_lock_7() { return static_cast<int32_t>(offsetof(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields, ___array_metadata_lock_7)); }
	inline RuntimeObject * get_array_metadata_lock_7() const { return ___array_metadata_lock_7; }
	inline RuntimeObject ** get_address_of_array_metadata_lock_7() { return &___array_metadata_lock_7; }
	inline void set_array_metadata_lock_7(RuntimeObject * value)
	{
		___array_metadata_lock_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___array_metadata_lock_7), (void*)value);
	}

	inline static int32_t get_offset_of_conv_ops_8() { return static_cast<int32_t>(offsetof(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields, ___conv_ops_8)); }
	inline RuntimeObject* get_conv_ops_8() const { return ___conv_ops_8; }
	inline RuntimeObject** get_address_of_conv_ops_8() { return &___conv_ops_8; }
	inline void set_conv_ops_8(RuntimeObject* value)
	{
		___conv_ops_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___conv_ops_8), (void*)value);
	}

	inline static int32_t get_offset_of_conv_ops_lock_9() { return static_cast<int32_t>(offsetof(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields, ___conv_ops_lock_9)); }
	inline RuntimeObject * get_conv_ops_lock_9() const { return ___conv_ops_lock_9; }
	inline RuntimeObject ** get_address_of_conv_ops_lock_9() { return &___conv_ops_lock_9; }
	inline void set_conv_ops_lock_9(RuntimeObject * value)
	{
		___conv_ops_lock_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___conv_ops_lock_9), (void*)value);
	}

	inline static int32_t get_offset_of_object_metadata_10() { return static_cast<int32_t>(offsetof(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields, ___object_metadata_10)); }
	inline RuntimeObject* get_object_metadata_10() const { return ___object_metadata_10; }
	inline RuntimeObject** get_address_of_object_metadata_10() { return &___object_metadata_10; }
	inline void set_object_metadata_10(RuntimeObject* value)
	{
		___object_metadata_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___object_metadata_10), (void*)value);
	}

	inline static int32_t get_offset_of_object_metadata_lock_11() { return static_cast<int32_t>(offsetof(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields, ___object_metadata_lock_11)); }
	inline RuntimeObject * get_object_metadata_lock_11() const { return ___object_metadata_lock_11; }
	inline RuntimeObject ** get_address_of_object_metadata_lock_11() { return &___object_metadata_lock_11; }
	inline void set_object_metadata_lock_11(RuntimeObject * value)
	{
		___object_metadata_lock_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___object_metadata_lock_11), (void*)value);
	}

	inline static int32_t get_offset_of_type_properties_12() { return static_cast<int32_t>(offsetof(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields, ___type_properties_12)); }
	inline RuntimeObject* get_type_properties_12() const { return ___type_properties_12; }
	inline RuntimeObject** get_address_of_type_properties_12() { return &___type_properties_12; }
	inline void set_type_properties_12(RuntimeObject* value)
	{
		___type_properties_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_properties_12), (void*)value);
	}

	inline static int32_t get_offset_of_type_properties_lock_13() { return static_cast<int32_t>(offsetof(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields, ___type_properties_lock_13)); }
	inline RuntimeObject * get_type_properties_lock_13() const { return ___type_properties_lock_13; }
	inline RuntimeObject ** get_address_of_type_properties_lock_13() { return &___type_properties_lock_13; }
	inline void set_type_properties_lock_13(RuntimeObject * value)
	{
		___type_properties_lock_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_properties_lock_13), (void*)value);
	}

	inline static int32_t get_offset_of_static_writer_14() { return static_cast<int32_t>(offsetof(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields, ___static_writer_14)); }
	inline JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * get_static_writer_14() const { return ___static_writer_14; }
	inline JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 ** get_address_of_static_writer_14() { return &___static_writer_14; }
	inline void set_static_writer_14(JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * value)
	{
		___static_writer_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___static_writer_14), (void*)value);
	}

	inline static int32_t get_offset_of_static_writer_lock_15() { return static_cast<int32_t>(offsetof(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields, ___static_writer_lock_15)); }
	inline RuntimeObject * get_static_writer_lock_15() const { return ___static_writer_lock_15; }
	inline RuntimeObject ** get_address_of_static_writer_lock_15() { return &___static_writer_lock_15; }
	inline void set_static_writer_lock_15(RuntimeObject * value)
	{
		___static_writer_lock_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___static_writer_lock_15), (void*)value);
	}
};


// LitJson.JsonWriter
struct  JsonWriter_tF9057404715003DE4AB771FF865770690910FB89  : public RuntimeObject
{
public:
	// LitJson.WriterContext LitJson.JsonWriter::context
	WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * ___context_1;
	// System.Collections.Generic.Stack`1<LitJson.WriterContext> LitJson.JsonWriter::ctx_stack
	Stack_1_tEFB614397DBC5AFE2026C45C8FD2A720C51C0F27 * ___ctx_stack_2;
	// System.Boolean LitJson.JsonWriter::has_reached_end
	bool ___has_reached_end_3;
	// System.Char[] LitJson.JsonWriter::hex_seq
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___hex_seq_4;
	// System.Int32 LitJson.JsonWriter::indentation
	int32_t ___indentation_5;
	// System.Int32 LitJson.JsonWriter::indent_value
	int32_t ___indent_value_6;
	// System.Text.StringBuilder LitJson.JsonWriter::inst_string_builder
	StringBuilder_t * ___inst_string_builder_7;
	// System.Boolean LitJson.JsonWriter::pretty_print
	bool ___pretty_print_8;
	// System.Boolean LitJson.JsonWriter::validate
	bool ___validate_9;
	// System.Boolean LitJson.JsonWriter::lower_case_properties
	bool ___lower_case_properties_10;
	// System.IO.TextWriter LitJson.JsonWriter::writer
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___writer_11;

public:
	inline static int32_t get_offset_of_context_1() { return static_cast<int32_t>(offsetof(JsonWriter_tF9057404715003DE4AB771FF865770690910FB89, ___context_1)); }
	inline WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * get_context_1() const { return ___context_1; }
	inline WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB ** get_address_of_context_1() { return &___context_1; }
	inline void set_context_1(WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * value)
	{
		___context_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___context_1), (void*)value);
	}

	inline static int32_t get_offset_of_ctx_stack_2() { return static_cast<int32_t>(offsetof(JsonWriter_tF9057404715003DE4AB771FF865770690910FB89, ___ctx_stack_2)); }
	inline Stack_1_tEFB614397DBC5AFE2026C45C8FD2A720C51C0F27 * get_ctx_stack_2() const { return ___ctx_stack_2; }
	inline Stack_1_tEFB614397DBC5AFE2026C45C8FD2A720C51C0F27 ** get_address_of_ctx_stack_2() { return &___ctx_stack_2; }
	inline void set_ctx_stack_2(Stack_1_tEFB614397DBC5AFE2026C45C8FD2A720C51C0F27 * value)
	{
		___ctx_stack_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ctx_stack_2), (void*)value);
	}

	inline static int32_t get_offset_of_has_reached_end_3() { return static_cast<int32_t>(offsetof(JsonWriter_tF9057404715003DE4AB771FF865770690910FB89, ___has_reached_end_3)); }
	inline bool get_has_reached_end_3() const { return ___has_reached_end_3; }
	inline bool* get_address_of_has_reached_end_3() { return &___has_reached_end_3; }
	inline void set_has_reached_end_3(bool value)
	{
		___has_reached_end_3 = value;
	}

	inline static int32_t get_offset_of_hex_seq_4() { return static_cast<int32_t>(offsetof(JsonWriter_tF9057404715003DE4AB771FF865770690910FB89, ___hex_seq_4)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_hex_seq_4() const { return ___hex_seq_4; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_hex_seq_4() { return &___hex_seq_4; }
	inline void set_hex_seq_4(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___hex_seq_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___hex_seq_4), (void*)value);
	}

	inline static int32_t get_offset_of_indentation_5() { return static_cast<int32_t>(offsetof(JsonWriter_tF9057404715003DE4AB771FF865770690910FB89, ___indentation_5)); }
	inline int32_t get_indentation_5() const { return ___indentation_5; }
	inline int32_t* get_address_of_indentation_5() { return &___indentation_5; }
	inline void set_indentation_5(int32_t value)
	{
		___indentation_5 = value;
	}

	inline static int32_t get_offset_of_indent_value_6() { return static_cast<int32_t>(offsetof(JsonWriter_tF9057404715003DE4AB771FF865770690910FB89, ___indent_value_6)); }
	inline int32_t get_indent_value_6() const { return ___indent_value_6; }
	inline int32_t* get_address_of_indent_value_6() { return &___indent_value_6; }
	inline void set_indent_value_6(int32_t value)
	{
		___indent_value_6 = value;
	}

	inline static int32_t get_offset_of_inst_string_builder_7() { return static_cast<int32_t>(offsetof(JsonWriter_tF9057404715003DE4AB771FF865770690910FB89, ___inst_string_builder_7)); }
	inline StringBuilder_t * get_inst_string_builder_7() const { return ___inst_string_builder_7; }
	inline StringBuilder_t ** get_address_of_inst_string_builder_7() { return &___inst_string_builder_7; }
	inline void set_inst_string_builder_7(StringBuilder_t * value)
	{
		___inst_string_builder_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inst_string_builder_7), (void*)value);
	}

	inline static int32_t get_offset_of_pretty_print_8() { return static_cast<int32_t>(offsetof(JsonWriter_tF9057404715003DE4AB771FF865770690910FB89, ___pretty_print_8)); }
	inline bool get_pretty_print_8() const { return ___pretty_print_8; }
	inline bool* get_address_of_pretty_print_8() { return &___pretty_print_8; }
	inline void set_pretty_print_8(bool value)
	{
		___pretty_print_8 = value;
	}

	inline static int32_t get_offset_of_validate_9() { return static_cast<int32_t>(offsetof(JsonWriter_tF9057404715003DE4AB771FF865770690910FB89, ___validate_9)); }
	inline bool get_validate_9() const { return ___validate_9; }
	inline bool* get_address_of_validate_9() { return &___validate_9; }
	inline void set_validate_9(bool value)
	{
		___validate_9 = value;
	}

	inline static int32_t get_offset_of_lower_case_properties_10() { return static_cast<int32_t>(offsetof(JsonWriter_tF9057404715003DE4AB771FF865770690910FB89, ___lower_case_properties_10)); }
	inline bool get_lower_case_properties_10() const { return ___lower_case_properties_10; }
	inline bool* get_address_of_lower_case_properties_10() { return &___lower_case_properties_10; }
	inline void set_lower_case_properties_10(bool value)
	{
		___lower_case_properties_10 = value;
	}

	inline static int32_t get_offset_of_writer_11() { return static_cast<int32_t>(offsetof(JsonWriter_tF9057404715003DE4AB771FF865770690910FB89, ___writer_11)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_writer_11() const { return ___writer_11; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_writer_11() { return &___writer_11; }
	inline void set_writer_11(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___writer_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___writer_11), (void*)value);
	}
};

struct JsonWriter_tF9057404715003DE4AB771FF865770690910FB89_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo LitJson.JsonWriter::number_format
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___number_format_0;

public:
	inline static int32_t get_offset_of_number_format_0() { return static_cast<int32_t>(offsetof(JsonWriter_tF9057404715003DE4AB771FF865770690910FB89_StaticFields, ___number_format_0)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_number_format_0() const { return ___number_format_0; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_number_format_0() { return &___number_format_0; }
	inline void set_number_format_0(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___number_format_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___number_format_0), (void*)value);
	}
};


// LitJson.Lexer
struct  Lexer_tA740F14E85682DB80300393CB63376A76BA37835  : public RuntimeObject
{
public:
	// System.Boolean LitJson.Lexer::allow_comments
	bool ___allow_comments_2;
	// System.Boolean LitJson.Lexer::allow_single_quoted_strings
	bool ___allow_single_quoted_strings_3;
	// System.Boolean LitJson.Lexer::end_of_input
	bool ___end_of_input_4;
	// LitJson.FsmContext LitJson.Lexer::fsm_context
	FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * ___fsm_context_5;
	// System.Int32 LitJson.Lexer::input_buffer
	int32_t ___input_buffer_6;
	// System.Int32 LitJson.Lexer::input_char
	int32_t ___input_char_7;
	// System.IO.TextReader LitJson.Lexer::reader
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___reader_8;
	// System.Int32 LitJson.Lexer::state
	int32_t ___state_9;
	// System.Text.StringBuilder LitJson.Lexer::string_buffer
	StringBuilder_t * ___string_buffer_10;
	// System.String LitJson.Lexer::string_value
	String_t* ___string_value_11;
	// System.Int32 LitJson.Lexer::token
	int32_t ___token_12;
	// System.Int32 LitJson.Lexer::unichar
	int32_t ___unichar_13;

public:
	inline static int32_t get_offset_of_allow_comments_2() { return static_cast<int32_t>(offsetof(Lexer_tA740F14E85682DB80300393CB63376A76BA37835, ___allow_comments_2)); }
	inline bool get_allow_comments_2() const { return ___allow_comments_2; }
	inline bool* get_address_of_allow_comments_2() { return &___allow_comments_2; }
	inline void set_allow_comments_2(bool value)
	{
		___allow_comments_2 = value;
	}

	inline static int32_t get_offset_of_allow_single_quoted_strings_3() { return static_cast<int32_t>(offsetof(Lexer_tA740F14E85682DB80300393CB63376A76BA37835, ___allow_single_quoted_strings_3)); }
	inline bool get_allow_single_quoted_strings_3() const { return ___allow_single_quoted_strings_3; }
	inline bool* get_address_of_allow_single_quoted_strings_3() { return &___allow_single_quoted_strings_3; }
	inline void set_allow_single_quoted_strings_3(bool value)
	{
		___allow_single_quoted_strings_3 = value;
	}

	inline static int32_t get_offset_of_end_of_input_4() { return static_cast<int32_t>(offsetof(Lexer_tA740F14E85682DB80300393CB63376A76BA37835, ___end_of_input_4)); }
	inline bool get_end_of_input_4() const { return ___end_of_input_4; }
	inline bool* get_address_of_end_of_input_4() { return &___end_of_input_4; }
	inline void set_end_of_input_4(bool value)
	{
		___end_of_input_4 = value;
	}

	inline static int32_t get_offset_of_fsm_context_5() { return static_cast<int32_t>(offsetof(Lexer_tA740F14E85682DB80300393CB63376A76BA37835, ___fsm_context_5)); }
	inline FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * get_fsm_context_5() const { return ___fsm_context_5; }
	inline FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA ** get_address_of_fsm_context_5() { return &___fsm_context_5; }
	inline void set_fsm_context_5(FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * value)
	{
		___fsm_context_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fsm_context_5), (void*)value);
	}

	inline static int32_t get_offset_of_input_buffer_6() { return static_cast<int32_t>(offsetof(Lexer_tA740F14E85682DB80300393CB63376A76BA37835, ___input_buffer_6)); }
	inline int32_t get_input_buffer_6() const { return ___input_buffer_6; }
	inline int32_t* get_address_of_input_buffer_6() { return &___input_buffer_6; }
	inline void set_input_buffer_6(int32_t value)
	{
		___input_buffer_6 = value;
	}

	inline static int32_t get_offset_of_input_char_7() { return static_cast<int32_t>(offsetof(Lexer_tA740F14E85682DB80300393CB63376A76BA37835, ___input_char_7)); }
	inline int32_t get_input_char_7() const { return ___input_char_7; }
	inline int32_t* get_address_of_input_char_7() { return &___input_char_7; }
	inline void set_input_char_7(int32_t value)
	{
		___input_char_7 = value;
	}

	inline static int32_t get_offset_of_reader_8() { return static_cast<int32_t>(offsetof(Lexer_tA740F14E85682DB80300393CB63376A76BA37835, ___reader_8)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_reader_8() const { return ___reader_8; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_reader_8() { return &___reader_8; }
	inline void set_reader_8(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___reader_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reader_8), (void*)value);
	}

	inline static int32_t get_offset_of_state_9() { return static_cast<int32_t>(offsetof(Lexer_tA740F14E85682DB80300393CB63376A76BA37835, ___state_9)); }
	inline int32_t get_state_9() const { return ___state_9; }
	inline int32_t* get_address_of_state_9() { return &___state_9; }
	inline void set_state_9(int32_t value)
	{
		___state_9 = value;
	}

	inline static int32_t get_offset_of_string_buffer_10() { return static_cast<int32_t>(offsetof(Lexer_tA740F14E85682DB80300393CB63376A76BA37835, ___string_buffer_10)); }
	inline StringBuilder_t * get_string_buffer_10() const { return ___string_buffer_10; }
	inline StringBuilder_t ** get_address_of_string_buffer_10() { return &___string_buffer_10; }
	inline void set_string_buffer_10(StringBuilder_t * value)
	{
		___string_buffer_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___string_buffer_10), (void*)value);
	}

	inline static int32_t get_offset_of_string_value_11() { return static_cast<int32_t>(offsetof(Lexer_tA740F14E85682DB80300393CB63376A76BA37835, ___string_value_11)); }
	inline String_t* get_string_value_11() const { return ___string_value_11; }
	inline String_t** get_address_of_string_value_11() { return &___string_value_11; }
	inline void set_string_value_11(String_t* value)
	{
		___string_value_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___string_value_11), (void*)value);
	}

	inline static int32_t get_offset_of_token_12() { return static_cast<int32_t>(offsetof(Lexer_tA740F14E85682DB80300393CB63376A76BA37835, ___token_12)); }
	inline int32_t get_token_12() const { return ___token_12; }
	inline int32_t* get_address_of_token_12() { return &___token_12; }
	inline void set_token_12(int32_t value)
	{
		___token_12 = value;
	}

	inline static int32_t get_offset_of_unichar_13() { return static_cast<int32_t>(offsetof(Lexer_tA740F14E85682DB80300393CB63376A76BA37835, ___unichar_13)); }
	inline int32_t get_unichar_13() const { return ___unichar_13; }
	inline int32_t* get_address_of_unichar_13() { return &___unichar_13; }
	inline void set_unichar_13(int32_t value)
	{
		___unichar_13 = value;
	}
};

struct Lexer_tA740F14E85682DB80300393CB63376A76BA37835_StaticFields
{
public:
	// System.Int32[] LitJson.Lexer::fsm_return_table
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___fsm_return_table_0;
	// LitJson.Lexer/StateHandler[] LitJson.Lexer::fsm_handler_table
	StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19* ___fsm_handler_table_1;

public:
	inline static int32_t get_offset_of_fsm_return_table_0() { return static_cast<int32_t>(offsetof(Lexer_tA740F14E85682DB80300393CB63376A76BA37835_StaticFields, ___fsm_return_table_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_fsm_return_table_0() const { return ___fsm_return_table_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_fsm_return_table_0() { return &___fsm_return_table_0; }
	inline void set_fsm_return_table_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___fsm_return_table_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fsm_return_table_0), (void*)value);
	}

	inline static int32_t get_offset_of_fsm_handler_table_1() { return static_cast<int32_t>(offsetof(Lexer_tA740F14E85682DB80300393CB63376A76BA37835_StaticFields, ___fsm_handler_table_1)); }
	inline StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19* get_fsm_handler_table_1() const { return ___fsm_handler_table_1; }
	inline StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19** get_address_of_fsm_handler_table_1() { return &___fsm_handler_table_1; }
	inline void set_fsm_handler_table_1(StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19* value)
	{
		___fsm_handler_table_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fsm_handler_table_1), (void*)value);
	}
};


// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// LitJson.OrderedDictionaryEnumerator
struct  OrderedDictionaryEnumerator_t41C60BB9B4656C74962492FF2832858504473791  : public RuntimeObject
{
public:
	// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>> LitJson.OrderedDictionaryEnumerator::list_enumerator
	RuntimeObject* ___list_enumerator_0;

public:
	inline static int32_t get_offset_of_list_enumerator_0() { return static_cast<int32_t>(offsetof(OrderedDictionaryEnumerator_t41C60BB9B4656C74962492FF2832858504473791, ___list_enumerator_0)); }
	inline RuntimeObject* get_list_enumerator_0() const { return ___list_enumerator_0; }
	inline RuntimeObject** get_address_of_list_enumerator_0() { return &___list_enumerator_0; }
	inline void set_list_enumerator_0(RuntimeObject* value)
	{
		___list_enumerator_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_enumerator_0), (void*)value);
	}
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


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
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

// LitJson.WriterContext
struct  WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB  : public RuntimeObject
{
public:
	// System.Int32 LitJson.WriterContext::Count
	int32_t ___Count_0;
	// System.Boolean LitJson.WriterContext::InArray
	bool ___InArray_1;
	// System.Boolean LitJson.WriterContext::InObject
	bool ___InObject_2;
	// System.Boolean LitJson.WriterContext::ExpectingValue
	bool ___ExpectingValue_3;
	// System.Int32 LitJson.WriterContext::Padding
	int32_t ___Padding_4;

public:
	inline static int32_t get_offset_of_Count_0() { return static_cast<int32_t>(offsetof(WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB, ___Count_0)); }
	inline int32_t get_Count_0() const { return ___Count_0; }
	inline int32_t* get_address_of_Count_0() { return &___Count_0; }
	inline void set_Count_0(int32_t value)
	{
		___Count_0 = value;
	}

	inline static int32_t get_offset_of_InArray_1() { return static_cast<int32_t>(offsetof(WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB, ___InArray_1)); }
	inline bool get_InArray_1() const { return ___InArray_1; }
	inline bool* get_address_of_InArray_1() { return &___InArray_1; }
	inline void set_InArray_1(bool value)
	{
		___InArray_1 = value;
	}

	inline static int32_t get_offset_of_InObject_2() { return static_cast<int32_t>(offsetof(WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB, ___InObject_2)); }
	inline bool get_InObject_2() const { return ___InObject_2; }
	inline bool* get_address_of_InObject_2() { return &___InObject_2; }
	inline void set_InObject_2(bool value)
	{
		___InObject_2 = value;
	}

	inline static int32_t get_offset_of_ExpectingValue_3() { return static_cast<int32_t>(offsetof(WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB, ___ExpectingValue_3)); }
	inline bool get_ExpectingValue_3() const { return ___ExpectingValue_3; }
	inline bool* get_address_of_ExpectingValue_3() { return &___ExpectingValue_3; }
	inline void set_ExpectingValue_3(bool value)
	{
		___ExpectingValue_3 = value;
	}

	inline static int32_t get_offset_of_Padding_4() { return static_cast<int32_t>(offsetof(WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB, ___Padding_4)); }
	inline int32_t get_Padding_4() const { return ___Padding_4; }
	inline int32_t* get_address_of_Padding_4() { return &___Padding_4; }
	inline void set_Padding_4(int32_t value)
	{
		___Padding_4 = value;
	}
};


// LitJson.JsonMapper/<>c
struct  U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields
{
public:
	// LitJson.JsonMapper/<>c LitJson.JsonMapper/<>c::<>9
	U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * ___U3CU3E9_0;
	// LitJson.ExporterFunc LitJson.JsonMapper/<>c::<>9__24_0
	ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * ___U3CU3E9__24_0_1;
	// LitJson.ExporterFunc LitJson.JsonMapper/<>c::<>9__24_1
	ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * ___U3CU3E9__24_1_2;
	// LitJson.ExporterFunc LitJson.JsonMapper/<>c::<>9__24_2
	ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * ___U3CU3E9__24_2_3;
	// LitJson.ExporterFunc LitJson.JsonMapper/<>c::<>9__24_3
	ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * ___U3CU3E9__24_3_4;
	// LitJson.ExporterFunc LitJson.JsonMapper/<>c::<>9__24_4
	ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * ___U3CU3E9__24_4_5;
	// LitJson.ExporterFunc LitJson.JsonMapper/<>c::<>9__24_5
	ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * ___U3CU3E9__24_5_6;
	// LitJson.ExporterFunc LitJson.JsonMapper/<>c::<>9__24_6
	ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * ___U3CU3E9__24_6_7;
	// LitJson.ExporterFunc LitJson.JsonMapper/<>c::<>9__24_7
	ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * ___U3CU3E9__24_7_8;
	// LitJson.ExporterFunc LitJson.JsonMapper/<>c::<>9__24_8
	ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * ___U3CU3E9__24_8_9;
	// LitJson.ExporterFunc LitJson.JsonMapper/<>c::<>9__24_9
	ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * ___U3CU3E9__24_9_10;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_0
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * ___U3CU3E9__25_0_11;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_1
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * ___U3CU3E9__25_1_12;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_2
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * ___U3CU3E9__25_2_13;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_3
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * ___U3CU3E9__25_3_14;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_4
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * ___U3CU3E9__25_4_15;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_5
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * ___U3CU3E9__25_5_16;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_6
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * ___U3CU3E9__25_6_17;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_7
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * ___U3CU3E9__25_7_18;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_8
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * ___U3CU3E9__25_8_19;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_9
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * ___U3CU3E9__25_9_20;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_10
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * ___U3CU3E9__25_10_21;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_11
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * ___U3CU3E9__25_11_22;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_12
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * ___U3CU3E9__25_12_23;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_13
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * ___U3CU3E9__25_13_24;
	// LitJson.ImporterFunc LitJson.JsonMapper/<>c::<>9__25_14
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * ___U3CU3E9__25_14_25;
	// LitJson.WrapperFactory LitJson.JsonMapper/<>c::<>9__32_0
	WrapperFactory_tB55CB2530E34938522E06A75C4EDCC9466CCE22F * ___U3CU3E9__32_0_26;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields, ___U3CU3E9__24_0_1)); }
	inline ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * get_U3CU3E9__24_0_1() const { return ___U3CU3E9__24_0_1; }
	inline ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 ** get_address_of_U3CU3E9__24_0_1() { return &___U3CU3E9__24_0_1; }
	inline void set_U3CU3E9__24_0_1(ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * value)
	{
		___U3CU3E9__24_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields, ___U3CU3E9__24_1_2)); }
	inline ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * get_U3CU3E9__24_1_2() const { return ___U3CU3E9__24_1_2; }
	inline ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 ** get_address_of_U3CU3E9__24_1_2() { return &___U3CU3E9__24_1_2; }
	inline void set_U3CU3E9__24_1_2(ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * value)
	{
		___U3CU3E9__24_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_2_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields, ___U3CU3E9__24_2_3)); }
	inline ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * get_U3CU3E9__24_2_3() const { return ___U3CU3E9__24_2_3; }
	inline ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 ** get_address_of_U3CU3E9__24_2_3() { return &___U3CU3E9__24_2_3; }
	inline void set_U3CU3E9__24_2_3(ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * value)
	{
		___U3CU3E9__24_2_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_2_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_3_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields, ___U3CU3E9__24_3_4)); }
	inline ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * get_U3CU3E9__24_3_4() const { return ___U3CU3E9__24_3_4; }
	inline ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 ** get_address_of_U3CU3E9__24_3_4() { return &___U3CU3E9__24_3_4; }
	inline void set_U3CU3E9__24_3_4(ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * value)
	{
		___U3CU3E9__24_3_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_3_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_4_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields, ___U3CU3E9__24_4_5)); }
	inline ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * get_U3CU3E9__24_4_5() const { return ___U3CU3E9__24_4_5; }
	inline ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 ** get_address_of_U3CU3E9__24_4_5() { return &___U3CU3E9__24_4_5; }
	inline void set_U3CU3E9__24_4_5(ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * value)
	{
		___U3CU3E9__24_4_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_4_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_5_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields, ___U3CU3E9__24_5_6)); }
	inline ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * get_U3CU3E9__24_5_6() const { return ___U3CU3E9__24_5_6; }
	inline ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 ** get_address_of_U3CU3E9__24_5_6() { return &___U3CU3E9__24_5_6; }
	inline void set_U3CU3E9__24_5_6(ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * value)
	{
		___U3CU3E9__24_5_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_5_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_6_7() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields, ___U3CU3E9__24_6_7)); }
	inline ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * get_U3CU3E9__24_6_7() const { return ___U3CU3E9__24_6_7; }
	inline ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 ** get_address_of_U3CU3E9__24_6_7() { return &___U3CU3E9__24_6_7; }
	inline void set_U3CU3E9__24_6_7(ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * value)
	{
		___U3CU3E9__24_6_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_6_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_7_8() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields, ___U3CU3E9__24_7_8)); }
	inline ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * get_U3CU3E9__24_7_8() const { return ___U3CU3E9__24_7_8; }
	inline ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 ** get_address_of_U3CU3E9__24_7_8() { return &___U3CU3E9__24_7_8; }
	inline void set_U3CU3E9__24_7_8(ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * value)
	{
		___U3CU3E9__24_7_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_7_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_8_9() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields, ___U3CU3E9__24_8_9)); }
	inline ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * get_U3CU3E9__24_8_9() const { return ___U3CU3E9__24_8_9; }
	inline ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 ** get_address_of_U3CU3E9__24_8_9() { return &___U3CU3E9__24_8_9; }
	inline void set_U3CU3E9__24_8_9(ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * value)
	{
		___U3CU3E9__24_8_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_8_9), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__24_9_10() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields, ___U3CU3E9__24_9_10)); }
	inline ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * get_U3CU3E9__24_9_10() const { return ___U3CU3E9__24_9_10; }
	inline ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 ** get_address_of_U3CU3E9__24_9_10() { return &___U3CU3E9__24_9_10; }
	inline void set_U3CU3E9__24_9_10(ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * value)
	{
		___U3CU3E9__24_9_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__24_9_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_0_11() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields, ___U3CU3E9__25_0_11)); }
	inline ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * get_U3CU3E9__25_0_11() const { return ___U3CU3E9__25_0_11; }
	inline ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A ** get_address_of_U3CU3E9__25_0_11() { return &___U3CU3E9__25_0_11; }
	inline void set_U3CU3E9__25_0_11(ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * value)
	{
		___U3CU3E9__25_0_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_0_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_1_12() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields, ___U3CU3E9__25_1_12)); }
	inline ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * get_U3CU3E9__25_1_12() const { return ___U3CU3E9__25_1_12; }
	inline ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A ** get_address_of_U3CU3E9__25_1_12() { return &___U3CU3E9__25_1_12; }
	inline void set_U3CU3E9__25_1_12(ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * value)
	{
		___U3CU3E9__25_1_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_1_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_2_13() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields, ___U3CU3E9__25_2_13)); }
	inline ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * get_U3CU3E9__25_2_13() const { return ___U3CU3E9__25_2_13; }
	inline ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A ** get_address_of_U3CU3E9__25_2_13() { return &___U3CU3E9__25_2_13; }
	inline void set_U3CU3E9__25_2_13(ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * value)
	{
		___U3CU3E9__25_2_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_2_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_3_14() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields, ___U3CU3E9__25_3_14)); }
	inline ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * get_U3CU3E9__25_3_14() const { return ___U3CU3E9__25_3_14; }
	inline ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A ** get_address_of_U3CU3E9__25_3_14() { return &___U3CU3E9__25_3_14; }
	inline void set_U3CU3E9__25_3_14(ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * value)
	{
		___U3CU3E9__25_3_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_3_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_4_15() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields, ___U3CU3E9__25_4_15)); }
	inline ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * get_U3CU3E9__25_4_15() const { return ___U3CU3E9__25_4_15; }
	inline ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A ** get_address_of_U3CU3E9__25_4_15() { return &___U3CU3E9__25_4_15; }
	inline void set_U3CU3E9__25_4_15(ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * value)
	{
		___U3CU3E9__25_4_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_4_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_5_16() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields, ___U3CU3E9__25_5_16)); }
	inline ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * get_U3CU3E9__25_5_16() const { return ___U3CU3E9__25_5_16; }
	inline ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A ** get_address_of_U3CU3E9__25_5_16() { return &___U3CU3E9__25_5_16; }
	inline void set_U3CU3E9__25_5_16(ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * value)
	{
		___U3CU3E9__25_5_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_5_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_6_17() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields, ___U3CU3E9__25_6_17)); }
	inline ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * get_U3CU3E9__25_6_17() const { return ___U3CU3E9__25_6_17; }
	inline ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A ** get_address_of_U3CU3E9__25_6_17() { return &___U3CU3E9__25_6_17; }
	inline void set_U3CU3E9__25_6_17(ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * value)
	{
		___U3CU3E9__25_6_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_6_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_7_18() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields, ___U3CU3E9__25_7_18)); }
	inline ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * get_U3CU3E9__25_7_18() const { return ___U3CU3E9__25_7_18; }
	inline ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A ** get_address_of_U3CU3E9__25_7_18() { return &___U3CU3E9__25_7_18; }
	inline void set_U3CU3E9__25_7_18(ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * value)
	{
		___U3CU3E9__25_7_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_7_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_8_19() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields, ___U3CU3E9__25_8_19)); }
	inline ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * get_U3CU3E9__25_8_19() const { return ___U3CU3E9__25_8_19; }
	inline ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A ** get_address_of_U3CU3E9__25_8_19() { return &___U3CU3E9__25_8_19; }
	inline void set_U3CU3E9__25_8_19(ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * value)
	{
		___U3CU3E9__25_8_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_8_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_9_20() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields, ___U3CU3E9__25_9_20)); }
	inline ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * get_U3CU3E9__25_9_20() const { return ___U3CU3E9__25_9_20; }
	inline ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A ** get_address_of_U3CU3E9__25_9_20() { return &___U3CU3E9__25_9_20; }
	inline void set_U3CU3E9__25_9_20(ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * value)
	{
		___U3CU3E9__25_9_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_9_20), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_10_21() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields, ___U3CU3E9__25_10_21)); }
	inline ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * get_U3CU3E9__25_10_21() const { return ___U3CU3E9__25_10_21; }
	inline ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A ** get_address_of_U3CU3E9__25_10_21() { return &___U3CU3E9__25_10_21; }
	inline void set_U3CU3E9__25_10_21(ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * value)
	{
		___U3CU3E9__25_10_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_10_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_11_22() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields, ___U3CU3E9__25_11_22)); }
	inline ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * get_U3CU3E9__25_11_22() const { return ___U3CU3E9__25_11_22; }
	inline ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A ** get_address_of_U3CU3E9__25_11_22() { return &___U3CU3E9__25_11_22; }
	inline void set_U3CU3E9__25_11_22(ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * value)
	{
		___U3CU3E9__25_11_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_11_22), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_12_23() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields, ___U3CU3E9__25_12_23)); }
	inline ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * get_U3CU3E9__25_12_23() const { return ___U3CU3E9__25_12_23; }
	inline ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A ** get_address_of_U3CU3E9__25_12_23() { return &___U3CU3E9__25_12_23; }
	inline void set_U3CU3E9__25_12_23(ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * value)
	{
		___U3CU3E9__25_12_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_12_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_13_24() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields, ___U3CU3E9__25_13_24)); }
	inline ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * get_U3CU3E9__25_13_24() const { return ___U3CU3E9__25_13_24; }
	inline ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A ** get_address_of_U3CU3E9__25_13_24() { return &___U3CU3E9__25_13_24; }
	inline void set_U3CU3E9__25_13_24(ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * value)
	{
		___U3CU3E9__25_13_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_13_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__25_14_25() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields, ___U3CU3E9__25_14_25)); }
	inline ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * get_U3CU3E9__25_14_25() const { return ___U3CU3E9__25_14_25; }
	inline ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A ** get_address_of_U3CU3E9__25_14_25() { return &___U3CU3E9__25_14_25; }
	inline void set_U3CU3E9__25_14_25(ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * value)
	{
		___U3CU3E9__25_14_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__25_14_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__32_0_26() { return static_cast<int32_t>(offsetof(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields, ___U3CU3E9__32_0_26)); }
	inline WrapperFactory_tB55CB2530E34938522E06A75C4EDCC9466CCE22F * get_U3CU3E9__32_0_26() const { return ___U3CU3E9__32_0_26; }
	inline WrapperFactory_tB55CB2530E34938522E06A75C4EDCC9466CCE22F ** get_address_of_U3CU3E9__32_0_26() { return &___U3CU3E9__32_0_26; }
	inline void set_U3CU3E9__32_0_26(WrapperFactory_tB55CB2530E34938522E06A75C4EDCC9466CCE22F * value)
	{
		___U3CU3E9__32_0_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__32_0_26), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>
struct  KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E, ___value_1)); }
	inline JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * get_value_1() const { return ___value_1; }
	inline JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// LitJson.ArrayMetadata
struct  ArrayMetadata_t726AFEF81AE4F9C008C85AEFFD8646BB5AE4419D 
{
public:
	// System.Type LitJson.ArrayMetadata::element_type
	Type_t * ___element_type_0;
	// System.Boolean LitJson.ArrayMetadata::is_array
	bool ___is_array_1;
	// System.Boolean LitJson.ArrayMetadata::is_list
	bool ___is_list_2;

public:
	inline static int32_t get_offset_of_element_type_0() { return static_cast<int32_t>(offsetof(ArrayMetadata_t726AFEF81AE4F9C008C85AEFFD8646BB5AE4419D, ___element_type_0)); }
	inline Type_t * get_element_type_0() const { return ___element_type_0; }
	inline Type_t ** get_address_of_element_type_0() { return &___element_type_0; }
	inline void set_element_type_0(Type_t * value)
	{
		___element_type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___element_type_0), (void*)value);
	}

	inline static int32_t get_offset_of_is_array_1() { return static_cast<int32_t>(offsetof(ArrayMetadata_t726AFEF81AE4F9C008C85AEFFD8646BB5AE4419D, ___is_array_1)); }
	inline bool get_is_array_1() const { return ___is_array_1; }
	inline bool* get_address_of_is_array_1() { return &___is_array_1; }
	inline void set_is_array_1(bool value)
	{
		___is_array_1 = value;
	}

	inline static int32_t get_offset_of_is_list_2() { return static_cast<int32_t>(offsetof(ArrayMetadata_t726AFEF81AE4F9C008C85AEFFD8646BB5AE4419D, ___is_list_2)); }
	inline bool get_is_list_2() const { return ___is_list_2; }
	inline bool* get_address_of_is_list_2() { return &___is_list_2; }
	inline void set_is_list_2(bool value)
	{
		___is_list_2 = value;
	}
};

// Native definition for P/Invoke marshalling of LitJson.ArrayMetadata
struct ArrayMetadata_t726AFEF81AE4F9C008C85AEFFD8646BB5AE4419D_marshaled_pinvoke
{
	Type_t * ___element_type_0;
	int32_t ___is_array_1;
	int32_t ___is_list_2;
};
// Native definition for COM marshalling of LitJson.ArrayMetadata
struct ArrayMetadata_t726AFEF81AE4F9C008C85AEFFD8646BB5AE4419D_marshaled_com
{
	Type_t * ___element_type_0;
	int32_t ___is_array_1;
	int32_t ___is_list_2;
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


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.DateTime
struct  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Decimal
struct  Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Collections.DictionaryEntry
struct  DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 
{
public:
	// System.Object System.Collections.DictionaryEntry::_key
	RuntimeObject * ____key_0;
	// System.Object System.Collections.DictionaryEntry::_value
	RuntimeObject * ____value_1;

public:
	inline static int32_t get_offset_of__key_0() { return static_cast<int32_t>(offsetof(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90, ____key_0)); }
	inline RuntimeObject * get__key_0() const { return ____key_0; }
	inline RuntimeObject ** get_address_of__key_0() { return &____key_0; }
	inline void set__key_0(RuntimeObject * value)
	{
		____key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____key_0), (void*)value);
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_marshaled_pinvoke
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};
// Native definition for COM marshalling of System.Collections.DictionaryEntry
struct DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_marshaled_com
{
	Il2CppIUnknown* ____key_0;
	Il2CppIUnknown* ____value_1;
};

// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
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

// System.Int16
struct  Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
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


// LitJson.ObjectMetadata
struct  ObjectMetadata_t486A29F394B76C3325E72E63E48C5B2CFC38F857 
{
public:
	// System.Type LitJson.ObjectMetadata::element_type
	Type_t * ___element_type_0;
	// System.Boolean LitJson.ObjectMetadata::is_dictionary
	bool ___is_dictionary_1;
	// System.Collections.Generic.IDictionary`2<System.String,LitJson.PropertyMetadata> LitJson.ObjectMetadata::properties
	RuntimeObject* ___properties_2;

public:
	inline static int32_t get_offset_of_element_type_0() { return static_cast<int32_t>(offsetof(ObjectMetadata_t486A29F394B76C3325E72E63E48C5B2CFC38F857, ___element_type_0)); }
	inline Type_t * get_element_type_0() const { return ___element_type_0; }
	inline Type_t ** get_address_of_element_type_0() { return &___element_type_0; }
	inline void set_element_type_0(Type_t * value)
	{
		___element_type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___element_type_0), (void*)value);
	}

	inline static int32_t get_offset_of_is_dictionary_1() { return static_cast<int32_t>(offsetof(ObjectMetadata_t486A29F394B76C3325E72E63E48C5B2CFC38F857, ___is_dictionary_1)); }
	inline bool get_is_dictionary_1() const { return ___is_dictionary_1; }
	inline bool* get_address_of_is_dictionary_1() { return &___is_dictionary_1; }
	inline void set_is_dictionary_1(bool value)
	{
		___is_dictionary_1 = value;
	}

	inline static int32_t get_offset_of_properties_2() { return static_cast<int32_t>(offsetof(ObjectMetadata_t486A29F394B76C3325E72E63E48C5B2CFC38F857, ___properties_2)); }
	inline RuntimeObject* get_properties_2() const { return ___properties_2; }
	inline RuntimeObject** get_address_of_properties_2() { return &___properties_2; }
	inline void set_properties_2(RuntimeObject* value)
	{
		___properties_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___properties_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of LitJson.ObjectMetadata
struct ObjectMetadata_t486A29F394B76C3325E72E63E48C5B2CFC38F857_marshaled_pinvoke
{
	Type_t * ___element_type_0;
	int32_t ___is_dictionary_1;
	RuntimeObject* ___properties_2;
};
// Native definition for COM marshalling of LitJson.ObjectMetadata
struct ObjectMetadata_t486A29F394B76C3325E72E63E48C5B2CFC38F857_marshaled_com
{
	Type_t * ___element_type_0;
	int32_t ___is_dictionary_1;
	RuntimeObject* ___properties_2;
};

// LitJson.PropertyMetadata
struct  PropertyMetadata_t7AF284DF793771FFE8EB11C17F3E1AF990EDE525 
{
public:
	// System.Reflection.MemberInfo LitJson.PropertyMetadata::Info
	MemberInfo_t * ___Info_0;
	// System.Boolean LitJson.PropertyMetadata::IsField
	bool ___IsField_1;
	// System.Type LitJson.PropertyMetadata::Type
	Type_t * ___Type_2;

public:
	inline static int32_t get_offset_of_Info_0() { return static_cast<int32_t>(offsetof(PropertyMetadata_t7AF284DF793771FFE8EB11C17F3E1AF990EDE525, ___Info_0)); }
	inline MemberInfo_t * get_Info_0() const { return ___Info_0; }
	inline MemberInfo_t ** get_address_of_Info_0() { return &___Info_0; }
	inline void set_Info_0(MemberInfo_t * value)
	{
		___Info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Info_0), (void*)value);
	}

	inline static int32_t get_offset_of_IsField_1() { return static_cast<int32_t>(offsetof(PropertyMetadata_t7AF284DF793771FFE8EB11C17F3E1AF990EDE525, ___IsField_1)); }
	inline bool get_IsField_1() const { return ___IsField_1; }
	inline bool* get_address_of_IsField_1() { return &___IsField_1; }
	inline void set_IsField_1(bool value)
	{
		___IsField_1 = value;
	}

	inline static int32_t get_offset_of_Type_2() { return static_cast<int32_t>(offsetof(PropertyMetadata_t7AF284DF793771FFE8EB11C17F3E1AF990EDE525, ___Type_2)); }
	inline Type_t * get_Type_2() const { return ___Type_2; }
	inline Type_t ** get_address_of_Type_2() { return &___Type_2; }
	inline void set_Type_2(Type_t * value)
	{
		___Type_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Type_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of LitJson.PropertyMetadata
struct PropertyMetadata_t7AF284DF793771FFE8EB11C17F3E1AF990EDE525_marshaled_pinvoke
{
	MemberInfo_t * ___Info_0;
	int32_t ___IsField_1;
	Type_t * ___Type_2;
};
// Native definition for COM marshalling of LitJson.PropertyMetadata
struct PropertyMetadata_t7AF284DF793771FFE8EB11C17F3E1AF990EDE525_marshaled_com
{
	MemberInfo_t * ___Info_0;
	int32_t ___IsField_1;
	Type_t * ___Type_2;
};

// System.SByte
struct  SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
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


// System.IO.TextReader
struct  TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:

public:
};

struct TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields
{
public:
	// System.Func`2<System.Object,System.String> System.IO.TextReader::_ReadLineDelegate
	Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * ____ReadLineDelegate_1;
	// System.Func`2<System.Object,System.Int32> System.IO.TextReader::_ReadDelegate
	Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * ____ReadDelegate_2;
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___Null_3;

public:
	inline static int32_t get_offset_of__ReadLineDelegate_1() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadLineDelegate_1)); }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * get__ReadLineDelegate_1() const { return ____ReadLineDelegate_1; }
	inline Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 ** get_address_of__ReadLineDelegate_1() { return &____ReadLineDelegate_1; }
	inline void set__ReadLineDelegate_1(Func_2_t060A650AB95DEF14D4F579FA5999ACEFEEE0FD82 * value)
	{
		____ReadLineDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadLineDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of__ReadDelegate_2() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ____ReadDelegate_2)); }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * get__ReadDelegate_2() const { return ____ReadDelegate_2; }
	inline Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C ** get_address_of__ReadDelegate_2() { return &____ReadDelegate_2; }
	inline void set__ReadDelegate_2(Func_2_t0CEE9D1C856153BA9C23BB9D7E929D577AF37A2C * value)
	{
		____ReadDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____ReadDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_Null_3() { return static_cast<int32_t>(offsetof(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F_StaticFields, ___Null_3)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_Null_3() const { return ___Null_3; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_Null_3() { return &___Null_3; }
	inline void set_Null_3(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___Null_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_3), (void*)value);
	}
};


// System.IO.TextWriter
struct  TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___CoreNewLine_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ___Null_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
	}
};


// System.UInt16
struct  UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
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


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=112
struct  __StaticArrayInitTypeSizeU3D112_t72641E978E9C86F5D7890F20B1E1B398E92B3895 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D112_t72641E978E9C86F5D7890F20B1E1B398E92B3895__padding[112];
	};

public:
};


// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12
struct  __StaticArrayInitTypeSizeU3D12_t7047961161CE6DD57FB39E00425E141698B1EF4A 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t7047961161CE6DD57FB39E00425E141698B1EF4A__padding[12];
	};

public:
};


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_tB87B199FE555125F3A639420349ADA6B6B490122  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_tB87B199FE555125F3A639420349ADA6B6B490122_StaticFields
{
public:
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::148E9E3E864CD628C70D3DC1D8309483BD8C0E89
	__StaticArrayInitTypeSizeU3D12_t7047961161CE6DD57FB39E00425E141698B1EF4A  ___148E9E3E864CD628C70D3DC1D8309483BD8C0E89_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=112 <PrivateImplementationDetails>::50B1635D1FB2907A171B71751E1A3FA79423CA17
	__StaticArrayInitTypeSizeU3D112_t72641E978E9C86F5D7890F20B1E1B398E92B3895  ___50B1635D1FB2907A171B71751E1A3FA79423CA17_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::5CF7299F6558A8AC3F821B4F2F65F23798D319D3
	__StaticArrayInitTypeSizeU3D12_t7047961161CE6DD57FB39E00425E141698B1EF4A  ___5CF7299F6558A8AC3F821B4F2F65F23798D319D3_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::AAF72C1002FDBCAE040DAE16A10D82184CE83679
	__StaticArrayInitTypeSizeU3D12_t7047961161CE6DD57FB39E00425E141698B1EF4A  ___AAF72C1002FDBCAE040DAE16A10D82184CE83679_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::B67A7FB4648C62F6A1337CA473436D0E787E8633
	__StaticArrayInitTypeSizeU3D12_t7047961161CE6DD57FB39E00425E141698B1EF4A  ___B67A7FB4648C62F6A1337CA473436D0E787E8633_4;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::C69BF4F300AD2C2E49A8072C2FE6B712FA73EA8F
	__StaticArrayInitTypeSizeU3D12_t7047961161CE6DD57FB39E00425E141698B1EF4A  ___C69BF4F300AD2C2E49A8072C2FE6B712FA73EA8F_5;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=12 <PrivateImplementationDetails>::FAD52931F5B79811D31566BB18B6E0B5D2E2A164
	__StaticArrayInitTypeSizeU3D12_t7047961161CE6DD57FB39E00425E141698B1EF4A  ___FAD52931F5B79811D31566BB18B6E0B5D2E2A164_6;

public:
	inline static int32_t get_offset_of_U3148E9E3E864CD628C70D3DC1D8309483BD8C0E89_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tB87B199FE555125F3A639420349ADA6B6B490122_StaticFields, ___148E9E3E864CD628C70D3DC1D8309483BD8C0E89_0)); }
	inline __StaticArrayInitTypeSizeU3D12_t7047961161CE6DD57FB39E00425E141698B1EF4A  get_U3148E9E3E864CD628C70D3DC1D8309483BD8C0E89_0() const { return ___148E9E3E864CD628C70D3DC1D8309483BD8C0E89_0; }
	inline __StaticArrayInitTypeSizeU3D12_t7047961161CE6DD57FB39E00425E141698B1EF4A * get_address_of_U3148E9E3E864CD628C70D3DC1D8309483BD8C0E89_0() { return &___148E9E3E864CD628C70D3DC1D8309483BD8C0E89_0; }
	inline void set_U3148E9E3E864CD628C70D3DC1D8309483BD8C0E89_0(__StaticArrayInitTypeSizeU3D12_t7047961161CE6DD57FB39E00425E141698B1EF4A  value)
	{
		___148E9E3E864CD628C70D3DC1D8309483BD8C0E89_0 = value;
	}

	inline static int32_t get_offset_of_U350B1635D1FB2907A171B71751E1A3FA79423CA17_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tB87B199FE555125F3A639420349ADA6B6B490122_StaticFields, ___50B1635D1FB2907A171B71751E1A3FA79423CA17_1)); }
	inline __StaticArrayInitTypeSizeU3D112_t72641E978E9C86F5D7890F20B1E1B398E92B3895  get_U350B1635D1FB2907A171B71751E1A3FA79423CA17_1() const { return ___50B1635D1FB2907A171B71751E1A3FA79423CA17_1; }
	inline __StaticArrayInitTypeSizeU3D112_t72641E978E9C86F5D7890F20B1E1B398E92B3895 * get_address_of_U350B1635D1FB2907A171B71751E1A3FA79423CA17_1() { return &___50B1635D1FB2907A171B71751E1A3FA79423CA17_1; }
	inline void set_U350B1635D1FB2907A171B71751E1A3FA79423CA17_1(__StaticArrayInitTypeSizeU3D112_t72641E978E9C86F5D7890F20B1E1B398E92B3895  value)
	{
		___50B1635D1FB2907A171B71751E1A3FA79423CA17_1 = value;
	}

	inline static int32_t get_offset_of_U35CF7299F6558A8AC3F821B4F2F65F23798D319D3_2() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tB87B199FE555125F3A639420349ADA6B6B490122_StaticFields, ___5CF7299F6558A8AC3F821B4F2F65F23798D319D3_2)); }
	inline __StaticArrayInitTypeSizeU3D12_t7047961161CE6DD57FB39E00425E141698B1EF4A  get_U35CF7299F6558A8AC3F821B4F2F65F23798D319D3_2() const { return ___5CF7299F6558A8AC3F821B4F2F65F23798D319D3_2; }
	inline __StaticArrayInitTypeSizeU3D12_t7047961161CE6DD57FB39E00425E141698B1EF4A * get_address_of_U35CF7299F6558A8AC3F821B4F2F65F23798D319D3_2() { return &___5CF7299F6558A8AC3F821B4F2F65F23798D319D3_2; }
	inline void set_U35CF7299F6558A8AC3F821B4F2F65F23798D319D3_2(__StaticArrayInitTypeSizeU3D12_t7047961161CE6DD57FB39E00425E141698B1EF4A  value)
	{
		___5CF7299F6558A8AC3F821B4F2F65F23798D319D3_2 = value;
	}

	inline static int32_t get_offset_of_AAF72C1002FDBCAE040DAE16A10D82184CE83679_3() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tB87B199FE555125F3A639420349ADA6B6B490122_StaticFields, ___AAF72C1002FDBCAE040DAE16A10D82184CE83679_3)); }
	inline __StaticArrayInitTypeSizeU3D12_t7047961161CE6DD57FB39E00425E141698B1EF4A  get_AAF72C1002FDBCAE040DAE16A10D82184CE83679_3() const { return ___AAF72C1002FDBCAE040DAE16A10D82184CE83679_3; }
	inline __StaticArrayInitTypeSizeU3D12_t7047961161CE6DD57FB39E00425E141698B1EF4A * get_address_of_AAF72C1002FDBCAE040DAE16A10D82184CE83679_3() { return &___AAF72C1002FDBCAE040DAE16A10D82184CE83679_3; }
	inline void set_AAF72C1002FDBCAE040DAE16A10D82184CE83679_3(__StaticArrayInitTypeSizeU3D12_t7047961161CE6DD57FB39E00425E141698B1EF4A  value)
	{
		___AAF72C1002FDBCAE040DAE16A10D82184CE83679_3 = value;
	}

	inline static int32_t get_offset_of_B67A7FB4648C62F6A1337CA473436D0E787E8633_4() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tB87B199FE555125F3A639420349ADA6B6B490122_StaticFields, ___B67A7FB4648C62F6A1337CA473436D0E787E8633_4)); }
	inline __StaticArrayInitTypeSizeU3D12_t7047961161CE6DD57FB39E00425E141698B1EF4A  get_B67A7FB4648C62F6A1337CA473436D0E787E8633_4() const { return ___B67A7FB4648C62F6A1337CA473436D0E787E8633_4; }
	inline __StaticArrayInitTypeSizeU3D12_t7047961161CE6DD57FB39E00425E141698B1EF4A * get_address_of_B67A7FB4648C62F6A1337CA473436D0E787E8633_4() { return &___B67A7FB4648C62F6A1337CA473436D0E787E8633_4; }
	inline void set_B67A7FB4648C62F6A1337CA473436D0E787E8633_4(__StaticArrayInitTypeSizeU3D12_t7047961161CE6DD57FB39E00425E141698B1EF4A  value)
	{
		___B67A7FB4648C62F6A1337CA473436D0E787E8633_4 = value;
	}

	inline static int32_t get_offset_of_C69BF4F300AD2C2E49A8072C2FE6B712FA73EA8F_5() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tB87B199FE555125F3A639420349ADA6B6B490122_StaticFields, ___C69BF4F300AD2C2E49A8072C2FE6B712FA73EA8F_5)); }
	inline __StaticArrayInitTypeSizeU3D12_t7047961161CE6DD57FB39E00425E141698B1EF4A  get_C69BF4F300AD2C2E49A8072C2FE6B712FA73EA8F_5() const { return ___C69BF4F300AD2C2E49A8072C2FE6B712FA73EA8F_5; }
	inline __StaticArrayInitTypeSizeU3D12_t7047961161CE6DD57FB39E00425E141698B1EF4A * get_address_of_C69BF4F300AD2C2E49A8072C2FE6B712FA73EA8F_5() { return &___C69BF4F300AD2C2E49A8072C2FE6B712FA73EA8F_5; }
	inline void set_C69BF4F300AD2C2E49A8072C2FE6B712FA73EA8F_5(__StaticArrayInitTypeSizeU3D12_t7047961161CE6DD57FB39E00425E141698B1EF4A  value)
	{
		___C69BF4F300AD2C2E49A8072C2FE6B712FA73EA8F_5 = value;
	}

	inline static int32_t get_offset_of_FAD52931F5B79811D31566BB18B6E0B5D2E2A164_6() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tB87B199FE555125F3A639420349ADA6B6B490122_StaticFields, ___FAD52931F5B79811D31566BB18B6E0B5D2E2A164_6)); }
	inline __StaticArrayInitTypeSizeU3D12_t7047961161CE6DD57FB39E00425E141698B1EF4A  get_FAD52931F5B79811D31566BB18B6E0B5D2E2A164_6() const { return ___FAD52931F5B79811D31566BB18B6E0B5D2E2A164_6; }
	inline __StaticArrayInitTypeSizeU3D12_t7047961161CE6DD57FB39E00425E141698B1EF4A * get_address_of_FAD52931F5B79811D31566BB18B6E0B5D2E2A164_6() { return &___FAD52931F5B79811D31566BB18B6E0B5D2E2A164_6; }
	inline void set_FAD52931F5B79811D31566BB18B6E0B5D2E2A164_6(__StaticArrayInitTypeSizeU3D12_t7047961161CE6DD57FB39E00425E141698B1EF4A  value)
	{
		___FAD52931F5B79811D31566BB18B6E0B5D2E2A164_6 = value;
	}
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


// LitJson.Condition
struct  Condition_t5BB0E931C92533ED05316DE80770A7007CAD66B3 
{
public:
	// System.Int32 LitJson.Condition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Condition_t5BB0E931C92533ED05316DE80770A7007CAD66B3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Globalization.DateTimeFormatFlags
struct  DateTimeFormatFlags_tDB584B32BB07C708469EE8DEF8A903A105B4B4B7 
{
public:
	// System.Int32 System.Globalization.DateTimeFormatFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeFormatFlags_tDB584B32BB07C708469EE8DEF8A903A105B4B4B7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.DateTimeOffset
struct  DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_dateTime_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MaxValue_1 = value;
	}
};


// System.Globalization.DateTimeStyles
struct  DateTimeStyles_t2E18E2817B83F518AD684A16EB44A96EE6E765D4 
{
public:
	// System.Int32 System.Globalization.DateTimeStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeStyles_t2E18E2817B83F518AD684A16EB44A96EE6E765D4, ___value___2)); }
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

// LitJson.JsonToken
struct  JsonToken_tFF7C1522EE35C0DA7373BD76042FAC6555919C64 
{
public:
	// System.Int32 LitJson.JsonToken::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonToken_tFF7C1522EE35C0DA7373BD76042FAC6555919C64, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LitJson.JsonType
struct  JsonType_t50E9AA7E565C83429308D9603A910803E289F2BC 
{
public:
	// System.Int32 LitJson.JsonType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonType_t50E9AA7E565C83429308D9603A910803E289F2BC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Globalization.NumberStyles
struct  NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594 
{
public:
	// System.Int32 System.Globalization.NumberStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NumberStyles_t379EFBF2535E1C950DEC8042704BB663BF636594, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// LitJson.ParserToken
struct  ParserToken_t3B28DE2638004DACF58EE90B7E2DF0F3426DE7E0 
{
public:
	// System.Int32 LitJson.ParserToken::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParserToken_t3B28DE2638004DACF58EE90B7E2DF0F3426DE7E0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
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


// System.IO.StringReader
struct  StringReader_t74E352C280EAC22C878867444978741F19E1F895  : public TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F
{
public:
	// System.String System.IO.StringReader::_s
	String_t* ____s_4;
	// System.Int32 System.IO.StringReader::_pos
	int32_t ____pos_5;
	// System.Int32 System.IO.StringReader::_length
	int32_t ____length_6;

public:
	inline static int32_t get_offset_of__s_4() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____s_4)); }
	inline String_t* get__s_4() const { return ____s_4; }
	inline String_t** get_address_of__s_4() { return &____s_4; }
	inline void set__s_4(String_t* value)
	{
		____s_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____s_4), (void*)value);
	}

	inline static int32_t get_offset_of__pos_5() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____pos_5)); }
	inline int32_t get__pos_5() const { return ____pos_5; }
	inline int32_t* get_address_of__pos_5() { return &____pos_5; }
	inline void set__pos_5(int32_t value)
	{
		____pos_5 = value;
	}

	inline static int32_t get_offset_of__length_6() { return static_cast<int32_t>(offsetof(StringReader_t74E352C280EAC22C878867444978741F19E1F895, ____length_6)); }
	inline int32_t get__length_6() const { return ____length_6; }
	inline int32_t* get_address_of__length_6() { return &____length_6; }
	inline void set__length_6(int32_t value)
	{
		____length_6 = value;
	}
};


// System.IO.StringWriter
struct  StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839  : public TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643
{
public:
	// System.Text.StringBuilder System.IO.StringWriter::_sb
	StringBuilder_t * ____sb_12;
	// System.Boolean System.IO.StringWriter::_isOpen
	bool ____isOpen_13;

public:
	inline static int32_t get_offset_of__sb_12() { return static_cast<int32_t>(offsetof(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839, ____sb_12)); }
	inline StringBuilder_t * get__sb_12() const { return ____sb_12; }
	inline StringBuilder_t ** get_address_of__sb_12() { return &____sb_12; }
	inline void set__sb_12(StringBuilder_t * value)
	{
		____sb_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sb_12), (void*)value);
	}

	inline static int32_t get_offset_of__isOpen_13() { return static_cast<int32_t>(offsetof(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839, ____isOpen_13)); }
	inline bool get__isOpen_13() const { return ____isOpen_13; }
	inline bool* get_address_of__isOpen_13() { return &____isOpen_13; }
	inline void set__isOpen_13(bool value)
	{
		____isOpen_13 = value;
	}
};

struct StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_StaticFields
{
public:
	// System.Text.UnicodeEncoding modreq(System.Runtime.CompilerServices.IsVolatile) System.IO.StringWriter::m_encoding
	UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * ___m_encoding_11;

public:
	inline static int32_t get_offset_of_m_encoding_11() { return static_cast<int32_t>(offsetof(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_StaticFields, ___m_encoding_11)); }
	inline UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * get_m_encoding_11() const { return ___m_encoding_11; }
	inline UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 ** get_address_of_m_encoding_11() { return &___m_encoding_11; }
	inline void set_m_encoding_11(UnicodeEncoding_tBB60B97AFC49D6246F28BF16D3E09822FCCACC68 * value)
	{
		___m_encoding_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_encoding_11), (void*)value);
	}
};


// System.ApplicationException
struct  ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407  : public Exception_t
{
public:

public:
};


// System.Globalization.DateTimeFormatInfo
struct  DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90  : public RuntimeObject
{
public:
	// System.Globalization.CultureData System.Globalization.DateTimeFormatInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_1;
	// System.String System.Globalization.DateTimeFormatInfo::m_name
	String_t* ___m_name_2;
	// System.String System.Globalization.DateTimeFormatInfo::m_langName
	String_t* ___m_langName_3;
	// System.Globalization.CompareInfo System.Globalization.DateTimeFormatInfo::m_compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___m_compareInfo_4;
	// System.Globalization.CultureInfo System.Globalization.DateTimeFormatInfo::m_cultureInfo
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___m_cultureInfo_5;
	// System.String System.Globalization.DateTimeFormatInfo::amDesignator
	String_t* ___amDesignator_6;
	// System.String System.Globalization.DateTimeFormatInfo::pmDesignator
	String_t* ___pmDesignator_7;
	// System.String System.Globalization.DateTimeFormatInfo::dateSeparator
	String_t* ___dateSeparator_8;
	// System.String System.Globalization.DateTimeFormatInfo::generalShortTimePattern
	String_t* ___generalShortTimePattern_9;
	// System.String System.Globalization.DateTimeFormatInfo::generalLongTimePattern
	String_t* ___generalLongTimePattern_10;
	// System.String System.Globalization.DateTimeFormatInfo::timeSeparator
	String_t* ___timeSeparator_11;
	// System.String System.Globalization.DateTimeFormatInfo::monthDayPattern
	String_t* ___monthDayPattern_12;
	// System.String System.Globalization.DateTimeFormatInfo::dateTimeOffsetPattern
	String_t* ___dateTimeOffsetPattern_13;
	// System.Globalization.Calendar System.Globalization.DateTimeFormatInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_17;
	// System.Int32 System.Globalization.DateTimeFormatInfo::firstDayOfWeek
	int32_t ___firstDayOfWeek_18;
	// System.Int32 System.Globalization.DateTimeFormatInfo::calendarWeekRule
	int32_t ___calendarWeekRule_19;
	// System.String System.Globalization.DateTimeFormatInfo::fullDateTimePattern
	String_t* ___fullDateTimePattern_20;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedDayNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___abbreviatedDayNames_21;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_superShortDayNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_superShortDayNames_22;
	// System.String[] System.Globalization.DateTimeFormatInfo::dayNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___dayNames_23;
	// System.String[] System.Globalization.DateTimeFormatInfo::abbreviatedMonthNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___abbreviatedMonthNames_24;
	// System.String[] System.Globalization.DateTimeFormatInfo::monthNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___monthNames_25;
	// System.String[] System.Globalization.DateTimeFormatInfo::genitiveMonthNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___genitiveMonthNames_26;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_genitiveAbbreviatedMonthNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_genitiveAbbreviatedMonthNames_27;
	// System.String[] System.Globalization.DateTimeFormatInfo::leapYearMonthNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___leapYearMonthNames_28;
	// System.String System.Globalization.DateTimeFormatInfo::longDatePattern
	String_t* ___longDatePattern_29;
	// System.String System.Globalization.DateTimeFormatInfo::shortDatePattern
	String_t* ___shortDatePattern_30;
	// System.String System.Globalization.DateTimeFormatInfo::yearMonthPattern
	String_t* ___yearMonthPattern_31;
	// System.String System.Globalization.DateTimeFormatInfo::longTimePattern
	String_t* ___longTimePattern_32;
	// System.String System.Globalization.DateTimeFormatInfo::shortTimePattern
	String_t* ___shortTimePattern_33;
	// System.String[] System.Globalization.DateTimeFormatInfo::allYearMonthPatterns
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___allYearMonthPatterns_34;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortDatePatterns
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___allShortDatePatterns_35;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongDatePatterns
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___allLongDatePatterns_36;
	// System.String[] System.Globalization.DateTimeFormatInfo::allShortTimePatterns
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___allShortTimePatterns_37;
	// System.String[] System.Globalization.DateTimeFormatInfo::allLongTimePatterns
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___allLongTimePatterns_38;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_eraNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_eraNames_39;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEraNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_abbrevEraNames_40;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_abbrevEnglishEraNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_abbrevEnglishEraNames_41;
	// System.Int32[] System.Globalization.DateTimeFormatInfo::optionalCalendars
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___optionalCalendars_42;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isReadOnly
	bool ___m_isReadOnly_44;
	// System.Globalization.DateTimeFormatFlags System.Globalization.DateTimeFormatInfo::formatFlags
	int32_t ___formatFlags_45;
	// System.Int32 System.Globalization.DateTimeFormatInfo::CultureID
	int32_t ___CultureID_47;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_48;
	// System.Boolean System.Globalization.DateTimeFormatInfo::bUseCalendarInfo
	bool ___bUseCalendarInfo_49;
	// System.Int32 System.Globalization.DateTimeFormatInfo::nDataItem
	int32_t ___nDataItem_50;
	// System.Boolean System.Globalization.DateTimeFormatInfo::m_isDefaultCalendar
	bool ___m_isDefaultCalendar_51;
	// System.String[] System.Globalization.DateTimeFormatInfo::m_dateWords
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___m_dateWords_53;
	// System.String System.Globalization.DateTimeFormatInfo::m_fullTimeSpanPositivePattern
	String_t* ___m_fullTimeSpanPositivePattern_54;
	// System.String System.Globalization.DateTimeFormatInfo::m_fullTimeSpanNegativePattern
	String_t* ___m_fullTimeSpanNegativePattern_55;
	// System.Globalization.TokenHashValue[] System.Globalization.DateTimeFormatInfo::m_dtfiTokenHash
	TokenHashValueU5BU5D_t9A8634CBD651EB5F814E7CF9819D44963D8546D3* ___m_dtfiTokenHash_57;

public:
	inline static int32_t get_offset_of_m_cultureData_1() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_cultureData_1)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_1() const { return ___m_cultureData_1; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_1() { return &___m_cultureData_1; }
	inline void set_m_cultureData_1(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_2() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_name_2)); }
	inline String_t* get_m_name_2() const { return ___m_name_2; }
	inline String_t** get_address_of_m_name_2() { return &___m_name_2; }
	inline void set_m_name_2(String_t* value)
	{
		___m_name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_langName_3() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_langName_3)); }
	inline String_t* get_m_langName_3() const { return ___m_langName_3; }
	inline String_t** get_address_of_m_langName_3() { return &___m_langName_3; }
	inline void set_m_langName_3(String_t* value)
	{
		___m_langName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_langName_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_compareInfo_4() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_compareInfo_4)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_m_compareInfo_4() const { return ___m_compareInfo_4; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_m_compareInfo_4() { return &___m_compareInfo_4; }
	inline void set_m_compareInfo_4(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___m_compareInfo_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_compareInfo_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureInfo_5() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_cultureInfo_5)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_m_cultureInfo_5() const { return ___m_cultureInfo_5; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_m_cultureInfo_5() { return &___m_cultureInfo_5; }
	inline void set_m_cultureInfo_5(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___m_cultureInfo_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureInfo_5), (void*)value);
	}

	inline static int32_t get_offset_of_amDesignator_6() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___amDesignator_6)); }
	inline String_t* get_amDesignator_6() const { return ___amDesignator_6; }
	inline String_t** get_address_of_amDesignator_6() { return &___amDesignator_6; }
	inline void set_amDesignator_6(String_t* value)
	{
		___amDesignator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___amDesignator_6), (void*)value);
	}

	inline static int32_t get_offset_of_pmDesignator_7() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___pmDesignator_7)); }
	inline String_t* get_pmDesignator_7() const { return ___pmDesignator_7; }
	inline String_t** get_address_of_pmDesignator_7() { return &___pmDesignator_7; }
	inline void set_pmDesignator_7(String_t* value)
	{
		___pmDesignator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pmDesignator_7), (void*)value);
	}

	inline static int32_t get_offset_of_dateSeparator_8() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___dateSeparator_8)); }
	inline String_t* get_dateSeparator_8() const { return ___dateSeparator_8; }
	inline String_t** get_address_of_dateSeparator_8() { return &___dateSeparator_8; }
	inline void set_dateSeparator_8(String_t* value)
	{
		___dateSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateSeparator_8), (void*)value);
	}

	inline static int32_t get_offset_of_generalShortTimePattern_9() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___generalShortTimePattern_9)); }
	inline String_t* get_generalShortTimePattern_9() const { return ___generalShortTimePattern_9; }
	inline String_t** get_address_of_generalShortTimePattern_9() { return &___generalShortTimePattern_9; }
	inline void set_generalShortTimePattern_9(String_t* value)
	{
		___generalShortTimePattern_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___generalShortTimePattern_9), (void*)value);
	}

	inline static int32_t get_offset_of_generalLongTimePattern_10() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___generalLongTimePattern_10)); }
	inline String_t* get_generalLongTimePattern_10() const { return ___generalLongTimePattern_10; }
	inline String_t** get_address_of_generalLongTimePattern_10() { return &___generalLongTimePattern_10; }
	inline void set_generalLongTimePattern_10(String_t* value)
	{
		___generalLongTimePattern_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___generalLongTimePattern_10), (void*)value);
	}

	inline static int32_t get_offset_of_timeSeparator_11() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___timeSeparator_11)); }
	inline String_t* get_timeSeparator_11() const { return ___timeSeparator_11; }
	inline String_t** get_address_of_timeSeparator_11() { return &___timeSeparator_11; }
	inline void set_timeSeparator_11(String_t* value)
	{
		___timeSeparator_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timeSeparator_11), (void*)value);
	}

	inline static int32_t get_offset_of_monthDayPattern_12() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___monthDayPattern_12)); }
	inline String_t* get_monthDayPattern_12() const { return ___monthDayPattern_12; }
	inline String_t** get_address_of_monthDayPattern_12() { return &___monthDayPattern_12; }
	inline void set_monthDayPattern_12(String_t* value)
	{
		___monthDayPattern_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monthDayPattern_12), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeOffsetPattern_13() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___dateTimeOffsetPattern_13)); }
	inline String_t* get_dateTimeOffsetPattern_13() const { return ___dateTimeOffsetPattern_13; }
	inline String_t** get_address_of_dateTimeOffsetPattern_13() { return &___dateTimeOffsetPattern_13; }
	inline void set_dateTimeOffsetPattern_13(String_t* value)
	{
		___dateTimeOffsetPattern_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeOffsetPattern_13), (void*)value);
	}

	inline static int32_t get_offset_of_calendar_17() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___calendar_17)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_17() const { return ___calendar_17; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_17() { return &___calendar_17; }
	inline void set_calendar_17(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_17), (void*)value);
	}

	inline static int32_t get_offset_of_firstDayOfWeek_18() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___firstDayOfWeek_18)); }
	inline int32_t get_firstDayOfWeek_18() const { return ___firstDayOfWeek_18; }
	inline int32_t* get_address_of_firstDayOfWeek_18() { return &___firstDayOfWeek_18; }
	inline void set_firstDayOfWeek_18(int32_t value)
	{
		___firstDayOfWeek_18 = value;
	}

	inline static int32_t get_offset_of_calendarWeekRule_19() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___calendarWeekRule_19)); }
	inline int32_t get_calendarWeekRule_19() const { return ___calendarWeekRule_19; }
	inline int32_t* get_address_of_calendarWeekRule_19() { return &___calendarWeekRule_19; }
	inline void set_calendarWeekRule_19(int32_t value)
	{
		___calendarWeekRule_19 = value;
	}

	inline static int32_t get_offset_of_fullDateTimePattern_20() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___fullDateTimePattern_20)); }
	inline String_t* get_fullDateTimePattern_20() const { return ___fullDateTimePattern_20; }
	inline String_t** get_address_of_fullDateTimePattern_20() { return &___fullDateTimePattern_20; }
	inline void set_fullDateTimePattern_20(String_t* value)
	{
		___fullDateTimePattern_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fullDateTimePattern_20), (void*)value);
	}

	inline static int32_t get_offset_of_abbreviatedDayNames_21() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___abbreviatedDayNames_21)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_abbreviatedDayNames_21() const { return ___abbreviatedDayNames_21; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_abbreviatedDayNames_21() { return &___abbreviatedDayNames_21; }
	inline void set_abbreviatedDayNames_21(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___abbreviatedDayNames_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___abbreviatedDayNames_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_superShortDayNames_22() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_superShortDayNames_22)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_superShortDayNames_22() const { return ___m_superShortDayNames_22; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_superShortDayNames_22() { return &___m_superShortDayNames_22; }
	inline void set_m_superShortDayNames_22(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_superShortDayNames_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_superShortDayNames_22), (void*)value);
	}

	inline static int32_t get_offset_of_dayNames_23() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___dayNames_23)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_dayNames_23() const { return ___dayNames_23; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_dayNames_23() { return &___dayNames_23; }
	inline void set_dayNames_23(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___dayNames_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dayNames_23), (void*)value);
	}

	inline static int32_t get_offset_of_abbreviatedMonthNames_24() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___abbreviatedMonthNames_24)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_abbreviatedMonthNames_24() const { return ___abbreviatedMonthNames_24; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_abbreviatedMonthNames_24() { return &___abbreviatedMonthNames_24; }
	inline void set_abbreviatedMonthNames_24(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___abbreviatedMonthNames_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___abbreviatedMonthNames_24), (void*)value);
	}

	inline static int32_t get_offset_of_monthNames_25() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___monthNames_25)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_monthNames_25() const { return ___monthNames_25; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_monthNames_25() { return &___monthNames_25; }
	inline void set_monthNames_25(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___monthNames_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monthNames_25), (void*)value);
	}

	inline static int32_t get_offset_of_genitiveMonthNames_26() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___genitiveMonthNames_26)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_genitiveMonthNames_26() const { return ___genitiveMonthNames_26; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_genitiveMonthNames_26() { return &___genitiveMonthNames_26; }
	inline void set_genitiveMonthNames_26(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___genitiveMonthNames_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___genitiveMonthNames_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_genitiveAbbreviatedMonthNames_27() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_genitiveAbbreviatedMonthNames_27)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_genitiveAbbreviatedMonthNames_27() const { return ___m_genitiveAbbreviatedMonthNames_27; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_genitiveAbbreviatedMonthNames_27() { return &___m_genitiveAbbreviatedMonthNames_27; }
	inline void set_m_genitiveAbbreviatedMonthNames_27(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_genitiveAbbreviatedMonthNames_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_genitiveAbbreviatedMonthNames_27), (void*)value);
	}

	inline static int32_t get_offset_of_leapYearMonthNames_28() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___leapYearMonthNames_28)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_leapYearMonthNames_28() const { return ___leapYearMonthNames_28; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_leapYearMonthNames_28() { return &___leapYearMonthNames_28; }
	inline void set_leapYearMonthNames_28(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___leapYearMonthNames_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___leapYearMonthNames_28), (void*)value);
	}

	inline static int32_t get_offset_of_longDatePattern_29() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___longDatePattern_29)); }
	inline String_t* get_longDatePattern_29() const { return ___longDatePattern_29; }
	inline String_t** get_address_of_longDatePattern_29() { return &___longDatePattern_29; }
	inline void set_longDatePattern_29(String_t* value)
	{
		___longDatePattern_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___longDatePattern_29), (void*)value);
	}

	inline static int32_t get_offset_of_shortDatePattern_30() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___shortDatePattern_30)); }
	inline String_t* get_shortDatePattern_30() const { return ___shortDatePattern_30; }
	inline String_t** get_address_of_shortDatePattern_30() { return &___shortDatePattern_30; }
	inline void set_shortDatePattern_30(String_t* value)
	{
		___shortDatePattern_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shortDatePattern_30), (void*)value);
	}

	inline static int32_t get_offset_of_yearMonthPattern_31() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___yearMonthPattern_31)); }
	inline String_t* get_yearMonthPattern_31() const { return ___yearMonthPattern_31; }
	inline String_t** get_address_of_yearMonthPattern_31() { return &___yearMonthPattern_31; }
	inline void set_yearMonthPattern_31(String_t* value)
	{
		___yearMonthPattern_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___yearMonthPattern_31), (void*)value);
	}

	inline static int32_t get_offset_of_longTimePattern_32() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___longTimePattern_32)); }
	inline String_t* get_longTimePattern_32() const { return ___longTimePattern_32; }
	inline String_t** get_address_of_longTimePattern_32() { return &___longTimePattern_32; }
	inline void set_longTimePattern_32(String_t* value)
	{
		___longTimePattern_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___longTimePattern_32), (void*)value);
	}

	inline static int32_t get_offset_of_shortTimePattern_33() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___shortTimePattern_33)); }
	inline String_t* get_shortTimePattern_33() const { return ___shortTimePattern_33; }
	inline String_t** get_address_of_shortTimePattern_33() { return &___shortTimePattern_33; }
	inline void set_shortTimePattern_33(String_t* value)
	{
		___shortTimePattern_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shortTimePattern_33), (void*)value);
	}

	inline static int32_t get_offset_of_allYearMonthPatterns_34() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___allYearMonthPatterns_34)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_allYearMonthPatterns_34() const { return ___allYearMonthPatterns_34; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_allYearMonthPatterns_34() { return &___allYearMonthPatterns_34; }
	inline void set_allYearMonthPatterns_34(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___allYearMonthPatterns_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allYearMonthPatterns_34), (void*)value);
	}

	inline static int32_t get_offset_of_allShortDatePatterns_35() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___allShortDatePatterns_35)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_allShortDatePatterns_35() const { return ___allShortDatePatterns_35; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_allShortDatePatterns_35() { return &___allShortDatePatterns_35; }
	inline void set_allShortDatePatterns_35(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___allShortDatePatterns_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allShortDatePatterns_35), (void*)value);
	}

	inline static int32_t get_offset_of_allLongDatePatterns_36() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___allLongDatePatterns_36)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_allLongDatePatterns_36() const { return ___allLongDatePatterns_36; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_allLongDatePatterns_36() { return &___allLongDatePatterns_36; }
	inline void set_allLongDatePatterns_36(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___allLongDatePatterns_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allLongDatePatterns_36), (void*)value);
	}

	inline static int32_t get_offset_of_allShortTimePatterns_37() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___allShortTimePatterns_37)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_allShortTimePatterns_37() const { return ___allShortTimePatterns_37; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_allShortTimePatterns_37() { return &___allShortTimePatterns_37; }
	inline void set_allShortTimePatterns_37(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___allShortTimePatterns_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allShortTimePatterns_37), (void*)value);
	}

	inline static int32_t get_offset_of_allLongTimePatterns_38() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___allLongTimePatterns_38)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_allLongTimePatterns_38() const { return ___allLongTimePatterns_38; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_allLongTimePatterns_38() { return &___allLongTimePatterns_38; }
	inline void set_allLongTimePatterns_38(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___allLongTimePatterns_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___allLongTimePatterns_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_eraNames_39() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_eraNames_39)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_eraNames_39() const { return ___m_eraNames_39; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_eraNames_39() { return &___m_eraNames_39; }
	inline void set_m_eraNames_39(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_eraNames_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_eraNames_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_abbrevEraNames_40() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_abbrevEraNames_40)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_abbrevEraNames_40() const { return ___m_abbrevEraNames_40; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_abbrevEraNames_40() { return &___m_abbrevEraNames_40; }
	inline void set_m_abbrevEraNames_40(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_abbrevEraNames_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_abbrevEraNames_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_abbrevEnglishEraNames_41() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_abbrevEnglishEraNames_41)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_abbrevEnglishEraNames_41() const { return ___m_abbrevEnglishEraNames_41; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_abbrevEnglishEraNames_41() { return &___m_abbrevEnglishEraNames_41; }
	inline void set_m_abbrevEnglishEraNames_41(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_abbrevEnglishEraNames_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_abbrevEnglishEraNames_41), (void*)value);
	}

	inline static int32_t get_offset_of_optionalCalendars_42() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___optionalCalendars_42)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_optionalCalendars_42() const { return ___optionalCalendars_42; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_optionalCalendars_42() { return &___optionalCalendars_42; }
	inline void set_optionalCalendars_42(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___optionalCalendars_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___optionalCalendars_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_isReadOnly_44() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_isReadOnly_44)); }
	inline bool get_m_isReadOnly_44() const { return ___m_isReadOnly_44; }
	inline bool* get_address_of_m_isReadOnly_44() { return &___m_isReadOnly_44; }
	inline void set_m_isReadOnly_44(bool value)
	{
		___m_isReadOnly_44 = value;
	}

	inline static int32_t get_offset_of_formatFlags_45() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___formatFlags_45)); }
	inline int32_t get_formatFlags_45() const { return ___formatFlags_45; }
	inline int32_t* get_address_of_formatFlags_45() { return &___formatFlags_45; }
	inline void set_formatFlags_45(int32_t value)
	{
		___formatFlags_45 = value;
	}

	inline static int32_t get_offset_of_CultureID_47() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___CultureID_47)); }
	inline int32_t get_CultureID_47() const { return ___CultureID_47; }
	inline int32_t* get_address_of_CultureID_47() { return &___CultureID_47; }
	inline void set_CultureID_47(int32_t value)
	{
		___CultureID_47 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_48() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_useUserOverride_48)); }
	inline bool get_m_useUserOverride_48() const { return ___m_useUserOverride_48; }
	inline bool* get_address_of_m_useUserOverride_48() { return &___m_useUserOverride_48; }
	inline void set_m_useUserOverride_48(bool value)
	{
		___m_useUserOverride_48 = value;
	}

	inline static int32_t get_offset_of_bUseCalendarInfo_49() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___bUseCalendarInfo_49)); }
	inline bool get_bUseCalendarInfo_49() const { return ___bUseCalendarInfo_49; }
	inline bool* get_address_of_bUseCalendarInfo_49() { return &___bUseCalendarInfo_49; }
	inline void set_bUseCalendarInfo_49(bool value)
	{
		___bUseCalendarInfo_49 = value;
	}

	inline static int32_t get_offset_of_nDataItem_50() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___nDataItem_50)); }
	inline int32_t get_nDataItem_50() const { return ___nDataItem_50; }
	inline int32_t* get_address_of_nDataItem_50() { return &___nDataItem_50; }
	inline void set_nDataItem_50(int32_t value)
	{
		___nDataItem_50 = value;
	}

	inline static int32_t get_offset_of_m_isDefaultCalendar_51() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_isDefaultCalendar_51)); }
	inline bool get_m_isDefaultCalendar_51() const { return ___m_isDefaultCalendar_51; }
	inline bool* get_address_of_m_isDefaultCalendar_51() { return &___m_isDefaultCalendar_51; }
	inline void set_m_isDefaultCalendar_51(bool value)
	{
		___m_isDefaultCalendar_51 = value;
	}

	inline static int32_t get_offset_of_m_dateWords_53() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_dateWords_53)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_m_dateWords_53() const { return ___m_dateWords_53; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_m_dateWords_53() { return &___m_dateWords_53; }
	inline void set_m_dateWords_53(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___m_dateWords_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_dateWords_53), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTimeSpanPositivePattern_54() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_fullTimeSpanPositivePattern_54)); }
	inline String_t* get_m_fullTimeSpanPositivePattern_54() const { return ___m_fullTimeSpanPositivePattern_54; }
	inline String_t** get_address_of_m_fullTimeSpanPositivePattern_54() { return &___m_fullTimeSpanPositivePattern_54; }
	inline void set_m_fullTimeSpanPositivePattern_54(String_t* value)
	{
		___m_fullTimeSpanPositivePattern_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTimeSpanPositivePattern_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_fullTimeSpanNegativePattern_55() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_fullTimeSpanNegativePattern_55)); }
	inline String_t* get_m_fullTimeSpanNegativePattern_55() const { return ___m_fullTimeSpanNegativePattern_55; }
	inline String_t** get_address_of_m_fullTimeSpanNegativePattern_55() { return &___m_fullTimeSpanNegativePattern_55; }
	inline void set_m_fullTimeSpanNegativePattern_55(String_t* value)
	{
		___m_fullTimeSpanNegativePattern_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fullTimeSpanNegativePattern_55), (void*)value);
	}

	inline static int32_t get_offset_of_m_dtfiTokenHash_57() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90, ___m_dtfiTokenHash_57)); }
	inline TokenHashValueU5BU5D_t9A8634CBD651EB5F814E7CF9819D44963D8546D3* get_m_dtfiTokenHash_57() const { return ___m_dtfiTokenHash_57; }
	inline TokenHashValueU5BU5D_t9A8634CBD651EB5F814E7CF9819D44963D8546D3** get_address_of_m_dtfiTokenHash_57() { return &___m_dtfiTokenHash_57; }
	inline void set_m_dtfiTokenHash_57(TokenHashValueU5BU5D_t9A8634CBD651EB5F814E7CF9819D44963D8546D3* value)
	{
		___m_dtfiTokenHash_57 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_dtfiTokenHash_57), (void*)value);
	}
};

struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_StaticFields
{
public:
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::invariantInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___invariantInfo_0;
	// System.Boolean System.Globalization.DateTimeFormatInfo::preferExistingTokens
	bool ___preferExistingTokens_46;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_calendarNativeNames
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___s_calendarNativeNames_52;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_jajpDTFI
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___s_jajpDTFI_82;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.DateTimeFormatInfo::s_zhtwDTFI
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___s_zhtwDTFI_83;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_StaticFields, ___invariantInfo_0)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariantInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_preferExistingTokens_46() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_StaticFields, ___preferExistingTokens_46)); }
	inline bool get_preferExistingTokens_46() const { return ___preferExistingTokens_46; }
	inline bool* get_address_of_preferExistingTokens_46() { return &___preferExistingTokens_46; }
	inline void set_preferExistingTokens_46(bool value)
	{
		___preferExistingTokens_46 = value;
	}

	inline static int32_t get_offset_of_s_calendarNativeNames_52() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_StaticFields, ___s_calendarNativeNames_52)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_s_calendarNativeNames_52() const { return ___s_calendarNativeNames_52; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_s_calendarNativeNames_52() { return &___s_calendarNativeNames_52; }
	inline void set_s_calendarNativeNames_52(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___s_calendarNativeNames_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_calendarNativeNames_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_jajpDTFI_82() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_StaticFields, ___s_jajpDTFI_82)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_s_jajpDTFI_82() const { return ___s_jajpDTFI_82; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_s_jajpDTFI_82() { return &___s_jajpDTFI_82; }
	inline void set_s_jajpDTFI_82(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___s_jajpDTFI_82 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_jajpDTFI_82), (void*)value);
	}

	inline static int32_t get_offset_of_s_zhtwDTFI_83() { return static_cast<int32_t>(offsetof(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_StaticFields, ___s_zhtwDTFI_83)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_s_zhtwDTFI_83() const { return ___s_zhtwDTFI_83; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_s_zhtwDTFI_83() { return &___s_zhtwDTFI_83; }
	inline void set_s_zhtwDTFI_83(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___s_zhtwDTFI_83 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_zhtwDTFI_83), (void*)value);
	}
};


// LitJson.JsonData
struct  JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<LitJson.JsonData> LitJson.JsonData::inst_array
	RuntimeObject* ___inst_array_0;
	// System.Boolean LitJson.JsonData::inst_boolean
	bool ___inst_boolean_1;
	// System.Double LitJson.JsonData::inst_double
	double ___inst_double_2;
	// System.Int32 LitJson.JsonData::inst_int
	int32_t ___inst_int_3;
	// System.Int64 LitJson.JsonData::inst_long
	int64_t ___inst_long_4;
	// System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData> LitJson.JsonData::inst_object
	RuntimeObject* ___inst_object_5;
	// System.String LitJson.JsonData::inst_string
	String_t* ___inst_string_6;
	// System.String LitJson.JsonData::json
	String_t* ___json_7;
	// LitJson.JsonType LitJson.JsonData::type
	int32_t ___type_8;
	// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>> LitJson.JsonData::object_list
	RuntimeObject* ___object_list_9;

public:
	inline static int32_t get_offset_of_inst_array_0() { return static_cast<int32_t>(offsetof(JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22, ___inst_array_0)); }
	inline RuntimeObject* get_inst_array_0() const { return ___inst_array_0; }
	inline RuntimeObject** get_address_of_inst_array_0() { return &___inst_array_0; }
	inline void set_inst_array_0(RuntimeObject* value)
	{
		___inst_array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inst_array_0), (void*)value);
	}

	inline static int32_t get_offset_of_inst_boolean_1() { return static_cast<int32_t>(offsetof(JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22, ___inst_boolean_1)); }
	inline bool get_inst_boolean_1() const { return ___inst_boolean_1; }
	inline bool* get_address_of_inst_boolean_1() { return &___inst_boolean_1; }
	inline void set_inst_boolean_1(bool value)
	{
		___inst_boolean_1 = value;
	}

	inline static int32_t get_offset_of_inst_double_2() { return static_cast<int32_t>(offsetof(JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22, ___inst_double_2)); }
	inline double get_inst_double_2() const { return ___inst_double_2; }
	inline double* get_address_of_inst_double_2() { return &___inst_double_2; }
	inline void set_inst_double_2(double value)
	{
		___inst_double_2 = value;
	}

	inline static int32_t get_offset_of_inst_int_3() { return static_cast<int32_t>(offsetof(JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22, ___inst_int_3)); }
	inline int32_t get_inst_int_3() const { return ___inst_int_3; }
	inline int32_t* get_address_of_inst_int_3() { return &___inst_int_3; }
	inline void set_inst_int_3(int32_t value)
	{
		___inst_int_3 = value;
	}

	inline static int32_t get_offset_of_inst_long_4() { return static_cast<int32_t>(offsetof(JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22, ___inst_long_4)); }
	inline int64_t get_inst_long_4() const { return ___inst_long_4; }
	inline int64_t* get_address_of_inst_long_4() { return &___inst_long_4; }
	inline void set_inst_long_4(int64_t value)
	{
		___inst_long_4 = value;
	}

	inline static int32_t get_offset_of_inst_object_5() { return static_cast<int32_t>(offsetof(JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22, ___inst_object_5)); }
	inline RuntimeObject* get_inst_object_5() const { return ___inst_object_5; }
	inline RuntimeObject** get_address_of_inst_object_5() { return &___inst_object_5; }
	inline void set_inst_object_5(RuntimeObject* value)
	{
		___inst_object_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inst_object_5), (void*)value);
	}

	inline static int32_t get_offset_of_inst_string_6() { return static_cast<int32_t>(offsetof(JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22, ___inst_string_6)); }
	inline String_t* get_inst_string_6() const { return ___inst_string_6; }
	inline String_t** get_address_of_inst_string_6() { return &___inst_string_6; }
	inline void set_inst_string_6(String_t* value)
	{
		___inst_string_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inst_string_6), (void*)value);
	}

	inline static int32_t get_offset_of_json_7() { return static_cast<int32_t>(offsetof(JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22, ___json_7)); }
	inline String_t* get_json_7() const { return ___json_7; }
	inline String_t** get_address_of_json_7() { return &___json_7; }
	inline void set_json_7(String_t* value)
	{
		___json_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___json_7), (void*)value);
	}

	inline static int32_t get_offset_of_type_8() { return static_cast<int32_t>(offsetof(JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22, ___type_8)); }
	inline int32_t get_type_8() const { return ___type_8; }
	inline int32_t* get_address_of_type_8() { return &___type_8; }
	inline void set_type_8(int32_t value)
	{
		___type_8 = value;
	}

	inline static int32_t get_offset_of_object_list_9() { return static_cast<int32_t>(offsetof(JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22, ___object_list_9)); }
	inline RuntimeObject* get_object_list_9() const { return ___object_list_9; }
	inline RuntimeObject** get_address_of_object_list_9() { return &___object_list_9; }
	inline void set_object_list_9(RuntimeObject* value)
	{
		___object_list_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___object_list_9), (void*)value);
	}
};


// LitJson.JsonReader
struct  JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<System.Int32> LitJson.JsonReader::automaton_stack
	Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * ___automaton_stack_1;
	// System.Int32 LitJson.JsonReader::current_input
	int32_t ___current_input_2;
	// System.Int32 LitJson.JsonReader::current_symbol
	int32_t ___current_symbol_3;
	// System.Boolean LitJson.JsonReader::end_of_json
	bool ___end_of_json_4;
	// System.Boolean LitJson.JsonReader::end_of_input
	bool ___end_of_input_5;
	// LitJson.Lexer LitJson.JsonReader::lexer
	Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * ___lexer_6;
	// System.Boolean LitJson.JsonReader::parser_in_string
	bool ___parser_in_string_7;
	// System.Boolean LitJson.JsonReader::parser_return
	bool ___parser_return_8;
	// System.Boolean LitJson.JsonReader::read_started
	bool ___read_started_9;
	// System.IO.TextReader LitJson.JsonReader::reader
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___reader_10;
	// System.Boolean LitJson.JsonReader::reader_is_owned
	bool ___reader_is_owned_11;
	// System.Boolean LitJson.JsonReader::skip_non_members
	bool ___skip_non_members_12;
	// System.Object LitJson.JsonReader::token_value
	RuntimeObject * ___token_value_13;
	// LitJson.JsonToken LitJson.JsonReader::token
	int32_t ___token_14;

public:
	inline static int32_t get_offset_of_automaton_stack_1() { return static_cast<int32_t>(offsetof(JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06, ___automaton_stack_1)); }
	inline Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * get_automaton_stack_1() const { return ___automaton_stack_1; }
	inline Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 ** get_address_of_automaton_stack_1() { return &___automaton_stack_1; }
	inline void set_automaton_stack_1(Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * value)
	{
		___automaton_stack_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___automaton_stack_1), (void*)value);
	}

	inline static int32_t get_offset_of_current_input_2() { return static_cast<int32_t>(offsetof(JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06, ___current_input_2)); }
	inline int32_t get_current_input_2() const { return ___current_input_2; }
	inline int32_t* get_address_of_current_input_2() { return &___current_input_2; }
	inline void set_current_input_2(int32_t value)
	{
		___current_input_2 = value;
	}

	inline static int32_t get_offset_of_current_symbol_3() { return static_cast<int32_t>(offsetof(JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06, ___current_symbol_3)); }
	inline int32_t get_current_symbol_3() const { return ___current_symbol_3; }
	inline int32_t* get_address_of_current_symbol_3() { return &___current_symbol_3; }
	inline void set_current_symbol_3(int32_t value)
	{
		___current_symbol_3 = value;
	}

	inline static int32_t get_offset_of_end_of_json_4() { return static_cast<int32_t>(offsetof(JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06, ___end_of_json_4)); }
	inline bool get_end_of_json_4() const { return ___end_of_json_4; }
	inline bool* get_address_of_end_of_json_4() { return &___end_of_json_4; }
	inline void set_end_of_json_4(bool value)
	{
		___end_of_json_4 = value;
	}

	inline static int32_t get_offset_of_end_of_input_5() { return static_cast<int32_t>(offsetof(JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06, ___end_of_input_5)); }
	inline bool get_end_of_input_5() const { return ___end_of_input_5; }
	inline bool* get_address_of_end_of_input_5() { return &___end_of_input_5; }
	inline void set_end_of_input_5(bool value)
	{
		___end_of_input_5 = value;
	}

	inline static int32_t get_offset_of_lexer_6() { return static_cast<int32_t>(offsetof(JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06, ___lexer_6)); }
	inline Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * get_lexer_6() const { return ___lexer_6; }
	inline Lexer_tA740F14E85682DB80300393CB63376A76BA37835 ** get_address_of_lexer_6() { return &___lexer_6; }
	inline void set_lexer_6(Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * value)
	{
		___lexer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lexer_6), (void*)value);
	}

	inline static int32_t get_offset_of_parser_in_string_7() { return static_cast<int32_t>(offsetof(JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06, ___parser_in_string_7)); }
	inline bool get_parser_in_string_7() const { return ___parser_in_string_7; }
	inline bool* get_address_of_parser_in_string_7() { return &___parser_in_string_7; }
	inline void set_parser_in_string_7(bool value)
	{
		___parser_in_string_7 = value;
	}

	inline static int32_t get_offset_of_parser_return_8() { return static_cast<int32_t>(offsetof(JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06, ___parser_return_8)); }
	inline bool get_parser_return_8() const { return ___parser_return_8; }
	inline bool* get_address_of_parser_return_8() { return &___parser_return_8; }
	inline void set_parser_return_8(bool value)
	{
		___parser_return_8 = value;
	}

	inline static int32_t get_offset_of_read_started_9() { return static_cast<int32_t>(offsetof(JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06, ___read_started_9)); }
	inline bool get_read_started_9() const { return ___read_started_9; }
	inline bool* get_address_of_read_started_9() { return &___read_started_9; }
	inline void set_read_started_9(bool value)
	{
		___read_started_9 = value;
	}

	inline static int32_t get_offset_of_reader_10() { return static_cast<int32_t>(offsetof(JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06, ___reader_10)); }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * get_reader_10() const { return ___reader_10; }
	inline TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F ** get_address_of_reader_10() { return &___reader_10; }
	inline void set_reader_10(TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * value)
	{
		___reader_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___reader_10), (void*)value);
	}

	inline static int32_t get_offset_of_reader_is_owned_11() { return static_cast<int32_t>(offsetof(JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06, ___reader_is_owned_11)); }
	inline bool get_reader_is_owned_11() const { return ___reader_is_owned_11; }
	inline bool* get_address_of_reader_is_owned_11() { return &___reader_is_owned_11; }
	inline void set_reader_is_owned_11(bool value)
	{
		___reader_is_owned_11 = value;
	}

	inline static int32_t get_offset_of_skip_non_members_12() { return static_cast<int32_t>(offsetof(JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06, ___skip_non_members_12)); }
	inline bool get_skip_non_members_12() const { return ___skip_non_members_12; }
	inline bool* get_address_of_skip_non_members_12() { return &___skip_non_members_12; }
	inline void set_skip_non_members_12(bool value)
	{
		___skip_non_members_12 = value;
	}

	inline static int32_t get_offset_of_token_value_13() { return static_cast<int32_t>(offsetof(JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06, ___token_value_13)); }
	inline RuntimeObject * get_token_value_13() const { return ___token_value_13; }
	inline RuntimeObject ** get_address_of_token_value_13() { return &___token_value_13; }
	inline void set_token_value_13(RuntimeObject * value)
	{
		___token_value_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___token_value_13), (void*)value);
	}

	inline static int32_t get_offset_of_token_14() { return static_cast<int32_t>(offsetof(JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06, ___token_14)); }
	inline int32_t get_token_14() const { return ___token_14; }
	inline int32_t* get_address_of_token_14() { return &___token_14; }
	inline void set_token_14(int32_t value)
	{
		___token_14 = value;
	}
};

struct JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06_StaticFields
{
public:
	// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>> LitJson.JsonReader::parse_table
	RuntimeObject* ___parse_table_0;

public:
	inline static int32_t get_offset_of_parse_table_0() { return static_cast<int32_t>(offsetof(JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06_StaticFields, ___parse_table_0)); }
	inline RuntimeObject* get_parse_table_0() const { return ___parse_table_0; }
	inline RuntimeObject** get_address_of_parse_table_0() { return &___parse_table_0; }
	inline void set_parse_table_0(RuntimeObject* value)
	{
		___parse_table_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parse_table_0), (void*)value);
	}
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

// System.Globalization.NumberFormatInfo
struct  NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D  : public RuntimeObject
{
public:
	// System.Int32[] System.Globalization.NumberFormatInfo::numberGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___numberGroupSizes_1;
	// System.Int32[] System.Globalization.NumberFormatInfo::currencyGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___currencyGroupSizes_2;
	// System.Int32[] System.Globalization.NumberFormatInfo::percentGroupSizes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___percentGroupSizes_3;
	// System.String System.Globalization.NumberFormatInfo::positiveSign
	String_t* ___positiveSign_4;
	// System.String System.Globalization.NumberFormatInfo::negativeSign
	String_t* ___negativeSign_5;
	// System.String System.Globalization.NumberFormatInfo::numberDecimalSeparator
	String_t* ___numberDecimalSeparator_6;
	// System.String System.Globalization.NumberFormatInfo::numberGroupSeparator
	String_t* ___numberGroupSeparator_7;
	// System.String System.Globalization.NumberFormatInfo::currencyGroupSeparator
	String_t* ___currencyGroupSeparator_8;
	// System.String System.Globalization.NumberFormatInfo::currencyDecimalSeparator
	String_t* ___currencyDecimalSeparator_9;
	// System.String System.Globalization.NumberFormatInfo::currencySymbol
	String_t* ___currencySymbol_10;
	// System.String System.Globalization.NumberFormatInfo::ansiCurrencySymbol
	String_t* ___ansiCurrencySymbol_11;
	// System.String System.Globalization.NumberFormatInfo::nanSymbol
	String_t* ___nanSymbol_12;
	// System.String System.Globalization.NumberFormatInfo::positiveInfinitySymbol
	String_t* ___positiveInfinitySymbol_13;
	// System.String System.Globalization.NumberFormatInfo::negativeInfinitySymbol
	String_t* ___negativeInfinitySymbol_14;
	// System.String System.Globalization.NumberFormatInfo::percentDecimalSeparator
	String_t* ___percentDecimalSeparator_15;
	// System.String System.Globalization.NumberFormatInfo::percentGroupSeparator
	String_t* ___percentGroupSeparator_16;
	// System.String System.Globalization.NumberFormatInfo::percentSymbol
	String_t* ___percentSymbol_17;
	// System.String System.Globalization.NumberFormatInfo::perMilleSymbol
	String_t* ___perMilleSymbol_18;
	// System.String[] System.Globalization.NumberFormatInfo::nativeDigits
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___nativeDigits_19;
	// System.Int32 System.Globalization.NumberFormatInfo::m_dataItem
	int32_t ___m_dataItem_20;
	// System.Int32 System.Globalization.NumberFormatInfo::numberDecimalDigits
	int32_t ___numberDecimalDigits_21;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyDecimalDigits
	int32_t ___currencyDecimalDigits_22;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyPositivePattern
	int32_t ___currencyPositivePattern_23;
	// System.Int32 System.Globalization.NumberFormatInfo::currencyNegativePattern
	int32_t ___currencyNegativePattern_24;
	// System.Int32 System.Globalization.NumberFormatInfo::numberNegativePattern
	int32_t ___numberNegativePattern_25;
	// System.Int32 System.Globalization.NumberFormatInfo::percentPositivePattern
	int32_t ___percentPositivePattern_26;
	// System.Int32 System.Globalization.NumberFormatInfo::percentNegativePattern
	int32_t ___percentNegativePattern_27;
	// System.Int32 System.Globalization.NumberFormatInfo::percentDecimalDigits
	int32_t ___percentDecimalDigits_28;
	// System.Int32 System.Globalization.NumberFormatInfo::digitSubstitution
	int32_t ___digitSubstitution_29;
	// System.Boolean System.Globalization.NumberFormatInfo::isReadOnly
	bool ___isReadOnly_30;
	// System.Boolean System.Globalization.NumberFormatInfo::m_useUserOverride
	bool ___m_useUserOverride_31;
	// System.Boolean System.Globalization.NumberFormatInfo::m_isInvariant
	bool ___m_isInvariant_32;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsNumber
	bool ___validForParseAsNumber_33;
	// System.Boolean System.Globalization.NumberFormatInfo::validForParseAsCurrency
	bool ___validForParseAsCurrency_34;

public:
	inline static int32_t get_offset_of_numberGroupSizes_1() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberGroupSizes_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_numberGroupSizes_1() const { return ___numberGroupSizes_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_numberGroupSizes_1() { return &___numberGroupSizes_1; }
	inline void set_numberGroupSizes_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___numberGroupSizes_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSizes_1), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSizes_2() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyGroupSizes_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_currencyGroupSizes_2() const { return ___currencyGroupSizes_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_currencyGroupSizes_2() { return &___currencyGroupSizes_2; }
	inline void set_currencyGroupSizes_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___currencyGroupSizes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSizes_2), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSizes_3() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentGroupSizes_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_percentGroupSizes_3() const { return ___percentGroupSizes_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_percentGroupSizes_3() { return &___percentGroupSizes_3; }
	inline void set_percentGroupSizes_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___percentGroupSizes_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSizes_3), (void*)value);
	}

	inline static int32_t get_offset_of_positiveSign_4() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___positiveSign_4)); }
	inline String_t* get_positiveSign_4() const { return ___positiveSign_4; }
	inline String_t** get_address_of_positiveSign_4() { return &___positiveSign_4; }
	inline void set_positiveSign_4(String_t* value)
	{
		___positiveSign_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveSign_4), (void*)value);
	}

	inline static int32_t get_offset_of_negativeSign_5() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___negativeSign_5)); }
	inline String_t* get_negativeSign_5() const { return ___negativeSign_5; }
	inline String_t** get_address_of_negativeSign_5() { return &___negativeSign_5; }
	inline void set_negativeSign_5(String_t* value)
	{
		___negativeSign_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeSign_5), (void*)value);
	}

	inline static int32_t get_offset_of_numberDecimalSeparator_6() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberDecimalSeparator_6)); }
	inline String_t* get_numberDecimalSeparator_6() const { return ___numberDecimalSeparator_6; }
	inline String_t** get_address_of_numberDecimalSeparator_6() { return &___numberDecimalSeparator_6; }
	inline void set_numberDecimalSeparator_6(String_t* value)
	{
		___numberDecimalSeparator_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberDecimalSeparator_6), (void*)value);
	}

	inline static int32_t get_offset_of_numberGroupSeparator_7() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberGroupSeparator_7)); }
	inline String_t* get_numberGroupSeparator_7() const { return ___numberGroupSeparator_7; }
	inline String_t** get_address_of_numberGroupSeparator_7() { return &___numberGroupSeparator_7; }
	inline void set_numberGroupSeparator_7(String_t* value)
	{
		___numberGroupSeparator_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numberGroupSeparator_7), (void*)value);
	}

	inline static int32_t get_offset_of_currencyGroupSeparator_8() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyGroupSeparator_8)); }
	inline String_t* get_currencyGroupSeparator_8() const { return ___currencyGroupSeparator_8; }
	inline String_t** get_address_of_currencyGroupSeparator_8() { return &___currencyGroupSeparator_8; }
	inline void set_currencyGroupSeparator_8(String_t* value)
	{
		___currencyGroupSeparator_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyGroupSeparator_8), (void*)value);
	}

	inline static int32_t get_offset_of_currencyDecimalSeparator_9() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyDecimalSeparator_9)); }
	inline String_t* get_currencyDecimalSeparator_9() const { return ___currencyDecimalSeparator_9; }
	inline String_t** get_address_of_currencyDecimalSeparator_9() { return &___currencyDecimalSeparator_9; }
	inline void set_currencyDecimalSeparator_9(String_t* value)
	{
		___currencyDecimalSeparator_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencyDecimalSeparator_9), (void*)value);
	}

	inline static int32_t get_offset_of_currencySymbol_10() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencySymbol_10)); }
	inline String_t* get_currencySymbol_10() const { return ___currencySymbol_10; }
	inline String_t** get_address_of_currencySymbol_10() { return &___currencySymbol_10; }
	inline void set_currencySymbol_10(String_t* value)
	{
		___currencySymbol_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currencySymbol_10), (void*)value);
	}

	inline static int32_t get_offset_of_ansiCurrencySymbol_11() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___ansiCurrencySymbol_11)); }
	inline String_t* get_ansiCurrencySymbol_11() const { return ___ansiCurrencySymbol_11; }
	inline String_t** get_address_of_ansiCurrencySymbol_11() { return &___ansiCurrencySymbol_11; }
	inline void set_ansiCurrencySymbol_11(String_t* value)
	{
		___ansiCurrencySymbol_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ansiCurrencySymbol_11), (void*)value);
	}

	inline static int32_t get_offset_of_nanSymbol_12() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___nanSymbol_12)); }
	inline String_t* get_nanSymbol_12() const { return ___nanSymbol_12; }
	inline String_t** get_address_of_nanSymbol_12() { return &___nanSymbol_12; }
	inline void set_nanSymbol_12(String_t* value)
	{
		___nanSymbol_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nanSymbol_12), (void*)value);
	}

	inline static int32_t get_offset_of_positiveInfinitySymbol_13() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___positiveInfinitySymbol_13)); }
	inline String_t* get_positiveInfinitySymbol_13() const { return ___positiveInfinitySymbol_13; }
	inline String_t** get_address_of_positiveInfinitySymbol_13() { return &___positiveInfinitySymbol_13; }
	inline void set_positiveInfinitySymbol_13(String_t* value)
	{
		___positiveInfinitySymbol_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___positiveInfinitySymbol_13), (void*)value);
	}

	inline static int32_t get_offset_of_negativeInfinitySymbol_14() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___negativeInfinitySymbol_14)); }
	inline String_t* get_negativeInfinitySymbol_14() const { return ___negativeInfinitySymbol_14; }
	inline String_t** get_address_of_negativeInfinitySymbol_14() { return &___negativeInfinitySymbol_14; }
	inline void set_negativeInfinitySymbol_14(String_t* value)
	{
		___negativeInfinitySymbol_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___negativeInfinitySymbol_14), (void*)value);
	}

	inline static int32_t get_offset_of_percentDecimalSeparator_15() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentDecimalSeparator_15)); }
	inline String_t* get_percentDecimalSeparator_15() const { return ___percentDecimalSeparator_15; }
	inline String_t** get_address_of_percentDecimalSeparator_15() { return &___percentDecimalSeparator_15; }
	inline void set_percentDecimalSeparator_15(String_t* value)
	{
		___percentDecimalSeparator_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentDecimalSeparator_15), (void*)value);
	}

	inline static int32_t get_offset_of_percentGroupSeparator_16() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentGroupSeparator_16)); }
	inline String_t* get_percentGroupSeparator_16() const { return ___percentGroupSeparator_16; }
	inline String_t** get_address_of_percentGroupSeparator_16() { return &___percentGroupSeparator_16; }
	inline void set_percentGroupSeparator_16(String_t* value)
	{
		___percentGroupSeparator_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentGroupSeparator_16), (void*)value);
	}

	inline static int32_t get_offset_of_percentSymbol_17() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentSymbol_17)); }
	inline String_t* get_percentSymbol_17() const { return ___percentSymbol_17; }
	inline String_t** get_address_of_percentSymbol_17() { return &___percentSymbol_17; }
	inline void set_percentSymbol_17(String_t* value)
	{
		___percentSymbol_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___percentSymbol_17), (void*)value);
	}

	inline static int32_t get_offset_of_perMilleSymbol_18() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___perMilleSymbol_18)); }
	inline String_t* get_perMilleSymbol_18() const { return ___perMilleSymbol_18; }
	inline String_t** get_address_of_perMilleSymbol_18() { return &___perMilleSymbol_18; }
	inline void set_perMilleSymbol_18(String_t* value)
	{
		___perMilleSymbol_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___perMilleSymbol_18), (void*)value);
	}

	inline static int32_t get_offset_of_nativeDigits_19() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___nativeDigits_19)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_nativeDigits_19() const { return ___nativeDigits_19; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_nativeDigits_19() { return &___nativeDigits_19; }
	inline void set_nativeDigits_19(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___nativeDigits_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativeDigits_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_dataItem_20() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_dataItem_20)); }
	inline int32_t get_m_dataItem_20() const { return ___m_dataItem_20; }
	inline int32_t* get_address_of_m_dataItem_20() { return &___m_dataItem_20; }
	inline void set_m_dataItem_20(int32_t value)
	{
		___m_dataItem_20 = value;
	}

	inline static int32_t get_offset_of_numberDecimalDigits_21() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberDecimalDigits_21)); }
	inline int32_t get_numberDecimalDigits_21() const { return ___numberDecimalDigits_21; }
	inline int32_t* get_address_of_numberDecimalDigits_21() { return &___numberDecimalDigits_21; }
	inline void set_numberDecimalDigits_21(int32_t value)
	{
		___numberDecimalDigits_21 = value;
	}

	inline static int32_t get_offset_of_currencyDecimalDigits_22() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyDecimalDigits_22)); }
	inline int32_t get_currencyDecimalDigits_22() const { return ___currencyDecimalDigits_22; }
	inline int32_t* get_address_of_currencyDecimalDigits_22() { return &___currencyDecimalDigits_22; }
	inline void set_currencyDecimalDigits_22(int32_t value)
	{
		___currencyDecimalDigits_22 = value;
	}

	inline static int32_t get_offset_of_currencyPositivePattern_23() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyPositivePattern_23)); }
	inline int32_t get_currencyPositivePattern_23() const { return ___currencyPositivePattern_23; }
	inline int32_t* get_address_of_currencyPositivePattern_23() { return &___currencyPositivePattern_23; }
	inline void set_currencyPositivePattern_23(int32_t value)
	{
		___currencyPositivePattern_23 = value;
	}

	inline static int32_t get_offset_of_currencyNegativePattern_24() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___currencyNegativePattern_24)); }
	inline int32_t get_currencyNegativePattern_24() const { return ___currencyNegativePattern_24; }
	inline int32_t* get_address_of_currencyNegativePattern_24() { return &___currencyNegativePattern_24; }
	inline void set_currencyNegativePattern_24(int32_t value)
	{
		___currencyNegativePattern_24 = value;
	}

	inline static int32_t get_offset_of_numberNegativePattern_25() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___numberNegativePattern_25)); }
	inline int32_t get_numberNegativePattern_25() const { return ___numberNegativePattern_25; }
	inline int32_t* get_address_of_numberNegativePattern_25() { return &___numberNegativePattern_25; }
	inline void set_numberNegativePattern_25(int32_t value)
	{
		___numberNegativePattern_25 = value;
	}

	inline static int32_t get_offset_of_percentPositivePattern_26() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentPositivePattern_26)); }
	inline int32_t get_percentPositivePattern_26() const { return ___percentPositivePattern_26; }
	inline int32_t* get_address_of_percentPositivePattern_26() { return &___percentPositivePattern_26; }
	inline void set_percentPositivePattern_26(int32_t value)
	{
		___percentPositivePattern_26 = value;
	}

	inline static int32_t get_offset_of_percentNegativePattern_27() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentNegativePattern_27)); }
	inline int32_t get_percentNegativePattern_27() const { return ___percentNegativePattern_27; }
	inline int32_t* get_address_of_percentNegativePattern_27() { return &___percentNegativePattern_27; }
	inline void set_percentNegativePattern_27(int32_t value)
	{
		___percentNegativePattern_27 = value;
	}

	inline static int32_t get_offset_of_percentDecimalDigits_28() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___percentDecimalDigits_28)); }
	inline int32_t get_percentDecimalDigits_28() const { return ___percentDecimalDigits_28; }
	inline int32_t* get_address_of_percentDecimalDigits_28() { return &___percentDecimalDigits_28; }
	inline void set_percentDecimalDigits_28(int32_t value)
	{
		___percentDecimalDigits_28 = value;
	}

	inline static int32_t get_offset_of_digitSubstitution_29() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___digitSubstitution_29)); }
	inline int32_t get_digitSubstitution_29() const { return ___digitSubstitution_29; }
	inline int32_t* get_address_of_digitSubstitution_29() { return &___digitSubstitution_29; }
	inline void set_digitSubstitution_29(int32_t value)
	{
		___digitSubstitution_29 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_30() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___isReadOnly_30)); }
	inline bool get_isReadOnly_30() const { return ___isReadOnly_30; }
	inline bool* get_address_of_isReadOnly_30() { return &___isReadOnly_30; }
	inline void set_isReadOnly_30(bool value)
	{
		___isReadOnly_30 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_31() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_useUserOverride_31)); }
	inline bool get_m_useUserOverride_31() const { return ___m_useUserOverride_31; }
	inline bool* get_address_of_m_useUserOverride_31() { return &___m_useUserOverride_31; }
	inline void set_m_useUserOverride_31(bool value)
	{
		___m_useUserOverride_31 = value;
	}

	inline static int32_t get_offset_of_m_isInvariant_32() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___m_isInvariant_32)); }
	inline bool get_m_isInvariant_32() const { return ___m_isInvariant_32; }
	inline bool* get_address_of_m_isInvariant_32() { return &___m_isInvariant_32; }
	inline void set_m_isInvariant_32(bool value)
	{
		___m_isInvariant_32 = value;
	}

	inline static int32_t get_offset_of_validForParseAsNumber_33() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___validForParseAsNumber_33)); }
	inline bool get_validForParseAsNumber_33() const { return ___validForParseAsNumber_33; }
	inline bool* get_address_of_validForParseAsNumber_33() { return &___validForParseAsNumber_33; }
	inline void set_validForParseAsNumber_33(bool value)
	{
		___validForParseAsNumber_33 = value;
	}

	inline static int32_t get_offset_of_validForParseAsCurrency_34() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D, ___validForParseAsCurrency_34)); }
	inline bool get_validForParseAsCurrency_34() const { return ___validForParseAsCurrency_34; }
	inline bool* get_address_of_validForParseAsCurrency_34() { return &___validForParseAsCurrency_34; }
	inline void set_validForParseAsCurrency_34(bool value)
	{
		___validForParseAsCurrency_34 = value;
	}
};

struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_StaticFields
{
public:
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.NumberFormatInfo::invariantInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___invariantInfo_0;

public:
	inline static int32_t get_offset_of_invariantInfo_0() { return static_cast<int32_t>(offsetof(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D_StaticFields, ___invariantInfo_0)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_invariantInfo_0() const { return ___invariantInfo_0; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_invariantInfo_0() { return &___invariantInfo_0; }
	inline void set_invariantInfo_0(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___invariantInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariantInfo_0), (void*)value);
	}
};


// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
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


// System.ArgumentException
struct  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// LitJson.ExporterFunc
struct  ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0  : public MulticastDelegate_t
{
public:

public:
};


// LitJson.ImporterFunc
struct  ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A  : public MulticastDelegate_t
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// LitJson.JsonException
struct  JsonException_tF4D20CEAA45C1D64D1C5E2AD15A6E819C2BB68AB  : public ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407
{
public:

public:
};


// System.Collections.Generic.KeyNotFoundException
struct  KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// LitJson.WrapperFactory
struct  WrapperFactory_tB55CB2530E34938522E06A75C4EDCC9466CCE22F  : public MulticastDelegate_t
{
public:

public:
};


// LitJson.Lexer/StateHandler
struct  StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// LitJson.Lexer/StateHandler[]
struct StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * m_Items[1];

public:
	inline StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !0 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mB79E0336FE7A71B9D05923C08B5D152848B6F553_gshared (List_1_tFBF6A022293416BA5AD7B89F3A150C81EF05606E * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ArrayMetadata>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m9CE390CAE4A7812C48309CE62F68E679DA019BDF_gshared (Dictionary_2_tAB18841F562A63D47AE3785E7F50DC415972EF9F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,LitJson.ObjectMetadata>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m6019BA0BC0D39A01828D6CCADB7F22A4A6395392_gshared (Dictionary_2_t82BE383AE4E39D595E4593591923774B075CA60C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m41EBD1EDB9A3AC64B4EE3B6AAC08868FF28DA954_gshared (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Push(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_mB57657F2527B7C25AB60EB9BBD09C7B42B14F3C3_gshared (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * __this, int32_t ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_m65385AD770CB3137B6B0638B1C8B3F135A5E277D_gshared (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Int32>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_Peek_m5677D80CE72817F059E7035EDC45E04FB2DB057B_gshared (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Int32>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Stack_1_Pop_m975CA51F3A72228535A3AE9FE726481EF9E0B76C_gshared (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_gshared_inline (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Stack_1_Peek_mD6F4A2DD2C67EABB3582BA28D2C13130DC8D828E_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Collections.ICollection LitJson.JsonData::EnsureCollection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureCollection_mB2735186EF16DB40EDF8C42A1EE3D0C5007EEB2D (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method);
// System.Collections.IDictionary LitJson.JsonData::EnsureDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureDictionary_m246F744EBEA43393EE70B77AB8612B66347C356E (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method);
// System.Int32 LitJson.JsonData::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_get_Count_m9F7A8141AF4D106C72276AF99959A3802B4EC850 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method);
// System.Boolean LitJson.JsonData::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsArray_mB1391C7EED937DFB08CEC44D99EAA1564019BD40 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method);
// System.Boolean LitJson.JsonData::get_IsBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsBoolean_m8CC9354643564C289B936240A715D099C22B6784 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method);
// System.Boolean LitJson.JsonData::get_IsDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsDouble_m8B938E538CBCA1D3E0CF15CAEF0C24C4D703F0AD (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method);
// System.Boolean LitJson.JsonData::get_IsInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsInt_mF27C71503E7B184A4ABA1C1ADC32DBEE3FA201E7 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method);
// System.Boolean LitJson.JsonData::get_IsLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsLong_m7CF2CF7CAFD393488C61DD4A7C0C0F041F8B563C (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method);
// System.Boolean LitJson.JsonData::get_IsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsObject_m8A46CBCD79B8D42B9BBE0E1395FD2FE0D400C86C (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method);
// System.Boolean LitJson.JsonData::get_IsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsString_m125DEE6DEA9C4A493556821051B6E5E766B1169F (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method);
// System.Collections.IList LitJson.JsonData::EnsureList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureList_mFF243E800CAB50135B94EC463B354843B67FF983 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// LitJson.JsonData LitJson.JsonData::ToJsonData(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * JsonData_ToJsonData_m66051CC248682E7EF3637E427156E57943303088 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void LitJson.JsonData::set_Item(System.String,LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_set_Item_mF1D7357D423F914B3A79CE9F856BD1668DDEF52B (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, String_t* ___prop_name0, JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * ___value1, const RuntimeMethod* method);
// System.Void LitJson.JsonData::set_Item(System.Int32,LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_set_Item_m87A62306EF1B2FA142903F90F460FB2ED65C91E9 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, int32_t ___index0, JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>::.ctor(!0,!1)
inline void KeyValuePair_2__ctor_mE22F8D519A12B667FF3D6EA6BF98B229CDD39A07 (KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E * __this, String_t* ___key0, JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E *, String_t*, JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 *, const RuntimeMethod*))KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared)(__this, ___key0, ___value1, method);
}
// !0 System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>::get_Key()
inline String_t* KeyValuePair_2_get_Key_m1AAB0CC2B2402A9B3A87A03355F95936321C2C3A_inline (KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E *, const RuntimeMethod*))KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>::get_Value()
inline JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * KeyValuePair_2_get_Value_m40F0202418FC88B5399F20ED515CD6609B4F9DA3_inline (KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E * __this, const RuntimeMethod* method)
{
	return ((  JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * (*) (KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Void LitJson.JsonData::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m3EA673B42735B66AF7B8EF96184EA2E2C9DDBF4E (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, double ___number0, const RuntimeMethod* method);
// System.Void LitJson.JsonData::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m06DB16A395BAC77D2443EA9FC3DC8F8C9C84344A (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, int64_t ___number0, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 LitJson.JsonData::Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_Add_m3F14BDA278B2F5E65DAC1910232E0DE43AE5A172 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void LitJson.OrderedDictionaryEnumerator::.ctor(System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionaryEnumerator__ctor_mA38D62F592FFA96F062546B17BE14CEF7457CC0D (OrderedDictionaryEnumerator_t41C60BB9B4656C74962492FF2832858504473791 * __this, RuntimeObject* ___enumerator0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>::.ctor()
inline void Dictionary_2__ctor_mED1D86EA443CCD2676703C1F9C7E562C036CA6AB (Dictionary_2_t561523F5E3C140ED31D9B9CEDEBAF048916097E9 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t561523F5E3C140ED31D9B9CEDEBAF048916097E9 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::.ctor()
inline void List_1__ctor_m5C7FBF0259C3C8D2D595043CB1D1E96F4D5AB5F1 (List_1_t140BFB4B967C4C1B5334856B4265C018EF29DE3E * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t140BFB4B967C4C1B5334856B4265C018EF29DE3E *, const RuntimeMethod*))List_1__ctor_mB79E0336FE7A71B9D05923C08B5D152848B6F553_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<LitJson.JsonData>::.ctor()
inline void List_1__ctor_m59DE115CE21F199388C58781EA6B6E2DF8BA3139 (List_1_tFF8C524282266EE4C4A7EE822259B9440F8C21F3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFF8C524282266EE4C4A7EE822259B9440F8C21F3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void LitJson.JsonData::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m0EEBDE7A2966ABF8D7BB49C85F0182B3774C0E02 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m1A8BED62EC95E168E5BE5F8DB3C8E4C89EE50A45 (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m943A813A4F6AF6DA968C2C8DC1553029522011F0 (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, bool ___boolean0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mF1F000E089B280D3D81FF45EFBD65434D43132AC (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, double ___number0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mCF4C1D57638E36B9BA8A8530AD06A6A7F57BADDA (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, int32_t ___number0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m4B9B4BDC347A4A5053CB5FEC9A1C21DBD1D36E86 (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, int64_t ___number0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::WriteArrayStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteArrayStart_m718A90F07C4CC639B5972028842511CDA10BB307 (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonData::WriteJson(LitJson.IJsonWrapper,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_WriteJson_mF3EF76C1227C33E91452AF5ACA38BBB9E828B23C (RuntimeObject* ___obj0, JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * ___writer1, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::WriteArrayEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteArrayEnd_m350C5F39EF6BBC44CA6E54D79065E78D2842F596 (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::WriteObjectStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteObjectStart_m55D25205F274F9FDA01323A8BFC72891F37C3647 (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, const RuntimeMethod* method);
// System.Object System.Collections.DictionaryEntry::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * DictionaryEntry_get_Key_m9A53AE1FA4CA017F0A7353F71658A9C36079E1D7_inline (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::WritePropertyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WritePropertyName_m863853939268B293D5404C24D3A048943262E8C3 (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, String_t* ___property_name0, const RuntimeMethod* method);
// System.Object System.Collections.DictionaryEntry::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * DictionaryEntry_get_Value_m2D618D04C0A8EA2A065B171F528FEA98B059F9BC_inline (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::WriteObjectEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteObjectEnd_m4AD1C04B7B225270FACABF25C0A0F5633C35315A (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Int32::Equals(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4 (int32_t* __this, int32_t ___obj0, const RuntimeMethod* method);
// System.Boolean System.Int64::Equals(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_Equals_m22F1F9E00328D15F2EF44D9A82F185C9A8D0A697 (int64_t* __this, int64_t ___obj0, const RuntimeMethod* method);
// System.Boolean System.Double::Equals(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_Equals_m8C171E8C7F556087E707D1396DB29D1D8B21A46B (double* __this, double ___obj0, const RuntimeMethod* method);
// System.Boolean System.Boolean::Equals(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boolean_Equals_mC63D03B4DE1BBC68835530A9E0384FDDB0AC1A3D (bool* __this, bool ___obj0, const RuntimeMethod* method);
// System.Void System.IO.StringWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringWriter__ctor_mBA5BDF99FA78C7B9402872EBB9324A9311040264 (StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::.ctor(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_m674F2DE75D11F51D8E04A9F05598C53FB5FA9081 (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___writer0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::set_Validate(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonWriter_set_Validate_m7E0C408161622AC5EA0F4585E2CDFD63277BB49E_inline (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, bool ___value0, const RuntimeMethod* method);
// System.String System.Boolean::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C (bool* __this, const RuntimeMethod* method);
// System.String System.Double::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D (double* __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F (int64_t* __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m81FC14233935AF3572D8136E4CA9DD7BBA6FC861 (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_mF8E9704C91C2F1912909448E5BABFE9EC61D4E8F (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ArrayMetadata>::.ctor()
inline void Dictionary_2__ctor_m424C242531248278FDE282B92E7AEE5484947603 (Dictionary_2_t38AAA43129883A56272556F3EA7E24864F40C1E4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t38AAA43129883A56272556F3EA7E24864F40C1E4 *, const RuntimeMethod*))Dictionary_2__ctor_m9CE390CAE4A7812C48309CE62F68E679DA019BDF_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,System.Reflection.MethodInfo>>::.ctor()
inline void Dictionary_2__ctor_mD909E0A139978659E700B0CE49424A936C710762 (Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ObjectMetadata>::.ctor()
inline void Dictionary_2__ctor_m914FD0514FB108325301821466961F9DDB53F9E5 (Dictionary_2_t1B25396813A0A3CD903D5974ED4C6E4768CF54CE * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t1B25396813A0A3CD903D5974ED4C6E4768CF54CE *, const RuntimeMethod*))Dictionary_2__ctor_m6019BA0BC0D39A01828D6CCADB7F22A4A6395392_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IList`1<LitJson.PropertyMetadata>>::.ctor()
inline void Dictionary_2__ctor_m90772468780FDD4C4EA19623F829EC1D0C001CEF (Dictionary_2_t912F8784FB55D3C7125D052469FEE14E3BBD4819 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t912F8784FB55D3C7125D052469FEE14E3BBD4819 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void LitJson.JsonWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_mE4D6EF77FEB3D97DE0AD189AE391228F307B2D6B (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, const RuntimeMethod* method);
// System.Globalization.DateTimeFormatInfo System.Globalization.DateTimeFormatInfo::get_InvariantInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * DateTimeFormatInfo_get_InvariantInfo_mF82BD33E66FDFBF82C9E9F58CDA7DDE568401F4B (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ExporterFunc>::.ctor()
inline void Dictionary_2__ctor_mE6DB8446420A7CECA7E2B4BA80B16868EC189D57 (Dictionary_2_t6E1066B0BD86FB1DB5AABC39148F1A9BD76B7B94 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6E1066B0BD86FB1DB5AABC39148F1A9BD76B7B94 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::.ctor()
inline void Dictionary_2__ctor_mD013C25087986CD840D626572440D4AB496207EE (Dictionary_2_t445726BAE7CD3D5D5A88637A0BCA8CCBFA855C7F * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t445726BAE7CD3D5D5A88637A0BCA8CCBFA855C7F *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void LitJson.JsonMapper::RegisterBaseExporters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseExporters_mA909405EE7451B089689A524530D135DCE34B764 (const RuntimeMethod* method);
// System.Void LitJson.JsonMapper::RegisterBaseImporters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseImporters_mD1889E075D493FD4421C1855FBD2D0C58BF450CD (const RuntimeMethod* method);
// System.Boolean LitJson.JsonReader::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_Read_m59D15EDA2E81ED1A1336339DDF8B71FF26F6EDAC (JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * __this, const RuntimeMethod* method);
// LitJson.JsonToken LitJson.JsonReader::get_Token()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonReader_get_Token_mED560372CCFF4EE563BF50874652BBCF9C28F13B_inline (JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * __this, const RuntimeMethod* method);
// LitJson.IJsonWrapper LitJson.WrapperFactory::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WrapperFactory_Invoke_m3C4DC0EF143565CADE61880BB7FBC0925392F0E8 (WrapperFactory_tB55CB2530E34938522E06A75C4EDCC9466CCE22F * __this, const RuntimeMethod* method);
// System.Object LitJson.JsonReader::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * JsonReader_get_Value_m0B7E3C54874728492DC520DCE1CB6508F378ADF2_inline (JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * __this, const RuntimeMethod* method);
// LitJson.IJsonWrapper LitJson.JsonMapper::ReadValue(LitJson.WrapperFactory,LitJson.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ReadValue_m56D03D982C8DEDB967FEEFF8026046A5D60389A5 (WrapperFactory_tB55CB2530E34938522E06A75C4EDCC9466CCE22F * ___factory0, JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * ___reader1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void LitJson.ExporterFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExporterFunc__ctor_m3B54763B48D317B3477663693B1772B1E7EAF134 (ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void LitJson.ImporterFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImporterFunc__ctor_m764A3B21AA1220E9B4C44E609D8E6C6ECF2EABC6 (ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void LitJson.JsonMapper::RegisterImporter(System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>,System.Type,System.Type,LitJson.ImporterFunc)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterImporter_m3E3E62BD61EC611D09C3FE17F5CCD96C57B41B66 (RuntimeObject* ___table0, Type_t * ___json_type1, Type_t * ___value_type2, ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * ___importer3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>::.ctor()
inline void Dictionary_2__ctor_m90BB337659FFDAB593D3AC0ED602B7963C3B66E8 (Dictionary_2_tDA33E054E343D826DBF1AC64F23B019265CDBB6E * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tDA33E054E343D826DBF1AC64F23B019265CDBB6E *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void LitJson.WrapperFactory::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperFactory__ctor_mCCC28081C93D78116FC6014F0C41ED412D6DEA5E (WrapperFactory_tB55CB2530E34938522E06A75C4EDCC9466CCE22F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ToWrapper_m5DB558F405D5A01E086EA3A782B39811DFB784FA (WrapperFactory_tB55CB2530E34938522E06A75C4EDCC9466CCE22F * ___factory0, String_t* ___json1, const RuntimeMethod* method);
// System.Void LitJson.JsonReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_m2C149228CEF28E2A7ECBE7A0001A4194C7E44593 (JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * __this, String_t* ___json_text0, const RuntimeMethod* method);
// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>> LitJson.JsonReader::PopulateParseTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonReader_PopulateParseTable_mC0F4717833EF8B92510C6EC773CCE86F58B96607 (const RuntimeMethod* method);
// System.Void System.IO.StringReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringReader__ctor_m7CC29D8E83F4813395ACA9CF4F756B1BCE09A7EE (StringReader_t74E352C280EAC22C878867444978741F19E1F895 * __this, String_t* ___s0, const RuntimeMethod* method);
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_m4C5C39FB6CC0798325232ED8823F68F35B444A6E (JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * __this, TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___reader0, bool ___owned1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Int32>::.ctor()
inline void Stack_1__ctor_m41EBD1EDB9A3AC64B4EE3B6AAC08868FF28DA954 (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 *, const RuntimeMethod*))Stack_1__ctor_m41EBD1EDB9A3AC64B4EE3B6AAC08868FF28DA954_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Push(!0)
inline void Stack_1_Push_mB57657F2527B7C25AB60EB9BBD09C7B42B14F3C3 (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * __this, int32_t ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 *, int32_t, const RuntimeMethod*))Stack_1_Push_mB57657F2527B7C25AB60EB9BBD09C7B42B14F3C3_gshared)(__this, ___item0, method);
}
// System.Void LitJson.Lexer::.ctor(System.IO.TextReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer__ctor_m3DE9BBF22D9943F59B4A80B6884642E972A0A5C3 (Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * __this, TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___reader0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::.ctor()
inline void Dictionary_2__ctor_m2EBF1ECBC92F80383944B79DCCDA176099E0BF78 (Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9 *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void LitJson.JsonReader::TableAddRow(System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>,LitJson.ParserToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_TableAddRow_mBF41F9B65E4AC9057DD88DF448CEE05654FB1FA7 (RuntimeObject* ___parse_table0, int32_t ___rule1, const RuntimeMethod* method);
// System.Void LitJson.JsonReader::TableAddCol(System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>,LitJson.ParserToken,System.Int32,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_TableAddCol_m5366EAD8608A2E2904D7989C8F21EFA59346A769 (RuntimeObject* ___parse_table0, int32_t ___row1, int32_t ___col2, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___symbols3, const RuntimeMethod* method);
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32[]>::.ctor()
inline void Dictionary_2__ctor_m0042AB3E1A64BB363620361BBE7585680D722E16 (Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4 *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Int32 System.String::IndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.Boolean System.Double::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Double_TryParse_mE740D7083AC52793A9634067C4F032570FFBF61E (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, double* ___result3, const RuntimeMethod* method);
// System.Boolean System.Int32::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_TryParse_m006085C3B9AC64929E893942EF7A55328FDAE090 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, int32_t* ___result3, const RuntimeMethod* method);
// System.Boolean System.Int64::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int64_TryParse_m4A94015941D9BD9F9304D1FE14F17E84BFD3B69A (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, int64_t* ___result3, const RuntimeMethod* method);
// System.Boolean System.UInt64::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.UInt64&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UInt64_TryParse_m1D56C1385B6F4855FD1A893FEEE12C0796695621 (String_t* ___s0, int32_t ___style1, RuntimeObject* ___provider2, uint64_t* ___result3, const RuntimeMethod* method);
// System.String LitJson.Lexer::get_StringValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Lexer_get_StringValue_m034AD1356FBD2A8031B031261E549239262006E9_inline (Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonReader::ProcessNumber(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_ProcessNumber_m91540D75BD02986CFF1D7F40AC2AC96CC4EAC419 (JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * __this, String_t* ___number0, const RuntimeMethod* method);
// System.Boolean LitJson.Lexer::NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_NextToken_m2DD1411BF4E5102DF9F57AA88D218E052818FC9E (Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * __this, const RuntimeMethod* method);
// System.Boolean LitJson.Lexer::get_EndOfInput()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Lexer_get_EndOfInput_mBE0B69A04CA5DDF09506A3E2A5D29F73FDF63D5B_inline (Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonReader::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_Close_mE1FB7CB27F582FAD11DDB129E9B172FE083BF0E5 (JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * __this, const RuntimeMethod* method);
// System.Int32 LitJson.Lexer::get_Token()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Lexer_get_Token_mFF56BE71A4DFC4210FE0249131CCE77B4B27EA83_inline (Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Int32>::Clear()
inline void Stack_1_Clear_m65385AD770CB3137B6B0638B1C8B3F135A5E277D (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 *, const RuntimeMethod*))Stack_1_Clear_m65385AD770CB3137B6B0638B1C8B3F135A5E277D_gshared)(__this, method);
}
// System.Boolean LitJson.JsonReader::ReadToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_ReadToken_mEADA25896E38892F27C7DB14FEB6B80564F5B96B (JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Int32>::Peek()
inline int32_t Stack_1_Peek_m5677D80CE72817F059E7035EDC45E04FB2DB057B (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 *, const RuntimeMethod*))Stack_1_Peek_m5677D80CE72817F059E7035EDC45E04FB2DB057B_gshared)(__this, method);
}
// !0 System.Collections.Generic.Stack`1<System.Int32>::Pop()
inline int32_t Stack_1_Pop_m975CA51F3A72228535A3AE9FE726481EF9E0B76C (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 *, const RuntimeMethod*))Stack_1_Pop_m975CA51F3A72228535A3AE9FE726481EF9E0B76C_gshared)(__this, method);
}
// System.Void LitJson.JsonReader::ProcessSymbol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_ProcessSymbol_m8C1C4818381E7C0D995D3AD82FC39749D87F9369 (JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_m17C3120E8C05EA289C449E27C996B9E42C9E18F4 (JsonException_tF4D20CEAA45C1D64D1C5E2AD15A6E819C2BB68AB * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void LitJson.JsonException::.ctor(LitJson.ParserToken,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_m23C50EAF13C647006EA9E346DFB52D8ABDD40928 (JsonException_tF4D20CEAA45C1D64D1C5E2AD15A6E819C2BB68AB * __this, int32_t ___token0, Exception_t * ___inner_exception1, const RuntimeMethod* method);
// System.Globalization.NumberFormatInfo System.Globalization.NumberFormatInfo::get_InvariantInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * NumberFormatInfo_get_InvariantInfo_m286BBD095BFCA546BD2CD67E856D1A205436C03F (const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringWriter__ctor_mCA0BB9FBAEDB78DF47C385E534F1EB38F6334F66 (StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * __this, StringBuilder_t * ___sb0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Init_m9CF8AAA8375A99A28FF361BF0E14AC868766AA29 (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<LitJson.WriterContext>::.ctor()
inline void Stack_1__ctor_m85DCC15D944DFD51D4128D77168CE17B40060B96 (Stack_1_tEFB614397DBC5AFE2026C45C8FD2A720C51C0F27 * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tEFB614397DBC5AFE2026C45C8FD2A720C51C0F27 *, const RuntimeMethod*))Stack_1__ctor_mD782ADAC3AB9809F63B681213A7A39784A9A169A_gshared)(__this, method);
}
// System.Void LitJson.WriterContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriterContext__ctor_m79329B74FB582A1E615AF61376B999F38229143D (WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<LitJson.WriterContext>::Push(!0)
inline void Stack_1_Push_mAAC659B8244405A0EB9B9405727EADF1200FD30C (Stack_1_tEFB614397DBC5AFE2026C45C8FD2A720C51C0F27 * __this, WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tEFB614397DBC5AFE2026C45C8FD2A720C51C0F27 *, WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB *, const RuntimeMethod*))Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_gshared)(__this, ___item0, method);
}
// System.Void LitJson.JsonWriter::PutNewline(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_m8109AD3726C3EE1E29B8365FF742BCF4E27CCCBD (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, bool ___add_comma0, const RuntimeMethod* method);
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4 (const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Put(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Put_mD7B468597C737B026F00E48C330E2628ACDD5F51 (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::IntToHex(System.Int32,System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_IntToHex_m412AAD581DE7B64E0F11CC39FED8AB5273B28E8B (int32_t ___n0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___hex1, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::DoValidation(LitJson.Condition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_DoValidation_mA59E12C4B3B46B655369424CCA9FBC421E4151EB (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, int32_t ___cond0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::PutNewline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_m1C18E58436D322ED951CD92E36C2DC11208F46E9 (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Decimal,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m4365C068739D443C5C6EEB5445AAEE1DBB245A4B (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Double,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m5BC045F91E837268FECEA78DA859902005EF91D1 (double ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Int32,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m608712133E3A607F257620CB270C6758F01CB109 (int32_t ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Int64,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m96D69564ADA9ACFD81958A9AB178D27D7BFECB4E (int64_t ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::PutString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutString_mEED06E70ECEF8FED16888E35CEDB08F2860F3C72 (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, String_t* ___str0, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.UInt64,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_m7DC0B782B61A20E04F624E47FD967D246BB78BD6 (uint64_t ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<LitJson.WriterContext>::Pop()
inline WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * Stack_1_Pop_mBCAA112320E9A1EE079981A98DC82F5BA174C2F0 (Stack_1_tEFB614397DBC5AFE2026C45C8FD2A720C51C0F27 * __this, const RuntimeMethod* method)
{
	return ((  WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * (*) (Stack_1_tEFB614397DBC5AFE2026C45C8FD2A720C51C0F27 *, const RuntimeMethod*))Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Stack`1<LitJson.WriterContext>::get_Count()
inline int32_t Stack_1_get_Count_mF285F6000A866CB918AEBA65E173C15E61BF003C_inline (Stack_1_tEFB614397DBC5AFE2026C45C8FD2A720C51C0F27 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_tEFB614397DBC5AFE2026C45C8FD2A720C51C0F27 *, const RuntimeMethod*))Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.Stack`1<LitJson.WriterContext>::Peek()
inline WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * Stack_1_Peek_m23F6D7DF90263D3517E91DE0F9A71870800C1E05 (Stack_1_tEFB614397DBC5AFE2026C45C8FD2A720C51C0F27 * __this, const RuntimeMethod* method)
{
	return ((  WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * (*) (Stack_1_tEFB614397DBC5AFE2026C45C8FD2A720C51C0F27 *, const RuntimeMethod*))Stack_1_Peek_mD6F4A2DD2C67EABB3582BA28D2C13130DC8D828E_gshared)(__this, method);
}
// System.Void LitJson.JsonWriter::Unindent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Unindent_mE3667042AD60FBE2B0DEB5C569D92BD9558CEEE6 (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Indent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Indent_m3827589B8EB89E7C48BFA3B56864C256BC5B0389 (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, const RuntimeMethod* method);
// System.String System.String::ToLowerInvariant()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLowerInvariant_m070E99F11A6005755BD6579A6CC835694395F79F (String_t* __this, const RuntimeMethod* method);
// System.Void LitJson.Lexer::PopulateFsmTables(LitJson.Lexer/StateHandler[]&,System.Int32[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_PopulateFsmTables_mA269850CFC2017338FC0E0A9BF7A5094CE2C299B (StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19** ___fsm_handler_table0, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** ___fsm_return_table1, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E (StringBuilder_t * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void LitJson.FsmContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmContext__ctor_mDEA9C172337FC69E2700608B6793C460F8B79478 (FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * __this, const RuntimeMethod* method);
// System.Void LitJson.Lexer/StateHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateHandler__ctor_mF1275528CE46301EF915D07CE3FC1E79E5BC7F40 (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_m84E3CF47987D8B6F2D889D957CBFB5FD55F3DAEC (int32_t ___value0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Boolean LitJson.Lexer::GetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_GetChar_m282F3FE856E7F4739F3ECE3AA60E1385AF028868 (Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * __this, const RuntimeMethod* method);
// System.Void LitJson.Lexer::UngetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_UngetChar_mA7F3C02B5A66310D5A8CDD065E1ECC596E20C772 (Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * __this, const RuntimeMethod* method);
// System.Char LitJson.Lexer::ProcessEscChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Lexer_ProcessEscChar_m7D089093975A2991156E5F25DDBB37143264E4EE (int32_t ___esc_char0, const RuntimeMethod* method);
// System.Int32 LitJson.Lexer::HexValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_HexValue_mC23D355B06D79E72038FD4710DFCBCC8F26F5212 (int32_t ___digit0, const RuntimeMethod* method);
// System.Int32 LitJson.Lexer::NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_NextChar_m5768865FB1D0C7426564D8FD2FC2F196A92939FD (Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * __this, const RuntimeMethod* method);
// System.Boolean LitJson.Lexer/StateHandler::Invoke(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StateHandler_Invoke_mEB6140CA565783FF6E36C1593D165814CE02226F (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * __this, FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * ___ctx0, const RuntimeMethod* method);
// System.Void LitJson.JsonException::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_m7F4E2999B1E059544C993457E552D832FDDC1712 (JsonException_tF4D20CEAA45C1D64D1C5E2AD15A6E819C2BB68AB * __this, int32_t ___c0, const RuntimeMethod* method);
// System.Int32 System.Text.StringBuilder::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Remove(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Remove_m6ABF9CF3D10160EB52E0768262A9B179F987571E (StringBuilder_t * __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.Collections.DictionaryEntry LitJson.OrderedDictionaryEnumerator::get_Entry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  OrderedDictionaryEnumerator_get_Entry_mB89D0D610B1A19320A15616B0A3D1D20D9CE158F (OrderedDictionaryEnumerator_t41C60BB9B4656C74962492FF2832858504473791 * __this, const RuntimeMethod* method);
// System.Void System.Collections.DictionaryEntry::.ctor(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryEntry__ctor_mF383FECC02E6A6FA003D609E63697A9FC010BCB4 (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void LitJson.JsonMapper/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3171A925254B94B01D0F86A1902475329896466E (U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * __this, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m16B237FA188F31A702DA81BB98674A35EF58AE55 (uint8_t ___value0, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_mE78FB58C17EA12F95381D5C746722C771BD0BFE7 (Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.Convert::ToString(System.DateTime,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Convert_ToString_mB3626028A47845ACEE96260B096C91EA42D227B7 (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mAF1F715A5CE7FFE16A6BDC8E628250279F5460EF (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___number0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mCCBE073FF85D0B92F38BF63334A42DB5BABA66C4 (int8_t ___value0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_m1E275A2122DD929BC92E25F5E0B72355EA6378DE (int16_t ___value0, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mEE9189C38DB7737892F35EAE2FA183E918DC5C70 (uint16_t ___value0, const RuntimeMethod* method);
// System.UInt64 System.Convert::ToUInt64(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_m7E663B2DD9A15D6F486B6C36A43751CBFC922CA4 (uint32_t ___value0, const RuntimeMethod* method);
// System.Void LitJson.JsonWriter::Write(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mF3349C36E4720C9678D00C75B1C4B630AE4BCEF6 (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, uint64_t ___number0, const RuntimeMethod* method);
// System.String System.DateTimeOffset::ToString(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTimeOffset_ToString_m6F59F045A0B1063335C1BC88DBD80C1868B9E6AF (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * __this, String_t* ___format0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method);
// System.Byte System.Convert::ToByte(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t Convert_ToByte_m63C698D88485EB4CAACA12EDFA17B0F894B2A66C (int32_t ___value0, const RuntimeMethod* method);
// System.UInt64 System.Convert::ToUInt64(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t Convert_ToUInt64_m4E6CFEBFC620FD3705A52853CDAECC5F6AB5423F (int32_t ___value0, const RuntimeMethod* method);
// System.Int64 System.Convert::ToInt64(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Convert_ToInt64_mB05B99FB500FD4129E7616031A2405404524A074 (int32_t ___value0, const RuntimeMethod* method);
// System.SByte System.Convert::ToSByte(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t Convert_ToSByte_m51258423AD29E21302EF937934744AFEAEAEA1F0 (int32_t ___value0, const RuntimeMethod* method);
// System.Int16 System.Convert::ToInt16(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t Convert_ToInt16_m541B626F2506C13399245670B33C0387F4C92241 (int32_t ___value0, const RuntimeMethod* method);
// System.UInt16 System.Convert::ToUInt16(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Convert_ToUInt16_mD29FE8C80080BE4F1D7FA65A7589B9368150B3DC (int32_t ___value0, const RuntimeMethod* method);
// System.UInt32 System.Convert::ToUInt32(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_mA38C43C03B8030EFE234825FC0D23E8B081089C9 (int32_t ___value0, const RuntimeMethod* method);
// System.Single System.Convert::ToSingle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Convert_ToSingle_m370686073463D041429EEBF663C144744BE79668 (int32_t ___value0, const RuntimeMethod* method);
// System.Double System.Convert::ToDouble(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Convert_ToDouble_m71955B1BEF239B4ECC8868252DA082A38FD1E125 (int32_t ___value0, const RuntimeMethod* method);
// System.Decimal System.Convert::ToDecimal(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  Convert_ToDecimal_mD729925F249653EF8DA34909561747DB117A4644 (double ___value0, const RuntimeMethod* method);
// System.Single System.Convert::ToSingle(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Convert_ToSingle_m97B465B7C9620523539B9BA65C256991531C0D05 (double ___value0, const RuntimeMethod* method);
// System.UInt32 System.Convert::ToUInt32(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Convert_ToUInt32_mD97A8501E8D2A539ADBD77E91629BADE142746E7 (int64_t ___value0, const RuntimeMethod* method);
// System.Char System.Convert::ToChar(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Convert_ToChar_mC70BDA16401A56AA014B84C16035328E533B9AF1 (String_t* ___value0, const RuntimeMethod* method);
// System.DateTime System.Convert::ToDateTime(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  Convert_ToDateTime_m2FA19E10818EF340AF19191C7E01F2632FAF3B2D (String_t* ___value0, RuntimeObject* ___provider1, const RuntimeMethod* method);
// System.DateTimeOffset System.DateTimeOffset::Parse(System.String,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  DateTimeOffset_Parse_mEAC1F90F2294A19A5DC107BD74A3C50FBE5D3D56 (String_t* ___input0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method);
// System.Void LitJson.JsonData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m660BB5B411AD6D6732F9289DB4A56608B7C11D7D (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: LitJson.ArrayMetadata
IL2CPP_EXTERN_C void ArrayMetadata_t726AFEF81AE4F9C008C85AEFFD8646BB5AE4419D_marshal_pinvoke(const ArrayMetadata_t726AFEF81AE4F9C008C85AEFFD8646BB5AE4419D& unmarshaled, ArrayMetadata_t726AFEF81AE4F9C008C85AEFFD8646BB5AE4419D_marshaled_pinvoke& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
IL2CPP_EXTERN_C void ArrayMetadata_t726AFEF81AE4F9C008C85AEFFD8646BB5AE4419D_marshal_pinvoke_back(const ArrayMetadata_t726AFEF81AE4F9C008C85AEFFD8646BB5AE4419D_marshaled_pinvoke& marshaled, ArrayMetadata_t726AFEF81AE4F9C008C85AEFFD8646BB5AE4419D& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ArrayMetadata
IL2CPP_EXTERN_C void ArrayMetadata_t726AFEF81AE4F9C008C85AEFFD8646BB5AE4419D_marshal_pinvoke_cleanup(ArrayMetadata_t726AFEF81AE4F9C008C85AEFFD8646BB5AE4419D_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LitJson.ArrayMetadata
IL2CPP_EXTERN_C void ArrayMetadata_t726AFEF81AE4F9C008C85AEFFD8646BB5AE4419D_marshal_com(const ArrayMetadata_t726AFEF81AE4F9C008C85AEFFD8646BB5AE4419D& unmarshaled, ArrayMetadata_t726AFEF81AE4F9C008C85AEFFD8646BB5AE4419D_marshaled_com& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
IL2CPP_EXTERN_C void ArrayMetadata_t726AFEF81AE4F9C008C85AEFFD8646BB5AE4419D_marshal_com_back(const ArrayMetadata_t726AFEF81AE4F9C008C85AEFFD8646BB5AE4419D_marshaled_com& marshaled, ArrayMetadata_t726AFEF81AE4F9C008C85AEFFD8646BB5AE4419D& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ArrayMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ArrayMetadata
IL2CPP_EXTERN_C void ArrayMetadata_t726AFEF81AE4F9C008C85AEFFD8646BB5AE4419D_marshal_com_cleanup(ArrayMetadata_t726AFEF81AE4F9C008C85AEFFD8646BB5AE4419D_marshaled_com& marshaled)
{
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
// System.Void LitJson.ExporterFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExporterFunc__ctor_m3B54763B48D317B3477663693B1772B1E7EAF134 (ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void LitJson.ExporterFunc::Invoke(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExporterFunc_Invoke_m5C9E7B6B4BAAB90DF04F7CFD1DC039537987A525 (ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * __this, RuntimeObject * ___obj0, JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * ___writer1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___obj0, ___writer1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, ___writer1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * >::Invoke(targetMethod, ___obj0, ___writer1);
					else
						GenericVirtActionInvoker1< JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * >::Invoke(targetMethod, ___obj0, ___writer1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___obj0, ___writer1);
					else
						VirtActionInvoker1< JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___obj0, ___writer1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (RuntimeObject *, JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___obj0, ___writer1, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * >::Invoke(targetMethod, targetThis, ___obj0, ___writer1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * >::Invoke(targetMethod, targetThis, ___obj0, ___writer1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___obj0, ___writer1);
					else
						VirtActionInvoker2< RuntimeObject *, JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___obj0, ___writer1);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___obj0, ___writer1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___obj0, ___writer1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult LitJson.ExporterFunc::BeginInvoke(System.Object,LitJson.JsonWriter,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExporterFunc_BeginInvoke_m75C6F41D566BEF4F3B52A46103F29BB2E416BFD8 (ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * __this, RuntimeObject * ___obj0, JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * ___writer1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___obj0;
	__d_args[1] = ___writer1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void LitJson.ExporterFunc::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExporterFunc_EndInvoke_m52585D219112A2A9FB9BBF2E9827A1E7870ED290 (ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.FsmContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FsmContext__ctor_mDEA9C172337FC69E2700608B6793C460F8B79478 (FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * __this, const RuntimeMethod* method)
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
// System.Void LitJson.ImporterFunc::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ImporterFunc__ctor_m764A3B21AA1220E9B4C44E609D8E6C6ECF2EABC6 (ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Object LitJson.ImporterFunc::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ImporterFunc_Invoke_mD221E79AB0D54E91681BCCBAA53423E41997661C (ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	RuntimeObject * result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___input0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___input0);
					else
						result = GenericVirtFuncInvoker0< RuntimeObject * >::Invoke(targetMethod, ___input0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___input0);
					else
						result = VirtFuncInvoker0< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___input0);
				}
			}
			else
			{
				typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___input0);
					else
						result = GenericVirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___input0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___input0);
					else
						result = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___input0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef RuntimeObject * (*FunctionPointerType) (RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___input0, targetMethod);
				}
				else
				{
					typedef RuntimeObject * (*FunctionPointerType) (void*, RuntimeObject *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___input0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult LitJson.ImporterFunc::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ImporterFunc_BeginInvoke_mDCDC8806DCC47E38261CCF30777D30E7BED8780B (ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * __this, RuntimeObject * ___input0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___input0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Object LitJson.ImporterFunc::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ImporterFunc_EndInvoke_m7C9C3C3883C4E1EC99B8A8641DACBB1F016AB04A (ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject *)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 LitJson.JsonData::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_get_Count_m9F7A8141AF4D106C72276AF99959A3802B4EC850 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureCollection_mB2735186EF16DB40EDF8C42A1EE3D0C5007EEB2D(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean LitJson.JsonData::get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsArray_mB1391C7EED937DFB08CEC44D99EAA1564019BD40 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_type_8();
		return (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
	}
}
// System.Boolean LitJson.JsonData::get_IsBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsBoolean_m8CC9354643564C289B936240A715D099C22B6784 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_type_8();
		return (bool)((((int32_t)L_0) == ((int32_t)7))? 1 : 0);
	}
}
// System.Boolean LitJson.JsonData::get_IsDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsDouble_m8B938E538CBCA1D3E0CF15CAEF0C24C4D703F0AD (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_type_8();
		return (bool)((((int32_t)L_0) == ((int32_t)6))? 1 : 0);
	}
}
// System.Boolean LitJson.JsonData::get_IsInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsInt_mF27C71503E7B184A4ABA1C1ADC32DBEE3FA201E7 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_type_8();
		return (bool)((((int32_t)L_0) == ((int32_t)4))? 1 : 0);
	}
}
// System.Boolean LitJson.JsonData::get_IsLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsLong_m7CF2CF7CAFD393488C61DD4A7C0C0F041F8B563C (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_type_8();
		return (bool)((((int32_t)L_0) == ((int32_t)5))? 1 : 0);
	}
}
// System.Boolean LitJson.JsonData::get_IsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsObject_m8A46CBCD79B8D42B9BBE0E1395FD2FE0D400C86C (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_type_8();
		return (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
	}
}
// System.Boolean LitJson.JsonData::get_IsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_get_IsString_m125DEE6DEA9C4A493556821051B6E5E766B1169F (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_type_8();
		return (bool)((((int32_t)L_0) == ((int32_t)3))? 1 : 0);
	}
}
// System.Collections.Generic.ICollection`1<System.String> LitJson.JsonData::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_get_Keys_m21AD529FE1FA3F6033C33C02A36876055DD36E81 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tC955822E3DE0538A7E51E47B322EF81959359946_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m246F744EBEA43393EE70B77AB8612B66347C356E(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = __this->get_inst_object_5();
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.ICollection`1<!0> System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>::get_Keys() */, IDictionary_2_tC955822E3DE0538A7E51E47B322EF81959359946_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}
}
// System.Boolean LitJson.JsonData::ContainsKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_ContainsKey_mC04E87060914E41DCF6A6D477D99C6DDF367758E (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tC955822E3DE0538A7E51E47B322EF81959359946_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m246F744EBEA43393EE70B77AB8612B66347C356E(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = __this->get_inst_object_5();
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* System.Collections.Generic.ICollection`1<!0> System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>::get_Keys() */, IDictionary_2_tC955822E3DE0538A7E51E47B322EF81959359946_il2cpp_TypeInfo_var, L_1);
		String_t* L_3 = ___key0;
		NullCheck(L_2);
		bool L_4;
		L_4 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.ICollection`1<System.String>::Contains(!0) */, ICollection_1_t286AA3BBFF7FCE401FEFF57AEEC4FDAABA9F95B1_il2cpp_TypeInfo_var, L_2, L_3);
		return L_4;
	}
}
// System.Int32 LitJson.JsonData::System.Collections.ICollection.get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_System_Collections_ICollection_get_Count_m02D00208F1D5208D10D14A43D76B7FDD047EDAA9 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0;
		L_0 = JsonData_get_Count_m9F7A8141AF4D106C72276AF99959A3802B4EC850(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Object LitJson.JsonData::System.Collections.ICollection.get_SyncRoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonData_System_Collections_ICollection_get_SyncRoot_m707BC600CA99C57636E4CB08B0D0D6200AEACC9E (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureCollection_mB2735186EF16DB40EDF8C42A1EE3D0C5007EEB2D(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject * L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(2 /* System.Object System.Collections.ICollection::get_SyncRoot() */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_LitJson_IJsonWrapper_get_IsArray_mB19E73E5A0D27152E342BF9BA08628FB3BB8A012 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = JsonData_get_IsArray_mB1391C7EED937DFB08CEC44D99EAA1564019BD40(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_LitJson_IJsonWrapper_get_IsBoolean_mBB7B61EAE02454D6CE413D54A30D03C956FA7019 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = JsonData_get_IsBoolean_m8CC9354643564C289B936240A715D099C22B6784(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_LitJson_IJsonWrapper_get_IsDouble_mAB937BC97D102C711978ACDB0722661927521F65 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = JsonData_get_IsDouble_m8B938E538CBCA1D3E0CF15CAEF0C24C4D703F0AD(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_LitJson_IJsonWrapper_get_IsInt_mE5EBA6D55AD70374DB5BB5BBA3EDEF73A9E063EC (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = JsonData_get_IsInt_mF27C71503E7B184A4ABA1C1ADC32DBEE3FA201E7(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_LitJson_IJsonWrapper_get_IsLong_m992996C9A7DFC68A72C4908419510FD446EC04C8 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = JsonData_get_IsLong_m7CF2CF7CAFD393488C61DD4A7C0C0F041F8B563C(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_LitJson_IJsonWrapper_get_IsObject_m39091A5EC0F6E805FD3BC81AE2C786713DF3D7B3 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = JsonData_get_IsObject_m8A46CBCD79B8D42B9BBE0E1395FD2FE0D400C86C(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.get_IsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_LitJson_IJsonWrapper_get_IsString_m8EB6DED1692C358824B5C69D6E58735EDF591440 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method)
{
	{
		bool L_0;
		L_0 = JsonData_get_IsString_m125DEE6DEA9C4A493556821051B6E5E766B1169F(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Boolean LitJson.JsonData::System.Collections.IList.get_IsFixedSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_System_Collections_IList_get_IsFixedSize_mCA7B45404FF7D9D9EC8C548A4A5D78833E1D7054 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_mFF243E800CAB50135B94EC463B354843B67FF983(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.Collections.IList::get_IsFixedSize() */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean LitJson.JsonData::System.Collections.IList.get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_System_Collections_IList_get_IsReadOnly_mF7C561DF592289761786CB6610D27E151C0EC395 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_mFF243E800CAB50135B94EC463B354843B67FF983(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.Collections.IList::get_IsReadOnly() */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Object LitJson.JsonData::System.Collections.IDictionary.get_Item(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonData_System_Collections_IDictionary_get_Item_m1F38758B992348A3C27ED4242A39A34580C57052 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m246F744EBEA43393EE70B77AB8612B66347C356E(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___key0;
		NullCheck(L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(0 /* System.Object System.Collections.IDictionary::get_Item(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void LitJson.JsonData::System.Collections.IDictionary.set_Item(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IDictionary_set_Item_m4895BD29B0C2C4B3F2A9CA3EC89A00EC5A64B87A (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___key0;
		if (((String_t*)IsInstSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0013;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_1 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral82A13B351F60D442B29C59FEDF02FF7E52C04163)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_System_Collections_IDictionary_set_Item_m4895BD29B0C2C4B3F2A9CA3EC89A00EC5A64B87A_RuntimeMethod_var)));
	}

IL_0013:
	{
		RuntimeObject * L_2 = ___value1;
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_3;
		L_3 = JsonData_ToJsonData_m66051CC248682E7EF3637E427156E57943303088(__this, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		RuntimeObject * L_4 = ___key0;
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_5 = V_0;
		JsonData_set_Item_mF1D7357D423F914B3A79CE9F856BD1668DDEF52B(__this, ((String_t*)CastclassSealed((RuntimeObject*)L_4, String_t_il2cpp_TypeInfo_var)), L_5, /*hidden argument*/NULL);
		return;
	}
}
// System.Object LitJson.JsonData::System.Collections.IList.get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonData_System_Collections_IList_get_Item_m55319C077A7758A0CEAB51DA2B6C9744083EE39C (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_mFF243E800CAB50135B94EC463B354843B67FF983(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		RuntimeObject * L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject *, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.set_Item(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IList_set_Item_mDAB0254E6A201C663F55A3CE0D6FA732C24482CC (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * V_0 = NULL;
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_mFF243E800CAB50135B94EC463B354843B67FF983(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___value1;
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_2;
		L_2 = JsonData_ToJsonData_m66051CC248682E7EF3637E427156E57943303088(__this, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = ___index0;
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_4 = V_0;
		JsonData_set_Item_m87A62306EF1B2FA142903F90F460FB2ED65C91E9(__this, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// LitJson.JsonData LitJson.JsonData::get_Item(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * JsonData_get_Item_mB1E764D2B928C7A6903160BDCDBA464463A9EFAA (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, String_t* ___prop_name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tC955822E3DE0538A7E51E47B322EF81959359946_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m246F744EBEA43393EE70B77AB8612B66347C356E(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = __this->get_inst_object_5();
		String_t* L_2 = ___prop_name0;
		NullCheck(L_1);
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_3;
		L_3 = InterfaceFuncInvoker1< JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 *, String_t* >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>::get_Item(!0) */, IDictionary_2_tC955822E3DE0538A7E51E47B322EF81959359946_il2cpp_TypeInfo_var, L_1, L_2);
		return L_3;
	}
}
// System.Void LitJson.JsonData::set_Item(System.String,LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_set_Item_mF1D7357D423F914B3A79CE9F856BD1668DDEF52B (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, String_t* ___prop_name0, JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t169023694115FB523BFF0CA44B524C158DA46B23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tC955822E3DE0538A7E51E47B322EF81959359946_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t4B08B71BE47921FC7A106BF67F2A36BD4975222A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mE22F8D519A12B667FF3D6EA6BF98B229CDD39A07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m1AAB0CC2B2402A9B3A87A03355F95936321C2C3A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m246F744EBEA43393EE70B77AB8612B66347C356E(__this, /*hidden argument*/NULL);
		String_t* L_1 = ___prop_name0;
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_2 = ___value1;
		KeyValuePair_2__ctor_mE22F8D519A12B667FF3D6EA6BF98B229CDD39A07((KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E *)(&V_0), L_1, L_2, /*hidden argument*/KeyValuePair_2__ctor_mE22F8D519A12B667FF3D6EA6BF98B229CDD39A07_RuntimeMethod_var);
		RuntimeObject* L_3 = __this->get_inst_object_5();
		String_t* L_4 = ___prop_name0;
		NullCheck(L_3);
		bool L_5;
		L_5 = InterfaceFuncInvoker1< bool, String_t* >::Invoke(3 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>::ContainsKey(!0) */, IDictionary_2_tC955822E3DE0538A7E51E47B322EF81959359946_il2cpp_TypeInfo_var, L_3, L_4);
		if (!L_5)
		{
			goto IL_0061;
		}
	}
	{
		V_1 = 0;
		goto IL_0051;
	}

IL_0022:
	{
		RuntimeObject* L_6 = __this->get_object_list_9();
		int32_t L_7 = V_1;
		NullCheck(L_6);
		KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E  L_8;
		L_8 = InterfaceFuncInvoker1< KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Item(System.Int32) */, IList_1_t4B08B71BE47921FC7A106BF67F2A36BD4975222A_il2cpp_TypeInfo_var, L_6, L_7);
		V_2 = L_8;
		String_t* L_9;
		L_9 = KeyValuePair_2_get_Key_m1AAB0CC2B2402A9B3A87A03355F95936321C2C3A_inline((KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E *)(&V_2), /*hidden argument*/KeyValuePair_2_get_Key_m1AAB0CC2B2402A9B3A87A03355F95936321C2C3A_RuntimeMethod_var);
		String_t* L_10 = ___prop_name0;
		bool L_11;
		L_11 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_9, L_10, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_004d;
		}
	}
	{
		RuntimeObject* L_12 = __this->get_object_list_9();
		int32_t L_13 = V_1;
		KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E  L_14 = V_0;
		NullCheck(L_12);
		InterfaceActionInvoker2< int32_t, KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E  >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::set_Item(System.Int32,!0) */, IList_1_t4B08B71BE47921FC7A106BF67F2A36BD4975222A_il2cpp_TypeInfo_var, L_12, L_13, L_14);
		goto IL_006d;
	}

IL_004d:
	{
		int32_t L_15 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)1));
	}

IL_0051:
	{
		int32_t L_16 = V_1;
		RuntimeObject* L_17 = __this->get_object_list_9();
		NullCheck(L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Count() */, ICollection_1_t169023694115FB523BFF0CA44B524C158DA46B23_il2cpp_TypeInfo_var, L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_0022;
		}
	}
	{
		goto IL_006d;
	}

IL_0061:
	{
		RuntimeObject* L_19 = __this->get_object_list_9();
		KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E  L_20 = V_0;
		NullCheck(L_19);
		InterfaceActionInvoker1< KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::Add(!0) */, ICollection_1_t169023694115FB523BFF0CA44B524C158DA46B23_il2cpp_TypeInfo_var, L_19, L_20);
	}

IL_006d:
	{
		RuntimeObject* L_21 = __this->get_inst_object_5();
		String_t* L_22 = ___prop_name0;
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_23 = ___value1;
		NullCheck(L_21);
		InterfaceActionInvoker2< String_t*, JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>::set_Item(!0,!1) */, IDictionary_2_tC955822E3DE0538A7E51E47B322EF81959359946_il2cpp_TypeInfo_var, L_21, L_22, L_23);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// LitJson.JsonData LitJson.JsonData::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * JsonData_get_Item_m9AF432E7404008258729AE81C61EF0C54C9C021F (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t4B08B71BE47921FC7A106BF67F2A36BD4975222A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t510D070C15B04BB26AEF8259EBB271B87504962A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m40F0202418FC88B5399F20ED515CD6609B4F9DA3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureCollection_mB2735186EF16DB40EDF8C42A1EE3D0C5007EEB2D(__this, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_type_8();
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_001d;
		}
	}
	{
		RuntimeObject* L_2 = __this->get_inst_array_0();
		int32_t L_3 = ___index0;
		NullCheck(L_2);
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_4;
		L_4 = InterfaceFuncInvoker1< JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<LitJson.JsonData>::get_Item(System.Int32) */, IList_1_t510D070C15B04BB26AEF8259EBB271B87504962A_il2cpp_TypeInfo_var, L_2, L_3);
		return L_4;
	}

IL_001d:
	{
		RuntimeObject* L_5 = __this->get_object_list_9();
		int32_t L_6 = ___index0;
		NullCheck(L_5);
		KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E  L_7;
		L_7 = InterfaceFuncInvoker1< KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Item(System.Int32) */, IList_1_t4B08B71BE47921FC7A106BF67F2A36BD4975222A_il2cpp_TypeInfo_var, L_5, L_6);
		V_0 = L_7;
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_8;
		L_8 = KeyValuePair_2_get_Value_m40F0202418FC88B5399F20ED515CD6609B4F9DA3_inline((KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m40F0202418FC88B5399F20ED515CD6609B4F9DA3_RuntimeMethod_var);
		return L_8;
	}
}
// System.Void LitJson.JsonData::set_Item(System.Int32,LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_set_Item_m87A62306EF1B2FA142903F90F460FB2ED65C91E9 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, int32_t ___index0, JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tC955822E3DE0538A7E51E47B322EF81959359946_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t4B08B71BE47921FC7A106BF67F2A36BD4975222A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t510D070C15B04BB26AEF8259EBB271B87504962A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mE22F8D519A12B667FF3D6EA6BF98B229CDD39A07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m1AAB0CC2B2402A9B3A87A03355F95936321C2C3A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureCollection_mB2735186EF16DB40EDF8C42A1EE3D0C5007EEB2D(__this, /*hidden argument*/NULL);
		int32_t L_1 = __this->get_type_8();
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_2 = __this->get_inst_array_0();
		int32_t L_3 = ___index0;
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_4 = ___value1;
		NullCheck(L_2);
		InterfaceActionInvoker2< int32_t, JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<LitJson.JsonData>::set_Item(System.Int32,!0) */, IList_1_t510D070C15B04BB26AEF8259EBB271B87504962A_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		goto IL_005b;
	}

IL_001f:
	{
		RuntimeObject* L_5 = __this->get_object_list_9();
		int32_t L_6 = ___index0;
		NullCheck(L_5);
		KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E  L_7;
		L_7 = InterfaceFuncInvoker1< KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Item(System.Int32) */, IList_1_t4B08B71BE47921FC7A106BF67F2A36BD4975222A_il2cpp_TypeInfo_var, L_5, L_6);
		V_0 = L_7;
		String_t* L_8;
		L_8 = KeyValuePair_2_get_Key_m1AAB0CC2B2402A9B3A87A03355F95936321C2C3A_inline((KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m1AAB0CC2B2402A9B3A87A03355F95936321C2C3A_RuntimeMethod_var);
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_9 = ___value1;
		KeyValuePair_2__ctor_mE22F8D519A12B667FF3D6EA6BF98B229CDD39A07((KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E *)(&V_1), L_8, L_9, /*hidden argument*/KeyValuePair_2__ctor_mE22F8D519A12B667FF3D6EA6BF98B229CDD39A07_RuntimeMethod_var);
		RuntimeObject* L_10 = __this->get_object_list_9();
		int32_t L_11 = ___index0;
		KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E  L_12 = V_1;
		NullCheck(L_10);
		InterfaceActionInvoker2< int32_t, KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E  >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::set_Item(System.Int32,!0) */, IList_1_t4B08B71BE47921FC7A106BF67F2A36BD4975222A_il2cpp_TypeInfo_var, L_10, L_11, L_12);
		RuntimeObject* L_13 = __this->get_inst_object_5();
		String_t* L_14;
		L_14 = KeyValuePair_2_get_Key_m1AAB0CC2B2402A9B3A87A03355F95936321C2C3A_inline((KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m1AAB0CC2B2402A9B3A87A03355F95936321C2C3A_RuntimeMethod_var);
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_15 = ___value1;
		NullCheck(L_13);
		InterfaceActionInvoker2< String_t*, JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,LitJson.JsonData>::set_Item(!0,!1) */, IDictionary_2_tC955822E3DE0538A7E51E47B322EF81959359946_il2cpp_TypeInfo_var, L_13, L_14, L_15);
	}

IL_005b:
	{
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m660BB5B411AD6D6732F9289DB4A56608B7C11D7D (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonData::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m3EA673B42735B66AF7B8EF96184EA2E2C9DDBF4E (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, double ___number0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		__this->set_type_8(6);
		double L_0 = ___number0;
		__this->set_inst_double_2(L_0);
		return;
	}
}
// System.Void LitJson.JsonData::.ctor(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m06DB16A395BAC77D2443EA9FC3DC8F8C9C84344A (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, int64_t ___number0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		__this->set_type_8(5);
		int64_t L_0 = ___number0;
		__this->set_inst_long_4(L_0);
		return;
	}
}
// System.Void LitJson.JsonData::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData__ctor_m0EEBDE7A2966ABF8D7BB49C85F0182B3774C0E02 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject * L_0 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_type_8(7);
		RuntimeObject * L_1 = ___obj0;
		__this->set_inst_boolean_1(((*(bool*)((bool*)UnBox(L_1, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))));
		return;
	}

IL_0022:
	{
		RuntimeObject * L_2 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_2, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))
		{
			goto IL_003e;
		}
	}
	{
		__this->set_type_8(6);
		RuntimeObject * L_3 = ___obj0;
		__this->set_inst_double_2(((*(double*)((double*)UnBox(L_3, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))));
		return;
	}

IL_003e:
	{
		RuntimeObject * L_4 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_4, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))
		{
			goto IL_005a;
		}
	}
	{
		__this->set_type_8(4);
		RuntimeObject * L_5 = ___obj0;
		__this->set_inst_int_3(((*(int32_t*)((int32_t*)UnBox(L_5, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
		return;
	}

IL_005a:
	{
		RuntimeObject * L_6 = ___obj0;
		if (!((RuntimeObject *)IsInstSealed((RuntimeObject*)L_6, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))
		{
			goto IL_0076;
		}
	}
	{
		__this->set_type_8(5);
		RuntimeObject * L_7 = ___obj0;
		__this->set_inst_long_4(((*(int64_t*)((int64_t*)UnBox(L_7, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))));
		return;
	}

IL_0076:
	{
		RuntimeObject * L_8 = ___obj0;
		if (!((String_t*)IsInstSealed((RuntimeObject*)L_8, String_t_il2cpp_TypeInfo_var)))
		{
			goto IL_0092;
		}
	}
	{
		__this->set_type_8(3);
		RuntimeObject * L_9 = ___obj0;
		__this->set_inst_string_6(((String_t*)CastclassSealed((RuntimeObject*)L_9, String_t_il2cpp_TypeInfo_var)));
		return;
	}

IL_0092:
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_10 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_10, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDCAF96AFD9825EC0819F85E3953F28B330B45CC3)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData__ctor_m0EEBDE7A2966ABF8D7BB49C85F0182B3774C0E02_RuntimeMethod_var)));
	}
}
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * JsonData_op_Implicit_m814EFAD5B1CC4F07BBE7EACB8F6CE1CB92AA4ADA (double ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		double L_0 = ___data0;
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_1 = (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 *)il2cpp_codegen_object_new(JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22_il2cpp_TypeInfo_var);
		JsonData__ctor_m3EA673B42735B66AF7B8EF96184EA2E2C9DDBF4E(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// LitJson.JsonData LitJson.JsonData::op_Implicit(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * JsonData_op_Implicit_mAF7B316CD72E65C0C74D9B54AF68061F62863399 (int64_t ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int64_t L_0 = ___data0;
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_1 = (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 *)il2cpp_codegen_object_new(JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22_il2cpp_TypeInfo_var);
		JsonData__ctor_m06DB16A395BAC77D2443EA9FC3DC8F8C9C84344A(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void LitJson.JsonData::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_ICollection_CopyTo_m8E82A3A175E9E438F3A410FBD04DF54C131C6D0B (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, RuntimeArray * ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureCollection_mB2735186EF16DB40EDF8C42A1EE3D0C5007EEB2D(__this, /*hidden argument*/NULL);
		RuntimeArray * L_1 = ___array0;
		int32_t L_2 = ___index1;
		NullCheck(L_0);
		InterfaceActionInvoker2< RuntimeArray *, int32_t >::Invoke(0 /* System.Void System.Collections.ICollection::CopyTo(System.Array,System.Int32) */, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void LitJson.JsonData::System.Collections.IDictionary.Add(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IDictionary_Add_m73CD27BC023752184C1FD154CE86D6581C87ACC8 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t169023694115FB523BFF0CA44B524C158DA46B23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2__ctor_mE22F8D519A12B667FF3D6EA6BF98B229CDD39A07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * V_0 = NULL;
	KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject * L_0 = ___value1;
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_1;
		L_1 = JsonData_ToJsonData_m66051CC248682E7EF3637E427156E57943303088(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		RuntimeObject* L_2;
		L_2 = JsonData_EnsureDictionary_m246F744EBEA43393EE70B77AB8612B66347C356E(__this, /*hidden argument*/NULL);
		RuntimeObject * L_3 = ___key0;
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_4 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(3 /* System.Void System.Collections.IDictionary::Add(System.Object,System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		RuntimeObject * L_5 = ___key0;
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_6 = V_0;
		KeyValuePair_2__ctor_mE22F8D519A12B667FF3D6EA6BF98B229CDD39A07((KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E *)(&V_1), ((String_t*)CastclassSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var)), L_6, /*hidden argument*/KeyValuePair_2__ctor_mE22F8D519A12B667FF3D6EA6BF98B229CDD39A07_RuntimeMethod_var);
		RuntimeObject* L_7 = __this->get_object_list_9();
		KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E  L_8 = V_1;
		NullCheck(L_7);
		InterfaceActionInvoker1< KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::Add(!0) */, ICollection_1_t169023694115FB523BFF0CA44B524C158DA46B23_il2cpp_TypeInfo_var, L_7, L_8);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Boolean LitJson.JsonData::System.Collections.IDictionary.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_System_Collections_IDictionary_Contains_mB6937654D9C8FAB7A065C17699A2E49397433D53 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m246F744EBEA43393EE70B77AB8612B66347C356E(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___key0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(2 /* System.Boolean System.Collections.IDictionary::Contains(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Collections.IDictionaryEnumerator LitJson.JsonData::System.Collections.IDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_System_Collections_IDictionary_GetEnumerator_m16820D04988E33BF5BC3D502196AF9C240DD9F62 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IOrderedDictionary_tDF6229DEC2DA4F759A019863EF5B5CDF4ECBCDF8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IDictionaryEnumerator System.Collections.Specialized.IOrderedDictionary::GetEnumerator() */, IOrderedDictionary_tDF6229DEC2DA4F759A019863EF5B5CDF4ECBCDF8_il2cpp_TypeInfo_var, __this);
		return L_0;
	}
}
// System.Void LitJson.JsonData::System.Collections.IDictionary.Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IDictionary_Remove_m5440B78772475584D6C94101B39E4493CA218148 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, RuntimeObject * ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t169023694115FB523BFF0CA44B524C158DA46B23_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t4B08B71BE47921FC7A106BF67F2A36BD4975222A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m1AAB0CC2B2402A9B3A87A03355F95936321C2C3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m246F744EBEA43393EE70B77AB8612B66347C356E(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___key0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(5 /* System.Void System.Collections.IDictionary::Remove(System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = 0;
		goto IL_0043;
	}

IL_0010:
	{
		RuntimeObject* L_2 = __this->get_object_list_9();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E  L_4;
		L_4 = InterfaceFuncInvoker1< KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E , int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Item(System.Int32) */, IList_1_t4B08B71BE47921FC7A106BF67F2A36BD4975222A_il2cpp_TypeInfo_var, L_2, L_3);
		V_1 = L_4;
		String_t* L_5;
		L_5 = KeyValuePair_2_get_Key_m1AAB0CC2B2402A9B3A87A03355F95936321C2C3A_inline((KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Key_m1AAB0CC2B2402A9B3A87A03355F95936321C2C3A_RuntimeMethod_var);
		RuntimeObject * L_6 = ___key0;
		bool L_7;
		L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, ((String_t*)CastclassSealed((RuntimeObject*)L_6, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		RuntimeObject* L_8 = __this->get_object_list_9();
		int32_t L_9 = V_0;
		NullCheck(L_8);
		InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::RemoveAt(System.Int32) */, IList_1_t4B08B71BE47921FC7A106BF67F2A36BD4975222A_il2cpp_TypeInfo_var, L_8, L_9);
		goto IL_0051;
	}

IL_003f:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0043:
	{
		int32_t L_11 = V_0;
		RuntimeObject* L_12 = __this->get_object_list_9();
		NullCheck(L_12);
		int32_t L_13;
		L_13 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Count() */, ICollection_1_t169023694115FB523BFF0CA44B524C158DA46B23_il2cpp_TypeInfo_var, L_12);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_0010;
		}
	}

IL_0051:
	{
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Collections.IEnumerator LitJson.JsonData::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_System_Collections_IEnumerable_GetEnumerator_m522E387518FE1C21EFF34B0D05C106D3D2D63BFB (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureCollection_mB2735186EF16DB40EDF8C42A1EE3D0C5007EEB2D(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean LitJson.JsonData::LitJson.IJsonWrapper.GetBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_LitJson_IJsonWrapper_GetBoolean_mD31350D767D8DEE6840D522418AE813C256A35C4 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_type_8();
		if ((((int32_t)L_0) == ((int32_t)7)))
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3FB649A9FAAB5634336E279002E9E84D9AFCA0FC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_LitJson_IJsonWrapper_GetBoolean_mD31350D767D8DEE6840D522418AE813C256A35C4_RuntimeMethod_var)));
	}

IL_0014:
	{
		bool L_2 = __this->get_inst_boolean_1();
		return L_2;
	}
}
// System.Double LitJson.JsonData::LitJson.IJsonWrapper.GetDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double JsonData_LitJson_IJsonWrapper_GetDouble_m30E6CB05534E0AD0A5E79727A12C1B1C22125ECD (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_type_8();
		if ((((int32_t)L_0) == ((int32_t)6)))
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE09E38B1A3E02297C148733DE7EED6E5DC8479F5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_LitJson_IJsonWrapper_GetDouble_m30E6CB05534E0AD0A5E79727A12C1B1C22125ECD_RuntimeMethod_var)));
	}

IL_0014:
	{
		double L_2 = __this->get_inst_double_2();
		return L_2;
	}
}
// System.Int32 LitJson.JsonData::LitJson.IJsonWrapper.GetInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_LitJson_IJsonWrapper_GetInt_m487C8DDBB6E834C939DF5937E9C18CF5FC70E4AF (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_type_8();
		if ((((int32_t)L_0) == ((int32_t)4)))
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9CBCD572886BE3E0FA105AA3A7FE08AABFF19B79)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_LitJson_IJsonWrapper_GetInt_m487C8DDBB6E834C939DF5937E9C18CF5FC70E4AF_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_2 = __this->get_inst_int_3();
		return L_2;
	}
}
// System.Int64 LitJson.JsonData::LitJson.IJsonWrapper.GetLong()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t JsonData_LitJson_IJsonWrapper_GetLong_m009C13EE50AAA13F3BDB7F08257E3F432E75F2B0 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_type_8();
		if ((((int32_t)L_0) == ((int32_t)5)))
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral999DBDC959C03AA352D6BBA2EE5B69A49B9F2393)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_LitJson_IJsonWrapper_GetLong_m009C13EE50AAA13F3BDB7F08257E3F432E75F2B0_RuntimeMethod_var)));
	}

IL_0014:
	{
		int64_t L_2 = __this->get_inst_long_4();
		return L_2;
	}
}
// System.String LitJson.JsonData::LitJson.IJsonWrapper.GetString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonData_LitJson_IJsonWrapper_GetString_m6C48E06041C5B4AABB431ABD72B918FF493249D2 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_type_8();
		if ((((int32_t)L_0) == ((int32_t)3)))
		{
			goto IL_0014;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_1 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral447D2D55725EF428A6F4753B53612ECA1764ECE7)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_LitJson_IJsonWrapper_GetString_m6C48E06041C5B4AABB431ABD72B918FF493249D2_RuntimeMethod_var)));
	}

IL_0014:
	{
		String_t* L_2 = __this->get_inst_string_6();
		return L_2;
	}
}
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetBoolean(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_LitJson_IJsonWrapper_SetBoolean_m84E1BB89525B357F1311A4F0716C4373EA5AEC6F (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, bool ___val0, const RuntimeMethod* method)
{
	{
		__this->set_type_8(7);
		bool L_0 = ___val0;
		__this->set_inst_boolean_1(L_0);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetDouble(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_LitJson_IJsonWrapper_SetDouble_m6449EA6B398B77E93BE70AD0B6EBE3EA2C3E7B9B (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, double ___val0, const RuntimeMethod* method)
{
	{
		__this->set_type_8(6);
		double L_0 = ___val0;
		__this->set_inst_double_2(L_0);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_LitJson_IJsonWrapper_SetInt_mE3EA9F7838EACB229034E2394182809A907A8284 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, int32_t ___val0, const RuntimeMethod* method)
{
	{
		__this->set_type_8(4);
		int32_t L_0 = ___val0;
		__this->set_inst_int_3(L_0);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetLong(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_LitJson_IJsonWrapper_SetLong_m0B91780DD2C7E2AE8523E243C23B3EEB63E10BBC (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, int64_t ___val0, const RuntimeMethod* method)
{
	{
		__this->set_type_8(5);
		int64_t L_0 = ___val0;
		__this->set_inst_long_4(L_0);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::LitJson.IJsonWrapper.SetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_LitJson_IJsonWrapper_SetString_m2F9E0702DE214FF3D32C1646B82C3B31485091EB (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, String_t* ___val0, const RuntimeMethod* method)
{
	{
		__this->set_type_8(3);
		String_t* L_0 = ___val0;
		__this->set_inst_string_6(L_0);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Int32 LitJson.JsonData::System.Collections.IList.Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_System_Collections_IList_Add_m3B1281B2962A8591CDE67BF7417AD56825E0917A (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___value0;
		int32_t L_1;
		L_1 = JsonData_Add_m3F14BDA278B2F5E65DAC1910232E0DE43AE5A172(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IList_Clear_m1DB06266C6F9E54CF20BE809D8F2074984C41869 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_mFF243E800CAB50135B94EC463B354843B67FF983(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(4 /* System.Void System.Collections.IList::Clear() */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_0);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Boolean LitJson.JsonData::System.Collections.IList.Contains(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_System_Collections_IList_Contains_m3603006B56C497C75D00D8DDCC6FD7EED39C302D (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_mFF243E800CAB50135B94EC463B354843B67FF983(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(3 /* System.Boolean System.Collections.IList::Contains(System.Object) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Int32 LitJson.JsonData::System.Collections.IList.IndexOf(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_System_Collections_IList_IndexOf_m4B8CB277B6E2FE72B1AE021125FDE74367AD7ED6 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_mFF243E800CAB50135B94EC463B354843B67FF983(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(7 /* System.Int32 System.Collections.IList::IndexOf(System.Object) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_0, L_1);
		return L_2;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.Insert(System.Int32,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IList_Insert_mD30B85C52373060535C6C4E62AF7B078DCE2B2CC (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_mFF243E800CAB50135B94EC463B354843B67FF983(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___index0;
		RuntimeObject * L_2 = ___value1;
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, RuntimeObject * >::Invoke(8 /* System.Void System.Collections.IList::Insert(System.Int32,System.Object) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.Remove(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IList_Remove_m922E8100A2FE495711C96623FF3AE8DCBA69A7DA (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_mFF243E800CAB50135B94EC463B354843B67FF983(__this, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< RuntimeObject * >::Invoke(9 /* System.Void System.Collections.IList::Remove(System.Object) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_0, L_1);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Void LitJson.JsonData::System.Collections.IList.RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_System_Collections_IList_RemoveAt_m98FB18F8258CDADD4B26A21F303296ED39914FE0 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureList_mFF243E800CAB50135B94EC463B354843B67FF983(__this, /*hidden argument*/NULL);
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		InterfaceActionInvoker1< int32_t >::Invoke(10 /* System.Void System.Collections.IList::RemoveAt(System.Int32) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_0, L_1);
		__this->set_json_7((String_t*)NULL);
		return;
	}
}
// System.Collections.IDictionaryEnumerator LitJson.JsonData::System.Collections.Specialized.IOrderedDictionary.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_System_Collections_Specialized_IOrderedDictionary_GetEnumerator_m9041F52F14D2EF1F0331DB4F8F6E2C33C9377238 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t0B9E85628EE4456D8FE6E476E74A86F861ABC03D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OrderedDictionaryEnumerator_t41C60BB9B4656C74962492FF2832858504473791_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonData_EnsureDictionary_m246F744EBEA43393EE70B77AB8612B66347C356E(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1 = __this->get_object_list_9();
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::GetEnumerator() */, IEnumerable_1_t0B9E85628EE4456D8FE6E476E74A86F861ABC03D_il2cpp_TypeInfo_var, L_1);
		OrderedDictionaryEnumerator_t41C60BB9B4656C74962492FF2832858504473791 * L_3 = (OrderedDictionaryEnumerator_t41C60BB9B4656C74962492FF2832858504473791 *)il2cpp_codegen_object_new(OrderedDictionaryEnumerator_t41C60BB9B4656C74962492FF2832858504473791_il2cpp_TypeInfo_var);
		OrderedDictionaryEnumerator__ctor_mA38D62F592FFA96F062546B17BE14CEF7457CC0D(L_3, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Collections.ICollection LitJson.JsonData::EnsureCollection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureCollection_mB2735186EF16DB40EDF8C42A1EE3D0C5007EEB2D (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_type_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_inst_array_0();
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_1, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var));
	}

IL_0015:
	{
		int32_t L_2 = __this->get_type_8();
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_002a;
		}
	}
	{
		RuntimeObject* L_3 = __this->get_inst_object_5();
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_3, ICollection_tC1E1DED86C0A66845675392606B302452210D5DA_il2cpp_TypeInfo_var));
	}

IL_002a:
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_4 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_4, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5149D2AD92135C0DFA7131CADBFCC669275E96B5)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_EnsureCollection_mB2735186EF16DB40EDF8C42A1EE3D0C5007EEB2D_RuntimeMethod_var)));
	}
}
// System.Collections.IDictionary LitJson.JsonData::EnsureDictionary()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureDictionary_m246F744EBEA43393EE70B77AB8612B66347C356E (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mED1D86EA443CCD2676703C1F9C7E562C036CA6AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t561523F5E3C140ED31D9B9CEDEBAF048916097E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5C7FBF0259C3C8D2D595043CB1D1E96F4D5AB5F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t140BFB4B967C4C1B5334856B4265C018EF29DE3E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_type_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_inst_object_5();
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var));
	}

IL_0015:
	{
		int32_t L_2 = __this->get_type_8();
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6DEED36FFF14869BC9ABC87FCC45B3DA6985BEEC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_EnsureDictionary_m246F744EBEA43393EE70B77AB8612B66347C356E_RuntimeMethod_var)));
	}

IL_0028:
	{
		__this->set_type_8(1);
		Dictionary_2_t561523F5E3C140ED31D9B9CEDEBAF048916097E9 * L_4 = (Dictionary_2_t561523F5E3C140ED31D9B9CEDEBAF048916097E9 *)il2cpp_codegen_object_new(Dictionary_2_t561523F5E3C140ED31D9B9CEDEBAF048916097E9_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mED1D86EA443CCD2676703C1F9C7E562C036CA6AB(L_4, /*hidden argument*/Dictionary_2__ctor_mED1D86EA443CCD2676703C1F9C7E562C036CA6AB_RuntimeMethod_var);
		__this->set_inst_object_5(L_4);
		List_1_t140BFB4B967C4C1B5334856B4265C018EF29DE3E * L_5 = (List_1_t140BFB4B967C4C1B5334856B4265C018EF29DE3E *)il2cpp_codegen_object_new(List_1_t140BFB4B967C4C1B5334856B4265C018EF29DE3E_il2cpp_TypeInfo_var);
		List_1__ctor_m5C7FBF0259C3C8D2D595043CB1D1E96F4D5AB5F1(L_5, /*hidden argument*/List_1__ctor_m5C7FBF0259C3C8D2D595043CB1D1E96F4D5AB5F1_RuntimeMethod_var);
		__this->set_object_list_9(L_5);
		RuntimeObject* L_6 = __this->get_inst_object_5();
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_6, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var));
	}
}
// System.Collections.IList LitJson.JsonData::EnsureList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonData_EnsureList_mFF243E800CAB50135B94EC463B354843B67FF983 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m59DE115CE21F199388C58781EA6B6E2DF8BA3139_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFF8C524282266EE4C4A7EE822259B9440F8C21F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_type_8();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_inst_array_0();
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_1, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
	}

IL_0015:
	{
		int32_t L_2 = __this->get_type_8();
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_3 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6BAB8F53EE6BDD0369569E27A174F474EA370914)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonData_EnsureList_mFF243E800CAB50135B94EC463B354843B67FF983_RuntimeMethod_var)));
	}

IL_0028:
	{
		__this->set_type_8(2);
		List_1_tFF8C524282266EE4C4A7EE822259B9440F8C21F3 * L_4 = (List_1_tFF8C524282266EE4C4A7EE822259B9440F8C21F3 *)il2cpp_codegen_object_new(List_1_tFF8C524282266EE4C4A7EE822259B9440F8C21F3_il2cpp_TypeInfo_var);
		List_1__ctor_m59DE115CE21F199388C58781EA6B6E2DF8BA3139(L_4, /*hidden argument*/List_1__ctor_m59DE115CE21F199388C58781EA6B6E2DF8BA3139_RuntimeMethod_var);
		__this->set_inst_array_0(L_4);
		RuntimeObject* L_5 = __this->get_inst_array_0();
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_5, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var));
	}
}
// LitJson.JsonData LitJson.JsonData::ToJsonData(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * JsonData_ToJsonData_m66051CC248682E7EF3637E427156E57943303088 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 *)NULL;
	}

IL_0005:
	{
		RuntimeObject * L_1 = ___obj0;
		if (!((JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 *)IsInstClass((RuntimeObject*)L_1, JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22_il2cpp_TypeInfo_var)))
		{
			goto IL_0014;
		}
	}
	{
		RuntimeObject * L_2 = ___obj0;
		return ((JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 *)CastclassClass((RuntimeObject*)L_2, JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22_il2cpp_TypeInfo_var));
	}

IL_0014:
	{
		RuntimeObject * L_3 = ___obj0;
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_4 = (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 *)il2cpp_codegen_object_new(JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22_il2cpp_TypeInfo_var);
		JsonData__ctor_m0EEBDE7A2966ABF8D7BB49C85F0182B3774C0E02(L_4, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Void LitJson.JsonData::WriteJson(LitJson.IJsonWrapper,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_WriteJson_mF3EF76C1227C33E91452AF5ACA38BBB9E828B23C (RuntimeObject* ___obj0, JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJsonWrapper_t95FB80D49B5F79F59317F3B6FCF40B1426F8124F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		RuntimeObject* L_0 = ___obj0;
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * L_1 = ___writer1;
		NullCheck(L_1);
		JsonWriter_Write_m1A8BED62EC95E168E5BE5F8DB3C8E4C89EE50A45(L_1, (String_t*)NULL, /*hidden argument*/NULL);
		return;
	}

IL_000b:
	{
		RuntimeObject* L_2 = ___obj0;
		NullCheck(L_2);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(6 /* System.Boolean LitJson.IJsonWrapper::get_IsString() */, IJsonWrapper_t95FB80D49B5F79F59317F3B6FCF40B1426F8124F_il2cpp_TypeInfo_var, L_2);
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * L_4 = ___writer1;
		RuntimeObject* L_5 = ___obj0;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = InterfaceFuncInvoker0< String_t* >::Invoke(11 /* System.String LitJson.IJsonWrapper::GetString() */, IJsonWrapper_t95FB80D49B5F79F59317F3B6FCF40B1426F8124F_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_4);
		JsonWriter_Write_m1A8BED62EC95E168E5BE5F8DB3C8E4C89EE50A45(L_4, L_6, /*hidden argument*/NULL);
		return;
	}

IL_0020:
	{
		RuntimeObject* L_7 = ___obj0;
		NullCheck(L_7);
		bool L_8;
		L_8 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean LitJson.IJsonWrapper::get_IsBoolean() */, IJsonWrapper_t95FB80D49B5F79F59317F3B6FCF40B1426F8124F_il2cpp_TypeInfo_var, L_7);
		if (!L_8)
		{
			goto IL_0035;
		}
	}
	{
		JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * L_9 = ___writer1;
		RuntimeObject* L_10 = ___obj0;
		NullCheck(L_10);
		bool L_11;
		L_11 = InterfaceFuncInvoker0< bool >::Invoke(7 /* System.Boolean LitJson.IJsonWrapper::GetBoolean() */, IJsonWrapper_t95FB80D49B5F79F59317F3B6FCF40B1426F8124F_il2cpp_TypeInfo_var, L_10);
		NullCheck(L_9);
		JsonWriter_Write_m943A813A4F6AF6DA968C2C8DC1553029522011F0(L_9, L_11, /*hidden argument*/NULL);
		return;
	}

IL_0035:
	{
		RuntimeObject* L_12 = ___obj0;
		NullCheck(L_12);
		bool L_13;
		L_13 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean LitJson.IJsonWrapper::get_IsDouble() */, IJsonWrapper_t95FB80D49B5F79F59317F3B6FCF40B1426F8124F_il2cpp_TypeInfo_var, L_12);
		if (!L_13)
		{
			goto IL_004a;
		}
	}
	{
		JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * L_14 = ___writer1;
		RuntimeObject* L_15 = ___obj0;
		NullCheck(L_15);
		double L_16;
		L_16 = InterfaceFuncInvoker0< double >::Invoke(8 /* System.Double LitJson.IJsonWrapper::GetDouble() */, IJsonWrapper_t95FB80D49B5F79F59317F3B6FCF40B1426F8124F_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_14);
		JsonWriter_Write_mF1F000E089B280D3D81FF45EFBD65434D43132AC(L_14, L_16, /*hidden argument*/NULL);
		return;
	}

IL_004a:
	{
		RuntimeObject* L_17 = ___obj0;
		NullCheck(L_17);
		bool L_18;
		L_18 = InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean LitJson.IJsonWrapper::get_IsInt() */, IJsonWrapper_t95FB80D49B5F79F59317F3B6FCF40B1426F8124F_il2cpp_TypeInfo_var, L_17);
		if (!L_18)
		{
			goto IL_005f;
		}
	}
	{
		JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * L_19 = ___writer1;
		RuntimeObject* L_20 = ___obj0;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = InterfaceFuncInvoker0< int32_t >::Invoke(9 /* System.Int32 LitJson.IJsonWrapper::GetInt() */, IJsonWrapper_t95FB80D49B5F79F59317F3B6FCF40B1426F8124F_il2cpp_TypeInfo_var, L_20);
		NullCheck(L_19);
		JsonWriter_Write_mCF4C1D57638E36B9BA8A8530AD06A6A7F57BADDA(L_19, L_21, /*hidden argument*/NULL);
		return;
	}

IL_005f:
	{
		RuntimeObject* L_22 = ___obj0;
		NullCheck(L_22);
		bool L_23;
		L_23 = InterfaceFuncInvoker0< bool >::Invoke(4 /* System.Boolean LitJson.IJsonWrapper::get_IsLong() */, IJsonWrapper_t95FB80D49B5F79F59317F3B6FCF40B1426F8124F_il2cpp_TypeInfo_var, L_22);
		if (!L_23)
		{
			goto IL_0074;
		}
	}
	{
		JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * L_24 = ___writer1;
		RuntimeObject* L_25 = ___obj0;
		NullCheck(L_25);
		int64_t L_26;
		L_26 = InterfaceFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 LitJson.IJsonWrapper::GetLong() */, IJsonWrapper_t95FB80D49B5F79F59317F3B6FCF40B1426F8124F_il2cpp_TypeInfo_var, L_25);
		NullCheck(L_24);
		JsonWriter_Write_m4B9B4BDC347A4A5053CB5FEC9A1C21DBD1D36E86(L_24, L_26, /*hidden argument*/NULL);
		return;
	}

IL_0074:
	{
		RuntimeObject* L_27 = ___obj0;
		NullCheck(L_27);
		bool L_28;
		L_28 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean LitJson.IJsonWrapper::get_IsArray() */, IJsonWrapper_t95FB80D49B5F79F59317F3B6FCF40B1426F8124F_il2cpp_TypeInfo_var, L_27);
		if (!L_28)
		{
			goto IL_00be;
		}
	}
	{
		JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * L_29 = ___writer1;
		NullCheck(L_29);
		JsonWriter_WriteArrayStart_m718A90F07C4CC639B5972028842511CDA10BB307(L_29, /*hidden argument*/NULL);
		RuntimeObject* L_30 = ___obj0;
		NullCheck(L_30);
		RuntimeObject* L_31;
		L_31 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t47A618747A1BB2A868710316F7372094849163A2_il2cpp_TypeInfo_var, L_30);
		V_0 = L_31;
	}

IL_0089:
	try
	{ // begin try (depth: 1)
		{
			goto IL_009c;
		}

IL_008b:
		{
			RuntimeObject* L_32 = V_0;
			NullCheck(L_32);
			RuntimeObject * L_33;
			L_33 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_32);
			JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * L_34 = ___writer1;
			JsonData_WriteJson_mF3EF76C1227C33E91452AF5ACA38BBB9E828B23C(((JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 *)CastclassClass((RuntimeObject*)L_33, JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22_il2cpp_TypeInfo_var)), L_34, /*hidden argument*/NULL);
		}

IL_009c:
		{
			RuntimeObject* L_35 = V_0;
			NullCheck(L_35);
			bool L_36;
			L_36 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_35);
			if (L_36)
			{
				goto IL_008b;
			}
		}

IL_00a4:
		{
			IL2CPP_LEAVE(0xB7, FINALLY_00a6);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a6;
	}

FINALLY_00a6:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_37 = V_0;
			V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_37, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_38 = V_1;
			if (!L_38)
			{
				goto IL_00b6;
			}
		}

IL_00b0:
		{
			RuntimeObject* L_39 = V_1;
			NullCheck(L_39);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_39);
		}

IL_00b6:
		{
			IL2CPP_END_FINALLY(166)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(166)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB7, IL_00b7)
	}

IL_00b7:
	{
		JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * L_40 = ___writer1;
		NullCheck(L_40);
		JsonWriter_WriteArrayEnd_m350C5F39EF6BBC44CA6E54D79065E78D2842F596(L_40, /*hidden argument*/NULL);
		return;
	}

IL_00be:
	{
		RuntimeObject* L_41 = ___obj0;
		NullCheck(L_41);
		bool L_42;
		L_42 = InterfaceFuncInvoker0< bool >::Invoke(5 /* System.Boolean LitJson.IJsonWrapper::get_IsObject() */, IJsonWrapper_t95FB80D49B5F79F59317F3B6FCF40B1426F8124F_il2cpp_TypeInfo_var, L_41);
		if (!L_42)
		{
			goto IL_0127;
		}
	}
	{
		JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * L_43 = ___writer1;
		NullCheck(L_43);
		JsonWriter_WriteObjectStart_m55D25205F274F9FDA01323A8BFC72891F37C3647(L_43, /*hidden argument*/NULL);
		RuntimeObject* L_44 = ___obj0;
		NullCheck(L_44);
		RuntimeObject* L_45;
		L_45 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* System.Collections.IDictionaryEnumerator System.Collections.IDictionary::GetEnumerator() */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_44);
		V_2 = L_45;
	}

IL_00d3:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0105;
		}

IL_00d5:
		{
			RuntimeObject* L_46 = V_2;
			NullCheck(L_46);
			RuntimeObject * L_47;
			L_47 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_46);
			V_3 = ((*(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)((DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)UnBox(L_47, DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var))));
			JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * L_48 = ___writer1;
			RuntimeObject * L_49;
			L_49 = DictionaryEntry_get_Key_m9A53AE1FA4CA017F0A7353F71658A9C36079E1D7_inline((DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)(&V_3), /*hidden argument*/NULL);
			NullCheck(L_48);
			JsonWriter_WritePropertyName_m863853939268B293D5404C24D3A048943262E8C3(L_48, ((String_t*)CastclassSealed((RuntimeObject*)L_49, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			RuntimeObject * L_50;
			L_50 = DictionaryEntry_get_Value_m2D618D04C0A8EA2A065B171F528FEA98B059F9BC_inline((DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 *)(&V_3), /*hidden argument*/NULL);
			JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * L_51 = ___writer1;
			JsonData_WriteJson_mF3EF76C1227C33E91452AF5ACA38BBB9E828B23C(((JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 *)CastclassClass((RuntimeObject*)L_50, JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22_il2cpp_TypeInfo_var)), L_51, /*hidden argument*/NULL);
		}

IL_0105:
		{
			RuntimeObject* L_52 = V_2;
			NullCheck(L_52);
			bool L_53;
			L_53 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_52);
			if (L_53)
			{
				goto IL_00d5;
			}
		}

IL_010d:
		{
			IL2CPP_LEAVE(0x120, FINALLY_010f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_010f;
	}

FINALLY_010f:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_54 = V_2;
			V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_54, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_55 = V_1;
			if (!L_55)
			{
				goto IL_011f;
			}
		}

IL_0119:
		{
			RuntimeObject* L_56 = V_1;
			NullCheck(L_56);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_56);
		}

IL_011f:
		{
			IL2CPP_END_FINALLY(271)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(271)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x120, IL_0120)
	}

IL_0120:
	{
		JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * L_57 = ___writer1;
		NullCheck(L_57);
		JsonWriter_WriteObjectEnd_m4AD1C04B7B225270FACABF25C0A0F5633C35315A(L_57, /*hidden argument*/NULL);
		return;
	}

IL_0127:
	{
		return;
	}
}
// System.Int32 LitJson.JsonData::Add(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonData_Add_m3F14BDA278B2F5E65DAC1910232E0DE43AE5A172 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___value0;
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_1;
		L_1 = JsonData_ToJsonData_m66051CC248682E7EF3637E427156E57943303088(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		__this->set_json_7((String_t*)NULL);
		RuntimeObject* L_2;
		L_2 = JsonData_EnsureList_mFF243E800CAB50135B94EC463B354843B67FF983(__this, /*hidden argument*/NULL);
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_2, L_3);
		return L_4;
	}
}
// System.Boolean LitJson.JsonData::Equals(LitJson.JsonData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonData_Equals_mCB80F0B18E072B5D242A0BF66EE40A86C0C2B379 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * ___x0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_0 = ___x0;
		if (L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)0;
	}

IL_0005:
	{
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_1 = ___x0;
		NullCheck(L_1);
		int32_t L_2 = L_1->get_type_8();
		int32_t L_3 = __this->get_type_8();
		if ((((int32_t)L_2) == ((int32_t)L_3)))
		{
			goto IL_0039;
		}
	}
	{
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_4 = ___x0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_type_8();
		if ((((int32_t)L_5) == ((int32_t)4)))
		{
			goto IL_0025;
		}
	}
	{
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_6 = ___x0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_type_8();
		if ((!(((uint32_t)L_7) == ((uint32_t)5))))
		{
			goto IL_0037;
		}
	}

IL_0025:
	{
		int32_t L_8 = __this->get_type_8();
		if ((((int32_t)L_8) == ((int32_t)4)))
		{
			goto IL_0039;
		}
	}
	{
		int32_t L_9 = __this->get_type_8();
		if ((((int32_t)L_9) == ((int32_t)5)))
		{
			goto IL_0039;
		}
	}

IL_0037:
	{
		return (bool)0;
	}

IL_0039:
	{
		int32_t L_10 = __this->get_type_8();
		V_0 = L_10;
		int32_t L_11 = V_0;
		switch (L_11)
		{
			case 0:
			{
				goto IL_006b;
			}
			case 1:
			{
				goto IL_006d;
			}
			case 2:
			{
				goto IL_007f;
			}
			case 3:
			{
				goto IL_0091;
			}
			case 4:
			{
				goto IL_00a3;
			}
			case 5:
			{
				goto IL_00ee;
			}
			case 6:
			{
				goto IL_0139;
			}
			case 7:
			{
				goto IL_014b;
			}
		}
	}
	{
		goto IL_015d;
	}

IL_006b:
	{
		return (bool)1;
	}

IL_006d:
	{
		RuntimeObject* L_12 = __this->get_inst_object_5();
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_13 = ___x0;
		NullCheck(L_13);
		RuntimeObject* L_14 = L_13->get_inst_object_5();
		NullCheck(L_12);
		bool L_15;
		L_15 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_12, L_14);
		return L_15;
	}

IL_007f:
	{
		RuntimeObject* L_16 = __this->get_inst_array_0();
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_17 = ___x0;
		NullCheck(L_17);
		RuntimeObject* L_18 = L_17->get_inst_array_0();
		NullCheck(L_16);
		bool L_19;
		L_19 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_16, L_18);
		return L_19;
	}

IL_0091:
	{
		String_t* L_20 = __this->get_inst_string_6();
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_21 = ___x0;
		NullCheck(L_21);
		String_t* L_22 = L_21->get_inst_string_6();
		NullCheck(L_20);
		bool L_23;
		L_23 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_20, L_22, /*hidden argument*/NULL);
		return L_23;
	}

IL_00a3:
	{
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_24 = ___x0;
		NullCheck(L_24);
		bool L_25;
		L_25 = JsonData_get_IsLong_m7CF2CF7CAFD393488C61DD4A7C0C0F041F8B563C(L_24, /*hidden argument*/NULL);
		if (!L_25)
		{
			goto IL_00dc;
		}
	}
	{
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_26 = ___x0;
		NullCheck(L_26);
		int64_t L_27 = L_26->get_inst_long_4();
		if ((((int64_t)L_27) < ((int64_t)((int64_t)((int64_t)((int32_t)-2147483648LL))))))
		{
			goto IL_00c7;
		}
	}
	{
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_28 = ___x0;
		NullCheck(L_28);
		int64_t L_29 = L_28->get_inst_long_4();
		if ((((int64_t)L_29) <= ((int64_t)((int64_t)((int64_t)((int32_t)2147483647LL))))))
		{
			goto IL_00c9;
		}
	}

IL_00c7:
	{
		return (bool)0;
	}

IL_00c9:
	{
		int32_t* L_30 = __this->get_address_of_inst_int_3();
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_31 = ___x0;
		NullCheck(L_31);
		int64_t L_32 = L_31->get_inst_long_4();
		bool L_33;
		L_33 = Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4((int32_t*)L_30, ((int32_t)((int32_t)L_32)), /*hidden argument*/NULL);
		return L_33;
	}

IL_00dc:
	{
		int32_t* L_34 = __this->get_address_of_inst_int_3();
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_35 = ___x0;
		NullCheck(L_35);
		int32_t L_36 = L_35->get_inst_int_3();
		bool L_37;
		L_37 = Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4((int32_t*)L_34, L_36, /*hidden argument*/NULL);
		return L_37;
	}

IL_00ee:
	{
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_38 = ___x0;
		NullCheck(L_38);
		bool L_39;
		L_39 = JsonData_get_IsInt_mF27C71503E7B184A4ABA1C1ADC32DBEE3FA201E7(L_38, /*hidden argument*/NULL);
		if (!L_39)
		{
			goto IL_0127;
		}
	}
	{
		int64_t L_40 = __this->get_inst_long_4();
		if ((((int64_t)L_40) < ((int64_t)((int64_t)((int64_t)((int32_t)-2147483648LL))))))
		{
			goto IL_0112;
		}
	}
	{
		int64_t L_41 = __this->get_inst_long_4();
		if ((((int64_t)L_41) <= ((int64_t)((int64_t)((int64_t)((int32_t)2147483647LL))))))
		{
			goto IL_0114;
		}
	}

IL_0112:
	{
		return (bool)0;
	}

IL_0114:
	{
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_42 = ___x0;
		NullCheck(L_42);
		int32_t* L_43 = L_42->get_address_of_inst_int_3();
		int64_t L_44 = __this->get_inst_long_4();
		bool L_45;
		L_45 = Int32_Equals_mA73E9B3A01B9B9151C262C1E1A56C6AB4891A5E4((int32_t*)L_43, ((int32_t)((int32_t)L_44)), /*hidden argument*/NULL);
		return L_45;
	}

IL_0127:
	{
		int64_t* L_46 = __this->get_address_of_inst_long_4();
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_47 = ___x0;
		NullCheck(L_47);
		int64_t L_48 = L_47->get_inst_long_4();
		bool L_49;
		L_49 = Int64_Equals_m22F1F9E00328D15F2EF44D9A82F185C9A8D0A697((int64_t*)L_46, L_48, /*hidden argument*/NULL);
		return L_49;
	}

IL_0139:
	{
		double* L_50 = __this->get_address_of_inst_double_2();
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_51 = ___x0;
		NullCheck(L_51);
		double L_52 = L_51->get_inst_double_2();
		bool L_53;
		L_53 = Double_Equals_m8C171E8C7F556087E707D1396DB29D1D8B21A46B((double*)L_50, L_52, /*hidden argument*/NULL);
		return L_53;
	}

IL_014b:
	{
		bool* L_54 = __this->get_address_of_inst_boolean_1();
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_55 = ___x0;
		NullCheck(L_55);
		bool L_56 = L_55->get_inst_boolean_1();
		bool L_57;
		L_57 = Boolean_Equals_mC63D03B4DE1BBC68835530A9E0384FDDB0AC1A3D((bool*)L_54, L_56, /*hidden argument*/NULL);
		return L_57;
	}

IL_015d:
	{
		return (bool)0;
	}
}
// System.Void LitJson.JsonData::SetJsonType(LitJson.JsonType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonData_SetJsonType_m196C7ECBCE20A0EBE9B5DCB70E7CA68665F00AA4 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, int32_t ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mED1D86EA443CCD2676703C1F9C7E562C036CA6AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t561523F5E3C140ED31D9B9CEDEBAF048916097E9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m59DE115CE21F199388C58781EA6B6E2DF8BA3139_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m5C7FBF0259C3C8D2D595043CB1D1E96F4D5AB5F1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t140BFB4B967C4C1B5334856B4265C018EF29DE3E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFF8C524282266EE4C4A7EE822259B9440F8C21F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_type_8();
		int32_t L_1 = ___type0;
		if ((!(((uint32_t)L_0) == ((uint32_t)L_1))))
		{
			goto IL_000a;
		}
	}
	{
		return;
	}

IL_000a:
	{
		int32_t L_2 = ___type0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_008b;
			}
			case 1:
			{
				goto IL_0032;
			}
			case 2:
			{
				goto IL_004a;
			}
			case 3:
			{
				goto IL_0057;
			}
			case 4:
			{
				goto IL_0060;
			}
			case 5:
			{
				goto IL_0069;
			}
			case 6:
			{
				goto IL_0073;
			}
			case 7:
			{
				goto IL_0084;
			}
		}
	}
	{
		goto IL_008b;
	}

IL_0032:
	{
		Dictionary_2_t561523F5E3C140ED31D9B9CEDEBAF048916097E9 * L_3 = (Dictionary_2_t561523F5E3C140ED31D9B9CEDEBAF048916097E9 *)il2cpp_codegen_object_new(Dictionary_2_t561523F5E3C140ED31D9B9CEDEBAF048916097E9_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mED1D86EA443CCD2676703C1F9C7E562C036CA6AB(L_3, /*hidden argument*/Dictionary_2__ctor_mED1D86EA443CCD2676703C1F9C7E562C036CA6AB_RuntimeMethod_var);
		__this->set_inst_object_5(L_3);
		List_1_t140BFB4B967C4C1B5334856B4265C018EF29DE3E * L_4 = (List_1_t140BFB4B967C4C1B5334856B4265C018EF29DE3E *)il2cpp_codegen_object_new(List_1_t140BFB4B967C4C1B5334856B4265C018EF29DE3E_il2cpp_TypeInfo_var);
		List_1__ctor_m5C7FBF0259C3C8D2D595043CB1D1E96F4D5AB5F1(L_4, /*hidden argument*/List_1__ctor_m5C7FBF0259C3C8D2D595043CB1D1E96F4D5AB5F1_RuntimeMethod_var);
		__this->set_object_list_9(L_4);
		goto IL_008b;
	}

IL_004a:
	{
		List_1_tFF8C524282266EE4C4A7EE822259B9440F8C21F3 * L_5 = (List_1_tFF8C524282266EE4C4A7EE822259B9440F8C21F3 *)il2cpp_codegen_object_new(List_1_tFF8C524282266EE4C4A7EE822259B9440F8C21F3_il2cpp_TypeInfo_var);
		List_1__ctor_m59DE115CE21F199388C58781EA6B6E2DF8BA3139(L_5, /*hidden argument*/List_1__ctor_m59DE115CE21F199388C58781EA6B6E2DF8BA3139_RuntimeMethod_var);
		__this->set_inst_array_0(L_5);
		goto IL_008b;
	}

IL_0057:
	{
		__this->set_inst_string_6((String_t*)NULL);
		goto IL_008b;
	}

IL_0060:
	{
		__this->set_inst_int_3(0);
		goto IL_008b;
	}

IL_0069:
	{
		__this->set_inst_long_4(((int64_t)((int64_t)0)));
		goto IL_008b;
	}

IL_0073:
	{
		__this->set_inst_double_2((0.0));
		goto IL_008b;
	}

IL_0084:
	{
		__this->set_inst_boolean_1((bool)0);
	}

IL_008b:
	{
		int32_t L_6 = ___type0;
		__this->set_type_8(L_6);
		return;
	}
}
// System.String LitJson.JsonData::ToJson()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonData_ToJson_m3D3867AAE09571385AEDE1C68E4E5F4E5D418AA6 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_tF9057404715003DE4AB771FF865770690910FB89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * V_0 = NULL;
	JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * V_1 = NULL;
	{
		String_t* L_0 = __this->get_json_7();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		String_t* L_1 = __this->get_json_7();
		return L_1;
	}

IL_000f:
	{
		StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_2 = (StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 *)il2cpp_codegen_object_new(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_il2cpp_TypeInfo_var);
		StringWriter__ctor_mBA5BDF99FA78C7B9402872EBB9324A9311040264(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_3 = V_0;
		JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * L_4 = (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 *)il2cpp_codegen_object_new(JsonWriter_tF9057404715003DE4AB771FF865770690910FB89_il2cpp_TypeInfo_var);
		JsonWriter__ctor_m674F2DE75D11F51D8E04A9F05598C53FB5FA9081(L_4, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * L_5 = V_1;
		NullCheck(L_5);
		JsonWriter_set_Validate_m7E0C408161622AC5EA0F4585E2CDFD63277BB49E_inline(L_5, (bool)0, /*hidden argument*/NULL);
		JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * L_6 = V_1;
		JsonData_WriteJson_mF3EF76C1227C33E91452AF5ACA38BBB9E828B23C(__this, L_6, /*hidden argument*/NULL);
		StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_7 = V_0;
		NullCheck(L_7);
		String_t* L_8;
		L_8 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_7);
		__this->set_json_7(L_8);
		String_t* L_9 = __this->get_json_7();
		return L_9;
	}
}
// System.String LitJson.JsonData::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonData_ToString_m5D55D97706459F70C7837782711A207F24C34595 (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45C6FAA87CD0123CD17D47EA53DEAA5A748C6A04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBBC2182A95A29E2752FA60C92F779B599B7B43ED);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE53B6FBD162C91AD5A0438452E33647A61BBA15D);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_type_8();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0063;
			}
			case 1:
			{
				goto IL_002d;
			}
			case 2:
			{
				goto IL_0069;
			}
			case 3:
			{
				goto IL_004b;
			}
			case 4:
			{
				goto IL_0057;
			}
			case 5:
			{
				goto IL_003f;
			}
			case 6:
			{
				goto IL_0033;
			}
		}
	}
	{
		goto IL_0070;
	}

IL_002d:
	{
		return _stringLiteral45C6FAA87CD0123CD17D47EA53DEAA5A748C6A04;
	}

IL_0033:
	{
		bool* L_2 = __this->get_address_of_inst_boolean_1();
		String_t* L_3;
		L_3 = Boolean_ToString_m59BB8456DD05A874BBD756E57EA8AD983287015C((bool*)L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_003f:
	{
		double* L_4 = __this->get_address_of_inst_double_2();
		String_t* L_5;
		L_5 = Double_ToString_m87E4A4DC004A167CF0AE1F2D271BC20A708CE57D((double*)L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_004b:
	{
		int32_t* L_6 = __this->get_address_of_inst_int_3();
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0057:
	{
		int64_t* L_8 = __this->get_address_of_inst_long_4();
		String_t* L_9;
		L_9 = Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F((int64_t*)L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0063:
	{
		return _stringLiteralE53B6FBD162C91AD5A0438452E33647A61BBA15D;
	}

IL_0069:
	{
		String_t* L_10 = __this->get_inst_string_6();
		return L_10;
	}

IL_0070:
	{
		return _stringLiteralBBC2182A95A29E2752FA60C92F779B599B7B43ED;
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
// System.Void LitJson.JsonException::.ctor(LitJson.ParserToken,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_m23C50EAF13C647006EA9E346DFB52D8ABDD40928 (JsonException_tF4D20CEAA45C1D64D1C5E2AD15A6E819C2BB68AB * __this, int32_t ___token0, Exception_t * ___inner_exception1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParserToken_t3B28DE2638004DACF58EE90B7E2DF0F3426DE7E0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D59E6177FAE880C9EF94663465FEEDCD97D999F);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___token0;
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(ParserToken_t3B28DE2638004DACF58EE90B7E2DF0F3426DE7E0_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral1D59E6177FAE880C9EF94663465FEEDCD97D999F, L_2, /*hidden argument*/NULL);
		Exception_t * L_4 = ___inner_exception1;
		ApplicationException__ctor_m81FC14233935AF3572D8136E4CA9DD7BBA6FC861(__this, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonException::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_m7F4E2999B1E059544C993457E552D832FDDC1712 (JsonException_tF4D20CEAA45C1D64D1C5E2AD15A6E819C2BB68AB * __this, int32_t ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8515553A5B3BDCBB0920E96A5FD0FC34F11C2713);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___c0;
		Il2CppChar L_1 = ((Il2CppChar)((int32_t)((uint16_t)L_0)));
		RuntimeObject * L_2 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral8515553A5B3BDCBB0920E96A5FD0FC34F11C2713, L_2, /*hidden argument*/NULL);
		ApplicationException__ctor_mF8E9704C91C2F1912909448E5BABFE9EC61D4E8F(__this, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_m17C3120E8C05EA289C449E27C996B9E42C9E18F4 (JsonException_tF4D20CEAA45C1D64D1C5E2AD15A6E819C2BB68AB * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___message0;
		ApplicationException__ctor_mF8E9704C91C2F1912909448E5BABFE9EC61D4E8F(__this, L_0, /*hidden argument*/NULL);
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
// System.Void LitJson.JsonMapper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper__cctor_m31D658D50D0F08B33EA03990BAF5A9B6E4166904 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m424C242531248278FDE282B92E7AEE5484947603_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m90772468780FDD4C4EA19623F829EC1D0C001CEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m914FD0514FB108325301821466961F9DDB53F9E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD013C25087986CD840D626572440D4AB496207EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mD909E0A139978659E700B0CE49424A936C710762_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mE6DB8446420A7CECA7E2B4BA80B16868EC189D57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t1B25396813A0A3CD903D5974ED4C6E4768CF54CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t38AAA43129883A56272556F3EA7E24864F40C1E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t445726BAE7CD3D5D5A88637A0BCA8CCBFA855C7F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t6E1066B0BD86FB1DB5AABC39148F1A9BD76B7B94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t912F8784FB55D3C7125D052469FEE14E3BBD4819_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_tF9057404715003DE4AB771FF865770690910FB89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->set_array_metadata_lock_7(L_0);
		RuntimeObject * L_1 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_1, /*hidden argument*/NULL);
		((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->set_conv_ops_lock_9(L_1);
		RuntimeObject * L_2 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_2, /*hidden argument*/NULL);
		((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->set_object_metadata_lock_11(L_2);
		RuntimeObject * L_3 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_3, /*hidden argument*/NULL);
		((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->set_type_properties_lock_13(L_3);
		RuntimeObject * L_4 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_4, /*hidden argument*/NULL);
		((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->set_static_writer_lock_15(L_4);
		((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->set_max_nesting_depth_0(((int32_t)100));
		Dictionary_2_t38AAA43129883A56272556F3EA7E24864F40C1E4 * L_5 = (Dictionary_2_t38AAA43129883A56272556F3EA7E24864F40C1E4 *)il2cpp_codegen_object_new(Dictionary_2_t38AAA43129883A56272556F3EA7E24864F40C1E4_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m424C242531248278FDE282B92E7AEE5484947603(L_5, /*hidden argument*/Dictionary_2__ctor_m424C242531248278FDE282B92E7AEE5484947603_RuntimeMethod_var);
		((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->set_array_metadata_6(L_5);
		Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A * L_6 = (Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A *)il2cpp_codegen_object_new(Dictionary_2_t6632F9B7D29C6456BE397B4CC895D950BBB8072A_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD909E0A139978659E700B0CE49424A936C710762(L_6, /*hidden argument*/Dictionary_2__ctor_mD909E0A139978659E700B0CE49424A936C710762_RuntimeMethod_var);
		((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->set_conv_ops_8(L_6);
		Dictionary_2_t1B25396813A0A3CD903D5974ED4C6E4768CF54CE * L_7 = (Dictionary_2_t1B25396813A0A3CD903D5974ED4C6E4768CF54CE *)il2cpp_codegen_object_new(Dictionary_2_t1B25396813A0A3CD903D5974ED4C6E4768CF54CE_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m914FD0514FB108325301821466961F9DDB53F9E5(L_7, /*hidden argument*/Dictionary_2__ctor_m914FD0514FB108325301821466961F9DDB53F9E5_RuntimeMethod_var);
		((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->set_object_metadata_10(L_7);
		Dictionary_2_t912F8784FB55D3C7125D052469FEE14E3BBD4819 * L_8 = (Dictionary_2_t912F8784FB55D3C7125D052469FEE14E3BBD4819 *)il2cpp_codegen_object_new(Dictionary_2_t912F8784FB55D3C7125D052469FEE14E3BBD4819_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m90772468780FDD4C4EA19623F829EC1D0C001CEF(L_8, /*hidden argument*/Dictionary_2__ctor_m90772468780FDD4C4EA19623F829EC1D0C001CEF_RuntimeMethod_var);
		((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->set_type_properties_12(L_8);
		JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * L_9 = (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 *)il2cpp_codegen_object_new(JsonWriter_tF9057404715003DE4AB771FF865770690910FB89_il2cpp_TypeInfo_var);
		JsonWriter__ctor_mE4D6EF77FEB3D97DE0AD189AE391228F307B2D6B(L_9, /*hidden argument*/NULL);
		((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->set_static_writer_14(L_9);
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90_il2cpp_TypeInfo_var);
		DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * L_10;
		L_10 = DateTimeFormatInfo_get_InvariantInfo_mF82BD33E66FDFBF82C9E9F58CDA7DDE568401F4B(/*hidden argument*/NULL);
		((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->set_datetime_format_1(L_10);
		Dictionary_2_t6E1066B0BD86FB1DB5AABC39148F1A9BD76B7B94 * L_11 = (Dictionary_2_t6E1066B0BD86FB1DB5AABC39148F1A9BD76B7B94 *)il2cpp_codegen_object_new(Dictionary_2_t6E1066B0BD86FB1DB5AABC39148F1A9BD76B7B94_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mE6DB8446420A7CECA7E2B4BA80B16868EC189D57(L_11, /*hidden argument*/Dictionary_2__ctor_mE6DB8446420A7CECA7E2B4BA80B16868EC189D57_RuntimeMethod_var);
		((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->set_base_exporters_table_2(L_11);
		Dictionary_2_t6E1066B0BD86FB1DB5AABC39148F1A9BD76B7B94 * L_12 = (Dictionary_2_t6E1066B0BD86FB1DB5AABC39148F1A9BD76B7B94 *)il2cpp_codegen_object_new(Dictionary_2_t6E1066B0BD86FB1DB5AABC39148F1A9BD76B7B94_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mE6DB8446420A7CECA7E2B4BA80B16868EC189D57(L_12, /*hidden argument*/Dictionary_2__ctor_mE6DB8446420A7CECA7E2B4BA80B16868EC189D57_RuntimeMethod_var);
		((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->set_custom_exporters_table_3(L_12);
		Dictionary_2_t445726BAE7CD3D5D5A88637A0BCA8CCBFA855C7F * L_13 = (Dictionary_2_t445726BAE7CD3D5D5A88637A0BCA8CCBFA855C7F *)il2cpp_codegen_object_new(Dictionary_2_t445726BAE7CD3D5D5A88637A0BCA8CCBFA855C7F_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD013C25087986CD840D626572440D4AB496207EE(L_13, /*hidden argument*/Dictionary_2__ctor_mD013C25087986CD840D626572440D4AB496207EE_RuntimeMethod_var);
		((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->set_base_importers_table_4(L_13);
		Dictionary_2_t445726BAE7CD3D5D5A88637A0BCA8CCBFA855C7F * L_14 = (Dictionary_2_t445726BAE7CD3D5D5A88637A0BCA8CCBFA855C7F *)il2cpp_codegen_object_new(Dictionary_2_t445726BAE7CD3D5D5A88637A0BCA8CCBFA855C7F_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mD013C25087986CD840D626572440D4AB496207EE(L_14, /*hidden argument*/Dictionary_2__ctor_mD013C25087986CD840D626572440D4AB496207EE_RuntimeMethod_var);
		((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->set_custom_importers_table_5(L_14);
		JsonMapper_RegisterBaseExporters_mA909405EE7451B089689A524530D135DCE34B764(/*hidden argument*/NULL);
		JsonMapper_RegisterBaseImporters_mD1889E075D493FD4421C1855FBD2D0C58BF450CD(/*hidden argument*/NULL);
		return;
	}
}
// LitJson.IJsonWrapper LitJson.JsonMapper::ReadValue(LitJson.WrapperFactory,LitJson.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ReadValue_m56D03D982C8DEDB967FEEFF8026046A5D60389A5 (WrapperFactory_tB55CB2530E34938522E06A75C4EDCC9466CCE22F * ___factory0, JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * ___reader1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IJsonWrapper_t95FB80D49B5F79F59317F3B6FCF40B1426F8124F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * L_0 = ___reader1;
		NullCheck(L_0);
		bool L_1;
		L_1 = JsonReader_Read_m59D15EDA2E81ED1A1336339DDF8B71FF26F6EDAC(L_0, /*hidden argument*/NULL);
		JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * L_2 = ___reader1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = JsonReader_get_Token_mED560372CCFF4EE563BF50874652BBCF9C28F13B_inline(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)5)))
		{
			goto IL_001a;
		}
	}
	{
		JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * L_4 = ___reader1;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = JsonReader_get_Token_mED560372CCFF4EE563BF50874652BBCF9C28F13B_inline(L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_001c;
		}
	}

IL_001a:
	{
		return (RuntimeObject*)NULL;
	}

IL_001c:
	{
		WrapperFactory_tB55CB2530E34938522E06A75C4EDCC9466CCE22F * L_6 = ___factory0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = WrapperFactory_Invoke_m3C4DC0EF143565CADE61880BB7FBC0925392F0E8(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * L_8 = ___reader1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = JsonReader_get_Token_mED560372CCFF4EE563BF50874652BBCF9C28F13B_inline(L_8, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0040;
		}
	}
	{
		RuntimeObject* L_10 = V_0;
		JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * L_11 = ___reader1;
		NullCheck(L_11);
		RuntimeObject * L_12;
		L_12 = JsonReader_get_Value_m0B7E3C54874728492DC520DCE1CB6508F378ADF2_inline(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		InterfaceActionInvoker1< String_t* >::Invoke(17 /* System.Void LitJson.IJsonWrapper::SetString(System.String) */, IJsonWrapper_t95FB80D49B5F79F59317F3B6FCF40B1426F8124F_il2cpp_TypeInfo_var, L_10, ((String_t*)CastclassSealed((RuntimeObject*)L_12, String_t_il2cpp_TypeInfo_var)));
		RuntimeObject* L_13 = V_0;
		return L_13;
	}

IL_0040:
	{
		JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * L_14 = ___reader1;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = JsonReader_get_Token_mED560372CCFF4EE563BF50874652BBCF9C28F13B_inline(L_14, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_15) == ((uint32_t)8))))
		{
			goto IL_005c;
		}
	}
	{
		RuntimeObject* L_16 = V_0;
		JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * L_17 = ___reader1;
		NullCheck(L_17);
		RuntimeObject * L_18;
		L_18 = JsonReader_get_Value_m0B7E3C54874728492DC520DCE1CB6508F378ADF2_inline(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		InterfaceActionInvoker1< double >::Invoke(13 /* System.Void LitJson.IJsonWrapper::SetDouble(System.Double) */, IJsonWrapper_t95FB80D49B5F79F59317F3B6FCF40B1426F8124F_il2cpp_TypeInfo_var, L_16, ((*(double*)((double*)UnBox(L_18, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))));
		RuntimeObject* L_19 = V_0;
		return L_19;
	}

IL_005c:
	{
		JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * L_20 = ___reader1;
		NullCheck(L_20);
		int32_t L_21;
		L_21 = JsonReader_get_Token_mED560372CCFF4EE563BF50874652BBCF9C28F13B_inline(L_20, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)6))))
		{
			goto IL_0078;
		}
	}
	{
		RuntimeObject* L_22 = V_0;
		JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * L_23 = ___reader1;
		NullCheck(L_23);
		RuntimeObject * L_24;
		L_24 = JsonReader_get_Value_m0B7E3C54874728492DC520DCE1CB6508F378ADF2_inline(L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		InterfaceActionInvoker1< int32_t >::Invoke(14 /* System.Void LitJson.IJsonWrapper::SetInt(System.Int32) */, IJsonWrapper_t95FB80D49B5F79F59317F3B6FCF40B1426F8124F_il2cpp_TypeInfo_var, L_22, ((*(int32_t*)((int32_t*)UnBox(L_24, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))));
		RuntimeObject* L_25 = V_0;
		return L_25;
	}

IL_0078:
	{
		JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * L_26 = ___reader1;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = JsonReader_get_Token_mED560372CCFF4EE563BF50874652BBCF9C28F13B_inline(L_26, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_27) == ((uint32_t)7))))
		{
			goto IL_0094;
		}
	}
	{
		RuntimeObject* L_28 = V_0;
		JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * L_29 = ___reader1;
		NullCheck(L_29);
		RuntimeObject * L_30;
		L_30 = JsonReader_get_Value_m0B7E3C54874728492DC520DCE1CB6508F378ADF2_inline(L_29, /*hidden argument*/NULL);
		NullCheck(L_28);
		InterfaceActionInvoker1< int64_t >::Invoke(16 /* System.Void LitJson.IJsonWrapper::SetLong(System.Int64) */, IJsonWrapper_t95FB80D49B5F79F59317F3B6FCF40B1426F8124F_il2cpp_TypeInfo_var, L_28, ((*(int64_t*)((int64_t*)UnBox(L_30, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))));
		RuntimeObject* L_31 = V_0;
		return L_31;
	}

IL_0094:
	{
		JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * L_32 = ___reader1;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = JsonReader_get_Token_mED560372CCFF4EE563BF50874652BBCF9C28F13B_inline(L_32, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_00b1;
		}
	}
	{
		RuntimeObject* L_34 = V_0;
		JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * L_35 = ___reader1;
		NullCheck(L_35);
		RuntimeObject * L_36;
		L_36 = JsonReader_get_Value_m0B7E3C54874728492DC520DCE1CB6508F378ADF2_inline(L_35, /*hidden argument*/NULL);
		NullCheck(L_34);
		InterfaceActionInvoker1< bool >::Invoke(12 /* System.Void LitJson.IJsonWrapper::SetBoolean(System.Boolean) */, IJsonWrapper_t95FB80D49B5F79F59317F3B6FCF40B1426F8124F_il2cpp_TypeInfo_var, L_34, ((*(bool*)((bool*)UnBox(L_36, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var)))));
		RuntimeObject* L_37 = V_0;
		return L_37;
	}

IL_00b1:
	{
		JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * L_38 = ___reader1;
		NullCheck(L_38);
		int32_t L_39;
		L_39 = JsonReader_get_Token_mED560372CCFF4EE563BF50874652BBCF9C28F13B_inline(L_38, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_39) == ((uint32_t)4))))
		{
			goto IL_00df;
		}
	}
	{
		RuntimeObject* L_40 = V_0;
		NullCheck(L_40);
		InterfaceActionInvoker1< int32_t >::Invoke(15 /* System.Void LitJson.IJsonWrapper::SetJsonType(LitJson.JsonType) */, IJsonWrapper_t95FB80D49B5F79F59317F3B6FCF40B1426F8124F_il2cpp_TypeInfo_var, L_40, 2);
	}

IL_00c1:
	{
		WrapperFactory_tB55CB2530E34938522E06A75C4EDCC9466CCE22F * L_41 = ___factory0;
		JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * L_42 = ___reader1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		RuntimeObject* L_43;
		L_43 = JsonMapper_ReadValue_m56D03D982C8DEDB967FEEFF8026046A5D60389A5(L_41, L_42, /*hidden argument*/NULL);
		V_1 = L_43;
		RuntimeObject* L_44 = V_1;
		if (L_44)
		{
			goto IL_00d5;
		}
	}
	{
		JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * L_45 = ___reader1;
		NullCheck(L_45);
		int32_t L_46;
		L_46 = JsonReader_get_Token_mED560372CCFF4EE563BF50874652BBCF9C28F13B_inline(L_45, /*hidden argument*/NULL);
		if ((((int32_t)L_46) == ((int32_t)5)))
		{
			goto IL_011b;
		}
	}

IL_00d5:
	{
		RuntimeObject* L_47 = V_0;
		RuntimeObject* L_48 = V_1;
		NullCheck(L_47);
		int32_t L_49;
		L_49 = InterfaceFuncInvoker1< int32_t, RuntimeObject * >::Invoke(2 /* System.Int32 System.Collections.IList::Add(System.Object) */, IList_tB15A9D6625D09661D6E47976BB626C703EC81910_il2cpp_TypeInfo_var, L_47, L_48);
		goto IL_00c1;
	}

IL_00df:
	{
		JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * L_50 = ___reader1;
		NullCheck(L_50);
		int32_t L_51;
		L_51 = JsonReader_get_Token_mED560372CCFF4EE563BF50874652BBCF9C28F13B_inline(L_50, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_51) == ((uint32_t)1))))
		{
			goto IL_011b;
		}
	}
	{
		RuntimeObject* L_52 = V_0;
		NullCheck(L_52);
		InterfaceActionInvoker1< int32_t >::Invoke(15 /* System.Void LitJson.IJsonWrapper::SetJsonType(LitJson.JsonType) */, IJsonWrapper_t95FB80D49B5F79F59317F3B6FCF40B1426F8124F_il2cpp_TypeInfo_var, L_52, 1);
	}

IL_00ef:
	{
		JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * L_53 = ___reader1;
		NullCheck(L_53);
		bool L_54;
		L_54 = JsonReader_Read_m59D15EDA2E81ED1A1336339DDF8B71FF26F6EDAC(L_53, /*hidden argument*/NULL);
		JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * L_55 = ___reader1;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = JsonReader_get_Token_mED560372CCFF4EE563BF50874652BBCF9C28F13B_inline(L_55, /*hidden argument*/NULL);
		if ((((int32_t)L_56) == ((int32_t)3)))
		{
			goto IL_011b;
		}
	}
	{
		JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * L_57 = ___reader1;
		NullCheck(L_57);
		RuntimeObject * L_58;
		L_58 = JsonReader_get_Value_m0B7E3C54874728492DC520DCE1CB6508F378ADF2_inline(L_57, /*hidden argument*/NULL);
		V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_58, String_t_il2cpp_TypeInfo_var));
		RuntimeObject* L_59 = V_0;
		String_t* L_60 = V_2;
		WrapperFactory_tB55CB2530E34938522E06A75C4EDCC9466CCE22F * L_61 = ___factory0;
		JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * L_62 = ___reader1;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		RuntimeObject* L_63;
		L_63 = JsonMapper_ReadValue_m56D03D982C8DEDB967FEEFF8026046A5D60389A5(L_61, L_62, /*hidden argument*/NULL);
		NullCheck(L_59);
		InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.IDictionary::set_Item(System.Object,System.Object) */, IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A_il2cpp_TypeInfo_var, L_59, L_60, L_63);
		goto IL_00ef;
	}

IL_011b:
	{
		RuntimeObject* L_64 = V_0;
		return L_64;
	}
}
// System.Void LitJson.JsonMapper::RegisterBaseExporters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseExporters_mA909405EE7451B089689A524530D135DCE34B764 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tFCF982DF2A2727A0CB4D47DF9FB4751C2CD4563E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_0_m6249EBC4A74804EE66A1205F001BB4285CE200D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_1_m3AADB25F3464E3E41A7ED3AB20BEFC811975CAC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_2_mCFABBAEC7AF0665F9533111A9786F1E110CDD3E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_3_m7F3CC90F1D7ADF01214351B3649C7D6E7D00F9B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_4_m6AABDBB705FA47FCC482F31E2046F626AC7E51DE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_5_m85B7EA966021153F04CB5424F96FD63DD1FFB60E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_6_m9C69C58F8E385CFAD7124079B86C22217B2C6C49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_7_m5B6BD8B592BD95B05EAA0B1B60FDE8A31EFFFB6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_8_m3017E1C0815094117222109632DAED7B7F87B700_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_9_mBE68A4753906B3CEA0F47734AD7EBFBF37A1F84F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * G_B2_0 = NULL;
	Type_t * G_B2_1 = NULL;
	RuntimeObject* G_B2_2 = NULL;
	ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * G_B1_0 = NULL;
	Type_t * G_B1_1 = NULL;
	RuntimeObject* G_B1_2 = NULL;
	ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * G_B4_0 = NULL;
	Type_t * G_B4_1 = NULL;
	RuntimeObject* G_B4_2 = NULL;
	ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * G_B3_0 = NULL;
	Type_t * G_B3_1 = NULL;
	RuntimeObject* G_B3_2 = NULL;
	ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * G_B6_0 = NULL;
	Type_t * G_B6_1 = NULL;
	RuntimeObject* G_B6_2 = NULL;
	ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * G_B5_0 = NULL;
	Type_t * G_B5_1 = NULL;
	RuntimeObject* G_B5_2 = NULL;
	ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * G_B8_0 = NULL;
	Type_t * G_B8_1 = NULL;
	RuntimeObject* G_B8_2 = NULL;
	ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * G_B7_0 = NULL;
	Type_t * G_B7_1 = NULL;
	RuntimeObject* G_B7_2 = NULL;
	ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * G_B10_0 = NULL;
	Type_t * G_B10_1 = NULL;
	RuntimeObject* G_B10_2 = NULL;
	ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * G_B9_0 = NULL;
	Type_t * G_B9_1 = NULL;
	RuntimeObject* G_B9_2 = NULL;
	ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * G_B12_0 = NULL;
	Type_t * G_B12_1 = NULL;
	RuntimeObject* G_B12_2 = NULL;
	ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * G_B11_0 = NULL;
	Type_t * G_B11_1 = NULL;
	RuntimeObject* G_B11_2 = NULL;
	ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * G_B14_0 = NULL;
	Type_t * G_B14_1 = NULL;
	RuntimeObject* G_B14_2 = NULL;
	ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * G_B13_0 = NULL;
	Type_t * G_B13_1 = NULL;
	RuntimeObject* G_B13_2 = NULL;
	ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * G_B16_0 = NULL;
	Type_t * G_B16_1 = NULL;
	RuntimeObject* G_B16_2 = NULL;
	ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * G_B15_0 = NULL;
	Type_t * G_B15_1 = NULL;
	RuntimeObject* G_B15_2 = NULL;
	ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * G_B18_0 = NULL;
	Type_t * G_B18_1 = NULL;
	RuntimeObject* G_B18_2 = NULL;
	ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * G_B17_0 = NULL;
	Type_t * G_B17_1 = NULL;
	RuntimeObject* G_B17_2 = NULL;
	ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * G_B20_0 = NULL;
	Type_t * G_B20_1 = NULL;
	RuntimeObject* G_B20_2 = NULL;
	ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * G_B19_0 = NULL;
	Type_t * G_B19_1 = NULL;
	RuntimeObject* G_B19_2 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_3 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9__24_0_1();
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		G_B1_2 = L_0;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			G_B2_2 = L_0;
			goto IL_002e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * L_5 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_6 = (ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 *)il2cpp_codegen_object_new(ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m3B54763B48D317B3477663693B1772B1E7EAF134(L_6, L_5, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_0_m6249EBC4A74804EE66A1205F001BB4285CE200D2_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_7 = L_6;
		((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->set_U3CU3E9__24_0_1(L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_002e:
	{
		NullCheck(G_B2_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_tFCF982DF2A2727A0CB4D47DF9FB4751C2CD4563E_il2cpp_TypeInfo_var, G_B2_2, G_B2_1, G_B2_0);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		RuntimeObject* L_8 = ((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_9 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_10;
		L_10 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_11 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9__24_1_2();
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_12 = L_11;
		G_B3_0 = L_12;
		G_B3_1 = L_10;
		G_B3_2 = L_8;
		if (L_12)
		{
			G_B4_0 = L_12;
			G_B4_1 = L_10;
			G_B4_2 = L_8;
			goto IL_0061;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * L_13 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_14 = (ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 *)il2cpp_codegen_object_new(ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m3B54763B48D317B3477663693B1772B1E7EAF134(L_14, L_13, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_1_m3AADB25F3464E3E41A7ED3AB20BEFC811975CAC4_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_15 = L_14;
		((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->set_U3CU3E9__24_1_2(L_15);
		G_B4_0 = L_15;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_0061:
	{
		NullCheck(G_B4_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_tFCF982DF2A2727A0CB4D47DF9FB4751C2CD4563E_il2cpp_TypeInfo_var, G_B4_2, G_B4_1, G_B4_0);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		RuntimeObject* L_16 = ((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_17 = { reinterpret_cast<intptr_t> (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18;
		L_18 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_19 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9__24_2_3();
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_20 = L_19;
		G_B5_0 = L_20;
		G_B5_1 = L_18;
		G_B5_2 = L_16;
		if (L_20)
		{
			G_B6_0 = L_20;
			G_B6_1 = L_18;
			G_B6_2 = L_16;
			goto IL_0094;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * L_21 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_22 = (ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 *)il2cpp_codegen_object_new(ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m3B54763B48D317B3477663693B1772B1E7EAF134(L_22, L_21, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_2_mCFABBAEC7AF0665F9533111A9786F1E110CDD3E9_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_23 = L_22;
		((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->set_U3CU3E9__24_2_3(L_23);
		G_B6_0 = L_23;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
	}

IL_0094:
	{
		NullCheck(G_B6_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_tFCF982DF2A2727A0CB4D47DF9FB4751C2CD4563E_il2cpp_TypeInfo_var, G_B6_2, G_B6_1, G_B6_0);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		RuntimeObject* L_24 = ((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26;
		L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_25, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_27 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9__24_3_4();
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_28 = L_27;
		G_B7_0 = L_28;
		G_B7_1 = L_26;
		G_B7_2 = L_24;
		if (L_28)
		{
			G_B8_0 = L_28;
			G_B8_1 = L_26;
			G_B8_2 = L_24;
			goto IL_00c7;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * L_29 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_30 = (ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 *)il2cpp_codegen_object_new(ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m3B54763B48D317B3477663693B1772B1E7EAF134(L_30, L_29, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_3_m7F3CC90F1D7ADF01214351B3649C7D6E7D00F9B1_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_31 = L_30;
		((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->set_U3CU3E9__24_3_4(L_31);
		G_B8_0 = L_31;
		G_B8_1 = G_B7_1;
		G_B8_2 = G_B7_2;
	}

IL_00c7:
	{
		NullCheck(G_B8_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_tFCF982DF2A2727A0CB4D47DF9FB4751C2CD4563E_il2cpp_TypeInfo_var, G_B8_2, G_B8_1, G_B8_0);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		RuntimeObject* L_32 = ((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_33 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_34;
		L_34 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_33, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_35 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9__24_4_5();
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_36 = L_35;
		G_B9_0 = L_36;
		G_B9_1 = L_34;
		G_B9_2 = L_32;
		if (L_36)
		{
			G_B10_0 = L_36;
			G_B10_1 = L_34;
			G_B10_2 = L_32;
			goto IL_00fa;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * L_37 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_38 = (ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 *)il2cpp_codegen_object_new(ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m3B54763B48D317B3477663693B1772B1E7EAF134(L_38, L_37, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_4_m6AABDBB705FA47FCC482F31E2046F626AC7E51DE_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_39 = L_38;
		((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->set_U3CU3E9__24_4_5(L_39);
		G_B10_0 = L_39;
		G_B10_1 = G_B9_1;
		G_B10_2 = G_B9_2;
	}

IL_00fa:
	{
		NullCheck(G_B10_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_tFCF982DF2A2727A0CB4D47DF9FB4751C2CD4563E_il2cpp_TypeInfo_var, G_B10_2, G_B10_1, G_B10_0);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		RuntimeObject* L_40 = ((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_41 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_42;
		L_42 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_41, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_43 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9__24_5_6();
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_44 = L_43;
		G_B11_0 = L_44;
		G_B11_1 = L_42;
		G_B11_2 = L_40;
		if (L_44)
		{
			G_B12_0 = L_44;
			G_B12_1 = L_42;
			G_B12_2 = L_40;
			goto IL_012d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * L_45 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_46 = (ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 *)il2cpp_codegen_object_new(ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m3B54763B48D317B3477663693B1772B1E7EAF134(L_46, L_45, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_5_m85B7EA966021153F04CB5424F96FD63DD1FFB60E_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_47 = L_46;
		((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->set_U3CU3E9__24_5_6(L_47);
		G_B12_0 = L_47;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
	}

IL_012d:
	{
		NullCheck(G_B12_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_tFCF982DF2A2727A0CB4D47DF9FB4751C2CD4563E_il2cpp_TypeInfo_var, G_B12_2, G_B12_1, G_B12_0);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		RuntimeObject* L_48 = ((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50;
		L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_49, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_51 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9__24_6_7();
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_52 = L_51;
		G_B13_0 = L_52;
		G_B13_1 = L_50;
		G_B13_2 = L_48;
		if (L_52)
		{
			G_B14_0 = L_52;
			G_B14_1 = L_50;
			G_B14_2 = L_48;
			goto IL_0160;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * L_53 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_54 = (ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 *)il2cpp_codegen_object_new(ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m3B54763B48D317B3477663693B1772B1E7EAF134(L_54, L_53, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_6_m9C69C58F8E385CFAD7124079B86C22217B2C6C49_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_55 = L_54;
		((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->set_U3CU3E9__24_6_7(L_55);
		G_B14_0 = L_55;
		G_B14_1 = G_B13_1;
		G_B14_2 = G_B13_2;
	}

IL_0160:
	{
		NullCheck(G_B14_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_tFCF982DF2A2727A0CB4D47DF9FB4751C2CD4563E_il2cpp_TypeInfo_var, G_B14_2, G_B14_1, G_B14_0);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		RuntimeObject* L_56 = ((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_57 = { reinterpret_cast<intptr_t> (UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_58;
		L_58 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_57, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_59 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9__24_7_8();
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_60 = L_59;
		G_B15_0 = L_60;
		G_B15_1 = L_58;
		G_B15_2 = L_56;
		if (L_60)
		{
			G_B16_0 = L_60;
			G_B16_1 = L_58;
			G_B16_2 = L_56;
			goto IL_0193;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * L_61 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_62 = (ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 *)il2cpp_codegen_object_new(ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m3B54763B48D317B3477663693B1772B1E7EAF134(L_62, L_61, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_7_m5B6BD8B592BD95B05EAA0B1B60FDE8A31EFFFB6B_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_63 = L_62;
		((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->set_U3CU3E9__24_7_8(L_63);
		G_B16_0 = L_63;
		G_B16_1 = G_B15_1;
		G_B16_2 = G_B15_2;
	}

IL_0193:
	{
		NullCheck(G_B16_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_tFCF982DF2A2727A0CB4D47DF9FB4751C2CD4563E_il2cpp_TypeInfo_var, G_B16_2, G_B16_1, G_B16_0);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		RuntimeObject* L_64 = ((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_65 = { reinterpret_cast<intptr_t> (UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_66;
		L_66 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_65, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_67 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9__24_8_9();
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_68 = L_67;
		G_B17_0 = L_68;
		G_B17_1 = L_66;
		G_B17_2 = L_64;
		if (L_68)
		{
			G_B18_0 = L_68;
			G_B18_1 = L_66;
			G_B18_2 = L_64;
			goto IL_01c6;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * L_69 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_70 = (ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 *)il2cpp_codegen_object_new(ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m3B54763B48D317B3477663693B1772B1E7EAF134(L_70, L_69, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_8_m3017E1C0815094117222109632DAED7B7F87B700_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_71 = L_70;
		((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->set_U3CU3E9__24_8_9(L_71);
		G_B18_0 = L_71;
		G_B18_1 = G_B17_1;
		G_B18_2 = G_B17_2;
	}

IL_01c6:
	{
		NullCheck(G_B18_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_tFCF982DF2A2727A0CB4D47DF9FB4751C2CD4563E_il2cpp_TypeInfo_var, G_B18_2, G_B18_1, G_B18_0);
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		RuntimeObject* L_72 = ((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->get_base_exporters_table_2();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_73 = { reinterpret_cast<intptr_t> (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_74;
		L_74 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_73, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_75 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9__24_9_10();
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_76 = L_75;
		G_B19_0 = L_76;
		G_B19_1 = L_74;
		G_B19_2 = L_72;
		if (L_76)
		{
			G_B20_0 = L_76;
			G_B20_1 = L_74;
			G_B20_2 = L_72;
			goto IL_01f9;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * L_77 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_78 = (ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 *)il2cpp_codegen_object_new(ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0_il2cpp_TypeInfo_var);
		ExporterFunc__ctor_m3B54763B48D317B3477663693B1772B1E7EAF134(L_78, L_77, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_9_mBE68A4753906B3CEA0F47734AD7EBFBF37A1F84F_RuntimeMethod_var), /*hidden argument*/NULL);
		ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * L_79 = L_78;
		((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->set_U3CU3E9__24_9_10(L_79);
		G_B20_0 = L_79;
		G_B20_1 = G_B19_1;
		G_B20_2 = G_B19_2;
	}

IL_01f9:
	{
		NullCheck(G_B20_2);
		InterfaceActionInvoker2< Type_t *, ExporterFunc_t737E54747A2296E039089F0971FBFCC297222DF0 * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ExporterFunc>::set_Item(!0,!1) */, IDictionary_2_tFCF982DF2A2727A0CB4D47DF9FB4751C2CD4563E_il2cpp_TypeInfo_var, G_B20_2, G_B20_1, G_B20_0);
		return;
	}
}
// System.Void LitJson.JsonMapper::RegisterBaseImporters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterBaseImporters_mD1889E075D493FD4421C1855FBD2D0C58BF450CD (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_0_m84F1C30E7D6F4A03E4428A8BA927375179B59F4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_10_m4837983675D23BF71F6CF1659C1B3EA262B402A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_11_mD146809F6728ADDF40FE8ED642952570630C25EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_12_mDA4AFAE0ABE6DB9B8670D04B99D943DF65BF8167_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_13_m36D1DB2E465C0D955A8431B97D8164253ED06D43_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_14_m593A7FF346145A56F6A8C29F0FFE531E90460F7A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_1_m7D891713262678790412D70065C26230BE7FFDEF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_2_mB80F214C846B68A0F9A8ED9699D2113E8CD7845C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_3_m04D39921596EE0683E6B1C067E52FC1BB7458B9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_4_m9B16D80C73B58D22470F446C1D6CFE06D32631BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_5_m5A0DAF44755CB4145005C435A156000A62651AB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_6_mAEE5A2C62AB3F36FCA4E2424E6574ADEFB30C12A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_7_mE9CB38CF0115B7EFE4ED70D73DCFF59F68148FCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_8_m64AF494237E4391228EC8F7BCE5943C73771FCCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_9_m2EF83B251A27A73F40996A30A4EBAD6C00C988BA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * V_0 = NULL;
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * G_B2_0 = NULL;
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * G_B1_0 = NULL;
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * G_B4_0 = NULL;
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * G_B3_0 = NULL;
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * G_B6_0 = NULL;
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * G_B5_0 = NULL;
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * G_B8_0 = NULL;
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * G_B7_0 = NULL;
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * G_B10_0 = NULL;
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * G_B9_0 = NULL;
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * G_B12_0 = NULL;
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * G_B11_0 = NULL;
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * G_B14_0 = NULL;
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * G_B13_0 = NULL;
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * G_B16_0 = NULL;
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * G_B15_0 = NULL;
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * G_B18_0 = NULL;
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * G_B17_0 = NULL;
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * G_B20_0 = NULL;
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * G_B19_0 = NULL;
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * G_B22_0 = NULL;
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * G_B21_0 = NULL;
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * G_B24_0 = NULL;
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * G_B23_0 = NULL;
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * G_B26_0 = NULL;
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * G_B25_0 = NULL;
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * G_B28_0 = NULL;
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * G_B27_0 = NULL;
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * G_B30_0 = NULL;
	ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * G_B29_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_0 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9__25_0_11();
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * L_2 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_3 = (ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A *)il2cpp_codegen_object_new(ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m764A3B21AA1220E9B4C44E609D8E6C6ECF2EABC6(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_0_m84F1C30E7D6F4A03E4428A8BA927375179B59F4F_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_4 = L_3;
		((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->set_U3CU3E9__25_0_11(L_4);
		G_B2_0 = L_4;
	}

IL_001f:
	{
		V_0 = G_B2_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		RuntimeObject* L_5 = ((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_6 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_7;
		L_7 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_6, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_8 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		Type_t * L_9;
		L_9 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_8, /*hidden argument*/NULL);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_10 = V_0;
		JsonMapper_RegisterImporter_m3E3E62BD61EC611D09C3FE17F5CCD96C57B41B66(L_5, L_7, L_9, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_11 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9__25_1_12();
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_12 = L_11;
		G_B3_0 = L_12;
		if (L_12)
		{
			G_B4_0 = L_12;
			goto IL_005e;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * L_13 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_14 = (ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A *)il2cpp_codegen_object_new(ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m764A3B21AA1220E9B4C44E609D8E6C6ECF2EABC6(L_14, L_13, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_1_m7D891713262678790412D70065C26230BE7FFDEF_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_15 = L_14;
		((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->set_U3CU3E9__25_1_12(L_15);
		G_B4_0 = L_15;
	}

IL_005e:
	{
		V_0 = G_B4_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		RuntimeObject* L_16 = ((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_17 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_18;
		L_18 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_17, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_0_0_0_var) };
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_19, /*hidden argument*/NULL);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_21 = V_0;
		JsonMapper_RegisterImporter_m3E3E62BD61EC611D09C3FE17F5CCD96C57B41B66(L_16, L_18, L_20, L_21, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_22 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9__25_2_13();
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_23 = L_22;
		G_B5_0 = L_23;
		if (L_23)
		{
			G_B6_0 = L_23;
			goto IL_009d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * L_24 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_25 = (ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A *)il2cpp_codegen_object_new(ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m764A3B21AA1220E9B4C44E609D8E6C6ECF2EABC6(L_25, L_24, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_2_mB80F214C846B68A0F9A8ED9699D2113E8CD7845C_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_26 = L_25;
		((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->set_U3CU3E9__25_2_13(L_26);
		G_B6_0 = L_26;
	}

IL_009d:
	{
		V_0 = G_B6_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		RuntimeObject* L_27 = ((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_28 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_29;
		L_29 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_28, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_30 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		Type_t * L_31;
		L_31 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_30, /*hidden argument*/NULL);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_32 = V_0;
		JsonMapper_RegisterImporter_m3E3E62BD61EC611D09C3FE17F5CCD96C57B41B66(L_27, L_29, L_31, L_32, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_33 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9__25_3_14();
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_34 = L_33;
		G_B7_0 = L_34;
		if (L_34)
		{
			G_B8_0 = L_34;
			goto IL_00dc;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * L_35 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_36 = (ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A *)il2cpp_codegen_object_new(ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m764A3B21AA1220E9B4C44E609D8E6C6ECF2EABC6(L_36, L_35, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_3_m04D39921596EE0683E6B1C067E52FC1BB7458B9A_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_37 = L_36;
		((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->set_U3CU3E9__25_3_14(L_37);
		G_B8_0 = L_37;
	}

IL_00dc:
	{
		V_0 = G_B8_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		RuntimeObject* L_38 = ((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_39 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_40;
		L_40 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_39, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_41 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		Type_t * L_42;
		L_42 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_41, /*hidden argument*/NULL);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_43 = V_0;
		JsonMapper_RegisterImporter_m3E3E62BD61EC611D09C3FE17F5CCD96C57B41B66(L_38, L_40, L_42, L_43, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_44 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9__25_4_15();
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_45 = L_44;
		G_B9_0 = L_45;
		if (L_45)
		{
			G_B10_0 = L_45;
			goto IL_011b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * L_46 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_47 = (ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A *)il2cpp_codegen_object_new(ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m764A3B21AA1220E9B4C44E609D8E6C6ECF2EABC6(L_47, L_46, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_4_m9B16D80C73B58D22470F446C1D6CFE06D32631BF_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_48 = L_47;
		((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->set_U3CU3E9__25_4_15(L_48);
		G_B10_0 = L_48;
	}

IL_011b:
	{
		V_0 = G_B10_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		RuntimeObject* L_49 = ((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_50 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_51;
		L_51 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_50, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_52 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		Type_t * L_53;
		L_53 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_52, /*hidden argument*/NULL);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_54 = V_0;
		JsonMapper_RegisterImporter_m3E3E62BD61EC611D09C3FE17F5CCD96C57B41B66(L_49, L_51, L_53, L_54, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_55 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9__25_5_16();
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_56 = L_55;
		G_B11_0 = L_56;
		if (L_56)
		{
			G_B12_0 = L_56;
			goto IL_015a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * L_57 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_58 = (ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A *)il2cpp_codegen_object_new(ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m764A3B21AA1220E9B4C44E609D8E6C6ECF2EABC6(L_58, L_57, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_5_m5A0DAF44755CB4145005C435A156000A62651AB6_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_59 = L_58;
		((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->set_U3CU3E9__25_5_16(L_59);
		G_B12_0 = L_59;
	}

IL_015a:
	{
		V_0 = G_B12_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		RuntimeObject* L_60 = ((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_61 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62;
		L_62 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_61, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_63 = { reinterpret_cast<intptr_t> (UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_0_0_0_var) };
		Type_t * L_64;
		L_64 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_63, /*hidden argument*/NULL);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_65 = V_0;
		JsonMapper_RegisterImporter_m3E3E62BD61EC611D09C3FE17F5CCD96C57B41B66(L_60, L_62, L_64, L_65, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_66 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9__25_6_17();
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_67 = L_66;
		G_B13_0 = L_67;
		if (L_67)
		{
			G_B14_0 = L_67;
			goto IL_0199;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * L_68 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_69 = (ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A *)il2cpp_codegen_object_new(ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m764A3B21AA1220E9B4C44E609D8E6C6ECF2EABC6(L_69, L_68, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_6_mAEE5A2C62AB3F36FCA4E2424E6574ADEFB30C12A_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_70 = L_69;
		((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->set_U3CU3E9__25_6_17(L_70);
		G_B14_0 = L_70;
	}

IL_0199:
	{
		V_0 = G_B14_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		RuntimeObject* L_71 = ((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_72 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_73;
		L_73 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_72, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_74 = { reinterpret_cast<intptr_t> (UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var) };
		Type_t * L_75;
		L_75 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_74, /*hidden argument*/NULL);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_76 = V_0;
		JsonMapper_RegisterImporter_m3E3E62BD61EC611D09C3FE17F5CCD96C57B41B66(L_71, L_73, L_75, L_76, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_77 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9__25_7_18();
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_78 = L_77;
		G_B15_0 = L_78;
		if (L_78)
		{
			G_B16_0 = L_78;
			goto IL_01d8;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * L_79 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_80 = (ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A *)il2cpp_codegen_object_new(ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m764A3B21AA1220E9B4C44E609D8E6C6ECF2EABC6(L_80, L_79, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_7_mE9CB38CF0115B7EFE4ED70D73DCFF59F68148FCD_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_81 = L_80;
		((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->set_U3CU3E9__25_7_18(L_81);
		G_B16_0 = L_81;
	}

IL_01d8:
	{
		V_0 = G_B16_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		RuntimeObject* L_82 = ((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_83 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_84;
		L_84 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_83, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_85 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		Type_t * L_86;
		L_86 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_85, /*hidden argument*/NULL);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_87 = V_0;
		JsonMapper_RegisterImporter_m3E3E62BD61EC611D09C3FE17F5CCD96C57B41B66(L_82, L_84, L_86, L_87, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_88 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9__25_8_19();
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_89 = L_88;
		G_B17_0 = L_89;
		if (L_89)
		{
			G_B18_0 = L_89;
			goto IL_0217;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * L_90 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_91 = (ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A *)il2cpp_codegen_object_new(ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m764A3B21AA1220E9B4C44E609D8E6C6ECF2EABC6(L_91, L_90, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_8_m64AF494237E4391228EC8F7BCE5943C73771FCCD_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_92 = L_91;
		((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->set_U3CU3E9__25_8_19(L_92);
		G_B18_0 = L_92;
	}

IL_0217:
	{
		V_0 = G_B18_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		RuntimeObject* L_93 = ((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_94 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_95;
		L_95 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_94, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_96 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		Type_t * L_97;
		L_97 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_96, /*hidden argument*/NULL);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_98 = V_0;
		JsonMapper_RegisterImporter_m3E3E62BD61EC611D09C3FE17F5CCD96C57B41B66(L_93, L_95, L_97, L_98, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_99 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9__25_9_20();
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_100 = L_99;
		G_B19_0 = L_100;
		if (L_100)
		{
			G_B20_0 = L_100;
			goto IL_0256;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * L_101 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_102 = (ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A *)il2cpp_codegen_object_new(ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m764A3B21AA1220E9B4C44E609D8E6C6ECF2EABC6(L_102, L_101, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_9_m2EF83B251A27A73F40996A30A4EBAD6C00C988BA_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_103 = L_102;
		((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->set_U3CU3E9__25_9_20(L_103);
		G_B20_0 = L_103;
	}

IL_0256:
	{
		V_0 = G_B20_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		RuntimeObject* L_104 = ((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_105 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_106;
		L_106 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_105, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_107 = { reinterpret_cast<intptr_t> (Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_0_0_0_var) };
		Type_t * L_108;
		L_108 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_107, /*hidden argument*/NULL);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_109 = V_0;
		JsonMapper_RegisterImporter_m3E3E62BD61EC611D09C3FE17F5CCD96C57B41B66(L_104, L_106, L_108, L_109, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_110 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9__25_10_21();
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_111 = L_110;
		G_B21_0 = L_111;
		if (L_111)
		{
			G_B22_0 = L_111;
			goto IL_0295;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * L_112 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_113 = (ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A *)il2cpp_codegen_object_new(ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m764A3B21AA1220E9B4C44E609D8E6C6ECF2EABC6(L_113, L_112, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_10_m4837983675D23BF71F6CF1659C1B3EA262B402A6_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_114 = L_113;
		((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->set_U3CU3E9__25_10_21(L_114);
		G_B22_0 = L_114;
	}

IL_0295:
	{
		V_0 = G_B22_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		RuntimeObject* L_115 = ((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_116 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_117;
		L_117 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_116, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_118 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		Type_t * L_119;
		L_119 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_118, /*hidden argument*/NULL);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_120 = V_0;
		JsonMapper_RegisterImporter_m3E3E62BD61EC611D09C3FE17F5CCD96C57B41B66(L_115, L_117, L_119, L_120, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_121 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9__25_11_22();
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_122 = L_121;
		G_B23_0 = L_122;
		if (L_122)
		{
			G_B24_0 = L_122;
			goto IL_02d4;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * L_123 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_124 = (ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A *)il2cpp_codegen_object_new(ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m764A3B21AA1220E9B4C44E609D8E6C6ECF2EABC6(L_124, L_123, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_11_mD146809F6728ADDF40FE8ED642952570630C25EE_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_125 = L_124;
		((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->set_U3CU3E9__25_11_22(L_125);
		G_B24_0 = L_125;
	}

IL_02d4:
	{
		V_0 = G_B24_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		RuntimeObject* L_126 = ((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_127 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_128;
		L_128 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_127, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_129 = { reinterpret_cast<intptr_t> (UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_0_0_0_var) };
		Type_t * L_130;
		L_130 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_129, /*hidden argument*/NULL);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_131 = V_0;
		JsonMapper_RegisterImporter_m3E3E62BD61EC611D09C3FE17F5CCD96C57B41B66(L_126, L_128, L_130, L_131, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_132 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9__25_12_23();
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_133 = L_132;
		G_B25_0 = L_133;
		if (L_133)
		{
			G_B26_0 = L_133;
			goto IL_0313;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * L_134 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_135 = (ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A *)il2cpp_codegen_object_new(ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m764A3B21AA1220E9B4C44E609D8E6C6ECF2EABC6(L_135, L_134, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_12_mDA4AFAE0ABE6DB9B8670D04B99D943DF65BF8167_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_136 = L_135;
		((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->set_U3CU3E9__25_12_23(L_136);
		G_B26_0 = L_136;
	}

IL_0313:
	{
		V_0 = G_B26_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		RuntimeObject* L_137 = ((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_138 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_139;
		L_139 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_138, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_140 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		Type_t * L_141;
		L_141 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_140, /*hidden argument*/NULL);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_142 = V_0;
		JsonMapper_RegisterImporter_m3E3E62BD61EC611D09C3FE17F5CCD96C57B41B66(L_137, L_139, L_141, L_142, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_143 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9__25_13_24();
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_144 = L_143;
		G_B27_0 = L_144;
		if (L_144)
		{
			G_B28_0 = L_144;
			goto IL_0352;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * L_145 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_146 = (ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A *)il2cpp_codegen_object_new(ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m764A3B21AA1220E9B4C44E609D8E6C6ECF2EABC6(L_146, L_145, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_13_m36D1DB2E465C0D955A8431B97D8164253ED06D43_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_147 = L_146;
		((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->set_U3CU3E9__25_13_24(L_147);
		G_B28_0 = L_147;
	}

IL_0352:
	{
		V_0 = G_B28_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		RuntimeObject* L_148 = ((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_149 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_150;
		L_150 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_149, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_151 = { reinterpret_cast<intptr_t> (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_0_0_0_var) };
		Type_t * L_152;
		L_152 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_151, /*hidden argument*/NULL);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_153 = V_0;
		JsonMapper_RegisterImporter_m3E3E62BD61EC611D09C3FE17F5CCD96C57B41B66(L_148, L_150, L_152, L_153, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_154 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9__25_14_25();
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_155 = L_154;
		G_B29_0 = L_155;
		if (L_155)
		{
			G_B30_0 = L_155;
			goto IL_0391;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * L_156 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_157 = (ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A *)il2cpp_codegen_object_new(ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A_il2cpp_TypeInfo_var);
		ImporterFunc__ctor_m764A3B21AA1220E9B4C44E609D8E6C6ECF2EABC6(L_157, L_156, (intptr_t)((intptr_t)U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_14_m593A7FF346145A56F6A8C29F0FFE531E90460F7A_RuntimeMethod_var), /*hidden argument*/NULL);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_158 = L_157;
		((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->set_U3CU3E9__25_14_25(L_158);
		G_B30_0 = L_158;
	}

IL_0391:
	{
		V_0 = G_B30_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		RuntimeObject* L_159 = ((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->get_base_importers_table_4();
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_160 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_161;
		L_161 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_160, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_162 = { reinterpret_cast<intptr_t> (DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_0_0_0_var) };
		Type_t * L_163;
		L_163 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_162, /*hidden argument*/NULL);
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_164 = V_0;
		JsonMapper_RegisterImporter_m3E3E62BD61EC611D09C3FE17F5CCD96C57B41B66(L_159, L_161, L_163, L_164, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper::RegisterImporter(System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>,System.Type,System.Type,LitJson.ImporterFunc)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonMapper_RegisterImporter_m3E3E62BD61EC611D09C3FE17F5CCD96C57B41B66 (RuntimeObject* ___table0, Type_t * ___json_type1, Type_t * ___value_type2, ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * ___importer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m90BB337659FFDAB593D3AC0ED602B7963C3B66E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tDA33E054E343D826DBF1AC64F23B019265CDBB6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t6C0139A1905D3944AB6C558EEB7B5E162CCC1752_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t8EFF7215559F49AE1D0B86461D7207337CD8C6F0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___table0;
		Type_t * L_1 = ___json_type1;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker1< bool, Type_t * >::Invoke(3 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::ContainsKey(!0) */, IDictionary_2_t8EFF7215559F49AE1D0B86461D7207337CD8C6F0_il2cpp_TypeInfo_var, L_0, L_1);
		if (L_2)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject* L_3 = ___table0;
		Type_t * L_4 = ___json_type1;
		Dictionary_2_tDA33E054E343D826DBF1AC64F23B019265CDBB6E * L_5 = (Dictionary_2_tDA33E054E343D826DBF1AC64F23B019265CDBB6E *)il2cpp_codegen_object_new(Dictionary_2_tDA33E054E343D826DBF1AC64F23B019265CDBB6E_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m90BB337659FFDAB593D3AC0ED602B7963C3B66E8(L_5, /*hidden argument*/Dictionary_2__ctor_m90BB337659FFDAB593D3AC0ED602B7963C3B66E8_RuntimeMethod_var);
		NullCheck(L_3);
		InterfaceActionInvoker2< Type_t *, RuntimeObject* >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::Add(!0,!1) */, IDictionary_2_t8EFF7215559F49AE1D0B86461D7207337CD8C6F0_il2cpp_TypeInfo_var, L_3, L_4, L_5);
	}

IL_0015:
	{
		RuntimeObject* L_6 = ___table0;
		Type_t * L_7 = ___json_type1;
		NullCheck(L_6);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker1< RuntimeObject*, Type_t * >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::get_Item(!0) */, IDictionary_2_t8EFF7215559F49AE1D0B86461D7207337CD8C6F0_il2cpp_TypeInfo_var, L_6, L_7);
		Type_t * L_9 = ___value_type2;
		ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * L_10 = ___importer3;
		NullCheck(L_8);
		InterfaceActionInvoker2< Type_t *, ImporterFunc_t93B12F9EEF79872DC055AD0A51797A4183A6982A * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>::set_Item(!0,!1) */, IDictionary_2_t6C0139A1905D3944AB6C558EEB7B5E162CCC1752_il2cpp_TypeInfo_var, L_8, L_9, L_10);
		return;
	}
}
// LitJson.JsonData LitJson.JsonMapper::ToObject(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * JsonMapper_ToObject_mF8A7182B5D63D904E156608F51FE8F4402AC3D8A (String_t* ___json0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CToObjectU3Eb__32_0_mC187FB00203C4133AD5C2E0B59DA1A7F834BC814_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WrapperFactory_tB55CB2530E34938522E06A75C4EDCC9466CCE22F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	WrapperFactory_tB55CB2530E34938522E06A75C4EDCC9466CCE22F * G_B2_0 = NULL;
	WrapperFactory_tB55CB2530E34938522E06A75C4EDCC9466CCE22F * G_B1_0 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		WrapperFactory_tB55CB2530E34938522E06A75C4EDCC9466CCE22F * L_0 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9__32_0_26();
		WrapperFactory_tB55CB2530E34938522E06A75C4EDCC9466CCE22F * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_001f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * L_2 = ((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		WrapperFactory_tB55CB2530E34938522E06A75C4EDCC9466CCE22F * L_3 = (WrapperFactory_tB55CB2530E34938522E06A75C4EDCC9466CCE22F *)il2cpp_codegen_object_new(WrapperFactory_tB55CB2530E34938522E06A75C4EDCC9466CCE22F_il2cpp_TypeInfo_var);
		WrapperFactory__ctor_mCCC28081C93D78116FC6014F0C41ED412D6DEA5E(L_3, L_2, (intptr_t)((intptr_t)U3CU3Ec_U3CToObjectU3Eb__32_0_mC187FB00203C4133AD5C2E0B59DA1A7F834BC814_RuntimeMethod_var), /*hidden argument*/NULL);
		WrapperFactory_tB55CB2530E34938522E06A75C4EDCC9466CCE22F * L_4 = L_3;
		((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->set_U3CU3E9__32_0_26(L_4);
		G_B2_0 = L_4;
	}

IL_001f:
	{
		String_t* L_5 = ___json0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		RuntimeObject* L_6;
		L_6 = JsonMapper_ToWrapper_m5DB558F405D5A01E086EA3A782B39811DFB784FA(G_B2_0, L_5, /*hidden argument*/NULL);
		return ((JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 *)CastclassClass((RuntimeObject*)L_6, JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22_il2cpp_TypeInfo_var));
	}
}
// LitJson.IJsonWrapper LitJson.JsonMapper::ToWrapper(LitJson.WrapperFactory,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonMapper_ToWrapper_m5DB558F405D5A01E086EA3A782B39811DFB784FA (WrapperFactory_tB55CB2530E34938522E06A75C4EDCC9466CCE22F * ___factory0, String_t* ___json1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * V_0 = NULL;
	{
		String_t* L_0 = ___json1;
		JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * L_1 = (JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 *)il2cpp_codegen_object_new(JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06_il2cpp_TypeInfo_var);
		JsonReader__ctor_m2C149228CEF28E2A7ECBE7A0001A4194C7E44593(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		WrapperFactory_tB55CB2530E34938522E06A75C4EDCC9466CCE22F * L_2 = ___factory0;
		JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		RuntimeObject* L_4;
		L_4 = JsonMapper_ReadValue_m56D03D982C8DEDB967FEEFF8026046A5D60389A5(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
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
// LitJson.JsonToken LitJson.JsonReader::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonReader_get_Token_mED560372CCFF4EE563BF50874652BBCF9C28F13B (JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_token_14();
		return L_0;
	}
}
// System.Object LitJson.JsonReader::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * JsonReader_get_Value_m0B7E3C54874728492DC520DCE1CB6508F378ADF2 (JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_token_value_13();
		return L_0;
	}
}
// System.Void LitJson.JsonReader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__cctor_mE7967260167896E3586DF18510A0D662D588A367 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0;
		L_0 = JsonReader_PopulateParseTable_mC0F4717833EF8B92510C6EC773CCE86F58B96607(/*hidden argument*/NULL);
		((JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06_il2cpp_TypeInfo_var))->set_parse_table_0(L_0);
		return;
	}
}
// System.Void LitJson.JsonReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_m2C149228CEF28E2A7ECBE7A0001A4194C7E44593 (JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * __this, String_t* ___json_text0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___json_text0;
		StringReader_t74E352C280EAC22C878867444978741F19E1F895 * L_1 = (StringReader_t74E352C280EAC22C878867444978741F19E1F895 *)il2cpp_codegen_object_new(StringReader_t74E352C280EAC22C878867444978741F19E1F895_il2cpp_TypeInfo_var);
		StringReader__ctor_m7CC29D8E83F4813395ACA9CF4F756B1BCE09A7EE(L_1, L_0, /*hidden argument*/NULL);
		JsonReader__ctor_m4C5C39FB6CC0798325232ED8823F68F35B444A6E(__this, L_1, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_m4C5C39FB6CC0798325232ED8823F68F35B444A6E (JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * __this, TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___reader0, bool ___owned1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_tA740F14E85682DB80300393CB63376A76BA37835_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mB57657F2527B7C25AB60EB9BBD09C7B42B14F3C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m41EBD1EDB9A3AC64B4EE3B6AAC08868FF28DA954_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * L_0 = ___reader0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralECAC83771A00C701043A940F621CC1C765D30D31)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader__ctor_m4C5C39FB6CC0798325232ED8823F68F35B444A6E_RuntimeMethod_var)));
	}

IL_0014:
	{
		__this->set_parser_in_string_7((bool)0);
		__this->set_parser_return_8((bool)0);
		__this->set_read_started_9((bool)0);
		Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * L_2 = (Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 *)il2cpp_codegen_object_new(Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55_il2cpp_TypeInfo_var);
		Stack_1__ctor_m41EBD1EDB9A3AC64B4EE3B6AAC08868FF28DA954(L_2, /*hidden argument*/Stack_1__ctor_m41EBD1EDB9A3AC64B4EE3B6AAC08868FF28DA954_RuntimeMethod_var);
		__this->set_automaton_stack_1(L_2);
		Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * L_3 = __this->get_automaton_stack_1();
		NullCheck(L_3);
		Stack_1_Push_mB57657F2527B7C25AB60EB9BBD09C7B42B14F3C3(L_3, ((int32_t)65553), /*hidden argument*/Stack_1_Push_mB57657F2527B7C25AB60EB9BBD09C7B42B14F3C3_RuntimeMethod_var);
		Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * L_4 = __this->get_automaton_stack_1();
		NullCheck(L_4);
		Stack_1_Push_mB57657F2527B7C25AB60EB9BBD09C7B42B14F3C3(L_4, ((int32_t)65543), /*hidden argument*/Stack_1_Push_mB57657F2527B7C25AB60EB9BBD09C7B42B14F3C3_RuntimeMethod_var);
		TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * L_5 = ___reader0;
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_6 = (Lexer_tA740F14E85682DB80300393CB63376A76BA37835 *)il2cpp_codegen_object_new(Lexer_tA740F14E85682DB80300393CB63376A76BA37835_il2cpp_TypeInfo_var);
		Lexer__ctor_m3DE9BBF22D9943F59B4A80B6884642E972A0A5C3(L_6, L_5, /*hidden argument*/NULL);
		__this->set_lexer_6(L_6);
		__this->set_end_of_input_5((bool)0);
		__this->set_end_of_json_4((bool)0);
		__this->set_skip_non_members_12((bool)1);
		TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * L_7 = ___reader0;
		__this->set_reader_10(L_7);
		bool L_8 = ___owned1;
		__this->set_reader_is_owned_11(L_8);
		return;
	}
}
// System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>> LitJson.JsonReader::PopulateParseTable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonReader_PopulateParseTable_mC0F4717833EF8B92510C6EC773CCE86F58B96607 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m2EBF1ECBC92F80383944B79DCCDA176099E0BF78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tB87B199FE555125F3A639420349ADA6B6B490122____148E9E3E864CD628C70D3DC1D8309483BD8C0E89_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tB87B199FE555125F3A639420349ADA6B6B490122____5CF7299F6558A8AC3F821B4F2F65F23798D319D3_2_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tB87B199FE555125F3A639420349ADA6B6B490122____AAF72C1002FDBCAE040DAE16A10D82184CE83679_3_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tB87B199FE555125F3A639420349ADA6B6B490122____B67A7FB4648C62F6A1337CA473436D0E787E8633_4_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tB87B199FE555125F3A639420349ADA6B6B490122____C69BF4F300AD2C2E49A8072C2FE6B712FA73EA8F_5_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tB87B199FE555125F3A639420349ADA6B6B490122____FAD52931F5B79811D31566BB18B6E0B5D2E2A164_6_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9 * L_0 = (Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9 *)il2cpp_codegen_object_new(Dictionary_2_tF15AAE882479CD2CDC37ED42D021B9745B61FFD9_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m2EBF1ECBC92F80383944B79DCCDA176099E0BF78(L_0, /*hidden argument*/Dictionary_2__ctor_m2EBF1ECBC92F80383944B79DCCDA176099E0BF78_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		RuntimeObject* L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06_il2cpp_TypeInfo_var);
		JsonReader_TableAddRow_mBF41F9B65E4AC9057DD88DF448CEE05654FB1FA7(L_1, ((int32_t)65548), /*hidden argument*/NULL);
		RuntimeObject* L_2 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)2);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)91));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65549));
		JsonReader_TableAddCol_m5366EAD8608A2E2904D7989C8F21EFA59346A769(L_2, ((int32_t)65548), ((int32_t)91), L_5, /*hidden argument*/NULL);
		RuntimeObject* L_6 = V_0;
		JsonReader_TableAddRow_mBF41F9B65E4AC9057DD88DF448CEE05654FB1FA7(L_6, ((int32_t)65549), /*hidden argument*/NULL);
		RuntimeObject* L_7 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = L_8;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_10 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tB87B199FE555125F3A639420349ADA6B6B490122____148E9E3E864CD628C70D3DC1D8309483BD8C0E89_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_9, L_10, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m5366EAD8608A2E2904D7989C8F21EFA59346A769(L_7, ((int32_t)65549), ((int32_t)34), L_9, /*hidden argument*/NULL);
		RuntimeObject* L_11 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_12 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = L_12;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_14 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tB87B199FE555125F3A639420349ADA6B6B490122____148E9E3E864CD628C70D3DC1D8309483BD8C0E89_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_13, L_14, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m5366EAD8608A2E2904D7989C8F21EFA59346A769(L_11, ((int32_t)65549), ((int32_t)91), L_13, /*hidden argument*/NULL);
		RuntimeObject* L_15 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_16 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_17 = L_16;
		NullCheck(L_17);
		(L_17)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)93));
		JsonReader_TableAddCol_m5366EAD8608A2E2904D7989C8F21EFA59346A769(L_15, ((int32_t)65549), ((int32_t)93), L_17, /*hidden argument*/NULL);
		RuntimeObject* L_18 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_19 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_20 = L_19;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_21 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tB87B199FE555125F3A639420349ADA6B6B490122____148E9E3E864CD628C70D3DC1D8309483BD8C0E89_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_20, L_21, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m5366EAD8608A2E2904D7989C8F21EFA59346A769(L_18, ((int32_t)65549), ((int32_t)123), L_20, /*hidden argument*/NULL);
		RuntimeObject* L_22 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_23 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_24 = L_23;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_25 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tB87B199FE555125F3A639420349ADA6B6B490122____148E9E3E864CD628C70D3DC1D8309483BD8C0E89_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_24, L_25, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m5366EAD8608A2E2904D7989C8F21EFA59346A769(L_22, ((int32_t)65549), ((int32_t)65537), L_24, /*hidden argument*/NULL);
		RuntimeObject* L_26 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_28 = L_27;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_29 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tB87B199FE555125F3A639420349ADA6B6B490122____148E9E3E864CD628C70D3DC1D8309483BD8C0E89_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_28, L_29, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m5366EAD8608A2E2904D7989C8F21EFA59346A769(L_26, ((int32_t)65549), ((int32_t)65538), L_28, /*hidden argument*/NULL);
		RuntimeObject* L_30 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_31 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_32 = L_31;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_33 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tB87B199FE555125F3A639420349ADA6B6B490122____148E9E3E864CD628C70D3DC1D8309483BD8C0E89_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_32, L_33, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m5366EAD8608A2E2904D7989C8F21EFA59346A769(L_30, ((int32_t)65549), ((int32_t)65539), L_32, /*hidden argument*/NULL);
		RuntimeObject* L_34 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_35 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_36 = L_35;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_37 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tB87B199FE555125F3A639420349ADA6B6B490122____148E9E3E864CD628C70D3DC1D8309483BD8C0E89_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_36, L_37, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m5366EAD8608A2E2904D7989C8F21EFA59346A769(L_34, ((int32_t)65549), ((int32_t)65540), L_36, /*hidden argument*/NULL);
		RuntimeObject* L_38 = V_0;
		JsonReader_TableAddRow_mBF41F9B65E4AC9057DD88DF448CEE05654FB1FA7(L_38, ((int32_t)65544), /*hidden argument*/NULL);
		RuntimeObject* L_39 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_40 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)2);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_41 = L_40;
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)123));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_42 = L_41;
		NullCheck(L_42);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)65545));
		JsonReader_TableAddCol_m5366EAD8608A2E2904D7989C8F21EFA59346A769(L_39, ((int32_t)65544), ((int32_t)123), L_42, /*hidden argument*/NULL);
		RuntimeObject* L_43 = V_0;
		JsonReader_TableAddRow_mBF41F9B65E4AC9057DD88DF448CEE05654FB1FA7(L_43, ((int32_t)65545), /*hidden argument*/NULL);
		RuntimeObject* L_44 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_45 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_46 = L_45;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_47 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tB87B199FE555125F3A639420349ADA6B6B490122____AAF72C1002FDBCAE040DAE16A10D82184CE83679_3_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_46, L_47, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m5366EAD8608A2E2904D7989C8F21EFA59346A769(L_44, ((int32_t)65545), ((int32_t)34), L_46, /*hidden argument*/NULL);
		RuntimeObject* L_48 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_49 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_50 = L_49;
		NullCheck(L_50);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)125));
		JsonReader_TableAddCol_m5366EAD8608A2E2904D7989C8F21EFA59346A769(L_48, ((int32_t)65545), ((int32_t)125), L_50, /*hidden argument*/NULL);
		RuntimeObject* L_51 = V_0;
		JsonReader_TableAddRow_mBF41F9B65E4AC9057DD88DF448CEE05654FB1FA7(L_51, ((int32_t)65546), /*hidden argument*/NULL);
		RuntimeObject* L_52 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_53 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_54 = L_53;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_55 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tB87B199FE555125F3A639420349ADA6B6B490122____5CF7299F6558A8AC3F821B4F2F65F23798D319D3_2_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_54, L_55, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m5366EAD8608A2E2904D7989C8F21EFA59346A769(L_52, ((int32_t)65546), ((int32_t)34), L_54, /*hidden argument*/NULL);
		RuntimeObject* L_56 = V_0;
		JsonReader_TableAddRow_mBF41F9B65E4AC9057DD88DF448CEE05654FB1FA7(L_56, ((int32_t)65547), /*hidden argument*/NULL);
		RuntimeObject* L_57 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_58 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_59 = L_58;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_60 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tB87B199FE555125F3A639420349ADA6B6B490122____B67A7FB4648C62F6A1337CA473436D0E787E8633_4_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_59, L_60, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m5366EAD8608A2E2904D7989C8F21EFA59346A769(L_57, ((int32_t)65547), ((int32_t)44), L_59, /*hidden argument*/NULL);
		RuntimeObject* L_61 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_62 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_63 = L_62;
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65554));
		JsonReader_TableAddCol_m5366EAD8608A2E2904D7989C8F21EFA59346A769(L_61, ((int32_t)65547), ((int32_t)125), L_63, /*hidden argument*/NULL);
		RuntimeObject* L_64 = V_0;
		JsonReader_TableAddRow_mBF41F9B65E4AC9057DD88DF448CEE05654FB1FA7(L_64, ((int32_t)65552), /*hidden argument*/NULL);
		RuntimeObject* L_65 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_66 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_67 = L_66;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_68 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tB87B199FE555125F3A639420349ADA6B6B490122____C69BF4F300AD2C2E49A8072C2FE6B712FA73EA8F_5_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_67, L_68, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m5366EAD8608A2E2904D7989C8F21EFA59346A769(L_65, ((int32_t)65552), ((int32_t)34), L_67, /*hidden argument*/NULL);
		RuntimeObject* L_69 = V_0;
		JsonReader_TableAddRow_mBF41F9B65E4AC9057DD88DF448CEE05654FB1FA7(L_69, ((int32_t)65543), /*hidden argument*/NULL);
		RuntimeObject* L_70 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_71 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_72 = L_71;
		NullCheck(L_72);
		(L_72)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65548));
		JsonReader_TableAddCol_m5366EAD8608A2E2904D7989C8F21EFA59346A769(L_70, ((int32_t)65543), ((int32_t)91), L_72, /*hidden argument*/NULL);
		RuntimeObject* L_73 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_74 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_75 = L_74;
		NullCheck(L_75);
		(L_75)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65544));
		JsonReader_TableAddCol_m5366EAD8608A2E2904D7989C8F21EFA59346A769(L_73, ((int32_t)65543), ((int32_t)123), L_75, /*hidden argument*/NULL);
		RuntimeObject* L_76 = V_0;
		JsonReader_TableAddRow_mBF41F9B65E4AC9057DD88DF448CEE05654FB1FA7(L_76, ((int32_t)65550), /*hidden argument*/NULL);
		RuntimeObject* L_77 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_78 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_79 = L_78;
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65552));
		JsonReader_TableAddCol_m5366EAD8608A2E2904D7989C8F21EFA59346A769(L_77, ((int32_t)65550), ((int32_t)34), L_79, /*hidden argument*/NULL);
		RuntimeObject* L_80 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_81 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_82 = L_81;
		NullCheck(L_82);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65548));
		JsonReader_TableAddCol_m5366EAD8608A2E2904D7989C8F21EFA59346A769(L_80, ((int32_t)65550), ((int32_t)91), L_82, /*hidden argument*/NULL);
		RuntimeObject* L_83 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_84 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_85 = L_84;
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65544));
		JsonReader_TableAddCol_m5366EAD8608A2E2904D7989C8F21EFA59346A769(L_83, ((int32_t)65550), ((int32_t)123), L_85, /*hidden argument*/NULL);
		RuntimeObject* L_86 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_87 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_88 = L_87;
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65537));
		JsonReader_TableAddCol_m5366EAD8608A2E2904D7989C8F21EFA59346A769(L_86, ((int32_t)65550), ((int32_t)65537), L_88, /*hidden argument*/NULL);
		RuntimeObject* L_89 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_90 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_91 = L_90;
		NullCheck(L_91);
		(L_91)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65538));
		JsonReader_TableAddCol_m5366EAD8608A2E2904D7989C8F21EFA59346A769(L_89, ((int32_t)65550), ((int32_t)65538), L_91, /*hidden argument*/NULL);
		RuntimeObject* L_92 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_93 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_94 = L_93;
		NullCheck(L_94);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65539));
		JsonReader_TableAddCol_m5366EAD8608A2E2904D7989C8F21EFA59346A769(L_92, ((int32_t)65550), ((int32_t)65539), L_94, /*hidden argument*/NULL);
		RuntimeObject* L_95 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_96 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_97 = L_96;
		NullCheck(L_97);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65540));
		JsonReader_TableAddCol_m5366EAD8608A2E2904D7989C8F21EFA59346A769(L_95, ((int32_t)65550), ((int32_t)65540), L_97, /*hidden argument*/NULL);
		RuntimeObject* L_98 = V_0;
		JsonReader_TableAddRow_mBF41F9B65E4AC9057DD88DF448CEE05654FB1FA7(L_98, ((int32_t)65551), /*hidden argument*/NULL);
		RuntimeObject* L_99 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_100 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_101 = L_100;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_102 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tB87B199FE555125F3A639420349ADA6B6B490122____FAD52931F5B79811D31566BB18B6E0B5D2E2A164_6_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_101, L_102, /*hidden argument*/NULL);
		JsonReader_TableAddCol_m5366EAD8608A2E2904D7989C8F21EFA59346A769(L_99, ((int32_t)65551), ((int32_t)44), L_101, /*hidden argument*/NULL);
		RuntimeObject* L_103 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_104 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_105 = L_104;
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)65554));
		JsonReader_TableAddCol_m5366EAD8608A2E2904D7989C8F21EFA59346A769(L_103, ((int32_t)65551), ((int32_t)93), L_105, /*hidden argument*/NULL);
		RuntimeObject* L_106 = V_0;
		return L_106;
	}
}
// System.Void LitJson.JsonReader::TableAddCol(System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>,LitJson.ParserToken,System.Int32,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_TableAddCol_m5366EAD8608A2E2904D7989C8F21EFA59346A769 (RuntimeObject* ___parse_table0, int32_t ___row1, int32_t ___col2, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___symbols3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t15C4AE6FA28CC96AF7D1E9949947C8A7AA64B92C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t9761D347AC3B18ED56235F4DC19AAEABDBA24999_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___parse_table0;
		int32_t L_1 = ___row1;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::get_Item(!0) */, IDictionary_2_t9761D347AC3B18ED56235F4DC19AAEABDBA24999_il2cpp_TypeInfo_var, L_0, L_1);
		int32_t L_3 = ___col2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = ___symbols3;
		NullCheck(L_2);
		InterfaceActionInvoker2< int32_t, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>::Add(!0,!1) */, IDictionary_2_t15C4AE6FA28CC96AF7D1E9949947C8A7AA64B92C_il2cpp_TypeInfo_var, L_2, L_3, L_4);
		return;
	}
}
// System.Void LitJson.JsonReader::TableAddRow(System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>,LitJson.ParserToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_TableAddRow_mBF41F9B65E4AC9057DD88DF448CEE05654FB1FA7 (RuntimeObject* ___parse_table0, int32_t ___rule1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m0042AB3E1A64BB363620361BBE7585680D722E16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t9761D347AC3B18ED56235F4DC19AAEABDBA24999_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = ___parse_table0;
		int32_t L_1 = ___rule1;
		Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4 * L_2 = (Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4 *)il2cpp_codegen_object_new(Dictionary_2_t8525C1D9F5FB98BBDD9FCEE0F794F993946465C4_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m0042AB3E1A64BB363620361BBE7585680D722E16(L_2, /*hidden argument*/Dictionary_2__ctor_m0042AB3E1A64BB363620361BBE7585680D722E16_RuntimeMethod_var);
		NullCheck(L_0);
		InterfaceActionInvoker2< int32_t, RuntimeObject* >::Invoke(4 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::Add(!0,!1) */, IDictionary_2_t9761D347AC3B18ED56235F4DC19AAEABDBA24999_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return;
	}
}
// System.Void LitJson.JsonReader::ProcessNumber(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_ProcessNumber_m91540D75BD02986CFF1D7F40AC2AC96CC4EAC419 (JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * __this, String_t* ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int64_t V_1 = 0;
	uint64_t V_2 = 0;
	double V_3 = 0.0;
	{
		String_t* L_0 = ___number0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_0, ((int32_t)46), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)(-1)))))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_2 = ___number0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_2, ((int32_t)101), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_3) == ((uint32_t)(-1)))))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_4 = ___number0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_4, ((int32_t)69), /*hidden argument*/NULL);
		if ((((int32_t)L_5) == ((int32_t)(-1))))
		{
			goto IL_0049;
		}
	}

IL_0021:
	{
		String_t* L_6 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_7;
		L_7 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Double_TryParse_mE740D7083AC52793A9634067C4F032570FFBF61E(L_6, ((int32_t)511), L_7, (double*)(&V_3), /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		__this->set_token_14(8);
		double L_9 = V_3;
		double L_10 = L_9;
		RuntimeObject * L_11 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_10);
		__this->set_token_value_13(L_11);
		return;
	}

IL_0049:
	{
		String_t* L_12 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_13;
		L_13 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		bool L_14;
		L_14 = Int32_TryParse_m006085C3B9AC64929E893942EF7A55328FDAE090(L_12, 7, L_13, (int32_t*)(&V_0), /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_006d;
		}
	}
	{
		__this->set_token_14(6);
		int32_t L_15 = V_0;
		int32_t L_16 = L_15;
		RuntimeObject * L_17 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_16);
		__this->set_token_value_13(L_17);
		return;
	}

IL_006d:
	{
		String_t* L_18 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_19;
		L_19 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		bool L_20;
		L_20 = Int64_TryParse_m4A94015941D9BD9F9304D1FE14F17E84BFD3B69A(L_18, 7, L_19, (int64_t*)(&V_1), /*hidden argument*/NULL);
		if (!L_20)
		{
			goto IL_0091;
		}
	}
	{
		__this->set_token_14(7);
		int64_t L_21 = V_1;
		int64_t L_22 = L_21;
		RuntimeObject * L_23 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_22);
		__this->set_token_value_13(L_23);
		return;
	}

IL_0091:
	{
		String_t* L_24 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_25;
		L_25 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		bool L_26;
		L_26 = UInt64_TryParse_m1D56C1385B6F4855FD1A893FEEE12C0796695621(L_24, 7, L_25, (uint64_t*)(&V_2), /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00b5;
		}
	}
	{
		__this->set_token_14(7);
		uint64_t L_27 = V_2;
		uint64_t L_28 = L_27;
		RuntimeObject * L_29 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_28);
		__this->set_token_value_13(L_29);
		return;
	}

IL_00b5:
	{
		__this->set_token_14(6);
		int32_t L_30 = 0;
		RuntimeObject * L_31 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_30);
		__this->set_token_value_13(L_31);
		return;
	}
}
// System.Void LitJson.JsonReader::ProcessSymbol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_ProcessSymbol_m8C1C4818381E7C0D995D3AD82FC39749D87F9369 (JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)91)))))
		{
			goto IL_0019;
		}
	}
	{
		__this->set_token_14(4);
		__this->set_parser_return_8((bool)1);
		return;
	}

IL_0019:
	{
		int32_t L_1 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)93)))))
		{
			goto IL_0032;
		}
	}
	{
		__this->set_token_14(5);
		__this->set_parser_return_8((bool)1);
		return;
	}

IL_0032:
	{
		int32_t L_2 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)123)))))
		{
			goto IL_004b;
		}
	}
	{
		__this->set_token_14(1);
		__this->set_parser_return_8((bool)1);
		return;
	}

IL_004b:
	{
		int32_t L_3 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_0064;
		}
	}
	{
		__this->set_token_14(3);
		__this->set_parser_return_8((bool)1);
		return;
	}

IL_0064:
	{
		int32_t L_4 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_009d;
		}
	}
	{
		bool L_5 = __this->get_parser_in_string_7();
		if (!L_5)
		{
			goto IL_0085;
		}
	}
	{
		__this->set_parser_in_string_7((bool)0);
		__this->set_parser_return_8((bool)1);
		return;
	}

IL_0085:
	{
		int32_t L_6 = __this->get_token_14();
		if (L_6)
		{
			goto IL_0095;
		}
	}
	{
		__this->set_token_14(((int32_t)9));
	}

IL_0095:
	{
		__this->set_parser_in_string_7((bool)1);
		return;
	}

IL_009d:
	{
		int32_t L_7 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_7) == ((uint32_t)((int32_t)65541)))))
		{
			goto IL_00bc;
		}
	}
	{
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_8 = __this->get_lexer_6();
		NullCheck(L_8);
		String_t* L_9;
		L_9 = Lexer_get_StringValue_m034AD1356FBD2A8031B031261E549239262006E9_inline(L_8, /*hidden argument*/NULL);
		__this->set_token_value_13(L_9);
		return;
	}

IL_00bc:
	{
		int32_t L_10 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_10) == ((uint32_t)((int32_t)65539)))))
		{
			goto IL_00e5;
		}
	}
	{
		__this->set_token_14(((int32_t)10));
		bool L_11 = ((bool)0);
		RuntimeObject * L_12 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_11);
		__this->set_token_value_13(L_12);
		__this->set_parser_return_8((bool)1);
		return;
	}

IL_00e5:
	{
		int32_t L_13 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_13) == ((uint32_t)((int32_t)65540)))))
		{
			goto IL_0102;
		}
	}
	{
		__this->set_token_14(((int32_t)11));
		__this->set_parser_return_8((bool)1);
		return;
	}

IL_0102:
	{
		int32_t L_14 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)65537)))))
		{
			goto IL_0128;
		}
	}
	{
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_15 = __this->get_lexer_6();
		NullCheck(L_15);
		String_t* L_16;
		L_16 = Lexer_get_StringValue_m034AD1356FBD2A8031B031261E549239262006E9_inline(L_15, /*hidden argument*/NULL);
		JsonReader_ProcessNumber_m91540D75BD02986CFF1D7F40AC2AC96CC4EAC419(__this, L_16, /*hidden argument*/NULL);
		__this->set_parser_return_8((bool)1);
		return;
	}

IL_0128:
	{
		int32_t L_17 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_17) == ((uint32_t)((int32_t)65546)))))
		{
			goto IL_013d;
		}
	}
	{
		__this->set_token_14(2);
		return;
	}

IL_013d:
	{
		int32_t L_18 = __this->get_current_symbol_3();
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)65538)))))
		{
			goto IL_0165;
		}
	}
	{
		__this->set_token_14(((int32_t)10));
		bool L_19 = ((bool)1);
		RuntimeObject * L_20 = Box(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var, &L_19);
		__this->set_token_value_13(L_20);
		__this->set_parser_return_8((bool)1);
	}

IL_0165:
	{
		return;
	}
}
// System.Boolean LitJson.JsonReader::ReadToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_ReadToken_mEADA25896E38892F27C7DB14FEB6B80564F5B96B (JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_end_of_input_5();
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_1 = __this->get_lexer_6();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_NextToken_m2DD1411BF4E5102DF9F57AA88D218E052818FC9E(L_1, /*hidden argument*/NULL);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_3 = __this->get_lexer_6();
		NullCheck(L_3);
		bool L_4;
		L_4 = Lexer_get_EndOfInput_mBE0B69A04CA5DDF09506A3E2A5D29F73FDF63D5B_inline(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		JsonReader_Close_mE1FB7CB27F582FAD11DDB129E9B172FE083BF0E5(__this, /*hidden argument*/NULL);
		return (bool)0;
	}

IL_002b:
	{
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_5 = __this->get_lexer_6();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Lexer_get_Token_mFF56BE71A4DFC4210FE0249131CCE77B4B27EA83_inline(L_5, /*hidden argument*/NULL);
		__this->set_current_input_2(L_6);
		return (bool)1;
	}
}
// System.Void LitJson.JsonReader::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_Close_mE1FB7CB27F582FAD11DDB129E9B172FE083BF0E5 (JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		bool L_0 = __this->get_end_of_input_5();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		return;
	}

IL_0009:
	{
		__this->set_end_of_input_5((bool)1);
		__this->set_end_of_json_4((bool)1);
		bool L_1 = __this->get_reader_is_owned_11();
		if (!L_1)
		{
			goto IL_0032;
		}
	}
	{
		TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * L_2 = __this->get_reader_10();
		V_0 = L_2;
	}

IL_0026:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x32, FINALLY_0028);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0028;
	}

FINALLY_0028:
	{ // begin finally (depth: 1)
		{
			TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * L_3 = V_0;
			if (!L_3)
			{
				goto IL_0031;
			}
		}

IL_002b:
		{
			TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * L_4 = V_0;
			NullCheck(L_4);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_4);
		}

IL_0031:
		{
			IL2CPP_END_FINALLY(40)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(40)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x32, IL_0032)
	}

IL_0032:
	{
		__this->set_reader_10((TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F *)NULL);
		return;
	}
}
// System.Boolean LitJson.JsonReader::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JsonReader_Read_m59D15EDA2E81ED1A1336339DDF8B71FF26F6EDAC (JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t15C4AE6FA28CC96AF7D1E9949947C8A7AA64B92C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t9761D347AC3B18ED56235F4DC19AAEABDBA24999_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Clear_m65385AD770CB3137B6B0638B1C8B3F135A5E277D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_m5677D80CE72817F059E7035EDC45E04FB2DB057B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_m975CA51F3A72228535A3AE9FE726481EF9E0B76C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mB57657F2527B7C25AB60EB9BBD09C7B42B14F3C3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_0 = NULL;
	KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952 * V_1 = NULL;
	int32_t V_2 = 0;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		bool L_0 = __this->get_end_of_input_5();
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		bool L_1 = __this->get_end_of_json_4();
		if (!L_1)
		{
			goto IL_0044;
		}
	}
	{
		__this->set_end_of_json_4((bool)0);
		Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * L_2 = __this->get_automaton_stack_1();
		NullCheck(L_2);
		Stack_1_Clear_m65385AD770CB3137B6B0638B1C8B3F135A5E277D(L_2, /*hidden argument*/Stack_1_Clear_m65385AD770CB3137B6B0638B1C8B3F135A5E277D_RuntimeMethod_var);
		Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * L_3 = __this->get_automaton_stack_1();
		NullCheck(L_3);
		Stack_1_Push_mB57657F2527B7C25AB60EB9BBD09C7B42B14F3C3(L_3, ((int32_t)65553), /*hidden argument*/Stack_1_Push_mB57657F2527B7C25AB60EB9BBD09C7B42B14F3C3_RuntimeMethod_var);
		Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * L_4 = __this->get_automaton_stack_1();
		NullCheck(L_4);
		Stack_1_Push_mB57657F2527B7C25AB60EB9BBD09C7B42B14F3C3(L_4, ((int32_t)65543), /*hidden argument*/Stack_1_Push_mB57657F2527B7C25AB60EB9BBD09C7B42B14F3C3_RuntimeMethod_var);
	}

IL_0044:
	{
		__this->set_parser_in_string_7((bool)0);
		__this->set_parser_return_8((bool)0);
		__this->set_token_14(0);
		__this->set_token_value_13(NULL);
		bool L_5 = __this->get_read_started_9();
		if (L_5)
		{
			goto IL_0079;
		}
	}
	{
		__this->set_read_started_9((bool)1);
		bool L_6;
		L_6 = JsonReader_ReadToken_mEADA25896E38892F27C7DB14FEB6B80564F5B96B(__this, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0079;
		}
	}
	{
		return (bool)0;
	}

IL_0079:
	{
		bool L_7 = __this->get_parser_return_8();
		if (!L_7)
		{
			goto IL_009c;
		}
	}
	{
		Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * L_8 = __this->get_automaton_stack_1();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Stack_1_Peek_m5677D80CE72817F059E7035EDC45E04FB2DB057B(L_8, /*hidden argument*/Stack_1_Peek_m5677D80CE72817F059E7035EDC45E04FB2DB057B_RuntimeMethod_var);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)65553)))))
		{
			goto IL_009a;
		}
	}
	{
		__this->set_end_of_json_4((bool)1);
	}

IL_009a:
	{
		return (bool)1;
	}

IL_009c:
	{
		Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * L_10 = __this->get_automaton_stack_1();
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Stack_1_Pop_m975CA51F3A72228535A3AE9FE726481EF9E0B76C(L_10, /*hidden argument*/Stack_1_Pop_m975CA51F3A72228535A3AE9FE726481EF9E0B76C_RuntimeMethod_var);
		__this->set_current_symbol_3(L_11);
		JsonReader_ProcessSymbol_m8C1C4818381E7C0D995D3AD82FC39749D87F9369(__this, /*hidden argument*/NULL);
		int32_t L_12 = __this->get_current_symbol_3();
		int32_t L_13 = __this->get_current_input_2();
		if ((!(((uint32_t)L_12) == ((uint32_t)L_13))))
		{
			goto IL_00f2;
		}
	}
	{
		bool L_14;
		L_14 = JsonReader_ReadToken_mEADA25896E38892F27C7DB14FEB6B80564F5B96B(__this, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0079;
		}
	}
	{
		Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * L_15 = __this->get_automaton_stack_1();
		NullCheck(L_15);
		int32_t L_16;
		L_16 = Stack_1_Peek_m5677D80CE72817F059E7035EDC45E04FB2DB057B(L_15, /*hidden argument*/Stack_1_Peek_m5677D80CE72817F059E7035EDC45E04FB2DB057B_RuntimeMethod_var);
		if ((((int32_t)L_16) == ((int32_t)((int32_t)65553))))
		{
			goto IL_00e6;
		}
	}
	{
		JsonException_tF4D20CEAA45C1D64D1C5E2AD15A6E819C2BB68AB * L_17 = (JsonException_tF4D20CEAA45C1D64D1C5E2AD15A6E819C2BB68AB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tF4D20CEAA45C1D64D1C5E2AD15A6E819C2BB68AB_il2cpp_TypeInfo_var)));
		JsonException__ctor_m17C3120E8C05EA289C449E27C996B9E42C9E18F4(L_17, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7B6EE056E549534162451A09C7F0AFAC372DBD06)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_Read_m59D15EDA2E81ED1A1336339DDF8B71FF26F6EDAC_RuntimeMethod_var)));
	}

IL_00e6:
	{
		bool L_18 = __this->get_parser_return_8();
		if (!L_18)
		{
			goto IL_00f0;
		}
	}
	{
		return (bool)1;
	}

IL_00f0:
	{
		return (bool)0;
	}

IL_00f2:
	{
	}

IL_00f3:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06_il2cpp_TypeInfo_var);
		RuntimeObject* L_19 = ((JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06_StaticFields*)il2cpp_codegen_static_fields_for(JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06_il2cpp_TypeInfo_var))->get_parse_table_0();
		int32_t L_20 = __this->get_current_symbol_3();
		NullCheck(L_19);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>>::get_Item(!0) */, IDictionary_2_t9761D347AC3B18ED56235F4DC19AAEABDBA24999_il2cpp_TypeInfo_var, L_19, L_20);
		int32_t L_22 = __this->get_current_input_2();
		NullCheck(L_21);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_23;
		L_23 = InterfaceFuncInvoker1< Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*, int32_t >::Invoke(0 /* !1 System.Collections.Generic.IDictionary`2<System.Int32,System.Int32[]>::get_Item(!0) */, IDictionary_2_t15C4AE6FA28CC96AF7D1E9949947C8A7AA64B92C_il2cpp_TypeInfo_var, L_21, L_22);
		V_0 = L_23;
		goto IL_011f;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0111;
		}
		throw e;
	}

CATCH_0111:
	{ // begin catch(System.Collections.Generic.KeyNotFoundException)
		V_1 = ((KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952 *)IL2CPP_GET_ACTIVE_EXCEPTION(KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952 *));
		int32_t L_24 = __this->get_current_input_2();
		KeyNotFoundException_t0A3BE653F7FA27DEA1C91C2FB3DAA6C8D0CBB952 * L_25 = V_1;
		JsonException_tF4D20CEAA45C1D64D1C5E2AD15A6E819C2BB68AB * L_26 = (JsonException_tF4D20CEAA45C1D64D1C5E2AD15A6E819C2BB68AB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tF4D20CEAA45C1D64D1C5E2AD15A6E819C2BB68AB_il2cpp_TypeInfo_var)));
		JsonException__ctor_m23C50EAF13C647006EA9E346DFB52D8ABDD40928(L_26, L_24, L_25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonReader_Read_m59D15EDA2E81ED1A1336339DDF8B71FF26F6EDAC_RuntimeMethod_var)));
	} // end catch (depth: 1)

IL_011f:
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27 = V_0;
		NullCheck(L_27);
		int32_t L_28 = 0;
		int32_t L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		if ((((int32_t)L_29) == ((int32_t)((int32_t)65554))))
		{
			goto IL_0079;
		}
	}
	{
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_30 = V_0;
		NullCheck(L_30);
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length))), (int32_t)1));
		goto IL_0146;
	}

IL_0134:
	{
		Stack_1_tC6C298385D16F10F391B84280D21FE059A45CC55 * L_31 = __this->get_automaton_stack_1();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_32 = V_0;
		int32_t L_33 = V_2;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		int32_t L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_31);
		Stack_1_Push_mB57657F2527B7C25AB60EB9BBD09C7B42B14F3C3(L_31, L_35, /*hidden argument*/Stack_1_Push_mB57657F2527B7C25AB60EB9BBD09C7B42B14F3C3_RuntimeMethod_var);
		int32_t L_36 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_36, (int32_t)1));
	}

IL_0146:
	{
		int32_t L_37 = V_2;
		if ((((int32_t)L_37) >= ((int32_t)0)))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_0079;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.JsonWriter::set_Validate(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_set_Validate_m7E0C408161622AC5EA0F4585E2CDFD63277BB49E (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_validate_9(L_0);
		return;
	}
}
// System.Void LitJson.JsonWriter::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__cctor_m46FC8A4C4014CD0B64986330E36BBE1D76492FD1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_tF9057404715003DE4AB771FF865770690910FB89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_0;
		L_0 = NumberFormatInfo_get_InvariantInfo_m286BBD095BFCA546BD2CD67E856D1A205436C03F(/*hidden argument*/NULL);
		((JsonWriter_tF9057404715003DE4AB771FF865770690910FB89_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_tF9057404715003DE4AB771FF865770690910FB89_il2cpp_TypeInfo_var))->set_number_format_0(L_0);
		return;
	}
}
// System.Void LitJson.JsonWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_mE4D6EF77FEB3D97DE0AD189AE391228F307B2D6B (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		__this->set_inst_string_builder_7(L_0);
		StringBuilder_t * L_1 = __this->get_inst_string_builder_7();
		StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_2 = (StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 *)il2cpp_codegen_object_new(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_il2cpp_TypeInfo_var);
		StringWriter__ctor_mCA0BB9FBAEDB78DF47C385E534F1EB38F6334F66(L_2, L_1, /*hidden argument*/NULL);
		__this->set_writer_11(L_2);
		JsonWriter_Init_m9CF8AAA8375A99A28FF361BF0E14AC868766AA29(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::.ctor(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_m674F2DE75D11F51D8E04A9F05598C53FB5FA9081 (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___writer0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_0 = ___writer0;
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral638C5441E8427B2B9D2C941DDBF958579B5FE3F0)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter__ctor_m674F2DE75D11F51D8E04A9F05598C53FB5FA9081_RuntimeMethod_var)));
	}

IL_0014:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_2 = ___writer0;
		__this->set_writer_11(L_2);
		JsonWriter_Init_m9CF8AAA8375A99A28FF361BF0E14AC868766AA29(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::DoValidation(LitJson.Condition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_DoValidation_mA59E12C4B3B46B655369424CCA9FBC421E4151EB (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, int32_t ___cond0, const RuntimeMethod* method)
{
	{
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_0 = __this->get_context_1();
		NullCheck(L_0);
		bool L_1 = L_0->get_ExpectingValue_3();
		if (L_1)
		{
			goto IL_0020;
		}
	}
	{
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_2 = __this->get_context_1();
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_3 = L_2;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_Count_0();
		NullCheck(L_3);
		L_3->set_Count_0(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1)));
	}

IL_0020:
	{
		bool L_5 = __this->get_validate_9();
		if (L_5)
		{
			goto IL_0029;
		}
	}
	{
		return;
	}

IL_0029:
	{
		bool L_6 = __this->get_has_reached_end_3();
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		JsonException_tF4D20CEAA45C1D64D1C5E2AD15A6E819C2BB68AB * L_7 = (JsonException_tF4D20CEAA45C1D64D1C5E2AD15A6E819C2BB68AB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tF4D20CEAA45C1D64D1C5E2AD15A6E819C2BB68AB_il2cpp_TypeInfo_var)));
		JsonException__ctor_m17C3120E8C05EA289C449E27C996B9E42C9E18F4(L_7, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8E284AA45C643AAA8D3553AA7AB6A1C3BC3E32D1)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_mA59E12C4B3B46B655369424CCA9FBC421E4151EB_RuntimeMethod_var)));
	}

IL_003c:
	{
		int32_t L_8 = ___cond0;
		switch (L_8)
		{
			case 0:
			{
				goto IL_0057;
			}
			case 1:
			{
				goto IL_0072;
			}
			case 2:
			{
				goto IL_009a;
			}
			case 3:
			{
				goto IL_00bf;
			}
			case 4:
			{
				goto IL_00e4;
			}
		}
	}
	{
		return;
	}

IL_0057:
	{
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_9 = __this->get_context_1();
		NullCheck(L_9);
		bool L_10 = L_9->get_InArray_1();
		if (L_10)
		{
			goto IL_0116;
		}
	}
	{
		JsonException_tF4D20CEAA45C1D64D1C5E2AD15A6E819C2BB68AB * L_11 = (JsonException_tF4D20CEAA45C1D64D1C5E2AD15A6E819C2BB68AB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tF4D20CEAA45C1D64D1C5E2AD15A6E819C2BB68AB_il2cpp_TypeInfo_var)));
		JsonException__ctor_m17C3120E8C05EA289C449E27C996B9E42C9E18F4(L_11, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral057118C49B28F31FA4955B194753088DDCD94999)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_mA59E12C4B3B46B655369424CCA9FBC421E4151EB_RuntimeMethod_var)));
	}

IL_0072:
	{
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_12 = __this->get_context_1();
		NullCheck(L_12);
		bool L_13 = L_12->get_InObject_2();
		if (!L_13)
		{
			goto IL_008f;
		}
	}
	{
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_14 = __this->get_context_1();
		NullCheck(L_14);
		bool L_15 = L_14->get_ExpectingValue_3();
		if (!L_15)
		{
			goto IL_0116;
		}
	}

IL_008f:
	{
		JsonException_tF4D20CEAA45C1D64D1C5E2AD15A6E819C2BB68AB * L_16 = (JsonException_tF4D20CEAA45C1D64D1C5E2AD15A6E819C2BB68AB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tF4D20CEAA45C1D64D1C5E2AD15A6E819C2BB68AB_il2cpp_TypeInfo_var)));
		JsonException__ctor_m17C3120E8C05EA289C449E27C996B9E42C9E18F4(L_16, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCEE7535349ADB76DD55B08451D311FC3CF06A19C)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_16, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_mA59E12C4B3B46B655369424CCA9FBC421E4151EB_RuntimeMethod_var)));
	}

IL_009a:
	{
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_17 = __this->get_context_1();
		NullCheck(L_17);
		bool L_18 = L_17->get_InObject_2();
		if (!L_18)
		{
			goto IL_0116;
		}
	}
	{
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_19 = __this->get_context_1();
		NullCheck(L_19);
		bool L_20 = L_19->get_ExpectingValue_3();
		if (L_20)
		{
			goto IL_0116;
		}
	}
	{
		JsonException_tF4D20CEAA45C1D64D1C5E2AD15A6E819C2BB68AB * L_21 = (JsonException_tF4D20CEAA45C1D64D1C5E2AD15A6E819C2BB68AB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tF4D20CEAA45C1D64D1C5E2AD15A6E819C2BB68AB_il2cpp_TypeInfo_var)));
		JsonException__ctor_m17C3120E8C05EA289C449E27C996B9E42C9E18F4(L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCDA723AA4DBB226A906416AA9BF1C2D4CEC53C89)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_mA59E12C4B3B46B655369424CCA9FBC421E4151EB_RuntimeMethod_var)));
	}

IL_00bf:
	{
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_22 = __this->get_context_1();
		NullCheck(L_22);
		bool L_23 = L_22->get_InObject_2();
		if (!L_23)
		{
			goto IL_00d9;
		}
	}
	{
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_24 = __this->get_context_1();
		NullCheck(L_24);
		bool L_25 = L_24->get_ExpectingValue_3();
		if (!L_25)
		{
			goto IL_0116;
		}
	}

IL_00d9:
	{
		JsonException_tF4D20CEAA45C1D64D1C5E2AD15A6E819C2BB68AB * L_26 = (JsonException_tF4D20CEAA45C1D64D1C5E2AD15A6E819C2BB68AB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tF4D20CEAA45C1D64D1C5E2AD15A6E819C2BB68AB_il2cpp_TypeInfo_var)));
		JsonException__ctor_m17C3120E8C05EA289C449E27C996B9E42C9E18F4(L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral84BE6DF7F5E86A94476E7ED44C8A9ACA10E6236A)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_mA59E12C4B3B46B655369424CCA9FBC421E4151EB_RuntimeMethod_var)));
	}

IL_00e4:
	{
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_27 = __this->get_context_1();
		NullCheck(L_27);
		bool L_28 = L_27->get_InArray_1();
		if (L_28)
		{
			goto IL_0116;
		}
	}
	{
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_29 = __this->get_context_1();
		NullCheck(L_29);
		bool L_30 = L_29->get_InObject_2();
		if (!L_30)
		{
			goto IL_010b;
		}
	}
	{
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_31 = __this->get_context_1();
		NullCheck(L_31);
		bool L_32 = L_31->get_ExpectingValue_3();
		if (L_32)
		{
			goto IL_0116;
		}
	}

IL_010b:
	{
		JsonException_tF4D20CEAA45C1D64D1C5E2AD15A6E819C2BB68AB * L_33 = (JsonException_tF4D20CEAA45C1D64D1C5E2AD15A6E819C2BB68AB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tF4D20CEAA45C1D64D1C5E2AD15A6E819C2BB68AB_il2cpp_TypeInfo_var)));
		JsonException__ctor_m17C3120E8C05EA289C449E27C996B9E42C9E18F4(L_33, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC63496F78F80F09E4841EF5CD0DA8DAF7028FB4B)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonWriter_DoValidation_mA59E12C4B3B46B655369424CCA9FBC421E4151EB_RuntimeMethod_var)));
	}

IL_0116:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Init_m9CF8AAA8375A99A28FF361BF0E14AC868766AA29 (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mAAC659B8244405A0EB9B9405727EADF1200FD30C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m85DCC15D944DFD51D4128D77168CE17B40060B96_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_tEFB614397DBC5AFE2026C45C8FD2A720C51C0F27_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_has_reached_end_3((bool)0);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->set_hex_seq_4(L_0);
		__this->set_indentation_5(0);
		__this->set_indent_value_6(4);
		__this->set_pretty_print_8((bool)0);
		__this->set_validate_9((bool)1);
		__this->set_lower_case_properties_10((bool)0);
		Stack_1_tEFB614397DBC5AFE2026C45C8FD2A720C51C0F27 * L_1 = (Stack_1_tEFB614397DBC5AFE2026C45C8FD2A720C51C0F27 *)il2cpp_codegen_object_new(Stack_1_tEFB614397DBC5AFE2026C45C8FD2A720C51C0F27_il2cpp_TypeInfo_var);
		Stack_1__ctor_m85DCC15D944DFD51D4128D77168CE17B40060B96(L_1, /*hidden argument*/Stack_1__ctor_m85DCC15D944DFD51D4128D77168CE17B40060B96_RuntimeMethod_var);
		__this->set_ctx_stack_2(L_1);
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_2 = (WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB *)il2cpp_codegen_object_new(WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB_il2cpp_TypeInfo_var);
		WriterContext__ctor_m79329B74FB582A1E615AF61376B999F38229143D(L_2, /*hidden argument*/NULL);
		__this->set_context_1(L_2);
		Stack_1_tEFB614397DBC5AFE2026C45C8FD2A720C51C0F27 * L_3 = __this->get_ctx_stack_2();
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_4 = __this->get_context_1();
		NullCheck(L_3);
		Stack_1_Push_mAAC659B8244405A0EB9B9405727EADF1200FD30C(L_3, L_4, /*hidden argument*/Stack_1_Push_mAAC659B8244405A0EB9B9405727EADF1200FD30C_RuntimeMethod_var);
		return;
	}
}
// System.Void LitJson.JsonWriter::IntToHex(System.Int32,System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_IntToHex_m412AAD581DE7B64E0F11CC39FED8AB5273B28E8B (int32_t ___n0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___hex1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_1 = 0;
		goto IL_0030;
	}

IL_0004:
	{
		int32_t L_0 = ___n0;
		V_0 = ((int32_t)((int32_t)L_0%(int32_t)((int32_t)16)));
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) >= ((int32_t)((int32_t)10))))
		{
			goto IL_001a;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = ___hex1;
		int32_t L_3 = V_1;
		int32_t L_4 = V_0;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)3, (int32_t)L_3))), (Il2CppChar)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)48), (int32_t)L_4)))));
		goto IL_0027;
	}

IL_001a:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = ___hex1;
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract((int32_t)3, (int32_t)L_6))), (Il2CppChar)((int32_t)((uint16_t)((int32_t)il2cpp_codegen_add((int32_t)((int32_t)65), (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)10))))))));
	}

IL_0027:
	{
		int32_t L_8 = ___n0;
		___n0 = ((int32_t)((int32_t)L_8>>(int32_t)4));
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0030:
	{
		int32_t L_10 = V_1;
		if ((((int32_t)L_10) < ((int32_t)4)))
		{
			goto IL_0004;
		}
	}
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::Indent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Indent_m3827589B8EB89E7C48BFA3B56864C256BC5B0389 (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_pretty_print_8();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = __this->get_indentation_5();
		int32_t L_2 = __this->get_indent_value_6();
		__this->set_indentation_5(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2)));
	}

IL_001b:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::Put(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Put_mD7B468597C737B026F00E48C330E2628ACDD5F51 (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		bool L_0 = __this->get_pretty_print_8();
		if (!L_0)
		{
			goto IL_0033;
		}
	}
	{
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_1 = __this->get_context_1();
		NullCheck(L_1);
		bool L_2 = L_1->get_ExpectingValue_3();
		if (L_2)
		{
			goto IL_0033;
		}
	}
	{
		V_0 = 0;
		goto IL_002a;
	}

IL_0019:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_3 = __this->get_writer_11();
		NullCheck(L_3);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_3, ((int32_t)32));
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
	}

IL_002a:
	{
		int32_t L_5 = V_0;
		int32_t L_6 = __this->get_indentation_5();
		if ((((int32_t)L_5) < ((int32_t)L_6)))
		{
			goto IL_0019;
		}
	}

IL_0033:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_7 = __this->get_writer_11();
		String_t* L_8 = ___str0;
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_7, L_8);
		return;
	}
}
// System.Void LitJson.JsonWriter::PutNewline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_m1C18E58436D322ED951CD92E36C2DC11208F46E9 (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, const RuntimeMethod* method)
{
	{
		JsonWriter_PutNewline_m8109AD3726C3EE1E29B8365FF742BCF4E27CCCBD(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::PutNewline(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutNewline_m8109AD3726C3EE1E29B8365FF742BCF4E27CCCBD (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, bool ___add_comma0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___add_comma0;
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_1 = __this->get_context_1();
		NullCheck(L_1);
		bool L_2 = L_1->get_ExpectingValue_3();
		if (L_2)
		{
			goto IL_002b;
		}
	}
	{
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_3 = __this->get_context_1();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_Count_0();
		if ((((int32_t)L_4) <= ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_5 = __this->get_writer_11();
		NullCheck(L_5);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_5, ((int32_t)44));
	}

IL_002b:
	{
		bool L_6 = __this->get_pretty_print_8();
		if (!L_6)
		{
			goto IL_0050;
		}
	}
	{
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_7 = __this->get_context_1();
		NullCheck(L_7);
		bool L_8 = L_7->get_ExpectingValue_3();
		if (L_8)
		{
			goto IL_0050;
		}
	}
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_9 = __this->get_writer_11();
		String_t* L_10;
		L_10 = Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4(/*hidden argument*/NULL);
		NullCheck(L_9);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_9, L_10);
	}

IL_0050:
	{
		return;
	}
}
// System.Void LitJson.JsonWriter::PutString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_PutString_mEED06E70ECEF8FED16888E35CEDB08F2860F3C72 (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_tF9057404715003DE4AB771FF865770690910FB89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		JsonWriter_Put_mD7B468597C737B026F00E48C330E2628ACDD5F51(__this, L_0, /*hidden argument*/NULL);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_1 = __this->get_writer_11();
		NullCheck(L_1);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_1, ((int32_t)34));
		String_t* L_2 = ___str0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0145;
	}

IL_0026:
	{
		String_t* L_4 = ___str0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		Il2CppChar L_6;
		L_6 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_4, L_5, /*hidden argument*/NULL);
		V_2 = L_6;
		Il2CppChar L_7 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)8)))
		{
			case 0:
			{
				goto IL_00d2;
			}
			case 1:
			{
				goto IL_0087;
			}
			case 2:
			{
				goto IL_005d;
			}
			case 3:
			{
				goto IL_00e4;
			}
			case 4:
			{
				goto IL_00c0;
			}
			case 5:
			{
				goto IL_0072;
			}
		}
	}
	{
		Il2CppChar L_8 = V_2;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)34))))
		{
			goto IL_009c;
		}
	}
	{
		Il2CppChar L_9 = V_2;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)92))))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_00e4;
	}

IL_005d:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_10 = __this->get_writer_11();
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_10, _stringLiteral785F17F45C331C415D0A7458E6AAC36966399C51);
		goto IL_0141;
	}

IL_0072:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_11 = __this->get_writer_11();
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_11, _stringLiteralB78F235D4291950A7D101307609C259F3E1F033F);
		goto IL_0141;
	}

IL_0087:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_12 = __this->get_writer_11();
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_12, _stringLiteral7F3238CD8C342B06FB9AB185C610175C84625462);
		goto IL_0141;
	}

IL_009c:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_13 = __this->get_writer_11();
		NullCheck(L_13);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_13, ((int32_t)92));
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_14 = __this->get_writer_11();
		String_t* L_15 = ___str0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		Il2CppChar L_17;
		L_17 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_14, L_17);
		goto IL_0141;
	}

IL_00c0:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_18 = __this->get_writer_11();
		NullCheck(L_18);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_18, _stringLiteralA7C3FCA8C63E127B542B38A5CA5E3FEEDDD1B122);
		goto IL_0141;
	}

IL_00d2:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_19 = __this->get_writer_11();
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_19, _stringLiteral5962E944D7340CE47999BF097B4AFD70C1501FB9);
		goto IL_0141;
	}

IL_00e4:
	{
		String_t* L_20 = ___str0;
		int32_t L_21 = V_1;
		NullCheck(L_20);
		Il2CppChar L_22;
		L_22 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_20, L_21, /*hidden argument*/NULL);
		if ((((int32_t)L_22) < ((int32_t)((int32_t)32))))
		{
			goto IL_010e;
		}
	}
	{
		String_t* L_23 = ___str0;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		Il2CppChar L_25;
		L_25 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_23, L_24, /*hidden argument*/NULL);
		if ((((int32_t)L_25) > ((int32_t)((int32_t)126))))
		{
			goto IL_010e;
		}
	}
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_26 = __this->get_writer_11();
		String_t* L_27 = ___str0;
		int32_t L_28 = V_1;
		NullCheck(L_27);
		Il2CppChar L_29;
		L_29 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_27, L_28, /*hidden argument*/NULL);
		NullCheck(L_26);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_26, L_29);
		goto IL_0141;
	}

IL_010e:
	{
		String_t* L_30 = ___str0;
		int32_t L_31 = V_1;
		NullCheck(L_30);
		Il2CppChar L_32;
		L_32 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_30, L_31, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_33 = __this->get_hex_seq_4();
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_tF9057404715003DE4AB771FF865770690910FB89_il2cpp_TypeInfo_var);
		JsonWriter_IntToHex_m412AAD581DE7B64E0F11CC39FED8AB5273B28E8B(L_32, L_33, /*hidden argument*/NULL);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_34 = __this->get_writer_11();
		NullCheck(L_34);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_34, _stringLiteralDA666908BB15F4E1D2649752EC5DCBD0D5C64699);
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_35 = __this->get_writer_11();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_36 = __this->get_hex_seq_4();
		NullCheck(L_35);
		VirtActionInvoker1< CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* >::Invoke(13 /* System.Void System.IO.TextWriter::Write(System.Char[]) */, L_35, L_36);
	}

IL_0141:
	{
		int32_t L_37 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
	}

IL_0145:
	{
		int32_t L_38 = V_1;
		int32_t L_39 = V_0;
		if ((((int32_t)L_38) < ((int32_t)L_39)))
		{
			goto IL_0026;
		}
	}
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_40 = __this->get_writer_11();
		NullCheck(L_40);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_40, ((int32_t)34));
		return;
	}
}
// System.Void LitJson.JsonWriter::Unindent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Unindent_mE3667042AD60FBE2B0DEB5C569D92BD9558CEEE6 (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_pretty_print_8();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		int32_t L_1 = __this->get_indentation_5();
		int32_t L_2 = __this->get_indent_value_6();
		__this->set_indentation_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_2)));
	}

IL_001b:
	{
		return;
	}
}
// System.String LitJson.JsonWriter::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonWriter_ToString_mAC9C79AA5C2D8840F4B4A862EB326E45989A7CA1 (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringBuilder_t * L_0 = __this->get_inst_string_builder_7();
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		return L_1;
	}

IL_000e:
	{
		StringBuilder_t * L_2 = __this->get_inst_string_builder_7();
		NullCheck(L_2);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		return L_3;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m943A813A4F6AF6DA968C2C8DC1553029522011F0 (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, bool ___boolean0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		s_Il2CppMethodInitialized = true;
	}
	JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * G_B2_0 = NULL;
	JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * G_B3_1 = NULL;
	{
		JsonWriter_DoValidation_mA59E12C4B3B46B655369424CCA9FBC421E4151EB(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m1C18E58436D322ED951CD92E36C2DC11208F46E9(__this, /*hidden argument*/NULL);
		bool L_0 = ___boolean0;
		G_B1_0 = __this;
		if (L_0)
		{
			G_B2_0 = __this;
			goto IL_0018;
		}
	}
	{
		G_B3_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
		G_B3_1 = G_B1_0;
		goto IL_001d;
	}

IL_0018:
	{
		G_B3_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
		G_B3_1 = G_B2_0;
	}

IL_001d:
	{
		NullCheck(G_B3_1);
		JsonWriter_Put_mD7B468597C737B026F00E48C330E2628ACDD5F51(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_1 = __this->get_context_1();
		NullCheck(L_1);
		L_1->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mAF1F715A5CE7FFE16A6BDC8E628250279F5460EF (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_tF9057404715003DE4AB771FF865770690910FB89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_mA59E12C4B3B46B655369424CCA9FBC421E4151EB(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m1C18E58436D322ED951CD92E36C2DC11208F46E9(__this, /*hidden argument*/NULL);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_tF9057404715003DE4AB771FF865770690910FB89_il2cpp_TypeInfo_var);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_1 = ((JsonWriter_tF9057404715003DE4AB771FF865770690910FB89_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_tF9057404715003DE4AB771FF865770690910FB89_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m4365C068739D443C5C6EEB5445AAEE1DBB245A4B(L_0, L_1, /*hidden argument*/NULL);
		JsonWriter_Put_mD7B468597C737B026F00E48C330E2628ACDD5F51(__this, L_2, /*hidden argument*/NULL);
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_3 = __this->get_context_1();
		NullCheck(L_3);
		L_3->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mF1F000E089B280D3D81FF45EFBD65434D43132AC (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, double ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_tF9057404715003DE4AB771FF865770690910FB89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC31E66F919D06AD2730738EF7F884271E99BB7DA);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		JsonWriter_DoValidation_mA59E12C4B3B46B655369424CCA9FBC421E4151EB(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m1C18E58436D322ED951CD92E36C2DC11208F46E9(__this, /*hidden argument*/NULL);
		double L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_tF9057404715003DE4AB771FF865770690910FB89_il2cpp_TypeInfo_var);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_1 = ((JsonWriter_tF9057404715003DE4AB771FF865770690910FB89_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_tF9057404715003DE4AB771FF865770690910FB89_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m5BC045F91E837268FECEA78DA859902005EF91D1(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		String_t* L_3 = V_0;
		JsonWriter_Put_mD7B468597C737B026F00E48C330E2628ACDD5F51(__this, L_3, /*hidden argument*/NULL);
		String_t* L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_4, ((int32_t)46), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)(-1)))))
		{
			goto IL_0046;
		}
	}
	{
		String_t* L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_IndexOf_mEE2D2F738175E3FF05580366D6226DBD673CA2BE(L_6, ((int32_t)69), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_0046;
		}
	}
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_8 = __this->get_writer_11();
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_8, _stringLiteralC31E66F919D06AD2730738EF7F884271E99BB7DA);
	}

IL_0046:
	{
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_9 = __this->get_context_1();
		NullCheck(L_9);
		L_9->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mCF4C1D57638E36B9BA8A8530AD06A6A7F57BADDA (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, int32_t ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_tF9057404715003DE4AB771FF865770690910FB89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_mA59E12C4B3B46B655369424CCA9FBC421E4151EB(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m1C18E58436D322ED951CD92E36C2DC11208F46E9(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_tF9057404715003DE4AB771FF865770690910FB89_il2cpp_TypeInfo_var);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_1 = ((JsonWriter_tF9057404715003DE4AB771FF865770690910FB89_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_tF9057404715003DE4AB771FF865770690910FB89_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m608712133E3A607F257620CB270C6758F01CB109(L_0, L_1, /*hidden argument*/NULL);
		JsonWriter_Put_mD7B468597C737B026F00E48C330E2628ACDD5F51(__this, L_2, /*hidden argument*/NULL);
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_3 = __this->get_context_1();
		NullCheck(L_3);
		L_3->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m4B9B4BDC347A4A5053CB5FEC9A1C21DBD1D36E86 (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, int64_t ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_tF9057404715003DE4AB771FF865770690910FB89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_mA59E12C4B3B46B655369424CCA9FBC421E4151EB(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m1C18E58436D322ED951CD92E36C2DC11208F46E9(__this, /*hidden argument*/NULL);
		int64_t L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_tF9057404715003DE4AB771FF865770690910FB89_il2cpp_TypeInfo_var);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_1 = ((JsonWriter_tF9057404715003DE4AB771FF865770690910FB89_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_tF9057404715003DE4AB771FF865770690910FB89_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m96D69564ADA9ACFD81958A9AB178D27D7BFECB4E(L_0, L_1, /*hidden argument*/NULL);
		JsonWriter_Put_mD7B468597C737B026F00E48C330E2628ACDD5F51(__this, L_2, /*hidden argument*/NULL);
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_3 = __this->get_context_1();
		NullCheck(L_3);
		L_3->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_m1A8BED62EC95E168E5BE5F8DB3C8E4C89EE50A45 (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, String_t* ___str0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_mA59E12C4B3B46B655369424CCA9FBC421E4151EB(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m1C18E58436D322ED951CD92E36C2DC11208F46E9(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___str0;
		if (L_0)
		{
			goto IL_001d;
		}
	}
	{
		JsonWriter_Put_mD7B468597C737B026F00E48C330E2628ACDD5F51(__this, _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174, /*hidden argument*/NULL);
		goto IL_0024;
	}

IL_001d:
	{
		String_t* L_1 = ___str0;
		JsonWriter_PutString_mEED06E70ECEF8FED16888E35CEDB08F2860F3C72(__this, L_1, /*hidden argument*/NULL);
	}

IL_0024:
	{
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_2 = __this->get_context_1();
		NullCheck(L_2);
		L_2->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::Write(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Write_mF3349C36E4720C9678D00C75B1C4B630AE4BCEF6 (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, uint64_t ___number0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonWriter_tF9057404715003DE4AB771FF865770690910FB89_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_mA59E12C4B3B46B655369424CCA9FBC421E4151EB(__this, 4, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m1C18E58436D322ED951CD92E36C2DC11208F46E9(__this, /*hidden argument*/NULL);
		uint64_t L_0 = ___number0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_tF9057404715003DE4AB771FF865770690910FB89_il2cpp_TypeInfo_var);
		NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * L_1 = ((JsonWriter_tF9057404715003DE4AB771FF865770690910FB89_StaticFields*)il2cpp_codegen_static_fields_for(JsonWriter_tF9057404715003DE4AB771FF865770690910FB89_il2cpp_TypeInfo_var))->get_number_format_0();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_m7DC0B782B61A20E04F624E47FD967D246BB78BD6(L_0, L_1, /*hidden argument*/NULL);
		JsonWriter_Put_mD7B468597C737B026F00E48C330E2628ACDD5F51(__this, L_2, /*hidden argument*/NULL);
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_3 = __this->get_context_1();
		NullCheck(L_3);
		L_3->set_ExpectingValue_3((bool)0);
		return;
	}
}
// System.Void LitJson.JsonWriter::WriteArrayEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteArrayEnd_m350C5F39EF6BBC44CA6E54D79065E78D2842F596 (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_m23F6D7DF90263D3517E91DE0F9A71870800C1E05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mBCAA112320E9A1EE079981A98DC82F5BA174C2F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_mF285F6000A866CB918AEBA65E173C15E61BF003C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_mA59E12C4B3B46B655369424CCA9FBC421E4151EB(__this, 0, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m8109AD3726C3EE1E29B8365FF742BCF4E27CCCBD(__this, (bool)0, /*hidden argument*/NULL);
		Stack_1_tEFB614397DBC5AFE2026C45C8FD2A720C51C0F27 * L_0 = __this->get_ctx_stack_2();
		NullCheck(L_0);
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_1;
		L_1 = Stack_1_Pop_mBCAA112320E9A1EE079981A98DC82F5BA174C2F0(L_0, /*hidden argument*/Stack_1_Pop_mBCAA112320E9A1EE079981A98DC82F5BA174C2F0_RuntimeMethod_var);
		Stack_1_tEFB614397DBC5AFE2026C45C8FD2A720C51C0F27 * L_2 = __this->get_ctx_stack_2();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Stack_1_get_Count_mF285F6000A866CB918AEBA65E173C15E61BF003C_inline(L_2, /*hidden argument*/Stack_1_get_Count_mF285F6000A866CB918AEBA65E173C15E61BF003C_RuntimeMethod_var);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}
	{
		__this->set_has_reached_end_3((bool)1);
		goto IL_004e;
	}

IL_0031:
	{
		Stack_1_tEFB614397DBC5AFE2026C45C8FD2A720C51C0F27 * L_4 = __this->get_ctx_stack_2();
		NullCheck(L_4);
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_5;
		L_5 = Stack_1_Peek_m23F6D7DF90263D3517E91DE0F9A71870800C1E05(L_4, /*hidden argument*/Stack_1_Peek_m23F6D7DF90263D3517E91DE0F9A71870800C1E05_RuntimeMethod_var);
		__this->set_context_1(L_5);
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_6 = __this->get_context_1();
		NullCheck(L_6);
		L_6->set_ExpectingValue_3((bool)0);
	}

IL_004e:
	{
		JsonWriter_Unindent_mE3667042AD60FBE2B0DEB5C569D92BD9558CEEE6(__this, /*hidden argument*/NULL);
		JsonWriter_Put_mD7B468597C737B026F00E48C330E2628ACDD5F51(__this, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::WriteArrayStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteArrayStart_m718A90F07C4CC639B5972028842511CDA10BB307 (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mAAC659B8244405A0EB9B9405727EADF1200FD30C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_mA59E12C4B3B46B655369424CCA9FBC421E4151EB(__this, 2, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m1C18E58436D322ED951CD92E36C2DC11208F46E9(__this, /*hidden argument*/NULL);
		JsonWriter_Put_mD7B468597C737B026F00E48C330E2628ACDD5F51(__this, _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1, /*hidden argument*/NULL);
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_0 = (WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB *)il2cpp_codegen_object_new(WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB_il2cpp_TypeInfo_var);
		WriterContext__ctor_m79329B74FB582A1E615AF61376B999F38229143D(L_0, /*hidden argument*/NULL);
		__this->set_context_1(L_0);
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_1 = __this->get_context_1();
		NullCheck(L_1);
		L_1->set_InArray_1((bool)1);
		Stack_1_tEFB614397DBC5AFE2026C45C8FD2A720C51C0F27 * L_2 = __this->get_ctx_stack_2();
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_3 = __this->get_context_1();
		NullCheck(L_2);
		Stack_1_Push_mAAC659B8244405A0EB9B9405727EADF1200FD30C(L_2, L_3, /*hidden argument*/Stack_1_Push_mAAC659B8244405A0EB9B9405727EADF1200FD30C_RuntimeMethod_var);
		JsonWriter_Indent_m3827589B8EB89E7C48BFA3B56864C256BC5B0389(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::WriteObjectEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteObjectEnd_m4AD1C04B7B225270FACABF25C0A0F5633C35315A (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_m23F6D7DF90263D3517E91DE0F9A71870800C1E05_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mBCAA112320E9A1EE079981A98DC82F5BA174C2F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_mF285F6000A866CB918AEBA65E173C15E61BF003C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_mA59E12C4B3B46B655369424CCA9FBC421E4151EB(__this, 1, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m8109AD3726C3EE1E29B8365FF742BCF4E27CCCBD(__this, (bool)0, /*hidden argument*/NULL);
		Stack_1_tEFB614397DBC5AFE2026C45C8FD2A720C51C0F27 * L_0 = __this->get_ctx_stack_2();
		NullCheck(L_0);
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_1;
		L_1 = Stack_1_Pop_mBCAA112320E9A1EE079981A98DC82F5BA174C2F0(L_0, /*hidden argument*/Stack_1_Pop_mBCAA112320E9A1EE079981A98DC82F5BA174C2F0_RuntimeMethod_var);
		Stack_1_tEFB614397DBC5AFE2026C45C8FD2A720C51C0F27 * L_2 = __this->get_ctx_stack_2();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Stack_1_get_Count_mF285F6000A866CB918AEBA65E173C15E61BF003C_inline(L_2, /*hidden argument*/Stack_1_get_Count_mF285F6000A866CB918AEBA65E173C15E61BF003C_RuntimeMethod_var);
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}
	{
		__this->set_has_reached_end_3((bool)1);
		goto IL_004e;
	}

IL_0031:
	{
		Stack_1_tEFB614397DBC5AFE2026C45C8FD2A720C51C0F27 * L_4 = __this->get_ctx_stack_2();
		NullCheck(L_4);
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_5;
		L_5 = Stack_1_Peek_m23F6D7DF90263D3517E91DE0F9A71870800C1E05(L_4, /*hidden argument*/Stack_1_Peek_m23F6D7DF90263D3517E91DE0F9A71870800C1E05_RuntimeMethod_var);
		__this->set_context_1(L_5);
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_6 = __this->get_context_1();
		NullCheck(L_6);
		L_6->set_ExpectingValue_3((bool)0);
	}

IL_004e:
	{
		JsonWriter_Unindent_mE3667042AD60FBE2B0DEB5C569D92BD9558CEEE6(__this, /*hidden argument*/NULL);
		JsonWriter_Put_mD7B468597C737B026F00E48C330E2628ACDD5F51(__this, _stringLiteral4D8D9C94AC5DA5FCED2EC8A64E10E714A2515C30, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::WriteObjectStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteObjectStart_m55D25205F274F9FDA01323A8BFC72891F37C3647 (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mAAC659B8244405A0EB9B9405727EADF1200FD30C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_DoValidation_mA59E12C4B3B46B655369424CCA9FBC421E4151EB(__this, 2, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m1C18E58436D322ED951CD92E36C2DC11208F46E9(__this, /*hidden argument*/NULL);
		JsonWriter_Put_mD7B468597C737B026F00E48C330E2628ACDD5F51(__this, _stringLiteral0C3C6829C3CCF8020C6AC45B87963ADC095CD44A, /*hidden argument*/NULL);
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_0 = (WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB *)il2cpp_codegen_object_new(WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB_il2cpp_TypeInfo_var);
		WriterContext__ctor_m79329B74FB582A1E615AF61376B999F38229143D(L_0, /*hidden argument*/NULL);
		__this->set_context_1(L_0);
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_1 = __this->get_context_1();
		NullCheck(L_1);
		L_1->set_InObject_2((bool)1);
		Stack_1_tEFB614397DBC5AFE2026C45C8FD2A720C51C0F27 * L_2 = __this->get_ctx_stack_2();
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_3 = __this->get_context_1();
		NullCheck(L_2);
		Stack_1_Push_mAAC659B8244405A0EB9B9405727EADF1200FD30C(L_2, L_3, /*hidden argument*/Stack_1_Push_mAAC659B8244405A0EB9B9405727EADF1200FD30C_RuntimeMethod_var);
		JsonWriter_Indent_m3827589B8EB89E7C48BFA3B56864C256BC5B0389(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonWriter::WritePropertyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WritePropertyName_m863853939268B293D5404C24D3A048943262E8C3 (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, String_t* ___property_name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* G_B4_0 = NULL;
	{
		JsonWriter_DoValidation_mA59E12C4B3B46B655369424CCA9FBC421E4151EB(__this, 3, /*hidden argument*/NULL);
		JsonWriter_PutNewline_m1C18E58436D322ED951CD92E36C2DC11208F46E9(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___property_name0;
		if (!L_0)
		{
			goto IL_0020;
		}
	}
	{
		bool L_1 = __this->get_lower_case_properties_10();
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		String_t* L_2 = ___property_name0;
		NullCheck(L_2);
		String_t* L_3;
		L_3 = String_ToLowerInvariant_m070E99F11A6005755BD6579A6CC835694395F79F(L_2, /*hidden argument*/NULL);
		G_B4_0 = L_3;
		goto IL_0021;
	}

IL_0020:
	{
		String_t* L_4 = ___property_name0;
		G_B4_0 = L_4;
	}

IL_0021:
	{
		V_0 = G_B4_0;
		String_t* L_5 = V_0;
		JsonWriter_PutString_mEED06E70ECEF8FED16888E35CEDB08F2860F3C72(__this, L_5, /*hidden argument*/NULL);
		bool L_6 = __this->get_pretty_print_8();
		if (!L_6)
		{
			goto IL_0091;
		}
	}
	{
		String_t* L_7 = V_0;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_7, /*hidden argument*/NULL);
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_9 = __this->get_context_1();
		NullCheck(L_9);
		int32_t L_10 = L_9->get_Padding_4();
		if ((((int32_t)L_8) <= ((int32_t)L_10)))
		{
			goto IL_0055;
		}
	}
	{
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_11 = __this->get_context_1();
		String_t* L_12 = V_0;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		L_11->set_Padding_4(L_13);
	}

IL_0055:
	{
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_14 = __this->get_context_1();
		NullCheck(L_14);
		int32_t L_15 = L_14->get_Padding_4();
		String_t* L_16 = V_0;
		NullCheck(L_16);
		int32_t L_17;
		L_17 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_16, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)L_17));
		goto IL_007b;
	}

IL_006a:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_18 = __this->get_writer_11();
		NullCheck(L_18);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_18, ((int32_t)32));
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1));
	}

IL_007b:
	{
		int32_t L_20 = V_1;
		if ((((int32_t)L_20) >= ((int32_t)0)))
		{
			goto IL_006a;
		}
	}
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_21 = __this->get_writer_11();
		NullCheck(L_21);
		VirtActionInvoker1< String_t* >::Invoke(15 /* System.Void System.IO.TextWriter::Write(System.String) */, L_21, _stringLiteral1168E92C164109D6220480DEDA987085B2A21155);
		goto IL_009e;
	}

IL_0091:
	{
		TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * L_22 = __this->get_writer_11();
		NullCheck(L_22);
		VirtActionInvoker1< Il2CppChar >::Invoke(12 /* System.Void System.IO.TextWriter::Write(System.Char) */, L_22, ((int32_t)58));
	}

IL_009e:
	{
		WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * L_23 = __this->get_context_1();
		NullCheck(L_23);
		L_23->set_ExpectingValue_3((bool)1);
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
// System.Boolean LitJson.Lexer::get_EndOfInput()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_get_EndOfInput_mBE0B69A04CA5DDF09506A3E2A5D29F73FDF63D5B (Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_end_of_input_4();
		return L_0;
	}
}
// System.Int32 LitJson.Lexer::get_Token()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_get_Token_mFF56BE71A4DFC4210FE0249131CCE77B4B27EA83 (Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_token_12();
		return L_0;
	}
}
// System.String LitJson.Lexer::get_StringValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Lexer_get_StringValue_m034AD1356FBD2A8031B031261E549239262006E9 (Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_string_value_11();
		return L_0;
	}
}
// System.Void LitJson.Lexer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer__cctor_m16FDB484732886A9A0596FD5217CF310E6991B60 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_tA740F14E85682DB80300393CB63376A76BA37835_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Lexer_PopulateFsmTables_mA269850CFC2017338FC0E0A9BF7A5094CE2C299B((StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19**)(((Lexer_tA740F14E85682DB80300393CB63376A76BA37835_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_tA740F14E85682DB80300393CB63376A76BA37835_il2cpp_TypeInfo_var))->get_address_of_fsm_handler_table_1()), (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32**)(((Lexer_tA740F14E85682DB80300393CB63376A76BA37835_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_tA740F14E85682DB80300393CB63376A76BA37835_il2cpp_TypeInfo_var))->get_address_of_fsm_return_table_0()), /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.Lexer::.ctor(System.IO.TextReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer__ctor_m3DE9BBF22D9943F59B4A80B6884642E972A0A5C3 (Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * __this, TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		__this->set_allow_comments_2((bool)1);
		__this->set_allow_single_quoted_strings_3((bool)1);
		__this->set_input_buffer_6(0);
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E(L_0, ((int32_t)128), /*hidden argument*/NULL);
		__this->set_string_buffer_10(L_0);
		__this->set_state_9(1);
		__this->set_end_of_input_4((bool)0);
		TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * L_1 = ___reader0;
		__this->set_reader_8(L_1);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_2 = (FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA *)il2cpp_codegen_object_new(FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA_il2cpp_TypeInfo_var);
		FsmContext__ctor_mDEA9C172337FC69E2700608B6793C460F8B79478(L_2, /*hidden argument*/NULL);
		__this->set_fsm_context_5(L_2);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_3 = __this->get_fsm_context_5();
		NullCheck(L_3);
		L_3->set_L_2(__this);
		return;
	}
}
// System.Int32 LitJson.Lexer::HexValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_HexValue_mC23D355B06D79E72038FD4710DFCBCC8F26F5212 (int32_t ___digit0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___digit0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)((int32_t)65))))
		{
			case 0:
			{
				goto IL_0044;
			}
			case 1:
			{
				goto IL_0047;
			}
			case 2:
			{
				goto IL_004a;
			}
			case 3:
			{
				goto IL_004d;
			}
			case 4:
			{
				goto IL_0050;
			}
			case 5:
			{
				goto IL_0053;
			}
		}
	}
	{
		int32_t L_1 = ___digit0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)((int32_t)97))))
		{
			case 0:
			{
				goto IL_0044;
			}
			case 1:
			{
				goto IL_0047;
			}
			case 2:
			{
				goto IL_004a;
			}
			case 3:
			{
				goto IL_004d;
			}
			case 4:
			{
				goto IL_0050;
			}
			case 5:
			{
				goto IL_0053;
			}
		}
	}
	{
		goto IL_0056;
	}

IL_0044:
	{
		return ((int32_t)10);
	}

IL_0047:
	{
		return ((int32_t)11);
	}

IL_004a:
	{
		return ((int32_t)12);
	}

IL_004d:
	{
		return ((int32_t)13);
	}

IL_0050:
	{
		return ((int32_t)14);
	}

IL_0053:
	{
		return ((int32_t)15);
	}

IL_0056:
	{
		int32_t L_2 = ___digit0;
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)((int32_t)48)));
	}
}
// System.Void LitJson.Lexer::PopulateFsmTables(LitJson.Lexer/StateHandler[]&,System.Int32[]&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_PopulateFsmTables_mA269850CFC2017338FC0E0A9BF7A5094CE2C299B (StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19** ___fsm_handler_table0, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** ___fsm_return_table1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State10_mAC1274EFA16E310E8FC04BDF5A6BA08943B2EB0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State11_mA0A57CF6721AA02F3A7401BB3B3122986A91D4BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State12_m8F25DBF94A0750253A14D5AAC45A09C4CFDED795_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State13_mE3DEE794AB7C2793C50315D146F3BCD17C0028B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State14_m29B8A9B209330587BAFAFDD27892349C66AFCF9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State15_mE7D3224557F1AE079F62BC59FD961B440C867285_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State16_mA5BF2347E88B3E24D46382FD9F1298376226C8A4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State17_mC9D0AF7F6B8CCD7604348A6808C798C91E9B2169_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State18_mFDE216C198BA571EDA7E3BF1B024B0FD97A0D969_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State19_mD6F37CD8E15B45CB75139944FBAC81DB64F99CED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State1_mB75EDA9BA994E7A934F803D0DBE38382B941B48A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State20_m25B6F2E7D522F84A92D6F3C6EBD258E9C7E97A1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State21_mD931C771C5531A68033593B613F242010BF44E4C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State22_m1F8E54434F916F93B06FD8D8678C85DB115E4979_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State23_m059B397DAF7319B1DD1E289E8B5B96E88B7BBC09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State24_m7F4DA1872535E3312165D84917829964A7FFF2F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State25_m57368B3F202D8295B927D2CE65B1318E74E69A0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State26_m63559988DCC0AEAC91906B6109CEB0FF623EF9AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State27_m99B50C5B549173BF767C43B39C93F14C8E4580EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State28_m9559337C58F4FA1186015F45A92CCCFABCAEAE85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State2_m21338C96318F4AEF135B6CECE65A3FE9DA66088E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State3_mC609A64317FBAB5C4B7D53283C949716E81695FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State4_mAFBCB7D348F66C17F839BD61CFB73F3F8B35CC49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State5_mB0D0D62E25612FC4AD9CA23CDCCF9D578EE18630_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State6_mA741D9118A33298446A9BE4E6D2A09446069210E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State7_m035FD60ED6969FDC8149CF836A16001F1C524B06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State8_mE0B57CCC0F8951C78221F29A851EF5363E0C8801_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_State9_mEE87D256E6437DC14F8BFB57B4131A656D421DC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_tB87B199FE555125F3A639420349ADA6B6B490122____50B1635D1FB2907A171B71751E1A3FA79423CA17_1_FieldInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19** L_0 = ___fsm_handler_table0;
		StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19* L_1 = (StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19*)(StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19*)SZArrayNew(StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19_il2cpp_TypeInfo_var, (uint32_t)((int32_t)28));
		StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19* L_2 = L_1;
		StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * L_3 = (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)il2cpp_codegen_object_new(StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF1275528CE46301EF915D07CE3FC1E79E5BC7F40(L_3, NULL, (intptr_t)((intptr_t)Lexer_State1_mB75EDA9BA994E7A934F803D0DBE38382B941B48A_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)L_3);
		StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19* L_4 = L_2;
		StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * L_5 = (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)il2cpp_codegen_object_new(StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF1275528CE46301EF915D07CE3FC1E79E5BC7F40(L_5, NULL, (intptr_t)((intptr_t)Lexer_State2_m21338C96318F4AEF135B6CECE65A3FE9DA66088E_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, L_5);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)L_5);
		StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19* L_6 = L_4;
		StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * L_7 = (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)il2cpp_codegen_object_new(StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF1275528CE46301EF915D07CE3FC1E79E5BC7F40(L_7, NULL, (intptr_t)((intptr_t)Lexer_State3_mC609A64317FBAB5C4B7D53283C949716E81695FD_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_7);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)L_7);
		StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19* L_8 = L_6;
		StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * L_9 = (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)il2cpp_codegen_object_new(StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF1275528CE46301EF915D07CE3FC1E79E5BC7F40(L_9, NULL, (intptr_t)((intptr_t)Lexer_State4_mAFBCB7D348F66C17F839BD61CFB73F3F8B35CC49_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, L_9);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(3), (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)L_9);
		StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19* L_10 = L_8;
		StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * L_11 = (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)il2cpp_codegen_object_new(StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF1275528CE46301EF915D07CE3FC1E79E5BC7F40(L_11, NULL, (intptr_t)((intptr_t)Lexer_State5_mB0D0D62E25612FC4AD9CA23CDCCF9D578EE18630_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_11);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(4), (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)L_11);
		StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19* L_12 = L_10;
		StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * L_13 = (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)il2cpp_codegen_object_new(StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF1275528CE46301EF915D07CE3FC1E79E5BC7F40(L_13, NULL, (intptr_t)((intptr_t)Lexer_State6_mA741D9118A33298446A9BE4E6D2A09446069210E_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, L_13);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(5), (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)L_13);
		StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19* L_14 = L_12;
		StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * L_15 = (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)il2cpp_codegen_object_new(StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF1275528CE46301EF915D07CE3FC1E79E5BC7F40(L_15, NULL, (intptr_t)((intptr_t)Lexer_State7_m035FD60ED6969FDC8149CF836A16001F1C524B06_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_15);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(6), (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)L_15);
		StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19* L_16 = L_14;
		StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * L_17 = (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)il2cpp_codegen_object_new(StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF1275528CE46301EF915D07CE3FC1E79E5BC7F40(L_17, NULL, (intptr_t)((intptr_t)Lexer_State8_mE0B57CCC0F8951C78221F29A851EF5363E0C8801_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_17);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(7), (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)L_17);
		StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19* L_18 = L_16;
		StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * L_19 = (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)il2cpp_codegen_object_new(StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF1275528CE46301EF915D07CE3FC1E79E5BC7F40(L_19, NULL, (intptr_t)((intptr_t)Lexer_State9_mEE87D256E6437DC14F8BFB57B4131A656D421DC4_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, L_19);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(8), (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)L_19);
		StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19* L_20 = L_18;
		StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * L_21 = (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)il2cpp_codegen_object_new(StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF1275528CE46301EF915D07CE3FC1E79E5BC7F40(L_21, NULL, (intptr_t)((intptr_t)Lexer_State10_mAC1274EFA16E310E8FC04BDF5A6BA08943B2EB0E_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)9)), (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)L_21);
		StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19* L_22 = L_20;
		StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * L_23 = (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)il2cpp_codegen_object_new(StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF1275528CE46301EF915D07CE3FC1E79E5BC7F40(L_23, NULL, (intptr_t)((intptr_t)Lexer_State11_mA0A57CF6721AA02F3A7401BB3B3122986A91D4BC_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)10)), (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)L_23);
		StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19* L_24 = L_22;
		StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * L_25 = (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)il2cpp_codegen_object_new(StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF1275528CE46301EF915D07CE3FC1E79E5BC7F40(L_25, NULL, (intptr_t)((intptr_t)Lexer_State12_m8F25DBF94A0750253A14D5AAC45A09C4CFDED795_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_24);
		ArrayElementTypeCheck (L_24, L_25);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)11)), (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)L_25);
		StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19* L_26 = L_24;
		StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * L_27 = (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)il2cpp_codegen_object_new(StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF1275528CE46301EF915D07CE3FC1E79E5BC7F40(L_27, NULL, (intptr_t)((intptr_t)Lexer_State13_mE3DEE794AB7C2793C50315D146F3BCD17C0028B1_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, L_27);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)12)), (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)L_27);
		StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19* L_28 = L_26;
		StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * L_29 = (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)il2cpp_codegen_object_new(StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF1275528CE46301EF915D07CE3FC1E79E5BC7F40(L_29, NULL, (intptr_t)((intptr_t)Lexer_State14_m29B8A9B209330587BAFAFDD27892349C66AFCF9B_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_29);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)13)), (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)L_29);
		StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19* L_30 = L_28;
		StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * L_31 = (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)il2cpp_codegen_object_new(StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF1275528CE46301EF915D07CE3FC1E79E5BC7F40(L_31, NULL, (intptr_t)((intptr_t)Lexer_State15_mE7D3224557F1AE079F62BC59FD961B440C867285_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_30);
		ArrayElementTypeCheck (L_30, L_31);
		(L_30)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)14)), (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)L_31);
		StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19* L_32 = L_30;
		StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * L_33 = (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)il2cpp_codegen_object_new(StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF1275528CE46301EF915D07CE3FC1E79E5BC7F40(L_33, NULL, (intptr_t)((intptr_t)Lexer_State16_mA5BF2347E88B3E24D46382FD9F1298376226C8A4_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, L_33);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)15)), (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)L_33);
		StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19* L_34 = L_32;
		StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * L_35 = (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)il2cpp_codegen_object_new(StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF1275528CE46301EF915D07CE3FC1E79E5BC7F40(L_35, NULL, (intptr_t)((intptr_t)Lexer_State17_mC9D0AF7F6B8CCD7604348A6808C798C91E9B2169_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_35);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)16)), (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)L_35);
		StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19* L_36 = L_34;
		StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * L_37 = (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)il2cpp_codegen_object_new(StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF1275528CE46301EF915D07CE3FC1E79E5BC7F40(L_37, NULL, (intptr_t)((intptr_t)Lexer_State18_mFDE216C198BA571EDA7E3BF1B024B0FD97A0D969_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_37);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)17)), (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)L_37);
		StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19* L_38 = L_36;
		StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * L_39 = (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)il2cpp_codegen_object_new(StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF1275528CE46301EF915D07CE3FC1E79E5BC7F40(L_39, NULL, (intptr_t)((intptr_t)Lexer_State19_mD6F37CD8E15B45CB75139944FBAC81DB64F99CED_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_38);
		ArrayElementTypeCheck (L_38, L_39);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)18)), (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)L_39);
		StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19* L_40 = L_38;
		StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * L_41 = (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)il2cpp_codegen_object_new(StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF1275528CE46301EF915D07CE3FC1E79E5BC7F40(L_41, NULL, (intptr_t)((intptr_t)Lexer_State20_m25B6F2E7D522F84A92D6F3C6EBD258E9C7E97A1B_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_41);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)19)), (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)L_41);
		StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19* L_42 = L_40;
		StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * L_43 = (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)il2cpp_codegen_object_new(StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF1275528CE46301EF915D07CE3FC1E79E5BC7F40(L_43, NULL, (intptr_t)((intptr_t)Lexer_State21_mD931C771C5531A68033593B613F242010BF44E4C_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_43);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)20)), (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)L_43);
		StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19* L_44 = L_42;
		StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * L_45 = (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)il2cpp_codegen_object_new(StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF1275528CE46301EF915D07CE3FC1E79E5BC7F40(L_45, NULL, (intptr_t)((intptr_t)Lexer_State22_m1F8E54434F916F93B06FD8D8678C85DB115E4979_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_45);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)21)), (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)L_45);
		StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19* L_46 = L_44;
		StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * L_47 = (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)il2cpp_codegen_object_new(StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF1275528CE46301EF915D07CE3FC1E79E5BC7F40(L_47, NULL, (intptr_t)((intptr_t)Lexer_State23_m059B397DAF7319B1DD1E289E8B5B96E88B7BBC09_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_47);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)22)), (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)L_47);
		StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19* L_48 = L_46;
		StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * L_49 = (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)il2cpp_codegen_object_new(StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF1275528CE46301EF915D07CE3FC1E79E5BC7F40(L_49, NULL, (intptr_t)((intptr_t)Lexer_State24_m7F4DA1872535E3312165D84917829964A7FFF2F8_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_49);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)23)), (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)L_49);
		StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19* L_50 = L_48;
		StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * L_51 = (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)il2cpp_codegen_object_new(StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF1275528CE46301EF915D07CE3FC1E79E5BC7F40(L_51, NULL, (intptr_t)((intptr_t)Lexer_State25_m57368B3F202D8295B927D2CE65B1318E74E69A0C_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_51);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)24)), (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)L_51);
		StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19* L_52 = L_50;
		StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * L_53 = (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)il2cpp_codegen_object_new(StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF1275528CE46301EF915D07CE3FC1E79E5BC7F40(L_53, NULL, (intptr_t)((intptr_t)Lexer_State26_m63559988DCC0AEAC91906B6109CEB0FF623EF9AE_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_53);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)25)), (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)L_53);
		StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19* L_54 = L_52;
		StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * L_55 = (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)il2cpp_codegen_object_new(StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF1275528CE46301EF915D07CE3FC1E79E5BC7F40(L_55, NULL, (intptr_t)((intptr_t)Lexer_State27_m99B50C5B549173BF767C43B39C93F14C8E4580EB_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_54);
		ArrayElementTypeCheck (L_54, L_55);
		(L_54)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)26)), (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)L_55);
		StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19* L_56 = L_54;
		StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * L_57 = (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)il2cpp_codegen_object_new(StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE_il2cpp_TypeInfo_var);
		StateHandler__ctor_mF1275528CE46301EF915D07CE3FC1E79E5BC7F40(L_57, NULL, (intptr_t)((intptr_t)Lexer_State28_m9559337C58F4FA1186015F45A92CCCFABCAEAE85_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_56);
		ArrayElementTypeCheck (L_56, L_57);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)27)), (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE *)L_57);
		*((RuntimeObject **)L_0) = (RuntimeObject *)L_56;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_0, (void*)(RuntimeObject *)L_56);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** L_58 = ___fsm_return_table1;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_59 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)28));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_60 = L_59;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_61 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tB87B199FE555125F3A639420349ADA6B6B490122____50B1635D1FB2907A171B71751E1A3FA79423CA17_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_60, L_61, /*hidden argument*/NULL);
		*((RuntimeObject **)L_58) = (RuntimeObject *)L_60;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_58, (void*)(RuntimeObject *)L_60);
		return;
	}
}
// System.Char LitJson.Lexer::ProcessEscChar(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Lexer_ProcessEscChar_m7D089093975A2991156E5F25DDBB37143264E4EE (int32_t ___esc_char0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___esc_char0;
		if ((((int32_t)L_0) > ((int32_t)((int32_t)92))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = ___esc_char0;
		if ((((int32_t)L_1) > ((int32_t)((int32_t)39))))
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_2 = ___esc_char0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)34))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_3 = ___esc_char0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)39))))
		{
			goto IL_0044;
		}
	}
	{
		goto IL_0059;
	}

IL_0016:
	{
		int32_t L_4 = ___esc_char0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)47))))
		{
			goto IL_0044;
		}
	}
	{
		int32_t L_5 = ___esc_char0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)92))))
		{
			goto IL_0044;
		}
	}
	{
		goto IL_0059;
	}

IL_0022:
	{
		int32_t L_6 = ___esc_char0;
		if ((((int32_t)L_6) > ((int32_t)((int32_t)102))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_7 = ___esc_char0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)98))))
		{
			goto IL_0054;
		}
	}
	{
		int32_t L_8 = ___esc_char0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)102))))
		{
			goto IL_0056;
		}
	}
	{
		goto IL_0059;
	}

IL_0033:
	{
		int32_t L_9 = ___esc_char0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)110))))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_10 = ___esc_char0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)114))))
		{
			goto IL_0051;
		}
	}
	{
		int32_t L_11 = ___esc_char0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)116))))
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0059;
	}

IL_0044:
	{
		int32_t L_12 = ___esc_char0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		Il2CppChar L_13;
		L_13 = Convert_ToChar_m84E3CF47987D8B6F2D889D957CBFB5FD55F3DAEC(L_12, /*hidden argument*/NULL);
		return L_13;
	}

IL_004b:
	{
		return ((int32_t)10);
	}

IL_004e:
	{
		return ((int32_t)9);
	}

IL_0051:
	{
		return ((int32_t)13);
	}

IL_0054:
	{
		return 8;
	}

IL_0056:
	{
		return ((int32_t)12);
	}

IL_0059:
	{
		return ((int32_t)63);
	}
}
// System.Boolean LitJson.Lexer::State1(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State1_mB75EDA9BA994E7A934F803D0DBE38382B941B48A (FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		goto IL_01d9;
	}

IL_0005:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		if ((((int32_t)L_2) == ((int32_t)((int32_t)32))))
		{
			goto IL_01d9;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((((int32_t)L_5) < ((int32_t)((int32_t)9))))
		{
			goto IL_0038;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_7 = L_6->get_L_2();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_input_char_7();
		if ((((int32_t)L_8) <= ((int32_t)((int32_t)13))))
		{
			goto IL_01d9;
		}
	}

IL_0038:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_10 = L_9->get_L_2();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_input_char_7();
		if ((((int32_t)L_11) < ((int32_t)((int32_t)49))))
		{
			goto IL_007c;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_12 = ___ctx0;
		NullCheck(L_12);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_13 = L_12->get_L_2();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_input_char_7();
		if ((((int32_t)L_14) > ((int32_t)((int32_t)57))))
		{
			goto IL_007c;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_15 = ___ctx0;
		NullCheck(L_15);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_16 = L_15->get_L_2();
		NullCheck(L_16);
		StringBuilder_t * L_17 = L_16->get_string_buffer_10();
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_18 = ___ctx0;
		NullCheck(L_18);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_19 = L_18->get_L_2();
		NullCheck(L_19);
		int32_t L_20 = L_19->get_input_char_7();
		NullCheck(L_17);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_17, ((int32_t)((uint16_t)L_20)), /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_22 = ___ctx0;
		NullCheck(L_22);
		L_22->set_NextState_1(3);
		return (bool)1;
	}

IL_007c:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_23 = ___ctx0;
		NullCheck(L_23);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_24 = L_23->get_L_2();
		NullCheck(L_24);
		int32_t L_25 = L_24->get_input_char_7();
		V_0 = L_25;
		int32_t L_26 = V_0;
		if ((((int32_t)L_26) > ((int32_t)((int32_t)91))))
		{
			goto IL_00d0;
		}
	}
	{
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) > ((int32_t)((int32_t)39))))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)34))))
		{
			goto IL_0106;
		}
	}
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)39))))
		{
			goto IL_0191;
		}
	}
	{
		goto IL_01d7;
	}

IL_00a4:
	{
		int32_t L_30 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_30, (int32_t)((int32_t)44))))
		{
			case 0:
			{
				goto IL_0117;
			}
			case 1:
			{
				goto IL_0127;
			}
			case 2:
			{
				goto IL_01d7;
			}
			case 3:
			{
				goto IL_01be;
			}
			case 4:
			{
				goto IL_014d;
			}
		}
	}
	{
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)58))))
		{
			goto IL_0117;
		}
	}
	{
		int32_t L_32 = V_0;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)91))))
		{
			goto IL_0117;
		}
	}
	{
		goto IL_01d7;
	}

IL_00d0:
	{
		int32_t L_33 = V_0;
		if ((((int32_t)L_33) > ((int32_t)((int32_t)110))))
		{
			goto IL_00ef;
		}
	}
	{
		int32_t L_34 = V_0;
		if ((((int32_t)L_34) == ((int32_t)((int32_t)93))))
		{
			goto IL_0117;
		}
	}
	{
		int32_t L_35 = V_0;
		if ((((int32_t)L_35) == ((int32_t)((int32_t)102))))
		{
			goto IL_0173;
		}
	}
	{
		int32_t L_36 = V_0;
		if ((((int32_t)L_36) == ((int32_t)((int32_t)110))))
		{
			goto IL_017d;
		}
	}
	{
		goto IL_01d7;
	}

IL_00ef:
	{
		int32_t L_37 = V_0;
		if ((((int32_t)L_37) == ((int32_t)((int32_t)116))))
		{
			goto IL_0187;
		}
	}
	{
		int32_t L_38 = V_0;
		if ((((int32_t)L_38) == ((int32_t)((int32_t)123))))
		{
			goto IL_0117;
		}
	}
	{
		int32_t L_39 = V_0;
		if ((((int32_t)L_39) == ((int32_t)((int32_t)125))))
		{
			goto IL_0117;
		}
	}
	{
		goto IL_01d7;
	}

IL_0106:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_40 = ___ctx0;
		NullCheck(L_40);
		L_40->set_NextState_1(((int32_t)19));
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_41 = ___ctx0;
		NullCheck(L_41);
		L_41->set_Return_0((bool)1);
		return (bool)1;
	}

IL_0117:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_42 = ___ctx0;
		NullCheck(L_42);
		L_42->set_NextState_1(1);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_43 = ___ctx0;
		NullCheck(L_43);
		L_43->set_Return_0((bool)1);
		return (bool)1;
	}

IL_0127:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_44 = ___ctx0;
		NullCheck(L_44);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_45 = L_44->get_L_2();
		NullCheck(L_45);
		StringBuilder_t * L_46 = L_45->get_string_buffer_10();
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_47 = ___ctx0;
		NullCheck(L_47);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_48 = L_47->get_L_2();
		NullCheck(L_48);
		int32_t L_49 = L_48->get_input_char_7();
		NullCheck(L_46);
		StringBuilder_t * L_50;
		L_50 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_46, ((int32_t)((uint16_t)L_49)), /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_51 = ___ctx0;
		NullCheck(L_51);
		L_51->set_NextState_1(2);
		return (bool)1;
	}

IL_014d:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_52 = ___ctx0;
		NullCheck(L_52);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_53 = L_52->get_L_2();
		NullCheck(L_53);
		StringBuilder_t * L_54 = L_53->get_string_buffer_10();
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_55 = ___ctx0;
		NullCheck(L_55);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_56 = L_55->get_L_2();
		NullCheck(L_56);
		int32_t L_57 = L_56->get_input_char_7();
		NullCheck(L_54);
		StringBuilder_t * L_58;
		L_58 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_54, ((int32_t)((uint16_t)L_57)), /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_59 = ___ctx0;
		NullCheck(L_59);
		L_59->set_NextState_1(4);
		return (bool)1;
	}

IL_0173:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_60 = ___ctx0;
		NullCheck(L_60);
		L_60->set_NextState_1(((int32_t)12));
		return (bool)1;
	}

IL_017d:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_61 = ___ctx0;
		NullCheck(L_61);
		L_61->set_NextState_1(((int32_t)16));
		return (bool)1;
	}

IL_0187:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_62 = ___ctx0;
		NullCheck(L_62);
		L_62->set_NextState_1(((int32_t)9));
		return (bool)1;
	}

IL_0191:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_63 = ___ctx0;
		NullCheck(L_63);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_64 = L_63->get_L_2();
		NullCheck(L_64);
		bool L_65 = L_64->get_allow_single_quoted_strings_3();
		if (L_65)
		{
			goto IL_01a0;
		}
	}
	{
		return (bool)0;
	}

IL_01a0:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_66 = ___ctx0;
		NullCheck(L_66);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_67 = L_66->get_L_2();
		NullCheck(L_67);
		L_67->set_input_char_7(((int32_t)34));
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_68 = ___ctx0;
		NullCheck(L_68);
		L_68->set_NextState_1(((int32_t)23));
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_69 = ___ctx0;
		NullCheck(L_69);
		L_69->set_Return_0((bool)1);
		return (bool)1;
	}

IL_01be:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_70 = ___ctx0;
		NullCheck(L_70);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_71 = L_70->get_L_2();
		NullCheck(L_71);
		bool L_72 = L_71->get_allow_comments_2();
		if (L_72)
		{
			goto IL_01cd;
		}
	}
	{
		return (bool)0;
	}

IL_01cd:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_73 = ___ctx0;
		NullCheck(L_73);
		L_73->set_NextState_1(((int32_t)25));
		return (bool)1;
	}

IL_01d7:
	{
		return (bool)0;
	}

IL_01d9:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_74 = ___ctx0;
		NullCheck(L_74);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_75 = L_74->get_L_2();
		NullCheck(L_75);
		bool L_76;
		L_76 = Lexer_GetChar_m282F3FE856E7F4739F3ECE3AA60E1385AF028868(L_75, /*hidden argument*/NULL);
		if (L_76)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State2(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State2_m21338C96318F4AEF135B6CECE65A3FE9DA66088E (FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * ___ctx0, const RuntimeMethod* method)
{
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m282F3FE856E7F4739F3ECE3AA60E1385AF028868(L_1, /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((((int32_t)L_5) < ((int32_t)((int32_t)49))))
		{
			goto IL_0050;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_7 = L_6->get_L_2();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_input_char_7();
		if ((((int32_t)L_8) > ((int32_t)((int32_t)57))))
		{
			goto IL_0050;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_10 = L_9->get_L_2();
		NullCheck(L_10);
		StringBuilder_t * L_11 = L_10->get_string_buffer_10();
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_12 = ___ctx0;
		NullCheck(L_12);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_13 = L_12->get_L_2();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_input_char_7();
		NullCheck(L_11);
		StringBuilder_t * L_15;
		L_15 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_11, ((int32_t)((uint16_t)L_14)), /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_16 = ___ctx0;
		NullCheck(L_16);
		L_16->set_NextState_1(3);
		return (bool)1;
	}

IL_0050:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_17 = ___ctx0;
		NullCheck(L_17);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_18 = L_17->get_L_2();
		NullCheck(L_18);
		int32_t L_19 = L_18->get_input_char_7();
		if ((!(((uint32_t)L_19) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_0085;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_20 = ___ctx0;
		NullCheck(L_20);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_21 = L_20->get_L_2();
		NullCheck(L_21);
		StringBuilder_t * L_22 = L_21->get_string_buffer_10();
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_23 = ___ctx0;
		NullCheck(L_23);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_24 = L_23->get_L_2();
		NullCheck(L_24);
		int32_t L_25 = L_24->get_input_char_7();
		NullCheck(L_22);
		StringBuilder_t * L_26;
		L_26 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_22, ((int32_t)((uint16_t)L_25)), /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_27 = ___ctx0;
		NullCheck(L_27);
		L_27->set_NextState_1(4);
		return (bool)1;
	}

IL_0085:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State3(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State3_mC609A64317FBAB5C4B7D53283C949716E81695FD (FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		goto IL_011c;
	}

IL_0005:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		if ((((int32_t)L_2) < ((int32_t)((int32_t)48))))
		{
			goto IL_0045;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((((int32_t)L_5) > ((int32_t)((int32_t)57))))
		{
			goto IL_0045;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_7 = L_6->get_L_2();
		NullCheck(L_7);
		StringBuilder_t * L_8 = L_7->get_string_buffer_10();
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_10 = L_9->get_L_2();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_input_char_7();
		NullCheck(L_8);
		StringBuilder_t * L_12;
		L_12 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_8, ((int32_t)((uint16_t)L_11)), /*hidden argument*/NULL);
		goto IL_011c;
	}

IL_0045:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_13 = ___ctx0;
		NullCheck(L_13);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_14 = L_13->get_L_2();
		NullCheck(L_14);
		int32_t L_15 = L_14->get_input_char_7();
		if ((((int32_t)L_15) == ((int32_t)((int32_t)32))))
		{
			goto IL_0072;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_16 = ___ctx0;
		NullCheck(L_16);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_17 = L_16->get_L_2();
		NullCheck(L_17);
		int32_t L_18 = L_17->get_input_char_7();
		if ((((int32_t)L_18) < ((int32_t)((int32_t)9))))
		{
			goto IL_0082;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_19 = ___ctx0;
		NullCheck(L_19);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_20 = L_19->get_L_2();
		NullCheck(L_20);
		int32_t L_21 = L_20->get_input_char_7();
		if ((((int32_t)L_21) > ((int32_t)((int32_t)13))))
		{
			goto IL_0082;
		}
	}

IL_0072:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_22 = ___ctx0;
		NullCheck(L_22);
		L_22->set_Return_0((bool)1);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_23 = ___ctx0;
		NullCheck(L_23);
		L_23->set_NextState_1(1);
		return (bool)1;
	}

IL_0082:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_24 = ___ctx0;
		NullCheck(L_24);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_25 = L_24->get_L_2();
		NullCheck(L_25);
		int32_t L_26 = L_25->get_input_char_7();
		V_0 = L_26;
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) > ((int32_t)((int32_t)69))))
		{
			goto IL_00a4;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)44))))
		{
			goto IL_00b3;
		}
	}
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)46))))
		{
			goto IL_00ce;
		}
	}
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)69))))
		{
			goto IL_00f4;
		}
	}
	{
		goto IL_011a;
	}

IL_00a4:
	{
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)93))))
		{
			goto IL_00b3;
		}
	}
	{
		int32_t L_32 = V_0;
		if ((((int32_t)L_32) == ((int32_t)((int32_t)101))))
		{
			goto IL_00f4;
		}
	}
	{
		int32_t L_33 = V_0;
		if ((!(((uint32_t)L_33) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_011a;
		}
	}

IL_00b3:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_34 = ___ctx0;
		NullCheck(L_34);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_35 = L_34->get_L_2();
		NullCheck(L_35);
		Lexer_UngetChar_mA7F3C02B5A66310D5A8CDD065E1ECC596E20C772(L_35, /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_36 = ___ctx0;
		NullCheck(L_36);
		L_36->set_Return_0((bool)1);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_37 = ___ctx0;
		NullCheck(L_37);
		L_37->set_NextState_1(1);
		return (bool)1;
	}

IL_00ce:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_38 = ___ctx0;
		NullCheck(L_38);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_39 = L_38->get_L_2();
		NullCheck(L_39);
		StringBuilder_t * L_40 = L_39->get_string_buffer_10();
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_41 = ___ctx0;
		NullCheck(L_41);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_42 = L_41->get_L_2();
		NullCheck(L_42);
		int32_t L_43 = L_42->get_input_char_7();
		NullCheck(L_40);
		StringBuilder_t * L_44;
		L_44 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_40, ((int32_t)((uint16_t)L_43)), /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_45 = ___ctx0;
		NullCheck(L_45);
		L_45->set_NextState_1(5);
		return (bool)1;
	}

IL_00f4:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_46 = ___ctx0;
		NullCheck(L_46);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_47 = L_46->get_L_2();
		NullCheck(L_47);
		StringBuilder_t * L_48 = L_47->get_string_buffer_10();
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_49 = ___ctx0;
		NullCheck(L_49);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_50 = L_49->get_L_2();
		NullCheck(L_50);
		int32_t L_51 = L_50->get_input_char_7();
		NullCheck(L_48);
		StringBuilder_t * L_52;
		L_52 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_48, ((int32_t)((uint16_t)L_51)), /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_53 = ___ctx0;
		NullCheck(L_53);
		L_53->set_NextState_1(7);
		return (bool)1;
	}

IL_011a:
	{
		return (bool)0;
	}

IL_011c:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_54 = ___ctx0;
		NullCheck(L_54);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_55 = L_54->get_L_2();
		NullCheck(L_55);
		bool L_56;
		L_56 = Lexer_GetChar_m282F3FE856E7F4739F3ECE3AA60E1385AF028868(L_55, /*hidden argument*/NULL);
		if (L_56)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State4(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State4_mAFBCB7D348F66C17F839BD61CFB73F3F8B35CC49 (FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m282F3FE856E7F4739F3ECE3AA60E1385AF028868(L_1, /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((((int32_t)L_5) == ((int32_t)((int32_t)32))))
		{
			goto IL_0039;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_7 = L_6->get_L_2();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_input_char_7();
		if ((((int32_t)L_8) < ((int32_t)((int32_t)9))))
		{
			goto IL_0049;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_10 = L_9->get_L_2();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_input_char_7();
		if ((((int32_t)L_11) > ((int32_t)((int32_t)13))))
		{
			goto IL_0049;
		}
	}

IL_0039:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_12 = ___ctx0;
		NullCheck(L_12);
		L_12->set_Return_0((bool)1);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_13 = ___ctx0;
		NullCheck(L_13);
		L_13->set_NextState_1(1);
		return (bool)1;
	}

IL_0049:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_14 = ___ctx0;
		NullCheck(L_14);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_15 = L_14->get_L_2();
		NullCheck(L_15);
		int32_t L_16 = L_15->get_input_char_7();
		V_0 = L_16;
		int32_t L_17 = V_0;
		if ((((int32_t)L_17) > ((int32_t)((int32_t)69))))
		{
			goto IL_006b;
		}
	}
	{
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)44))))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)46))))
		{
			goto IL_0095;
		}
	}
	{
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)69))))
		{
			goto IL_00bb;
		}
	}
	{
		goto IL_00e1;
	}

IL_006b:
	{
		int32_t L_21 = V_0;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)93))))
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_22 = V_0;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)101))))
		{
			goto IL_00bb;
		}
	}
	{
		int32_t L_23 = V_0;
		if ((!(((uint32_t)L_23) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_00e1;
		}
	}

IL_007a:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_24 = ___ctx0;
		NullCheck(L_24);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_25 = L_24->get_L_2();
		NullCheck(L_25);
		Lexer_UngetChar_mA7F3C02B5A66310D5A8CDD065E1ECC596E20C772(L_25, /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_26 = ___ctx0;
		NullCheck(L_26);
		L_26->set_Return_0((bool)1);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_27 = ___ctx0;
		NullCheck(L_27);
		L_27->set_NextState_1(1);
		return (bool)1;
	}

IL_0095:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_28 = ___ctx0;
		NullCheck(L_28);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_29 = L_28->get_L_2();
		NullCheck(L_29);
		StringBuilder_t * L_30 = L_29->get_string_buffer_10();
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_31 = ___ctx0;
		NullCheck(L_31);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_32 = L_31->get_L_2();
		NullCheck(L_32);
		int32_t L_33 = L_32->get_input_char_7();
		NullCheck(L_30);
		StringBuilder_t * L_34;
		L_34 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_30, ((int32_t)((uint16_t)L_33)), /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_35 = ___ctx0;
		NullCheck(L_35);
		L_35->set_NextState_1(5);
		return (bool)1;
	}

IL_00bb:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_36 = ___ctx0;
		NullCheck(L_36);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_37 = L_36->get_L_2();
		NullCheck(L_37);
		StringBuilder_t * L_38 = L_37->get_string_buffer_10();
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_39 = ___ctx0;
		NullCheck(L_39);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_40 = L_39->get_L_2();
		NullCheck(L_40);
		int32_t L_41 = L_40->get_input_char_7();
		NullCheck(L_38);
		StringBuilder_t * L_42;
		L_42 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_38, ((int32_t)((uint16_t)L_41)), /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_43 = ___ctx0;
		NullCheck(L_43);
		L_43->set_NextState_1(7);
		return (bool)1;
	}

IL_00e1:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State5(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State5_mB0D0D62E25612FC4AD9CA23CDCCF9D578EE18630 (FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * ___ctx0, const RuntimeMethod* method)
{
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m282F3FE856E7F4739F3ECE3AA60E1385AF028868(L_1, /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((((int32_t)L_5) < ((int32_t)((int32_t)48))))
		{
			goto IL_0050;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_7 = L_6->get_L_2();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_input_char_7();
		if ((((int32_t)L_8) > ((int32_t)((int32_t)57))))
		{
			goto IL_0050;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_10 = L_9->get_L_2();
		NullCheck(L_10);
		StringBuilder_t * L_11 = L_10->get_string_buffer_10();
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_12 = ___ctx0;
		NullCheck(L_12);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_13 = L_12->get_L_2();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_input_char_7();
		NullCheck(L_11);
		StringBuilder_t * L_15;
		L_15 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_11, ((int32_t)((uint16_t)L_14)), /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_16 = ___ctx0;
		NullCheck(L_16);
		L_16->set_NextState_1(6);
		return (bool)1;
	}

IL_0050:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State6(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State6_mA741D9118A33298446A9BE4E6D2A09446069210E (FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		goto IL_00f1;
	}

IL_0005:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		if ((((int32_t)L_2) < ((int32_t)((int32_t)48))))
		{
			goto IL_0045;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((((int32_t)L_5) > ((int32_t)((int32_t)57))))
		{
			goto IL_0045;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_7 = L_6->get_L_2();
		NullCheck(L_7);
		StringBuilder_t * L_8 = L_7->get_string_buffer_10();
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_10 = L_9->get_L_2();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_input_char_7();
		NullCheck(L_8);
		StringBuilder_t * L_12;
		L_12 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_8, ((int32_t)((uint16_t)L_11)), /*hidden argument*/NULL);
		goto IL_00f1;
	}

IL_0045:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_13 = ___ctx0;
		NullCheck(L_13);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_14 = L_13->get_L_2();
		NullCheck(L_14);
		int32_t L_15 = L_14->get_input_char_7();
		if ((((int32_t)L_15) == ((int32_t)((int32_t)32))))
		{
			goto IL_0072;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_16 = ___ctx0;
		NullCheck(L_16);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_17 = L_16->get_L_2();
		NullCheck(L_17);
		int32_t L_18 = L_17->get_input_char_7();
		if ((((int32_t)L_18) < ((int32_t)((int32_t)9))))
		{
			goto IL_0082;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_19 = ___ctx0;
		NullCheck(L_19);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_20 = L_19->get_L_2();
		NullCheck(L_20);
		int32_t L_21 = L_20->get_input_char_7();
		if ((((int32_t)L_21) > ((int32_t)((int32_t)13))))
		{
			goto IL_0082;
		}
	}

IL_0072:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_22 = ___ctx0;
		NullCheck(L_22);
		L_22->set_Return_0((bool)1);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_23 = ___ctx0;
		NullCheck(L_23);
		L_23->set_NextState_1(1);
		return (bool)1;
	}

IL_0082:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_24 = ___ctx0;
		NullCheck(L_24);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_25 = L_24->get_L_2();
		NullCheck(L_25);
		int32_t L_26 = L_25->get_input_char_7();
		V_0 = L_26;
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) > ((int32_t)((int32_t)69))))
		{
			goto IL_009f;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)44))))
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_29 = V_0;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)69))))
		{
			goto IL_00c9;
		}
	}
	{
		goto IL_00ef;
	}

IL_009f:
	{
		int32_t L_30 = V_0;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)93))))
		{
			goto IL_00ae;
		}
	}
	{
		int32_t L_31 = V_0;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)101))))
		{
			goto IL_00c9;
		}
	}
	{
		int32_t L_32 = V_0;
		if ((!(((uint32_t)L_32) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_00ef;
		}
	}

IL_00ae:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_33 = ___ctx0;
		NullCheck(L_33);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_34 = L_33->get_L_2();
		NullCheck(L_34);
		Lexer_UngetChar_mA7F3C02B5A66310D5A8CDD065E1ECC596E20C772(L_34, /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_35 = ___ctx0;
		NullCheck(L_35);
		L_35->set_Return_0((bool)1);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_36 = ___ctx0;
		NullCheck(L_36);
		L_36->set_NextState_1(1);
		return (bool)1;
	}

IL_00c9:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_37 = ___ctx0;
		NullCheck(L_37);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_38 = L_37->get_L_2();
		NullCheck(L_38);
		StringBuilder_t * L_39 = L_38->get_string_buffer_10();
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_40 = ___ctx0;
		NullCheck(L_40);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_41 = L_40->get_L_2();
		NullCheck(L_41);
		int32_t L_42 = L_41->get_input_char_7();
		NullCheck(L_39);
		StringBuilder_t * L_43;
		L_43 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_39, ((int32_t)((uint16_t)L_42)), /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_44 = ___ctx0;
		NullCheck(L_44);
		L_44->set_NextState_1(7);
		return (bool)1;
	}

IL_00ef:
	{
		return (bool)0;
	}

IL_00f1:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_45 = ___ctx0;
		NullCheck(L_45);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_46 = L_45->get_L_2();
		NullCheck(L_46);
		bool L_47;
		L_47 = Lexer_GetChar_m282F3FE856E7F4739F3ECE3AA60E1385AF028868(L_46, /*hidden argument*/NULL);
		if (L_47)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State7(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State7_m035FD60ED6969FDC8149CF836A16001F1C524B06 (FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m282F3FE856E7F4739F3ECE3AA60E1385AF028868(L_1, /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((((int32_t)L_5) < ((int32_t)((int32_t)48))))
		{
			goto IL_0050;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_7 = L_6->get_L_2();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_input_char_7();
		if ((((int32_t)L_8) > ((int32_t)((int32_t)57))))
		{
			goto IL_0050;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_10 = L_9->get_L_2();
		NullCheck(L_10);
		StringBuilder_t * L_11 = L_10->get_string_buffer_10();
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_12 = ___ctx0;
		NullCheck(L_12);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_13 = L_12->get_L_2();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_input_char_7();
		NullCheck(L_11);
		StringBuilder_t * L_15;
		L_15 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_11, ((int32_t)((uint16_t)L_14)), /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_16 = ___ctx0;
		NullCheck(L_16);
		L_16->set_NextState_1(8);
		return (bool)1;
	}

IL_0050:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_17 = ___ctx0;
		NullCheck(L_17);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_18 = L_17->get_L_2();
		NullCheck(L_18);
		int32_t L_19 = L_18->get_input_char_7();
		V_0 = L_19;
		int32_t L_20 = V_0;
		if ((((int32_t)L_20) == ((int32_t)((int32_t)43))))
		{
			goto IL_0066;
		}
	}
	{
		int32_t L_21 = V_0;
		if ((!(((uint32_t)L_21) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_008c;
		}
	}

IL_0066:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_22 = ___ctx0;
		NullCheck(L_22);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_23 = L_22->get_L_2();
		NullCheck(L_23);
		StringBuilder_t * L_24 = L_23->get_string_buffer_10();
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_25 = ___ctx0;
		NullCheck(L_25);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_26 = L_25->get_L_2();
		NullCheck(L_26);
		int32_t L_27 = L_26->get_input_char_7();
		NullCheck(L_24);
		StringBuilder_t * L_28;
		L_28 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_24, ((int32_t)((uint16_t)L_27)), /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_29 = ___ctx0;
		NullCheck(L_29);
		L_29->set_NextState_1(8);
		return (bool)1;
	}

IL_008c:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State8(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State8_mE0B57CCC0F8951C78221F29A851EF5363E0C8801 (FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		goto IL_00b7;
	}

IL_0005:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		if ((((int32_t)L_2) < ((int32_t)((int32_t)48))))
		{
			goto IL_0042;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((((int32_t)L_5) > ((int32_t)((int32_t)57))))
		{
			goto IL_0042;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_7 = L_6->get_L_2();
		NullCheck(L_7);
		StringBuilder_t * L_8 = L_7->get_string_buffer_10();
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_9 = ___ctx0;
		NullCheck(L_9);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_10 = L_9->get_L_2();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_input_char_7();
		NullCheck(L_8);
		StringBuilder_t * L_12;
		L_12 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_8, ((int32_t)((uint16_t)L_11)), /*hidden argument*/NULL);
		goto IL_00b7;
	}

IL_0042:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_13 = ___ctx0;
		NullCheck(L_13);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_14 = L_13->get_L_2();
		NullCheck(L_14);
		int32_t L_15 = L_14->get_input_char_7();
		if ((((int32_t)L_15) == ((int32_t)((int32_t)32))))
		{
			goto IL_006f;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_16 = ___ctx0;
		NullCheck(L_16);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_17 = L_16->get_L_2();
		NullCheck(L_17);
		int32_t L_18 = L_17->get_input_char_7();
		if ((((int32_t)L_18) < ((int32_t)((int32_t)9))))
		{
			goto IL_007f;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_19 = ___ctx0;
		NullCheck(L_19);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_20 = L_19->get_L_2();
		NullCheck(L_20);
		int32_t L_21 = L_20->get_input_char_7();
		if ((((int32_t)L_21) > ((int32_t)((int32_t)13))))
		{
			goto IL_007f;
		}
	}

IL_006f:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_22 = ___ctx0;
		NullCheck(L_22);
		L_22->set_Return_0((bool)1);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_23 = ___ctx0;
		NullCheck(L_23);
		L_23->set_NextState_1(1);
		return (bool)1;
	}

IL_007f:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_24 = ___ctx0;
		NullCheck(L_24);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_25 = L_24->get_L_2();
		NullCheck(L_25);
		int32_t L_26 = L_25->get_input_char_7();
		V_0 = L_26;
		int32_t L_27 = V_0;
		if ((((int32_t)L_27) == ((int32_t)((int32_t)44))))
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_28 = V_0;
		if ((((int32_t)L_28) == ((int32_t)((int32_t)93))))
		{
			goto IL_009a;
		}
	}
	{
		int32_t L_29 = V_0;
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)125)))))
		{
			goto IL_00b5;
		}
	}

IL_009a:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_30 = ___ctx0;
		NullCheck(L_30);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_31 = L_30->get_L_2();
		NullCheck(L_31);
		Lexer_UngetChar_mA7F3C02B5A66310D5A8CDD065E1ECC596E20C772(L_31, /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_32 = ___ctx0;
		NullCheck(L_32);
		L_32->set_Return_0((bool)1);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_33 = ___ctx0;
		NullCheck(L_33);
		L_33->set_NextState_1(1);
		return (bool)1;
	}

IL_00b5:
	{
		return (bool)0;
	}

IL_00b7:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_34 = ___ctx0;
		NullCheck(L_34);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_35 = L_34->get_L_2();
		NullCheck(L_35);
		bool L_36;
		L_36 = Lexer_GetChar_m282F3FE856E7F4739F3ECE3AA60E1385AF028868(L_35, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_0005;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State9(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State9_mEE87D256E6437DC14F8BFB57B4131A656D421DC4 (FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * ___ctx0, const RuntimeMethod* method)
{
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m282F3FE856E7F4739F3ECE3AA60E1385AF028868(L_1, /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)114)))))
		{
			goto IL_0025;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->set_NextState_1(((int32_t)10));
		return (bool)1;
	}

IL_0025:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State10(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State10_mAC1274EFA16E310E8FC04BDF5A6BA08943B2EB0E (FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * ___ctx0, const RuntimeMethod* method)
{
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m282F3FE856E7F4739F3ECE3AA60E1385AF028868(L_1, /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_0025;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->set_NextState_1(((int32_t)11));
		return (bool)1;
	}

IL_0025:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State11(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State11_mA0A57CF6721AA02F3A7401BB3B3122986A91D4BC (FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * ___ctx0, const RuntimeMethod* method)
{
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m282F3FE856E7F4739F3ECE3AA60E1385AF028868(L_1, /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_002b;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->set_Return_0((bool)1);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_NextState_1(1);
		return (bool)1;
	}

IL_002b:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State12(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State12_m8F25DBF94A0750253A14D5AAC45A09C4CFDED795 (FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * ___ctx0, const RuntimeMethod* method)
{
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m282F3FE856E7F4739F3ECE3AA60E1385AF028868(L_1, /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)97)))))
		{
			goto IL_0025;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->set_NextState_1(((int32_t)13));
		return (bool)1;
	}

IL_0025:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State13(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State13_mE3DEE794AB7C2793C50315D146F3BCD17C0028B1 (FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * ___ctx0, const RuntimeMethod* method)
{
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m282F3FE856E7F4739F3ECE3AA60E1385AF028868(L_1, /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_0025;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->set_NextState_1(((int32_t)14));
		return (bool)1;
	}

IL_0025:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State14(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State14_m29B8A9B209330587BAFAFDD27892349C66AFCF9B (FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * ___ctx0, const RuntimeMethod* method)
{
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m282F3FE856E7F4739F3ECE3AA60E1385AF028868(L_1, /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)115)))))
		{
			goto IL_0025;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->set_NextState_1(((int32_t)15));
		return (bool)1;
	}

IL_0025:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State15(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State15_mE7D3224557F1AE079F62BC59FD961B440C867285 (FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * ___ctx0, const RuntimeMethod* method)
{
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m282F3FE856E7F4739F3ECE3AA60E1385AF028868(L_1, /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)101)))))
		{
			goto IL_002b;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->set_Return_0((bool)1);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_NextState_1(1);
		return (bool)1;
	}

IL_002b:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State16(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State16_mA5BF2347E88B3E24D46382FD9F1298376226C8A4 (FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * ___ctx0, const RuntimeMethod* method)
{
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m282F3FE856E7F4739F3ECE3AA60E1385AF028868(L_1, /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)117)))))
		{
			goto IL_0025;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->set_NextState_1(((int32_t)17));
		return (bool)1;
	}

IL_0025:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State17(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State17_mC9D0AF7F6B8CCD7604348A6808C798C91E9B2169 (FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * ___ctx0, const RuntimeMethod* method)
{
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m282F3FE856E7F4739F3ECE3AA60E1385AF028868(L_1, /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_0025;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->set_NextState_1(((int32_t)18));
		return (bool)1;
	}

IL_0025:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State18(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State18_mFDE216C198BA571EDA7E3BF1B024B0FD97A0D969 (FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * ___ctx0, const RuntimeMethod* method)
{
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m282F3FE856E7F4739F3ECE3AA60E1385AF028868(L_1, /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)108)))))
		{
			goto IL_002b;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->set_Return_0((bool)1);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_NextState_1(1);
		return (bool)1;
	}

IL_002b:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State19(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State19_mD6F37CD8E15B45CB75139944FBAC81DB64F99CED (FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		goto IL_0065;
	}

IL_0002:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)34))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)92))))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_0048;
	}

IL_001a:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_5 = ___ctx0;
		NullCheck(L_5);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_6 = L_5->get_L_2();
		NullCheck(L_6);
		Lexer_UngetChar_mA7F3C02B5A66310D5A8CDD065E1ECC596E20C772(L_6, /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_Return_0((bool)1);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->set_NextState_1(((int32_t)20));
		return (bool)1;
	}

IL_0036:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_9 = ___ctx0;
		NullCheck(L_9);
		L_9->set_StateStack_3(((int32_t)19));
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_10 = ___ctx0;
		NullCheck(L_10);
		L_10->set_NextState_1(((int32_t)21));
		return (bool)1;
	}

IL_0048:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_11 = ___ctx0;
		NullCheck(L_11);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_12 = L_11->get_L_2();
		NullCheck(L_12);
		StringBuilder_t * L_13 = L_12->get_string_buffer_10();
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_14 = ___ctx0;
		NullCheck(L_14);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_15 = L_14->get_L_2();
		NullCheck(L_15);
		int32_t L_16 = L_15->get_input_char_7();
		NullCheck(L_13);
		StringBuilder_t * L_17;
		L_17 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_13, ((int32_t)((uint16_t)L_16)), /*hidden argument*/NULL);
	}

IL_0065:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_18 = ___ctx0;
		NullCheck(L_18);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_19 = L_18->get_L_2();
		NullCheck(L_19);
		bool L_20;
		L_20 = Lexer_GetChar_m282F3FE856E7F4739F3ECE3AA60E1385AF028868(L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_0002;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State20(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State20_m25B6F2E7D522F84A92D6F3C6EBD258E9C7E97A1B (FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * ___ctx0, const RuntimeMethod* method)
{
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m282F3FE856E7F4739F3ECE3AA60E1385AF028868(L_1, /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)34)))))
		{
			goto IL_002b;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->set_Return_0((bool)1);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_NextState_1(1);
		return (bool)1;
	}

IL_002b:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State21(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State21_mD931C771C5531A68033593B613F242010BF44E4C (FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * ___ctx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_tA740F14E85682DB80300393CB63376A76BA37835_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m282F3FE856E7F4739F3ECE3AA60E1385AF028868(L_1, /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) > ((int32_t)((int32_t)92))))
		{
			goto IL_003a;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) > ((int32_t)((int32_t)39))))
		{
			goto IL_002e;
		}
	}
	{
		int32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)34))))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)39))))
		{
			goto IL_0075;
		}
	}
	{
		goto IL_00a4;
	}

IL_002e:
	{
		int32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)47))))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)92))))
		{
			goto IL_0075;
		}
	}
	{
		goto IL_00a4;
	}

IL_003a:
	{
		int32_t L_12 = V_0;
		if ((((int32_t)L_12) > ((int32_t)((int32_t)102))))
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)98))))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_14 = V_0;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)102))))
		{
			goto IL_0075;
		}
	}
	{
		goto IL_00a4;
	}

IL_004b:
	{
		int32_t L_15 = V_0;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)110))))
		{
			goto IL_0075;
		}
	}
	{
		int32_t L_16 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)((int32_t)114))))
		{
			case 0:
			{
				goto IL_0075;
			}
			case 1:
			{
				goto IL_00a4;
			}
			case 2:
			{
				goto IL_0075;
			}
			case 3:
			{
				goto IL_006b;
			}
		}
	}
	{
		goto IL_00a4;
	}

IL_006b:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_17 = ___ctx0;
		NullCheck(L_17);
		L_17->set_NextState_1(((int32_t)22));
		return (bool)1;
	}

IL_0075:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_18 = ___ctx0;
		NullCheck(L_18);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_19 = L_18->get_L_2();
		NullCheck(L_19);
		StringBuilder_t * L_20 = L_19->get_string_buffer_10();
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_21 = ___ctx0;
		NullCheck(L_21);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_22 = L_21->get_L_2();
		NullCheck(L_22);
		int32_t L_23 = L_22->get_input_char_7();
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_tA740F14E85682DB80300393CB63376A76BA37835_il2cpp_TypeInfo_var);
		Il2CppChar L_24;
		L_24 = Lexer_ProcessEscChar_m7D089093975A2991156E5F25DDBB37143264E4EE(L_23, /*hidden argument*/NULL);
		NullCheck(L_20);
		StringBuilder_t * L_25;
		L_25 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_20, L_24, /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_26 = ___ctx0;
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_27 = ___ctx0;
		NullCheck(L_27);
		int32_t L_28 = L_27->get_StateStack_3();
		NullCheck(L_26);
		L_26->set_NextState_1(L_28);
		return (bool)1;
	}

IL_00a4:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State22(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State22_m1F8E54434F916F93B06FD8D8678C85DB115E4979 (FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * ___ctx0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_tA740F14E85682DB80300393CB63376A76BA37835_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = ((int32_t)4096);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		L_1->set_unichar_13(0);
		goto IL_00d5;
	}

IL_0019:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_2 = ___ctx0;
		NullCheck(L_2);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_3 = L_2->get_L_2();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_input_char_7();
		if ((((int32_t)L_4) < ((int32_t)((int32_t)48))))
		{
			goto IL_0037;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_5 = ___ctx0;
		NullCheck(L_5);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_6 = L_5->get_L_2();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_input_char_7();
		if ((((int32_t)L_7) <= ((int32_t)((int32_t)57))))
		{
			goto IL_0073;
		}
	}

IL_0037:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_8 = ___ctx0;
		NullCheck(L_8);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_9 = L_8->get_L_2();
		NullCheck(L_9);
		int32_t L_10 = L_9->get_input_char_7();
		if ((((int32_t)L_10) < ((int32_t)((int32_t)65))))
		{
			goto IL_0055;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_11 = ___ctx0;
		NullCheck(L_11);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_12 = L_11->get_L_2();
		NullCheck(L_12);
		int32_t L_13 = L_12->get_input_char_7();
		if ((((int32_t)L_13) <= ((int32_t)((int32_t)70))))
		{
			goto IL_0073;
		}
	}

IL_0055:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_14 = ___ctx0;
		NullCheck(L_14);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_15 = L_14->get_L_2();
		NullCheck(L_15);
		int32_t L_16 = L_15->get_input_char_7();
		if ((((int32_t)L_16) < ((int32_t)((int32_t)97))))
		{
			goto IL_00d3;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_17 = ___ctx0;
		NullCheck(L_17);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_18 = L_17->get_L_2();
		NullCheck(L_18);
		int32_t L_19 = L_18->get_input_char_7();
		if ((((int32_t)L_19) > ((int32_t)((int32_t)102))))
		{
			goto IL_00d3;
		}
	}

IL_0073:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_20 = ___ctx0;
		NullCheck(L_20);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_21 = L_20->get_L_2();
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_22 = L_21;
		NullCheck(L_22);
		int32_t L_23 = L_22->get_unichar_13();
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_24 = ___ctx0;
		NullCheck(L_24);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_25 = L_24->get_L_2();
		NullCheck(L_25);
		int32_t L_26 = L_25->get_input_char_7();
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_tA740F14E85682DB80300393CB63376A76BA37835_il2cpp_TypeInfo_var);
		int32_t L_27;
		L_27 = Lexer_HexValue_mC23D355B06D79E72038FD4710DFCBCC8F26F5212(L_26, /*hidden argument*/NULL);
		int32_t L_28 = V_1;
		NullCheck(L_22);
		L_22->set_unichar_13(((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_27, (int32_t)L_28)))));
		int32_t L_29 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1));
		int32_t L_30 = V_1;
		V_1 = ((int32_t)((int32_t)L_30/(int32_t)((int32_t)16)));
		int32_t L_31 = V_0;
		if ((!(((uint32_t)L_31) == ((uint32_t)4))))
		{
			goto IL_00d5;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_32 = ___ctx0;
		NullCheck(L_32);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_33 = L_32->get_L_2();
		NullCheck(L_33);
		StringBuilder_t * L_34 = L_33->get_string_buffer_10();
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_35 = ___ctx0;
		NullCheck(L_35);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_36 = L_35->get_L_2();
		NullCheck(L_36);
		int32_t L_37 = L_36->get_unichar_13();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		Il2CppChar L_38;
		L_38 = Convert_ToChar_m84E3CF47987D8B6F2D889D957CBFB5FD55F3DAEC(L_37, /*hidden argument*/NULL);
		NullCheck(L_34);
		StringBuilder_t * L_39;
		L_39 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_34, L_38, /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_40 = ___ctx0;
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_41 = ___ctx0;
		NullCheck(L_41);
		int32_t L_42 = L_41->get_StateStack_3();
		NullCheck(L_40);
		L_40->set_NextState_1(L_42);
		return (bool)1;
	}

IL_00d3:
	{
		return (bool)0;
	}

IL_00d5:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_43 = ___ctx0;
		NullCheck(L_43);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_44 = L_43->get_L_2();
		NullCheck(L_44);
		bool L_45;
		L_45 = Lexer_GetChar_m282F3FE856E7F4739F3ECE3AA60E1385AF028868(L_44, /*hidden argument*/NULL);
		if (L_45)
		{
			goto IL_0019;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State23(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State23_m059B397DAF7319B1DD1E289E8B5B96E88B7BBC09 (FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		goto IL_0065;
	}

IL_0002:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)39))))
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)92))))
		{
			goto IL_0036;
		}
	}
	{
		goto IL_0048;
	}

IL_001a:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_5 = ___ctx0;
		NullCheck(L_5);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_6 = L_5->get_L_2();
		NullCheck(L_6);
		Lexer_UngetChar_mA7F3C02B5A66310D5A8CDD065E1ECC596E20C772(L_6, /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_Return_0((bool)1);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->set_NextState_1(((int32_t)24));
		return (bool)1;
	}

IL_0036:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_9 = ___ctx0;
		NullCheck(L_9);
		L_9->set_StateStack_3(((int32_t)23));
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_10 = ___ctx0;
		NullCheck(L_10);
		L_10->set_NextState_1(((int32_t)21));
		return (bool)1;
	}

IL_0048:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_11 = ___ctx0;
		NullCheck(L_11);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_12 = L_11->get_L_2();
		NullCheck(L_12);
		StringBuilder_t * L_13 = L_12->get_string_buffer_10();
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_14 = ___ctx0;
		NullCheck(L_14);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_15 = L_14->get_L_2();
		NullCheck(L_15);
		int32_t L_16 = L_15->get_input_char_7();
		NullCheck(L_13);
		StringBuilder_t * L_17;
		L_17 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E(L_13, ((int32_t)((uint16_t)L_16)), /*hidden argument*/NULL);
	}

IL_0065:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_18 = ___ctx0;
		NullCheck(L_18);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_19 = L_18->get_L_2();
		NullCheck(L_19);
		bool L_20;
		L_20 = Lexer_GetChar_m282F3FE856E7F4739F3ECE3AA60E1385AF028868(L_19, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_0002;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State24(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State24_m7F4DA1872535E3312165D84917829964A7FFF2F8 (FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * ___ctx0, const RuntimeMethod* method)
{
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m282F3FE856E7F4739F3ECE3AA60E1385AF028868(L_1, /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)39)))))
		{
			goto IL_0038;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_6 = ___ctx0;
		NullCheck(L_6);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_7 = L_6->get_L_2();
		NullCheck(L_7);
		L_7->set_input_char_7(((int32_t)34));
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->set_Return_0((bool)1);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_9 = ___ctx0;
		NullCheck(L_9);
		L_9->set_NextState_1(1);
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State25(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State25_m57368B3F202D8295B927D2CE65B1318E74E69A0C (FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * ___ctx0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		bool L_2;
		L_2 = Lexer_GetChar_m282F3FE856E7F4739F3ECE3AA60E1385AF028868(L_1, /*hidden argument*/NULL);
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)42))))
		{
			goto IL_0024;
		}
	}
	{
		int32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)47))))
		{
			goto IL_002e;
		}
	}
	{
		goto IL_0038;
	}

IL_0024:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_8 = ___ctx0;
		NullCheck(L_8);
		L_8->set_NextState_1(((int32_t)27));
		return (bool)1;
	}

IL_002e:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_9 = ___ctx0;
		NullCheck(L_9);
		L_9->set_NextState_1(((int32_t)26));
		return (bool)1;
	}

IL_0038:
	{
		return (bool)0;
	}
}
// System.Boolean LitJson.Lexer::State26(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State26_m63559988DCC0AEAC91906B6109CEB0FF623EF9AE (FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * ___ctx0, const RuntimeMethod* method)
{
	{
		goto IL_001a;
	}

IL_0002:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_001a;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_3 = ___ctx0;
		NullCheck(L_3);
		L_3->set_NextState_1(1);
		return (bool)1;
	}

IL_001a:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_4 = ___ctx0;
		NullCheck(L_4);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_5 = L_4->get_L_2();
		NullCheck(L_5);
		bool L_6;
		L_6 = Lexer_GetChar_m282F3FE856E7F4739F3ECE3AA60E1385AF028868(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0002;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State27(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State27_m99B50C5B549173BF767C43B39C93F14C8E4580EB (FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * ___ctx0, const RuntimeMethod* method)
{
	{
		goto IL_001b;
	}

IL_0002:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		if ((!(((uint32_t)L_2) == ((uint32_t)((int32_t)42)))))
		{
			goto IL_001b;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_3 = ___ctx0;
		NullCheck(L_3);
		L_3->set_NextState_1(((int32_t)28));
		return (bool)1;
	}

IL_001b:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_4 = ___ctx0;
		NullCheck(L_4);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_5 = L_4->get_L_2();
		NullCheck(L_5);
		bool L_6;
		L_6 = Lexer_GetChar_m282F3FE856E7F4739F3ECE3AA60E1385AF028868(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0002;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::State28(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_State28_m9559337C58F4FA1186015F45A92CCCFABCAEAE85 (FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * ___ctx0, const RuntimeMethod* method)
{
	{
		goto IL_0033;
	}

IL_0002:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_0 = ___ctx0;
		NullCheck(L_0);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_1 = L_0->get_L_2();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_input_char_7();
		if ((((int32_t)L_2) == ((int32_t)((int32_t)42))))
		{
			goto IL_0033;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_3 = ___ctx0;
		NullCheck(L_3);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_4 = L_3->get_L_2();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_input_char_7();
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)47)))))
		{
			goto IL_0029;
		}
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_6 = ___ctx0;
		NullCheck(L_6);
		L_6->set_NextState_1(1);
		return (bool)1;
	}

IL_0029:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_7 = ___ctx0;
		NullCheck(L_7);
		L_7->set_NextState_1(((int32_t)27));
		return (bool)1;
	}

IL_0033:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_8 = ___ctx0;
		NullCheck(L_8);
		Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * L_9 = L_8->get_L_2();
		NullCheck(L_9);
		bool L_10;
		L_10 = Lexer_GetChar_m282F3FE856E7F4739F3ECE3AA60E1385AF028868(L_9, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0002;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean LitJson.Lexer::GetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_GetChar_m282F3FE856E7F4739F3ECE3AA60E1385AF028868 (Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = Lexer_NextChar_m5768865FB1D0C7426564D8FD2FC2F196A92939FD(__this, /*hidden argument*/NULL);
		int32_t L_1 = L_0;
		V_0 = L_1;
		__this->set_input_char_7(L_1);
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)(-1))))
		{
			goto IL_0014;
		}
	}
	{
		return (bool)1;
	}

IL_0014:
	{
		__this->set_end_of_input_4((bool)1);
		return (bool)0;
	}
}
// System.Int32 LitJson.Lexer::NextChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Lexer_NextChar_m5768865FB1D0C7426564D8FD2FC2F196A92939FD (Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_input_buffer_6();
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		int32_t L_1 = __this->get_input_buffer_6();
		__this->set_input_buffer_6(0);
		return L_1;
	}

IL_0016:
	{
		TextReader_t25B06DCA1906FEAD02150DB14313EBEA4CD78D2F * L_2 = __this->get_reader_8();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = VirtFuncInvoker0< int32_t >::Invoke(10 /* System.Int32 System.IO.TextReader::Read() */, L_2);
		return L_3;
	}
}
// System.Boolean LitJson.Lexer::NextToken()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Lexer_NextToken_m2DD1411BF4E5102DF9F57AA88D218E052818FC9E (Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Lexer_tA740F14E85682DB80300393CB63376A76BA37835_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_0 = __this->get_fsm_context_5();
		NullCheck(L_0);
		L_0->set_Return_0((bool)0);
	}

IL_000c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_tA740F14E85682DB80300393CB63376A76BA37835_il2cpp_TypeInfo_var);
		StateHandlerU5BU5D_t5B1F4167E639B8515CBA7DEA5B4C9F0ABD49DA19* L_1 = ((Lexer_tA740F14E85682DB80300393CB63376A76BA37835_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_tA740F14E85682DB80300393CB63376A76BA37835_il2cpp_TypeInfo_var))->get_fsm_handler_table_1();
		int32_t L_2 = __this->get_state_9();
		NullCheck(L_1);
		int32_t L_3 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1));
		StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_5 = __this->get_fsm_context_5();
		NullCheck(L_4);
		bool L_6;
		L_6 = StateHandler_Invoke_mEB6140CA565783FF6E36C1593D165814CE02226F(L_4, L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_7 = __this->get_input_char_7();
		JsonException_tF4D20CEAA45C1D64D1C5E2AD15A6E819C2BB68AB * L_8 = (JsonException_tF4D20CEAA45C1D64D1C5E2AD15A6E819C2BB68AB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&JsonException_tF4D20CEAA45C1D64D1C5E2AD15A6E819C2BB68AB_il2cpp_TypeInfo_var)));
		JsonException__ctor_m7F4E2999B1E059544C993457E552D832FDDC1712(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Lexer_NextToken_m2DD1411BF4E5102DF9F57AA88D218E052818FC9E_RuntimeMethod_var)));
	}

IL_0033:
	{
		bool L_9 = __this->get_end_of_input_4();
		if (!L_9)
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}

IL_003d:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_10 = __this->get_fsm_context_5();
		NullCheck(L_10);
		bool L_11 = L_10->get_Return_0();
		if (!L_11)
		{
			goto IL_00b3;
		}
	}
	{
		StringBuilder_t * L_12 = __this->get_string_buffer_10();
		NullCheck(L_12);
		String_t* L_13;
		L_13 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_12);
		__this->set_string_value_11(L_13);
		StringBuilder_t * L_14 = __this->get_string_buffer_10();
		StringBuilder_t * L_15 = __this->get_string_buffer_10();
		NullCheck(L_15);
		int32_t L_16;
		L_16 = StringBuilder_get_Length_m680500263C59ACFD9582BF2AEEED8E92C87FF5C0(L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		StringBuilder_t * L_17;
		L_17 = StringBuilder_Remove_m6ABF9CF3D10160EB52E0768262A9B179F987571E(L_14, 0, L_16, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Lexer_tA740F14E85682DB80300393CB63376A76BA37835_il2cpp_TypeInfo_var);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_18 = ((Lexer_tA740F14E85682DB80300393CB63376A76BA37835_StaticFields*)il2cpp_codegen_static_fields_for(Lexer_tA740F14E85682DB80300393CB63376A76BA37835_il2cpp_TypeInfo_var))->get_fsm_return_table_0();
		int32_t L_19 = __this->get_state_9();
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1));
		int32_t L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		__this->set_token_12(L_21);
		int32_t L_22 = __this->get_token_12();
		if ((!(((uint32_t)L_22) == ((uint32_t)((int32_t)65542)))))
		{
			goto IL_00a0;
		}
	}
	{
		int32_t L_23 = __this->get_input_char_7();
		__this->set_token_12(L_23);
	}

IL_00a0:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_24 = __this->get_fsm_context_5();
		NullCheck(L_24);
		int32_t L_25 = L_24->get_NextState_1();
		__this->set_state_9(L_25);
		return (bool)1;
	}

IL_00b3:
	{
		FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * L_26 = __this->get_fsm_context_5();
		NullCheck(L_26);
		int32_t L_27 = L_26->get_NextState_1();
		__this->set_state_9(L_27);
		goto IL_000c;
	}
}
// System.Void LitJson.Lexer::UngetChar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Lexer_UngetChar_mA7F3C02B5A66310D5A8CDD065E1ECC596E20C772 (Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_input_char_7();
		__this->set_input_buffer_6(L_0);
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
// Conversion methods for marshalling of: LitJson.ObjectMetadata
IL2CPP_EXTERN_C void ObjectMetadata_t486A29F394B76C3325E72E63E48C5B2CFC38F857_marshal_pinvoke(const ObjectMetadata_t486A29F394B76C3325E72E63E48C5B2CFC38F857& unmarshaled, ObjectMetadata_t486A29F394B76C3325E72E63E48C5B2CFC38F857_marshaled_pinvoke& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
IL2CPP_EXTERN_C void ObjectMetadata_t486A29F394B76C3325E72E63E48C5B2CFC38F857_marshal_pinvoke_back(const ObjectMetadata_t486A29F394B76C3325E72E63E48C5B2CFC38F857_marshaled_pinvoke& marshaled, ObjectMetadata_t486A29F394B76C3325E72E63E48C5B2CFC38F857& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ObjectMetadata
IL2CPP_EXTERN_C void ObjectMetadata_t486A29F394B76C3325E72E63E48C5B2CFC38F857_marshal_pinvoke_cleanup(ObjectMetadata_t486A29F394B76C3325E72E63E48C5B2CFC38F857_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LitJson.ObjectMetadata
IL2CPP_EXTERN_C void ObjectMetadata_t486A29F394B76C3325E72E63E48C5B2CFC38F857_marshal_com(const ObjectMetadata_t486A29F394B76C3325E72E63E48C5B2CFC38F857& unmarshaled, ObjectMetadata_t486A29F394B76C3325E72E63E48C5B2CFC38F857_marshaled_com& marshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
IL2CPP_EXTERN_C void ObjectMetadata_t486A29F394B76C3325E72E63E48C5B2CFC38F857_marshal_com_back(const ObjectMetadata_t486A29F394B76C3325E72E63E48C5B2CFC38F857_marshaled_com& marshaled, ObjectMetadata_t486A29F394B76C3325E72E63E48C5B2CFC38F857& unmarshaled)
{
	Exception_t* ___element_type_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'element_type' of type 'ObjectMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___element_type_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.ObjectMetadata
IL2CPP_EXTERN_C void ObjectMetadata_t486A29F394B76C3325E72E63E48C5B2CFC38F857_marshal_com_cleanup(ObjectMetadata_t486A29F394B76C3325E72E63E48C5B2CFC38F857_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Object LitJson.OrderedDictionaryEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * OrderedDictionaryEnumerator_get_Current_m09396D961871305AD43FAD7A92A7A3338533B086 (OrderedDictionaryEnumerator_t41C60BB9B4656C74962492FF2832858504473791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_0;
		L_0 = OrderedDictionaryEnumerator_get_Entry_mB89D0D610B1A19320A15616B0A3D1D20D9CE158F(__this, /*hidden argument*/NULL);
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_1 = L_0;
		RuntimeObject * L_2 = Box(DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
// System.Collections.DictionaryEntry LitJson.OrderedDictionaryEnumerator::get_Entry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  OrderedDictionaryEnumerator_get_Entry_mB89D0D610B1A19320A15616B0A3D1D20D9CE158F (OrderedDictionaryEnumerator_t41C60BB9B4656C74962492FF2832858504473791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t86A5A6F7D3C7CD908347C85A5DB004599ED744A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m1AAB0CC2B2402A9B3A87A03355F95936321C2C3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m40F0202418FC88B5399F20ED515CD6609B4F9DA3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->get_list_enumerator_0();
		NullCheck(L_0);
		KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E  L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Current() */, IEnumerator_1_t86A5A6F7D3C7CD908347C85A5DB004599ED744A8_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		String_t* L_2;
		L_2 = KeyValuePair_2_get_Key_m1AAB0CC2B2402A9B3A87A03355F95936321C2C3A_inline((KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m1AAB0CC2B2402A9B3A87A03355F95936321C2C3A_RuntimeMethod_var);
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_3;
		L_3 = KeyValuePair_2_get_Value_m40F0202418FC88B5399F20ED515CD6609B4F9DA3_inline((KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m40F0202418FC88B5399F20ED515CD6609B4F9DA3_RuntimeMethod_var);
		DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90  L_4;
		memset((&L_4), 0, sizeof(L_4));
		DictionaryEntry__ctor_mF383FECC02E6A6FA003D609E63697A9FC010BCB4((&L_4), L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Object LitJson.OrderedDictionaryEnumerator::get_Key()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * OrderedDictionaryEnumerator_get_Key_m88C30BCD7ADF1D65E894D2AA2269D456DA86393A (OrderedDictionaryEnumerator_t41C60BB9B4656C74962492FF2832858504473791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t86A5A6F7D3C7CD908347C85A5DB004599ED744A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m1AAB0CC2B2402A9B3A87A03355F95936321C2C3A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->get_list_enumerator_0();
		NullCheck(L_0);
		KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E  L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Current() */, IEnumerator_1_t86A5A6F7D3C7CD908347C85A5DB004599ED744A8_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		String_t* L_2;
		L_2 = KeyValuePair_2_get_Key_m1AAB0CC2B2402A9B3A87A03355F95936321C2C3A_inline((KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Key_m1AAB0CC2B2402A9B3A87A03355F95936321C2C3A_RuntimeMethod_var);
		return L_2;
	}
}
// System.Object LitJson.OrderedDictionaryEnumerator::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * OrderedDictionaryEnumerator_get_Value_m3506A31EF9BC93C410F34D8EC43B6A06571A3B30 (OrderedDictionaryEnumerator_t41C60BB9B4656C74962492FF2832858504473791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t86A5A6F7D3C7CD908347C85A5DB004599ED744A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m40F0202418FC88B5399F20ED515CD6609B4F9DA3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = __this->get_list_enumerator_0();
		NullCheck(L_0);
		KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E  L_1;
		L_1 = InterfaceFuncInvoker0< KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E  >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>::get_Current() */, IEnumerator_1_t86A5A6F7D3C7CD908347C85A5DB004599ED744A8_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_2;
		L_2 = KeyValuePair_2_get_Value_m40F0202418FC88B5399F20ED515CD6609B4F9DA3_inline((KeyValuePair_2_t9C5B63144262707180652E108E86C6C3948E580E *)(&V_0), /*hidden argument*/KeyValuePair_2_get_Value_m40F0202418FC88B5399F20ED515CD6609B4F9DA3_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void LitJson.OrderedDictionaryEnumerator::.ctor(System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionaryEnumerator__ctor_mA38D62F592FFA96F062546B17BE14CEF7457CC0D (OrderedDictionaryEnumerator_t41C60BB9B4656C74962492FF2832858504473791 * __this, RuntimeObject* ___enumerator0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		RuntimeObject* L_0 = ___enumerator0;
		__this->set_list_enumerator_0(L_0);
		return;
	}
}
// System.Boolean LitJson.OrderedDictionaryEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OrderedDictionaryEnumerator_MoveNext_mA19514CD7601E04EC1015E6CAA5F9BADE2A49F93 (OrderedDictionaryEnumerator_t41C60BB9B4656C74962492FF2832858504473791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_list_enumerator_0();
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void LitJson.OrderedDictionaryEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OrderedDictionaryEnumerator_Reset_mD52F4C37F9816B27E8793809A6917506E18A3B05 (OrderedDictionaryEnumerator_t41C60BB9B4656C74962492FF2832858504473791 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = __this->get_list_enumerator_0();
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_0);
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
// Conversion methods for marshalling of: LitJson.PropertyMetadata
IL2CPP_EXTERN_C void PropertyMetadata_t7AF284DF793771FFE8EB11C17F3E1AF990EDE525_marshal_pinvoke(const PropertyMetadata_t7AF284DF793771FFE8EB11C17F3E1AF990EDE525& unmarshaled, PropertyMetadata_t7AF284DF793771FFE8EB11C17F3E1AF990EDE525_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception, NULL);
}
IL2CPP_EXTERN_C void PropertyMetadata_t7AF284DF793771FFE8EB11C17F3E1AF990EDE525_marshal_pinvoke_back(const PropertyMetadata_t7AF284DF793771FFE8EB11C17F3E1AF990EDE525_marshaled_pinvoke& marshaled, PropertyMetadata_t7AF284DF793771FFE8EB11C17F3E1AF990EDE525& unmarshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.PropertyMetadata
IL2CPP_EXTERN_C void PropertyMetadata_t7AF284DF793771FFE8EB11C17F3E1AF990EDE525_marshal_pinvoke_cleanup(PropertyMetadata_t7AF284DF793771FFE8EB11C17F3E1AF990EDE525_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: LitJson.PropertyMetadata
IL2CPP_EXTERN_C void PropertyMetadata_t7AF284DF793771FFE8EB11C17F3E1AF990EDE525_marshal_com(const PropertyMetadata_t7AF284DF793771FFE8EB11C17F3E1AF990EDE525& unmarshaled, PropertyMetadata_t7AF284DF793771FFE8EB11C17F3E1AF990EDE525_marshaled_com& marshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception, NULL);
}
IL2CPP_EXTERN_C void PropertyMetadata_t7AF284DF793771FFE8EB11C17F3E1AF990EDE525_marshal_com_back(const PropertyMetadata_t7AF284DF793771FFE8EB11C17F3E1AF990EDE525_marshaled_com& marshaled, PropertyMetadata_t7AF284DF793771FFE8EB11C17F3E1AF990EDE525& unmarshaled)
{
	Exception_t* ___Info_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Info' of type 'PropertyMetadata': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Info_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: LitJson.PropertyMetadata
IL2CPP_EXTERN_C void PropertyMetadata_t7AF284DF793771FFE8EB11C17F3E1AF990EDE525_marshal_com_cleanup(PropertyMetadata_t7AF284DF793771FFE8EB11C17F3E1AF990EDE525_marshaled_com& marshaled)
{
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.WrapperFactory::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapperFactory__ctor_mCCC28081C93D78116FC6014F0C41ED412D6DEA5E (WrapperFactory_tB55CB2530E34938522E06A75C4EDCC9466CCE22F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// LitJson.IJsonWrapper LitJson.WrapperFactory::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WrapperFactory_Invoke_m3C4DC0EF143565CADE61880BB7FBC0925392F0E8 (WrapperFactory_tB55CB2530E34938522E06A75C4EDCC9466CCE22F * __this, const RuntimeMethod* method)
{
	RuntimeObject* result = NULL;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 0)
			{
				// open
				typedef RuntimeObject* (*FunctionPointerType) (const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef RuntimeObject* (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< RuntimeObject* >::Invoke(targetMethod, targetThis);
					else
						result = GenericVirtFuncInvoker0< RuntimeObject* >::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						result = VirtFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef RuntimeObject* (*FunctionPointerType) (void*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
	return result;
}
// System.IAsyncResult LitJson.WrapperFactory::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WrapperFactory_BeginInvoke_mB2B64C990C373C8B9E6A3546C081D7F8C5084F70 (WrapperFactory_tB55CB2530E34938522E06A75C4EDCC9466CCE22F * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);;
}
// LitJson.IJsonWrapper LitJson.WrapperFactory::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WrapperFactory_EndInvoke_mE24DE11B997BED588271F4732FF50137EE2D8624 (WrapperFactory_tB55CB2530E34938522E06A75C4EDCC9466CCE22F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (RuntimeObject*)__result;;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void LitJson.WriterContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WriterContext__ctor_m79329B74FB582A1E615AF61376B999F38229143D (WriterContext_tFCDE563C39D30AA6A963803CD06E7077505BA9CB * __this, const RuntimeMethod* method)
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
// System.Void LitJson.JsonMapper/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m33750C065FC40F1AE0C1A2AE0BEBF4994768B889 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * L_0 = (U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A *)il2cpp_codegen_object_new(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m3171A925254B94B01D0F86A1902475329896466E(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void LitJson.JsonMapper/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m3171A925254B94B01D0F86A1902475329896466E (U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_0(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_0_m6249EBC4A74804EE66A1205F001BB4285CE200D2 (U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * __this, RuntimeObject * ___obj0, JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Convert_ToInt32_m16B237FA188F31A702DA81BB98674A35EF58AE55(((*(uint8_t*)((uint8_t*)UnBox(L_1, Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_mCF4C1D57638E36B9BA8A8530AD06A6A7F57BADDA(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_1(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_1_m3AADB25F3464E3E41A7ED3AB20BEFC811975CAC4 (U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * __this, RuntimeObject * ___obj0, JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Convert_ToString_mE78FB58C17EA12F95381D5C746722C771BD0BFE7(((*(Il2CppChar*)((Il2CppChar*)UnBox(L_1, Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m1A8BED62EC95E168E5BE5F8DB3C8E4C89EE50A45(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_2(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_2_mCFABBAEC7AF0665F9533111A9786F1E110CDD3E9 (U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * __this, RuntimeObject * ___obj0, JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->get_datetime_format_1();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		String_t* L_3;
		L_3 = Convert_ToString_mB3626028A47845ACEE96260B096C91EA42D227B7(((*(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)((DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 *)UnBox(L_1, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var)))), L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m1A8BED62EC95E168E5BE5F8DB3C8E4C89EE50A45(L_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_3(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_3_m7F3CC90F1D7ADF01214351B3649C7D6E7D00F9B1 (U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * __this, RuntimeObject * ___obj0, JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		NullCheck(L_0);
		JsonWriter_Write_mAF1F715A5CE7FFE16A6BDC8E628250279F5460EF(L_0, ((*(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 *)((Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 *)UnBox(L_1, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_4(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_4_m6AABDBB705FA47FCC482F31E2046F626AC7E51DE (U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * __this, RuntimeObject * ___obj0, JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Convert_ToInt32_mCCBE073FF85D0B92F38BF63334A42DB5BABA66C4(((*(int8_t*)((int8_t*)UnBox(L_1, SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_mCF4C1D57638E36B9BA8A8530AD06A6A7F57BADDA(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_5(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_5_m85B7EA966021153F04CB5424F96FD63DD1FFB60E (U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * __this, RuntimeObject * ___obj0, JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Convert_ToInt32_m1E275A2122DD929BC92E25F5E0B72355EA6378DE(((*(int16_t*)((int16_t*)UnBox(L_1, Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_mCF4C1D57638E36B9BA8A8530AD06A6A7F57BADDA(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_6(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_6_m9C69C58F8E385CFAD7124079B86C22217B2C6C49 (U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * __this, RuntimeObject * ___obj0, JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = Convert_ToInt32_mEE9189C38DB7737892F35EAE2FA183E918DC5C70(((*(uint16_t*)((uint16_t*)UnBox(L_1, UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_mCF4C1D57638E36B9BA8A8530AD06A6A7F57BADDA(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_7(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_7_m5B6BD8B592BD95B05EAA0B1B60FDE8A31EFFFB6B (U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * __this, RuntimeObject * ___obj0, JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		uint64_t L_2;
		L_2 = Convert_ToUInt64_m7E663B2DD9A15D6F486B6C36A43751CBFC922CA4(((*(uint32_t*)((uint32_t*)UnBox(L_1, UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_mF3349C36E4720C9678D00C75B1C4B630AE4BCEF6(L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_8(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_8_m3017E1C0815094117222109632DAED7B7F87B700 (U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * __this, RuntimeObject * ___obj0, JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		NullCheck(L_0);
		JsonWriter_Write_mF3349C36E4720C9678D00C75B1C4B630AE4BCEF6(L_0, ((*(uint64_t*)((uint64_t*)UnBox(L_1, UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void LitJson.JsonMapper/<>c::<RegisterBaseExporters>b__24_9(System.Object,LitJson.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CRegisterBaseExportersU3Eb__24_9_mBE68A4753906B3CEA0F47734AD7EBFBF37A1F84F (U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * __this, RuntimeObject * ___obj0, JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * ___writer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral242259752214E86B8CCBBF56AA4774B954BC34AD);
		s_Il2CppMethodInitialized = true;
	}
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * L_0 = ___writer1;
		RuntimeObject * L_1 = ___obj0;
		V_0 = ((*(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 *)((DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 *)UnBox(L_1, DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var))));
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		RuntimeObject* L_2 = ((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->get_datetime_format_1();
		String_t* L_3;
		L_3 = DateTimeOffset_ToString_m6F59F045A0B1063335C1BC88DBD80C1868B9E6AF((DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 *)(&V_0), _stringLiteral242259752214E86B8CCBBF56AA4774B954BC34AD, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		JsonWriter_Write_m1A8BED62EC95E168E5BE5F8DB3C8E4C89EE50A45(L_0, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_0_m84F1C30E7D6F4A03E4428A8BA927375179B59F4F (U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		uint8_t L_1;
		L_1 = Convert_ToByte_m63C698D88485EB4CAACA12EDFA17B0F894B2A66C(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint8_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_1_m7D891713262678790412D70065C26230BE7FFDEF (U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		uint64_t L_1;
		L_1 = Convert_ToUInt64_m4E6CFEBFC620FD3705A52853CDAECC5F6AB5423F(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint64_t L_2 = L_1;
		RuntimeObject * L_3 = Box(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_2(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_2_mB80F214C846B68A0F9A8ED9699D2113E8CD7845C (U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int64_t L_1;
		L_1 = Convert_ToInt64_mB05B99FB500FD4129E7616031A2405404524A074(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		int64_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_3(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_3_m04D39921596EE0683E6B1C067E52FC1BB7458B9A (U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int8_t L_1;
		L_1 = Convert_ToSByte_m51258423AD29E21302EF937934744AFEAEAEA1F0(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		int8_t L_2 = L_1;
		RuntimeObject * L_3 = Box(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_4(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_4_m9B16D80C73B58D22470F446C1D6CFE06D32631BF (U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int16_t L_1;
		L_1 = Convert_ToInt16_m541B626F2506C13399245670B33C0387F4C92241(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		int16_t L_2 = L_1;
		RuntimeObject * L_3 = Box(Int16_tD0F031114106263BB459DA1F099FF9F42691295A_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_5(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_5_m5A0DAF44755CB4145005C435A156000A62651AB6 (U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		uint16_t L_1;
		L_1 = Convert_ToUInt16_mD29FE8C80080BE4F1D7FA65A7589B9368150B3DC(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint16_t L_2 = L_1;
		RuntimeObject * L_3 = Box(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_6(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_6_mAEE5A2C62AB3F36FCA4E2424E6574ADEFB30C12A (U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = Convert_ToUInt32_mA38C43C03B8030EFE234825FC0D23E8B081089C9(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_7(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_7_mE9CB38CF0115B7EFE4ED70D73DCFF59F68148FCD (U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Convert_ToSingle_m370686073463D041429EEBF663C144744BE79668(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_8(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_8_m64AF494237E4391228EC8F7BCE5943C73771FCCD (U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = Convert_ToDouble_m71955B1BEF239B4ECC8868252DA082A38FD1E125(((*(int32_t*)((int32_t*)UnBox(L_0, Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		double L_2 = L_1;
		RuntimeObject * L_3 = Box(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_9(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_9_m2EF83B251A27A73F40996A30A4EBAD6C00C988BA (U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_1;
		L_1 = Convert_ToDecimal_mD729925F249653EF8DA34909561747DB117A4644(((*(double*)((double*)UnBox(L_0, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_2 = L_1;
		RuntimeObject * L_3 = Box(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_10(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_10_m4837983675D23BF71F6CF1659C1B3EA262B402A6 (U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		float L_1;
		L_1 = Convert_ToSingle_m97B465B7C9620523539B9BA65C256991531C0D05(((*(double*)((double*)UnBox(L_0, Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		float L_2 = L_1;
		RuntimeObject * L_3 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_11(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_11_mD146809F6728ADDF40FE8ED642952570630C25EE (U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		uint32_t L_1;
		L_1 = Convert_ToUInt32_mD97A8501E8D2A539ADBD77E91629BADE142746E7(((*(int64_t*)((int64_t*)UnBox(L_0, Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		uint32_t L_2 = L_1;
		RuntimeObject * L_3 = Box(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_12(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_12_mDA4AFAE0ABE6DB9B8670D04B99D943DF65BF8167 (U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		Il2CppChar L_1;
		L_1 = Convert_ToChar_mC70BDA16401A56AA014B84C16035328E533B9AF1(((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		Il2CppChar L_2 = L_1;
		RuntimeObject * L_3 = Box(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var, &L_2);
		return L_3;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_13(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_13_m36D1DB2E465C0D955A8431B97D8164253ED06D43 (U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->get_datetime_format_1();
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_2;
		L_2 = Convert_ToDateTime_m2FA19E10818EF340AF19191C7E01F2632FAF3B2D(((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), L_1, /*hidden argument*/NULL);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3 = L_2;
		RuntimeObject * L_4 = Box(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// System.Object LitJson.JsonMapper/<>c::<RegisterBaseImporters>b__25_14(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec_U3CRegisterBaseImportersU3Eb__25_14_m593A7FF346145A56F6A8C29F0FFE531E90460F7A (U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * __this, RuntimeObject * ___input0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___input0;
		IL2CPP_RUNTIME_CLASS_INIT(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var);
		RuntimeObject* L_1 = ((JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_StaticFields*)il2cpp_codegen_static_fields_for(JsonMapper_tE24FF5DD399485D1C0CD60389833FA407320088F_il2cpp_TypeInfo_var))->get_datetime_format_1();
		IL2CPP_RUNTIME_CLASS_INIT(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var);
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_2;
		L_2 = DateTimeOffset_Parse_mEAC1F90F2294A19A5DC107BD74A3C50FBE5D3D56(((String_t*)CastclassSealed((RuntimeObject*)L_0, String_t_il2cpp_TypeInfo_var)), L_1, /*hidden argument*/NULL);
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_3 = L_2;
		RuntimeObject * L_4 = Box(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_il2cpp_TypeInfo_var, &L_3);
		return L_4;
	}
}
// LitJson.IJsonWrapper LitJson.JsonMapper/<>c::<ToObject>b__32_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CToObjectU3Eb__32_0_mC187FB00203C4133AD5C2E0B59DA1A7F834BC814 (U3CU3Ec_tDDE60F04BDF466C3102E22A3B43B1B42CF99F91A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 * L_0 = (JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22 *)il2cpp_codegen_object_new(JsonData_tBE135E65297F10197A753A51D54F70C5A138EC22_il2cpp_TypeInfo_var);
		JsonData__ctor_m660BB5B411AD6D6732F9289DB4A56608B7C11D7D(L_0, /*hidden argument*/NULL);
		return L_0;
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
// System.Void LitJson.Lexer/StateHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateHandler__ctor_mF1275528CE46301EF915D07CE3FC1E79E5BC7F40 (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Boolean LitJson.Lexer/StateHandler::Invoke(LitJson.FsmContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StateHandler_Invoke_mEB6140CA565783FF6E36C1593D165814CE02226F (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * __this, FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * ___ctx0, const RuntimeMethod* method)
{
	bool result = false;
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef bool (*FunctionPointerType) (FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___ctx0, targetMethod);
			}
			else
			{
				// closed
				typedef bool (*FunctionPointerType) (void*, FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< bool >::Invoke(targetMethod, ___ctx0);
					else
						result = GenericVirtFuncInvoker0< bool >::Invoke(targetMethod, ___ctx0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___ctx0);
					else
						result = VirtFuncInvoker0< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___ctx0);
				}
			}
			else
			{
				typedef bool (*FunctionPointerType) (FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA *, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___ctx0, targetMethod);
			}
		}
		else
		{
			// closed
			if (targetThis != NULL && il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< bool, FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * >::Invoke(targetMethod, targetThis, ___ctx0);
					else
						result = GenericVirtFuncInvoker1< bool, FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * >::Invoke(targetMethod, targetThis, ___ctx0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< bool, FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___ctx0);
					else
						result = VirtFuncInvoker1< bool, FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___ctx0);
				}
			}
			else
			{
				if (targetThis == NULL)
				{
					typedef bool (*FunctionPointerType) (FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___ctx0, targetMethod);
				}
				else
				{
					typedef bool (*FunctionPointerType) (void*, FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA *, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___ctx0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult LitJson.Lexer/StateHandler::BeginInvoke(LitJson.FsmContext,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StateHandler_BeginInvoke_m7E7AB22A33F9234FD872DF666068B6FE248C69EB (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * __this, FsmContext_t0543BD27A5D5A935A1307D0DB5670F602A4C76DA * ___ctx0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___ctx0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Boolean LitJson.Lexer/StateHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StateHandler_EndInvoke_mF7B112AEE5CF0CA939D887A4441AB351BAACD2E4 (StateHandler_t6E9422AA4184BDA13906415B68BE1A1426893FCE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return *(bool*)UnBox ((RuntimeObject*)__result);;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * DictionaryEntry_get_Key_m9A53AE1FA4CA017F0A7353F71658A9C36079E1D7_inline (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__key_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * DictionaryEntry_get_Value_m2D618D04C0A8EA2A065B171F528FEA98B059F9BC_inline (DictionaryEntry_tF60471FAB430320A9C7D4382BF966EAAC06D7A90 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get__value_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonWriter_set_Validate_m7E0C408161622AC5EA0F4585E2CDFD63277BB49E_inline (JsonWriter_tF9057404715003DE4AB771FF865770690910FB89 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_validate_9(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonReader_get_Token_mED560372CCFF4EE563BF50874652BBCF9C28F13B_inline (JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_token_14();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * JsonReader_get_Value_m0B7E3C54874728492DC520DCE1CB6508F378ADF2_inline (JsonReader_t22FEA82F32A541448F6FC224B8A8FC385DA21C06 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_token_value_13();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* Lexer_get_StringValue_m034AD1356FBD2A8031B031261E549239262006E9_inline (Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_string_value_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Lexer_get_EndOfInput_mBE0B69A04CA5DDF09506A3E2A5D29F73FDF63D5B_inline (Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_end_of_input_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Lexer_get_Token_mFF56BE71A4DFC4210FE0249131CCE77B4B27EA83_inline (Lexer_tA740F14E85682DB80300393CB63376A76BA37835 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_token_12();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Key_mCAD7B121DB998D7C56EB0281215A860EFE9DCD95_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_key_0();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
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
