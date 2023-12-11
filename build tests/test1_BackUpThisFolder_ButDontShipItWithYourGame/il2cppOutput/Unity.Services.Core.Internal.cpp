﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Action`1<Unity.Services.Core.Internal.IAsyncOperation>
struct Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A;
// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
// System.Action`2<System.Threading.Tasks.Task,System.Object>
struct Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB;
// System.Action`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>
struct Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3;
// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>
struct Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36;
// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>
struct Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark>
struct Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83;
// System.Collections.Generic.Dictionary`2<System.Type,Unity.Services.Core.Telemetry.Internal.IMetrics>
struct Dictionary_2_t970906E2A8141A4E3A182960BB43855C5AF0CE9E;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380;
// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs>
struct EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A;
// System.Func`1<Newtonsoft.Json.Serialization.IReferenceResolver>
struct Func_1_t78E8B13F3C7D6CC3EB821B4F5D26999D062417E2;
// System.Func`1<Newtonsoft.Json.JsonSerializerSettings>
struct Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08;
// System.Func`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0;
// System.Collections.Generic.IDictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>
struct IDictionary_2_t95477BFE5BAD2682EFD0FA5B031FBDCA48E151E8;
// System.Collections.Generic.IDictionary`2<System.String,System.Object>
struct IDictionary_2_t79D4ADB15B238AC117DF72982FEA3C42EF5AFA19;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF;
// System.Collections.Generic.IDictionary`2<System.Type,Unity.Services.Core.Telemetry.Internal.IMetrics>
struct IDictionary_2_tBA4E97BEE1E9C159A2989A0ACE0C74405646B6EB;
// System.Collections.Generic.IDictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IDictionary_2_t4D3B65115D85F2C21975A2BBF4A23860F8BCD02F;
// System.Collections.Generic.IEnumerable`1<System.Exception>
struct IEnumerable_1_t0AFD6CF8DF742647C96B2C7BB9E9FAE42538D551;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2;
// System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.JsonConverter>
struct IEnumerable_1_t62BE791C78973DE7E50F66A9160B62CA8DD1FCC5;
// System.Collections.Generic.IEnumerable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_tDBFC8496F14612776AF930DBF84AFE7D06D1F0E9;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tAE94C8F24AD5B94D4EE85CA9FC59E3409D41CAF7;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_tFB8BE2ED9A601C1259EAB8D73D1B3E96EA321FA1;
// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter>
struct IList_1_t106D4C1340745E38431865BBEA6AE170A4713431;
// System.Collections.Generic.IReadOnlyCollection`1<System.Int32>
struct IReadOnlyCollection_1_t0114882DFCA42EC6C648641A315FCD199A031075;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String>
struct IReadOnlyDictionary_2_t8FD5C7F0C22A371C71196C9A42D80E0E47EAC1C8;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Collections.Generic.List`1<System.Int32>>
struct KeyCollection_t017A3C390BDA13690840EBBC865515DB80085258;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>
struct KeyCollection_t241A367A2D827EDFBE8E517F96AE6B58053FA006;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Unity.Services.Core.Internal.IServiceComponent>
struct KeyCollection_t9A4591FC5446FBD11961412C92C3F1B8AD491650;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark>
struct KeyCollection_t304DFD5A0E4619A012FCB1763FC797D8F7CBA71A;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,Unity.Services.Core.Telemetry.Internal.IMetrics>
struct KeyCollection_t3575640C549DE0C7E24A50C20EEF818807D76D0B;
// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55;
// System.Collections.Generic.List`1<System.Exception>
struct List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JToken>
struct List_1_t58901670B7FA44803364AA3059A3F981A991011A;
// System.Collections.Generic.List`1<Newtonsoft.Json.JsonConverter>
struct List_1_t2D3373CEE35E29CDEB531AF0926BF9553626BFDF;
// System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>
struct List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37;
// System.Threading.Tasks.TaskCompletionSource`1<System.String>
struct TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372;
// System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970;
// System.Threading.Tasks.TaskFactory`1<System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>>
struct TaskFactory_1_tCC6D9AC3F7DFBCC5757BDA7B60E4832097AEB36E;
// System.Threading.Tasks.TaskFactory`1<Unity.Services.Core.Telemetry.Internal.IDiagnostics>
struct TaskFactory_1_t8BCDF0FD2A33495BA297F16AAC31E93FD65FA36D;
// System.Threading.Tasks.TaskFactory`1<Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory>
struct TaskFactory_1_t5A392869EF83CB18C61A57F3943D73878E936C34;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106;
// System.Threading.Tasks.TaskFactory`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D;
// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>>
struct Task_1_t727821A7F4CD62528E4941D3DA8119B6A7A3D4BC;
// System.Threading.Tasks.Task`1<Unity.Services.Core.Telemetry.Internal.IDiagnostics>
struct Task_1_t7E11A949B0612EC938C5CBD9E723725819BC441E;
// System.Threading.Tasks.Task`1<Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory>
struct Task_1_t4B1C4BF4F9776B675A807CB47E9EF3EF35A0048A;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<System.Int32>>
struct ValueCollection_tE4D61B64F4018B78A9006C9160F50793B04633C6;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>
struct ValueCollection_t9CACBC0D045234A3E3C144C48C04B64794475A62;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Unity.Services.Core.Internal.IServiceComponent>
struct ValueCollection_tC0B58DA7C0433448029FE2BACD7848C036C3E4FE;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark>
struct ValueCollection_t34BBEB9C03313D552CDFBC4C7554A405EF018D18;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,Unity.Services.Core.Telemetry.Internal.IMetrics>
struct ValueCollection_t5E6A14DD0CAA2ED7985B5985168CC52AC0D4B809;
// System.Collections.Generic.Dictionary`2/ValueCollection<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Collections.Generic.List`1<System.Int32>>[]
struct EntryU5BU5D_t57B820DF2CED255D3C95F7A90EFFBBFB3A07CD9E;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>[]
struct EntryU5BU5D_tD5E8DD9A88E75DC423244A19A730077DAF1E6687;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Unity.Services.Core.Internal.IServiceComponent>[]
struct EntryU5BU5D_t5A71599D2E773B2D4D0C0FC45A91C1C8BC29AD75;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.Int32>[]
struct EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark>[]
struct EntryU5BU5D_t0251DEA7A90D733BCA68E7A473C992294FE187F4;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.String>[]
struct EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,Unity.Services.Core.Telemetry.Internal.IMetrics>[]
struct EntryU5BU5D_tEE0A79692C3F237A74CADB72737344F4323824A4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Exception[]
struct ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0;
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_tF69203E66D4FCB82A6F64A24EF7785E26E9E957E;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// Unity.Services.Core.Internal.PackageInitializationInfo[]
struct PackageInitializationInfoU5BU5D_tD4DD8AEAE696BFB9C8EFC787F1750876E8CB301B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ComponentModel.AddingNewEventHandler
struct AddingNewEventHandler_tD9BAC60F604446ED14967643F63A83CE2A5C3701;
// System.AggregateException
struct AggregateException_t51B6205846DFB356B94452702201DD239D44422F;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Unity.Services.Core.Internal.AsyncOperation
struct AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// Unity.Services.Core.Internal.AsyncOperationBase
struct AsyncOperationBase_t4808DB931A15FAB56C45333DFBB14F8E9BD49124;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804;
// Unity.Services.Core.Internal.CircularDependencyException
struct CircularDependencyException_t1447C8D464045989784E78E658EFE30FF95153FC;
// Unity.Services.Core.Internal.ComponentRegistry
struct ComponentRegistry_tE9997750875F6233B090B300FABCF05123E45523;
// System.Threading.ContextCallback
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
// Unity.Services.Core.Internal.CoreDiagnostics
struct CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571;
// Unity.Services.Core.Internal.CoreMetrics
struct CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564;
// Unity.Services.Core.Internal.CoreRegistry
struct CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA;
// Unity.Services.Core.Internal.CoreRegistryInitializer
struct CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03;
// System.Globalization.CultureInfo
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Unity.Services.Core.Internal.DependencyTree
struct DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992;
// Unity.Services.Core.Internal.DependencyTreeComponentHashException
struct DependencyTreeComponentHashException_t809B7EBA8BA1E4166E6F1FCCC21DA94BD7E0765A;
// Unity.Services.Core.Internal.DependencyTreePackageHashException
struct DependencyTreePackageHashException_tEAE1BAE41D7E329841F3270A8E6491FBDB7CB547;
// Unity.Services.Core.Internal.DependencyTreeSortFailedException
struct DependencyTreeSortFailedException_t039BF64DBDDFEB16DD187FE600445BF53C88A918;
// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB;
// System.Exception
struct Exception_t;
// Unity.Services.Core.ExternalUserIdProperty
struct ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9;
// Unity.Services.Core.Internal.HashException
struct HashException_tFB110FD771A95A93E65290AC3969485D400E8855;
// Unity.Services.Core.Networking.Internal.HttpRequest
struct HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03;
// Unity.Services.Core.Networking.Internal.HttpResponse
struct HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59;
// Unity.Services.Core.Internal.IAsyncOperation
struct IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Runtime.CompilerServices.IAsyncStateMachine
struct IAsyncStateMachine_t0680C7F905C553076B552D5A1A6E39E2F0F36AA2;
// Unity.Services.Core.Internal.IComponentRegistry
struct IComponentRegistry_t139D898B2B7C9D1FF36A573E8DC25415053883B7;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t7EC502F5FCA86DD95579A92A1E0116BE32D6340B;
// Unity.Services.Core.Telemetry.Internal.IDiagnostics
struct IDiagnostics_tC5C252A201DC608FD4FA8B95CB546ACE5400345E;
// Unity.Services.Core.Telemetry.Internal.IDiagnosticsComponentProvider
struct IDiagnosticsComponentProvider_t8F3AE277C8397FA813C6811A96820EFCE6417C41;
// Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory
struct IDiagnosticsFactory_t5DBE289089E6EAD4C111F0D8880F3FE812BE2CC0;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEqualityComparer
struct IEqualityComparer_tEF8F1EC76B9C8E76695BE848D41E6B147928D1C1;
// Unity.Services.Core.Internal.IInitializablePackage
struct IInitializablePackage_tC78F3A872EFC30DA406E624FDC1C72C9B1381098;
// UnityEngine.ILogger
struct ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42;
// Unity.Services.Core.Telemetry.Internal.IMetrics
struct IMetrics_tA68E45B18912AD74792533F57895E50599D4A7D5;
// Unity.Services.Core.Telemetry.Internal.IMetricsFactory
struct IMetricsFactory_t28787E894D3913155A7403F74BD62B562E3F906F;
// Unity.Services.Core.Internal.IPackageRegistry
struct IPackageRegistry_t598A337CA30E50021BB139EF5CF3C3867139CFA2;
// Unity.Services.Core.Configuration.Internal.IProjectConfiguration
struct IProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2;
// Newtonsoft.Json.Serialization.ISerializationBinder
struct ISerializationBinder_t3C8B850335FB40001C9201981439AE77B430031F;
// Unity.Services.Core.Internal.IServiceComponent
struct IServiceComponent_t88C101C3AF6A1CA33BFF6842BF9AD1E6266E72E9;
// Newtonsoft.Json.Serialization.ITraceWriter
struct ITraceWriter_t44C99CB7D5AB59A077F569914E56DAD66B5A41EF;
// Unity.Services.Core.IUnityServices
struct IUnityServices_t49EC0D24FF18A25F42A1FF0B56962B5E7AD1E9A9;
// Unity.Services.Core.InitializationOptions
struct InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// Newtonsoft.Json.Linq.JArray
struct JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A;
// Newtonsoft.Json.Linq.JObject
struct JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1;
// Newtonsoft.Json.Linq.JProperty
struct JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4;
// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t4A44691A9942B8A7AEB4016F7405BF388D1E0632;
// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3;
// Newtonsoft.Json.Linq.JTokenEqualityComparer
struct JTokenEqualityComparer_t2B7EB6B1D12A8C94152AB2E690CC45F185373C46;
// Unity.Services.Core.Internal.JsonConvertDefaultSettingsScope
struct JsonConvertDefaultSettingsScope_t99E008BFD0664910D1F92DB4536FC5E698C8EE0A;
// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF;
// System.ComponentModel.ListChangedEventHandler
struct ListChangedEventHandler_tDBF36F3E2C6B7538106878E1D5A7553C5EA77616;
// System.Threading.Lock
struct Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7;
// Unity.Services.Core.Internal.LockedComponentRegistry
struct LockedComponentRegistry_t82DAB6CC0CFF528CB442E3BFD7E331B6E1706B5F;
// Unity.Services.Core.Internal.LockedPackageRegistry
struct LockedPackageRegistry_tD44860DBF1971F04B909E49EDEA6B483DD6A8499;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Unity.Services.Core.Internal.MissingComponent
struct MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8;
// System.Collections.Specialized.NotifyCollectionChangedEventHandler
struct NotifyCollectionChangedEventHandler_t521FADBD1190F88022BC2160A5F82FDFC08364AF;
// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB;
// System.OperationCanceledException
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662;
// Unity.Services.Core.Internal.PackageInitializationInfo
struct PackageInitializationInfo_t3A1BAF9D785E161A9856F3C5769D513C65E49563;
// Unity.Services.Core.Internal.PackageRegistry
struct PackageRegistry_tEC69FE10BB71F416B3FFACF803BFAF0EED0448E9;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA;
// System.ComponentModel.PropertyChangingEventHandler
struct PropertyChangingEventHandler_tF293724DEA588C35A7E94C4F4413AEE6438FE9CD;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Unity.Services.Core.ServicesInitializationException
struct ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631;
// System.Threading.Tasks.StackGuard
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043;
// System.String
struct String_t;
// System.Threading.SynchronizationContext
struct SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// Unity.Services.Core.Internal.TaskAsyncOperation
struct TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
// System.Type
struct Type_t;
// Unity.Services.Core.Internal.UnityServicesInternal
struct UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE;
// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F;
// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C;
// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6;
// System.Uri
struct Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.Services.Core.Internal.AsyncOperationAwaiter/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t3B73576199883FBF71FC76F226282CB30BFE5375;
// Unity.Services.Core.Internal.AsyncOperationAwaiter/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t0BC64F6CB3CE8A09EA5F2A786A4054970E447EE0;
// Unity.Services.Core.Internal.AsyncOperationBase/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t151EFA0C3EB311C252F8C42FBBBE5C6DFB1AD944;
// Unity.Services.Core.Internal.AsyncOperationExtensions/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tE96228883203CD8C2E3FAE5BC1CE0C36067896C9;
// Unity.Services.Core.Internal.CoreDiagnostics/<GetOrCreateDiagnosticsAsync>d__26
struct U3CGetOrCreateDiagnosticsAsyncU3Ed__26_tAB11C3722F9B7391AAF98FE98D8F1770EBA1E4E5;
// Unity.Services.Core.Internal.CoreDiagnostics/<SendCoreDiagnosticsAsync>d__24
struct U3CSendCoreDiagnosticsAsyncU3Ed__24_tBD54EAE1168C81C1F5B4169A57653E2519682602;
// Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0;
// Unity.Services.Core.Internal.CoreRegistryInitializer/<InitializeRegistryAsync>d__3
struct U3CInitializeRegistryAsyncU3Ed__3_t667C2D1D53EB98537AA50BACFCBD9127A01D3CC5;
// Newtonsoft.Json.Linq.JProperty/JPropertyList
struct JPropertyList_t53D97F8AB016B10A00D616C620766D38449D8C98;
// Unity.Services.Core.Internal.JsonConvertDefaultSettingsScope/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tD8C272FFDF458F8EBAAADC6165B340FBEA7F5C6B;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
// Unity.Services.Core.Internal.TaskAsyncOperation/<>c
struct U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2;
// Unity.Services.Core.Internal.UnityServicesInitializer/<EnableServicesInitializationAsync>d__1
struct U3CEnableServicesInitializationAsyncU3Ed__1_tAC20D219AB4876F92E378792660AF104511FA482;
// Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_tF8E2FFAF15B36CA0EEFCE72345468844F8E9AD2C;
// Unity.Services.Core.Internal.UnityServicesInternal/<EnableInitializationAsync>d__24
struct U3CEnableInitializationAsyncU3Ed__24_t4DF9B311AF91CDF203824EA1DD5CEAAC52ABA88C;
// Unity.Services.Core.Internal.UnityServicesInternal/<InitializeAsync>d__20
struct U3CInitializeAsyncU3Ed__20_t8926D76B0A6C9F3E94911702F6B452F1AE90A1B9;
// Unity.Services.Core.Internal.UnityServicesInternal/<InitializeServicesAsync>d__22
struct U3CInitializeServicesAsyncU3Ed__22_tE6E881564EFD3F20C6FB3EF0B94D4F2BD1F65CD9;
// Unity.Services.Core.Internal.UnityWebRequestUtils/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tE8A20757B5DDF368F4E0E479CD24294A218C58C3;
// Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0/<<InitializeRegistryAsync>g__TryInitializePackageAsync|0>d
struct U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_tEDBE32E965E3D0139E956FC4872AE411630D672C;
// Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0/<<InitializeServicesAsync>g__InitializePackagesAsync|1>d
struct U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_t7D84CF2A9502FB46D141D018B52A52227F7FABD6;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AggregateException_t51B6205846DFB356B94452702201DD239D44422F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_t48F43EEBD362A47F5627122EA5697AD97B922620_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_1_tAC33E355F01002DF8E0EFE1A1A42BE37728E8ABA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CircularDependencyException_t1447C8D464045989784E78E658EFE30FF95153FC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ComponentRegistry_tE9997750875F6233B090B300FABCF05123E45523_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DependencyTreeComponentHashException_t809B7EBA8BA1E4166E6F1FCCC21DA94BD7E0765A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DependencyTreePackageHashException_tEAE1BAE41D7E329841F3270A8E6491FBDB7CB547_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DependencyTreeSortFailedException_t039BF64DBDDFEB16DD187FE600445BF53C88A918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t970906E2A8141A4E3A182960BB43855C5AF0CE9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashException_tFB110FD771A95A93E65290AC3969485D400E8855_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t814BB76B40805DFFB842C822D22B7D4BD7297BFA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IComponentRegistry_t139D898B2B7C9D1FF36A573E8DC25415053883B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDiagnosticsComponentProvider_t8F3AE277C8397FA813C6811A96820EFCE6417C41_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDiagnosticsFactory_t5DBE289089E6EAD4C111F0D8880F3FE812BE2CC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDiagnostics_tC5C252A201DC608FD4FA8B95CB546ACE5400345E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tBA4E97BEE1E9C159A2989A0ACE0C74405646B6EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IInitializablePackage_tC78F3A872EFC30DA406E624FDC1C72C9B1381098_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_tFB8BE2ED9A601C1259EAB8D73D1B3E96EA321FA1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMetricsFactory_t28787E894D3913155A7403F74BD62B562E3F906F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IMetrics_tA68E45B18912AD74792533F57895E50599D4A7D5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPackageRegistry_t598A337CA30E50021BB139EF5CF3C3867139CFA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IReadOnlyCollection_1_t0114882DFCA42EC6C648641A315FCD199A031075_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t2D3373CEE35E29CDEB531AF0926BF9553626BFDF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LockedComponentRegistry_t82DAB6CC0CFF528CB442E3BFD7E331B6E1706B5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LockedPackageRegistry_tD44860DBF1971F04B909E49EDEA6B483DD6A8499_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PackageInitializationInfo_t3A1BAF9D785E161A9856F3C5769D513C65E49563_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PackageRegistry_tEC69FE10BB71F416B3FFACF803BFAF0EED0448E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEnableInitializationAsyncU3Ed__24_t4DF9B311AF91CDF203824EA1DD5CEAAC52ABA88C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEnableServicesInitializationAsyncU3Ed__1_tAC20D219AB4876F92E378792660AF104511FA482_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetOrCreateDiagnosticsAsyncU3Ed__26_tAB11C3722F9B7391AAF98FE98D8F1770EBA1E4E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInitializeAsyncU3Ed__20_t8926D76B0A6C9F3E94911702F6B452F1AE90A1B9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInitializeRegistryAsyncU3Ed__3_t667C2D1D53EB98537AA50BACFCBD9127A01D3CC5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CInitializeServicesAsyncU3Ed__22_tE6E881564EFD3F20C6FB3EF0B94D4F2BD1F65CD9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSendCoreDiagnosticsAsyncU3Ed__24_tBD54EAE1168C81C1F5B4169A57653E2519682602_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_tEDBE32E965E3D0139E956FC4872AE411630D672C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_t7D84CF2A9502FB46D141D018B52A52227F7FABD6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass17_0_t151EFA0C3EB311C252F8C42FBBBE5C6DFB1AD944_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass1_0_tE96228883203CD8C2E3FAE5BC1CE0C36067896C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass22_0_tF8E2FFAF15B36CA0EEFCE72345468844F8E9AD2C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_t3B73576199883FBF71FC76F226282CB30BFE5375_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_tE8A20757B5DDF368F4E0E479CD24294A218C58C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_t0BC64F6CB3CE8A09EA5F2A786A4054970E447EE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_tD8C272FFDF458F8EBAAADC6165B340FBEA7F5C6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00AEDB4EA07BB4CA190DED1D7DEC75DE187AB687;
IL2CPP_EXTERN_C String_t* _stringLiteral030AB8A2EB6A82B47D04D6636E0EA938F2D78F11;
IL2CPP_EXTERN_C String_t* _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708;
IL2CPP_EXTERN_C String_t* _stringLiteral0A642D37F6AB975402943D621A7F08FF5C55CC88;
IL2CPP_EXTERN_C String_t* _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D;
IL2CPP_EXTERN_C String_t* _stringLiteral19C52E9F7740BFC167EDD516F982351B658DDB7D;
IL2CPP_EXTERN_C String_t* _stringLiteral1D46C5E16EDF4316E0B7D7CC3E8A160D1786013E;
IL2CPP_EXTERN_C String_t* _stringLiteral256B8718F5B597AB472E143158542147A5DCA30A;
IL2CPP_EXTERN_C String_t* _stringLiteral27295DACD5582DC8DD95604ED1649BC8F9ECAADF;
IL2CPP_EXTERN_C String_t* _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6;
IL2CPP_EXTERN_C String_t* _stringLiteral37DB785FDD0276CE7F0BC844D3E3412E90A589F9;
IL2CPP_EXTERN_C String_t* _stringLiteral383A61072E28D7DD0B2EF761B5CD5543F52B238B;
IL2CPP_EXTERN_C String_t* _stringLiteral43A6B14128BBE614EEAF7B01FF9170C8360CC863;
IL2CPP_EXTERN_C String_t* _stringLiteral43E7E877F1FB7127DD27D3DFC32DB2C70AD55811;
IL2CPP_EXTERN_C String_t* _stringLiteral45DC0B46E58EC601FF61F432808A35DF08816CF7;
IL2CPP_EXTERN_C String_t* _stringLiteral46604309E510F59701697FD5C6D3BE31DB689786;
IL2CPP_EXTERN_C String_t* _stringLiteral4C69A5ABD36AE74665BC61E90B89CFBA61C28AF8;
IL2CPP_EXTERN_C String_t* _stringLiteral4DDC2B4D24FB785CBCEFBECF670764ADA53865CA;
IL2CPP_EXTERN_C String_t* _stringLiteral5116A4464A0039AA9E9C49606A3BCBC374AADA81;
IL2CPP_EXTERN_C String_t* _stringLiteral569045DB02C57E62748D078AAAB3C20AAB0640AB;
IL2CPP_EXTERN_C String_t* _stringLiteral59B135BD177050D14D8C8332E07A07482038D29D;
IL2CPP_EXTERN_C String_t* _stringLiteral5B522622DB2B42C9E7CC70FC622607A00C62E8B4;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral62085E8C55DCED36DF75D38F113376BFB67686BB;
IL2CPP_EXTERN_C String_t* _stringLiteral664DABBB1F96C857595AF4BB8A0CB71AC398FA3B;
IL2CPP_EXTERN_C String_t* _stringLiteral66A691710A0786DD5EDC78CA27D0BC054CD6B34D;
IL2CPP_EXTERN_C String_t* _stringLiteral69B10F88CB081B1F2AAAF72E4F4BC8E982BBE197;
IL2CPP_EXTERN_C String_t* _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
IL2CPP_EXTERN_C String_t* _stringLiteral7DAC516092AE075D549759FBFE57497622D29F15;
IL2CPP_EXTERN_C String_t* _stringLiteral8501F02071665536240FE484662450FCC702AD6C;
IL2CPP_EXTERN_C String_t* _stringLiteral860A8D6E0621FF04D34DD0BDB8DAEB769BD82049;
IL2CPP_EXTERN_C String_t* _stringLiteral8BECFE146A3C715A5BD5CA1609A930E9E0EFA822;
IL2CPP_EXTERN_C String_t* _stringLiteral96F3FFD1DFF5CA817F920663C1819B0E51830209;
IL2CPP_EXTERN_C String_t* _stringLiteral9BC8CA8E639EC87CE6773FD14D847BAA494850DC;
IL2CPP_EXTERN_C String_t* _stringLiteralA8A8223D36D7904E9E1B99531534AE175E8799CA;
IL2CPP_EXTERN_C String_t* _stringLiteralA9145BA894AC681C06F6E921F9054DBC4A6037E9;
IL2CPP_EXTERN_C String_t* _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
IL2CPP_EXTERN_C String_t* _stringLiteralB9EFC4E3BFC701CF3C9A03ED0C0CFA12327C22B8;
IL2CPP_EXTERN_C String_t* _stringLiteralBF1E5B8A8A1A60839F0309DFD6D6638FE4FCD96D;
IL2CPP_EXTERN_C String_t* _stringLiteralC7534A44A75ACD68ACDE5123C6DB8DD24242F2CD;
IL2CPP_EXTERN_C String_t* _stringLiteralD3A31FFA67A77D3443C74DB1AA944AAC009B687A;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDAE0D3C6B917D9937A0AFE3408B092A6AD9711E1;
IL2CPP_EXTERN_C String_t* _stringLiteralDB7C3C03AB41EA8BCBB2E5E76B37C088F0CC4C08;
IL2CPP_EXTERN_C String_t* _stringLiteralDD6065F6BEE8EC9D2DE042E63D3ABB71AA1D0A38;
IL2CPP_EXTERN_C String_t* _stringLiteralEE7A81A087334FE7C472DDEE5F918DC21A765F45;
IL2CPP_EXTERN_C String_t* _stringLiteralF535E56705DB5F5E2C41B52885EAC1101A3D4C50;
IL2CPP_EXTERN_C String_t* _stringLiteralF7C03E97995F6950303A46C204A216735E6B4582;
IL2CPP_EXTERN_C String_t* _stringLiteralFE6E0B8F1E6E9D5A408D28E50726BF240B9602C7;
IL2CPP_EXTERN_C String_t* _stringLiteralFFFABE76BC1800C136E930163EBC08341F85897B;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncOperationAwaiter_GetResult_m04CD1981674B6AC7A9236E9E5D1F3B9814066504_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t03489502EBF553A2EE84E314C5C36D6E8F28D504_TisU3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_t7D84CF2A9502FB46D141D018B52A52227F7FABD6_m8ABB9ED1C779D3CA6CE0C864F256DE0E94A0C0C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CGetOrCreateDiagnosticsAsyncU3Ed__26_tAB11C3722F9B7391AAF98FE98D8F1770EBA1E4E5_m1A884D29A8718F2E1B4ED80AE8EF60CCF3097711_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tBFA82CA55CD8557D18B6898AF6B0A0A99BD72E51_TisU3CGetOrCreateDiagnosticsAsyncU3Ed__26_tAB11C3722F9B7391AAF98FE98D8F1770EBA1E4E5_m049C389067C32D223B0306C0056C32F8A8F3C1AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeRegistryAsyncU3Ed__3_t667C2D1D53EB98537AA50BACFCBD9127A01D3CC5_mC2C5E820FC2E5DB728AABE9217352CEFD0F338E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m4EB3E38629F4249463A5810A921389C8C24ACD6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Create_m87FD370A0EBF4A65E6C3533E61C4484920815909_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m1472BDD400D3D9DA02202D6C4CA09042E6B22786_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetException_m1478EBE0D2DB997547C107D2697C8CE59E2C7B3B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_m00485CE66FC14765B7ABB50FB23F9784705B055B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_SetResult_mB4CC5FE74E6EF861C367C4AE42B6D3ABA866EE09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CGetOrCreateDiagnosticsAsyncU3Ed__26_tAB11C3722F9B7391AAF98FE98D8F1770EBA1E4E5_mF680325A89DBCA7431662B2318B23FCFBC0231A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CInitializeRegistryAsyncU3Ed__3_t667C2D1D53EB98537AA50BACFCBD9127A01D3CC5_mDB5B1A1329EF2DF5E4BD560BC1524379577A8685_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_Start_TisU3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_t7D84CF2A9502FB46D141D018B52A52227F7FABD6_mE28B11E4C3BC8098F20388D7C928E45F3E7BF722_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mE41346DB8D5830551E6DBDA8548B413941945483_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_1_get_Task_mE540E124DCE7F1CB8696F83A177766A36660B22B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t03489502EBF553A2EE84E314C5C36D6E8F28D504_TisU3CInitializeServicesAsyncU3Ed__22_tE6E881564EFD3F20C6FB3EF0B94D4F2BD1F65CD9_mBC0C9FB8ECCDDFF344176E0CE5AFF4397005F9D1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CInitializeAsyncU3Ed__20_t8926D76B0A6C9F3E94911702F6B452F1AE90A1B9_m10E35F0B9182DAB9EFA11A799ECA810449B75401_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1A1F7733EB9E664C127E34842037B68E5D063862_TisU3CSendCoreDiagnosticsAsyncU3Ed__24_tBD54EAE1168C81C1F5B4169A57653E2519682602_m2A36ED4EF84CA5172A2A2D36C4397976A2347E4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CEnableInitializationAsyncU3Ed__24_t4DF9B311AF91CDF203824EA1DD5CEAAC52ABA88C_m1BDEC89BB66589749DAF15A8EFF5EA7E06CEB476_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeAsyncU3Ed__20_t8926D76B0A6C9F3E94911702F6B452F1AE90A1B9_mF608E440508BF5657279C236B08ABC71997A1E7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_tEDBE32E965E3D0139E956FC4872AE411630D672C_mB1F884312610762854C167E4A4898BA447FF9DAA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CEnableInitializationAsyncU3Ed__24_t4DF9B311AF91CDF203824EA1DD5CEAAC52ABA88C_m233F613A0750E40DE9630448ADFA0022A6F9CE29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CInitializeAsyncU3Ed__20_t8926D76B0A6C9F3E94911702F6B452F1AE90A1B9_mA3EADA7D645D36CB94B9FE813F2B6FBDC3AA8D15_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CInitializeServicesAsyncU3Ed__22_tE6E881564EFD3F20C6FB3EF0B94D4F2BD1F65CD9_m7C49F477B362795250C063FA437C0F918700DCD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CSendCoreDiagnosticsAsyncU3Ed__24_tBD54EAE1168C81C1F5B4169A57653E2519682602_mE943D6C9AA1C237537F08EFB18656E99F0A1C8E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncTaskMethodBuilder_Start_TisU3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_tEDBE32E965E3D0139E956FC4872AE411630D672C_mC0157E1F91DCC9887FB42595A68ACAB7C986BBD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CEnableServicesInitializationAsyncU3Ed__1_tAC20D219AB4876F92E378792660AF104511FA482_m4D6CF3A21D281806C26D1E97BB72B61995A1BA55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncVoidMethodBuilder_Start_TisU3CEnableServicesInitializationAsyncU3Ed__1_tAC20D219AB4876F92E378792660AF104511FA482_m75A1700AFE3533C22131E1099D51EE8E10E8475B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreDiagnostics_OnSendFailed_mAD6109FFF9114433011F68EA25A054263EA0AE21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CoreMetrics_FindAndCacheAllPackageMetrics_m1CAE6AD821223E7333BC0E0888F347B7C5DF82E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DependencyTreeInitializeOrderSorter_GetDependencyTypeHashesFor_mE4896E6FD46EC6A8D6E60540C9036B58ABC124AF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DependencyTreeInitializeOrderSorter_GetPackageTypeHashFor_mD0F3091C18741606134FBB1F6F1465F5EB8C0634_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DependencyTreeInitializeOrderSorter_SortRegisteredPackagesIntoTarget_m50FFB4AE5A3282877E8541CAAD905CD7C2D8F831_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DependencyTreeInitializeOrderSorter_SortTreeThrough_m2B43FBB987275FC528AD1B28C7B78A24E9FE088C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DictionaryExtensions_MergeAllowOverride_TisDictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIServiceComponent_t88C101C3AF6A1CA33BFF6842BF9AD1E6266E72E9_mA5F497216B69E0B710B774C252FEDA78EC1C0C66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_mE0540DC1320338CDF8987A9508CB911F2A10DC75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m050AC0D9D6F681C25C12FBBC7DD71F926D206ED9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m0E484492BA83E1C79585B6C53AC5F8418E4C473F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m8E6C3FEADDB1D6606A48972D8C7405DD98D66F6B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mAB6AC7CC3190A5C78A01CB6298A778FBAA1DD050_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mD8B8B63DBF027F12B871D705B68F1AA5EBC0ADC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m2E2032FDA802F3565C754B77CAE7BA58989C1FEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m419ED3D0511EB148508F35979CC025A6D1BD55BE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m4738B97DDCA9D95595FB6AD1700D81D0D84A8205_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m5D77EB3F62FED2B879551BFADA7FE409B56F99F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m94824805BB9A079EEBD9EE0CFE2119AFD9346868_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mAEE8DC3D9575E18CFCB3E4061F680D16B3E00A72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC94CCA31D9C4EE7B8FCA41A2C361213C5DBF46ED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m46F788DEB6E4E58131A990632E45E4AB535D1EBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_m9284604119CAF32B586959EFA2260DABA1C5C31C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m73FCA59D80BFDAFBF320F97A352248A68190C9DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m8AD97E240F583ACF35C19A2C71143DE04FF1F071_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m39B98342C7AB8C5B5FE5A5A81F8A34B7DCFD787A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_mBE302F6BC51FA460285907BC883053A67B73CC06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m53257BCC63E49ADE25842FBFFD8C94FEE95FB882_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mFAF50FE88A99867BD0A39B989DC9C9AC691D777B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m041C46147B3F287D3F182E0F2F811B8D8EB384A1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1745E1BB6B262D6D9FD7C9CEAF34F27242951E36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mA7C405F3329C72C64721043B896930F053D69EBB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD65DE20DDDC29FC2C2FCC26ADD8C8F5961882D57_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m1447F14395D07036FB65812381AD7A25F97799EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m25917EFC1552699E49CC74EACE736D4264FA28E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mEC407F859D14E6AC0034673717B5A1544CD9163C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF016F088343F1C1EA14781644EF32427E2A99925_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6BAA9C755EFADC323C0D40D59AC67DEBEACC8957_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m80B0DE302A2D7C8A09DF766FDFE3BAF46301C2AC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mB6D933BAB3F52E4028691060155A28C6D5973C89_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC4512C9422884FBA36066F5C42CED876CDA1DBDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_m0B904E65230A34E4A0E53E7595BDEBF12BDA5E0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_m746D46B7EEFA2A7FBD134CA14C215BF240705220_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m7C437E7CA551F3A8A3CFF9DAB2D8D00971771FEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m8E3C27DE02A5C8D1AE01D55D6B325BFB693CF385_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mBA9BF8AA05F106553CEE6FEA9817EE1C6CFF88D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30247370D912BC949FE5B3FC5C927371FE42CD2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4D3A0C3BB61FAE2CD50F2FA207948E380C0611FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m59B1652DC03FD212770C484772B3505B50B0982F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD463C00E13C50984576EDF8FE2F8D2715471BF94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mBF08A30EBAD94D53A523D418C783D7803FF81143_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* LockedComponentRegistry_ResetProvidedComponents_mA0A7565D5FB2DA9D4938EE1631E60AF9AA4F293D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m5C6D8811EE0550DCAFA7CF0DB421D4B08EC79C34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m79C78561964DA7B1F93E790960A196E79A7E7310_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_GetResult_mA69D647361B1C913C8965C30709C140E70F96285_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_m2A73A8B5A6C224F724151A09FFB30197550443F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mAC7F0C79B827DABCA2DB39A48B8A7BD88CF92FD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mC4E216C5AFC1142205CD3AB88A89C42B37DE329B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetCanceled_m3D4DB4B9418F13DC64123476BCA6628844E68175_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetException_m458D56254FBD7F874452154131D60AADD2131334_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetException_m5E898CFE10256D572CC17EE51C94AD861200FC6C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetResult_m7A0F162733257CA73B347B6BB9677F25A0AB0F9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_TrySetResult_mA357F52C522A4C476C88EDC990A312436084B176_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m0192286BA9B87B3F93EC06D50C0D81D5C38E5335_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mA9635B16BD399B9B78349D3FE093048FC3DBAAEA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mB121C97207C4A962A8683FD039BAB8D65127BEF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInitializeRegistryAsyncU3Ed__3_MoveNext_m5F259043D6E1638605E2E02C7CF4B08C733FFC23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CInitializeServicesAsyncU3Ed__22_MoveNext_m8CBE33D50A5251F774381D3A21B3B78F1F3B439B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__10_0_m7D1C91349CC66FFB64227709E0E57B9BE35C6ECF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass17_0_U3COnCompletedU3Eb__0_m776443FF8BCB7D55D852BA853922C09181C2467C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass1_0_U3CAsTaskU3Eg__CompleteTaskU7C0_m971ACC6A960E4BAE00467A0B72768FFDE7DA0A3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CGetTextAsyncU3Eg__CompleteFetchTaskOnRequestCompletedU7C0_mFF438AD39102AD7C40D5BB5BE65A4E3AD3AFE759_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3COnCompletedU3Eb__0_m7C168E70198DF4A1028F3249D6ABB220C8E0F430_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CInitializeRegistryAsyncU3Eg__FailU7C2_mB66A52FC680C0D6D34C45425B8D8838A9576BF63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CUnsafeOnCompletedU3Eb__0_m0B2FC427DC2CD56231179ADE92A745808C38D7B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__0_mA43863B621B23FF2CA4A62E1F17470CBC5D40808_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m96C2EFA120FE8F75126D373B8D4FD3AE167E6FA7_RuntimeMethod_var;
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com;
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke;
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_t69B2CF866FE66B798597285246666CFA7B9798CA 
{
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>
struct Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t57B820DF2CED255D3C95F7A90EFFBBFB3A07CD9E* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t017A3C390BDA13690840EBBC865515DB80085258* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tE4D61B64F4018B78A9006C9160F50793B04633C6* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>
struct Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tD5E8DD9A88E75DC423244A19A730077DAF1E6687* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t241A367A2D827EDFBE8E517F96AE6B58053FA006* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t9CACBC0D045234A3E3C144C48C04B64794475A62* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>
struct Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t5A71599D2E773B2D4D0C0FC45A91C1C8BC29AD75* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t9A4591FC5446FBD11961412C92C3F1B8AD491650* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tC0B58DA7C0433448029FE2BACD7848C036C3E4FE* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t197C691F43F1694B771BF83C278D12BBFEEB86FA* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t67E8423B5AEB30C254013AD88AB68D2A36F1F436* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t74AF7C1BAE06C66E984668F663D574ED6A596D28* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark>
struct Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t0251DEA7A90D733BCA68E7A473C992294FE187F4* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t304DFD5A0E4619A012FCB1763FC797D8F7CBA71A* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t34BBEB9C03313D552CDFBC4C7554A405EF018D18* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t1AF33AD0B7330843448956EC4277517081658AE7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t2EDD317F5771E575ACB63527B5AFB71291040342* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t238D0D2427C6B841A01F522A41540165A2C4AE76* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<System.Type,Unity.Services.Core.Telemetry.Internal.IMetrics>
struct Dictionary_2_t970906E2A8141A4E3A182960BB43855C5AF0CE9E  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tEE0A79692C3F237A74CADB72737344F4323824A4* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_t3575640C549DE0C7E24A50C20EEF818807D76D0B* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t5E6A14DD0CAA2ED7985B5985168CC52AC0D4B809* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80  : public RuntimeObject
{
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>
struct KeyCollection_t241A367A2D827EDFBE8E517F96AE6B58053FA006  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Unity.Services.Core.Internal.IServiceComponent>
struct KeyCollection_t9A4591FC5446FBD11961412C92C3F1B8AD491650  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* ____dictionary_0;
};

// System.Collections.Generic.List`1<System.Exception>
struct List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Newtonsoft.Json.JsonConverter>
struct List_1_t2D3373CEE35E29CDEB531AF0926BF9553626BFDF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	JsonConverterU5BU5D_tF69203E66D4FCB82A6F64A24EF7785E26E9E957E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>
struct List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	PackageInitializationInfoU5BU5D_tD4DD8AEAE696BFB9C8EFC787F1750876E8CB301B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ____task_0;
};

// System.Threading.Tasks.TaskCompletionSource`1<System.String>
struct TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ____task_0;
};

// System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970  : public RuntimeObject
{
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::_task
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ____task_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<System.Int32>>
struct ValueCollection_tE4D61B64F4018B78A9006C9160F50793B04633C6  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* ____dictionary_0;
};

// Unity.Services.Core.Internal.AsyncOperation
struct AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0  : public RuntimeObject
{
	// System.Boolean Unity.Services.Core.Internal.AsyncOperation::<IsDone>k__BackingField
	bool ___U3CIsDoneU3Ek__BackingField_0;
	// Unity.Services.Core.Internal.AsyncOperationStatus Unity.Services.Core.Internal.AsyncOperation::<Status>k__BackingField
	int32_t ___U3CStatusU3Ek__BackingField_1;
	// System.Exception Unity.Services.Core.Internal.AsyncOperation::<Exception>k__BackingField
	Exception_t* ___U3CExceptionU3Ek__BackingField_2;
	// System.Action`1<Unity.Services.Core.Internal.IAsyncOperation> Unity.Services.Core.Internal.AsyncOperation::m_CompletedCallback
	Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* ___m_CompletedCallback_3;
};

// Unity.Services.Core.Internal.AsyncOperationExtensions
struct AsyncOperationExtensions_t7B8CA055BEF33981ED3D43D7663DCF2FCFEC7B4C  : public RuntimeObject
{
};

// Unity.Services.Core.Internal.ComponentRegistry
struct ComponentRegistry_tE9997750875F6233B090B300FABCF05123E45523  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent> Unity.Services.Core.Internal.ComponentRegistry::<ComponentTypeHashToInstance>k__BackingField
	Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* ___U3CComponentTypeHashToInstanceU3Ek__BackingField_0;
};

// Unity.Services.Core.Internal.CoreDiagnostics
struct CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<System.String,System.String> Unity.Services.Core.Internal.CoreDiagnostics::<CoreTags>k__BackingField
	RuntimeObject* ___U3CCoreTagsU3Ek__BackingField_6;
	// Unity.Services.Core.Telemetry.Internal.IDiagnosticsComponentProvider Unity.Services.Core.Internal.CoreDiagnostics::<DiagnosticsComponentProvider>k__BackingField
	RuntimeObject* ___U3CDiagnosticsComponentProviderU3Ek__BackingField_7;
	// Unity.Services.Core.Telemetry.Internal.IDiagnostics Unity.Services.Core.Internal.CoreDiagnostics::<Diagnostics>k__BackingField
	RuntimeObject* ___U3CDiagnosticsU3Ek__BackingField_8;
};

// Unity.Services.Core.Internal.CoreLogger
struct CoreLogger_tAC968BAEF6C6BF338D4EE7A71CBFC5A3992ED287  : public RuntimeObject
{
};

// Unity.Services.Core.Internal.CoreMetrics
struct CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564  : public RuntimeObject
{
	// Unity.Services.Core.Telemetry.Internal.IMetrics Unity.Services.Core.Internal.CoreMetrics::<Metrics>k__BackingField
	RuntimeObject* ___U3CMetricsU3Ek__BackingField_8;
	// System.Collections.Generic.IDictionary`2<System.Type,Unity.Services.Core.Telemetry.Internal.IMetrics> Unity.Services.Core.Internal.CoreMetrics::<AllPackageMetrics>k__BackingField
	RuntimeObject* ___U3CAllPackageMetricsU3Ek__BackingField_9;
};

// Unity.Services.Core.Internal.CoreRegistry
struct CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA  : public RuntimeObject
{
	// Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.CoreRegistry::<PackageRegistry>k__BackingField
	RuntimeObject* ___U3CPackageRegistryU3Ek__BackingField_1;
	// Unity.Services.Core.Internal.IComponentRegistry Unity.Services.Core.Internal.CoreRegistry::<ComponentRegistry>k__BackingField
	RuntimeObject* ___U3CComponentRegistryU3Ek__BackingField_2;
};

// Unity.Services.Core.Internal.CoreRegistryInitializer
struct CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03  : public RuntimeObject
{
	// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.CoreRegistryInitializer::m_Registry
	CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___m_Registry_0;
	// System.Collections.Generic.List`1<System.Int32> Unity.Services.Core.Internal.CoreRegistryInitializer::m_SortedPackageTypeHashes
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_SortedPackageTypeHashes_1;
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// UnityEngine.Debug
struct Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F  : public RuntimeObject
{
};

// Unity.Services.Core.Internal.DependencyTree
struct DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IInitializablePackage> Unity.Services.Core.Internal.DependencyTree::PackageTypeHashToInstance
	Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36* ___PackageTypeHashToInstance_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> Unity.Services.Core.Internal.DependencyTree::ComponentTypeHashToPackageTypeHash
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___ComponentTypeHashToPackageTypeHash_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>> Unity.Services.Core.Internal.DependencyTree::PackageTypeHashToComponentTypeHashDependencies
	Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* ___PackageTypeHashToComponentTypeHashDependencies_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent> Unity.Services.Core.Internal.DependencyTree::ComponentTypeHashToInstance
	Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* ___ComponentTypeHashToInstance_3;
};

// Unity.Services.Core.Internal.DependencyTreeExtensions
struct DependencyTreeExtensions_tB7321AA291A55EFD78136109FFAE0C22D118BC35  : public RuntimeObject
{
};

// Unity.Services.Core.Internal.DictionaryExtensions
struct DictionaryExtensions_tBEF7D6841F11EDDE1A184051217978F1A4E0B731  : public RuntimeObject
{
};

// Unity.Services.Core.Networking.Internal.HttpRequestExtensions
struct HttpRequestExtensions_t8601C12B123C24B30FD3629A183BAD02D3F27E4C  : public RuntimeObject
{
};

// Unity.Services.Core.InitializationOptions
struct InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A  : public RuntimeObject
{
	// System.Collections.Generic.IDictionary`2<System.String,System.Object> Unity.Services.Core.InitializationOptions::<Values>k__BackingField
	RuntimeObject* ___U3CValuesU3Ek__BackingField_0;
};

// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3  : public RuntimeObject
{
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A* ____parent_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ____previous_2;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ____next_3;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject* ____annotations_4;
};

// Newtonsoft.Json.JsonConvert
struct JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2  : public RuntimeObject
{
};

// Unity.Services.Core.Internal.JsonConvertDefaultSettingsScope
struct JsonConvertDefaultSettingsScope_t99E008BFD0664910D1F92DB4536FC5E698C8EE0A  : public RuntimeObject
{
	// System.Boolean Unity.Services.Core.Internal.JsonConvertDefaultSettingsScope::m_HasRegisteredSettings
	bool ___m_HasRegisteredSettings_0;
	// System.Func`1<Newtonsoft.Json.JsonSerializerSettings> Unity.Services.Core.Internal.JsonConvertDefaultSettingsScope::Callback
	Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* ___Callback_1;
};

// Unity.Services.Core.Internal.LockedComponentRegistry
struct LockedComponentRegistry_t82DAB6CC0CFF528CB442E3BFD7E331B6E1706B5F  : public RuntimeObject
{
	// Unity.Services.Core.Internal.IComponentRegistry Unity.Services.Core.Internal.LockedComponentRegistry::<Registry>k__BackingField
	RuntimeObject* ___U3CRegistryU3Ek__BackingField_1;
};

// Unity.Services.Core.Internal.LockedPackageRegistry
struct LockedPackageRegistry_tD44860DBF1971F04B909E49EDEA6B483DD6A8499  : public RuntimeObject
{
	// Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.LockedPackageRegistry::<Registry>k__BackingField
	RuntimeObject* ___U3CRegistryU3Ek__BackingField_1;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Unity.Services.Core.Internal.MissingComponent
struct MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8  : public RuntimeObject
{
	// System.Type Unity.Services.Core.Internal.MissingComponent::<IntendedType>k__BackingField
	Type_t* ___U3CIntendedTypeU3Ek__BackingField_0;
};

// Unity.Services.Core.Internal.PackageInitializationInfo
struct PackageInitializationInfo_t3A1BAF9D785E161A9856F3C5769D513C65E49563  : public RuntimeObject
{
	// System.Type Unity.Services.Core.Internal.PackageInitializationInfo::PackageType
	Type_t* ___PackageType_0;
	// System.Double Unity.Services.Core.Internal.PackageInitializationInfo::InitializationTimeInSeconds
	double ___InitializationTimeInSeconds_1;
};

// Unity.Services.Core.Internal.PackageRegistry
struct PackageRegistry_tEC69FE10BB71F416B3FFACF803BFAF0EED0448E9  : public RuntimeObject
{
	// Unity.Services.Core.Internal.DependencyTree Unity.Services.Core.Internal.PackageRegistry::<Tree>k__BackingField
	DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___U3CTreeU3Ek__BackingField_0;
};

// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043  : public RuntimeObject
{
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_1;
	// System.Delegate System.Threading.Tasks.Task::m_action
	Delegate_t* ___m_action_2;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject* ___m_stateObject_3;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler_4;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent_5;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_6;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject* ___m_continuationObject_7;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties_10;
};

// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E  : public RuntimeObject
{
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskScheduler::m_taskSchedulerId
	int32_t ___m_taskSchedulerId_2;
};

// Unity.Services.Core.UnityServices
struct UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317  : public RuntimeObject
{
};

// Unity.Services.Core.Internal.UnityServicesInitializer
struct UnityServicesInitializer_tF4287AF7FF70BF3671B5DCAC5D9ECF2B3FB996C3  : public RuntimeObject
{
};

// Unity.Services.Core.Internal.UnityServicesInternal
struct UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE  : public RuntimeObject
{
	// Unity.Services.Core.ServicesInitializationState Unity.Services.Core.Internal.UnityServicesInternal::<State>k__BackingField
	int32_t ___U3CStateU3Ek__BackingField_0;
	// Unity.Services.Core.InitializationOptions Unity.Services.Core.Internal.UnityServicesInternal::<Options>k__BackingField
	InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* ___U3COptionsU3Ek__BackingField_1;
	// System.Boolean Unity.Services.Core.Internal.UnityServicesInternal::CanInitialize
	bool ___CanInitialize_2;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Object> Unity.Services.Core.Internal.UnityServicesInternal::m_Initialization
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ___m_Initialization_3;
	// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.UnityServicesInternal::<Registry>k__BackingField
	CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___U3CRegistryU3Ek__BackingField_4;
	// Unity.Services.Core.Internal.CoreMetrics Unity.Services.Core.Internal.UnityServicesInternal::<Metrics>k__BackingField
	CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* ___U3CMetricsU3Ek__BackingField_5;
	// Unity.Services.Core.Internal.CoreDiagnostics Unity.Services.Core.Internal.UnityServicesInternal::<Diagnostics>k__BackingField
	CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* ___U3CDiagnosticsU3Ek__BackingField_6;
};

// Unity.Services.Core.Internal.UnityWebRequestUtils
struct UnityWebRequestUtils_t825249AFFC48EF2B9787D9E74BD5368FE0C951C1  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Unity.Services.Core.Internal.AsyncOperationAwaiter/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t3B73576199883FBF71FC76F226282CB30BFE5375  : public RuntimeObject
{
	// System.Action Unity.Services.Core.Internal.AsyncOperationAwaiter/<>c__DisplayClass2_0::continuation
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation_0;
};

// Unity.Services.Core.Internal.AsyncOperationAwaiter/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t0BC64F6CB3CE8A09EA5F2A786A4054970E447EE0  : public RuntimeObject
{
	// System.Action Unity.Services.Core.Internal.AsyncOperationAwaiter/<>c__DisplayClass3_0::continuation
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation_0;
};

// Unity.Services.Core.Internal.AsyncOperationBase/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t151EFA0C3EB311C252F8C42FBBBE5C6DFB1AD944  : public RuntimeObject
{
	// System.Action Unity.Services.Core.Internal.AsyncOperationBase/<>c__DisplayClass17_0::continuation
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___continuation_0;
};

// Unity.Services.Core.Internal.AsyncOperationExtensions/<>c__DisplayClass1_0
struct U3CU3Ec__DisplayClass1_0_tE96228883203CD8C2E3FAE5BC1CE0C36067896C9  : public RuntimeObject
{
	// System.Threading.Tasks.TaskCompletionSource`1<System.Object> Unity.Services.Core.Internal.AsyncOperationExtensions/<>c__DisplayClass1_0::taskCompletionSource
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ___taskCompletionSource_0;
};

// Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0  : public RuntimeObject
{
	// System.Diagnostics.Stopwatch Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0::stopwatch
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___stopwatch_0;
	// Unity.Services.Core.Internal.CoreRegistryInitializer Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0::<>4__this
	CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03* ___U3CU3E4__this_1;
	// System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo> Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0::packagesInitInfos
	List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF* ___packagesInitInfos_2;
	// System.Collections.Generic.List`1<System.Exception> Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0::failureReasons
	List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* ___failureReasons_3;
	// Unity.Services.Core.Internal.DependencyTree Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0::dependencyTree
	DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___dependencyTree_4;
};

// Unity.Services.Core.Internal.JsonConvertDefaultSettingsScope/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tD8C272FFDF458F8EBAAADC6165B340FBEA7F5C6B  : public RuntimeObject
{
	// Newtonsoft.Json.JsonSerializerSettings Unity.Services.Core.Internal.JsonConvertDefaultSettingsScope/<>c__DisplayClass3_0::invalidSettings
	JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___invalidSettings_0;
};

// Unity.Services.Core.Internal.TaskAsyncOperation/<>c
struct U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2  : public RuntimeObject
{
};

// Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0
struct U3CU3Ec__DisplayClass22_0_tF8E2FFAF15B36CA0EEFCE72345468844F8E9AD2C  : public RuntimeObject
{
	// Unity.Services.Core.Internal.DependencyTree Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0::dependencyTree
	DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___dependencyTree_0;
	// System.Collections.Generic.List`1<System.Int32> Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0::sortedPackageTypeHashes
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___sortedPackageTypeHashes_1;
	// Unity.Services.Core.Internal.UnityServicesInternal Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0::<>4__this
	UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* ___U3CU3E4__this_2;
	// System.Diagnostics.Stopwatch Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0::initStopwatch
	Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* ___initStopwatch_3;
};

// Unity.Services.Core.Internal.UnityWebRequestUtils/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tE8A20757B5DDF368F4E0E479CD24294A218C58C3  : public RuntimeObject
{
	// System.Threading.Tasks.TaskCompletionSource`1<System.String> Unity.Services.Core.Internal.UnityWebRequestUtils/<>c__DisplayClass2_0::completionSource
	TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* ___completionSource_0;
};

// System.Collections.Generic.List`1/Enumerator<System.Int32>
struct Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	int32_t ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Unity.Services.Core.Internal.PackageInitializationInfo>
struct Enumerator_t846076437B615B61591349EDED51543E1164910B 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	PackageInitializationInfo_t3A1BAF9D785E161A9856F3C5769D513C65E49563* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF;

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Collections.Generic.List`1<System.Int32>>
struct Enumerator_t9D9BEEB8A22FBACB996BABF18C06B5EBD63F2FC5 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ____currentValue_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>
struct Enumerator_t90A498889D869EAA06211A0CC03E2B8C98AABFE7 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	int32_t ____currentKey_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,Unity.Services.Core.Internal.IServiceComponent>
struct Enumerator_tACD4FB2B54A5C2691CB962F194780DD49F8FA1C1 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	int32_t ____currentKey_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977;

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222;

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.ConstructorHandling>
struct Nullable_1_tE866C25CB8A73A44077AAC48B1D406CF034E1496 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateFormatHandling>
struct Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateParseHandling>
struct Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling>
struct Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling>
struct Nullable_1_t4DEE77C12DDAF72BAE2A1FA8A8736FC478D721E8 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling>
struct Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.FloatParseHandling>
struct Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.Formatting>
struct Nullable_1_tAEE2B9C53750E53F9B91B70967290720873E8D3E 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.MetadataPropertyHandling>
struct Nullable_1_t0E2AF35997B80CE423EBCAFDC0C58FB7182CA6FE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.MissingMemberHandling>
struct Nullable_1_t776B72BEFF6E3E2D489C4C6D855C89139D6B4CA4 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.NullValueHandling>
struct Nullable_1_tA1B6210C1924173AEFE9AF8FBDD3BA856E74A790 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling>
struct Nullable_1_t5ECEC9E2B3F1C050A3E9EC928487DD5C9AB0996D 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.PreserveReferencesHandling>
struct Nullable_1_t599FF2F862BEFE0F4B6BDA65B36841F4740B0D12 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling>
struct Nullable_1_t599F8D9D40143BFCB12D7085DFEA8AC7171F5E77 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling>
struct Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.TypeNameAssemblyFormatHandling>
struct Nullable_1_t762E380C63D6C0CB1E8ADBCADE57240FB061367F 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<Newtonsoft.Json.TypeNameHandling>
struct Nullable_1_tB85AB604017196E6A3D3B920121E8C3A255827F0 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>>
struct TaskAwaiter_1_t03489502EBF553A2EE84E314C5C36D6E8F28D504 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t727821A7F4CD62528E4941D3DA8119B6A7A3D4BC* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Telemetry.Internal.IDiagnostics>
struct TaskAwaiter_1_t1A1F7733EB9E664C127E34842037B68E5D063862 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t7E11A949B0612EC938C5CBD9E723725819BC441E* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory>
struct TaskAwaiter_1_tBFA82CA55CD8557D18B6898AF6B0A0A99BD72E51 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t4B1C4BF4F9776B675A807CB47E9EF3EF35A0048A* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<System.String>
struct TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* ___m_task_0;
};

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___m_task_0;
};

// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>>
struct Task_1_t727821A7F4CD62528E4941D3DA8119B6A7A3D4BC  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF* ___m_result_22;
};

// System.Threading.Tasks.Task`1<Unity.Services.Core.Telemetry.Internal.IDiagnostics>
struct Task_1_t7E11A949B0612EC938C5CBD9E723725819BC441E  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;
};

// System.Threading.Tasks.Task`1<Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory>
struct Task_1_t4B1C4BF4F9776B675A807CB47E9EF3EF35A0048A  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;
};

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject* ___m_result_22;
};

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_22;
};

// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9 : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572 {};

// System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF 
{
	// System.Runtime.CompilerServices.IAsyncStateMachine System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_stateMachine
	RuntimeObject* ___m_stateMachine_0;
	// System.Action System.Runtime.CompilerServices.AsyncMethodBuilderCore::m_defaultContextAction
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___m_defaultContextAction_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncMethodBuilderCore
struct AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com
{
	RuntimeObject* ___m_stateMachine_0;
	Il2CppMethodPointer ___m_defaultContextAction_1;
};

// Unity.Services.Core.Internal.AsyncOperationAwaiter
struct AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662 
{
	// Unity.Services.Core.Internal.IAsyncOperation Unity.Services.Core.Internal.AsyncOperationAwaiter::m_Operation
	RuntimeObject* ___m_Operation_0;
};
// Native definition for P/Invoke marshalling of Unity.Services.Core.Internal.AsyncOperationAwaiter
struct AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662_marshaled_pinvoke
{
	RuntimeObject* ___m_Operation_0;
};
// Native definition for COM marshalling of Unity.Services.Core.Internal.AsyncOperationAwaiter
struct AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662_marshaled_com
{
	RuntimeObject* ___m_Operation_0;
};

// Unity.Services.Core.Internal.AsyncOperationBase
struct AsyncOperationBase_t4808DB931A15FAB56C45333DFBB14F8E9BD49124  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// System.Action`1<Unity.Services.Core.Internal.IAsyncOperation> Unity.Services.Core.Internal.AsyncOperationBase::m_CompletedCallback
	Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* ___m_CompletedCallback_0;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::_source
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source_0;
};

// Unity.Services.Wire.Internal.ChannelToken
struct ChannelToken_t65B05271650820AF814458D7AB1C06A16111EE5F 
{
	// System.String Unity.Services.Wire.Internal.ChannelToken::ChannelName
	String_t* ___ChannelName_0;
	// System.String Unity.Services.Wire.Internal.ChannelToken::Token
	String_t* ___Token_1;
};
// Native definition for P/Invoke marshalling of Unity.Services.Wire.Internal.ChannelToken
struct ChannelToken_t65B05271650820AF814458D7AB1C06A16111EE5F_marshaled_pinvoke
{
	char* ___ChannelName_0;
	char* ___Token_1;
};
// Native definition for COM marshalling of Unity.Services.Wire.Internal.ChannelToken
struct ChannelToken_t65B05271650820AF814458D7AB1C06A16111EE5F_marshaled_com
{
	Il2CppChar* ___ChannelName_0;
	Il2CppChar* ___Token_1;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// Unity.Services.Core.Internal.CoreRegistration
struct CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581 
{
	// Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.CoreRegistration::m_Registry
	RuntimeObject* ___m_Registry_0;
	// System.Int32 Unity.Services.Core.Internal.CoreRegistration::m_PackageHash
	int32_t ___m_PackageHash_1;
};
// Native definition for P/Invoke marshalling of Unity.Services.Core.Internal.CoreRegistration
struct CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshaled_pinvoke
{
	RuntimeObject* ___m_Registry_0;
	int32_t ___m_PackageHash_1;
};
// Native definition for COM marshalling of Unity.Services.Core.Internal.CoreRegistration
struct CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshaled_com
{
	RuntimeObject* ___m_Registry_0;
	int32_t ___m_PackageHash_1;
};

// Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter
struct DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3 
{
	// Unity.Services.Core.Internal.DependencyTree Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::Tree
	DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___Tree_0;
	// System.Collections.Generic.ICollection`1<System.Int32> Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::Target
	RuntimeObject* ___Target_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark> Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::m_PackageTypeHashExplorationHistory
	Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0* ___m_PackageTypeHashExplorationHistory_2;
};
// Native definition for P/Invoke marshalling of Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter
struct DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3_marshaled_pinvoke
{
	DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___Tree_0;
	RuntimeObject* ___Target_1;
	Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0* ___m_PackageTypeHashExplorationHistory_2;
};
// Native definition for COM marshalling of Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter
struct DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3_marshaled_com
{
	DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___Tree_0;
	RuntimeObject* ___Target_1;
	Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0* ___m_PackageTypeHashExplorationHistory_2;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Unity.Services.Core.Networking.Internal.HttpOptions
struct HttpOptions_t566285DF5CA5FF035FA85E6956C36168AD8FE2AC 
{
	// System.Int32 Unity.Services.Core.Networking.Internal.HttpOptions::RequestTimeoutInSeconds
	int32_t ___RequestTimeoutInSeconds_0;
	// System.Int32 Unity.Services.Core.Networking.Internal.HttpOptions::RedirectLimit
	int32_t ___RedirectLimit_1;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// Newtonsoft.Json.Linq.JContainer
struct JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A  : public JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3
{
	// System.ComponentModel.ListChangedEventHandler Newtonsoft.Json.Linq.JContainer::_listChanged
	ListChangedEventHandler_tDBF36F3E2C6B7538106878E1D5A7553C5EA77616* ____listChanged_15;
	// System.ComponentModel.AddingNewEventHandler Newtonsoft.Json.Linq.JContainer::_addingNew
	AddingNewEventHandler_tD9BAC60F604446ED14967643F63A83CE2A5C3701* ____addingNew_16;
	// System.Collections.Specialized.NotifyCollectionChangedEventHandler Newtonsoft.Json.Linq.JContainer::_collectionChanged
	NotifyCollectionChangedEventHandler_t521FADBD1190F88022BC2160A5F82FDFC08364AF* ____collectionChanged_17;
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	RuntimeObject* ____syncRoot_18;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_19;
};

// Unity.Services.Qos.Internal.QosResult
struct QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27 
{
	// System.String Unity.Services.Qos.Internal.QosResult::Region
	String_t* ___Region_0;
	// System.Int32 Unity.Services.Qos.Internal.QosResult::AverageLatencyMs
	int32_t ___AverageLatencyMs_1;
	// System.Single Unity.Services.Qos.Internal.QosResult::PacketLossPercent
	float ___PacketLossPercent_2;
};
// Native definition for P/Invoke marshalling of Unity.Services.Qos.Internal.QosResult
struct QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27_marshaled_pinvoke
{
	char* ___Region_0;
	int32_t ___AverageLatencyMs_1;
	float ___PacketLossPercent_2;
};
// Native definition for COM marshalling of Unity.Services.Qos.Internal.QosResult
struct QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27_marshaled_com
{
	Il2CppChar* ___Region_0;
	int32_t ___AverageLatencyMs_1;
	float ___PacketLossPercent_2;
};

// Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest
struct ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560 
{
	// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest::m_Request
	HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* ___m_Request_0;
};
// Native definition for P/Invoke marshalling of Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest
struct ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560_marshaled_pinvoke
{
	HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* ___m_Request_0;
};
// Native definition for COM marshalling of Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest
struct ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560_marshaled_com
{
	HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* ___m_Request_0;
};

// Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse
struct ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9 
{
	// Unity.Services.Core.Networking.Internal.HttpResponse Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::m_Response
	HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* ___m_Response_0;
};
// Native definition for P/Invoke marshalling of Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse
struct ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9_marshaled_pinvoke
{
	HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* ___m_Response_0;
};
// Native definition for COM marshalling of Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse
struct ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9_marshaled_com
{
	HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* ___m_Response_0;
};

// System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 
{
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject* ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t56760522A751890146EE45F82F866B55B7E33677_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 
{
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.TaskAwaiter::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_pinvoke
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.TaskAwaiter
struct TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_marshaled_com
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>>
struct AsyncTaskMethodBuilder_1_t48F43EEBD362A47F5627122EA5697AD97B922620 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t727821A7F4CD62528E4941D3DA8119B6A7A3D4BC* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Telemetry.Internal.IDiagnostics>
struct AsyncTaskMethodBuilder_1_tAC33E355F01002DF8E0EFE1A1A42BE37728E8ABA 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_t7E11A949B0612EC938C5CBD9E723725819BC441E* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___m_task_2;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4 
{
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::m_task
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___m_task_2;
};

// System.Nullable`1<System.Runtime.Serialization.StreamingContext>
struct Nullable_1_tC3E8E254B9DCF808C08AFA1FC2151C2BC0040F3A 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___value_1;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D 
{
	// System.Threading.SynchronizationContext System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_synchronizationContext
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	// System.Runtime.CompilerServices.AsyncMethodBuilderCore System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_coreState
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF ___m_coreState_1;
	// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncVoidMethodBuilder::m_task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_pinvoke
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_pinvoke ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncVoidMethodBuilder
struct AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D_marshaled_com
{
	SynchronizationContext_tCDB842BBE53B050802CBBB59C6E6DC45B5B06DC0* ___m_synchronizationContext_0;
	AsyncMethodBuilderCore_tD5ABB3A2536319A3345B32A5481E37E23DD8CEDF_marshaled_com ___m_coreState_1;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_task_2;
};

// UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.CertificateHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.CertificateHandler
struct CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.DownloadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.DownloadHandler
struct DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// Unity.Services.Core.Networking.Internal.HttpRequest
struct HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03  : public RuntimeObject
{
	// System.String Unity.Services.Core.Networking.Internal.HttpRequest::Method
	String_t* ___Method_0;
	// System.String Unity.Services.Core.Networking.Internal.HttpRequest::Url
	String_t* ___Url_1;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Core.Networking.Internal.HttpRequest::Headers
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___Headers_2;
	// System.Byte[] Unity.Services.Core.Networking.Internal.HttpRequest::Body
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Body_3;
	// Unity.Services.Core.Networking.Internal.HttpOptions Unity.Services.Core.Networking.Internal.HttpRequest::Options
	HttpOptions_t566285DF5CA5FF035FA85E6956C36168AD8FE2AC ___Options_4;
};

// Unity.Services.Core.Networking.Internal.HttpResponse
struct HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59  : public RuntimeObject
{
	// Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest Unity.Services.Core.Networking.Internal.HttpResponse::Request
	ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560 ___Request_0;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> Unity.Services.Core.Networking.Internal.HttpResponse::Headers
	Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___Headers_1;
	// System.Byte[] Unity.Services.Core.Networking.Internal.HttpResponse::Data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Data_2;
	// System.Int64 Unity.Services.Core.Networking.Internal.HttpResponse::StatusCode
	int64_t ___StatusCode_3;
	// System.String Unity.Services.Core.Networking.Internal.HttpResponse::ErrorMessage
	String_t* ___ErrorMessage_4;
	// System.Boolean Unity.Services.Core.Networking.Internal.HttpResponse::IsHttpError
	bool ___IsHttpError_5;
	// System.Boolean Unity.Services.Core.Networking.Internal.HttpResponse::IsNetworkError
	bool ___IsNetworkError_6;
};

// Newtonsoft.Json.Linq.JArray
struct JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8  : public JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A
{
	// System.Collections.Generic.List`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JArray::_values
	List_1_t58901670B7FA44803364AA3059A3F981A991011A* ____values_20;
};

// Newtonsoft.Json.Linq.JObject
struct JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1  : public JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A
{
	// Newtonsoft.Json.Linq.JPropertyKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t4A44691A9942B8A7AEB4016F7405BF388D1E0632* ____properties_20;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_tF1250C146BE6FB43477D29C5D18A10B6329419DA* ___PropertyChanged_21;
	// System.ComponentModel.PropertyChangingEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanging
	PropertyChangingEventHandler_tF293724DEA588C35A7E94C4F4413AEE6438FE9CD* ___PropertyChanging_22;
};

// Newtonsoft.Json.Linq.JProperty
struct JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4  : public JContainer_tFD3E2CD9B9D8D3CD73133B11A1F6BE77C5C8F95A
{
	// Newtonsoft.Json.Linq.JProperty/JPropertyList Newtonsoft.Json.Linq.JProperty::_content
	JPropertyList_t53D97F8AB016B10A00D616C620766D38449D8C98* ____content_20;
	// System.String Newtonsoft.Json.Linq.JProperty::_name
	String_t* ____name_21;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Unity.Services.Core.Internal.TaskAsyncOperation
struct TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128  : public AsyncOperationBase_t4808DB931A15FAB56C45333DFBB14F8E9BD49124
{
	// System.Threading.Tasks.Task Unity.Services.Core.Internal.TaskAsyncOperation::m_Task
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_Task_2;
};

// UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UploadHandler::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Networking.UploadHandler
struct UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.AggregateException
struct AggregateException_t51B6205846DFB356B94452702201DD239D44422F  : public Exception_t
{
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::m_innerExceptions
	ReadOnlyCollection_1_t0A3EEA206F04C2F9E8303E24D863C2E7FD258886* ___m_innerExceptions_18;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 
{
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::m_builder
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for P/Invoke marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_pinvoke
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};
// Native definition for COM marshalling of System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_marshaled_com
{
	AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC ___m_builder_1;
};

// Unity.Services.Core.Internal.DependencyTreeSortFailedException
struct DependencyTreeSortFailedException_t039BF64DBDDFEB16DD187FE600445BF53C88A918  : public Exception_t
{
};

// Unity.Services.Core.Internal.HashException
struct HashException_tFB110FD771A95A93E65290AC3969485D400E8855  : public Exception_t
{
	// System.Int32 Unity.Services.Core.Internal.HashException::<Hash>k__BackingField
	int32_t ___U3CHashU3Ek__BackingField_18;
};

// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF  : public RuntimeObject
{
	// System.Nullable`1<Newtonsoft.Json.Formatting> Newtonsoft.Json.JsonSerializerSettings::_formatting
	Nullable_1_tAEE2B9C53750E53F9B91B70967290720873E8D3E ____formatting_22;
	// System.Nullable`1<Newtonsoft.Json.DateFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_dateFormatHandling
	Nullable_1_t4776B8A4D0D52AA8BDCD45E6D7070659326453D2 ____dateFormatHandling_23;
	// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling> Newtonsoft.Json.JsonSerializerSettings::_dateTimeZoneHandling
	Nullable_1_tD88F7E37B65824D38D74608E576D1265E5A2D2B2 ____dateTimeZoneHandling_24;
	// System.Nullable`1<Newtonsoft.Json.DateParseHandling> Newtonsoft.Json.JsonSerializerSettings::_dateParseHandling
	Nullable_1_tDC640D18A54CA8F0A3C74518CBC15D439C8FC228 ____dateParseHandling_25;
	// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_floatFormatHandling
	Nullable_1_tEAE8D5B59DCEB4F809A8A5F390EAAC18F266B822 ____floatFormatHandling_26;
	// System.Nullable`1<Newtonsoft.Json.FloatParseHandling> Newtonsoft.Json.JsonSerializerSettings::_floatParseHandling
	Nullable_1_tC13211A32645AE3863530378A08BC45089EE419B ____floatParseHandling_27;
	// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling> Newtonsoft.Json.JsonSerializerSettings::_stringEscapeHandling
	Nullable_1_t61214A44C233A0B00A9F79E380485D79D5FAA7C6 ____stringEscapeHandling_28;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializerSettings::_culture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ____culture_29;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonSerializerSettings::_checkAdditionalContent
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ____checkAdditionalContent_30;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonSerializerSettings::_maxDepth
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ____maxDepth_31;
	// System.Boolean Newtonsoft.Json.JsonSerializerSettings::_maxDepthSet
	bool ____maxDepthSet_32;
	// System.String Newtonsoft.Json.JsonSerializerSettings::_dateFormatString
	String_t* ____dateFormatString_33;
	// System.Boolean Newtonsoft.Json.JsonSerializerSettings::_dateFormatStringSet
	bool ____dateFormatStringSet_34;
	// System.Nullable`1<Newtonsoft.Json.TypeNameAssemblyFormatHandling> Newtonsoft.Json.JsonSerializerSettings::_typeNameAssemblyFormatHandling
	Nullable_1_t762E380C63D6C0CB1E8ADBCADE57240FB061367F ____typeNameAssemblyFormatHandling_35;
	// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling> Newtonsoft.Json.JsonSerializerSettings::_defaultValueHandling
	Nullable_1_t4DEE77C12DDAF72BAE2A1FA8A8736FC478D721E8 ____defaultValueHandling_36;
	// System.Nullable`1<Newtonsoft.Json.PreserveReferencesHandling> Newtonsoft.Json.JsonSerializerSettings::_preserveReferencesHandling
	Nullable_1_t599FF2F862BEFE0F4B6BDA65B36841F4740B0D12 ____preserveReferencesHandling_37;
	// System.Nullable`1<Newtonsoft.Json.NullValueHandling> Newtonsoft.Json.JsonSerializerSettings::_nullValueHandling
	Nullable_1_tA1B6210C1924173AEFE9AF8FBDD3BA856E74A790 ____nullValueHandling_38;
	// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling> Newtonsoft.Json.JsonSerializerSettings::_objectCreationHandling
	Nullable_1_t5ECEC9E2B3F1C050A3E9EC928487DD5C9AB0996D ____objectCreationHandling_39;
	// System.Nullable`1<Newtonsoft.Json.MissingMemberHandling> Newtonsoft.Json.JsonSerializerSettings::_missingMemberHandling
	Nullable_1_t776B72BEFF6E3E2D489C4C6D855C89139D6B4CA4 ____missingMemberHandling_40;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.JsonSerializerSettings::_referenceLoopHandling
	Nullable_1_t599F8D9D40143BFCB12D7085DFEA8AC7171F5E77 ____referenceLoopHandling_41;
	// System.Nullable`1<System.Runtime.Serialization.StreamingContext> Newtonsoft.Json.JsonSerializerSettings::_context
	Nullable_1_tC3E8E254B9DCF808C08AFA1FC2151C2BC0040F3A ____context_42;
	// System.Nullable`1<Newtonsoft.Json.ConstructorHandling> Newtonsoft.Json.JsonSerializerSettings::_constructorHandling
	Nullable_1_tE866C25CB8A73A44077AAC48B1D406CF034E1496 ____constructorHandling_43;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.JsonSerializerSettings::_typeNameHandling
	Nullable_1_tB85AB604017196E6A3D3B920121E8C3A255827F0 ____typeNameHandling_44;
	// System.Nullable`1<Newtonsoft.Json.MetadataPropertyHandling> Newtonsoft.Json.JsonSerializerSettings::_metadataPropertyHandling
	Nullable_1_t0E2AF35997B80CE423EBCAFDC0C58FB7182CA6FE ____metadataPropertyHandling_45;
	// System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter> Newtonsoft.Json.JsonSerializerSettings::<Converters>k__BackingField
	RuntimeObject* ___U3CConvertersU3Ek__BackingField_46;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializerSettings::<ContractResolver>k__BackingField
	RuntimeObject* ___U3CContractResolverU3Ek__BackingField_47;
	// System.Collections.IEqualityComparer Newtonsoft.Json.JsonSerializerSettings::<EqualityComparer>k__BackingField
	RuntimeObject* ___U3CEqualityComparerU3Ek__BackingField_48;
	// System.Func`1<Newtonsoft.Json.Serialization.IReferenceResolver> Newtonsoft.Json.JsonSerializerSettings::<ReferenceResolverProvider>k__BackingField
	Func_1_t78E8B13F3C7D6CC3EB821B4F5D26999D062417E2* ___U3CReferenceResolverProviderU3Ek__BackingField_49;
	// Newtonsoft.Json.Serialization.ITraceWriter Newtonsoft.Json.JsonSerializerSettings::<TraceWriter>k__BackingField
	RuntimeObject* ___U3CTraceWriterU3Ek__BackingField_50;
	// Newtonsoft.Json.Serialization.ISerializationBinder Newtonsoft.Json.JsonSerializerSettings::<SerializationBinder>k__BackingField
	RuntimeObject* ___U3CSerializationBinderU3Ek__BackingField_51;
	// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializerSettings::<Error>k__BackingField
	EventHandler_1_t69462DFC2F2C8D7576BEE9D1F5BB6C2E55B2C380* ___U3CErrorU3Ek__BackingField_52;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Unity.Services.Core.ServicesInitializationException
struct ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631  : public Exception_t
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

// UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Networking.UnityWebRequest::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::m_DownloadHandler
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* ___m_DownloadHandler_1;
	// UnityEngine.Networking.UploadHandler UnityEngine.Networking.UnityWebRequest::m_UploadHandler
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6* ___m_UploadHandler_2;
	// UnityEngine.Networking.CertificateHandler UnityEngine.Networking.UnityWebRequest::m_CertificateHandler
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804* ___m_CertificateHandler_3;
	// System.Uri UnityEngine.Networking.UnityWebRequest::m_Uri
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeCertificateHandlerOnDispose>k__BackingField
	bool ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeDownloadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	// System.Boolean UnityEngine.Networking.UnityWebRequest::<disposeUploadHandlerOnDispose>k__BackingField
	bool ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_pinvoke ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_pinvoke ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_pinvoke ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequest
struct UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com
{
	intptr_t ___m_Ptr_0;
	DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB_marshaled_com* ___m_DownloadHandler_1;
	UploadHandler_t7E504B1A83346248A0C8C4AF73A893226CB83EF6_marshaled_com* ___m_UploadHandler_2;
	CertificateHandler_t148B524FA5DB39F3ABADB181CD420FC505C33804_marshaled_com* ___m_CertificateHandler_3;
	Uri_t1500A52B5F71A04F5D05C0852D0F2A0941842A0E* ___m_Uri_4;
	int32_t ___U3CdisposeCertificateHandlerOnDisposeU3Ek__BackingField_5;
	int32_t ___U3CdisposeDownloadHandlerOnDisposeU3Ek__BackingField_6;
	int32_t ___U3CdisposeUploadHandlerOnDisposeU3Ek__BackingField_7;
};

// UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C  : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C
{
	// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::<webRequest>k__BackingField
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_pinvoke : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_pinvoke* ___U3CwebRequestU3Ek__BackingField_2;
};
// Native definition for COM marshalling of UnityEngine.Networking.UnityWebRequestAsyncOperation
struct UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_marshaled_com : public AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com
{
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F_marshaled_com* ___U3CwebRequestU3Ek__BackingField_2;
};

// Unity.Services.Core.Internal.CoreDiagnostics/<GetOrCreateDiagnosticsAsync>d__26
struct U3CGetOrCreateDiagnosticsAsyncU3Ed__26_tAB11C3722F9B7391AAF98FE98D8F1770EBA1E4E5  : public RuntimeObject
{
	// System.Int32 Unity.Services.Core.Internal.CoreDiagnostics/<GetOrCreateDiagnosticsAsync>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Telemetry.Internal.IDiagnostics> Unity.Services.Core.Internal.CoreDiagnostics/<GetOrCreateDiagnosticsAsync>d__26::<>t__builder
	AsyncTaskMethodBuilder_1_tAC33E355F01002DF8E0EFE1A1A42BE37728E8ABA ___U3CU3Et__builder_1;
	// Unity.Services.Core.Internal.CoreDiagnostics Unity.Services.Core.Internal.CoreDiagnostics/<GetOrCreateDiagnosticsAsync>d__26::<>4__this
	CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* ___U3CU3E4__this_2;
	// Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory Unity.Services.Core.Internal.CoreDiagnostics/<GetOrCreateDiagnosticsAsync>d__26::<diagnosticFactory>5__1
	RuntimeObject* ___U3CdiagnosticFactoryU3E5__1_3;
	// Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory Unity.Services.Core.Internal.CoreDiagnostics/<GetOrCreateDiagnosticsAsync>d__26::<>s__2
	RuntimeObject* ___U3CU3Es__2_4;
	// System.String Unity.Services.Core.Internal.CoreDiagnostics/<GetOrCreateDiagnosticsAsync>d__26::<>s__3
	String_t* ___U3CU3Es__3_5;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory> Unity.Services.Core.Internal.CoreDiagnostics/<GetOrCreateDiagnosticsAsync>d__26::<>u__1
	TaskAwaiter_1_tBFA82CA55CD8557D18B6898AF6B0A0A99BD72E51 ___U3CU3Eu__1_6;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.String> Unity.Services.Core.Internal.CoreDiagnostics/<GetOrCreateDiagnosticsAsync>d__26::<>u__2
	TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 ___U3CU3Eu__2_7;
};

// Unity.Services.Core.Internal.CoreRegistryInitializer/<InitializeRegistryAsync>d__3
struct U3CInitializeRegistryAsyncU3Ed__3_t667C2D1D53EB98537AA50BACFCBD9127A01D3CC5  : public RuntimeObject
{
	// System.Int32 Unity.Services.Core.Internal.CoreRegistryInitializer/<InitializeRegistryAsync>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>> Unity.Services.Core.Internal.CoreRegistryInitializer/<InitializeRegistryAsync>d__3::<>t__builder
	AsyncTaskMethodBuilder_1_t48F43EEBD362A47F5627122EA5697AD97B922620 ___U3CU3Et__builder_1;
	// Unity.Services.Core.Internal.CoreRegistryInitializer Unity.Services.Core.Internal.CoreRegistryInitializer/<InitializeRegistryAsync>d__3::<>4__this
	CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03* ___U3CU3E4__this_2;
	// Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0 Unity.Services.Core.Internal.CoreRegistryInitializer/<InitializeRegistryAsync>d__3::<>8__1
	U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0* ___U3CU3E8__1_3;
	// System.NullReferenceException Unity.Services.Core.Internal.CoreRegistryInitializer/<InitializeRegistryAsync>d__3::<inner>5__2
	NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* ___U3CinnerU3E5__2_4;
	// System.Int32 Unity.Services.Core.Internal.CoreRegistryInitializer/<InitializeRegistryAsync>d__3::<i>5__3
	int32_t ___U3CiU3E5__3_5;
	// Unity.Services.Core.Internal.IInitializablePackage Unity.Services.Core.Internal.CoreRegistryInitializer/<InitializeRegistryAsync>d__3::<package>5__4
	RuntimeObject* ___U3CpackageU3E5__4_6;
	// System.Runtime.CompilerServices.TaskAwaiter Unity.Services.Core.Internal.CoreRegistryInitializer/<InitializeRegistryAsync>d__3::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_7;
};

// Unity.Services.Core.Internal.UnityServicesInitializer/<EnableServicesInitializationAsync>d__1
struct U3CEnableServicesInitializationAsyncU3Ed__1_tAC20D219AB4876F92E378792660AF104511FA482  : public RuntimeObject
{
	// System.Int32 Unity.Services.Core.Internal.UnityServicesInitializer/<EnableServicesInitializationAsync>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncVoidMethodBuilder Unity.Services.Core.Internal.UnityServicesInitializer/<EnableServicesInitializationAsync>d__1::<>t__builder
	AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D ___U3CU3Et__builder_1;
	// Unity.Services.Core.Internal.UnityServicesInternal Unity.Services.Core.Internal.UnityServicesInitializer/<EnableServicesInitializationAsync>d__1::<instance>5__1
	UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* ___U3CinstanceU3E5__1_2;
	// System.Runtime.CompilerServices.TaskAwaiter Unity.Services.Core.Internal.UnityServicesInitializer/<EnableServicesInitializationAsync>d__1::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0/<<InitializeServicesAsync>g__InitializePackagesAsync|1>d
struct U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_t7D84CF2A9502FB46D141D018B52A52227F7FABD6  : public RuntimeObject
{
	// System.Int32 Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0/<<InitializeServicesAsync>g__InitializePackagesAsync|1>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>> Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0/<<InitializeServicesAsync>g__InitializePackagesAsync|1>d::<>t__builder
	AsyncTaskMethodBuilder_1_t48F43EEBD362A47F5627122EA5697AD97B922620 ___U3CU3Et__builder_1;
	// Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0 Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0/<<InitializeServicesAsync>g__InitializePackagesAsync|1>d::<>4__this
	U3CU3Ec__DisplayClass22_0_tF8E2FFAF15B36CA0EEFCE72345468844F8E9AD2C* ___U3CU3E4__this_2;
	// Unity.Services.Core.Internal.CoreRegistryInitializer Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0/<<InitializeServicesAsync>g__InitializePackagesAsync|1>d::<initializer>5__1
	CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03* ___U3CinitializerU3E5__1_3;
	// System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo> Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0/<<InitializeServicesAsync>g__InitializePackagesAsync|1>d::<>s__2
	List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF* ___U3CU3Es__2_4;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>> Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0/<<InitializeServicesAsync>g__InitializePackagesAsync|1>d::<>u__1
	TaskAwaiter_1_t03489502EBF553A2EE84E314C5C36D6E8F28D504 ___U3CU3Eu__1_5;
};

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.Services.Core.Internal.IAsyncOperation>
struct Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50  : public MulticastDelegate_t
{
};

// System.Action`1<System.Threading.Tasks.Task>
struct Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};

// System.Action`2<System.Threading.Tasks.Task,System.Object>
struct Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB  : public MulticastDelegate_t
{
};

// System.Func`1<Newtonsoft.Json.JsonSerializerSettings>
struct Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// Unity.Services.Core.Internal.CircularDependencyException
struct CircularDependencyException_t1447C8D464045989784E78E658EFE30FF95153FC  : public ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631
{
};

// Unity.Services.Core.Internal.DependencyTreeComponentHashException
struct DependencyTreeComponentHashException_t809B7EBA8BA1E4166E6F1FCCC21DA94BD7E0765A  : public HashException_tFB110FD771A95A93E65290AC3969485D400E8855
{
};

// Unity.Services.Core.Internal.DependencyTreePackageHashException
struct DependencyTreePackageHashException_tEAE1BAE41D7E329841F3270A8E6491FBDB7CB547  : public HashException_tFB110FD771A95A93E65290AC3969485D400E8855
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.NullReferenceException
struct NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.OperationCanceledException
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.Threading.CancellationToken System.OperationCanceledException::_cancellationToken
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ____cancellationToken_18;
};

// Unity.Services.Core.Internal.CoreDiagnostics/<SendCoreDiagnosticsAsync>d__24
struct U3CSendCoreDiagnosticsAsyncU3Ed__24_tBD54EAE1168C81C1F5B4169A57653E2519682602  : public RuntimeObject
{
	// System.Int32 Unity.Services.Core.Internal.CoreDiagnostics/<SendCoreDiagnosticsAsync>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Unity.Services.Core.Internal.CoreDiagnostics/<SendCoreDiagnosticsAsync>d__24::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// System.String Unity.Services.Core.Internal.CoreDiagnostics/<SendCoreDiagnosticsAsync>d__24::diagnosticName
	String_t* ___diagnosticName_2;
	// System.Exception Unity.Services.Core.Internal.CoreDiagnostics/<SendCoreDiagnosticsAsync>d__24::exception
	Exception_t* ___exception_3;
	// Unity.Services.Core.Internal.CoreDiagnostics Unity.Services.Core.Internal.CoreDiagnostics/<SendCoreDiagnosticsAsync>d__24::<>4__this
	CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* ___U3CU3E4__this_4;
	// Unity.Services.Core.Telemetry.Internal.IDiagnostics Unity.Services.Core.Internal.CoreDiagnostics/<SendCoreDiagnosticsAsync>d__24::<diagnostics>5__1
	RuntimeObject* ___U3CdiagnosticsU3E5__1_5;
	// Unity.Services.Core.Telemetry.Internal.IDiagnostics Unity.Services.Core.Internal.CoreDiagnostics/<SendCoreDiagnosticsAsync>d__24::<>s__2
	RuntimeObject* ___U3CU3Es__2_6;
	// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Telemetry.Internal.IDiagnostics> Unity.Services.Core.Internal.CoreDiagnostics/<SendCoreDiagnosticsAsync>d__24::<>u__1
	TaskAwaiter_1_t1A1F7733EB9E664C127E34842037B68E5D063862 ___U3CU3Eu__1_7;
};

// Unity.Services.Core.Internal.UnityServicesInternal/<EnableInitializationAsync>d__24
struct U3CEnableInitializationAsyncU3Ed__24_t4DF9B311AF91CDF203824EA1DD5CEAAC52ABA88C  : public RuntimeObject
{
	// System.Int32 Unity.Services.Core.Internal.UnityServicesInternal/<EnableInitializationAsync>d__24::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Unity.Services.Core.Internal.UnityServicesInternal/<EnableInitializationAsync>d__24::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// Unity.Services.Core.Internal.UnityServicesInternal Unity.Services.Core.Internal.UnityServicesInternal/<EnableInitializationAsync>d__24::<>4__this
	UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* ___U3CU3E4__this_2;
	// System.Runtime.CompilerServices.TaskAwaiter Unity.Services.Core.Internal.UnityServicesInternal/<EnableInitializationAsync>d__24::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_3;
};

// Unity.Services.Core.Internal.UnityServicesInternal/<InitializeAsync>d__20
struct U3CInitializeAsyncU3Ed__20_t8926D76B0A6C9F3E94911702F6B452F1AE90A1B9  : public RuntimeObject
{
	// System.Int32 Unity.Services.Core.Internal.UnityServicesInternal/<InitializeAsync>d__20::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Unity.Services.Core.Internal.UnityServicesInternal/<InitializeAsync>d__20::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// Unity.Services.Core.InitializationOptions Unity.Services.Core.Internal.UnityServicesInternal/<InitializeAsync>d__20::options
	InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* ___options_2;
	// Unity.Services.Core.Internal.UnityServicesInternal Unity.Services.Core.Internal.UnityServicesInternal/<InitializeAsync>d__20::<>4__this
	UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* ___U3CU3E4__this_3;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object> Unity.Services.Core.Internal.UnityServicesInternal/<InitializeAsync>d__20::<>u__1
	TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA ___U3CU3Eu__1_4;
	// System.Runtime.CompilerServices.TaskAwaiter Unity.Services.Core.Internal.UnityServicesInternal/<InitializeAsync>d__20::<>u__2
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__2_5;
};

// Unity.Services.Core.Internal.UnityServicesInternal/<InitializeServicesAsync>d__22
struct U3CInitializeServicesAsyncU3Ed__22_tE6E881564EFD3F20C6FB3EF0B94D4F2BD1F65CD9  : public RuntimeObject
{
	// System.Int32 Unity.Services.Core.Internal.UnityServicesInternal/<InitializeServicesAsync>d__22::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Unity.Services.Core.Internal.UnityServicesInternal/<InitializeServicesAsync>d__22::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// Unity.Services.Core.Internal.UnityServicesInternal Unity.Services.Core.Internal.UnityServicesInternal/<InitializeServicesAsync>d__22::<>4__this
	UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* ___U3CU3E4__this_2;
	// Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0 Unity.Services.Core.Internal.UnityServicesInternal/<InitializeServicesAsync>d__22::<>8__1
	U3CU3Ec__DisplayClass22_0_tF8E2FFAF15B36CA0EEFCE72345468844F8E9AD2C* ___U3CU3E8__1_3;
	// System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo> Unity.Services.Core.Internal.UnityServicesInternal/<InitializeServicesAsync>d__22::<packageInitInfos>5__2
	List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF* ___U3CpackageInitInfosU3E5__2_4;
	// System.NullReferenceException Unity.Services.Core.Internal.UnityServicesInternal/<InitializeServicesAsync>d__22::<reason>5__3
	NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* ___U3CreasonU3E5__3_5;
	// System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo> Unity.Services.Core.Internal.UnityServicesInternal/<InitializeServicesAsync>d__22::<>s__4
	List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF* ___U3CU3Es__4_6;
	// System.Exception Unity.Services.Core.Internal.UnityServicesInternal/<InitializeServicesAsync>d__22::<reason>5__5
	Exception_t* ___U3CreasonU3E5__5_7;
	// System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>> Unity.Services.Core.Internal.UnityServicesInternal/<InitializeServicesAsync>d__22::<>u__1
	TaskAwaiter_1_t03489502EBF553A2EE84E314C5C36D6E8F28D504 ___U3CU3Eu__1_8;
};

// Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0/<<InitializeRegistryAsync>g__TryInitializePackageAsync|0>d
struct U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_tEDBE32E965E3D0139E956FC4872AE411630D672C  : public RuntimeObject
{
	// System.Int32 Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0/<<InitializeRegistryAsync>g__TryInitializePackageAsync|0>d::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Runtime.CompilerServices.AsyncTaskMethodBuilder Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0/<<InitializeRegistryAsync>g__TryInitializePackageAsync|0>d::<>t__builder
	AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 ___U3CU3Et__builder_1;
	// Unity.Services.Core.Internal.IInitializablePackage Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0/<<InitializeRegistryAsync>g__TryInitializePackageAsync|0>d::package
	RuntimeObject* ___package_2;
	// Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0 Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0/<<InitializeRegistryAsync>g__TryInitializePackageAsync|0>d::<>4__this
	U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0* ___U3CU3E4__this_3;
	// Unity.Services.Core.Internal.PackageInitializationInfo Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0/<<InitializeRegistryAsync>g__TryInitializePackageAsync|0>d::<initializationInfo>5__1
	PackageInitializationInfo_t3A1BAF9D785E161A9856F3C5769D513C65E49563* ___U3CinitializationInfoU3E5__1_4;
	// System.Exception Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0/<<InitializeRegistryAsync>g__TryInitializePackageAsync|0>d::<e>5__2
	Exception_t* ___U3CeU3E5__2_5;
	// System.Runtime.CompilerServices.TaskAwaiter Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0/<<InitializeRegistryAsync>g__TryInitializePackageAsync|0>d::<>u__1
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 ___U3CU3Eu__1_6;
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// <Module>

// <Module>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>

// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>

// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>

// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>

// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>

// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark>

// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.Dictionary`2<System.String,System.String>

// System.Collections.Generic.Dictionary`2<System.Type,Unity.Services.Core.Telemetry.Internal.IMetrics>

// System.Collections.Generic.Dictionary`2<System.Type,Unity.Services.Core.Telemetry.Internal.IMetrics>

// System.EmptyArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80_StaticFields
{
	// T[] System.EmptyArray`1::Value
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___Value_0;
};

// System.EmptyArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Unity.Services.Core.Internal.IServiceComponent>

// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Unity.Services.Core.Internal.IServiceComponent>

// System.Collections.Generic.List`1<System.Exception>
struct List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ExceptionU5BU5D_t99DA4B29FFBFD40F2C926A32586692D433EF291C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Exception>

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>

// System.Collections.Generic.List`1<Newtonsoft.Json.JsonConverter>
struct List_1_t2D3373CEE35E29CDEB531AF0926BF9553626BFDF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	JsonConverterU5BU5D_tF69203E66D4FCB82A6F64A24EF7785E26E9E957E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Newtonsoft.Json.JsonConverter>

// System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>
struct List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	PackageInitializationInfoU5BU5D_tD4DD8AEAE696BFB9C8EFC787F1750876E8CB301B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>

// System.Threading.Tasks.TaskCompletionSource`1<System.Object>

// System.Threading.Tasks.TaskCompletionSource`1<System.String>

// System.Threading.Tasks.TaskCompletionSource`1<System.String>

// System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<System.Int32>>

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<System.Int32>>

// Unity.Services.Core.Internal.AsyncOperation

// Unity.Services.Core.Internal.AsyncOperation

// Unity.Services.Core.Internal.AsyncOperationExtensions

// Unity.Services.Core.Internal.AsyncOperationExtensions

// Unity.Services.Core.Internal.ComponentRegistry

// Unity.Services.Core.Internal.ComponentRegistry

// Unity.Services.Core.Internal.CoreDiagnostics
struct CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571_StaticFields
{
	// Unity.Services.Core.Internal.CoreDiagnostics Unity.Services.Core.Internal.CoreDiagnostics::<Instance>k__BackingField
	CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* ___U3CInstanceU3Ek__BackingField_5;
};

// Unity.Services.Core.Internal.CoreDiagnostics

// Unity.Services.Core.Internal.CoreLogger

// Unity.Services.Core.Internal.CoreLogger

// Unity.Services.Core.Internal.CoreMetrics
struct CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564_StaticFields
{
	// Unity.Services.Core.Internal.CoreMetrics Unity.Services.Core.Internal.CoreMetrics::<Instance>k__BackingField
	CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* ___U3CInstanceU3Ek__BackingField_7;
};

// Unity.Services.Core.Internal.CoreMetrics

// Unity.Services.Core.Internal.CoreRegistry
struct CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_StaticFields
{
	// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.CoreRegistry::<Instance>k__BackingField
	CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___U3CInstanceU3Ek__BackingField_0;
};

// Unity.Services.Core.Internal.CoreRegistry

// Unity.Services.Core.Internal.CoreRegistryInitializer

// Unity.Services.Core.Internal.CoreRegistryInitializer

// UnityEngine.CustomYieldInstruction

// UnityEngine.CustomYieldInstruction

// UnityEngine.Debug
struct Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticFields
{
	// UnityEngine.ILogger UnityEngine.Debug::s_DefaultLogger
	RuntimeObject* ___s_DefaultLogger_0;
	// UnityEngine.ILogger UnityEngine.Debug::s_Logger
	RuntimeObject* ___s_Logger_1;
};

// UnityEngine.Debug

// Unity.Services.Core.Internal.DependencyTree

// Unity.Services.Core.Internal.DependencyTree

// Unity.Services.Core.Internal.DependencyTreeExtensions

// Unity.Services.Core.Internal.DependencyTreeExtensions

// Unity.Services.Core.Internal.DictionaryExtensions

// Unity.Services.Core.Internal.DictionaryExtensions

// Unity.Services.Core.Networking.Internal.HttpRequestExtensions

// Unity.Services.Core.Networking.Internal.HttpRequestExtensions

// Unity.Services.Core.InitializationOptions

// Unity.Services.Core.InitializationOptions

// Newtonsoft.Json.Linq.JToken
struct JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3_StaticFields
{
	// Newtonsoft.Json.Linq.JTokenEqualityComparer Newtonsoft.Json.Linq.JToken::_equalityComparer
	JTokenEqualityComparer_t2B7EB6B1D12A8C94152AB2E690CC45F185373C46* ____equalityComparer_0;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BooleanTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___NumberTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BigIntegerTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BigIntegerTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___StringTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___GuidTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___TimeSpanTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___UriTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___CharTypes_12;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___DateTimeTypes_13;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_tDCF677D46AB555A7276A6A1795A099AA73056DA0* ___BytesTypes_14;
};

// Newtonsoft.Json.Linq.JToken

// Newtonsoft.Json.JsonConvert
struct JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_StaticFields
{
	// System.Func`1<Newtonsoft.Json.JsonSerializerSettings> Newtonsoft.Json.JsonConvert::<DefaultSettings>k__BackingField
	Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* ___U3CDefaultSettingsU3Ek__BackingField_0;
	// System.String Newtonsoft.Json.JsonConvert::True
	String_t* ___True_1;
	// System.String Newtonsoft.Json.JsonConvert::False
	String_t* ___False_2;
	// System.String Newtonsoft.Json.JsonConvert::Null
	String_t* ___Null_3;
	// System.String Newtonsoft.Json.JsonConvert::Undefined
	String_t* ___Undefined_4;
	// System.String Newtonsoft.Json.JsonConvert::PositiveInfinity
	String_t* ___PositiveInfinity_5;
	// System.String Newtonsoft.Json.JsonConvert::NegativeInfinity
	String_t* ___NegativeInfinity_6;
	// System.String Newtonsoft.Json.JsonConvert::NaN
	String_t* ___NaN_7;
};

// Newtonsoft.Json.JsonConvert

// Unity.Services.Core.Internal.JsonConvertDefaultSettingsScope

// Unity.Services.Core.Internal.JsonConvertDefaultSettingsScope

// Unity.Services.Core.Internal.LockedComponentRegistry

// Unity.Services.Core.Internal.LockedComponentRegistry

// Unity.Services.Core.Internal.LockedPackageRegistry

// Unity.Services.Core.Internal.LockedPackageRegistry

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// Unity.Services.Core.Internal.MissingComponent

// Unity.Services.Core.Internal.MissingComponent

// Unity.Services.Core.Internal.PackageInitializationInfo

// Unity.Services.Core.Internal.PackageInitializationInfo

// Unity.Services.Core.Internal.PackageRegistry

// Unity.Services.Core.Internal.PackageRegistry

// System.Diagnostics.Stopwatch
struct Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_StaticFields
{
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;
};

// System.Diagnostics.Stopwatch

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_0;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject* ___s_taskCompletionSentinel_8;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_9;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback_11;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties_14;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::<Factory>k__BackingField
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField_15;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::<CompletedTask>k__BackingField
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField_16;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate_17;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback_18;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate_19;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks_20;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject* ___s_activeTasksLock_21;
};

// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask_12;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard_13;
};

// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticFields
{
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::s_defaultTaskScheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___s_defaultTaskScheduler_0;
	// System.Int32 System.Threading.Tasks.TaskScheduler::s_taskSchedulerIdCounter
	int32_t ___s_taskSchedulerIdCounter_1;
	// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs> System.Threading.Tasks.TaskScheduler::_unobservedTaskException
	EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A* ____unobservedTaskException_3;
	// System.Threading.Lock System.Threading.Tasks.TaskScheduler::_unobservedTaskExceptionLockObject
	Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7* ____unobservedTaskExceptionLockObject_4;
};

// System.Threading.Tasks.TaskScheduler

// Unity.Services.Core.UnityServices
struct UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields
{
	// Unity.Services.Core.IUnityServices Unity.Services.Core.UnityServices::<Instance>k__BackingField
	RuntimeObject* ___U3CInstanceU3Ek__BackingField_0;
	// System.Threading.Tasks.TaskCompletionSource`1<System.Object> Unity.Services.Core.UnityServices::<InstantiationCompletion>k__BackingField
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* ___U3CInstantiationCompletionU3Ek__BackingField_1;
	// Unity.Services.Core.ExternalUserIdProperty Unity.Services.Core.UnityServices::ExternalUserIdProperty
	ExternalUserIdProperty_t8B820D8AF448EA2F129B1FFD7D4FD1FD840606E9* ___ExternalUserIdProperty_2;
};

// Unity.Services.Core.UnityServices

// Unity.Services.Core.Internal.UnityServicesInitializer

// Unity.Services.Core.Internal.UnityServicesInitializer

// Unity.Services.Core.Internal.UnityServicesInternal

// Unity.Services.Core.Internal.UnityServicesInternal

// Unity.Services.Core.Internal.UnityWebRequestUtils

// Unity.Services.Core.Internal.UnityWebRequestUtils

// System.ValueType

// System.ValueType

// UnityEngine.YieldInstruction

// UnityEngine.YieldInstruction

// Unity.Services.Core.Internal.AsyncOperationAwaiter/<>c__DisplayClass2_0

// Unity.Services.Core.Internal.AsyncOperationAwaiter/<>c__DisplayClass2_0

// Unity.Services.Core.Internal.AsyncOperationAwaiter/<>c__DisplayClass3_0

// Unity.Services.Core.Internal.AsyncOperationAwaiter/<>c__DisplayClass3_0

// Unity.Services.Core.Internal.AsyncOperationBase/<>c__DisplayClass17_0

// Unity.Services.Core.Internal.AsyncOperationBase/<>c__DisplayClass17_0

// Unity.Services.Core.Internal.AsyncOperationExtensions/<>c__DisplayClass1_0

// Unity.Services.Core.Internal.AsyncOperationExtensions/<>c__DisplayClass1_0

// Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0

// Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0

// Unity.Services.Core.Internal.JsonConvertDefaultSettingsScope/<>c__DisplayClass3_0

// Unity.Services.Core.Internal.JsonConvertDefaultSettingsScope/<>c__DisplayClass3_0

// Unity.Services.Core.Internal.TaskAsyncOperation/<>c
struct U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_StaticFields
{
	// Unity.Services.Core.Internal.TaskAsyncOperation/<>c Unity.Services.Core.Internal.TaskAsyncOperation/<>c::<>9
	U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2* ___U3CU3E9_0;
	// System.Action`2<System.Threading.Tasks.Task,System.Object> Unity.Services.Core.Internal.TaskAsyncOperation/<>c::<>9__10_0
	Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* ___U3CU3E9__10_0_1;
};

// Unity.Services.Core.Internal.TaskAsyncOperation/<>c

// Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0

// Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0

// Unity.Services.Core.Internal.UnityWebRequestUtils/<>c__DisplayClass2_0

// Unity.Services.Core.Internal.UnityWebRequestUtils/<>c__DisplayClass2_0

// System.Collections.Generic.List`1/Enumerator<System.Int32>

// System.Collections.Generic.List`1/Enumerator<System.Int32>

// System.Collections.Generic.List`1/Enumerator<Unity.Services.Core.Internal.PackageInitializationInfo>

// System.Collections.Generic.List`1/Enumerator<Unity.Services.Core.Internal.PackageInitializationInfo>

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Collections.Generic.List`1<System.Int32>>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Collections.Generic.List`1<System.Int32>>

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,Unity.Services.Core.Internal.IServiceComponent>

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,Unity.Services.Core.Internal.IServiceComponent>

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Nullable`1<System.Boolean>

// System.Nullable`1<System.Boolean>

// System.Nullable`1<Newtonsoft.Json.ConstructorHandling>

// System.Nullable`1<Newtonsoft.Json.ConstructorHandling>

// System.Nullable`1<Newtonsoft.Json.DateFormatHandling>

// System.Nullable`1<Newtonsoft.Json.DateFormatHandling>

// System.Nullable`1<Newtonsoft.Json.DateParseHandling>

// System.Nullable`1<Newtonsoft.Json.DateParseHandling>

// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling>

// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling>

// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling>

// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling>

// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling>

// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling>

// System.Nullable`1<Newtonsoft.Json.FloatParseHandling>

// System.Nullable`1<Newtonsoft.Json.FloatParseHandling>

// System.Nullable`1<Newtonsoft.Json.Formatting>

// System.Nullable`1<Newtonsoft.Json.Formatting>

// System.Nullable`1<System.Int32>

// System.Nullable`1<System.Int32>

// System.Nullable`1<Newtonsoft.Json.MetadataPropertyHandling>

// System.Nullable`1<Newtonsoft.Json.MetadataPropertyHandling>

// System.Nullable`1<Newtonsoft.Json.MissingMemberHandling>

// System.Nullable`1<Newtonsoft.Json.MissingMemberHandling>

// System.Nullable`1<Newtonsoft.Json.NullValueHandling>

// System.Nullable`1<Newtonsoft.Json.NullValueHandling>

// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling>

// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling>

// System.Nullable`1<Newtonsoft.Json.PreserveReferencesHandling>

// System.Nullable`1<Newtonsoft.Json.PreserveReferencesHandling>

// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling>

// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling>

// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling>

// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling>

// System.Nullable`1<Newtonsoft.Json.TypeNameAssemblyFormatHandling>

// System.Nullable`1<Newtonsoft.Json.TypeNameAssemblyFormatHandling>

// System.Nullable`1<Newtonsoft.Json.TypeNameHandling>

// System.Nullable`1<Newtonsoft.Json.TypeNameHandling>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>>

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Telemetry.Internal.IDiagnostics>

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Telemetry.Internal.IDiagnostics>

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory>

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.String>

// System.Runtime.CompilerServices.TaskAwaiter`1<System.String>

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Runtime.CompilerServices.TaskAwaiter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>>
struct Task_1_t727821A7F4CD62528E4941D3DA8119B6A7A3D4BC_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tCC6D9AC3F7DFBCC5757BDA7B60E4832097AEB36E* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>>

// System.Threading.Tasks.Task`1<Unity.Services.Core.Telemetry.Internal.IDiagnostics>
struct Task_1_t7E11A949B0612EC938C5CBD9E723725819BC441E_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t8BCDF0FD2A33495BA297F16AAC31E93FD65FA36D* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<Unity.Services.Core.Telemetry.Internal.IDiagnostics>

// System.Threading.Tasks.Task`1<Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory>
struct Task_1_t4B1C4BF4F9776B675A807CB47E9EF3EF35A0048A_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t5A392869EF83CB18C61A57F3943D73878E936C34* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory>

// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.Object>

// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_t7ABCD7F9503486A075E0B072E6EB95956CFE3106* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<System.String>

// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9_StaticFields
{
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_defaultFactory
	TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D* ___s_defaultFactory_23;
};

// System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Runtime.CompilerServices.AsyncMethodBuilderCore

// System.Runtime.CompilerServices.AsyncMethodBuilderCore

// Unity.Services.Core.Internal.AsyncOperationAwaiter

// Unity.Services.Core.Internal.AsyncOperationAwaiter

// Unity.Services.Core.Internal.AsyncOperationBase

// Unity.Services.Core.Internal.AsyncOperationBase

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// System.Byte

// System.Byte

// System.Threading.CancellationToken
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_actionToActionObjShunt
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt_1;
};

// System.Threading.CancellationToken

// Unity.Services.Wire.Internal.ChannelToken

// Unity.Services.Wire.Internal.ChannelToken

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// Unity.Services.Core.Internal.CoreRegistration

// Unity.Services.Core.Internal.CoreRegistration

// Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter

// Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter

// System.Double

// System.Double

// Unity.Services.Core.Networking.Internal.HttpOptions

// Unity.Services.Core.Networking.Internal.HttpOptions

// System.Int32

// System.Int32

// System.Int64

// System.Int64

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// Newtonsoft.Json.Linq.JContainer

// Newtonsoft.Json.Linq.JContainer

// Unity.Services.Qos.Internal.QosResult

// Unity.Services.Qos.Internal.QosResult

// Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest

// Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest

// Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse

// Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse

// System.Runtime.Serialization.StreamingContext

// System.Runtime.Serialization.StreamingContext

// System.Runtime.CompilerServices.TaskAwaiter

// System.Runtime.CompilerServices.TaskAwaiter

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.TimeSpan

// System.Void

// System.Void

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>>
struct AsyncTaskMethodBuilder_1_t48F43EEBD362A47F5627122EA5697AD97B922620_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t727821A7F4CD62528E4941D3DA8119B6A7A3D4BC* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>>

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Telemetry.Internal.IDiagnostics>
struct AsyncTaskMethodBuilder_1_tAC33E355F01002DF8E0EFE1A1A42BE37728E8ABA_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_t7E11A949B0612EC938C5CBD9E723725819BC441E* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Telemetry.Internal.IDiagnostics>

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>
struct AsyncTaskMethodBuilder_1_tE88892A6B2F97B5D44B7C3EE2DBEED85743412AC_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Threading.Tasks.VoidTaskResult>

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4_StaticFields
{
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1::s_defaultResultTask
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___s_defaultResultTask_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Nullable`1<System.Runtime.Serialization.StreamingContext>

// System.Nullable`1<System.Runtime.Serialization.StreamingContext>

// UnityEngine.AsyncOperation

// UnityEngine.AsyncOperation

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder

// System.Runtime.CompilerServices.AsyncVoidMethodBuilder

// UnityEngine.Networking.CertificateHandler

// UnityEngine.Networking.CertificateHandler

// System.Delegate

// System.Delegate

// UnityEngine.Networking.DownloadHandler

// UnityEngine.Networking.DownloadHandler

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// Unity.Services.Core.Networking.Internal.HttpRequest

// Unity.Services.Core.Networking.Internal.HttpRequest

// Unity.Services.Core.Networking.Internal.HttpResponse

// Unity.Services.Core.Networking.Internal.HttpResponse

// Newtonsoft.Json.Linq.JArray

// Newtonsoft.Json.Linq.JArray

// Newtonsoft.Json.Linq.JObject

// Newtonsoft.Json.Linq.JObject

// Newtonsoft.Json.Linq.JProperty

// Newtonsoft.Json.Linq.JProperty

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// Unity.Services.Core.Internal.TaskAsyncOperation
struct TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128_StaticFields
{
	// System.Threading.Tasks.TaskScheduler Unity.Services.Core.Internal.TaskAsyncOperation::Scheduler
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___Scheduler_1;
};

// Unity.Services.Core.Internal.TaskAsyncOperation

// UnityEngine.Networking.UploadHandler

// UnityEngine.Networking.UploadHandler

// System.AggregateException

// System.AggregateException

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder
struct AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_StaticFields
{
	// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder::s_cachedCompleted
	Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* ___s_cachedCompleted_0;
};

// System.Runtime.CompilerServices.AsyncTaskMethodBuilder

// Unity.Services.Core.Internal.DependencyTreeSortFailedException

// Unity.Services.Core.Internal.DependencyTreeSortFailedException

// Unity.Services.Core.Internal.HashException

// Unity.Services.Core.Internal.HashException

// Newtonsoft.Json.JsonSerializerSettings
struct JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_StaticFields
{
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializerSettings::DefaultContext
	StreamingContext_t56760522A751890146EE45F82F866B55B7E33677 ___DefaultContext_9;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializerSettings::DefaultCulture
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___DefaultCulture_18;
};

// Newtonsoft.Json.JsonSerializerSettings

// System.MulticastDelegate

// System.MulticastDelegate

// Unity.Services.Core.ServicesInitializationException

// Unity.Services.Core.ServicesInitializationException

// System.SystemException

// System.SystemException

// System.Type
struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Type

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequest

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// UnityEngine.Networking.UnityWebRequestAsyncOperation

// Unity.Services.Core.Internal.CoreDiagnostics/<GetOrCreateDiagnosticsAsync>d__26

// Unity.Services.Core.Internal.CoreDiagnostics/<GetOrCreateDiagnosticsAsync>d__26

// Unity.Services.Core.Internal.CoreRegistryInitializer/<InitializeRegistryAsync>d__3

// Unity.Services.Core.Internal.CoreRegistryInitializer/<InitializeRegistryAsync>d__3

// Unity.Services.Core.Internal.UnityServicesInitializer/<EnableServicesInitializationAsync>d__1

// Unity.Services.Core.Internal.UnityServicesInitializer/<EnableServicesInitializationAsync>d__1

// Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0/<<InitializeServicesAsync>g__InitializePackagesAsync|1>d

// Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0/<<InitializeServicesAsync>g__InitializePackagesAsync|1>d

// System.Action`1<UnityEngine.AsyncOperation>

// System.Action`1<UnityEngine.AsyncOperation>

// System.Action`1<Unity.Services.Core.Internal.IAsyncOperation>

// System.Action`1<Unity.Services.Core.Internal.IAsyncOperation>

// System.Action`1<System.Threading.Tasks.Task>

// System.Action`1<System.Threading.Tasks.Task>

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action`2<System.Threading.Tasks.Task,System.Object>

// System.Action`2<System.Threading.Tasks.Task,System.Object>

// System.Func`1<Newtonsoft.Json.JsonSerializerSettings>

// System.Func`1<Newtonsoft.Json.JsonSerializerSettings>

// System.Action

// System.Action

// System.ArgumentException

// System.ArgumentException

// Unity.Services.Core.Internal.CircularDependencyException

// Unity.Services.Core.Internal.CircularDependencyException

// Unity.Services.Core.Internal.DependencyTreeComponentHashException

// Unity.Services.Core.Internal.DependencyTreeComponentHashException

// Unity.Services.Core.Internal.DependencyTreePackageHashException

// Unity.Services.Core.Internal.DependencyTreePackageHashException

// System.InvalidOperationException

// System.InvalidOperationException

// System.NullReferenceException

// System.NullReferenceException

// System.OperationCanceledException

// System.OperationCanceledException

// Unity.Services.Core.Internal.CoreDiagnostics/<SendCoreDiagnosticsAsync>d__24

// Unity.Services.Core.Internal.CoreDiagnostics/<SendCoreDiagnosticsAsync>d__24

// Unity.Services.Core.Internal.UnityServicesInternal/<EnableInitializationAsync>d__24

// Unity.Services.Core.Internal.UnityServicesInternal/<EnableInitializationAsync>d__24

// Unity.Services.Core.Internal.UnityServicesInternal/<InitializeAsync>d__20

// Unity.Services.Core.Internal.UnityServicesInternal/<InitializeAsync>d__20

// Unity.Services.Core.Internal.UnityServicesInternal/<InitializeServicesAsync>d__22

// Unity.Services.Core.Internal.UnityServicesInternal/<InitializeServicesAsync>d__22

// Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0/<<InitializeRegistryAsync>g__TryInitializePackageAsync|0>d

// Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0/<<InitializeRegistryAsync>g__TryInitializePackageAsync|0>d

// System.ArgumentOutOfRangeException

// System.ArgumentOutOfRangeException
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mA5BF8973642D67EF56303F2867C75190756C3012_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_mD6DB19F66035FC77675F1ED9FE696A65CF9C0F23_gshared (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* TaskCompletionSource_1_get_Task_m4994989AA2174905CF517397D0F6B082ADC29EE9_gshared_inline (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TrySetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetException_m013D2C6E801E5EA838414D149B4A5FE9834DE0EB_gshared (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TrySetCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetCanceled_mD7D8DB23955357DAA94E1DCA66C6C7709A07F86F_gshared (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TrySetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionSource_1_TrySetResult_m4C03ED1589D48A864F726E0FDF00D8E976DDCE0F_gshared (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_result, const RuntimeMethod* method) ;
// System.Void System.Action`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2__ctor_m8E9B7F6EE50FEF26FF7537F554B4F5E434F70550_gshared (Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m935B3F117860376DC854C9E0C80CBD99BE77EEA4_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// TDictionary Unity.Services.Core.Internal.DictionaryExtensions::MergeAllowOverride<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TDictionary,System.Collections.Generic.IDictionary`2<TKey,TValue>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryExtensions_MergeAllowOverride_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m191DDE5D3B24C4AC300575E3696AADBA44175C8F_gshared (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_self, RuntimeObject* ___1_dictionary, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4 AsyncTaskMethodBuilder_1_Create_m852C283F3EAD7381A0CC8D14204899C192BDC20A_gshared (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Start<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_Start_TisIl2CppFullySharedGenericAny_m81177143E3D9118AF316E4C8E5D2AB2BF16C4E80_gshared (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* AsyncTaskMethodBuilder_1_get_Task_m90B072626CA4BF0F567616D4A035739B97F46D8B_gshared (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_Start_TisIl2CppFullySharedGenericAny_m36201A5D380AC483FAE5E144880EEE2EB09D69E2_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_stateMachine, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAFEAD0E0483FFA3D862272177C9DE55F2C943F8F_gshared (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_awaiter, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m3069CACB5775E013107F559C825422266A09F9E8_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::AwaitUnsafeOnCompleted<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m0B984271E33D944D547FB29917733016C411E5EB_gshared (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_awaiter, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetException_m25948BB842FBF253D89FE8399CCB2325B491EE34_gshared (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::SetResult(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_1_SetResult_mC5A4FB0746878FC882C792D8BCAF5277E1F24778_gshared (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_result, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* Dictionary_2_get_Keys_mD82D6690B1A801E8EED43F1B1D310893C9D334CF_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection_GetEnumerator_m1624A44B07D62B8CC592FEAE7A521D9504E0ACB3_gshared (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* __this, Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3E0B734E98D35978EEE706FCEC2FE08FEA74FD35_gshared (Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m2D9E3398C2A3349E3F0F189A38E881D11DE5AA15_gshared_inline (Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m21C503A713FDCA406492E2BE960D85320752E615_gshared (Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* Dictionary_2_get_Values_mE06FB7381D8152E35F0716DC7FE13788362112A7_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueCollection_GetEnumerator_m22BB9C6494A679370661D0B6DA1FA7EF744281EA_gshared (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* __this, Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mB05777B182DD6D8C5ED21811C2CA95405D2743F8_gshared (Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m77681472C32B9ABB97AE602C0D4C365A0A8E8ACE_gshared_inline (Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m297C3CEEAAC8D29D8F7C93E0801CD1D362D1C66F_gshared (Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m8DA550B703DFB328B69C4712064C667D7CA33DF1_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 Task_1_GetAwaiter_mADB36AF74C602F4C81E4752994696EA21CB0C0B6_gshared (/*System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_1_get_IsCompleted_m7F153D4DF6456F60BABB1E7663CDDF3EFE172007_gshared (TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8* __this, const RuntimeMethod* method) ;
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_1_GetResult_mA0FDEC1F33CAC08401C6F3B9E5A5C6F1B4503EEB_gshared (TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// T[] System.Array::Empty<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_Start_TisIl2CppFullySharedGenericAny_mF2CE0E0265F13C43AAB330B33509540A399C62A2_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(TAwaiter&,TStateMachine&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m03130C9822AF7F0C435E5DAF03F245D2F35FC6EE_gshared (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_awaiter, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___1_stateMachine, const RuntimeMethod* method) ;
// System.Void System.Func`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_mC73A4FCEBBAB90CB7B7AB16321F3F98FBBF12596_gshared (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mACCB7726C2E9728AE336F99C68B334459F9F30FB_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor(System.Int32)
inline void Dictionary_2__ctor_m5D77EB3F62FED2B879551BFADA7FE409B56F99F2 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mA5BF8973642D67EF56303F2867C75190756C3012_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, ___0_capacity, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequest::SetMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* HttpRequest_SetMethod_mB29F68EC6A7DEC09C6A438B255224F0E75695432 (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* __this, String_t* ___0_method, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest::.ctor(Unity.Services.Core.Networking.Internal.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyHttpRequest__ctor_m11EF41B8A37DC43254E609870527C583D1F3370B (ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560* __this, HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* ___0_request, const RuntimeMethod* method) ;
// System.String Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlyHttpRequest_get_Method_mDF650B95030089C935E80108E27FCF52173EED6C (ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest::get_Url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlyHttpRequest_get_Url_mE8321E2491DED55458B38A53F9954781F8A79216 (ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest::get_Headers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyHttpRequest_get_Headers_mA0B7DB8D867E0929FBEB5FE547E6466A99BBB1E3 (ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560* __this, const RuntimeMethod* method) ;
// System.Byte[] Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest::get_Body()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ReadOnlyHttpRequest_get_Body_m68E94D2A5B8DF549E503448CF0DF52B2FE9ECA58 (ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::.ctor(Unity.Services.Core.Networking.Internal.HttpResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyHttpResponse__ctor_mED290907712D4AD90AE9EAEFED8EE8E43769433C (ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* __this, HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* ___0_response, const RuntimeMethod* method) ;
// Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::get_Request()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560 ReadOnlyHttpResponse_get_Request_m87248E6A169DB9DFF2A1126106224E11F0765E01 (ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::get_Headers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyHttpResponse_get_Headers_m730FBF9627F46E8B54E60D81165CC9CE7CCDAC61 (ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* __this, const RuntimeMethod* method) ;
// System.Byte[] Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ReadOnlyHttpResponse_get_Data_mE6199D1297875D87D7336A7EE88A3EE90A8F8ADC (ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* __this, const RuntimeMethod* method) ;
// System.Int64 Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::get_StatusCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ReadOnlyHttpResponse_get_StatusCode_m448AB167A7704D03661FBFB19C0A0E8400964013 (ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* __this, const RuntimeMethod* method) ;
// System.String Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::get_ErrorMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlyHttpResponse_get_ErrorMessage_m6A3B681BB1EF9FB9BF2915B65A43734BEECDA5E4 (ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::get_IsHttpError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyHttpResponse_get_IsHttpError_mB9254614A798E52CEE760E7ECFB1C8596E3CEE89 (ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::get_IsNetworkError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyHttpResponse_get_IsNetworkError_mF41792AD3A3B43F941089D0D1694D217C1227068 (ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Core.Internal.AsyncOperation::get_IsDone()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AsyncOperation_get_IsDone_mFABF133C322E1F709C84DF9FA4C57C25AE1B28D0_inline (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.Services.Core.Internal.IAsyncOperation>::Invoke(T)
inline void Action_1_Invoke_m468F4CDC64512C68E391F8A876A27ACC4B992B50_inline (Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, (Il2CppFullySharedGenericAny)___0_obj, method);
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.AsyncOperation::set_Status(Unity.Services.Core.Internal.AsyncOperationStatus)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperation_set_Status_m052C39A5CBBF69314029BE4E2C61FC27CB3614AC_inline (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.AsyncOperation::set_IsDone(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperation_set_IsDone_mE51C475EADA09A7ADDF3A1A49CD5E70BE1003443_inline (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, bool ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.AsyncOperation::set_Exception(System.Exception)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperation_set_Exception_m21F6F23F876ADED9AE850C41F324CE8F5334F244_inline (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, Exception_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.OperationCanceledException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperationCanceledException__ctor_m2F34C3B8AEE2AA6C7EB2BB77AE5E0289101293E4 (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter::.ctor(Unity.Services.Core.Internal.IAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationAwaiter__ctor_mDA5FDE70CB821282BE1B34988F035D089E5C4668 (AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662* __this, RuntimeObject* ___0_asyncOperation, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m0C6D38DE814AB874FF9303D952D1E7A82F8120DA (U3CU3Ec__DisplayClass2_0_t3B73576199883FBF71FC76F226282CB30BFE5375* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.Services.Core.Internal.IAsyncOperation>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m0760403D59B61247DFD6DA006F6CC392E7241BD9 (Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, ___0_object, ___1_method, method);
}
// System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationAwaiter_OnCompleted_m0DF5C7321350B0496AEA75861A16292D35202EA0 (AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m5549E3FE1162B8CBEF71ED6F8254360B00C9682D (U3CU3Ec__DisplayClass3_0_t0BC64F6CB3CE8A09EA5F2A786A4054970E447EE0* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationAwaiter_UnsafeOnCompleted_m0E5A4D81E41FBECC6E58B673E068F6B896670957 (AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Core.Internal.AsyncOperationAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationAwaiter_get_IsCompleted_mE9AE20B408EE81FF5F8CFE8EF686B71AF51469A4 (AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationAwaiter_GetResult_m04CD1981674B6AC7A9236E9E5D1F3B9814066504 (AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662* __this, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Core.Internal.AsyncOperationBase::get_IsDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationBase_get_IsDone_m238748BEE1ADD4EDF78ED968D94A089897228BB8 (AsyncOperationBase_t4808DB931A15FAB56C45333DFBB14F8E9BD49124* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.AsyncOperationBase/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_m122B1CD2CAB952EAC3144B97638FA48B26CC00E1 (U3CU3Ec__DisplayClass17_0_t151EFA0C3EB311C252F8C42FBBBE5C6DFB1AD944* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.AsyncOperationBase::add_Completed(System.Action`1<Unity.Services.Core.Internal.IAsyncOperation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase_add_Completed_mBF050A2DCED3671779F2DCB9CE85B0CBF09D434C (AsyncOperationBase_t4808DB931A15FAB56C45333DFBB14F8E9BD49124* __this, Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.CustomYieldInstruction::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50 (CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.AsyncOperationExtensions/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_mD92A511117A89E573219D50367FC2ECD9551DA54 (U3CU3Ec__DisplayClass1_0_tE96228883203CD8C2E3FAE5BC1CE0C36067896C9* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::get_CompletedTask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline (const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
inline void TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60 (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mD6DB19F66035FC77675F1ED9FE696A65CF9C0F23_gshared)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, method);
}
// System.Void Unity.Services.Core.Internal.AsyncOperationExtensions/<>c__DisplayClass1_0::<AsTask>g__CompleteTask|0(Unity.Services.Core.Internal.IAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CAsTaskU3Eg__CompleteTaskU7C0_m971ACC6A960E4BAE00467A0B72768FFDE7DA0A3A (U3CU3Ec__DisplayClass1_0_tE96228883203CD8C2E3FAE5BC1CE0C36067896C9* __this, RuntimeObject* ___0_operation, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
inline Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_inline (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method)
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* il2cppRetVal = ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m4994989AA2174905CF517397D0F6B082ADC29EE9_gshared_inline)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, method);
	return (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)il2cppRetVal;
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetException(System.Exception)
inline bool TaskCompletionSource_1_TrySetException_m458D56254FBD7F874452154131D60AADD2131334 (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, Exception_t*, const RuntimeMethod*))TaskCompletionSource_1_TrySetException_m013D2C6E801E5EA838414D149B4A5FE9834DE0EB_gshared)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, ___0_exception, method);
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetCanceled()
inline bool TaskCompletionSource_1_TrySetCanceled_m3D4DB4B9418F13DC64123476BCA6628844E68175 (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, const RuntimeMethod*))TaskCompletionSource_1_TrySetCanceled_mD7D8DB23955357DAA94E1DCA66C6C7709A07F86F_gshared)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, method);
}
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.Object>::TrySetResult(TResult)
inline bool TaskCompletionSource_1_TrySetResult_m7A0F162733257CA73B347B6BB9677F25A0AB0F9B (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* __this, RuntimeObject* ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))TaskCompletionSource_1_TrySetResult_m4C03ED1589D48A864F726E0FDF00D8E976DDCE0F_gshared)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, (Il2CppFullySharedGenericAny)___0_result, method);
}
// System.Void System.ArgumentOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCanceled_m96A8D3F85158A9CB3AEA50A00A55BE4E0F0E21FA (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AggregateException_t51B6205846DFB356B94452702201DD239D44422F* Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.AsyncOperationBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase__ctor_mAF087348521B946CBA095B83B3FC55FBE1C9E314 (AsyncOperationBase_t4808DB931A15FAB56C45333DFBB14F8E9BD49124* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.TaskAsyncOperation::SetScheduler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAsyncOperation_SetScheduler_m3DAA8E75D48B5977ED724AF4F5637FBD73199FBC (const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Threading.Tasks.Task,System.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_2__ctor_mCB8799E12AB6CA46E55E300245D89C3B2A3955E9 (Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_2__ctor_m8E9B7F6EE50FEF26FF7537F554B4F5E434F70550_gshared)((Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8*)__this, ___0_object, ___1_method, method);
}
// System.Threading.CancellationToken System.Threading.CancellationToken::get_None()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53 (const RuntimeMethod* method) ;
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`2<System.Threading.Tasks.Task,System.Object>,System.Object,System.Threading.CancellationToken,System.Threading.Tasks.TaskContinuationOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_ContinueWith_m332FAFE0E12D9D53BEEDE60B086EB4816462834F (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* ___0_continuationAction, RuntimeObject* ___1_state, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, int32_t ___3_continuationOptions, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___4_scheduler, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.Task::.ctor(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task__ctor_m101572B46FBE74F66367F25C84D9CDB15D68A637 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.TaskAsyncOperation::.ctor(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAsyncOperation__ctor_mEDC34C8442D9965300375DEB7A1658ED3BF33D46 (TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_task, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.Task::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_Start_m2DC09C3214A841B5C3A6AD800E4020DE365FA620 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::FromCurrentSynchronizationContext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* TaskScheduler_FromCurrentSynchronizationContext_m0520B4EAEC13A789C28A47B5215826D435973EE7 (const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.TaskAsyncOperation/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5A0343E410EC083744848A5D7F30B3A483D4ED20 (U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.AsyncOperationBase::DidComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase_DidComplete_m898BABFB881C305E46DE4A8B443BED8E94A8F948 (AsyncOperationBase_t4808DB931A15FAB56C45333DFBB14F8E9BD49124* __this, const RuntimeMethod* method) ;
// UnityEngine.ILogger UnityEngine.Debug::get_unityLogger()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline (const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.ServicesInitializationException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicesInitializationException__ctor_m92C4F3ACACE7EC3753B8BFEE082221D752CA751C (ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.ServicesInitializationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicesInitializationException__ctor_m638AF9055D8C8C6BA7AC554FF3066C26EA869F55 (ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent> Unity.Services.Core.Internal.ComponentRegistry::get_ComponentTypeHashToInstance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* ComponentRegistry_get_ComponentTypeHashToInstance_mC29AAC6141CC7C8A088B1083CD07A802BF281F20_inline (ComponentRegistry_tE9997750875F6233B090B300FABCF05123E45523* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m8E6C3FEADDB1D6606A48972D8C7405DD98D66F6B (Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* __this, int32_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, (Il2CppFullySharedGenericAny*)___1_value, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>::Clear()
inline void Dictionary_2_Clear_mE0540DC1320338CDF8987A9508CB911F2A10DC75 (Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2_Clear_m935B3F117860376DC854C9E0C80CBD99BE77EEA4_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// TDictionary Unity.Services.Core.Internal.DictionaryExtensions::MergeAllowOverride<System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>,System.Int32,Unity.Services.Core.Internal.IServiceComponent>(TDictionary,System.Collections.Generic.IDictionary`2<TKey,TValue>)
inline Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* DictionaryExtensions_MergeAllowOverride_TisDictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIServiceComponent_t88C101C3AF6A1CA33BFF6842BF9AD1E6266E72E9_mA5F497216B69E0B710B774C252FEDA78EC1C0C66 (Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* ___0_self, RuntimeObject* ___1_dictionary, const RuntimeMethod* method)
{
	Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* il2cppRetVal;
	((  void (*) (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, RuntimeObject*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))DictionaryExtensions_MergeAllowOverride_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m191DDE5D3B24C4AC300575E3696AADBA44175C8F_gshared)((Il2CppFullySharedGenericAny)___0_self, (RuntimeObject*)___1_dictionary, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreRegistration::.ctor(Unity.Services.Core.Internal.IPackageRegistry,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistration__ctor_mBD89C7177367442E29CDDB5C17527B9C556256E1 (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, RuntimeObject* ___0_registry, int32_t ___1_packageHash, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.DependencyTree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTree__ctor_mE8C447ED9582DA0A52E5F5294B424C67641AFA1C (DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.PackageRegistry::.ctor(Unity.Services.Core.Internal.DependencyTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackageRegistry__ctor_m42324D73BCB367393F2C200E417CA235BDB91330 (PackageRegistry_tEC69FE10BB71F416B3FFACF803BFAF0EED0448E9* __this, DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___0_tree, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreRegistry::set_PackageRegistry(Unity.Services.Core.Internal.IPackageRegistry)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CoreRegistry_set_PackageRegistry_mCA3C399854251D17A72BBE1E9121AF7050A46D0B_inline (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>::get_Count()
inline int32_t Dictionary_2_get_Count_m46F788DEB6E4E58131A990632E45E4AB535D1EBE (Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>::.ctor(System.Int32)
inline void Dictionary_2__ctor_m2E2032FDA802F3565C754B77CAE7BA58989C1FEA (Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mA5BF8973642D67EF56303F2867C75190756C3012_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, ___0_capacity, method);
}
// System.Void Unity.Services.Core.Internal.ComponentRegistry::.ctor(System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentRegistry__ctor_m3FF6CDF744DAFB26FFAF27867B8D5BE8DDC0D43A (ComponentRegistry_tE9997750875F6233B090B300FABCF05123E45523* __this, Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* ___0_componentTypeHashToInstance, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreRegistry::set_ComponentRegistry(Unity.Services.Core.Internal.IComponentRegistry)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CoreRegistry_set_ComponentRegistry_mF5BBBCDFF2103D1F60E6FA3A7779B06AF3838D8E_inline (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.CoreRegistry::get_PackageRegistry()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CoreRegistry_get_PackageRegistry_m0A95E6723D8237E6E9D6D0067FB0EDFCC3C29063_inline (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.LockedPackageRegistry::.ctor(Unity.Services.Core.Internal.IPackageRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedPackageRegistry__ctor_m98CE0389216302BCF17DF91BC8B76CAA121D8927 (LockedPackageRegistry_tD44860DBF1971F04B909E49EDEA6B483DD6A8499* __this, RuntimeObject* ___0_registryToLock, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.IComponentRegistry Unity.Services.Core.Internal.CoreRegistry::get_ComponentRegistry()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CoreRegistry_get_ComponentRegistry_mF7CA9E9CEEFF316027E6D59B2AA30AEBA7FAAC13_inline (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.LockedComponentRegistry::.ctor(Unity.Services.Core.Internal.IComponentRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedComponentRegistry__ctor_m3630AF00C5DA0EC485544F72503B50D95E871BE1 (LockedComponentRegistry_t82DAB6CC0CFF528CB442E3BFD7E331B6E1706B5F* __this, RuntimeObject* ___0_registryToLock, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<InitializeRegistryAsync>d__3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeRegistryAsyncU3Ed__3__ctor_mAD38C91E46C5050DE63C53BF773ABBBC7E2B1868 (U3CInitializeRegistryAsyncU3Ed__3_t667C2D1D53EB98537AA50BACFCBD9127A01D3CC5* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>>::Create()
inline AsyncTaskMethodBuilder_1_t48F43EEBD362A47F5627122EA5697AD97B922620 AsyncTaskMethodBuilder_1_Create_m4EB3E38629F4249463A5810A921389C8C24ACD6A (const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4 il2cppRetVal = ((  AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m852C283F3EAD7381A0CC8D14204899C192BDC20A_gshared)(method);
	return il2cpp_codegen_cast_struct<AsyncTaskMethodBuilder_1_t48F43EEBD362A47F5627122EA5697AD97B922620, AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4>(&il2cppRetVal);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>>::Start<Unity.Services.Core.Internal.CoreRegistryInitializer/<InitializeRegistryAsync>d__3>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CInitializeRegistryAsyncU3Ed__3_t667C2D1D53EB98537AA50BACFCBD9127A01D3CC5_mDB5B1A1329EF2DF5E4BD560BC1524379577A8685 (AsyncTaskMethodBuilder_1_t48F43EEBD362A47F5627122EA5697AD97B922620* __this, U3CInitializeRegistryAsyncU3Ed__3_t667C2D1D53EB98537AA50BACFCBD9127A01D3CC5** ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisIl2CppFullySharedGenericAny_m81177143E3D9118AF316E4C8E5D2AB2BF16C4E80_gshared)((AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*)__this, (Il2CppFullySharedGenericAny*)___0_stateMachine, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>>::get_Task()
inline Task_1_t727821A7F4CD62528E4941D3DA8119B6A7A3D4BC* AsyncTaskMethodBuilder_1_get_Task_mE41346DB8D5830551E6DBDA8548B413941945483 (AsyncTaskMethodBuilder_1_t48F43EEBD362A47F5627122EA5697AD97B922620* __this, const RuntimeMethod* method)
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* il2cppRetVal = ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m90B072626CA4BF0F567616D4A035739B97F46D8B_gshared)((AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*)__this, method);
	return (Task_1_t727821A7F4CD62528E4941D3DA8119B6A7A3D4BC*)il2cppRetVal;
}
// System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0/<<InitializeRegistryAsync>g__TryInitializePackageAsync|0>d::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed__ctor_m3E809804C4E62ACDD9716E522CE055C04EE96B6D (U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_tEDBE32E965E3D0139E956FC4872AE411630D672C* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0/<<InitializeRegistryAsync>g__TryInitializePackageAsync|0>d>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_tEDBE32E965E3D0139E956FC4872AE411630D672C_mC0157E1F91DCC9887FB42595A68ACAB7C986BBD1 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_tEDBE32E965E3D0139E956FC4872AE411630D672C** ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisIl2CppFullySharedGenericAny_m36201A5D380AC483FAE5E144880EEE2EB09D69E2_gshared)((AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)__this, (Il2CppFullySharedGenericAny*)___0_stateMachine, method);
}
// System.Threading.Tasks.Task System.Runtime.CompilerServices.AsyncTaskMethodBuilder::get_Task()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Int32>::get_Item(System.Int32)
inline int32_t List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	int32_t il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TValue System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>::get_Item(TKey)
inline RuntimeObject* Dictionary_2_get_Item_m8AD97E240F583ACF35C19A2C71143DE04FF1F071 (Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal;
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.AggregateException::.ctor(System.Collections.Generic.IEnumerable`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AggregateException__ctor_m36C9769557880F4E90AE5EE44C39F98D86347E1F (AggregateException_t51B6205846DFB356B94452702201DD239D44422F* __this, RuntimeObject* ___0_innerExceptions, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.ServicesInitializationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ServicesInitializationException__ctor_mF669B3E2EBFCAF30637035325CD9B965BC11B578 (ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Stopwatch::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Restart_m9CE82CCD811EE12C2E4FDFF708B5529D1CE6DA58 (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter System.Threading.Tasks.Task::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8 (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0/<<InitializeRegistryAsync>g__TryInitializePackageAsync|0>d>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_tEDBE32E965E3D0139E956FC4872AE411630D672C_mB1F884312610762854C167E4A4898BA447FF9DAA (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_tEDBE32E965E3D0139E956FC4872AE411630D672C** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAFEAD0E0483FFA3D862272177C9DE55F2C943F8F_gshared)((AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)__this, (Il2CppFullySharedGenericAny*)___0_awaiter, (Il2CppFullySharedGenericAny*)___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.TaskAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D (TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* __this, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Stopwatch::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Stop_m8F2A2EFD9D7D5B4180A5E5379E5443864618D7DC (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.PackageInitializationInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackageInitializationInfo__ctor_mA13323855BBE265A977A230EE6F62B586D9C84D4 (PackageInitializationInfo_t3A1BAF9D785E161A9856F3C5769D513C65E49563* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178 (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>::Add(T)
inline void List_1_Add_m7C437E7CA551F3A8A3CFF9DAB2D8D00971771FEB_inline (List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF* __this, PackageInitializationInfo_t3A1BAF9D785E161A9856F3C5769D513C65E49563* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Void System.Collections.Generic.List`1<System.Exception>::Add(T)
inline void List_1_Add_m8E3C27DE02A5C8D1AE01D55D6B325BFB693CF385_inline (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* __this, Exception_t* ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)___0_item, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m6F552D21A7795194E9AB8D5D042CF8D7B3975EE9 (U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Int32>::get_Count()
inline int32_t List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>::.ctor(System.Int32)
inline void List_1__ctor_m30247370D912BC949FE5B3FC5C927371FE42CD2B (List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))List_1__ctor_m3069CACB5775E013107F559C825422266A09F9E8_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_capacity, method);
}
// System.Void System.NullReferenceException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4 (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Exception>::.ctor(System.Int32)
inline void List_1__ctor_mD463C00E13C50984576EDF8FE2F8D2715471BF94 (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))List_1__ctor_m3069CACB5775E013107F559C825422266A09F9E8_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_capacity, method);
}
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mAFE6B2F45CF1C3469EF6D5307972BC098B473D0A (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.IInitializablePackage Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0::<InitializeRegistryAsync>g__GetPackageAt|1(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass3_0_U3CInitializeRegistryAsyncU3Eg__GetPackageAtU7C1_m68BD38748C7FE0D2105C0AB91F6F8E5737F8D016 (U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0::<InitializeRegistryAsync>g__TryInitializePackageAsync|0(Unity.Services.Core.Internal.IInitializablePackage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* U3CU3Ec__DisplayClass3_0_U3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0_m56337B98B3CFDB562165FEE8B41F8987D91B7327 (U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0* __this, RuntimeObject* ___0_package, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Unity.Services.Core.Internal.CoreRegistryInitializer/<InitializeRegistryAsync>d__3>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeRegistryAsyncU3Ed__3_t667C2D1D53EB98537AA50BACFCBD9127A01D3CC5_mC2C5E820FC2E5DB728AABE9217352CEFD0F338E7 (AsyncTaskMethodBuilder_1_t48F43EEBD362A47F5627122EA5697AD97B922620* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CInitializeRegistryAsyncU3Ed__3_t667C2D1D53EB98537AA50BACFCBD9127A01D3CC5** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m0B984271E33D944D547FB29917733016C411E5EB_gshared)((AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*)__this, (Il2CppFullySharedGenericAny*)___0_awaiter, (Il2CppFullySharedGenericAny*)___1_stateMachine, method);
}
// System.Int32 System.Collections.Generic.List`1<System.Exception>::get_Count()
inline int32_t List_1_get_Count_mBF08A30EBAD94D53A523D418C783D7803FF81143_inline (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0::<InitializeRegistryAsync>g__Fail|2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CInitializeRegistryAsyncU3Eg__FailU7C2_mB66A52FC680C0D6D34C45425B8D8838A9576BF63 (U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m1478EBE0D2DB997547C107D2697C8CE59E2C7B3B (AsyncTaskMethodBuilder_1_t48F43EEBD362A47F5627122EA5697AD97B922620* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m25948BB842FBF253D89FE8399CCB2325B491EE34_gshared)((AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*)__this, ___0_exception, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_m00485CE66FC14765B7ABB50FB23F9784705B055B (AsyncTaskMethodBuilder_1_t48F43EEBD362A47F5627122EA5697AD97B922620* __this, List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mC5A4FB0746878FC882C792D8BCAF5277E1F24778_gshared)((AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*)__this, (Il2CppFullySharedGenericAny)___0_result, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>::.ctor()
inline void Dictionary_2__ctor_mC94CCA31D9C4EE7B8FCA41A2C361213C5DBF46ED (Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
inline void Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>::.ctor()
inline void Dictionary_2__ctor_m94824805BB9A079EEBD9EE0CFE2119AFD9346868 (Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>::.ctor()
inline void Dictionary_2__ctor_mAEE8DC3D9575E18CFCB3E4061F680D16B3E00A72 (Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void Unity.Services.Core.Internal.DependencyTree::.ctor(System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>,System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>,System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTree__ctor_mE33E7D31398C9CB414DFAA3F000033C0F5C2D928 (DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* __this, Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36* ___0_packageToInstance, Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___1_componentToPackage, Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* ___2_packageToComponentDependencies, Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* ___3_componentToInstance, const RuntimeMethod* method) ;
// System.String Unity.Services.Core.Internal.DependencyTreeSortFailedException::CreateExceptionMessage(Unity.Services.Core.Internal.DependencyTree,System.Collections.Generic.ICollection`1<System.Int32>,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DependencyTreeSortFailedException_CreateExceptionMessage_m076D757C6C201D22949EEAFEB546DA673BFD3301 (DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___0_tree, RuntimeObject* ___1_target, Exception_t* ___2_inner, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3 (Exception_t* __this, String_t* ___0_message, Exception_t* ___1_innerException, const RuntimeMethod* method) ;
// System.String Unity.Services.Core.Internal.DependencyTreeExtensions::ToJson(Unity.Services.Core.Internal.DependencyTree,System.Collections.Generic.ICollection`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DependencyTreeExtensions_ToJson_m7BB4E9D6A8686F3DB3BB4AE8CDA0F5126BE2FC0C (DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___0_tree, RuntimeObject* ___1_order, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Linq.JArray::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JArray__ctor_m022A5DB24C674904082FD028B96F7AF93A87CF10 (JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Linq.JProperty::.ctor(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JProperty__ctor_mA59A3257A0EB4DB85735EF8F576917BF3B5415F1 (JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* __this, String_t* ___0_name, RuntimeObject* ___1_content, const RuntimeMethod* method) ;
// Newtonsoft.Json.Linq.JObject Unity.Services.Core.Internal.DependencyTreeExtensions::GetPackageJObject(Unity.Services.Core.Internal.DependencyTree,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* DependencyTreeExtensions_GetPackageJObject_m2D3CA37C10CFAE312157DA12D6BD189FE6C41F65 (DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___0_tree, int32_t ___1_packageHash, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Linq.JObject::.ctor(Newtonsoft.Json.Linq.JObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject__ctor_m3BC9D30AA26660214591EF08F691D1B740D6615D (JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* __this, JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* ___0_other, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.Linq.JArray::Add(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JArray_Add_m6E648CB9C562A6CC16DC550DA611456AB0149330 (JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8* __this, JToken_tFD7D9015F3F97A09AD93E439ACE894D12C06E8B3* ___0_item, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>::get_Keys()
inline KeyCollection_t241A367A2D827EDFBE8E517F96AE6B58053FA006* Dictionary_2_get_Keys_mBE302F6BC51FA460285907BC883053A67B73CC06 (Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36* __this, const RuntimeMethod* method)
{
	KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* il2cppRetVal = ((  KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2_get_Keys_mD82D6690B1A801E8EED43F1B1D310893C9D334CF_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
	return (KeyCollection_t241A367A2D827EDFBE8E517F96AE6B58053FA006*)il2cppRetVal;
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>::GetEnumerator()
inline Enumerator_t90A498889D869EAA06211A0CC03E2B8C98AABFE7 KeyCollection_GetEnumerator_m746D46B7EEFA2A7FBD134CA14C215BF240705220 (KeyCollection_t241A367A2D827EDFBE8E517F96AE6B58053FA006* __this, const RuntimeMethod* method)
{
	Enumerator_t90A498889D869EAA06211A0CC03E2B8C98AABFE7 il2cppRetVal;
	((  void (*) (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55*, Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977*, const RuntimeMethod*))KeyCollection_GetEnumerator_m1624A44B07D62B8CC592FEAE7A521D9504E0ACB3_gshared)((KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55*)__this, (Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>::Dispose()
inline void Enumerator_Dispose_mA7C405F3329C72C64721043B896930F053D69EBB (Enumerator_t90A498889D869EAA06211A0CC03E2B8C98AABFE7* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977*, const RuntimeMethod*))Enumerator_Dispose_m3E0B734E98D35978EEE706FCEC2FE08FEA74FD35_gshared)((Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977*)__this, method);
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>::get_Current()
inline int32_t Enumerator_get_Current_m80B0DE302A2D7C8A09DF766FDFE3BAF46301C2AC_inline (Enumerator_t90A498889D869EAA06211A0CC03E2B8C98AABFE7* __this, const RuntimeMethod* method)
{
	int32_t il2cppRetVal;
	((  void (*) (Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m2D9E3398C2A3349E3F0F189A38E881D11DE5AA15_gshared_inline)((Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>::MoveNext()
inline bool Enumerator_MoveNext_m25917EFC1552699E49CC74EACE736D4264FA28E0 (Enumerator_t90A498889D869EAA06211A0CC03E2B8C98AABFE7* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977*, const RuntimeMethod*))Enumerator_MoveNext_m21C503A713FDCA406492E2BE960D85320752E615_gshared)((Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977*)__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>::get_Keys()
inline KeyCollection_t9A4591FC5446FBD11961412C92C3F1B8AD491650* Dictionary_2_get_Keys_m39B98342C7AB8C5B5FE5A5A81F8A34B7DCFD787A (Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* __this, const RuntimeMethod* method)
{
	KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* il2cppRetVal = ((  KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2_get_Keys_mD82D6690B1A801E8EED43F1B1D310893C9D334CF_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
	return (KeyCollection_t9A4591FC5446FBD11961412C92C3F1B8AD491650*)il2cppRetVal;
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Unity.Services.Core.Internal.IServiceComponent>::GetEnumerator()
inline Enumerator_tACD4FB2B54A5C2691CB962F194780DD49F8FA1C1 KeyCollection_GetEnumerator_m0B904E65230A34E4A0E53E7595BDEBF12BDA5E0A (KeyCollection_t9A4591FC5446FBD11961412C92C3F1B8AD491650* __this, const RuntimeMethod* method)
{
	Enumerator_tACD4FB2B54A5C2691CB962F194780DD49F8FA1C1 il2cppRetVal;
	((  void (*) (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55*, Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977*, const RuntimeMethod*))KeyCollection_GetEnumerator_m1624A44B07D62B8CC592FEAE7A521D9504E0ACB3_gshared)((KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55*)__this, (Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,Unity.Services.Core.Internal.IServiceComponent>::Dispose()
inline void Enumerator_Dispose_m041C46147B3F287D3F182E0F2F811B8D8EB384A1 (Enumerator_tACD4FB2B54A5C2691CB962F194780DD49F8FA1C1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977*, const RuntimeMethod*))Enumerator_Dispose_m3E0B734E98D35978EEE706FCEC2FE08FEA74FD35_gshared)((Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977*)__this, method);
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,Unity.Services.Core.Internal.IServiceComponent>::get_Current()
inline int32_t Enumerator_get_Current_mB6D933BAB3F52E4028691060155A28C6D5973C89_inline (Enumerator_tACD4FB2B54A5C2691CB962F194780DD49F8FA1C1* __this, const RuntimeMethod* method)
{
	int32_t il2cppRetVal;
	((  void (*) (Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m2D9E3398C2A3349E3F0F189A38E881D11DE5AA15_gshared_inline)((Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// Newtonsoft.Json.Linq.JObject Unity.Services.Core.Internal.DependencyTreeExtensions::GetComponentJObject(Unity.Services.Core.Internal.DependencyTree,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* DependencyTreeExtensions_GetComponentJObject_mF466234CAEE808134510C6D6D29CCFB6D7EEF4B5 (DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___0_tree, int32_t ___1_componentHash, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Int32,Unity.Services.Core.Internal.IServiceComponent>::MoveNext()
inline bool Enumerator_MoveNext_m1447F14395D07036FB65812381AD7A25F97799EE (Enumerator_tACD4FB2B54A5C2691CB962F194780DD49F8FA1C1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977*, const RuntimeMethod*))Enumerator_MoveNext_m21C503A713FDCA406492E2BE960D85320752E615_gshared)((Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977*)__this, method);
}
// System.Void Newtonsoft.Json.Linq.JObject::.ctor(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JObject__ctor_mBF0C20A0AABE0314582CA098C847E5757D24C202 (JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* __this, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___0_content, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m050AC0D9D6F681C25C12FBBC7DD71F926D206ED9 (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_ContainsKey_mA268E9B914DCE838DD0CD9D879BAAEECD0C677AA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mAB6AC7CC3190A5C78A01CB6298A778FBAA1DD050 (Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36* __this, int32_t ___0_key, RuntimeObject** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, (Il2CppFullySharedGenericAny*)___1_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_m0E484492BA83E1C79585B6C53AC5F8418E4C473F (Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* __this, int32_t ___0_key, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, (Il2CppFullySharedGenericAny*)___1_value, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Int32>::GetEnumerator()
inline Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, const RuntimeMethod* method)
{
	Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.Int32>::Dispose()
inline void Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923 (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Int32>::get_Current()
inline int32_t Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_inline (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method)
{
	int32_t il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.String Unity.Services.Core.Internal.DependencyTreeExtensions::GetComponentIdentifier(Unity.Services.Core.Internal.IServiceComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DependencyTreeExtensions_GetComponentIdentifier_mA42A0F2ED2930B38CD6BD6ADB5EB4564B1888CAD (RuntimeObject* ___0_component, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Core.Internal.DependencyTreeExtensions::IsProvided(Unity.Services.Core.Internal.DependencyTree,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DependencyTreeExtensions_IsProvided_m5CF82CE2D83F9EED333ABC06783E1902E30EA86A (DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___0_tree, int32_t ___1_componentTypeHash, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Core.Internal.DependencyTreeExtensions::IsOptional(Unity.Services.Core.Internal.DependencyTree,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DependencyTreeExtensions_IsOptional_m291995614CC4AA79B75123A32569FF7194759FB7 (DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___0_tree, int32_t ___1_componentTypeHash, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Int32>::MoveNext()
inline bool Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312 (Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9 (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* __this, int32_t ___0_key, int32_t* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, (Il2CppFullySharedGenericAny*)___1_value, method);
}
// System.Type Unity.Services.Core.Internal.MissingComponent::get_IntendedType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* MissingComponent_get_IntendedType_m97B07B28AD54A741B376A917DCE3635E9479CB59_inline (MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::.ctor(Unity.Services.Core.Internal.DependencyTree,System.Collections.Generic.ICollection`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter__ctor_m7FCD5445FC15A72A328BDE0828D9EFF109C4EBE7 (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___0_tree, RuntimeObject* ___1_target, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::RemoveUnprovidedOptionalDependenciesFromTree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependenciesFromTree_mD7E3080BAD1D57E3AF5F8B8258DABCE48E174183 (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyCollection`1<System.Int32> Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::GetPackageTypeHashes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DependencyTreeInitializeOrderSorter_GetPackageTypeHashes_mF3163B612844917C07D74BB7B78FD5C48ECE4653 (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark>::.ctor(System.Int32)
inline void Dictionary_2__ctor_m4738B97DDCA9D95595FB6AD1700D81D0D84A8205 (Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, int32_t, const RuntimeMethod*))Dictionary_2__ctor_mA5BF8973642D67EF56303F2867C75190756C3012_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, ___0_capacity, method);
}
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::SortTreeThrough(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter_SortTreeThrough_m2B43FBB987275FC528AD1B28C7B78A24E9FE088C (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, int32_t ___0_packageTypeHash, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.DependencyTreeSortFailedException::.ctor(Unity.Services.Core.Internal.DependencyTree,System.Collections.Generic.ICollection`1<System.Int32>,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeSortFailedException__ctor_m20BA3EA58FC55FCFCE5F857FA9A2EC228473891B (DependencyTreeSortFailedException_t039BF64DBDDFEB16DD187FE600445BF53C88A918* __this, DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___0_tree, RuntimeObject* ___1_target, Exception_t* ___2_inner, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::SortRegisteredPackagesIntoTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter_SortRegisteredPackagesIntoTarget_m50FFB4AE5A3282877E8541CAAD905CD7C2D8F831 (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>::get_Values()
inline ValueCollection_tE4D61B64F4018B78A9006C9160F50793B04633C6* Dictionary_2_get_Values_m53257BCC63E49ADE25842FBFFD8C94FEE95FB882 (Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* __this, const RuntimeMethod* method)
{
	ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* il2cppRetVal = ((  ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2_get_Values_mE06FB7381D8152E35F0716DC7FE13788362112A7_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
	return (ValueCollection_tE4D61B64F4018B78A9006C9160F50793B04633C6*)il2cppRetVal;
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Collections.Generic.List`1<System.Int32>>::GetEnumerator()
inline Enumerator_t9D9BEEB8A22FBACB996BABF18C06B5EBD63F2FC5 ValueCollection_GetEnumerator_m96C2EFA120FE8F75126D373B8D4FD3AE167E6FA7 (ValueCollection_tE4D61B64F4018B78A9006C9160F50793B04633C6* __this, const RuntimeMethod* method)
{
	Enumerator_t9D9BEEB8A22FBACB996BABF18C06B5EBD63F2FC5 il2cppRetVal;
	((  void (*) (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*, Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222*, const RuntimeMethod*))ValueCollection_GetEnumerator_m22BB9C6494A679370661D0B6DA1FA7EF744281EA_gshared)((ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*)__this, (Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Collections.Generic.List`1<System.Int32>>::Dispose()
inline void Enumerator_Dispose_m1745E1BB6B262D6D9FD7C9CEAF34F27242951E36 (Enumerator_t9D9BEEB8A22FBACB996BABF18C06B5EBD63F2FC5* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222*, const RuntimeMethod*))Enumerator_Dispose_mB05777B182DD6D8C5ED21811C2CA95405D2743F8_gshared)((Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222*)__this, method);
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Collections.Generic.List`1<System.Int32>>::get_Current()
inline List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* Enumerator_get_Current_mC4512C9422884FBA36066F5C42CED876CDA1DBDC_inline (Enumerator_t9D9BEEB8A22FBACB996BABF18C06B5EBD63F2FC5* __this, const RuntimeMethod* method)
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* il2cppRetVal;
	((  void (*) (Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m77681472C32B9ABB97AE602C0D4C365A0A8E8ACE_gshared_inline)((Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::RemoveUnprovidedOptionalDependencies(System.Collections.Generic.IList`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependencies_mA453D5055F260CB080F6EE69A2F0F7CB71DB975B (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, RuntimeObject* ___0_dependencyTypeHashes, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Int32,System.Collections.Generic.List`1<System.Int32>>::MoveNext()
inline bool Enumerator_MoveNext_mF016F088343F1C1EA14781644EF32427E2A99925 (Enumerator_t9D9BEEB8A22FBACB996BABF18C06B5EBD63F2FC5* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222*, const RuntimeMethod*))Enumerator_MoveNext_m297C3CEEAAC8D29D8F7C93E0801CD1D362D1C66F_gshared)((Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222*)__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mD8B8B63DBF027F12B871D705B68F1AA5EBC0ADC4 (Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0* __this, int32_t ___0_key, int32_t* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, (Il2CppFullySharedGenericAny*)___1_value, method);
}
// System.Void Unity.Services.Core.Internal.CircularDependencyException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircularDependencyException__ctor_m4C48FC29A6765759CEF10843D5A98C43F100B2E2 (CircularDependencyException_t1447C8D464045989784E78E658EFE30FF95153FC* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::MarkPackage(System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter_MarkPackage_m4B61E4A24ECB477D9ED1CE54FA232D5C6B01FD31 (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, int32_t ___0_packageTypeHash, int32_t ___1_mark, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<System.Int32> Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::GetDependencyTypeHashesFor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DependencyTreeInitializeOrderSorter_GetDependencyTypeHashesFor_mE4896E6FD46EC6A8D6E60540C9036B58ABC124AF (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, int32_t ___0_packageTypeHash, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::SortTreeThrough(System.Collections.Generic.IEnumerable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter_SortTreeThrough_m18D24A10B30F955EE42B8E82C104B8B8B8799F6D (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, RuntimeObject* ___0_dependencyTypeHashes, const RuntimeMethod* method) ;
// System.Int32 Unity.Services.Core.Internal.HashException::get_Hash()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashException_get_Hash_mFCB1368E904EFFF479EB757C721CBB832D50E023_inline (HashException_tFB110FD771A95A93E65290AC3969485D400E8855* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.DependencyTreePackageHashException::.ctor(System.Int32,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreePackageHashException__ctor_m5BF0D7C8B38D9F1E14F2AB38FB5D420528DB10E7 (DependencyTreePackageHashException_tEAE1BAE41D7E329841F3270A8E6491FBDB7CB547* __this, int32_t ___0_hash, String_t* ___1_message, Exception_t* ___2_inner, const RuntimeMethod* method) ;
// System.Int32 Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::GetPackageTypeHashFor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DependencyTreeInitializeOrderSorter_GetPackageTypeHashFor_mD0F3091C18741606134FBB1F6F1465F5EB8C0634 (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, int32_t ___0_componentTypeHash, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_mFAF50FE88A99867BD0A39B989DC9C9AC691D777B (Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0* __this, int32_t ___0_key, int32_t ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, (Il2CppFullySharedGenericAny)&___1_value, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.DependencyTreeComponentHashException::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeComponentHashException__ctor_mAE32DD2275602F7BC17EE37475304781149BCBC4 (DependencyTreeComponentHashException_t809B7EBA8BA1E4166E6F1FCCC21DA94BD7E0765A* __this, int32_t ___0_hash, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.DependencyTreePackageHashException::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreePackageHashException__ctor_m923C53FC638F20CEC12103AF32A773C7164D0E33 (DependencyTreePackageHashException_tEAE1BAE41D7E329841F3270A8E6491FBDB7CB547* __this, int32_t ___0_hash, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void System.Exception::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F (Exception_t* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.HashException::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashException__ctor_m5D99D5AC9A02DE153D481AA8BE5DF9D41FA0348E (HashException_tFB110FD771A95A93E65290AC3969485D400E8855* __this, int32_t ___0_hash, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.HashException::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashException__ctor_m5FBEC719A3F7F72B31F0C78070EB4D3129BFDA5B (HashException_tFB110FD771A95A93E65290AC3969485D400E8855* __this, int32_t ___0_hash, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.HashException::.ctor(System.Int32,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashException__ctor_m945EE76429F8A65F885AD4F0AADAC0DD9BC01655 (HashException_tFB110FD771A95A93E65290AC3969485D400E8855* __this, int32_t ___0_hash, String_t* ___1_message, Exception_t* ___2_inner, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.LockedPackageRegistry::get_Registry()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LockedPackageRegistry_get_Registry_m4B850C75E991B690CBE9F6E18E50DD0B8C93B51A_inline (LockedPackageRegistry_tD44860DBF1971F04B909E49EDEA6B483DD6A8499* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.PackageRegistry::set_Tree(Unity.Services.Core.Internal.DependencyTree)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PackageRegistry_set_Tree_m812C188D419BEE03291B07E2F0CF20D7BFA6AE0C_inline (PackageRegistry_tEC69FE10BB71F416B3FFACF803BFAF0EED0448E9* __this, DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___0_value, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.DependencyTree Unity.Services.Core.Internal.PackageRegistry::get_Tree()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* PackageRegistry_get_Tree_m346DB9D9068093E382434951B623D2593072E31B_inline (PackageRegistry_tEC69FE10BB71F416B3FFACF803BFAF0EED0448E9* __this, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>::get_Item(TKey)
inline List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* Dictionary_2_get_Item_m73FCA59D80BFDAFBF320F97A352248A68190C9DC (Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* __this, int32_t ___0_key, const RuntimeMethod* method)
{
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* il2cppRetVal;
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean System.Collections.Generic.List`1<System.Int32>::Contains(T)
inline bool List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Contains_m8DA550B703DFB328B69C4712064C667D7CA33DF1_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)&___0_item, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::Add(T)
inline void List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)&___0_item, method);
}
// System.Collections.Generic.IDictionary`2<System.String,System.String> Unity.Services.Core.Internal.CoreDiagnostics::get_CoreTags()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CoreDiagnostics_get_CoreTags_mC54A82C01F2093E739ED3991670E8E61ACBE1C20_inline (CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Unity.Services.Core.Internal.CoreDiagnostics::SendCoreDiagnosticsAsync(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* CoreDiagnostics_SendCoreDiagnosticsAsync_m384C35BCC6830722891A162716770A5D70A41AE7 (CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* __this, String_t* ___0_diagnosticName, Exception_t* ___1_exception, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Threading.Tasks.Task>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mC25101220D4DFE3C39E1A327AD5B6F29A69776B0 (Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, ___0_object, ___1_method, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task::ContinueWith(System.Action`1<System.Threading.Tasks.Task>,System.Threading.Tasks.TaskContinuationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_ContinueWith_m60AF32F00DBA4A8EBAFD3833E80AD464C8FB91AF (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* ___0_continuationAction, int32_t ___1_continuationOptions, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreDiagnostics/<SendCoreDiagnosticsAsync>d__24::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendCoreDiagnosticsAsyncU3Ed__24__ctor_mF977A0D7050CAC9700AE7423B8E15309059208FB (U3CSendCoreDiagnosticsAsyncU3Ed__24_tBD54EAE1168C81C1F5B4169A57653E2519682602* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Core.Internal.CoreDiagnostics/<SendCoreDiagnosticsAsync>d__24>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CSendCoreDiagnosticsAsyncU3Ed__24_tBD54EAE1168C81C1F5B4169A57653E2519682602_mE943D6C9AA1C237537F08EFB18656E99F0A1C8E7 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CSendCoreDiagnosticsAsyncU3Ed__24_tBD54EAE1168C81C1F5B4169A57653E2519682602** ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisIl2CppFullySharedGenericAny_m36201A5D380AC483FAE5E144880EEE2EB09D69E2_gshared)((AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)__this, (Il2CppFullySharedGenericAny*)___0_stateMachine, method);
}
// System.Void Unity.Services.Core.Internal.CoreLogger::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreLogger_LogException_m7129C6F678E086232211CBC0347F2300D0A42F3C (Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreDiagnostics/<GetOrCreateDiagnosticsAsync>d__26::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetOrCreateDiagnosticsAsyncU3Ed__26__ctor_m97EC7135A6CCAB1C5779C4E0FD89EC096340EB2F (U3CGetOrCreateDiagnosticsAsyncU3Ed__26_tAB11C3722F9B7391AAF98FE98D8F1770EBA1E4E5* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Telemetry.Internal.IDiagnostics>::Create()
inline AsyncTaskMethodBuilder_1_tAC33E355F01002DF8E0EFE1A1A42BE37728E8ABA AsyncTaskMethodBuilder_1_Create_m87FD370A0EBF4A65E6C3533E61C4484920815909 (const RuntimeMethod* method)
{
	AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4 il2cppRetVal = ((  AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4 (*) (const RuntimeMethod*))AsyncTaskMethodBuilder_1_Create_m852C283F3EAD7381A0CC8D14204899C192BDC20A_gshared)(method);
	return il2cpp_codegen_cast_struct<AsyncTaskMethodBuilder_1_tAC33E355F01002DF8E0EFE1A1A42BE37728E8ABA, AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4>(&il2cppRetVal);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Telemetry.Internal.IDiagnostics>::Start<Unity.Services.Core.Internal.CoreDiagnostics/<GetOrCreateDiagnosticsAsync>d__26>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CGetOrCreateDiagnosticsAsyncU3Ed__26_tAB11C3722F9B7391AAF98FE98D8F1770EBA1E4E5_mF680325A89DBCA7431662B2318B23FCFBC0231A8 (AsyncTaskMethodBuilder_1_tAC33E355F01002DF8E0EFE1A1A42BE37728E8ABA* __this, U3CGetOrCreateDiagnosticsAsyncU3Ed__26_tAB11C3722F9B7391AAF98FE98D8F1770EBA1E4E5** ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisIl2CppFullySharedGenericAny_m81177143E3D9118AF316E4C8E5D2AB2BF16C4E80_gshared)((AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*)__this, (Il2CppFullySharedGenericAny*)___0_stateMachine, method);
}
// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Telemetry.Internal.IDiagnostics>::get_Task()
inline Task_1_t7E11A949B0612EC938C5CBD9E723725819BC441E* AsyncTaskMethodBuilder_1_get_Task_mE540E124DCE7F1CB8696F83A177766A36660B22B (AsyncTaskMethodBuilder_1_tAC33E355F01002DF8E0EFE1A1A42BE37728E8ABA* __this, const RuntimeMethod* method)
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* il2cppRetVal = ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_get_Task_m90B072626CA4BF0F567616D4A035739B97F46D8B_gshared)((AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*)__this, method);
	return (Task_1_t7E11A949B0612EC938C5CBD9E723725819BC441E*)il2cppRetVal;
}
// System.Void System.Collections.Generic.Dictionary`2<System.String,System.String>::.ctor()
inline void Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052 (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Threading.Tasks.Task`1<Unity.Services.Core.Telemetry.Internal.IDiagnostics> Unity.Services.Core.Internal.CoreDiagnostics::GetOrCreateDiagnosticsAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t7E11A949B0612EC938C5CBD9E723725819BC441E* CoreDiagnostics_GetOrCreateDiagnosticsAsync_mA2C6BC3077D3EF4104FDE4C9BA26D4B8E640CFE2 (CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Unity.Services.Core.Telemetry.Internal.IDiagnostics>::GetAwaiter()
inline TaskAwaiter_1_t1A1F7733EB9E664C127E34842037B68E5D063862 Task_1_GetAwaiter_mA9635B16BD399B9B78349D3FE093048FC3DBAAEA (Task_1_t7E11A949B0612EC938C5CBD9E723725819BC441E* __this, const RuntimeMethod* method)
{
	TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 il2cppRetVal = ((  TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 (*) (/*System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, const RuntimeMethod*))Task_1_GetAwaiter_mADB36AF74C602F4C81E4752994696EA21CB0C0B6_gshared)((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)__this, method);
	return il2cpp_codegen_cast_struct<TaskAwaiter_1_t1A1F7733EB9E664C127E34842037B68E5D063862, TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8>(&il2cppRetVal);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Telemetry.Internal.IDiagnostics>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_m2A73A8B5A6C224F724151A09FFB30197550443F3 (TaskAwaiter_1_t1A1F7733EB9E664C127E34842037B68E5D063862* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_m7F153D4DF6456F60BABB1E7663CDDF3EFE172007_gshared)((TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*)__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Telemetry.Internal.IDiagnostics>,Unity.Services.Core.Internal.CoreDiagnostics/<SendCoreDiagnosticsAsync>d__24>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1A1F7733EB9E664C127E34842037B68E5D063862_TisU3CSendCoreDiagnosticsAsyncU3Ed__24_tBD54EAE1168C81C1F5B4169A57653E2519682602_m2A36ED4EF84CA5172A2A2D36C4397976A2347E4D (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t1A1F7733EB9E664C127E34842037B68E5D063862* ___0_awaiter, U3CSendCoreDiagnosticsAsyncU3Ed__24_tBD54EAE1168C81C1F5B4169A57653E2519682602** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAFEAD0E0483FFA3D862272177C9DE55F2C943F8F_gshared)((AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)__this, (Il2CppFullySharedGenericAny*)___0_awaiter, (Il2CppFullySharedGenericAny*)___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Telemetry.Internal.IDiagnostics>::GetResult()
inline RuntimeObject* TaskAwaiter_1_GetResult_mA69D647361B1C913C8965C30709C140E70F96285 (TaskAwaiter_1_t1A1F7733EB9E664C127E34842037B68E5D063862* __this, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal;
	((  void (*) (TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA0FDEC1F33CAC08401C6F3B9E5A5C6F1B4503EEB_gshared)((TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// Unity.Services.Core.Telemetry.Internal.IDiagnostics Unity.Services.Core.Internal.CoreDiagnostics::get_Diagnostics()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CoreDiagnostics_get_Diagnostics_m0BCD0E90698D2D4CC6032CF9B747FC95B0C5CE48_inline (CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* __this, const RuntimeMethod* method) ;
// Unity.Services.Core.Telemetry.Internal.IDiagnosticsComponentProvider Unity.Services.Core.Internal.CoreDiagnostics::get_DiagnosticsComponentProvider()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CoreDiagnostics_get_DiagnosticsComponentProvider_m3BC40B07EE22926D3F63B98F8F6858C382A253A7_inline (CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory>::GetAwaiter()
inline TaskAwaiter_1_tBFA82CA55CD8557D18B6898AF6B0A0A99BD72E51 Task_1_GetAwaiter_mB121C97207C4A962A8683FD039BAB8D65127BEF1 (Task_1_t4B1C4BF4F9776B675A807CB47E9EF3EF35A0048A* __this, const RuntimeMethod* method)
{
	TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 il2cppRetVal = ((  TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 (*) (/*System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, const RuntimeMethod*))Task_1_GetAwaiter_mADB36AF74C602F4C81E4752994696EA21CB0C0B6_gshared)((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)__this, method);
	return il2cpp_codegen_cast_struct<TaskAwaiter_1_tBFA82CA55CD8557D18B6898AF6B0A0A99BD72E51, TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8>(&il2cppRetVal);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mAC7F0C79B827DABCA2DB39A48B8A7BD88CF92FD8 (TaskAwaiter_1_tBFA82CA55CD8557D18B6898AF6B0A0A99BD72E51* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_m7F153D4DF6456F60BABB1E7663CDDF3EFE172007_gshared)((TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*)__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Telemetry.Internal.IDiagnostics>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory>,Unity.Services.Core.Internal.CoreDiagnostics/<GetOrCreateDiagnosticsAsync>d__26>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tBFA82CA55CD8557D18B6898AF6B0A0A99BD72E51_TisU3CGetOrCreateDiagnosticsAsyncU3Ed__26_tAB11C3722F9B7391AAF98FE98D8F1770EBA1E4E5_m049C389067C32D223B0306C0056C32F8A8F3C1AE (AsyncTaskMethodBuilder_1_tAC33E355F01002DF8E0EFE1A1A42BE37728E8ABA* __this, TaskAwaiter_1_tBFA82CA55CD8557D18B6898AF6B0A0A99BD72E51* ___0_awaiter, U3CGetOrCreateDiagnosticsAsyncU3Ed__26_tAB11C3722F9B7391AAF98FE98D8F1770EBA1E4E5** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m0B984271E33D944D547FB29917733016C411E5EB_gshared)((AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*)__this, (Il2CppFullySharedGenericAny*)___0_awaiter, (Il2CppFullySharedGenericAny*)___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory>::GetResult()
inline RuntimeObject* TaskAwaiter_1_GetResult_m5C6D8811EE0550DCAFA7CF0DB421D4B08EC79C34 (TaskAwaiter_1_tBFA82CA55CD8557D18B6898AF6B0A0A99BD72E51* __this, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal;
	((  void (*) (TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA0FDEC1F33CAC08401C6F3B9E5A5C6F1B4503EEB_gshared)((TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void Unity.Services.Core.Internal.CoreDiagnostics::set_Diagnostics(Unity.Services.Core.Telemetry.Internal.IDiagnostics)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CoreDiagnostics_set_Diagnostics_m2AF9AFE612FFCA542EFDB30AC5C15494D2E3982C_inline (CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.String>::GetAwaiter()
inline TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* __this, const RuntimeMethod* method)
{
	TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 il2cppRetVal = ((  TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 (*) (/*System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, const RuntimeMethod*))Task_1_GetAwaiter_mADB36AF74C602F4C81E4752994696EA21CB0C0B6_gshared)((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)__this, method);
	return il2cpp_codegen_cast_struct<TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6, TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8>(&il2cppRetVal);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8 (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_m7F153D4DF6456F60BABB1E7663CDDF3EFE172007_gshared)((TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*)__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Telemetry.Internal.IDiagnostics>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.String>,Unity.Services.Core.Internal.CoreDiagnostics/<GetOrCreateDiagnosticsAsync>d__26>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CGetOrCreateDiagnosticsAsyncU3Ed__26_tAB11C3722F9B7391AAF98FE98D8F1770EBA1E4E5_m1A884D29A8718F2E1B4ED80AE8EF60CCF3097711 (AsyncTaskMethodBuilder_1_tAC33E355F01002DF8E0EFE1A1A42BE37728E8ABA* __this, TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* ___0_awaiter, U3CGetOrCreateDiagnosticsAsyncU3Ed__26_tAB11C3722F9B7391AAF98FE98D8F1770EBA1E4E5** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m0B984271E33D944D547FB29917733016C411E5EB_gshared)((AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*)__this, (Il2CppFullySharedGenericAny*)___0_awaiter, (Il2CppFullySharedGenericAny*)___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.String>::GetResult()
inline String_t* TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9 (TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* __this, const RuntimeMethod* method)
{
	String_t* il2cppRetVal;
	((  void (*) (TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA0FDEC1F33CAC08401C6F3B9E5A5C6F1B4503EEB_gshared)((TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void Unity.Services.Core.Internal.CoreDiagnostics::SetProjectConfiguration(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreDiagnostics_SetProjectConfiguration_mA70A7004CE8C36FA8E0F17E5529F666D536CF987 (CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* __this, String_t* ___0_serializedProjectConfig, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Telemetry.Internal.IDiagnostics>::SetException(System.Exception)
inline void AsyncTaskMethodBuilder_1_SetException_m1472BDD400D3D9DA02202D6C4CA09042E6B22786 (AsyncTaskMethodBuilder_1_tAC33E355F01002DF8E0EFE1A1A42BE37728E8ABA* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*, Exception_t*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetException_m25948BB842FBF253D89FE8399CCB2325B491EE34_gshared)((AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*)__this, ___0_exception, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<Unity.Services.Core.Telemetry.Internal.IDiagnostics>::SetResult(TResult)
inline void AsyncTaskMethodBuilder_1_SetResult_mB4CC5FE74E6EF861C367C4AE42B6D3ABA866EE09 (AsyncTaskMethodBuilder_1_tAC33E355F01002DF8E0EFE1A1A42BE37728E8ABA* __this, RuntimeObject* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))AsyncTaskMethodBuilder_1_SetResult_mC5A4FB0746878FC882C792D8BCAF5277E1F24778_gshared)((AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*)__this, (Il2CppFullySharedGenericAny)___0_result, method);
}
// Unity.Services.Core.Telemetry.Internal.IMetrics Unity.Services.Core.Internal.CoreMetrics::get_Metrics()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CoreMetrics_get_Metrics_m083DD23C26E29687AE75738D8C57A507082F5329_inline (CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IDictionary`2<System.Type,Unity.Services.Core.Telemetry.Internal.IMetrics> Unity.Services.Core.Internal.CoreMetrics::get_AllPackageMetrics()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CoreMetrics_get_AllPackageMetrics_mAD22D81A59A7B591E50AAF078BF97FFD55E61AF0_inline (CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreMetrics::FindAndCacheAllPackageMetrics(Unity.Services.Core.Configuration.Internal.IProjectConfiguration,Unity.Services.Core.Telemetry.Internal.IMetricsFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreMetrics_FindAndCacheAllPackageMetrics_m1CAE6AD821223E7333BC0E0888F347B7C5DF82E2 (CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* __this, RuntimeObject* ___0_configuration, RuntimeObject* ___1_factory, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreMetrics::set_Metrics(Unity.Services.Core.Telemetry.Internal.IMetrics)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CoreMetrics_set_Metrics_mCC95B75592115A7250E45CDCBF77A62DDED6F1FB_inline (CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.String>()
inline StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_inline (const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (const RuntimeMethod*))Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_gshared_inline)(method);
	return (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)il2cppRetVal;
}
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,Unity.Services.Core.Telemetry.Internal.IMetrics>::.ctor()
inline void Dictionary_2__ctor_m419ED3D0511EB148508F35979CC025A6D1BD55BE (Dictionary_2_t970906E2A8141A4E3A182960BB43855C5AF0CE9E* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void Unity.Services.Core.Internal.CoreRegistry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistry__ctor_m507734CEE1C34622E217894B3D29D7AE0EC45314 (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreRegistry::set_Instance(Unity.Services.Core.Internal.CoreRegistry)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CoreRegistry_set_Instance_mBFC9CEE6661027ED4103B95A82ABD453555803D7_inline (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreMetrics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreMetrics__ctor_mF17592A929926B30C9FC2D17569B55740B15D7D2 (CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreMetrics::set_Instance(Unity.Services.Core.Internal.CoreMetrics)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CoreMetrics_set_Instance_mC18703DE5A475E77CBA000AA1602A2A9305AEFD2_inline (CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreDiagnostics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreDiagnostics__ctor_mFCD549A6812E3CEAB8A7E42B75A777F9061B3330 (CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreDiagnostics::set_Instance(Unity.Services.Core.Internal.CoreDiagnostics)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CoreDiagnostics_set_Instance_mFEA5BC5137F5C737B49419FA33F79339B1D43F2C_inline (CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* ___0_value, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.CoreRegistry::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* CoreRegistry_get_Instance_m73A64BD3CB78EF5AC698D1635B5872CEB9F9AFE2_inline (const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.CoreMetrics Unity.Services.Core.Internal.CoreMetrics::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* CoreMetrics_get_Instance_mE2CA807AAB4F16D20C28256A23E407E5DF5DE74E_inline (const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.CoreDiagnostics Unity.Services.Core.Internal.CoreDiagnostics::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* CoreDiagnostics_get_Instance_m190590CB1205EE50B22E6BA144371BD3976C0963_inline (const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.UnityServicesInternal::.ctor(Unity.Services.Core.Internal.CoreRegistry,Unity.Services.Core.Internal.CoreMetrics,Unity.Services.Core.Internal.CoreDiagnostics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServicesInternal__ctor_mDA89BB80FC660F4AAE12F656B10C5A3EAB719252 (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___0_registry, CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* ___1_metrics, CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* ___2_diagnostics, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.UnityServices::set_Instance(Unity.Services.Core.IUnityServices)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityServices_set_Instance_m4C250363E94392D1578BEDE13EF067416804C85C_inline (RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object> Unity.Services.Core.UnityServices::get_InstantiationCompletion()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* UnityServices_get_InstantiationCompletion_mA867A00609D9BFFD19B8404887CA781DB60F0AE7_inline (const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.UnityServicesInitializer/<EnableServicesInitializationAsync>d__1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableServicesInitializationAsyncU3Ed__1__ctor_mEC213C6295048EFAE08891614F998950CDB1CCDC (U3CEnableServicesInitializationAsyncU3Ed__1_tAC20D219AB4876F92E378792660AF104511FA482* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.AsyncVoidMethodBuilder System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Create()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67 (const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::Start<Unity.Services.Core.Internal.UnityServicesInitializer/<EnableServicesInitializationAsync>d__1>(TStateMachine&)
inline void AsyncVoidMethodBuilder_Start_TisU3CEnableServicesInitializationAsyncU3Ed__1_tAC20D219AB4876F92E378792660AF104511FA482_m75A1700AFE3533C22131E1099D51EE8E10E8475B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, U3CEnableServicesInitializationAsyncU3Ed__1_tAC20D219AB4876F92E378792660AF104511FA482** ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncVoidMethodBuilder_Start_TisIl2CppFullySharedGenericAny_mF2CE0E0265F13C43AAB330B33509540A399C62A2_gshared)((AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)__this, (Il2CppFullySharedGenericAny*)___0_stateMachine, method);
}
// Unity.Services.Core.IUnityServices Unity.Services.Core.UnityServices::get_Instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UnityServices_get_Instance_m5BA0D657E90B0A0837290E98A0CB13F9D39CA0CD_inline (const RuntimeMethod* method) ;
// System.Threading.Tasks.Task Unity.Services.Core.Internal.UnityServicesInternal::EnableInitializationAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* UnityServicesInternal_EnableInitializationAsync_m55FC6F901CD841698285288DA3F2AC772F2B7E35 (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Unity.Services.Core.Internal.UnityServicesInitializer/<EnableServicesInitializationAsync>d__1>(TAwaiter&,TStateMachine&)
inline void AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CEnableServicesInitializationAsyncU3Ed__1_tAC20D219AB4876F92E378792660AF104511FA482_m4D6CF3A21D281806C26D1E97BB72B61995A1BA55 (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CEnableServicesInitializationAsyncU3Ed__1_tAC20D219AB4876F92E378792660AF104511FA482** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m03130C9822AF7F0C435E5DAF03F245D2F35FC6EE_gshared)((AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D*)__this, (Il2CppFullySharedGenericAny*)___0_awaiter, (Il2CppFullySharedGenericAny*)___1_stateMachine, method);
}
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncVoidMethodBuilder::SetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC (AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.UnityServicesInternal/<InitializeAsync>d__20::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeAsyncU3Ed__20__ctor_m38FC37EFEC466A3A65F312A70D1081E13699BE77 (U3CInitializeAsyncU3Ed__20_t8926D76B0A6C9F3E94911702F6B452F1AE90A1B9* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Core.Internal.UnityServicesInternal/<InitializeAsync>d__20>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CInitializeAsyncU3Ed__20_t8926D76B0A6C9F3E94911702F6B452F1AE90A1B9_mA3EADA7D645D36CB94B9FE813F2B6FBDC3AA8D15 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CInitializeAsyncU3Ed__20_t8926D76B0A6C9F3E94911702F6B452F1AE90A1B9** ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisIl2CppFullySharedGenericAny_m36201A5D380AC483FAE5E144880EEE2EB09D69E2_gshared)((AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)__this, (Il2CppFullySharedGenericAny*)___0_stateMachine, method);
}
// System.Void Unity.Services.Core.Internal.UnityServicesInternal/<InitializeServicesAsync>d__22::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeServicesAsyncU3Ed__22__ctor_m70B0FC84D5F8B2AC1494C1A6A89B4E7BC83329F1 (U3CInitializeServicesAsyncU3Ed__22_tE6E881564EFD3F20C6FB3EF0B94D4F2BD1F65CD9* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Core.Internal.UnityServicesInternal/<InitializeServicesAsync>d__22>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CInitializeServicesAsyncU3Ed__22_tE6E881564EFD3F20C6FB3EF0B94D4F2BD1F65CD9_m7C49F477B362795250C063FA437C0F918700DCD3 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CInitializeServicesAsyncU3Ed__22_tE6E881564EFD3F20C6FB3EF0B94D4F2BD1F65CD9** ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisIl2CppFullySharedGenericAny_m36201A5D380AC483FAE5E144880EEE2EB09D69E2_gshared)((AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)__this, (Il2CppFullySharedGenericAny*)___0_stateMachine, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>::GetEnumerator()
inline Enumerator_t846076437B615B61591349EDED51543E1164910B List_1_GetEnumerator_mBA9BF8AA05F106553CEE6FEA9817EE1C6CFF88D4 (List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF* __this, const RuntimeMethod* method)
{
	Enumerator_t846076437B615B61591349EDED51543E1164910B il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))List_1_GetEnumerator_m8B2A92ACD4FBA5FBDC3F6F4F5C23A0DDF491DA61_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.List`1/Enumerator<Unity.Services.Core.Internal.PackageInitializationInfo>::Dispose()
inline void Enumerator_Dispose_mD65DE20DDDC29FC2C2FCC26ADD8C8F5961882D57 (Enumerator_t846076437B615B61591349EDED51543E1164910B* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_Dispose_mFE1EBE6F6425283FEAEAE7C79D02CDE4F9D367E8_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<Unity.Services.Core.Internal.PackageInitializationInfo>::get_Current()
inline PackageInitializationInfo_t3A1BAF9D785E161A9856F3C5769D513C65E49563* Enumerator_get_Current_m6BAA9C755EFADC323C0D40D59AC67DEBEACC8957_inline (Enumerator_t846076437B615B61591349EDED51543E1164910B* __this, const RuntimeMethod* method)
{
	PackageInitializationInfo_t3A1BAF9D785E161A9856F3C5769D513C65E49563* il2cppRetVal;
	((  void (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// Unity.Services.Core.Internal.CoreMetrics Unity.Services.Core.Internal.UnityServicesInternal::get_Metrics()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* UnityServicesInternal_get_Metrics_m0052DC91F8B8F1CE98E2A38F979D96C9A2D47750_inline (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreMetrics::SendInitTimeMetricForPackage(System.Type,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreMetrics_SendInitTimeMetricForPackage_m20190AC644BB9982E2833904EFE519C088EA566F (CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* __this, Type_t* ___0_packageType, double ___1_initTimeSeconds, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<Unity.Services.Core.Internal.PackageInitializationInfo>::MoveNext()
inline bool Enumerator_MoveNext_mEC407F859D14E6AC0034673717B5A1544CD9163C (Enumerator_t846076437B615B61591349EDED51543E1164910B* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*, const RuntimeMethod*))Enumerator_MoveNext_m8D8E5E878AF0A88A535AB1AB5BA4F23E151A678A_gshared)((Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF*)__this, method);
}
// System.Void Unity.Services.Core.Internal.UnityServicesInternal/<EnableInitializationAsync>d__24::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableInitializationAsyncU3Ed__24__ctor_m95A661B4A3F49036679CA410E52233CC0FDDE631 (U3CEnableInitializationAsyncU3Ed__24_t4DF9B311AF91CDF203824EA1DD5CEAAC52ABA88C* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::Start<Unity.Services.Core.Internal.UnityServicesInternal/<EnableInitializationAsync>d__24>(TStateMachine&)
inline void AsyncTaskMethodBuilder_Start_TisU3CEnableInitializationAsyncU3Ed__24_t4DF9B311AF91CDF203824EA1DD5CEAAC52ABA88C_m233F613A0750E40DE9630448ADFA0022A6F9CE29 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, U3CEnableInitializationAsyncU3Ed__24_t4DF9B311AF91CDF203824EA1DD5CEAAC52ABA88C** ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_Start_TisIl2CppFullySharedGenericAny_m36201A5D380AC483FAE5E144880EEE2EB09D69E2_gshared)((AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)__this, (Il2CppFullySharedGenericAny*)___0_stateMachine, method);
}
// System.Threading.Tasks.TaskStatus System.Threading.Tasks.Task::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Task_get_Status_m9707FD4B44416BA03FA2FDBEB3D0F0F281D90AD8 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Core.Internal.UnityServicesInternal::HasRequestedInitialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityServicesInternal_HasRequestedInitialization_m1E00108399C4206684219675F75D7269F06C5A03 (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Core.Internal.UnityServicesInternal::<InitializeAsync>g__HasInitializationFailed|20_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityServicesInternal_U3CInitializeAsyncU3Eg__HasInitializationFailedU7C20_0_m6BEA3DDEB222184655852BBAD3EFC4952FA36F4A (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.UnityServicesInternal::set_Options(Unity.Services.Core.InitializationOptions)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityServicesInternal_set_Options_mE929B5A9BAFF0C56FE3ADA56904DB80BA1A08E9E_inline (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* ___0_value, const RuntimeMethod* method) ;
// Unity.Services.Core.ServicesInitializationState Unity.Services.Core.Internal.UnityServicesInternal::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnityServicesInternal_get_State_mDBBCB10039E6F2A9E04A054AD914C7204E5D39D4_inline (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Object>::GetAwaiter()
inline TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3 (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method)
{
	TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 il2cppRetVal = ((  TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 (*) (/*System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, const RuntimeMethod*))Task_1_GetAwaiter_mADB36AF74C602F4C81E4752994696EA21CB0C0B6_gshared)((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)__this, method);
	return il2cpp_codegen_cast_struct<TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA, TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8>(&il2cppRetVal);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54 (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_m7F153D4DF6456F60BABB1E7663CDDF3EFE172007_gshared)((TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*)__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>,Unity.Services.Core.Internal.UnityServicesInternal/<InitializeAsync>d__20>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CInitializeAsyncU3Ed__20_t8926D76B0A6C9F3E94911702F6B452F1AE90A1B9_m10E35F0B9182DAB9EFA11A799ECA810449B75401 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* ___0_awaiter, U3CInitializeAsyncU3Ed__20_t8926D76B0A6C9F3E94911702F6B452F1AE90A1B9** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAFEAD0E0483FFA3D862272177C9DE55F2C943F8F_gshared)((AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)__this, (Il2CppFullySharedGenericAny*)___0_awaiter, (Il2CppFullySharedGenericAny*)___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
inline RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method)
{
	RuntimeObject* il2cppRetVal;
	((  void (*) (TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA0FDEC1F33CAC08401C6F3B9E5A5C6F1B4503EEB_gshared)((TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Threading.Tasks.Task Unity.Services.Core.Internal.UnityServicesInternal::InitializeServicesAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* UnityServicesInternal_InitializeServicesAsync_mD1A530783D1BAC5937E64849348EFFCD3B26AB9E (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Unity.Services.Core.Internal.UnityServicesInternal/<InitializeAsync>d__20>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeAsyncU3Ed__20_t8926D76B0A6C9F3E94911702F6B452F1AE90A1B9_mF608E440508BF5657279C236B08ABC71997A1E7F (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CInitializeAsyncU3Ed__20_t8926D76B0A6C9F3E94911702F6B452F1AE90A1B9** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAFEAD0E0483FFA3D862272177C9DE55F2C943F8F_gshared)((AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)__this, (Il2CppFullySharedGenericAny*)___0_awaiter, (Il2CppFullySharedGenericAny*)___1_stateMachine, method);
}
// System.Void Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0/<<InitializeServicesAsync>g__InitializePackagesAsync|1>d::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed__ctor_m70BE2347469F4151FEE2C44FD8F5DAAAF84B96C5 (U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_t7D84CF2A9502FB46D141D018B52A52227F7FABD6* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>>::Start<Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0/<<InitializeServicesAsync>g__InitializePackagesAsync|1>d>(TStateMachine&)
inline void AsyncTaskMethodBuilder_1_Start_TisU3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_t7D84CF2A9502FB46D141D018B52A52227F7FABD6_mE28B11E4C3BC8098F20388D7C928E45F3E7BF722 (AsyncTaskMethodBuilder_1_t48F43EEBD362A47F5627122EA5697AD97B922620* __this, U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_t7D84CF2A9502FB46D141D018B52A52227F7FABD6** ___0_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_Start_TisIl2CppFullySharedGenericAny_m81177143E3D9118AF316E4C8E5D2AB2BF16C4E80_gshared)((AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*)__this, (Il2CppFullySharedGenericAny*)___0_stateMachine, method);
}
// System.Void Unity.Services.Core.Internal.UnityServicesInternal::set_State(Unity.Services.Core.ServicesInitializationState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityServicesInternal_set_State_mE9661C52A8B99CE53279A6D197F263F082A114D4_inline (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.CoreDiagnostics Unity.Services.Core.Internal.UnityServicesInternal::get_Diagnostics()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* UnityServicesInternal_get_Diagnostics_m54973089DA076B6D42CA7E9143F2A10BBC508FA3_inline (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreDiagnostics::SendCircularDependencyDiagnostics(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreDiagnostics_SendCircularDependencyDiagnostics_m9A32DD117AC9C01104B3B3EA17A886C46F6EA858 (CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreDiagnostics::SendOperateServicesInitDiagnostics(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreDiagnostics_SendOperateServicesInitDiagnostics_m01E3A52B731604F17403740C31004A83104E8461 (CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* __this, Exception_t* ___0_exception, const RuntimeMethod* method) ;
// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.UnityServicesInternal::get_Registry()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* UnityServicesInternal_get_Registry_m523CDA2793D02C2E7966D8B25FF533248D8437A4_inline (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreRegistry::LockComponentRegistration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistry_LockComponentRegistration_mB4ED90ED4F7621588195C9922C9A669C69C831BC (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreMetrics::SendAllPackagesInitSuccessMetric()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreMetrics_SendAllPackagesInitSuccessMetric_m6A0C4AD97DA5F22FCA1723F91096E1AC63400AC1 (CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreMetrics::SendAllPackagesInitTimeMetric(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreMetrics_SendAllPackagesInitTimeMetric_m28BB6D84801BEFC36F21D22D148C2C53C19456C6 (CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* __this, double ___0_initTimeSeconds, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreRegistryInitializer::.ctor(Unity.Services.Core.Internal.CoreRegistry,System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistryInitializer__ctor_mBE9C46715DF41A8B1CF31CCAC9166A212318B156 (CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03* __this, CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___0_registry, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___1_sortedPackageTypeHashes, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>> Unity.Services.Core.Internal.CoreRegistryInitializer::InitializeRegistryAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t727821A7F4CD62528E4941D3DA8119B6A7A3D4BC* CoreRegistryInitializer_InitializeRegistryAsync_m3E1030C1B0E033F76CF20DC208555AB915C62BF8 (CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03* __this, const RuntimeMethod* method) ;
// System.Runtime.CompilerServices.TaskAwaiter`1<TResult> System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>>::GetAwaiter()
inline TaskAwaiter_1_t03489502EBF553A2EE84E314C5C36D6E8F28D504 Task_1_GetAwaiter_m0192286BA9B87B3F93EC06D50C0D81D5C38E5335 (Task_1_t727821A7F4CD62528E4941D3DA8119B6A7A3D4BC* __this, const RuntimeMethod* method)
{
	TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 il2cppRetVal = ((  TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 (*) (/*System.Threading.Tasks.Task`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, const RuntimeMethod*))Task_1_GetAwaiter_mADB36AF74C602F4C81E4752994696EA21CB0C0B6_gshared)((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)__this, method);
	return il2cpp_codegen_cast_struct<TaskAwaiter_1_t03489502EBF553A2EE84E314C5C36D6E8F28D504, TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8>(&il2cppRetVal);
}
// System.Boolean System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>>::get_IsCompleted()
inline bool TaskAwaiter_1_get_IsCompleted_mC4E216C5AFC1142205CD3AB88A89C42B37DE329B (TaskAwaiter_1_t03489502EBF553A2EE84E314C5C36D6E8F28D504* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*, const RuntimeMethod*))TaskAwaiter_1_get_IsCompleted_m7F153D4DF6456F60BABB1E7663CDDF3EFE172007_gshared)((TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*)__this, method);
}
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>>::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>>,Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0/<<InitializeServicesAsync>g__InitializePackagesAsync|1>d>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t03489502EBF553A2EE84E314C5C36D6E8F28D504_TisU3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_t7D84CF2A9502FB46D141D018B52A52227F7FABD6_m8ABB9ED1C779D3CA6CE0C864F256DE0E94A0C0C5 (AsyncTaskMethodBuilder_1_t48F43EEBD362A47F5627122EA5697AD97B922620* __this, TaskAwaiter_1_t03489502EBF553A2EE84E314C5C36D6E8F28D504* ___0_awaiter, U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_t7D84CF2A9502FB46D141D018B52A52227F7FABD6** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m0B984271E33D944D547FB29917733016C411E5EB_gshared)((AsyncTaskMethodBuilder_1_t9A3ADCFF6503F4230FFD38F6C333EBCF1A034AF4*)__this, (Il2CppFullySharedGenericAny*)___0_awaiter, (Il2CppFullySharedGenericAny*)___1_stateMachine, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>>::GetResult()
inline List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF* TaskAwaiter_1_GetResult_m79C78561964DA7B1F93E790960A196E79A7E7310 (TaskAwaiter_1_t03489502EBF553A2EE84E314C5C36D6E8F28D504* __this, const RuntimeMethod* method)
{
	List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF* il2cppRetVal;
	((  void (*) (TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA0FDEC1F33CAC08401C6F3B9E5A5C6F1B4503EEB_gshared)((TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_mDBB05CBB8FBBCD2F03D5B8743AFC609009C0CCEC (U3CU3Ec__DisplayClass22_0_tF8E2FFAF15B36CA0EEFCE72345468844F8E9AD2C* __this, const RuntimeMethod* method) ;
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915 (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0::<InitializeServicesAsync>g__FailServicesInitialization|2(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3CInitializeServicesAsyncU3Eg__FailServicesInitializationU7C2_mBFC7350F4146AB29FE8C595C05249A3595824B04 (U3CU3Ec__DisplayClass22_0_tF8E2FFAF15B36CA0EEFCE72345468844F8E9AD2C* __this, Exception_t* ___0_reason, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>::get_Count()
inline int32_t Dictionary_2_get_Count_m9284604119CAF32B586959EFA2260DABA1C5C31C (Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2_get_Count_mBB454C6743410D3E06D44D494D4D6FF4CBBBDB1E_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Int32>::.ctor(System.Int32)
inline void List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98 (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))List_1__ctor_m3069CACB5775E013107F559C825422266A09F9E8_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_capacity, method);
}
// System.Void Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0::<InitializeServicesAsync>g__SortPackages|0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3CInitializeServicesAsyncU3Eg__SortPackagesU7C0_m3EF4EFD7DF837E39D66E554ED45A6057383A3162 (U3CU3Ec__DisplayClass22_0_tF8E2FFAF15B36CA0EEFCE72345468844F8E9AD2C* __this, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>> Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0::<InitializeServicesAsync>g__InitializePackagesAsync|1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t727821A7F4CD62528E4941D3DA8119B6A7A3D4BC* U3CU3Ec__DisplayClass22_0_U3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1_m585E1B8F7070EDDBA40606D3425F8E36FDF8ECD5 (U3CU3Ec__DisplayClass22_0_tF8E2FFAF15B36CA0EEFCE72345468844F8E9AD2C* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>>,Unity.Services.Core.Internal.UnityServicesInternal/<InitializeServicesAsync>d__22>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t03489502EBF553A2EE84E314C5C36D6E8F28D504_TisU3CInitializeServicesAsyncU3Ed__22_tE6E881564EFD3F20C6FB3EF0B94D4F2BD1F65CD9_mBC0C9FB8ECCDDFF344176E0CE5AFF4397005F9D1 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_1_t03489502EBF553A2EE84E314C5C36D6E8F28D504* ___0_awaiter, U3CInitializeServicesAsyncU3Ed__22_tE6E881564EFD3F20C6FB3EF0B94D4F2BD1F65CD9** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAFEAD0E0483FFA3D862272177C9DE55F2C943F8F_gshared)((AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)__this, (Il2CppFullySharedGenericAny*)___0_awaiter, (Il2CppFullySharedGenericAny*)___1_stateMachine, method);
}
// System.Void Unity.Services.Core.Internal.UnityServicesInternal::SendInitializationMetrics(System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServicesInternal_SendInitializationMetrics_m130644476F26813A9527EC8DF92DF8AE0CA33996 (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF* ___0_packageInitInfos, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0::<InitializeServicesAsync>g__SucceedServicesInitialization|3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3CInitializeServicesAsyncU3Eg__SucceedServicesInitializationU7C3_m405CF9855B1CEED7DF649B633CB7F269244F15A3 (U3CU3Ec__DisplayClass22_0_tF8E2FFAF15B36CA0EEFCE72345468844F8E9AD2C* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.CoreRegistry::LockPackageRegistration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistry_LockPackageRegistration_m031751BE6E5CBB6D30AAE2B64DAF04FC0EEA5A0B (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.CompilerServices.AsyncTaskMethodBuilder::AwaitUnsafeOnCompleted<System.Runtime.CompilerServices.TaskAwaiter,Unity.Services.Core.Internal.UnityServicesInternal/<EnableInitializationAsync>d__24>(TAwaiter&,TStateMachine&)
inline void AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CEnableInitializationAsyncU3Ed__24_t4DF9B311AF91CDF203824EA1DD5CEAAC52ABA88C_m1BDEC89BB66589749DAF15A8EFF5EA7E06CEB476 (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* __this, TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* ___0_awaiter, U3CEnableInitializationAsyncU3Ed__24_t4DF9B311AF91CDF203824EA1DD5CEAAC52ABA88C** ___1_stateMachine, const RuntimeMethod* method)
{
	((  void (*) (AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAFEAD0E0483FFA3D862272177C9DE55F2C943F8F_gshared)((AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06*)__this, (Il2CppFullySharedGenericAny*)___0_awaiter, (Il2CppFullySharedGenericAny*)___1_stateMachine, method);
}
// System.Void Unity.Services.Core.Internal.JsonConvertDefaultSettingsScope::.ctor(Newtonsoft.Json.JsonSerializerSettings,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConvertDefaultSettingsScope__ctor_m9FD0A65D85DE5E3E5304A89E5135E62ECC58ECA7 (JsonConvertDefaultSettingsScope_t99E008BFD0664910D1F92DB4536FC5E698C8EE0A* __this, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___0_invalidSettings, bool ___1_autoApply, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.JsonConvertDefaultSettingsScope/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m2C06B4781B8CA2B5CF68C47BD418CA23D287FDB3 (U3CU3Ec__DisplayClass3_0_tD8C272FFDF458F8EBAAADC6165B340FBEA7F5C6B* __this, const RuntimeMethod* method) ;
// System.Void System.Func`1<Newtonsoft.Json.JsonSerializerSettings>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_mCA643E39063F9A7008EEF900CA5C8A9BBFF7F799 (Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_1__ctor_mC73A4FCEBBAB90CB7B7AB16321F3F98FBBF12596_gshared)((Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*)__this, ___0_object, ___1_method, method);
}
// System.Void Unity.Services.Core.Internal.JsonConvertDefaultSettingsScope::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConvertDefaultSettingsScope_Apply_m5BB175E7B00CE7BA4F810514CBA28C4363E028BD (JsonConvertDefaultSettingsScope_t99E008BFD0664910D1F92DB4536FC5E698C8EE0A* __this, const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonSerializerSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializerSettings__ctor_mE1C9A90375BA88DF7F6911F1F96AEEC6A98CD22F (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.JsonConverter>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m59B1652DC03FD212770C484772B3505B50B0982F (List_1_t2D3373CEE35E29CDEB531AF0926BF9553626BFDF* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mACCB7726C2E9728AE336F99C68B334459F9F30FB_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (RuntimeObject*)___0_collection, method);
}
// System.Void System.Collections.Generic.List`1<Newtonsoft.Json.JsonConverter>::.ctor()
inline void List_1__ctor_m4D3A0C3BB61FAE2CD50F2FA207948E380C0611FE (List_1_t2D3373CEE35E29CDEB531AF0926BF9553626BFDF* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void Newtonsoft.Json.JsonSerializerSettings::set_Converters(System.Collections.Generic.IList`1<Newtonsoft.Json.JsonConverter>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonSerializerSettings_set_Converters_mF3D958F510BA4BBC18E2D2088EF9D3FC839AFB4C_inline (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) ;
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.JsonConvertDefaultSettingsScope::Revert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConvertDefaultSettingsScope_Revert_mC8B3062748C6D0E7A70233D4EF072B7A863AC844 (JsonConvertDefaultSettingsScope_t99E008BFD0664910D1F92DB4536FC5E698C8EE0A* __this, const RuntimeMethod* method) ;
// System.Func`1<Newtonsoft.Json.JsonSerializerSettings> Newtonsoft.Json.JsonConvert::get_DefaultSettings()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* JsonConvert_get_DefaultSettings_m9E0FA2F335896BD62E6CD277295E7FF580667E4B_inline (const RuntimeMethod* method) ;
// System.Void Newtonsoft.Json.JsonConvert::set_DefaultSettings(System.Func`1<Newtonsoft.Json.JsonSerializerSettings>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonConvert_set_DefaultSettings_m52DE770DC408DFC48DE586C160F600E083EBBFB4_inline (Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* ___0_value, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequest/Result UnityEngine.Networking.UnityWebRequest::get_result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void Unity.Services.Core.Internal.UnityWebRequestUtils/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m075F5F3DE1F9440556035D45480BD01F7A8932C1 (U3CU3Ec__DisplayClass2_0_tE8A20757B5DDF368F4E0E479CD24294A218C58C3* __this, const RuntimeMethod* method) ;
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.String>::.ctor()
inline void TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1 (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, const RuntimeMethod*))TaskCompletionSource_1__ctor_mD6DB19F66035FC77675F1ED9FE696A65CF9C0F23_gshared)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, method);
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequest::Get(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequest_Get_m1A332EE069BB5052368307F254A5A7627BB5FD86 (String_t* ___0_uri, const RuntimeMethod* method) ;
// UnityEngine.Networking.UnityWebRequestAsyncOperation UnityEngine.Networking.UnityWebRequest::SendWebRequest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.AsyncOperation>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m685A441EC9FAC9D554B26FA83A08F4BEF96DFF0E_gshared)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, ___0_object, ___1_method, method);
}
// System.Void UnityEngine.AsyncOperation::add_completed(System.Action`1<UnityEngine.AsyncOperation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_add_completed_mD6F21BA8127D6D4B7ABDEFAA995A7A347A20A793 (AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* __this, Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___0_value, const RuntimeMethod* method) ;
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1<System.String>::get_Task()
inline Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_inline (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* __this, const RuntimeMethod* method)
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* il2cppRetVal = ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m4994989AA2174905CF517397D0F6B082ADC29EE9_gshared_inline)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, method);
	return (Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0*)il2cppRetVal;
}
// UnityEngine.Networking.UnityWebRequest UnityEngine.Networking.UnityWebRequestAsyncOperation::get_webRequest()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequestAsyncOperation_get_webRequest_mF67D15420C7C1C4DCA1BD6F839048A0542998BC3_inline (UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Services.Core.Internal.UnityWebRequestUtils::HasSucceeded(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequestUtils_HasSucceeded_m06CCE15DA3423C35C7629483DD6BEB166AE4C32D (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___0_self, const RuntimeMethod* method) ;
// UnityEngine.Networking.DownloadHandler UnityEngine.Networking.UnityWebRequest::get_downloadHandler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.DownloadHandler::get_text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8 (DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.String>::TrySetResult(TResult)
inline bool TaskCompletionSource_1_TrySetResult_mA357F52C522A4C476C88EDC990A312436084B176 (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* __this, String_t* ___0_result, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))TaskCompletionSource_1_TrySetResult_m4C03ED1589D48A864F726E0FDF00D8E976DDCE0F_gshared)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, (Il2CppFullySharedGenericAny)___0_result, method);
}
// System.String UnityEngine.Networking.UnityWebRequest::get_url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_url_mA3BF205A6FCA2BF66A62174182BE84553CE3FFA8 (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Networking.UnityWebRequest::get_error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.Boolean System.Threading.Tasks.TaskCompletionSource`1<System.String>::TrySetException(System.Exception)
inline bool TaskCompletionSource_1_TrySetException_m5E898CFE10256D572CC17EE51C94AD861200FC6C (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* __this, Exception_t* ___0_exception, const RuntimeMethod* method)
{
	return ((  bool (*) (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*, Exception_t*, const RuntimeMethod*))TaskCompletionSource_1_TrySetException_m013D2C6E801E5EA838414D149B4A5FE9834DE0EB_gshared)((TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970*)__this, ___0_exception, method);
}
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
// Conversion methods for marshalling of: Unity.Services.Wire.Internal.ChannelToken
IL2CPP_EXTERN_C void ChannelToken_t65B05271650820AF814458D7AB1C06A16111EE5F_marshal_pinvoke(const ChannelToken_t65B05271650820AF814458D7AB1C06A16111EE5F& unmarshaled, ChannelToken_t65B05271650820AF814458D7AB1C06A16111EE5F_marshaled_pinvoke& marshaled)
{
	marshaled.___ChannelName_0 = il2cpp_codegen_marshal_string(unmarshaled.___ChannelName_0);
	marshaled.___Token_1 = il2cpp_codegen_marshal_string(unmarshaled.___Token_1);
}
IL2CPP_EXTERN_C void ChannelToken_t65B05271650820AF814458D7AB1C06A16111EE5F_marshal_pinvoke_back(const ChannelToken_t65B05271650820AF814458D7AB1C06A16111EE5F_marshaled_pinvoke& marshaled, ChannelToken_t65B05271650820AF814458D7AB1C06A16111EE5F& unmarshaled)
{
	unmarshaled.___ChannelName_0 = il2cpp_codegen_marshal_string_result(marshaled.___ChannelName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ChannelName_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___ChannelName_0));
	unmarshaled.___Token_1 = il2cpp_codegen_marshal_string_result(marshaled.___Token_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Token_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___Token_1));
}
// Conversion method for clean up from marshalling of: Unity.Services.Wire.Internal.ChannelToken
IL2CPP_EXTERN_C void ChannelToken_t65B05271650820AF814458D7AB1C06A16111EE5F_marshal_pinvoke_cleanup(ChannelToken_t65B05271650820AF814458D7AB1C06A16111EE5F_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___ChannelName_0);
	marshaled.___ChannelName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___Token_1);
	marshaled.___Token_1 = NULL;
}
// Conversion methods for marshalling of: Unity.Services.Wire.Internal.ChannelToken
IL2CPP_EXTERN_C void ChannelToken_t65B05271650820AF814458D7AB1C06A16111EE5F_marshal_com(const ChannelToken_t65B05271650820AF814458D7AB1C06A16111EE5F& unmarshaled, ChannelToken_t65B05271650820AF814458D7AB1C06A16111EE5F_marshaled_com& marshaled)
{
	marshaled.___ChannelName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___ChannelName_0);
	marshaled.___Token_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___Token_1);
}
IL2CPP_EXTERN_C void ChannelToken_t65B05271650820AF814458D7AB1C06A16111EE5F_marshal_com_back(const ChannelToken_t65B05271650820AF814458D7AB1C06A16111EE5F_marshaled_com& marshaled, ChannelToken_t65B05271650820AF814458D7AB1C06A16111EE5F& unmarshaled)
{
	unmarshaled.___ChannelName_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___ChannelName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ChannelName_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___ChannelName_0));
	unmarshaled.___Token_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___Token_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Token_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___Token_1));
}
// Conversion method for clean up from marshalling of: Unity.Services.Wire.Internal.ChannelToken
IL2CPP_EXTERN_C void ChannelToken_t65B05271650820AF814458D7AB1C06A16111EE5F_marshal_com_cleanup(ChannelToken_t65B05271650820AF814458D7AB1C06A16111EE5F_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___ChannelName_0);
	marshaled.___ChannelName_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___Token_1);
	marshaled.___Token_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Services.Qos.Internal.QosResult
IL2CPP_EXTERN_C void QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27_marshal_pinvoke(const QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27& unmarshaled, QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27_marshaled_pinvoke& marshaled)
{
	marshaled.___Region_0 = il2cpp_codegen_marshal_string(unmarshaled.___Region_0);
	marshaled.___AverageLatencyMs_1 = unmarshaled.___AverageLatencyMs_1;
	marshaled.___PacketLossPercent_2 = unmarshaled.___PacketLossPercent_2;
}
IL2CPP_EXTERN_C void QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27_marshal_pinvoke_back(const QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27_marshaled_pinvoke& marshaled, QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27& unmarshaled)
{
	unmarshaled.___Region_0 = il2cpp_codegen_marshal_string_result(marshaled.___Region_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Region_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___Region_0));
	int32_t unmarshaledAverageLatencyMs_temp_1 = 0;
	unmarshaledAverageLatencyMs_temp_1 = marshaled.___AverageLatencyMs_1;
	unmarshaled.___AverageLatencyMs_1 = unmarshaledAverageLatencyMs_temp_1;
	float unmarshaledPacketLossPercent_temp_2 = 0.0f;
	unmarshaledPacketLossPercent_temp_2 = marshaled.___PacketLossPercent_2;
	unmarshaled.___PacketLossPercent_2 = unmarshaledPacketLossPercent_temp_2;
}
// Conversion method for clean up from marshalling of: Unity.Services.Qos.Internal.QosResult
IL2CPP_EXTERN_C void QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27_marshal_pinvoke_cleanup(QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Region_0);
	marshaled.___Region_0 = NULL;
}
// Conversion methods for marshalling of: Unity.Services.Qos.Internal.QosResult
IL2CPP_EXTERN_C void QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27_marshal_com(const QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27& unmarshaled, QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27_marshaled_com& marshaled)
{
	marshaled.___Region_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___Region_0);
	marshaled.___AverageLatencyMs_1 = unmarshaled.___AverageLatencyMs_1;
	marshaled.___PacketLossPercent_2 = unmarshaled.___PacketLossPercent_2;
}
IL2CPP_EXTERN_C void QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27_marshal_com_back(const QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27_marshaled_com& marshaled, QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27& unmarshaled)
{
	unmarshaled.___Region_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___Region_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Region_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___Region_0));
	int32_t unmarshaledAverageLatencyMs_temp_1 = 0;
	unmarshaledAverageLatencyMs_temp_1 = marshaled.___AverageLatencyMs_1;
	unmarshaled.___AverageLatencyMs_1 = unmarshaledAverageLatencyMs_temp_1;
	float unmarshaledPacketLossPercent_temp_2 = 0.0f;
	unmarshaledPacketLossPercent_temp_2 = marshaled.___PacketLossPercent_2;
	unmarshaled.___PacketLossPercent_2 = unmarshaledPacketLossPercent_temp_2;
}
// Conversion method for clean up from marshalling of: Unity.Services.Qos.Internal.QosResult
IL2CPP_EXTERN_C void QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27_marshal_com_cleanup(QosResult_tA2296213032595430F8FE40418B3D5BA47E86D27_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___Region_0);
	marshaled.___Region_0 = NULL;
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
// System.Void Unity.Services.Core.Networking.Internal.HttpRequest::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpRequest__ctor_mFA4C4CD9671444C5892575B80746E0772BFBD2E2 (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* __this, const RuntimeMethod* method) 
{
	{
		// public HttpRequest() {}
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// public HttpRequest() {}
		return;
	}
}
// System.Void Unity.Services.Core.Networking.Internal.HttpRequest::.ctor(System.String,System.String,System.Collections.Generic.Dictionary`2<System.String,System.String>,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpRequest__ctor_mC4489FDDBE8347EC6991F8FE82845193230AD16A (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* __this, String_t* ___0_method, String_t* ___1_url, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___2_headers, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_body, const RuntimeMethod* method) 
{
	{
		// public HttpRequest(string method, string url, Dictionary<string, string> headers, byte[] body)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Method = method;
		String_t* L_0 = ___0_method;
		__this->___Method_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Method_0), (void*)L_0);
		// Url = url;
		String_t* L_1 = ___1_url;
		__this->___Url_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Url_1), (void*)L_1);
		// Headers = headers;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = ___2_headers;
		__this->___Headers_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Headers_2), (void*)L_2);
		// Body = body;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___3_body;
		__this->___Body_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Body_3), (void*)L_3);
		// }
		return;
	}
}
// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequest::SetMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* HttpRequest_SetMethod_mB29F68EC6A7DEC09C6A438B255224F0E75695432 (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* __this, String_t* ___0_method, const RuntimeMethod* method) 
{
	HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* V_0 = NULL;
	{
		// Method = method;
		String_t* L_0 = ___0_method;
		__this->___Method_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Method_0), (void*)L_0);
		// return this;
		V_0 = __this;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_1 = V_0;
		return L_1;
	}
}
// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequest::SetUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* HttpRequest_SetUrl_m3D7DDD4113C5FDDEFA35499033A48BDCBCDF0F1A (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* __this, String_t* ___0_url, const RuntimeMethod* method) 
{
	HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* V_0 = NULL;
	{
		// Url = url;
		String_t* L_0 = ___0_url;
		__this->___Url_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Url_1), (void*)L_0);
		// return this;
		V_0 = __this;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_1 = V_0;
		return L_1;
	}
}
// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequest::SetHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* HttpRequest_SetHeader_m2DC1503D7C51FA7E0D93ABD170EE43720114F4AB (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m5D77EB3F62FED2B879551BFADA7FE409B56F99F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* V_1 = NULL;
	{
		// if (Headers is null)
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___Headers_2;
		V_0 = (bool)((((RuntimeObject*)(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// Headers = new Dictionary<string, string>(1);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_2 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m5D77EB3F62FED2B879551BFADA7FE409B56F99F2(L_2, 1, Dictionary_2__ctor_m5D77EB3F62FED2B879551BFADA7FE409B56F99F2_RuntimeMethod_var);
		__this->___Headers_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Headers_2), (void*)L_2);
	}

IL_001c:
	{
		// Headers[key] = value;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_3 = __this->___Headers_2;
		String_t* L_4 = ___0_key;
		String_t* L_5 = ___1_value;
		NullCheck(L_3);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_3, L_4, L_5, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		// return this;
		V_1 = __this;
		goto IL_002e;
	}

IL_002e:
	{
		// }
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_6 = V_1;
		return L_6;
	}
}
// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequest::SetHeaders(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* HttpRequest_SetHeaders_mE3D7A9F8099C9FF9857674E646C3B0BD10A842A5 (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_headers, const RuntimeMethod* method) 
{
	HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* V_0 = NULL;
	{
		// Headers = headers;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___0_headers;
		__this->___Headers_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Headers_2), (void*)L_0);
		// return this;
		V_0 = __this;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_1 = V_0;
		return L_1;
	}
}
// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequest::SetBody(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* HttpRequest_SetBody_mE1ABCAE172B4BCDFDF9B9EA0A518C46997E8133D (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_body, const RuntimeMethod* method) 
{
	HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* V_0 = NULL;
	{
		// Body = body;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_body;
		__this->___Body_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Body_3), (void*)L_0);
		// return this;
		V_0 = __this;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_1 = V_0;
		return L_1;
	}
}
// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequest::SetOptions(Unity.Services.Core.Networking.Internal.HttpOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* HttpRequest_SetOptions_m1271D089E1B03979885B59141F1763C26BC48FE7 (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* __this, HttpOptions_t566285DF5CA5FF035FA85E6956C36168AD8FE2AC ___0_options, const RuntimeMethod* method) 
{
	HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* V_0 = NULL;
	{
		// Options = options;
		HttpOptions_t566285DF5CA5FF035FA85E6956C36168AD8FE2AC L_0 = ___0_options;
		__this->___Options_4 = L_0;
		// return this;
		V_0 = __this;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_1 = V_0;
		return L_1;
	}
}
// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequest::SetRedirectLimit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* HttpRequest_SetRedirectLimit_mE0252B498EFF4A1AA52DD11AAFFA2F2A2FEE3D37 (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* __this, int32_t ___0_redirectLimit, const RuntimeMethod* method) 
{
	HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* V_0 = NULL;
	{
		// Options.RedirectLimit = redirectLimit;
		HttpOptions_t566285DF5CA5FF035FA85E6956C36168AD8FE2AC* L_0 = (&__this->___Options_4);
		int32_t L_1 = ___0_redirectLimit;
		L_0->___RedirectLimit_1 = L_1;
		// return this;
		V_0 = __this;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_2 = V_0;
		return L_2;
	}
}
// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequest::SetTimeOutInSeconds(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* HttpRequest_SetTimeOutInSeconds_mCC75A3869DA6ECB09515FD6BDD6F17C47C70A908 (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* __this, int32_t ___0_timeout, const RuntimeMethod* method) 
{
	HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* V_0 = NULL;
	{
		// Options.RequestTimeoutInSeconds = timeout;
		HttpOptions_t566285DF5CA5FF035FA85E6956C36168AD8FE2AC* L_0 = (&__this->___Options_4);
		int32_t L_1 = ___0_timeout;
		L_0->___RequestTimeoutInSeconds_0 = L_1;
		// return this;
		V_0 = __this;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_2 = V_0;
		return L_2;
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
// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequestExtensions::AsGet(Unity.Services.Core.Networking.Internal.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* HttpRequestExtensions_AsGet_mFAA76A8C6B98CB89FEB72195ED67FA15653CAAA9 (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* ___0_self, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6);
		s_Il2CppMethodInitialized = true;
	}
	HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* V_0 = NULL;
	{
		// return self.SetMethod("GET");
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_0 = ___0_self;
		NullCheck(L_0);
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_1;
		L_1 = HttpRequest_SetMethod_mB29F68EC6A7DEC09C6A438B255224F0E75695432(L_0, _stringLiteral3781CFEEF925855A4B7284E1783A7D715A6333F6, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_2 = V_0;
		return L_2;
	}
}
// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequestExtensions::AsPost(Unity.Services.Core.Networking.Internal.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* HttpRequestExtensions_AsPost_m2E8AD667B06B837837CF2C88B8CB3D6B5EDE9D00 (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* ___0_self, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D);
		s_Il2CppMethodInitialized = true;
	}
	HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* V_0 = NULL;
	{
		// return self.SetMethod("POST");
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_0 = ___0_self;
		NullCheck(L_0);
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_1;
		L_1 = HttpRequest_SetMethod_mB29F68EC6A7DEC09C6A438B255224F0E75695432(L_0, _stringLiteral14E338D17C42E552FA7AF42CDAE40CA1F0E8A04D, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_2 = V_0;
		return L_2;
	}
}
// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequestExtensions::AsPut(Unity.Services.Core.Networking.Internal.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* HttpRequestExtensions_AsPut_m2010022B80D06524A9AFBB190A32CEBDDD5D0E63 (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* ___0_self, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708);
		s_Il2CppMethodInitialized = true;
	}
	HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* V_0 = NULL;
	{
		// return self.SetMethod("PUT");
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_0 = ___0_self;
		NullCheck(L_0);
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_1;
		L_1 = HttpRequest_SetMethod_mB29F68EC6A7DEC09C6A438B255224F0E75695432(L_0, _stringLiteral053EEFAEF1C074E36F0A13EAC660D9884666B708, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_2 = V_0;
		return L_2;
	}
}
// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequestExtensions::AsDelete(Unity.Services.Core.Networking.Internal.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* HttpRequestExtensions_AsDelete_m25A4555BFF6CB31BAAE60003C111F0485AD7B027 (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* ___0_self, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD6065F6BEE8EC9D2DE042E63D3ABB71AA1D0A38);
		s_Il2CppMethodInitialized = true;
	}
	HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* V_0 = NULL;
	{
		// return self.SetMethod("DELETE");
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_0 = ___0_self;
		NullCheck(L_0);
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_1;
		L_1 = HttpRequest_SetMethod_mB29F68EC6A7DEC09C6A438B255224F0E75695432(L_0, _stringLiteralDD6065F6BEE8EC9D2DE042E63D3ABB71AA1D0A38, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_2 = V_0;
		return L_2;
	}
}
// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequestExtensions::AsPatch(Unity.Services.Core.Networking.Internal.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* HttpRequestExtensions_AsPatch_m81B145F2B71DB6BCE43C083A335E11E7C7E44186 (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* ___0_self, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9145BA894AC681C06F6E921F9054DBC4A6037E9);
		s_Il2CppMethodInitialized = true;
	}
	HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* V_0 = NULL;
	{
		// return self.SetMethod("PATCH");
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_0 = ___0_self;
		NullCheck(L_0);
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_1;
		L_1 = HttpRequest_SetMethod_mB29F68EC6A7DEC09C6A438B255224F0E75695432(L_0, _stringLiteralA9145BA894AC681C06F6E921F9054DBC4A6037E9, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_2 = V_0;
		return L_2;
	}
}
// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequestExtensions::AsHead(Unity.Services.Core.Networking.Internal.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* HttpRequestExtensions_AsHead_m767D80506C5B67BBE7B8B9E46218B155CF1590CA (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* ___0_self, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DAC516092AE075D549759FBFE57497622D29F15);
		s_Il2CppMethodInitialized = true;
	}
	HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* V_0 = NULL;
	{
		// return self.SetMethod("HEAD");
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_0 = ___0_self;
		NullCheck(L_0);
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_1;
		L_1 = HttpRequest_SetMethod_mB29F68EC6A7DEC09C6A438B255224F0E75695432(L_0, _stringLiteral7DAC516092AE075D549759FBFE57497622D29F15, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_2 = V_0;
		return L_2;
	}
}
// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequestExtensions::AsConnect(Unity.Services.Core.Networking.Internal.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* HttpRequestExtensions_AsConnect_mE2F8F250133104E290F30058279942CFE058FD0E (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* ___0_self, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C69A5ABD36AE74665BC61E90B89CFBA61C28AF8);
		s_Il2CppMethodInitialized = true;
	}
	HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* V_0 = NULL;
	{
		// return self.SetMethod("CONNECT");
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_0 = ___0_self;
		NullCheck(L_0);
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_1;
		L_1 = HttpRequest_SetMethod_mB29F68EC6A7DEC09C6A438B255224F0E75695432(L_0, _stringLiteral4C69A5ABD36AE74665BC61E90B89CFBA61C28AF8, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_2 = V_0;
		return L_2;
	}
}
// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequestExtensions::AsOptions(Unity.Services.Core.Networking.Internal.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* HttpRequestExtensions_AsOptions_m027F42E1625A8064BAB3E0BBD3CD9ED83A59A87D (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* ___0_self, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral664DABBB1F96C857595AF4BB8A0CB71AC398FA3B);
		s_Il2CppMethodInitialized = true;
	}
	HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* V_0 = NULL;
	{
		// return self.SetMethod("OPTIONS");
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_0 = ___0_self;
		NullCheck(L_0);
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_1;
		L_1 = HttpRequest_SetMethod_mB29F68EC6A7DEC09C6A438B255224F0E75695432(L_0, _stringLiteral664DABBB1F96C857595AF4BB8A0CB71AC398FA3B, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_2 = V_0;
		return L_2;
	}
}
// Unity.Services.Core.Networking.Internal.HttpRequest Unity.Services.Core.Networking.Internal.HttpRequestExtensions::AsTrace(Unity.Services.Core.Networking.Internal.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* HttpRequestExtensions_AsTrace_m3585F7AE122DB9C8E0CF762DF63902DEE50913EE (HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* ___0_self, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral569045DB02C57E62748D078AAAB3C20AAB0640AB);
		s_Il2CppMethodInitialized = true;
	}
	HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* V_0 = NULL;
	{
		// return self.SetMethod("TRACE");
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_0 = ___0_self;
		NullCheck(L_0);
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_1;
		L_1 = HttpRequest_SetMethod_mB29F68EC6A7DEC09C6A438B255224F0E75695432(L_0, _stringLiteral569045DB02C57E62748D078AAAB3C20AAB0640AB, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_2 = V_0;
		return L_2;
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
// Unity.Services.Core.Networking.Internal.HttpResponse Unity.Services.Core.Networking.Internal.HttpResponse::SetRequest(Unity.Services.Core.Networking.Internal.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* HttpResponse_SetRequest_m5FAFFF426085600C4B924AF89876CFA229423982 (HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* __this, HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* ___0_request, const RuntimeMethod* method) 
{
	HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* V_0 = NULL;
	{
		// Request = new ReadOnlyHttpRequest(request);
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_0 = ___0_request;
		ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560 L_1;
		memset((&L_1), 0, sizeof(L_1));
		ReadOnlyHttpRequest__ctor_m11EF41B8A37DC43254E609870527C583D1F3370B((&L_1), L_0, /*hidden argument*/NULL);
		__this->___Request_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___Request_0))->___m_Request_0), (void*)NULL);
		// return this;
		V_0 = __this;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* L_2 = V_0;
		return L_2;
	}
}
// Unity.Services.Core.Networking.Internal.HttpResponse Unity.Services.Core.Networking.Internal.HttpResponse::SetRequest(Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* HttpResponse_SetRequest_m157F40648D8A89D39A4FCA78A34C12844BD2972B (HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* __this, ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560 ___0_request, const RuntimeMethod* method) 
{
	HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* V_0 = NULL;
	{
		// Request = request;
		ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560 L_0 = ___0_request;
		__this->___Request_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___Request_0))->___m_Request_0), (void*)NULL);
		// return this;
		V_0 = __this;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* L_1 = V_0;
		return L_1;
	}
}
// Unity.Services.Core.Networking.Internal.HttpResponse Unity.Services.Core.Networking.Internal.HttpResponse::SetHeader(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* HttpResponse_SetHeader_mA8207E139EC699A78CCEAFE41099E106859739EF (HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* __this, String_t* ___0_key, String_t* ___1_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* V_0 = NULL;
	{
		// Headers[key] = value;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = __this->___Headers_1;
		String_t* L_1 = ___0_key;
		String_t* L_2 = ___1_value;
		NullCheck(L_0);
		Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2(L_0, L_1, L_2, Dictionary_2_set_Item_m9BF625649E96E60C1509898A992A6447E351D1A2_RuntimeMethod_var);
		// return this;
		V_0 = __this;
		goto IL_0013;
	}

IL_0013:
	{
		// }
		HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* L_3 = V_0;
		return L_3;
	}
}
// Unity.Services.Core.Networking.Internal.HttpResponse Unity.Services.Core.Networking.Internal.HttpResponse::SetHeaders(System.Collections.Generic.Dictionary`2<System.String,System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* HttpResponse_SetHeaders_m9787E73858C566DD4D3B2106CBF714E3BCEB1823 (HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* __this, Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* ___0_headers, const RuntimeMethod* method) 
{
	HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* V_0 = NULL;
	{
		// Headers = headers;
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = ___0_headers;
		__this->___Headers_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Headers_1), (void*)L_0);
		// return this;
		V_0 = __this;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* L_1 = V_0;
		return L_1;
	}
}
// Unity.Services.Core.Networking.Internal.HttpResponse Unity.Services.Core.Networking.Internal.HttpResponse::SetData(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* HttpResponse_SetData_m7C392B3890056E0405626462183B05F1A24F24BD (HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_data, const RuntimeMethod* method) 
{
	HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* V_0 = NULL;
	{
		// Data = data;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___0_data;
		__this->___Data_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Data_2), (void*)L_0);
		// return this;
		V_0 = __this;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* L_1 = V_0;
		return L_1;
	}
}
// Unity.Services.Core.Networking.Internal.HttpResponse Unity.Services.Core.Networking.Internal.HttpResponse::SetStatusCode(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* HttpResponse_SetStatusCode_m53FC74E65C0256A49B51F7F4ACB265958C08166E (HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* __this, int64_t ___0_statusCode, const RuntimeMethod* method) 
{
	HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* V_0 = NULL;
	{
		// StatusCode = statusCode;
		int64_t L_0 = ___0_statusCode;
		__this->___StatusCode_3 = L_0;
		// return this;
		V_0 = __this;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* L_1 = V_0;
		return L_1;
	}
}
// Unity.Services.Core.Networking.Internal.HttpResponse Unity.Services.Core.Networking.Internal.HttpResponse::SetErrorMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* HttpResponse_SetErrorMessage_m41C88451AEBB8A9727621F4E6F6C9D63EEF75AFE (HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* __this, String_t* ___0_errorMessage, const RuntimeMethod* method) 
{
	HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* V_0 = NULL;
	{
		// ErrorMessage = errorMessage;
		String_t* L_0 = ___0_errorMessage;
		__this->___ErrorMessage_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ErrorMessage_4), (void*)L_0);
		// return this;
		V_0 = __this;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* L_1 = V_0;
		return L_1;
	}
}
// Unity.Services.Core.Networking.Internal.HttpResponse Unity.Services.Core.Networking.Internal.HttpResponse::SetIsHttpError(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* HttpResponse_SetIsHttpError_m42D96A0FA33493639D8D312AB9B0E080CDD7AD91 (HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* __this, bool ___0_isHttpError, const RuntimeMethod* method) 
{
	HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* V_0 = NULL;
	{
		// IsHttpError = isHttpError;
		bool L_0 = ___0_isHttpError;
		__this->___IsHttpError_5 = L_0;
		// return this;
		V_0 = __this;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* L_1 = V_0;
		return L_1;
	}
}
// Unity.Services.Core.Networking.Internal.HttpResponse Unity.Services.Core.Networking.Internal.HttpResponse::SetIsNetworkError(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* HttpResponse_SetIsNetworkError_mBE51289A5E2DCCB412D3F15245A2DDD4109AFA9B (HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* __this, bool ___0_isNetworkError, const RuntimeMethod* method) 
{
	HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* V_0 = NULL;
	{
		// IsNetworkError = isNetworkError;
		bool L_0 = ___0_isNetworkError;
		__this->___IsNetworkError_6 = L_0;
		// return this;
		V_0 = __this;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.Services.Core.Networking.Internal.HttpResponse::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HttpResponse__ctor_mFF0EA6082417016169BE870EE83437BA173172B4 (HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Conversion methods for marshalling of: Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest
IL2CPP_EXTERN_C void ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560_marshal_pinvoke(const ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560& unmarshaled, ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Request_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Request' of type 'ReadOnlyHttpRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Request_0Exception, NULL);
}
IL2CPP_EXTERN_C void ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560_marshal_pinvoke_back(const ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560_marshaled_pinvoke& marshaled, ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560& unmarshaled)
{
	Exception_t* ___m_Request_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Request' of type 'ReadOnlyHttpRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Request_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest
IL2CPP_EXTERN_C void ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560_marshal_pinvoke_cleanup(ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest
IL2CPP_EXTERN_C void ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560_marshal_com(const ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560& unmarshaled, ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560_marshaled_com& marshaled)
{
	Exception_t* ___m_Request_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Request' of type 'ReadOnlyHttpRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Request_0Exception, NULL);
}
IL2CPP_EXTERN_C void ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560_marshal_com_back(const ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560_marshaled_com& marshaled, ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560& unmarshaled)
{
	Exception_t* ___m_Request_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Request' of type 'ReadOnlyHttpRequest': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Request_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest
IL2CPP_EXTERN_C void ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560_marshal_com_cleanup(ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560_marshaled_com& marshaled)
{
}
// System.Void Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest::.ctor(Unity.Services.Core.Networking.Internal.HttpRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyHttpRequest__ctor_m11EF41B8A37DC43254E609870527C583D1F3370B (ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560* __this, HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* ___0_request, const RuntimeMethod* method) 
{
	{
		// m_Request = request;
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_0 = ___0_request;
		__this->___m_Request_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Request_0), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ReadOnlyHttpRequest__ctor_m11EF41B8A37DC43254E609870527C583D1F3370B_AdjustorThunk (RuntimeObject* __this, HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* ___0_request, const RuntimeMethod* method)
{
	ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560*>(__this + _offset);
	ReadOnlyHttpRequest__ctor_m11EF41B8A37DC43254E609870527C583D1F3370B(_thisAdjusted, ___0_request, method);
}
// System.String Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest::get_Method()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlyHttpRequest_get_Method_mDF650B95030089C935E80108E27FCF52173EED6C (ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560* __this, const RuntimeMethod* method) 
{
	{
		// public string Method => m_Request.Method;
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_0 = __this->___m_Request_0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___Method_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* ReadOnlyHttpRequest_get_Method_mDF650B95030089C935E80108E27FCF52173EED6C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ReadOnlyHttpRequest_get_Method_mDF650B95030089C935E80108E27FCF52173EED6C(_thisAdjusted, method);
	return _returnValue;
}
// System.String Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest::get_Url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlyHttpRequest_get_Url_mE8321E2491DED55458B38A53F9954781F8A79216 (ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560* __this, const RuntimeMethod* method) 
{
	{
		// public string Url => m_Request.Url;
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_0 = __this->___m_Request_0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___Url_1;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* ReadOnlyHttpRequest_get_Url_mE8321E2491DED55458B38A53F9954781F8A79216_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ReadOnlyHttpRequest_get_Url_mE8321E2491DED55458B38A53F9954781F8A79216(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest::get_Headers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyHttpRequest_get_Headers_mA0B7DB8D867E0929FBEB5FE547E6466A99BBB1E3 (ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyDictionary<string, string> Headers => m_Request.Headers;
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_0 = __this->___m_Request_0;
		NullCheck(L_0);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = L_0->___Headers_2;
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyHttpRequest_get_Headers_mA0B7DB8D867E0929FBEB5FE547E6466A99BBB1E3_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyHttpRequest_get_Headers_mA0B7DB8D867E0929FBEB5FE547E6466A99BBB1E3(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte[] Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest::get_Body()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ReadOnlyHttpRequest_get_Body_m68E94D2A5B8DF549E503448CF0DF52B2FE9ECA58 (ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560* __this, const RuntimeMethod* method) 
{
	{
		// public byte[] Body => m_Request.Body;
		HttpRequest_tBC0F85FE336FEF2FE2CC49102BE0A0969BB36A03* L_0 = __this->___m_Request_0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0->___Body_3;
		return L_1;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ReadOnlyHttpRequest_get_Body_m68E94D2A5B8DF549E503448CF0DF52B2FE9ECA58_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560*>(__this + _offset);
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _returnValue;
	_returnValue = ReadOnlyHttpRequest_get_Body_m68E94D2A5B8DF549E503448CF0DF52B2FE9ECA58(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse
IL2CPP_EXTERN_C void ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9_marshal_pinvoke(const ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9& unmarshaled, ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Response_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Response' of type 'ReadOnlyHttpResponse': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Response_0Exception, NULL);
}
IL2CPP_EXTERN_C void ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9_marshal_pinvoke_back(const ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9_marshaled_pinvoke& marshaled, ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9& unmarshaled)
{
	Exception_t* ___m_Response_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Response' of type 'ReadOnlyHttpResponse': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Response_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse
IL2CPP_EXTERN_C void ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9_marshal_pinvoke_cleanup(ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse
IL2CPP_EXTERN_C void ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9_marshal_com(const ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9& unmarshaled, ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9_marshaled_com& marshaled)
{
	Exception_t* ___m_Response_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Response' of type 'ReadOnlyHttpResponse': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Response_0Exception, NULL);
}
IL2CPP_EXTERN_C void ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9_marshal_com_back(const ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9_marshaled_com& marshaled, ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9& unmarshaled)
{
	Exception_t* ___m_Response_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Response' of type 'ReadOnlyHttpResponse': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Response_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse
IL2CPP_EXTERN_C void ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9_marshal_com_cleanup(ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9_marshaled_com& marshaled)
{
}
// System.Void Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::.ctor(Unity.Services.Core.Networking.Internal.HttpResponse)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyHttpResponse__ctor_mED290907712D4AD90AE9EAEFED8EE8E43769433C (ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* __this, HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* ___0_response, const RuntimeMethod* method) 
{
	{
		// m_Response = response;
		HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* L_0 = ___0_response;
		__this->___m_Response_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Response_0), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ReadOnlyHttpResponse__ctor_mED290907712D4AD90AE9EAEFED8EE8E43769433C_AdjustorThunk (RuntimeObject* __this, HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* ___0_response, const RuntimeMethod* method)
{
	ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9*>(__this + _offset);
	ReadOnlyHttpResponse__ctor_mED290907712D4AD90AE9EAEFED8EE8E43769433C(_thisAdjusted, ___0_response, method);
}
// Unity.Services.Core.Networking.Internal.ReadOnlyHttpRequest Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::get_Request()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560 ReadOnlyHttpResponse_get_Request_m87248E6A169DB9DFF2A1126106224E11F0765E01 (ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* __this, const RuntimeMethod* method) 
{
	{
		// public ReadOnlyHttpRequest Request => m_Response.Request;
		HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* L_0 = __this->___m_Response_0;
		NullCheck(L_0);
		ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560 L_1 = L_0->___Request_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560 ReadOnlyHttpResponse_get_Request_m87248E6A169DB9DFF2A1126106224E11F0765E01_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9*>(__this + _offset);
	ReadOnlyHttpRequest_t8383C2B906847C0160324D9DD944F94F2910B560 _returnValue;
	_returnValue = ReadOnlyHttpResponse_get_Request_m87248E6A169DB9DFF2A1126106224E11F0765E01(_thisAdjusted, method);
	return _returnValue;
}
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String> Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::get_Headers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyHttpResponse_get_Headers_m730FBF9627F46E8B54E60D81165CC9CE7CCDAC61 (ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyDictionary<string, string> Headers => m_Response.Headers;
		HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* L_0 = __this->___m_Response_0;
		NullCheck(L_0);
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_1 = L_0->___Headers_1;
		return L_1;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* ReadOnlyHttpResponse_get_Headers_m730FBF9627F46E8B54E60D81165CC9CE7CCDAC61_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = ReadOnlyHttpResponse_get_Headers_m730FBF9627F46E8B54E60D81165CC9CE7CCDAC61(_thisAdjusted, method);
	return _returnValue;
}
// System.Byte[] Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::get_Data()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ReadOnlyHttpResponse_get_Data_mE6199D1297875D87D7336A7EE88A3EE90A8F8ADC (ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* __this, const RuntimeMethod* method) 
{
	{
		// public byte[] Data => m_Response.Data;
		HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* L_0 = __this->___m_Response_0;
		NullCheck(L_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0->___Data_2;
		return L_1;
	}
}
IL2CPP_EXTERN_C  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ReadOnlyHttpResponse_get_Data_mE6199D1297875D87D7336A7EE88A3EE90A8F8ADC_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9*>(__this + _offset);
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* _returnValue;
	_returnValue = ReadOnlyHttpResponse_get_Data_mE6199D1297875D87D7336A7EE88A3EE90A8F8ADC(_thisAdjusted, method);
	return _returnValue;
}
// System.Int64 Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::get_StatusCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t ReadOnlyHttpResponse_get_StatusCode_m448AB167A7704D03661FBFB19C0A0E8400964013 (ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* __this, const RuntimeMethod* method) 
{
	{
		// public long StatusCode => m_Response.StatusCode;
		HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* L_0 = __this->___m_Response_0;
		NullCheck(L_0);
		int64_t L_1 = L_0->___StatusCode_3;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int64_t ReadOnlyHttpResponse_get_StatusCode_m448AB167A7704D03661FBFB19C0A0E8400964013_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9*>(__this + _offset);
	int64_t _returnValue;
	_returnValue = ReadOnlyHttpResponse_get_StatusCode_m448AB167A7704D03661FBFB19C0A0E8400964013(_thisAdjusted, method);
	return _returnValue;
}
// System.String Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::get_ErrorMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ReadOnlyHttpResponse_get_ErrorMessage_m6A3B681BB1EF9FB9BF2915B65A43734BEECDA5E4 (ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* __this, const RuntimeMethod* method) 
{
	{
		// public string ErrorMessage => m_Response.ErrorMessage;
		HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* L_0 = __this->___m_Response_0;
		NullCheck(L_0);
		String_t* L_1 = L_0->___ErrorMessage_4;
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* ReadOnlyHttpResponse_get_ErrorMessage_m6A3B681BB1EF9FB9BF2915B65A43734BEECDA5E4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9*>(__this + _offset);
	String_t* _returnValue;
	_returnValue = ReadOnlyHttpResponse_get_ErrorMessage_m6A3B681BB1EF9FB9BF2915B65A43734BEECDA5E4(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::get_IsHttpError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyHttpResponse_get_IsHttpError_mB9254614A798E52CEE760E7ECFB1C8596E3CEE89 (ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsHttpError => m_Response.IsHttpError;
		HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* L_0 = __this->___m_Response_0;
		NullCheck(L_0);
		bool L_1 = L_0->___IsHttpError_5;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool ReadOnlyHttpResponse_get_IsHttpError_mB9254614A798E52CEE760E7ECFB1C8596E3CEE89_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9*>(__this + _offset);
	bool _returnValue;
	_returnValue = ReadOnlyHttpResponse_get_IsHttpError_mB9254614A798E52CEE760E7ECFB1C8596E3CEE89(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.Services.Core.Networking.Internal.ReadOnlyHttpResponse::get_IsNetworkError()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReadOnlyHttpResponse_get_IsNetworkError_mF41792AD3A3B43F941089D0D1694D217C1227068 (ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsNetworkError => m_Response.IsNetworkError;
		HttpResponse_tF15F84167F74980BA0FDB208DC47266D6BFB4F59* L_0 = __this->___m_Response_0;
		NullCheck(L_0);
		bool L_1 = L_0->___IsNetworkError_6;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool ReadOnlyHttpResponse_get_IsNetworkError_mF41792AD3A3B43F941089D0D1694D217C1227068_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ReadOnlyHttpResponse_tA2B7784F634B746835FB1CC3F3DCC8B9D1A5B0E9*>(__this + _offset);
	bool _returnValue;
	_returnValue = ReadOnlyHttpResponse_get_IsNetworkError_mF41792AD3A3B43F941089D0D1694D217C1227068(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Unity.Services.Core.Internal.AsyncOperation::get_IsDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_IsDone_mFABF133C322E1F709C84DF9FA4C57C25AE1B28D0 (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDone { get; protected set; }
		bool L_0 = __this->___U3CIsDoneU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperation::set_IsDone(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_set_IsDone_mE51C475EADA09A7ADDF3A1A49CD5E70BE1003443 (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsDone { get; protected set; }
		bool L_0 = ___0_value;
		__this->___U3CIsDoneU3Ek__BackingField_0 = L_0;
		return;
	}
}
// Unity.Services.Core.Internal.AsyncOperationStatus Unity.Services.Core.Internal.AsyncOperation::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AsyncOperation_get_Status_m0A936D453514234140366F6C2318ECA656CF3A87 (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, const RuntimeMethod* method) 
{
	{
		// public AsyncOperationStatus Status { get; protected set; }
		int32_t L_0 = __this->___U3CStatusU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperation::set_Status(Unity.Services.Core.Internal.AsyncOperationStatus)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_set_Status_m052C39A5CBBF69314029BE4E2C61FC27CB3614AC (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public AsyncOperationStatus Status { get; protected set; }
		int32_t L_0 = ___0_value;
		__this->___U3CStatusU3Ek__BackingField_1 = L_0;
		return;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperation::add_Completed(System.Action`1<Unity.Services.Core.Internal.IAsyncOperation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_add_Completed_m3BF706D0128F8660347D12C9C4F4DCBB580EC67F (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (IsDone)
		bool L_0;
		L_0 = AsyncOperation_get_IsDone_mFABF133C322E1F709C84DF9FA4C57C25AE1B28D0_inline(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// value(this);
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_2 = ___0_value;
		NullCheck(L_2);
		Action_1_Invoke_m468F4CDC64512C68E391F8A876A27ACC4B992B50_inline(L_2, __this, NULL);
		goto IL_002c;
	}

IL_0015:
	{
		// m_CompletedCallback += value;
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_3 = __this->___m_CompletedCallback_3;
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_4 = ___0_value;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		__this->___m_CompletedCallback_3 = ((Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*)Castclass((RuntimeObject*)L_5, Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CompletedCallback_3), (void*)((Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*)Castclass((RuntimeObject*)L_5, Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var)));
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperation::remove_Completed(System.Action`1<Unity.Services.Core.Internal.IAsyncOperation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_remove_Completed_mE76C24A21D1799C3979DBA0823F181CFEFCFB228 (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// remove => m_CompletedCallback -= value;
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_0 = __this->___m_CompletedCallback_3;
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_1 = ___0_value;
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_0, L_1, NULL);
		__this->___m_CompletedCallback_3 = ((Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*)Castclass((RuntimeObject*)L_2, Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CompletedCallback_3), (void*)((Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*)Castclass((RuntimeObject*)L_2, Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Exception Unity.Services.Core.Internal.AsyncOperation::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* AsyncOperation_get_Exception_mA4C2316EBBAF7FC9E73CD1225E4D42E20F8663A9 (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, const RuntimeMethod* method) 
{
	{
		// public Exception Exception { get; protected set; }
		Exception_t* L_0 = __this->___U3CExceptionU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperation::set_Exception(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_set_Exception_m21F6F23F876ADED9AE850C41F324CE8F5334F244 (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, Exception_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Exception Exception { get; protected set; }
		Exception_t* L_0 = ___0_value;
		__this->___U3CExceptionU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExceptionU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperation::SetInProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_SetInProgress_mF9F046353697ECEB9B2FD83E3193E8C050BCC860 (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, const RuntimeMethod* method) 
{
	{
		// Status = AsyncOperationStatus.InProgress;
		AsyncOperation_set_Status_m052C39A5CBBF69314029BE4E2C61FC27CB3614AC_inline(__this, 1, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperation::Succeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_Succeed_mE56F6B7EC1E7A92BD743C0B4E8D4EC85C1F07A28 (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* G_B4_0 = NULL;
	Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* G_B3_0 = NULL;
	{
		// if (IsDone)
		bool L_0;
		L_0 = AsyncOperation_get_IsDone_mFABF133C322E1F709C84DF9FA4C57C25AE1B28D0_inline(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		goto IL_0038;
	}

IL_000e:
	{
		// IsDone = true;
		AsyncOperation_set_IsDone_mE51C475EADA09A7ADDF3A1A49CD5E70BE1003443_inline(__this, (bool)1, NULL);
		// Status = AsyncOperationStatus.Succeeded;
		AsyncOperation_set_Status_m052C39A5CBBF69314029BE4E2C61FC27CB3614AC_inline(__this, 2, NULL);
		// m_CompletedCallback?.Invoke(this);
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_2 = __this->___m_CompletedCallback_3;
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_3 = L_2;
		G_B3_0 = L_3;
		if (L_3)
		{
			G_B4_0 = L_3;
			goto IL_002a;
		}
	}
	{
		goto IL_0031;
	}

IL_002a:
	{
		NullCheck(G_B4_0);
		Action_1_Invoke_m468F4CDC64512C68E391F8A876A27ACC4B992B50_inline(G_B4_0, __this, NULL);
	}

IL_0031:
	{
		// m_CompletedCallback = null;
		__this->___m_CompletedCallback_3 = (Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CompletedCallback_3), (void*)(Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*)NULL);
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperation::Fail(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_Fail_m863A1DBBA999B7B0EA18739E519AACFF0054A5DF (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, Exception_t* ___0_reason, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* G_B4_0 = NULL;
	Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* G_B3_0 = NULL;
	{
		// if (IsDone)
		bool L_0;
		L_0 = AsyncOperation_get_IsDone_mFABF133C322E1F709C84DF9FA4C57C25AE1B28D0_inline(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		goto IL_0040;
	}

IL_000e:
	{
		// Exception = reason;
		Exception_t* L_2 = ___0_reason;
		AsyncOperation_set_Exception_m21F6F23F876ADED9AE850C41F324CE8F5334F244_inline(__this, L_2, NULL);
		// IsDone = true;
		AsyncOperation_set_IsDone_mE51C475EADA09A7ADDF3A1A49CD5E70BE1003443_inline(__this, (bool)1, NULL);
		// Status = AsyncOperationStatus.Failed;
		AsyncOperation_set_Status_m052C39A5CBBF69314029BE4E2C61FC27CB3614AC_inline(__this, 3, NULL);
		// m_CompletedCallback?.Invoke(this);
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_3 = __this->___m_CompletedCallback_3;
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0032;
		}
	}
	{
		goto IL_0039;
	}

IL_0032:
	{
		NullCheck(G_B4_0);
		Action_1_Invoke_m468F4CDC64512C68E391F8A876A27ACC4B992B50_inline(G_B4_0, __this, NULL);
	}

IL_0039:
	{
		// m_CompletedCallback = null;
		__this->___m_CompletedCallback_3 = (Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CompletedCallback_3), (void*)(Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*)NULL);
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperation::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_Cancel_m32C14294FB4C72F2F3B260796F47D6401B2F4045 (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* G_B4_0 = NULL;
	Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* G_B3_0 = NULL;
	{
		// if (IsDone)
		bool L_0;
		L_0 = AsyncOperation_get_IsDone_mFABF133C322E1F709C84DF9FA4C57C25AE1B28D0_inline(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// return;
		goto IL_0044;
	}

IL_000e:
	{
		// Exception = new OperationCanceledException();
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_2 = (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662*)il2cpp_codegen_object_new(OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		OperationCanceledException__ctor_m2F34C3B8AEE2AA6C7EB2BB77AE5E0289101293E4(L_2, NULL);
		AsyncOperation_set_Exception_m21F6F23F876ADED9AE850C41F324CE8F5334F244_inline(__this, L_2, NULL);
		// IsDone = true;
		AsyncOperation_set_IsDone_mE51C475EADA09A7ADDF3A1A49CD5E70BE1003443_inline(__this, (bool)1, NULL);
		// Status = AsyncOperationStatus.Cancelled;
		AsyncOperation_set_Status_m052C39A5CBBF69314029BE4E2C61FC27CB3614AC_inline(__this, 4, NULL);
		// m_CompletedCallback?.Invoke(this);
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_3 = __this->___m_CompletedCallback_3;
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_4 = L_3;
		G_B3_0 = L_4;
		if (L_4)
		{
			G_B4_0 = L_4;
			goto IL_0036;
		}
	}
	{
		goto IL_003d;
	}

IL_0036:
	{
		NullCheck(G_B4_0);
		Action_1_Invoke_m468F4CDC64512C68E391F8A876A27ACC4B992B50_inline(G_B4_0, __this, NULL);
	}

IL_003d:
	{
		// m_CompletedCallback = null;
		__this->___m_CompletedCallback_3 = (Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CompletedCallback_3), (void*)(Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*)NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
// System.Boolean Unity.Services.Core.Internal.AsyncOperation::System.Collections.IEnumerator.MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_System_Collections_IEnumerator_MoveNext_m596CB807AE95B2B961DB02CED835209527DAB777 (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, const RuntimeMethod* method) 
{
	{
		// bool IEnumerator.MoveNext() => !IsDone;
		bool L_0;
		L_0 = AsyncOperation_get_IsDone_mFABF133C322E1F709C84DF9FA4C57C25AE1B28D0_inline(__this, NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperation::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation_System_Collections_IEnumerator_Reset_m6A6B5E00A6EC7F7286CFF63F2802A2C9C83426AE (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, const RuntimeMethod* method) 
{
	{
		// void IEnumerator.Reset() {}
		return;
	}
}
// System.Object Unity.Services.Core.Internal.AsyncOperation::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AsyncOperation_System_Collections_IEnumerator_get_Current_mE64353F2F4CB9E9CBD92B52FC1D56F96C6B93314 (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, const RuntimeMethod* method) 
{
	{
		// object IEnumerator.Current => null;
		return NULL;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperation__ctor_m39B9682C2896CAA23CAC25FCF9D902C19EBF11DE (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Conversion methods for marshalling of: Unity.Services.Core.Internal.AsyncOperationAwaiter
IL2CPP_EXTERN_C void AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662_marshal_pinvoke(const AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662& unmarshaled, AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Operation_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Operation' of type 'AsyncOperationAwaiter': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Operation_0Exception, NULL);
}
IL2CPP_EXTERN_C void AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662_marshal_pinvoke_back(const AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662_marshaled_pinvoke& marshaled, AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662& unmarshaled)
{
	Exception_t* ___m_Operation_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Operation' of type 'AsyncOperationAwaiter': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Operation_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Internal.AsyncOperationAwaiter
IL2CPP_EXTERN_C void AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662_marshal_pinvoke_cleanup(AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Services.Core.Internal.AsyncOperationAwaiter
IL2CPP_EXTERN_C void AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662_marshal_com(const AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662& unmarshaled, AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662_marshaled_com& marshaled)
{
	Exception_t* ___m_Operation_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Operation' of type 'AsyncOperationAwaiter': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Operation_0Exception, NULL);
}
IL2CPP_EXTERN_C void AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662_marshal_com_back(const AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662_marshaled_com& marshaled, AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662& unmarshaled)
{
	Exception_t* ___m_Operation_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Operation' of type 'AsyncOperationAwaiter': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Operation_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Internal.AsyncOperationAwaiter
IL2CPP_EXTERN_C void AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662_marshal_com_cleanup(AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662_marshaled_com& marshaled)
{
}
// System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter::.ctor(Unity.Services.Core.Internal.IAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationAwaiter__ctor_mDA5FDE70CB821282BE1B34988F035D089E5C4668 (AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662* __this, RuntimeObject* ___0_asyncOperation, const RuntimeMethod* method) 
{
	{
		// m_Operation = asyncOperation;
		RuntimeObject* L_0 = ___0_asyncOperation;
		__this->___m_Operation_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Operation_0), (void*)L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationAwaiter__ctor_mDA5FDE70CB821282BE1B34988F035D089E5C4668_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_asyncOperation, const RuntimeMethod* method)
{
	AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662*>(__this + _offset);
	AsyncOperationAwaiter__ctor_mDA5FDE70CB821282BE1B34988F035D089E5C4668(_thisAdjusted, ___0_asyncOperation, method);
}
// System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationAwaiter_OnCompleted_m0DF5C7321350B0496AEA75861A16292D35202EA0 (AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3COnCompletedU3Eb__0_m7C168E70198DF4A1028F3249D6ABB220C8E0F430_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_t3B73576199883FBF71FC76F226282CB30BFE5375_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_t3B73576199883FBF71FC76F226282CB30BFE5375* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_t3B73576199883FBF71FC76F226282CB30BFE5375* L_0 = (U3CU3Ec__DisplayClass2_0_t3B73576199883FBF71FC76F226282CB30BFE5375*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_t3B73576199883FBF71FC76F226282CB30BFE5375_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_m0C6D38DE814AB874FF9303D952D1E7A82F8120DA(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_t3B73576199883FBF71FC76F226282CB30BFE5375* L_1 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___0_continuation;
		NullCheck(L_1);
		L_1->___continuation_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___continuation_0), (void*)L_2);
		// m_Operation.Completed += operation => continuation();
		RuntimeObject* L_3 = __this->___m_Operation_0;
		U3CU3Ec__DisplayClass2_0_t3B73576199883FBF71FC76F226282CB30BFE5375* L_4 = V_0;
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_5 = (Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*)il2cpp_codegen_object_new(Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m0760403D59B61247DFD6DA006F6CC392E7241BD9(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3COnCompletedU3Eb__0_m7C168E70198DF4A1028F3249D6ABB220C8E0F430_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* >::Invoke(2 /* System.Void Unity.Services.Core.Internal.IAsyncOperation::add_Completed(System.Action`1<Unity.Services.Core.Internal.IAsyncOperation>) */, IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var, L_3, L_5);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationAwaiter_OnCompleted_m0DF5C7321350B0496AEA75861A16292D35202EA0_AdjustorThunk (RuntimeObject* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method)
{
	AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662*>(__this + _offset);
	AsyncOperationAwaiter_OnCompleted_m0DF5C7321350B0496AEA75861A16292D35202EA0(_thisAdjusted, ___0_continuation, method);
}
// System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter::UnsafeOnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationAwaiter_UnsafeOnCompleted_m0E5A4D81E41FBECC6E58B673E068F6B896670957 (AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CUnsafeOnCompletedU3Eb__0_m0B2FC427DC2CD56231179ADE92A745808C38D7B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_t0BC64F6CB3CE8A09EA5F2A786A4054970E447EE0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_t0BC64F6CB3CE8A09EA5F2A786A4054970E447EE0* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_t0BC64F6CB3CE8A09EA5F2A786A4054970E447EE0* L_0 = (U3CU3Ec__DisplayClass3_0_t0BC64F6CB3CE8A09EA5F2A786A4054970E447EE0*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t0BC64F6CB3CE8A09EA5F2A786A4054970E447EE0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass3_0__ctor_m5549E3FE1162B8CBEF71ED6F8254360B00C9682D(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_t0BC64F6CB3CE8A09EA5F2A786A4054970E447EE0* L_1 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___0_continuation;
		NullCheck(L_1);
		L_1->___continuation_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___continuation_0), (void*)L_2);
		// m_Operation.Completed += operation => continuation();
		RuntimeObject* L_3 = __this->___m_Operation_0;
		U3CU3Ec__DisplayClass3_0_t0BC64F6CB3CE8A09EA5F2A786A4054970E447EE0* L_4 = V_0;
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_5 = (Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*)il2cpp_codegen_object_new(Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Action_1__ctor_m0760403D59B61247DFD6DA006F6CC392E7241BD9(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3CUnsafeOnCompletedU3Eb__0_m0B2FC427DC2CD56231179ADE92A745808C38D7B1_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* >::Invoke(2 /* System.Void Unity.Services.Core.Internal.IAsyncOperation::add_Completed(System.Action`1<Unity.Services.Core.Internal.IAsyncOperation>) */, IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var, L_3, L_5);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationAwaiter_UnsafeOnCompleted_m0E5A4D81E41FBECC6E58B673E068F6B896670957_AdjustorThunk (RuntimeObject* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method)
{
	AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662*>(__this + _offset);
	AsyncOperationAwaiter_UnsafeOnCompleted_m0E5A4D81E41FBECC6E58B673E068F6B896670957(_thisAdjusted, ___0_continuation, method);
}
// System.Boolean Unity.Services.Core.Internal.AsyncOperationAwaiter::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationAwaiter_get_IsCompleted_mE9AE20B408EE81FF5F8CFE8EF686B71AF51469A4 (AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool IsCompleted => m_Operation.IsDone;
		RuntimeObject* L_0 = __this->___m_Operation_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Unity.Services.Core.Internal.IAsyncOperation::get_IsDone() */, IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool AsyncOperationAwaiter_get_IsCompleted_mE9AE20B408EE81FF5F8CFE8EF686B71AF51469A4_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662*>(__this + _offset);
	bool _returnValue;
	_returnValue = AsyncOperationAwaiter_get_IsCompleted_mE9AE20B408EE81FF5F8CFE8EF686B71AF51469A4(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationAwaiter_GetResult_m04CD1981674B6AC7A9236E9E5D1F3B9814066504 (AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (m_Operation.Status == AsyncOperationStatus.Failed
		//     || m_Operation.Status == AsyncOperationStatus.Cancelled)
		RuntimeObject* L_0 = __this->___m_Operation_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Unity.Services.Core.Internal.AsyncOperationStatus Unity.Services.Core.Internal.IAsyncOperation::get_Status() */, IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var, L_0);
		if ((((int32_t)L_1) == ((int32_t)3)))
		{
			goto IL_001f;
		}
	}
	{
		RuntimeObject* L_2 = __this->___m_Operation_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Unity.Services.Core.Internal.AsyncOperationStatus Unity.Services.Core.Internal.IAsyncOperation::get_Status() */, IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var, L_2);
		G_B3_0 = ((((int32_t)L_3) == ((int32_t)4))? 1 : 0);
		goto IL_0020;
	}

IL_001f:
	{
		G_B3_0 = 1;
	}

IL_0020:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// throw m_Operation.Exception;
		RuntimeObject* L_5 = __this->___m_Operation_0;
		NullCheck(L_5);
		Exception_t* L_6;
		L_6 = InterfaceFuncInvoker0< Exception_t* >::Invoke(4 /* System.Exception Unity.Services.Core.Internal.IAsyncOperation::get_Exception() */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var)), L_5);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncOperationAwaiter_GetResult_m04CD1981674B6AC7A9236E9E5D1F3B9814066504_RuntimeMethod_var)));
	}

IL_0031:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AsyncOperationAwaiter_GetResult_m04CD1981674B6AC7A9236E9E5D1F3B9814066504_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662*>(__this + _offset);
	AsyncOperationAwaiter_GetResult_m04CD1981674B6AC7A9236E9E5D1F3B9814066504(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m0C6D38DE814AB874FF9303D952D1E7A82F8120DA (U3CU3Ec__DisplayClass2_0_t3B73576199883FBF71FC76F226282CB30BFE5375* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter/<>c__DisplayClass2_0::<OnCompleted>b__0(Unity.Services.Core.Internal.IAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3COnCompletedU3Eb__0_m7C168E70198DF4A1028F3249D6ABB220C8E0F430 (U3CU3Ec__DisplayClass2_0_t3B73576199883FBF71FC76F226282CB30BFE5375* __this, RuntimeObject* ___0_operation, const RuntimeMethod* method) 
{
	{
		// m_Operation.Completed += operation => continuation();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___continuation_0;
		NullCheck(L_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
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
// System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m5549E3FE1162B8CBEF71ED6F8254360B00C9682D (U3CU3Ec__DisplayClass3_0_t0BC64F6CB3CE8A09EA5F2A786A4054970E447EE0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperationAwaiter/<>c__DisplayClass3_0::<UnsafeOnCompleted>b__0(Unity.Services.Core.Internal.IAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CUnsafeOnCompletedU3Eb__0_m0B2FC427DC2CD56231179ADE92A745808C38D7B1 (U3CU3Ec__DisplayClass3_0_t0BC64F6CB3CE8A09EA5F2A786A4054970E447EE0* __this, RuntimeObject* ___0_operation, const RuntimeMethod* method) 
{
	{
		// m_Operation.Completed += operation => continuation();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___continuation_0;
		NullCheck(L_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_0, NULL);
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
// System.Boolean Unity.Services.Core.Internal.AsyncOperationBase::get_keepWaiting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationBase_get_keepWaiting_mA5C59C7B9164015B04F3653329FD905A743D507F (AsyncOperationBase_t4808DB931A15FAB56C45333DFBB14F8E9BD49124* __this, const RuntimeMethod* method) 
{
	{
		// public override bool keepWaiting => !IsCompleted;
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(14 /* System.Boolean Unity.Services.Core.Internal.AsyncOperationBase::get_IsCompleted() */, __this);
		return (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Unity.Services.Core.Internal.AsyncOperationBase::get_IsDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperationBase_get_IsDone_m238748BEE1ADD4EDF78ED968D94A089897228BB8 (AsyncOperationBase_t4808DB931A15FAB56C45333DFBB14F8E9BD49124* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDone => IsCompleted;
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(14 /* System.Boolean Unity.Services.Core.Internal.AsyncOperationBase::get_IsCompleted() */, __this);
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperationBase::add_Completed(System.Action`1<Unity.Services.Core.Internal.IAsyncOperation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase_add_Completed_mBF050A2DCED3671779F2DCB9CE85B0CBF09D434C (AsyncOperationBase_t4808DB931A15FAB56C45333DFBB14F8E9BD49124* __this, Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (IsDone)
		bool L_0;
		L_0 = AsyncOperationBase_get_IsDone_m238748BEE1ADD4EDF78ED968D94A089897228BB8(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// value(this);
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_2 = ___0_value;
		NullCheck(L_2);
		Action_1_Invoke_m468F4CDC64512C68E391F8A876A27ACC4B992B50_inline(L_2, __this, NULL);
		goto IL_0030;
	}

IL_0017:
	{
		// m_CompletedCallback += value;
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_3 = __this->___m_CompletedCallback_0;
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_4 = ___0_value;
		Delegate_t* L_5;
		L_5 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_3, L_4, NULL);
		__this->___m_CompletedCallback_0 = ((Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*)Castclass((RuntimeObject*)L_5, Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CompletedCallback_0), (void*)((Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*)Castclass((RuntimeObject*)L_5, Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var)));
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperationBase::remove_Completed(System.Action`1<Unity.Services.Core.Internal.IAsyncOperation>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase_remove_Completed_m275A690292CDEB367604BFCB1642DBFDFFF32625 (AsyncOperationBase_t4808DB931A15FAB56C45333DFBB14F8E9BD49124* __this, Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// remove => m_CompletedCallback -= value;
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_0 = __this->___m_CompletedCallback_0;
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_1 = ___0_value;
		Delegate_t* L_2;
		L_2 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_0, L_1, NULL);
		__this->___m_CompletedCallback_0 = ((Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*)Castclass((RuntimeObject*)L_2, Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_CompletedCallback_0), (void*)((Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*)Castclass((RuntimeObject*)L_2, Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var)));
		return;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperationBase::DidComplete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase_DidComplete_m898BABFB881C305E46DE4A8B443BED8E94A8F948 (AsyncOperationBase_t4808DB931A15FAB56C45333DFBB14F8E9BD49124* __this, const RuntimeMethod* method) 
{
	Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* G_B2_0 = NULL;
	Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* G_B1_0 = NULL;
	{
		// m_CompletedCallback?.Invoke(this);
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_0 = __this->___m_CompletedCallback_0;
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0014;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		Action_1_Invoke_m468F4CDC64512C68E391F8A876A27ACC4B992B50_inline(G_B2_0, __this, NULL);
	}

IL_0014:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperationBase::OnCompleted(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase_OnCompleted_m857D67EBD531576BF37FB74499C781666DC27F88 (AsyncOperationBase_t4808DB931A15FAB56C45333DFBB14F8E9BD49124* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_continuation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_U3COnCompletedU3Eb__0_m776443FF8BCB7D55D852BA853922C09181C2467C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_t151EFA0C3EB311C252F8C42FBBBE5C6DFB1AD944_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass17_0_t151EFA0C3EB311C252F8C42FBBBE5C6DFB1AD944* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass17_0_t151EFA0C3EB311C252F8C42FBBBE5C6DFB1AD944* L_0 = (U3CU3Ec__DisplayClass17_0_t151EFA0C3EB311C252F8C42FBBBE5C6DFB1AD944*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass17_0_t151EFA0C3EB311C252F8C42FBBBE5C6DFB1AD944_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass17_0__ctor_m122B1CD2CAB952EAC3144B97638FA48B26CC00E1(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass17_0_t151EFA0C3EB311C252F8C42FBBBE5C6DFB1AD944* L_1 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___0_continuation;
		NullCheck(L_1);
		L_1->___continuation_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___continuation_0), (void*)L_2);
		// Completed += op => continuation?.Invoke();
		U3CU3Ec__DisplayClass17_0_t151EFA0C3EB311C252F8C42FBBBE5C6DFB1AD944* L_3 = V_0;
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_4 = (Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*)il2cpp_codegen_object_new(Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Action_1__ctor_m0760403D59B61247DFD6DA006F6CC392E7241BD9(L_4, L_3, (intptr_t)((void*)U3CU3Ec__DisplayClass17_0_U3COnCompletedU3Eb__0_m776443FF8BCB7D55D852BA853922C09181C2467C_RuntimeMethod_var), NULL);
		AsyncOperationBase_add_Completed_mBF050A2DCED3671779F2DCB9CE85B0CBF09D434C(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperationBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncOperationBase__ctor_mAF087348521B946CBA095B83B3FC55FBE1C9E314 (AsyncOperationBase_t4808DB931A15FAB56C45333DFBB14F8E9BD49124* __this, const RuntimeMethod* method) 
{
	{
		CustomYieldInstruction__ctor_mB64531EC09E871EF60BFAC16918A774C977C7B50(__this, NULL);
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
// System.Void Unity.Services.Core.Internal.AsyncOperationBase/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_m122B1CD2CAB952EAC3144B97638FA48B26CC00E1 (U3CU3Ec__DisplayClass17_0_t151EFA0C3EB311C252F8C42FBBBE5C6DFB1AD944* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperationBase/<>c__DisplayClass17_0::<OnCompleted>b__0(Unity.Services.Core.Internal.IAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0_U3COnCompletedU3Eb__0_m776443FF8BCB7D55D852BA853922C09181C2467C (U3CU3Ec__DisplayClass17_0_t151EFA0C3EB311C252F8C42FBBBE5C6DFB1AD944* __this, RuntimeObject* ___0_op, const RuntimeMethod* method) 
{
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B1_0 = NULL;
	{
		// Completed += op => continuation?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___continuation_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000c;
		}
	}
	{
		goto IL_0012;
	}

IL_000c:
	{
		NullCheck(G_B2_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B2_0, NULL);
	}

IL_0012:
	{
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
// Unity.Services.Core.Internal.AsyncOperationAwaiter Unity.Services.Core.Internal.AsyncOperationExtensions::GetAwaiter(Unity.Services.Core.Internal.IAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662 AsyncOperationExtensions_GetAwaiter_mADADF7D32468A8CED211BA84C5381AAAD24C6392 (RuntimeObject* ___0_self, const RuntimeMethod* method) 
{
	AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new AsyncOperationAwaiter(self);
		RuntimeObject* L_0 = ___0_self;
		AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662 L_1;
		memset((&L_1), 0, sizeof(L_1));
		AsyncOperationAwaiter__ctor_mDA5FDE70CB821282BE1B34988F035D089E5C4668((&L_1), L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		AsyncOperationAwaiter_tB6E3B911C81C8146C4AB003B868DC43C5700B662 L_2 = V_0;
		return L_2;
	}
}
// System.Threading.Tasks.Task Unity.Services.Core.Internal.AsyncOperationExtensions::AsTask(Unity.Services.Core.Internal.IAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* AsyncOperationExtensions_AsTask_m639FEC1B981FCEFE41D206E5EE798158E523BE41 (RuntimeObject* ___0_self, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CAsTaskU3Eg__CompleteTaskU7C0_m971ACC6A960E4BAE00467A0B72768FFDE7DA0A3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass1_0_tE96228883203CD8C2E3FAE5BC1CE0C36067896C9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass1_0_tE96228883203CD8C2E3FAE5BC1CE0C36067896C9* V_0 = NULL;
	bool V_1 = false;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_2 = NULL;
	bool V_3 = false;
	{
		U3CU3Ec__DisplayClass1_0_tE96228883203CD8C2E3FAE5BC1CE0C36067896C9* L_0 = (U3CU3Ec__DisplayClass1_0_tE96228883203CD8C2E3FAE5BC1CE0C36067896C9*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass1_0_tE96228883203CD8C2E3FAE5BC1CE0C36067896C9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass1_0__ctor_mD92A511117A89E573219D50367FC2ECD9551DA54(L_0, NULL);
		V_0 = L_0;
		// if (self.Status == AsyncOperationStatus.Succeeded)
		RuntimeObject* L_1 = ___0_self;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Unity.Services.Core.Internal.AsyncOperationStatus Unity.Services.Core.Internal.IAsyncOperation::get_Status() */, IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var, L_1);
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)2))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		// return Task.CompletedTask;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline(NULL);
		V_2 = L_4;
		goto IL_0062;
	}

IL_001d:
	{
		// var taskCompletionSource = new TaskCompletionSource<object>();
		U3CU3Ec__DisplayClass1_0_tE96228883203CD8C2E3FAE5BC1CE0C36067896C9* L_5 = V_0;
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_6 = (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37*)il2cpp_codegen_object_new(TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60(L_6, TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_RuntimeMethod_var);
		NullCheck(L_5);
		L_5->___taskCompletionSource_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&L_5->___taskCompletionSource_0), (void*)L_6);
		// if (self.IsDone)
		RuntimeObject* L_7 = ___0_self;
		NullCheck(L_7);
		bool L_8;
		L_8 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Unity.Services.Core.Internal.IAsyncOperation::get_IsDone() */, IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var, L_7);
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_003f;
		}
	}
	{
		// CompleteTask(self);
		U3CU3Ec__DisplayClass1_0_tE96228883203CD8C2E3FAE5BC1CE0C36067896C9* L_10 = V_0;
		RuntimeObject* L_11 = ___0_self;
		NullCheck(L_10);
		U3CU3Ec__DisplayClass1_0_U3CAsTaskU3Eg__CompleteTaskU7C0_m971ACC6A960E4BAE00467A0B72768FFDE7DA0A3A(L_10, L_11, NULL);
		goto IL_0054;
	}

IL_003f:
	{
		// self.Completed += CompleteTask;
		RuntimeObject* L_12 = ___0_self;
		U3CU3Ec__DisplayClass1_0_tE96228883203CD8C2E3FAE5BC1CE0C36067896C9* L_13 = V_0;
		Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* L_14 = (Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50*)il2cpp_codegen_object_new(Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Action_1__ctor_m0760403D59B61247DFD6DA006F6CC392E7241BD9(L_14, L_13, (intptr_t)((void*)U3CU3Ec__DisplayClass1_0_U3CAsTaskU3Eg__CompleteTaskU7C0_m971ACC6A960E4BAE00467A0B72768FFDE7DA0A3A_RuntimeMethod_var), NULL);
		NullCheck(L_12);
		InterfaceActionInvoker1< Action_1_tFA335D452858C05643AEE3281C1E75D39F76AE50* >::Invoke(2 /* System.Void Unity.Services.Core.Internal.IAsyncOperation::add_Completed(System.Action`1<Unity.Services.Core.Internal.IAsyncOperation>) */, IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var, L_12, L_14);
	}

IL_0054:
	{
		// return taskCompletionSource.Task;
		U3CU3Ec__DisplayClass1_0_tE96228883203CD8C2E3FAE5BC1CE0C36067896C9* L_15 = V_0;
		NullCheck(L_15);
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_16 = L_15->___taskCompletionSource_0;
		NullCheck(L_16);
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_17;
		L_17 = TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_inline(L_16, TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_RuntimeMethod_var);
		V_2 = L_17;
		goto IL_0062;
	}

IL_0062:
	{
		// }
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_18 = V_2;
		return L_18;
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
// System.Void Unity.Services.Core.Internal.AsyncOperationExtensions/<>c__DisplayClass1_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0__ctor_mD92A511117A89E573219D50367FC2ECD9551DA54 (U3CU3Ec__DisplayClass1_0_tE96228883203CD8C2E3FAE5BC1CE0C36067896C9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.AsyncOperationExtensions/<>c__DisplayClass1_0::<AsTask>g__CompleteTask|0(Unity.Services.Core.Internal.IAsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass1_0_U3CAsTaskU3Eg__CompleteTaskU7C0_m971ACC6A960E4BAE00467A0B72768FFDE7DA0A3A (U3CU3Ec__DisplayClass1_0_tE96228883203CD8C2E3FAE5BC1CE0C36067896C9* __this, RuntimeObject* ___0_operation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetCanceled_m3D4DB4B9418F13DC64123476BCA6628844E68175_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetException_m458D56254FBD7F874452154131D60AADD2131334_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetResult_m7A0F162733257CA73B347B6BB9677F25A0AB0F9B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch (operation.Status)
		RuntimeObject* L_0 = ___0_operation;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* Unity.Services.Core.Internal.AsyncOperationStatus Unity.Services.Core.Internal.IAsyncOperation::get_Status() */, IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var, L_0);
		V_1 = L_1;
		int32_t L_2 = V_1;
		V_0 = L_2;
		int32_t L_3 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_3, 2)))
		{
			case 0:
			{
				goto IL_0042;
			}
			case 1:
			{
				goto IL_0020;
			}
			case 2:
			{
				goto IL_0034;
			}
		}
	}
	{
		goto IL_0051;
	}

IL_0020:
	{
		// taskCompletionSource.TrySetException(operation.Exception);
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_4 = __this->___taskCompletionSource_0;
		RuntimeObject* L_5 = ___0_operation;
		NullCheck(L_5);
		Exception_t* L_6;
		L_6 = InterfaceFuncInvoker0< Exception_t* >::Invoke(4 /* System.Exception Unity.Services.Core.Internal.IAsyncOperation::get_Exception() */, IAsyncOperation_t7153260BE2F10D2FD112421181A5755F80E5A752_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_4);
		bool L_7;
		L_7 = TaskCompletionSource_1_TrySetException_m458D56254FBD7F874452154131D60AADD2131334(L_4, L_6, TaskCompletionSource_1_TrySetException_m458D56254FBD7F874452154131D60AADD2131334_RuntimeMethod_var);
		// break;
		goto IL_0057;
	}

IL_0034:
	{
		// taskCompletionSource.TrySetCanceled();
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_8 = __this->___taskCompletionSource_0;
		NullCheck(L_8);
		bool L_9;
		L_9 = TaskCompletionSource_1_TrySetCanceled_m3D4DB4B9418F13DC64123476BCA6628844E68175(L_8, TaskCompletionSource_1_TrySetCanceled_m3D4DB4B9418F13DC64123476BCA6628844E68175_RuntimeMethod_var);
		// break;
		goto IL_0057;
	}

IL_0042:
	{
		// taskCompletionSource.TrySetResult(null);
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_10 = __this->___taskCompletionSource_0;
		NullCheck(L_10);
		bool L_11;
		L_11 = TaskCompletionSource_1_TrySetResult_m7A0F162733257CA73B347B6BB9677F25A0AB0F9B(L_10, NULL, TaskCompletionSource_1_TrySetResult_m7A0F162733257CA73B347B6BB9677F25A0AB0F9B_RuntimeMethod_var);
		// break;
		goto IL_0057;
	}

IL_0051:
	{
		// throw new ArgumentOutOfRangeException();
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_12 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_12);
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_12, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_12, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass1_0_U3CAsTaskU3Eg__CompleteTaskU7C0_m971ACC6A960E4BAE00467A0B72768FFDE7DA0A3A_RuntimeMethod_var)));
	}

IL_0057:
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
// System.Boolean Unity.Services.Core.Internal.TaskAsyncOperation::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskAsyncOperation_get_IsCompleted_mE8E514DC0AF426E20D123189A8166B0536A5BB0A (TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128* __this, const RuntimeMethod* method) 
{
	{
		// public override bool IsCompleted => m_Task.IsCompleted;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = __this->___m_Task_2;
		NullCheck(L_0);
		bool L_1;
		L_1 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831(L_0, NULL);
		return L_1;
	}
}
// Unity.Services.Core.Internal.AsyncOperationStatus Unity.Services.Core.Internal.TaskAsyncOperation::get_Status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskAsyncOperation_get_Status_mE71FE39E4040745C8991A9B2D9013485F2F570B2 (TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (m_Task == null)
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = __this->___m_Task_2;
		V_0 = (bool)((((RuntimeObject*)(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return AsyncOperationStatus.None;
		V_1 = 0;
		goto IL_0058;
	}

IL_0013:
	{
		// if (!m_Task.IsCompleted)
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2 = __this->___m_Task_2;
		NullCheck(L_2);
		bool L_3;
		L_3 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831(L_2, NULL);
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// return AsyncOperationStatus.InProgress;
		V_1 = 1;
		goto IL_0058;
	}

IL_002a:
	{
		// if (m_Task.IsCanceled)
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5 = __this->___m_Task_2;
		NullCheck(L_5);
		bool L_6;
		L_6 = Task_get_IsCanceled_m96A8D3F85158A9CB3AEA50A00A55BE4E0F0E21FA(L_5, NULL);
		V_3 = L_6;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_003e;
		}
	}
	{
		// return AsyncOperationStatus.Cancelled;
		V_1 = 4;
		goto IL_0058;
	}

IL_003e:
	{
		// if (m_Task.IsFaulted)
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_8 = __this->___m_Task_2;
		NullCheck(L_8);
		bool L_9;
		L_9 = Task_get_IsFaulted_mC0AD3EA4EAF3B47C1F5FE9624541F0A00B9426D9(L_8, NULL);
		V_4 = L_9;
		bool L_10 = V_4;
		if (!L_10)
		{
			goto IL_0054;
		}
	}
	{
		// return AsyncOperationStatus.Failed;
		V_1 = 3;
		goto IL_0058;
	}

IL_0054:
	{
		// return AsyncOperationStatus.Succeeded;
		V_1 = 2;
		goto IL_0058;
	}

IL_0058:
	{
		// }
		int32_t L_11 = V_1;
		return L_11;
	}
}
// System.Exception Unity.Services.Core.Internal.TaskAsyncOperation::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t* TaskAsyncOperation_get_Exception_m0DE2EB1BFD825B1EC8DF097F19BEAB5A97A8476D (TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128* __this, const RuntimeMethod* method) 
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* G_B2_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* G_B1_0 = NULL;
	AggregateException_t51B6205846DFB356B94452702201DD239D44422F* G_B3_0 = NULL;
	{
		// public override Exception Exception => m_Task?.Exception;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = __this->___m_Task_2;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = ((AggregateException_t51B6205846DFB356B94452702201DD239D44422F*)(NULL));
		goto IL_0012;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_2;
		L_2 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(G_B2_0, NULL);
		G_B3_0 = L_2;
	}

IL_0012:
	{
		return G_B3_0;
	}
}
// System.Void Unity.Services.Core.Internal.TaskAsyncOperation::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAsyncOperation_GetResult_mF09BB788C2E02361476796AE889E2FA9E88541C6 (TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128* __this, const RuntimeMethod* method) 
{
	{
		// public override void GetResult() {}
		return;
	}
}
// Unity.Services.Core.Internal.AsyncOperationBase Unity.Services.Core.Internal.TaskAsyncOperation::GetAwaiter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperationBase_t4808DB931A15FAB56C45333DFBB14F8E9BD49124* TaskAsyncOperation_GetAwaiter_mAFF3CA07A0A4DAFBB96D2D11C5A5085A4988521F (TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128* __this, const RuntimeMethod* method) 
{
	AsyncOperationBase_t4808DB931A15FAB56C45333DFBB14F8E9BD49124* V_0 = NULL;
	{
		// return this;
		V_0 = __this;
		goto IL_0005;
	}

IL_0005:
	{
		// }
		AsyncOperationBase_t4808DB931A15FAB56C45333DFBB14F8E9BD49124* L_0 = V_0;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.TaskAsyncOperation::.ctor(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAsyncOperation__ctor_mEDC34C8442D9965300375DEB7A1658ED3BF33D46 (TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_task, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__10_0_m7D1C91349CC66FFB64227709E0E57B9BE35C6ECF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* G_B4_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* G_B4_1 = NULL;
	Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* G_B3_0 = NULL;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* G_B3_1 = NULL;
	{
		// public TaskAsyncOperation(Task task)
		AsyncOperationBase__ctor_mAF087348521B946CBA095B83B3FC55FBE1C9E314(__this, NULL);
		// if (Scheduler == null)
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_0 = ((TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128_StaticFields*)il2cpp_codegen_static_fields_for(TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128_il2cpp_TypeInfo_var))->___Scheduler_1;
		V_0 = (bool)((((RuntimeObject*)(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// SetScheduler();
		TaskAsyncOperation_SetScheduler_m3DAA8E75D48B5977ED724AF4F5637FBD73199FBC(NULL);
	}

IL_001c:
	{
		// m_Task = task;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2 = ___0_task;
		__this->___m_Task_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Task_2), (void*)L_2);
		// task.ContinueWith((t, state) =>
		// {
		//     var self = (TaskAsyncOperation)state;
		//     self.DidComplete();
		// }, this, CancellationToken.None, TaskContinuationOptions.None, Scheduler);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = ___0_task;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_il2cpp_TypeInfo_var);
		Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* L_4 = ((U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_il2cpp_TypeInfo_var))->___U3CU3E9__10_0_1;
		Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* L_5 = L_4;
		G_B3_0 = L_5;
		G_B3_1 = L_3;
		if (L_5)
		{
			G_B4_0 = L_5;
			G_B4_1 = L_3;
			goto IL_0043;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_il2cpp_TypeInfo_var);
		U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2* L_6 = ((U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* L_7 = (Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB*)il2cpp_codegen_object_new(Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Action_2__ctor_mCB8799E12AB6CA46E55E300245D89C3B2A3955E9(L_7, L_6, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__10_0_m7D1C91349CC66FFB64227709E0E57B9BE35C6ECF_RuntimeMethod_var), NULL);
		Action_2_tB3A2D09A16BB2D5A96CEEE66C2F9934F8AF9CEDB* L_8 = L_7;
		((U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_il2cpp_TypeInfo_var))->___U3CU3E9__10_0_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_il2cpp_TypeInfo_var))->___U3CU3E9__10_0_1), (void*)L_8);
		G_B4_0 = L_8;
		G_B4_1 = G_B3_1;
	}

IL_0043:
	{
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_9;
		L_9 = CancellationToken_get_None_mB0E2D3427C25F09ACEBB2D060F82088EEC00BA53(NULL);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_10 = ((TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128_StaticFields*)il2cpp_codegen_static_fields_for(TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128_il2cpp_TypeInfo_var))->___Scheduler_1;
		NullCheck(G_B4_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_11;
		L_11 = Task_ContinueWith_m332FAFE0E12D9D53BEEDE60B086EB4816462834F(G_B4_1, G_B4_0, __this, L_9, 0, L_10, NULL);
		// }
		return;
	}
}
// Unity.Services.Core.Internal.TaskAsyncOperation Unity.Services.Core.Internal.TaskAsyncOperation::Run(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128* TaskAsyncOperation_Run_m925817FA5D948CACE92697456D8EFE94B48601B2 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_action, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_0 = NULL;
	TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128* V_1 = NULL;
	TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128* V_2 = NULL;
	{
		// var task = new Task(action);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___0_action;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1 = (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)il2cpp_codegen_object_new(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Task__ctor_m101572B46FBE74F66367F25C84D9CDB15D68A637(L_1, L_0, NULL);
		V_0 = L_1;
		// var ret = new TaskAsyncOperation(task);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2 = V_0;
		TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128* L_3 = (TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128*)il2cpp_codegen_object_new(TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		TaskAsyncOperation__ctor_mEDC34C8442D9965300375DEB7A1658ED3BF33D46(L_3, L_2, NULL);
		V_1 = L_3;
		// task.Start();
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4 = V_0;
		NullCheck(L_4);
		Task_Start_m2DC09C3214A841B5C3A6AD800E4020DE365FA620(L_4, NULL);
		// return ret;
		TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128* L_5 = V_1;
		V_2 = L_5;
		goto IL_001a;
	}

IL_001a:
	{
		// }
		TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128* L_6 = V_2;
		return L_6;
	}
}
// System.Void Unity.Services.Core.Internal.TaskAsyncOperation::SetScheduler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskAsyncOperation_SetScheduler_m3DAA8E75D48B5977ED724AF4F5637FBD73199FBC (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Scheduler = TaskScheduler.FromCurrentSynchronizationContext();
		il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_0;
		L_0 = TaskScheduler_FromCurrentSynchronizationContext_m0520B4EAEC13A789C28A47B5215826D435973EE7(NULL);
		((TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128_StaticFields*)il2cpp_codegen_static_fields_for(TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128_il2cpp_TypeInfo_var))->___Scheduler_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128_StaticFields*)il2cpp_codegen_static_fields_for(TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128_il2cpp_TypeInfo_var))->___Scheduler_1), (void*)L_0);
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
// System.Void Unity.Services.Core.Internal.TaskAsyncOperation/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC47CC42DC9A24EAC97D78FEA4343A078D74BB49F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2* L_0 = (U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2*)il2cpp_codegen_object_new(U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m5A0343E410EC083744848A5D7F30B3A483D4ED20(L_0, NULL);
		((U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.TaskAsyncOperation/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5A0343E410EC083744848A5D7F30B3A483D4ED20 (U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.TaskAsyncOperation/<>c::<.ctor>b__10_0(System.Threading.Tasks.Task,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3C_ctorU3Eb__10_0_m7D1C91349CC66FFB64227709E0E57B9BE35C6ECF (U3CU3Ec_t13F9E70D03AAE56EBFD372A0CCC9FF1B1AA01FE2* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_t, RuntimeObject* ___1_state, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128* V_0 = NULL;
	{
		// var self = (TaskAsyncOperation)state;
		RuntimeObject* L_0 = ___1_state;
		V_0 = ((TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128*)CastclassClass((RuntimeObject*)L_0, TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128_il2cpp_TypeInfo_var));
		// self.DidComplete();
		TaskAsyncOperation_t8687C60D3AB3CBB572224A36C5BAB3DAE972D128* L_1 = V_0;
		NullCheck(L_1);
		AsyncOperationBase_DidComplete_m898BABFB881C305E46DE4A8B443BED8E94A8F948(L_1, NULL);
		// }, this, CancellationToken.None, TaskContinuationOptions.None, Scheduler);
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
// System.Void Unity.Services.Core.Internal.CoreLogger::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreLogger_Log_m6FC47A07A7D20D4F55F05B3541545487BB28BC37 (RuntimeObject* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37DB785FDD0276CE7F0BC844D3E3412E90A589F9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void Log(object message) => Debug.unityLogger.Log(Tag, message);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline(NULL);
		RuntimeObject* L_1 = ___0_message;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(5 /* System.Void UnityEngine.ILogger::Log(System.String,System.Object) */, ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var, L_0, _stringLiteral37DB785FDD0276CE7F0BC844D3E3412E90A589F9, L_1);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreLogger::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreLogger_LogWarning_m0ADFEA332A24159D7EBDE589D840C9F563736073 (RuntimeObject* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37DB785FDD0276CE7F0BC844D3E3412E90A589F9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void LogWarning(object message) => Debug.unityLogger.LogWarning(Tag, message);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline(NULL);
		RuntimeObject* L_1 = ___0_message;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(6 /* System.Void UnityEngine.ILogger::LogWarning(System.String,System.Object) */, ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var, L_0, _stringLiteral37DB785FDD0276CE7F0BC844D3E3412E90A589F9, L_1);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreLogger::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreLogger_LogError_mC9B6F1572E693EEAE0A8C72A539C8E75AD967D8E (RuntimeObject* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37DB785FDD0276CE7F0BC844D3E3412E90A589F9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void LogError(object message) => Debug.unityLogger.LogError(Tag, message);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline(NULL);
		RuntimeObject* L_1 = ___0_message;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(7 /* System.Void UnityEngine.ILogger::LogError(System.String,System.Object) */, ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var, L_0, _stringLiteral37DB785FDD0276CE7F0BC844D3E3412E90A589F9, L_1);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreLogger::LogException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreLogger_LogException_m7129C6F678E086232211CBC0347F2300D0A42F3C (Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37DB785FDD0276CE7F0BC844D3E3412E90A589F9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.unityLogger.Log(LogType.Exception, Tag, exception);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline(NULL);
		Exception_t* L_1 = ___0_exception;
		NullCheck(L_0);
		InterfaceActionInvoker3< int32_t, String_t*, RuntimeObject* >::Invoke(4 /* System.Void UnityEngine.ILogger::Log(UnityEngine.LogType,System.String,System.Object) */, ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var, L_0, 4, _stringLiteral37DB785FDD0276CE7F0BC844D3E3412E90A589F9, L_1);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreLogger::LogAssertion(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreLogger_LogAssertion_mA1D5FDC81D8C375FAD49BC166A9D6740C0177788 (RuntimeObject* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37DB785FDD0276CE7F0BC844D3E3412E90A589F9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void LogAssertion(object message) => Debug.unityLogger.Log(LogType.Assert, Tag, message);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline(NULL);
		RuntimeObject* L_1 = ___0_message;
		NullCheck(L_0);
		InterfaceActionInvoker3< int32_t, String_t*, RuntimeObject* >::Invoke(4 /* System.Void UnityEngine.ILogger::Log(UnityEngine.LogType,System.String,System.Object) */, ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var, L_0, 1, _stringLiteral37DB785FDD0276CE7F0BC844D3E3412E90A589F9, L_1);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreLogger::LogVerbose(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreLogger_LogVerbose_m79E9198201A20B309BC6B3D469F1305333C8A26A (RuntimeObject* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37DB785FDD0276CE7F0BC844D3E3412E90A589F9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void LogVerbose(object message) => Debug.unityLogger.Log(Tag, message);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline(NULL);
		RuntimeObject* L_1 = ___0_message;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(5 /* System.Void UnityEngine.ILogger::Log(System.String,System.Object) */, ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var, L_0, _stringLiteral37DB785FDD0276CE7F0BC844D3E3412E90A589F9, L_1);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreLogger::LogTelemetry(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreLogger_LogTelemetry_m048576E4285063DF7C9B189C25D7FDF61085B948 (RuntimeObject* ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37DB785FDD0276CE7F0BC844D3E3412E90A589F9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static void LogTelemetry(object message) => Debug.unityLogger.Log(Tag, message);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline(NULL);
		RuntimeObject* L_1 = ___0_message;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, RuntimeObject* >::Invoke(5 /* System.Void UnityEngine.ILogger::Log(System.String,System.Object) */, ILogger_tD1F573C6DC829FBA987FA1EBA0A5FA64E0C2BC42_il2cpp_TypeInfo_var, L_0, _stringLiteral37DB785FDD0276CE7F0BC844D3E3412E90A589F9, L_1);
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
// System.Void Unity.Services.Core.Internal.CircularDependencyException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircularDependencyException__ctor_m4C48FC29A6765759CEF10843D5A98C43F100B2E2 (CircularDependencyException_t1447C8D464045989784E78E658EFE30FF95153FC* __this, const RuntimeMethod* method) 
{
	{
		// public CircularDependencyException() {}
		ServicesInitializationException__ctor_m92C4F3ACACE7EC3753B8BFEE082221D752CA751C(__this, NULL);
		// public CircularDependencyException() {}
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CircularDependencyException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CircularDependencyException__ctor_m3D8DEB3AB4C12EFA05800264FF203F8DBB8F5D62 (CircularDependencyException_t1447C8D464045989784E78E658EFE30FF95153FC* __this, String_t* ___0_message, const RuntimeMethod* method) 
{
	{
		// : base(message) {}
		String_t* L_0 = ___0_message;
		ServicesInitializationException__ctor_m638AF9055D8C8C6BA7AC554FF3066C26EA869F55(__this, L_0, NULL);
		// : base(message) {}
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
// System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent> Unity.Services.Core.Internal.ComponentRegistry::get_ComponentTypeHashToInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* ComponentRegistry_get_ComponentTypeHashToInstance_mC29AAC6141CC7C8A088B1083CD07A802BF281F20 (ComponentRegistry_tE9997750875F6233B090B300FABCF05123E45523* __this, const RuntimeMethod* method) 
{
	{
		// internal Dictionary<int, IServiceComponent> ComponentTypeHashToInstance { get; }
		Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* L_0 = __this->___U3CComponentTypeHashToInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.ComponentRegistry::.ctor(System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentRegistry__ctor_m3FF6CDF744DAFB26FFAF27867B8D5BE8DDC0D43A (ComponentRegistry_tE9997750875F6233B090B300FABCF05123E45523* __this, Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* ___0_componentTypeHashToInstance, const RuntimeMethod* method) 
{
	{
		// public ComponentRegistry(
		//     [NotNull] Dictionary<int, IServiceComponent> componentTypeHashToInstance)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// ComponentTypeHashToInstance = componentTypeHashToInstance;
		Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* L_0 = ___0_componentTypeHashToInstance;
		__this->___U3CComponentTypeHashToInstanceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CComponentTypeHashToInstanceU3Ek__BackingField_0), (void*)L_0);
		// }
		return;
	}
}
// System.Boolean Unity.Services.Core.Internal.ComponentRegistry::IsComponentTypeRegistered(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ComponentRegistry_IsComponentTypeRegistered_m71D21117B9314CB1CA28F75B0246E215888228F8 (ComponentRegistry_tE9997750875F6233B090B300FABCF05123E45523* __this, int32_t ___0_componentTypeHash, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m8E6C3FEADDB1D6606A48972D8C7405DD98D66F6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		// return ComponentTypeHashToInstance.TryGetValue(componentTypeHash, out var storedComponent)
		//     && !(storedComponent is null)
		//     && !(storedComponent is MissingComponent);
		Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* L_0;
		L_0 = ComponentRegistry_get_ComponentTypeHashToInstance_mC29AAC6141CC7C8A088B1083CD07A802BF281F20_inline(__this, NULL);
		int32_t L_1 = ___0_componentTypeHash;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_m8E6C3FEADDB1D6606A48972D8C7405DD98D66F6B(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_m8E6C3FEADDB1D6606A48972D8C7405DD98D66F6B_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		G_B4_0 = ((((int32_t)((!(((RuntimeObject*)(MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8*)((MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8*)IsInstClass((RuntimeObject*)L_4, MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0023;
	}

IL_0022:
	{
		G_B4_0 = 0;
	}

IL_0023:
	{
		V_1 = (bool)G_B4_0;
		goto IL_0026;
	}

IL_0026:
	{
		// }
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Void Unity.Services.Core.Internal.ComponentRegistry::ResetProvidedComponents(System.Collections.Generic.IDictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComponentRegistry_ResetProvidedComponents_m58F818C1716DBB973137A543DE880D24E2F25908 (ComponentRegistry_tE9997750875F6233B090B300FABCF05123E45523* __this, RuntimeObject* ___0_componentTypeHashToInstance, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DictionaryExtensions_MergeAllowOverride_TisDictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIServiceComponent_t88C101C3AF6A1CA33BFF6842BF9AD1E6266E72E9_mA5F497216B69E0B710B774C252FEDA78EC1C0C66_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_mE0540DC1320338CDF8987A9508CB911F2A10DC75_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ComponentTypeHashToInstance.Clear();
		Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* L_0;
		L_0 = ComponentRegistry_get_ComponentTypeHashToInstance_mC29AAC6141CC7C8A088B1083CD07A802BF281F20_inline(__this, NULL);
		NullCheck(L_0);
		Dictionary_2_Clear_mE0540DC1320338CDF8987A9508CB911F2A10DC75(L_0, Dictionary_2_Clear_mE0540DC1320338CDF8987A9508CB911F2A10DC75_RuntimeMethod_var);
		// ComponentTypeHashToInstance.MergeAllowOverride(componentTypeHashToInstance);
		Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* L_1;
		L_1 = ComponentRegistry_get_ComponentTypeHashToInstance_mC29AAC6141CC7C8A088B1083CD07A802BF281F20_inline(__this, NULL);
		RuntimeObject* L_2 = ___0_componentTypeHashToInstance;
		Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* L_3;
		L_3 = DictionaryExtensions_MergeAllowOverride_TisDictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIServiceComponent_t88C101C3AF6A1CA33BFF6842BF9AD1E6266E72E9_mA5F497216B69E0B710B774C252FEDA78EC1C0C66(L_1, L_2, DictionaryExtensions_MergeAllowOverride_TisDictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIServiceComponent_t88C101C3AF6A1CA33BFF6842BF9AD1E6266E72E9_mA5F497216B69E0B710B774C252FEDA78EC1C0C66_RuntimeMethod_var);
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
// Unity.Services.Core.Internal.IComponentRegistry Unity.Services.Core.Internal.LockedComponentRegistry::get_Registry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LockedComponentRegistry_get_Registry_m2170B5DB74B027249B53D07BF8A05D530956F941 (LockedComponentRegistry_t82DAB6CC0CFF528CB442E3BFD7E331B6E1706B5F* __this, const RuntimeMethod* method) 
{
	{
		// internal IComponentRegistry Registry { get; }
		RuntimeObject* L_0 = __this->___U3CRegistryU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.LockedComponentRegistry::.ctor(Unity.Services.Core.Internal.IComponentRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedComponentRegistry__ctor_m3630AF00C5DA0EC485544F72503B50D95E871BE1 (LockedComponentRegistry_t82DAB6CC0CFF528CB442E3BFD7E331B6E1706B5F* __this, RuntimeObject* ___0_registryToLock, const RuntimeMethod* method) 
{
	{
		// public LockedComponentRegistry(
		//     [NotNull] IComponentRegistry registryToLock)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Registry = registryToLock;
		RuntimeObject* L_0 = ___0_registryToLock;
		__this->___U3CRegistryU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRegistryU3Ek__BackingField_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.LockedComponentRegistry::ResetProvidedComponents(System.Collections.Generic.IDictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedComponentRegistry_ResetProvidedComponents_mA0A7565D5FB2DA9D4938EE1631E60AF9AA4F293D (LockedComponentRegistry_t82DAB6CC0CFF528CB442E3BFD7E331B6E1706B5F* __this, RuntimeObject* ___0_componentTypeHashToInstance, const RuntimeMethod* method) 
{
	{
		// public void ResetProvidedComponents(IDictionary<int, IServiceComponent> componentTypeHashToInstance) => throw new InvalidOperationException(k_ErrorMessage);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_0 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral43E7E877F1FB7127DD27D3DFC32DB2C70AD55811)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&LockedComponentRegistry_ResetProvidedComponents_mA0A7565D5FB2DA9D4938EE1631E60AF9AA4F293D_RuntimeMethod_var)));
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
// Conversion methods for marshalling of: Unity.Services.Core.Internal.CoreRegistration
IL2CPP_EXTERN_C void CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshal_pinvoke(const CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581& unmarshaled, CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Registry_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Registry' of type 'CoreRegistration': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Registry_0Exception, NULL);
}
IL2CPP_EXTERN_C void CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshal_pinvoke_back(const CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshaled_pinvoke& marshaled, CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581& unmarshaled)
{
	Exception_t* ___m_Registry_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Registry' of type 'CoreRegistration': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Registry_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Internal.CoreRegistration
IL2CPP_EXTERN_C void CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshal_pinvoke_cleanup(CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Services.Core.Internal.CoreRegistration
IL2CPP_EXTERN_C void CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshal_com(const CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581& unmarshaled, CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshaled_com& marshaled)
{
	Exception_t* ___m_Registry_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Registry' of type 'CoreRegistration': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Registry_0Exception, NULL);
}
IL2CPP_EXTERN_C void CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshal_com_back(const CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshaled_com& marshaled, CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581& unmarshaled)
{
	Exception_t* ___m_Registry_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Registry' of type 'CoreRegistration': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Registry_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Internal.CoreRegistration
IL2CPP_EXTERN_C void CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshal_com_cleanup(CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581_marshaled_com& marshaled)
{
}
// System.Void Unity.Services.Core.Internal.CoreRegistration::.ctor(Unity.Services.Core.Internal.IPackageRegistry,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistration__ctor_mBD89C7177367442E29CDDB5C17527B9C556256E1 (CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* __this, RuntimeObject* ___0_registry, int32_t ___1_packageHash, const RuntimeMethod* method) 
{
	{
		// m_Registry = registry;
		RuntimeObject* L_0 = ___0_registry;
		__this->___m_Registry_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Registry_0), (void*)L_0);
		// m_PackageHash = packageHash;
		int32_t L_1 = ___1_packageHash;
		__this->___m_PackageHash_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void CoreRegistration__ctor_mBD89C7177367442E29CDDB5C17527B9C556256E1_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_registry, int32_t ___1_packageHash, const RuntimeMethod* method)
{
	CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<CoreRegistration_tD2BD53556CAA48BD5E0D32CB92C6494C0EB85581*>(__this + _offset);
	CoreRegistration__ctor_mBD89C7177367442E29CDDB5C17527B9C556256E1(_thisAdjusted, ___0_registry, ___1_packageHash, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.CoreRegistry::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* CoreRegistry_get_Instance_m73A64BD3CB78EF5AC698D1635B5872CEB9F9AFE2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static CoreRegistry Instance { get; internal set; }
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_0 = ((CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_StaticFields*)il2cpp_codegen_static_fields_for(CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.CoreRegistry::set_Instance(Unity.Services.Core.Internal.CoreRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistry_set_Instance_mBFC9CEE6661027ED4103B95A82ABD453555803D7 (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static CoreRegistry Instance { get; internal set; }
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_0 = ___0_value;
		((CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_StaticFields*)il2cpp_codegen_static_fields_for(CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_StaticFields*)il2cpp_codegen_static_fields_for(CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.CoreRegistry::get_PackageRegistry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreRegistry_get_PackageRegistry_m0A95E6723D8237E6E9D6D0067FB0EDFCC3C29063 (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method) 
{
	{
		// internal IPackageRegistry PackageRegistry { get; private set; }
		RuntimeObject* L_0 = __this->___U3CPackageRegistryU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.CoreRegistry::set_PackageRegistry(Unity.Services.Core.Internal.IPackageRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistry_set_PackageRegistry_mCA3C399854251D17A72BBE1E9121AF7050A46D0B (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal IPackageRegistry PackageRegistry { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CPackageRegistryU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPackageRegistryU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Unity.Services.Core.Internal.IComponentRegistry Unity.Services.Core.Internal.CoreRegistry::get_ComponentRegistry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreRegistry_get_ComponentRegistry_mF7CA9E9CEEFF316027E6D59B2AA30AEBA7FAAC13 (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method) 
{
	{
		// internal IComponentRegistry ComponentRegistry { get; private set; }
		RuntimeObject* L_0 = __this->___U3CComponentRegistryU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.CoreRegistry::set_ComponentRegistry(Unity.Services.Core.Internal.IComponentRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistry_set_ComponentRegistry_mF5BBBCDFF2103D1F60E6FA3A7779B06AF3838D8E (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal IComponentRegistry ComponentRegistry { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CComponentRegistryU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CComponentRegistryU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreRegistry::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistry__ctor_m507734CEE1C34622E217894B3D29D7AE0EC45314 (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ComponentRegistry_tE9997750875F6233B090B300FABCF05123E45523_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m2E2032FDA802F3565C754B77CAE7BA58989C1FEA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m46F788DEB6E4E58131A990632E45E4AB535D1EBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PackageRegistry_tEC69FE10BB71F416B3FFACF803BFAF0EED0448E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* V_0 = NULL;
	Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* V_1 = NULL;
	{
		// internal CoreRegistry()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// var dependencyTree = new DependencyTree();
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_0 = (DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992*)il2cpp_codegen_object_new(DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		DependencyTree__ctor_mE8C447ED9582DA0A52E5F5294B424C67641AFA1C(L_0, NULL);
		V_0 = L_0;
		// PackageRegistry = new PackageRegistry(dependencyTree);
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_1 = V_0;
		PackageRegistry_tEC69FE10BB71F416B3FFACF803BFAF0EED0448E9* L_2 = (PackageRegistry_tEC69FE10BB71F416B3FFACF803BFAF0EED0448E9*)il2cpp_codegen_object_new(PackageRegistry_tEC69FE10BB71F416B3FFACF803BFAF0EED0448E9_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		PackageRegistry__ctor_m42324D73BCB367393F2C200E417CA235BDB91330(L_2, L_1, NULL);
		CoreRegistry_set_PackageRegistry_mCA3C399854251D17A72BBE1E9121AF7050A46D0B_inline(__this, L_2, NULL);
		// var componentTypeHashToInstance = new Dictionary<int, IServiceComponent>(
		//     dependencyTree.ComponentTypeHashToInstance.Count);
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_3 = V_0;
		NullCheck(L_3);
		Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* L_4 = L_3->___ComponentTypeHashToInstance_3;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Dictionary_2_get_Count_m46F788DEB6E4E58131A990632E45E4AB535D1EBE(L_4, Dictionary_2_get_Count_m46F788DEB6E4E58131A990632E45E4AB535D1EBE_RuntimeMethod_var);
		Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* L_6 = (Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9*)il2cpp_codegen_object_new(Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Dictionary_2__ctor_m2E2032FDA802F3565C754B77CAE7BA58989C1FEA(L_6, L_5, Dictionary_2__ctor_m2E2032FDA802F3565C754B77CAE7BA58989C1FEA_RuntimeMethod_var);
		V_1 = L_6;
		// ComponentRegistry = new ComponentRegistry(componentTypeHashToInstance);
		Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* L_7 = V_1;
		ComponentRegistry_tE9997750875F6233B090B300FABCF05123E45523* L_8 = (ComponentRegistry_tE9997750875F6233B090B300FABCF05123E45523*)il2cpp_codegen_object_new(ComponentRegistry_tE9997750875F6233B090B300FABCF05123E45523_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		ComponentRegistry__ctor_m3FF6CDF744DAFB26FFAF27867B8D5BE8DDC0D43A(L_8, L_7, NULL);
		CoreRegistry_set_ComponentRegistry_mF5BBBCDFF2103D1F60E6FA3A7779B06AF3838D8E_inline(__this, L_8, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreRegistry::.ctor(Unity.Services.Core.Internal.IPackageRegistry,Unity.Services.Core.Internal.IComponentRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistry__ctor_m210E3AE3F6BAF2AB54B45EC734EA77D15C86EC23 (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, RuntimeObject* ___0_packageRegistry, RuntimeObject* ___1_componentRegistry, const RuntimeMethod* method) 
{
	{
		// internal CoreRegistry(
		//     [NotNull] IPackageRegistry packageRegistry,
		//     [NotNull] IComponentRegistry componentRegistry)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// PackageRegistry = packageRegistry;
		RuntimeObject* L_0 = ___0_packageRegistry;
		CoreRegistry_set_PackageRegistry_mCA3C399854251D17A72BBE1E9121AF7050A46D0B_inline(__this, L_0, NULL);
		// ComponentRegistry = componentRegistry;
		RuntimeObject* L_1 = ___1_componentRegistry;
		CoreRegistry_set_ComponentRegistry_mF5BBBCDFF2103D1F60E6FA3A7779B06AF3838D8E_inline(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreRegistry::LockPackageRegistration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistry_LockPackageRegistration_m031751BE6E5CBB6D30AAE2B64DAF04FC0EEA5A0B (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LockedPackageRegistry_tD44860DBF1971F04B909E49EDEA6B483DD6A8499_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (PackageRegistry is LockedPackageRegistry)
		RuntimeObject* L_0;
		L_0 = CoreRegistry_get_PackageRegistry_m0A95E6723D8237E6E9D6D0067FB0EDFCC3C29063_inline(__this, NULL);
		V_0 = (bool)((!(((RuntimeObject*)(LockedPackageRegistry_tD44860DBF1971F04B909E49EDEA6B483DD6A8499*)((LockedPackageRegistry_tD44860DBF1971F04B909E49EDEA6B483DD6A8499*)IsInstClass((RuntimeObject*)L_0, LockedPackageRegistry_tD44860DBF1971F04B909E49EDEA6B483DD6A8499_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// return;
		goto IL_0028;
	}

IL_0016:
	{
		// PackageRegistry = new LockedPackageRegistry(PackageRegistry);
		RuntimeObject* L_2;
		L_2 = CoreRegistry_get_PackageRegistry_m0A95E6723D8237E6E9D6D0067FB0EDFCC3C29063_inline(__this, NULL);
		LockedPackageRegistry_tD44860DBF1971F04B909E49EDEA6B483DD6A8499* L_3 = (LockedPackageRegistry_tD44860DBF1971F04B909E49EDEA6B483DD6A8499*)il2cpp_codegen_object_new(LockedPackageRegistry_tD44860DBF1971F04B909E49EDEA6B483DD6A8499_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		LockedPackageRegistry__ctor_m98CE0389216302BCF17DF91BC8B76CAA121D8927(L_3, L_2, NULL);
		CoreRegistry_set_PackageRegistry_mCA3C399854251D17A72BBE1E9121AF7050A46D0B_inline(__this, L_3, NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreRegistry::LockComponentRegistration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistry_LockComponentRegistration_mB4ED90ED4F7621588195C9922C9A669C69C831BC (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&LockedComponentRegistry_t82DAB6CC0CFF528CB442E3BFD7E331B6E1706B5F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (ComponentRegistry is LockedComponentRegistry)
		RuntimeObject* L_0;
		L_0 = CoreRegistry_get_ComponentRegistry_mF7CA9E9CEEFF316027E6D59B2AA30AEBA7FAAC13_inline(__this, NULL);
		V_0 = (bool)((!(((RuntimeObject*)(LockedComponentRegistry_t82DAB6CC0CFF528CB442E3BFD7E331B6E1706B5F*)((LockedComponentRegistry_t82DAB6CC0CFF528CB442E3BFD7E331B6E1706B5F*)IsInstClass((RuntimeObject*)L_0, LockedComponentRegistry_t82DAB6CC0CFF528CB442E3BFD7E331B6E1706B5F_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// return;
		goto IL_0028;
	}

IL_0016:
	{
		// ComponentRegistry = new LockedComponentRegistry(ComponentRegistry);
		RuntimeObject* L_2;
		L_2 = CoreRegistry_get_ComponentRegistry_mF7CA9E9CEEFF316027E6D59B2AA30AEBA7FAAC13_inline(__this, NULL);
		LockedComponentRegistry_t82DAB6CC0CFF528CB442E3BFD7E331B6E1706B5F* L_3 = (LockedComponentRegistry_t82DAB6CC0CFF528CB442E3BFD7E331B6E1706B5F*)il2cpp_codegen_object_new(LockedComponentRegistry_t82DAB6CC0CFF528CB442E3BFD7E331B6E1706B5F_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		LockedComponentRegistry__ctor_m3630AF00C5DA0EC485544F72503B50D95E871BE1(L_3, L_2, NULL);
		CoreRegistry_set_ComponentRegistry_mF5BBBCDFF2103D1F60E6FA3A7779B06AF3838D8E_inline(__this, L_3, NULL);
	}

IL_0028:
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
// System.Void Unity.Services.Core.Internal.CoreRegistryInitializer::.ctor(Unity.Services.Core.Internal.CoreRegistry,System.Collections.Generic.List`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreRegistryInitializer__ctor_mBE9C46715DF41A8B1CF31CCAC9166A212318B156 (CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03* __this, CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___0_registry, List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___1_sortedPackageTypeHashes, const RuntimeMethod* method) 
{
	{
		// public CoreRegistryInitializer([NotNull] CoreRegistry registry, [NotNull] List<int> sortedPackageTypeHashes)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_Registry = registry;
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_0 = ___0_registry;
		__this->___m_Registry_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Registry_0), (void*)L_0);
		// m_SortedPackageTypeHashes = sortedPackageTypeHashes;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = ___1_sortedPackageTypeHashes;
		__this->___m_SortedPackageTypeHashes_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SortedPackageTypeHashes_1), (void*)L_1);
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>> Unity.Services.Core.Internal.CoreRegistryInitializer::InitializeRegistryAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t727821A7F4CD62528E4941D3DA8119B6A7A3D4BC* CoreRegistryInitializer_InitializeRegistryAsync_m3E1030C1B0E033F76CF20DC208555AB915C62BF8 (CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m4EB3E38629F4249463A5810A921389C8C24ACD6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CInitializeRegistryAsyncU3Ed__3_t667C2D1D53EB98537AA50BACFCBD9127A01D3CC5_mDB5B1A1329EF2DF5E4BD560BC1524379577A8685_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mE41346DB8D5830551E6DBDA8548B413941945483_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t48F43EEBD362A47F5627122EA5697AD97B922620_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeRegistryAsyncU3Ed__3_t667C2D1D53EB98537AA50BACFCBD9127A01D3CC5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitializeRegistryAsyncU3Ed__3_t667C2D1D53EB98537AA50BACFCBD9127A01D3CC5* V_0 = NULL;
	{
		U3CInitializeRegistryAsyncU3Ed__3_t667C2D1D53EB98537AA50BACFCBD9127A01D3CC5* L_0 = (U3CInitializeRegistryAsyncU3Ed__3_t667C2D1D53EB98537AA50BACFCBD9127A01D3CC5*)il2cpp_codegen_object_new(U3CInitializeRegistryAsyncU3Ed__3_t667C2D1D53EB98537AA50BACFCBD9127A01D3CC5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CInitializeRegistryAsyncU3Ed__3__ctor_mAD38C91E46C5050DE63C53BF773ABBBC7E2B1868(L_0, NULL);
		V_0 = L_0;
		U3CInitializeRegistryAsyncU3Ed__3_t667C2D1D53EB98537AA50BACFCBD9127A01D3CC5* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t48F43EEBD362A47F5627122EA5697AD97B922620_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t48F43EEBD362A47F5627122EA5697AD97B922620 L_2;
		L_2 = AsyncTaskMethodBuilder_1_Create_m4EB3E38629F4249463A5810A921389C8C24ACD6A(AsyncTaskMethodBuilder_1_Create_m4EB3E38629F4249463A5810A921389C8C24ACD6A_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CInitializeRegistryAsyncU3Ed__3_t667C2D1D53EB98537AA50BACFCBD9127A01D3CC5* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_2), (void*)__this);
		U3CInitializeRegistryAsyncU3Ed__3_t667C2D1D53EB98537AA50BACFCBD9127A01D3CC5* L_4 = V_0;
		NullCheck(L_4);
		L_4->___U3CU3E1__state_0 = (-1);
		U3CInitializeRegistryAsyncU3Ed__3_t667C2D1D53EB98537AA50BACFCBD9127A01D3CC5* L_5 = V_0;
		NullCheck(L_5);
		AsyncTaskMethodBuilder_1_t48F43EEBD362A47F5627122EA5697AD97B922620* L_6 = (&L_5->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CInitializeRegistryAsyncU3Ed__3_t667C2D1D53EB98537AA50BACFCBD9127A01D3CC5_mDB5B1A1329EF2DF5E4BD560BC1524379577A8685(L_6, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CInitializeRegistryAsyncU3Ed__3_t667C2D1D53EB98537AA50BACFCBD9127A01D3CC5_mDB5B1A1329EF2DF5E4BD560BC1524379577A8685_RuntimeMethod_var);
		U3CInitializeRegistryAsyncU3Ed__3_t667C2D1D53EB98537AA50BACFCBD9127A01D3CC5* L_7 = V_0;
		NullCheck(L_7);
		AsyncTaskMethodBuilder_1_t48F43EEBD362A47F5627122EA5697AD97B922620* L_8 = (&L_7->___U3CU3Et__builder_1);
		Task_1_t727821A7F4CD62528E4941D3DA8119B6A7A3D4BC* L_9;
		L_9 = AsyncTaskMethodBuilder_1_get_Task_mE41346DB8D5830551E6DBDA8548B413941945483(L_8, AsyncTaskMethodBuilder_1_get_Task_mE41346DB8D5830551E6DBDA8548B413941945483_RuntimeMethod_var);
		return L_9;
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
// System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m6F552D21A7795194E9AB8D5D042CF8D7B3975EE9 (U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Threading.Tasks.Task Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0::<InitializeRegistryAsync>g__TryInitializePackageAsync|0(Unity.Services.Core.Internal.IInitializablePackage)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* U3CU3Ec__DisplayClass3_0_U3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0_m56337B98B3CFDB562165FEE8B41F8987D91B7327 (U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0* __this, RuntimeObject* ___0_package, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_tEDBE32E965E3D0139E956FC4872AE411630D672C_mC0157E1F91DCC9887FB42595A68ACAB7C986BBD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_tEDBE32E965E3D0139E956FC4872AE411630D672C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_tEDBE32E965E3D0139E956FC4872AE411630D672C* V_0 = NULL;
	{
		U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_tEDBE32E965E3D0139E956FC4872AE411630D672C* L_0 = (U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_tEDBE32E965E3D0139E956FC4872AE411630D672C*)il2cpp_codegen_object_new(U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_tEDBE32E965E3D0139E956FC4872AE411630D672C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed__ctor_m3E809804C4E62ACDD9716E522CE055C04EE96B6D(L_0, NULL);
		V_0 = L_0;
		U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_tEDBE32E965E3D0139E956FC4872AE411630D672C* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_2;
		L_2 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_tEDBE32E965E3D0139E956FC4872AE411630D672C* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_3), (void*)__this);
		U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_tEDBE32E965E3D0139E956FC4872AE411630D672C* L_4 = V_0;
		RuntimeObject* L_5 = ___0_package;
		NullCheck(L_4);
		L_4->___package_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___package_2), (void*)L_5);
		U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_tEDBE32E965E3D0139E956FC4872AE411630D672C* L_6 = V_0;
		NullCheck(L_6);
		L_6->___U3CU3E1__state_0 = (-1);
		U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_tEDBE32E965E3D0139E956FC4872AE411630D672C* L_7 = V_0;
		NullCheck(L_7);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_8 = (&L_7->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_tEDBE32E965E3D0139E956FC4872AE411630D672C_mC0157E1F91DCC9887FB42595A68ACAB7C986BBD1(L_8, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_tEDBE32E965E3D0139E956FC4872AE411630D672C_mC0157E1F91DCC9887FB42595A68ACAB7C986BBD1_RuntimeMethod_var);
		U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_tEDBE32E965E3D0139E956FC4872AE411630D672C* L_9 = V_0;
		NullCheck(L_9);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_10 = (&L_9->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_11;
		L_11 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_10, NULL);
		return L_11;
	}
}
// Unity.Services.Core.Internal.IInitializablePackage Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0::<InitializeRegistryAsync>g__GetPackageAt|1(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass3_0_U3CInitializeRegistryAsyncU3Eg__GetPackageAtU7C1_m68BD38748C7FE0D2105C0AB91F6F8E5737F8D016 (U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0* __this, int32_t ___0_index, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8AD97E240F583ACF35C19A2C71143DE04FF1F071_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	{
		// var packageTypeHash = m_SortedPackageTypeHashes[index];
		CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03* L_0 = __this->___U3CU3E4__this_1;
		NullCheck(L_0);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = L_0->___m_SortedPackageTypeHashes_1;
		int32_t L_2 = ___0_index;
		NullCheck(L_1);
		int32_t L_3;
		L_3 = List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D(L_1, L_2, List_1_get_Item_mD99081BEFA1AB3526715F489192B0F7F596C183D_RuntimeMethod_var);
		V_0 = L_3;
		// return dependencyTree.PackageTypeHashToInstance[packageTypeHash];
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_4 = __this->___dependencyTree_4;
		NullCheck(L_4);
		Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36* L_5 = L_4->___PackageTypeHashToInstance_0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_7;
		L_7 = Dictionary_2_get_Item_m8AD97E240F583ACF35C19A2C71143DE04FF1F071(L_5, L_6, Dictionary_2_get_Item_m8AD97E240F583ACF35C19A2C71143DE04FF1F071_RuntimeMethod_var);
		V_1 = L_7;
		goto IL_0027;
	}

IL_0027:
	{
		// }
		RuntimeObject* L_8 = V_1;
		return L_8;
	}
}
// System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0::<InitializeRegistryAsync>g__Fail|2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0_U3CInitializeRegistryAsyncU3Eg__FailU7C2_mB66A52FC680C0D6D34C45425B8D8838A9576BF63 (U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0* __this, const RuntimeMethod* method) 
{
	AggregateException_t51B6205846DFB356B94452702201DD239D44422F* V_0 = NULL;
	{
		// var innerException = new AggregateException(failureReasons);
		List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_0 = __this->___failureReasons_3;
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_1 = (AggregateException_t51B6205846DFB356B94452702201DD239D44422F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AggregateException_t51B6205846DFB356B94452702201DD239D44422F_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		AggregateException__ctor_m36C9769557880F4E90AE5EE44C39F98D86347E1F(L_1, L_0, NULL);
		V_0 = L_1;
		// throw new ServicesInitializationException(errorMessage, innerException);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_2 = V_0;
		ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631* L_3 = (ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		ServicesInitializationException__ctor_mF669B3E2EBFCAF30637035325CD9B965BC11B578(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral383A61072E28D7DD0B2EF761B5CD5543F52B238B)), L_2, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CInitializeRegistryAsyncU3Eg__FailU7C2_mB66A52FC680C0D6D34C45425B8D8838A9576BF63_RuntimeMethod_var)));
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
// System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0/<<InitializeRegistryAsync>g__TryInitializePackageAsync|0>d::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed__ctor_m3E809804C4E62ACDD9716E522CE055C04EE96B6D (U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_tEDBE32E965E3D0139E956FC4872AE411630D672C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0/<<InitializeRegistryAsync>g__TryInitializePackageAsync|0>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_MoveNext_m5E60799930DE5F81F77BBABBF177E4BF259BEE52 (U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_tEDBE32E965E3D0139E956FC4872AE411630D672C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_tEDBE32E965E3D0139E956FC4872AE411630D672C_mB1F884312610762854C167E4A4898BA447FF9DAA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IInitializablePackage_tC78F3A872EFC30DA406E624FDC1C72C9B1381098_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m7C437E7CA551F3A8A3CFF9DAB2D8D00971771FEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PackageInitializationInfo_t3A1BAF9D785E161A9856F3C5769D513C65E49563_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_tEDBE32E965E3D0139E956FC4872AE411630D672C* V_2 = NULL;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_3;
	memset((&V_3), 0, sizeof(V_3));
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_000f_1;
		}

IL_000e_1:
		{
		}

IL_000f_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_2 = V_0;
				if (!L_2)
				{
					goto IL_0015_2;
				}
			}
			{
				goto IL_0017_2;
			}

IL_0015_2:
			{
				goto IL_007a_2;
			}

IL_0017_2:
			{
				// stopwatch.Restart();
				U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0* L_3 = __this->___U3CU3E4__this_3;
				NullCheck(L_3);
				Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_4 = L_3->___stopwatch_0;
				NullCheck(L_4);
				Stopwatch_Restart_m9CE82CCD811EE12C2E4FDFF708B5529D1CE6DA58(L_4, NULL);
				// await package.Initialize(m_Registry);
				RuntimeObject* L_5 = __this->___package_2;
				U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0* L_6 = __this->___U3CU3E4__this_3;
				NullCheck(L_6);
				CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03* L_7 = L_6->___U3CU3E4__this_1;
				NullCheck(L_7);
				CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_8 = L_7->___m_Registry_0;
				NullCheck(L_5);
				Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_9;
				L_9 = InterfaceFuncInvoker1< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* >::Invoke(0 /* System.Threading.Tasks.Task Unity.Services.Core.Internal.IInitializablePackage::Initialize(Unity.Services.Core.Internal.CoreRegistry) */, IInitializablePackage_tC78F3A872EFC30DA406E624FDC1C72C9B1381098_il2cpp_TypeInfo_var, L_5, L_8);
				NullCheck(L_9);
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_10;
				L_10 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_9, NULL);
				V_1 = L_10;
				bool L_11;
				L_11 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_1), NULL);
				if (L_11)
				{
					goto IL_0096_2;
				}
			}
			{
				int32_t L_12 = 0;
				V_0 = L_12;
				__this->___U3CU3E1__state_0 = L_12;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_13 = V_1;
				__this->___U3CU3Eu__1_6 = L_13;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
				V_2 = __this;
				AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_14 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_tEDBE32E965E3D0139E956FC4872AE411630D672C_mB1F884312610762854C167E4A4898BA447FF9DAA(L_14, (&V_1), (&V_2), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_tEDBE32E965E3D0139E956FC4872AE411630D672C_mB1F884312610762854C167E4A4898BA447FF9DAA_RuntimeMethod_var);
				goto IL_0170;
			}

IL_007a_2:
			{
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_15 = __this->___U3CU3Eu__1_6;
				V_1 = L_15;
				TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_16 = (&__this->___U3CU3Eu__1_6);
				il2cpp_codegen_initobj(L_16, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
				int32_t L_17 = (-1);
				V_0 = L_17;
				__this->___U3CU3E1__state_0 = L_17;
			}

IL_0096_2:
			{
				TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_1), NULL);
				// stopwatch.Stop();
				U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0* L_18 = __this->___U3CU3E4__this_3;
				NullCheck(L_18);
				Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_19 = L_18->___stopwatch_0;
				NullCheck(L_19);
				Stopwatch_Stop_m8F2A2EFD9D7D5B4180A5E5379E5443864618D7DC(L_19, NULL);
				// var initializationInfo = new PackageInitializationInfo
				// {
				//     PackageType = package.GetType(),
				//     InitializationTimeInSeconds = stopwatch.Elapsed.TotalSeconds,
				// };
				PackageInitializationInfo_t3A1BAF9D785E161A9856F3C5769D513C65E49563* L_20 = (PackageInitializationInfo_t3A1BAF9D785E161A9856F3C5769D513C65E49563*)il2cpp_codegen_object_new(PackageInitializationInfo_t3A1BAF9D785E161A9856F3C5769D513C65E49563_il2cpp_TypeInfo_var);
				NullCheck(L_20);
				PackageInitializationInfo__ctor_mA13323855BBE265A977A230EE6F62B586D9C84D4(L_20, NULL);
				PackageInitializationInfo_t3A1BAF9D785E161A9856F3C5769D513C65E49563* L_21 = L_20;
				RuntimeObject* L_22 = __this->___package_2;
				NullCheck(L_22);
				Type_t* L_23;
				L_23 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_22, NULL);
				NullCheck(L_21);
				L_21->___PackageType_0 = L_23;
				Il2CppCodeGenWriteBarrier((void**)(&L_21->___PackageType_0), (void*)L_23);
				PackageInitializationInfo_t3A1BAF9D785E161A9856F3C5769D513C65E49563* L_24 = L_21;
				U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0* L_25 = __this->___U3CU3E4__this_3;
				NullCheck(L_25);
				Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_26 = L_25->___stopwatch_0;
				NullCheck(L_26);
				TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_27;
				L_27 = Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178(L_26, NULL);
				V_3 = L_27;
				double L_28;
				L_28 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_3), NULL);
				NullCheck(L_24);
				L_24->___InitializationTimeInSeconds_1 = L_28;
				__this->___U3CinitializationInfoU3E5__1_4 = L_24;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinitializationInfoU3E5__1_4), (void*)L_24);
				// packagesInitInfos.Add(initializationInfo);
				U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0* L_29 = __this->___U3CU3E4__this_3;
				NullCheck(L_29);
				List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF* L_30 = L_29->___packagesInitInfos_2;
				PackageInitializationInfo_t3A1BAF9D785E161A9856F3C5769D513C65E49563* L_31 = __this->___U3CinitializationInfoU3E5__1_4;
				NullCheck(L_30);
				List_1_Add_m7C437E7CA551F3A8A3CFF9DAB2D8D00971771FEB_inline(L_30, L_31, List_1_Add_m7C437E7CA551F3A8A3CFF9DAB2D8D00971771FEB_RuntimeMethod_var);
				__this->___U3CinitializationInfoU3E5__1_4 = (PackageInitializationInfo_t3A1BAF9D785E161A9856F3C5769D513C65E49563*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinitializationInfoU3E5__1_4), (void*)(PackageInitializationInfo_t3A1BAF9D785E161A9856F3C5769D513C65E49563*)NULL);
				goto IL_0140_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_010a_1;
			}
			throw e;
		}

CATCH_010a_1:
		{// begin catch(System.Exception)
			// catch (Exception e)
			V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			Exception_t* L_32 = V_4;
			__this->___U3CeU3E5__2_5 = L_32;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeU3E5__2_5), (void*)L_32);
			// stopwatch.Stop();
			U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0* L_33 = __this->___U3CU3E4__this_3;
			NullCheck(L_33);
			Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_34 = L_33->___stopwatch_0;
			NullCheck(L_34);
			Stopwatch_Stop_m8F2A2EFD9D7D5B4180A5E5379E5443864618D7DC(L_34, NULL);
			// failureReasons.Add(e);
			U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0* L_35 = __this->___U3CU3E4__this_3;
			NullCheck(L_35);
			List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_36 = L_35->___failureReasons_3;
			Exception_t* L_37 = __this->___U3CeU3E5__2_5;
			NullCheck(L_36);
			List_1_Add_m8E3C27DE02A5C8D1AE01D55D6B325BFB693CF385_inline(L_36, L_37, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&List_1_Add_m8E3C27DE02A5C8D1AE01D55D6B325BFB693CF385_RuntimeMethod_var)));
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0140_1;
		}// end catch (depth: 2)

IL_0140_1:
		{
			goto IL_015c;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0142;
		}
		throw e;
	}

CATCH_0142:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_38 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_39 = V_4;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_38, L_39, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0170;
	}// end catch (depth: 1)

IL_015c:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_40 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_40, NULL);
	}

IL_0170:
	{
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<>c__DisplayClass3_0/<<InitializeRegistryAsync>g__TryInitializePackageAsync|0>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_SetStateMachine_m0D4B0934A0549E32EB5FED93883CC1F3E413EEB7 (U3CU3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0U3Ed_tEDBE32E965E3D0139E956FC4872AE411630D672C* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
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
// System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<InitializeRegistryAsync>d__3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeRegistryAsyncU3Ed__3__ctor_mAD38C91E46C5050DE63C53BF773ABBBC7E2B1868 (U3CInitializeRegistryAsyncU3Ed__3_t667C2D1D53EB98537AA50BACFCBD9127A01D3CC5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<InitializeRegistryAsync>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeRegistryAsyncU3Ed__3_MoveNext_m5F259043D6E1638605E2E02C7CF4B08C733FFC23 (U3CInitializeRegistryAsyncU3Ed__3_t667C2D1D53EB98537AA50BACFCBD9127A01D3CC5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeRegistryAsyncU3Ed__3_t667C2D1D53EB98537AA50BACFCBD9127A01D3CC5_mC2C5E820FC2E5DB728AABE9217352CEFD0F338E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m00485CE66FC14765B7ABB50FB23F9784705B055B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IComponentRegistry_t139D898B2B7C9D1FF36A573E8DC25415053883B7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPackageRegistry_t598A337CA30E50021BB139EF5CF3C3867139CFA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30247370D912BC949FE5B3FC5C927371FE42CD2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD463C00E13C50984576EDF8FE2F8D2715471BF94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mBF08A30EBAD94D53A523D418C783D7803FF81143_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CInitializeRegistryAsyncU3Ed__3_t667C2D1D53EB98537AA50BACFCBD9127A01D3CC5* V_5 = NULL;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	Exception_t* V_9 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_0011_1;
		}

IL_000c_1:
		{
			goto IL_0192_1;
		}

IL_0011_1:
		{
			U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0* L_2 = (U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0_il2cpp_TypeInfo_var);
			NullCheck(L_2);
			U3CU3Ec__DisplayClass3_0__ctor_m6F552D21A7795194E9AB8D5D042CF8D7B3975EE9(L_2, NULL);
			__this->___U3CU3E8__1_3 = L_2;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_3), (void*)L_2);
			U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0* L_3 = __this->___U3CU3E8__1_3;
			CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03* L_4 = __this->___U3CU3E4__this_2;
			NullCheck(L_3);
			L_3->___U3CU3E4__this_1 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_1), (void*)L_4);
			// var packagesInitInfos = new List<PackageInitializationInfo>(m_SortedPackageTypeHashes.Count);
			U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0* L_5 = __this->___U3CU3E8__1_3;
			CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03* L_6 = __this->___U3CU3E4__this_2;
			NullCheck(L_6);
			List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_7 = L_6->___m_SortedPackageTypeHashes_1;
			NullCheck(L_7);
			int32_t L_8;
			L_8 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_7, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
			List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF* L_9 = (List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF*)il2cpp_codegen_object_new(List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF_il2cpp_TypeInfo_var);
			NullCheck(L_9);
			List_1__ctor_m30247370D912BC949FE5B3FC5C927371FE42CD2B(L_9, L_8, List_1__ctor_m30247370D912BC949FE5B3FC5C927371FE42CD2B_RuntimeMethod_var);
			NullCheck(L_5);
			L_5->___packagesInitInfos_2 = L_9;
			Il2CppCodeGenWriteBarrier((void**)(&L_5->___packagesInitInfos_2), (void*)L_9);
			// if (m_SortedPackageTypeHashes.Count <= 0)
			CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03* L_10 = __this->___U3CU3E4__this_2;
			NullCheck(L_10);
			List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_11 = L_10->___m_SortedPackageTypeHashes_1;
			NullCheck(L_11);
			int32_t L_12;
			L_12 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_11, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
			V_2 = (bool)((((int32_t)((((int32_t)L_12) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_13 = V_2;
			if (!L_13)
			{
				goto IL_007a_1;
			}
		}
		{
			// return packagesInitInfos;
			U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0* L_14 = __this->___U3CU3E8__1_3;
			NullCheck(L_14);
			List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF* L_15 = L_14->___packagesInitInfos_2;
			V_1 = L_15;
			goto IL_0248;
		}

IL_007a_1:
		{
			// var dependencyTree = m_Registry.PackageRegistry.Tree;
			U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0* L_16 = __this->___U3CU3E8__1_3;
			CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03* L_17 = __this->___U3CU3E4__this_2;
			NullCheck(L_17);
			CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_18 = L_17->___m_Registry_0;
			NullCheck(L_18);
			RuntimeObject* L_19;
			L_19 = CoreRegistry_get_PackageRegistry_m0A95E6723D8237E6E9D6D0067FB0EDFCC3C29063_inline(L_18, NULL);
			NullCheck(L_19);
			DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_20;
			L_20 = InterfaceFuncInvoker0< DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* >::Invoke(0 /* Unity.Services.Core.Internal.DependencyTree Unity.Services.Core.Internal.IPackageRegistry::get_Tree() */, IPackageRegistry_t598A337CA30E50021BB139EF5CF3C3867139CFA2_il2cpp_TypeInfo_var, L_19);
			NullCheck(L_16);
			L_16->___dependencyTree_4 = L_20;
			Il2CppCodeGenWriteBarrier((void**)(&L_16->___dependencyTree_4), (void*)L_20);
			// if (dependencyTree is null)
			U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0* L_21 = __this->___U3CU3E8__1_3;
			NullCheck(L_21);
			DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_22 = L_21->___dependencyTree_4;
			V_3 = (bool)((((RuntimeObject*)(DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992*)L_22) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
			bool L_23 = V_3;
			if (!L_23)
			{
				goto IL_00ce_1;
			}
		}
		{
			// var inner = new NullReferenceException("Registry requires a valid dependency tree to be initialized.");
			NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_24 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
			NullCheck(L_24);
			NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4(L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral69B10F88CB081B1F2AAAF72E4F4BC8E982BBE197)), NULL);
			__this->___U3CinnerU3E5__2_4 = L_24;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinnerU3E5__2_4), (void*)L_24);
			// throw new ServicesInitializationException(
			//     "Registry is in an invalid state (dependency tree is null) and can't be initialized.", inner);
			NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_25 = __this->___U3CinnerU3E5__2_4;
			ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631* L_26 = (ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ServicesInitializationException_tBF84F1801B1054DE91A79436CA6D3FA5F0F68631_il2cpp_TypeInfo_var)));
			NullCheck(L_26);
			ServicesInitializationException__ctor_mF669B3E2EBFCAF30637035325CD9B965BC11B578(L_26, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralBF1E5B8A8A1A60839F0309DFD6D6638FE4FCD96D)), L_25, NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInitializeRegistryAsyncU3Ed__3_MoveNext_m5F259043D6E1638605E2E02C7CF4B08C733FFC23_RuntimeMethod_var)));
		}

IL_00ce_1:
		{
			// m_Registry.ComponentRegistry.ResetProvidedComponents(dependencyTree.ComponentTypeHashToInstance);
			CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03* L_27 = __this->___U3CU3E4__this_2;
			NullCheck(L_27);
			CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_28 = L_27->___m_Registry_0;
			NullCheck(L_28);
			RuntimeObject* L_29;
			L_29 = CoreRegistry_get_ComponentRegistry_mF7CA9E9CEEFF316027E6D59B2AA30AEBA7FAAC13_inline(L_28, NULL);
			U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0* L_30 = __this->___U3CU3E8__1_3;
			NullCheck(L_30);
			DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_31 = L_30->___dependencyTree_4;
			NullCheck(L_31);
			Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* L_32 = L_31->___ComponentTypeHashToInstance_3;
			NullCheck(L_29);
			InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void Unity.Services.Core.Internal.IComponentRegistry::ResetProvidedComponents(System.Collections.Generic.IDictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>) */, IComponentRegistry_t139D898B2B7C9D1FF36A573E8DC25415053883B7_il2cpp_TypeInfo_var, L_29, L_32);
			// var failureReasons = new List<Exception>(m_SortedPackageTypeHashes.Count);
			U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0* L_33 = __this->___U3CU3E8__1_3;
			CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03* L_34 = __this->___U3CU3E4__this_2;
			NullCheck(L_34);
			List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_35 = L_34->___m_SortedPackageTypeHashes_1;
			NullCheck(L_35);
			int32_t L_36;
			L_36 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_35, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
			List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_37 = (List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B*)il2cpp_codegen_object_new(List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B_il2cpp_TypeInfo_var);
			NullCheck(L_37);
			List_1__ctor_mD463C00E13C50984576EDF8FE2F8D2715471BF94(L_37, L_36, List_1__ctor_mD463C00E13C50984576EDF8FE2F8D2715471BF94_RuntimeMethod_var);
			NullCheck(L_33);
			L_33->___failureReasons_3 = L_37;
			Il2CppCodeGenWriteBarrier((void**)(&L_33->___failureReasons_3), (void*)L_37);
			// var stopwatch = new Stopwatch();
			U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0* L_38 = __this->___U3CU3E8__1_3;
			Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_39 = (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043*)il2cpp_codegen_object_new(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
			NullCheck(L_39);
			Stopwatch__ctor_mAFE6B2F45CF1C3469EF6D5307972BC098B473D0A(L_39, NULL);
			NullCheck(L_38);
			L_38->___stopwatch_0 = L_39;
			Il2CppCodeGenWriteBarrier((void**)(&L_38->___stopwatch_0), (void*)L_39);
			// for (var i = 0; i < m_SortedPackageTypeHashes.Count; i++)
			__this->___U3CiU3E5__3_5 = 0;
			goto IL_01d1_1;
		}

IL_0130_1:
		{
			// var package = GetPackageAt(i);
			U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0* L_40 = __this->___U3CU3E8__1_3;
			int32_t L_41 = __this->___U3CiU3E5__3_5;
			NullCheck(L_40);
			RuntimeObject* L_42;
			L_42 = U3CU3Ec__DisplayClass3_0_U3CInitializeRegistryAsyncU3Eg__GetPackageAtU7C1_m68BD38748C7FE0D2105C0AB91F6F8E5737F8D016(L_40, L_41, NULL);
			__this->___U3CpackageU3E5__4_6 = L_42;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpackageU3E5__4_6), (void*)L_42);
			// await TryInitializePackageAsync(package);
			U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0* L_43 = __this->___U3CU3E8__1_3;
			RuntimeObject* L_44 = __this->___U3CpackageU3E5__4_6;
			NullCheck(L_43);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_45;
			L_45 = U3CU3Ec__DisplayClass3_0_U3CInitializeRegistryAsyncU3Eg__TryInitializePackageAsyncU7C0_m56337B98B3CFDB562165FEE8B41F8987D91B7327(L_43, L_44, NULL);
			NullCheck(L_45);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_46;
			L_46 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_45, NULL);
			V_4 = L_46;
			bool L_47;
			L_47 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_4), NULL);
			if (L_47)
			{
				goto IL_01af_1;
			}
		}
		{
			int32_t L_48 = 0;
			V_0 = L_48;
			__this->___U3CU3E1__state_0 = L_48;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_49 = V_4;
			__this->___U3CU3Eu__1_7 = L_49;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_7))->___m_task_0), (void*)NULL);
			V_5 = __this;
			AsyncTaskMethodBuilder_1_t48F43EEBD362A47F5627122EA5697AD97B922620* L_50 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeRegistryAsyncU3Ed__3_t667C2D1D53EB98537AA50BACFCBD9127A01D3CC5_mC2C5E820FC2E5DB728AABE9217352CEFD0F338E7(L_50, (&V_4), (&V_5), AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeRegistryAsyncU3Ed__3_t667C2D1D53EB98537AA50BACFCBD9127A01D3CC5_mC2C5E820FC2E5DB728AABE9217352CEFD0F338E7_RuntimeMethod_var);
			goto IL_0264;
		}

IL_0192_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_51 = __this->___U3CU3Eu__1_7;
			V_4 = L_51;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_52 = (&__this->___U3CU3Eu__1_7);
			il2cpp_codegen_initobj(L_52, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_53 = (-1);
			V_0 = L_53;
			__this->___U3CU3E1__state_0 = L_53;
		}

IL_01af_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_4), NULL);
			__this->___U3CpackageU3E5__4_6 = (RuntimeObject*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpackageU3E5__4_6), (void*)(RuntimeObject*)NULL);
			// for (var i = 0; i < m_SortedPackageTypeHashes.Count; i++)
			int32_t L_54 = __this->___U3CiU3E5__3_5;
			V_6 = L_54;
			int32_t L_55 = V_6;
			__this->___U3CiU3E5__3_5 = ((int32_t)il2cpp_codegen_add(L_55, 1));
		}

IL_01d1_1:
		{
			// for (var i = 0; i < m_SortedPackageTypeHashes.Count; i++)
			int32_t L_56 = __this->___U3CiU3E5__3_5;
			CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03* L_57 = __this->___U3CU3E4__this_2;
			NullCheck(L_57);
			List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_58 = L_57->___m_SortedPackageTypeHashes_1;
			NullCheck(L_58);
			int32_t L_59;
			L_59 = List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_inline(L_58, List_1_get_Count_mF590592E32D421DE2C6E2F0D5C2F62FB14CCEFDF_RuntimeMethod_var);
			V_7 = (bool)((((int32_t)L_56) < ((int32_t)L_59))? 1 : 0);
			bool L_60 = V_7;
			if (L_60)
			{
				goto IL_0130_1;
			}
		}
		{
			// if (failureReasons.Count > 0)
			U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0* L_61 = __this->___U3CU3E8__1_3;
			NullCheck(L_61);
			List_1_tA61E6ACDC88C89A9523D28C560996ABFF548352B* L_62 = L_61->___failureReasons_3;
			NullCheck(L_62);
			int32_t L_63;
			L_63 = List_1_get_Count_mBF08A30EBAD94D53A523D418C783D7803FF81143_inline(L_62, List_1_get_Count_mBF08A30EBAD94D53A523D418C783D7803FF81143_RuntimeMethod_var);
			V_8 = (bool)((((int32_t)L_63) > ((int32_t)0))? 1 : 0);
			bool L_64 = V_8;
			if (!L_64)
			{
				goto IL_0219_1;
			}
		}
		{
			// Fail();
			U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0* L_65 = __this->___U3CU3E8__1_3;
			NullCheck(L_65);
			U3CU3Ec__DisplayClass3_0_U3CInitializeRegistryAsyncU3Eg__FailU7C2_mB66A52FC680C0D6D34C45425B8D8838A9576BF63(L_65, NULL);
		}

IL_0219_1:
		{
			// return packagesInitInfos;
			U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0* L_66 = __this->___U3CU3E8__1_3;
			NullCheck(L_66);
			List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF* L_67 = L_66->___packagesInitInfos_2;
			V_1 = L_67;
			goto IL_0248;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0227;
		}
		throw e;
	}

CATCH_0227:
	{// begin catch(System.Exception)
		V_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_3 = (U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_3), (void*)(U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0*)NULL);
		AsyncTaskMethodBuilder_1_t48F43EEBD362A47F5627122EA5697AD97B922620* L_68 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_69 = V_9;
		AsyncTaskMethodBuilder_1_SetException_m1478EBE0D2DB997547C107D2697C8CE59E2C7B3B(L_68, L_69, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m1478EBE0D2DB997547C107D2697C8CE59E2C7B3B_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0264;
	}// end catch (depth: 1)

IL_0248:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_3 = (U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_3), (void*)(U3CU3Ec__DisplayClass3_0_t67413D92BE4451DA622A60CC1DEAE97836993FC0*)NULL);
		AsyncTaskMethodBuilder_1_t48F43EEBD362A47F5627122EA5697AD97B922620* L_70 = (&__this->___U3CU3Et__builder_1);
		List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF* L_71 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m00485CE66FC14765B7ABB50FB23F9784705B055B(L_70, L_71, AsyncTaskMethodBuilder_1_SetResult_m00485CE66FC14765B7ABB50FB23F9784705B055B_RuntimeMethod_var);
	}

IL_0264:
	{
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreRegistryInitializer/<InitializeRegistryAsync>d__3::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeRegistryAsyncU3Ed__3_SetStateMachine_m2129B81BA5F7EE6BA5AAFB086161A32FBECDE5E2 (U3CInitializeRegistryAsyncU3Ed__3_t667C2D1D53EB98537AA50BACFCBD9127A01D3CC5* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
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
// System.Void Unity.Services.Core.Internal.DependencyTree::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTree__ctor_mE8C447ED9582DA0A52E5F5294B424C67641AFA1C (DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m94824805BB9A079EEBD9EE0CFE2119AFD9346868_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mAEE8DC3D9575E18CFCB3E4061F680D16B3E00A72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mC94CCA31D9C4EE7B8FCA41A2C361213C5DBF46ED_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : this(
		//     new Dictionary<int, IInitializablePackage>(),
		//     new Dictionary<int, int>(),
		//     new Dictionary<int, List<int>>(),
		//     new Dictionary<int, IServiceComponent>()) {}
		Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36* L_0 = (Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36*)il2cpp_codegen_object_new(Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_mC94CCA31D9C4EE7B8FCA41A2C361213C5DBF46ED(L_0, Dictionary_2__ctor_mC94CCA31D9C4EE7B8FCA41A2C361213C5DBF46ED_RuntimeMethod_var);
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_1 = (Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180*)il2cpp_codegen_object_new(Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F(L_1, Dictionary_2__ctor_m712893C2C48C47CCAFAD85A865C702E8D3D2B71F_RuntimeMethod_var);
		Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* L_2 = (Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3*)il2cpp_codegen_object_new(Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Dictionary_2__ctor_m94824805BB9A079EEBD9EE0CFE2119AFD9346868(L_2, Dictionary_2__ctor_m94824805BB9A079EEBD9EE0CFE2119AFD9346868_RuntimeMethod_var);
		Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* L_3 = (Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9*)il2cpp_codegen_object_new(Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Dictionary_2__ctor_mAEE8DC3D9575E18CFCB3E4061F680D16B3E00A72(L_3, Dictionary_2__ctor_mAEE8DC3D9575E18CFCB3E4061F680D16B3E00A72_RuntimeMethod_var);
		DependencyTree__ctor_mE33E7D31398C9CB414DFAA3F000033C0F5C2D928(__this, L_0, L_1, L_2, L_3, NULL);
		// new Dictionary<int, IServiceComponent>()) {}
		return;
	}
}
// System.Void Unity.Services.Core.Internal.DependencyTree::.ctor(System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IInitializablePackage>,System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Int32>>,System.Collections.Generic.Dictionary`2<System.Int32,Unity.Services.Core.Internal.IServiceComponent>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTree__ctor_mE33E7D31398C9CB414DFAA3F000033C0F5C2D928 (DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* __this, Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36* ___0_packageToInstance, Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___1_componentToPackage, Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* ___2_packageToComponentDependencies, Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* ___3_componentToInstance, const RuntimeMethod* method) 
{
	{
		// internal DependencyTree(
		//     Dictionary<int, IInitializablePackage> packageToInstance,
		//     Dictionary<int, int> componentToPackage,
		//     Dictionary<int, List<int>> packageToComponentDependencies,
		//     Dictionary<int, IServiceComponent> componentToInstance)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// PackageTypeHashToInstance = packageToInstance;
		Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36* L_0 = ___0_packageToInstance;
		__this->___PackageTypeHashToInstance_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PackageTypeHashToInstance_0), (void*)L_0);
		// ComponentTypeHashToPackageTypeHash = componentToPackage;
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_1 = ___1_componentToPackage;
		__this->___ComponentTypeHashToPackageTypeHash_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ComponentTypeHashToPackageTypeHash_1), (void*)L_1);
		// PackageTypeHashToComponentTypeHashDependencies = packageToComponentDependencies;
		Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* L_2 = ___2_packageToComponentDependencies;
		__this->___PackageTypeHashToComponentTypeHashDependencies_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___PackageTypeHashToComponentTypeHashDependencies_2), (void*)L_2);
		// ComponentTypeHashToInstance = componentToInstance;
		Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* L_3 = ___3_componentToInstance;
		__this->___ComponentTypeHashToInstance_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ComponentTypeHashToInstance_3), (void*)L_3);
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
// System.Void Unity.Services.Core.Internal.DependencyTreeSortFailedException::.ctor(Unity.Services.Core.Internal.DependencyTree,System.Collections.Generic.ICollection`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeSortFailedException__ctor_m4AD28E1834D38336C77C1CCDA271244B84EA97ED (DependencyTreeSortFailedException_t039BF64DBDDFEB16DD187FE600445BF53C88A918* __this, DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___0_tree, RuntimeObject* ___1_target, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(CreateExceptionMessage(tree, target))
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_0 = ___0_tree;
		RuntimeObject* L_1 = ___1_target;
		String_t* L_2;
		L_2 = DependencyTreeSortFailedException_CreateExceptionMessage_m076D757C6C201D22949EEAFEB546DA673BFD3301(L_0, L_1, (Exception_t*)NULL, NULL);
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.DependencyTreeSortFailedException::.ctor(Unity.Services.Core.Internal.DependencyTree,System.Collections.Generic.ICollection`1<System.Int32>,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeSortFailedException__ctor_m20BA3EA58FC55FCFCE5F857FA9A2EC228473891B (DependencyTreeSortFailedException_t039BF64DBDDFEB16DD187FE600445BF53C88A918* __this, DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___0_tree, RuntimeObject* ___1_target, Exception_t* ___2_inner, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(CreateExceptionMessage(tree, target, inner), inner)
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_0 = ___0_tree;
		RuntimeObject* L_1 = ___1_target;
		Exception_t* L_2 = ___2_inner;
		String_t* L_3;
		L_3 = DependencyTreeSortFailedException_CreateExceptionMessage_m076D757C6C201D22949EEAFEB546DA673BFD3301(L_0, L_1, L_2, NULL);
		Exception_t* L_4 = ___2_inner;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_3, L_4, NULL);
		// }
		return;
	}
}
// System.String Unity.Services.Core.Internal.DependencyTreeSortFailedException::CreateExceptionMessage(Unity.Services.Core.Internal.DependencyTree,System.Collections.Generic.ICollection`1<System.Int32>,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DependencyTreeSortFailedException_CreateExceptionMessage_m076D757C6C201D22949EEAFEB546DA673BFD3301 (DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___0_tree, RuntimeObject* ___1_target, Exception_t* ___2_inner, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45DC0B46E58EC601FF61F432808A35DF08816CF7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96F3FFD1DFF5CA817F920663C1819B0E51830209);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		// var orderedTreeJson = tree.ToJson(target);
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_0 = ___0_tree;
		RuntimeObject* L_1 = ___1_target;
		String_t* L_2;
		L_2 = DependencyTreeExtensions_ToJson_m7BB4E9D6A8686F3DB3BB4AE8CDA0F5126BE2FC0C(L_0, L_1, NULL);
		V_0 = L_2;
		// var errorMessage = $"Failed to sort tree! It is likely there is a missing required dependency:\n{orderedTreeJson}";
		String_t* L_3 = V_0;
		String_t* L_4;
		L_4 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral96F3FFD1DFF5CA817F920663C1819B0E51830209, L_3, NULL);
		V_1 = L_4;
		// errorMessage = errorMessage + (inner != null ? $"\n Error: {inner.Message}" : string.Empty);
		String_t* L_5 = V_1;
		Exception_t* L_6 = ___2_inner;
		G_B1_0 = L_5;
		if (L_6)
		{
			G_B2_0 = L_5;
			goto IL_0020;
		}
	}
	{
		String_t* L_7 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B3_0 = L_7;
		G_B3_1 = G_B1_0;
		goto IL_0030;
	}

IL_0020:
	{
		Exception_t* L_8 = ___2_inner;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_8);
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral45DC0B46E58EC601FF61F432808A35DF08816CF7, L_9, NULL);
		G_B3_0 = L_10;
		G_B3_1 = G_B2_0;
	}

IL_0030:
	{
		String_t* L_11;
		L_11 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(G_B3_1, G_B3_0, NULL);
		V_1 = L_11;
		// return errorMessage;
		String_t* L_12 = V_1;
		V_2 = L_12;
		goto IL_003a;
	}

IL_003a:
	{
		// }
		String_t* L_13 = V_2;
		return L_13;
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
// System.String Unity.Services.Core.Internal.DependencyTreeExtensions::ToJson(Unity.Services.Core.Internal.DependencyTree,System.Collections.Generic.ICollection`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DependencyTreeExtensions_ToJson_m7BB4E9D6A8686F3DB3BB4AE8CDA0F5126BE2FC0C (DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___0_tree, RuntimeObject* ___1_order, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m39B98342C7AB8C5B5FE5A5A81F8A34B7DCFD787A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mBE302F6BC51FA460285907BC883053A67B73CC06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m041C46147B3F287D3F182E0F2F811B8D8EB384A1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mA7C405F3329C72C64721043B896930F053D69EBB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m1447F14395D07036FB65812381AD7A25F97799EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m25917EFC1552699E49CC74EACE736D4264FA28E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m80B0DE302A2D7C8A09DF766FDFE3BAF46301C2AC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB6D933BAB3F52E4028691060155A28C6D5973C89_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m0B904E65230A34E4A0E53E7595BDEBF12BDA5E0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m746D46B7EEFA2A7FBD134CA14C215BF240705220_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43A6B14128BBE614EEAF7B01FF9170C8360CC863);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7C03E97995F6950303A46C204A216735E6B4582);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFFFABE76BC1800C136E930163EBC08341F85897B);
		s_Il2CppMethodInitialized = true;
	}
	JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8* V_0 = NULL;
	JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* V_1 = NULL;
	JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8* V_2 = NULL;
	JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* V_3 = NULL;
	JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8* V_4 = NULL;
	JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* V_5 = NULL;
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	int32_t V_9 = 0;
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* V_10 = NULL;
	Enumerator_t90A498889D869EAA06211A0CC03E2B8C98AABFE7 V_11;
	memset((&V_11), 0, sizeof(V_11));
	int32_t V_12 = 0;
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* V_13 = NULL;
	Enumerator_tACD4FB2B54A5C2691CB962F194780DD49F8FA1C1 V_14;
	memset((&V_14), 0, sizeof(V_14));
	int32_t V_15 = 0;
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* V_16 = NULL;
	String_t* V_17 = NULL;
	{
		// var orderArray = new JArray();
		JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8* L_0 = (JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8*)il2cpp_codegen_object_new(JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JArray__ctor_m022A5DB24C674904082FD028B96F7AF93A87CF10(L_0, NULL);
		V_0 = L_0;
		// var orderProperty = new JProperty("ordered", orderArray);
		JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8* L_1 = V_0;
		JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* L_2 = (JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4*)il2cpp_codegen_object_new(JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		JProperty__ctor_mA59A3257A0EB4DB85735EF8F576917BF3B5415F1(L_2, _stringLiteral43A6B14128BBE614EEAF7B01FF9170C8360CC863, L_1, NULL);
		V_1 = L_2;
		// if (order != null)
		RuntimeObject* L_3 = ___1_order;
		V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_7;
		if (!L_4)
		{
			goto IL_0065;
		}
	}
	{
		// foreach (var packageHash in order)
		RuntimeObject* L_5 = ___1_order;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var, L_5);
		V_8 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0057:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_7 = V_8;
					if (!L_7)
					{
						goto IL_0063;
					}
				}
				{
					RuntimeObject* L_8 = V_8;
					NullCheck(L_8);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
				}

IL_0063:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004c_1;
			}

IL_0029_1:
			{
				// foreach (var packageHash in order)
				RuntimeObject* L_9 = V_8;
				NullCheck(L_9);
				int32_t L_10;
				L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var, L_9);
				V_9 = L_10;
				// var packageJObject = GetPackageJObject(tree, packageHash);
				DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_11 = ___0_tree;
				int32_t L_12 = V_9;
				JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_13;
				L_13 = DependencyTreeExtensions_GetPackageJObject_m2D3CA37C10CFAE312157DA12D6BD189FE6C41F65(L_11, L_12, NULL);
				V_10 = L_13;
				// orderArray.Add(new JObject(packageJObject));
				JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8* L_14 = V_0;
				JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_15 = V_10;
				JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_16 = (JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1*)il2cpp_codegen_object_new(JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1_il2cpp_TypeInfo_var);
				NullCheck(L_16);
				JObject__ctor_m3BC9D30AA26660214591EF08F691D1B740D6615D(L_16, L_15, NULL);
				NullCheck(L_14);
				JArray_Add_m6E648CB9C562A6CC16DC550DA611456AB0149330(L_14, L_16, NULL);
			}

IL_004c_1:
			{
				// foreach (var packageHash in order)
				RuntimeObject* L_17 = V_8;
				NullCheck(L_17);
				bool L_18;
				L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_17);
				if (L_18)
				{
					goto IL_0029_1;
				}
			}
			{
				goto IL_0064;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0064:
	{
	}

IL_0065:
	{
		// var packageTree = new JArray();
		JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8* L_19 = (JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8*)il2cpp_codegen_object_new(JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		JArray__ctor_m022A5DB24C674904082FD028B96F7AF93A87CF10(L_19, NULL);
		V_2 = L_19;
		// var packagesProperty = new JProperty("packages", packageTree);
		JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8* L_20 = V_2;
		JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* L_21 = (JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4*)il2cpp_codegen_object_new(JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4_il2cpp_TypeInfo_var);
		NullCheck(L_21);
		JProperty__ctor_mA59A3257A0EB4DB85735EF8F576917BF3B5415F1(L_21, _stringLiteralFFFABE76BC1800C136E930163EBC08341F85897B, L_20, NULL);
		V_3 = L_21;
		// foreach (var packageHash in tree.PackageTypeHashToInstance.Keys)
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_22 = ___0_tree;
		NullCheck(L_22);
		Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36* L_23 = L_22->___PackageTypeHashToInstance_0;
		NullCheck(L_23);
		KeyCollection_t241A367A2D827EDFBE8E517F96AE6B58053FA006* L_24;
		L_24 = Dictionary_2_get_Keys_mBE302F6BC51FA460285907BC883053A67B73CC06(L_23, Dictionary_2_get_Keys_mBE302F6BC51FA460285907BC883053A67B73CC06_RuntimeMethod_var);
		NullCheck(L_24);
		Enumerator_t90A498889D869EAA06211A0CC03E2B8C98AABFE7 L_25;
		L_25 = KeyCollection_GetEnumerator_m746D46B7EEFA2A7FBD134CA14C215BF240705220(L_24, KeyCollection_GetEnumerator_m746D46B7EEFA2A7FBD134CA14C215BF240705220_RuntimeMethod_var);
		V_11 = L_25;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b5:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mA7C405F3329C72C64721043B896930F053D69EBB((&V_11), Enumerator_Dispose_mA7C405F3329C72C64721043B896930F053D69EBB_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_00aa_1;
			}

IL_008c_1:
			{
				// foreach (var packageHash in tree.PackageTypeHashToInstance.Keys)
				int32_t L_26;
				L_26 = Enumerator_get_Current_m80B0DE302A2D7C8A09DF766FDFE3BAF46301C2AC_inline((&V_11), Enumerator_get_Current_m80B0DE302A2D7C8A09DF766FDFE3BAF46301C2AC_RuntimeMethod_var);
				V_12 = L_26;
				// var package = GetPackageJObject(tree, packageHash);
				DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_27 = ___0_tree;
				int32_t L_28 = V_12;
				JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_29;
				L_29 = DependencyTreeExtensions_GetPackageJObject_m2D3CA37C10CFAE312157DA12D6BD189FE6C41F65(L_27, L_28, NULL);
				V_13 = L_29;
				// packageTree.Add(package);
				JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8* L_30 = V_2;
				JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_31 = V_13;
				NullCheck(L_30);
				JArray_Add_m6E648CB9C562A6CC16DC550DA611456AB0149330(L_30, L_31, NULL);
			}

IL_00aa_1:
			{
				// foreach (var packageHash in tree.PackageTypeHashToInstance.Keys)
				bool L_32;
				L_32 = Enumerator_MoveNext_m25917EFC1552699E49CC74EACE736D4264FA28E0((&V_11), Enumerator_MoveNext_m25917EFC1552699E49CC74EACE736D4264FA28E0_RuntimeMethod_var);
				if (L_32)
				{
					goto IL_008c_1;
				}
			}
			{
				goto IL_00c4;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c4:
	{
		// var components = new JArray();
		JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8* L_33 = (JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8*)il2cpp_codegen_object_new(JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		JArray__ctor_m022A5DB24C674904082FD028B96F7AF93A87CF10(L_33, NULL);
		V_4 = L_33;
		// var componentsProperty = new JProperty("components", components);
		JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8* L_34 = V_4;
		JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* L_35 = (JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4*)il2cpp_codegen_object_new(JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		JProperty__ctor_mA59A3257A0EB4DB85735EF8F576917BF3B5415F1(L_35, _stringLiteralF7C03E97995F6950303A46C204A216735E6B4582, L_34, NULL);
		V_5 = L_35;
		// foreach (var componentHash in tree.ComponentTypeHashToInstance.Keys)
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_36 = ___0_tree;
		NullCheck(L_36);
		Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* L_37 = L_36->___ComponentTypeHashToInstance_3;
		NullCheck(L_37);
		KeyCollection_t9A4591FC5446FBD11961412C92C3F1B8AD491650* L_38;
		L_38 = Dictionary_2_get_Keys_m39B98342C7AB8C5B5FE5A5A81F8A34B7DCFD787A(L_37, Dictionary_2_get_Keys_m39B98342C7AB8C5B5FE5A5A81F8A34B7DCFD787A_RuntimeMethod_var);
		NullCheck(L_38);
		Enumerator_tACD4FB2B54A5C2691CB962F194780DD49F8FA1C1 L_39;
		L_39 = KeyCollection_GetEnumerator_m0B904E65230A34E4A0E53E7595BDEBF12BDA5E0A(L_38, KeyCollection_GetEnumerator_m0B904E65230A34E4A0E53E7595BDEBF12BDA5E0A_RuntimeMethod_var);
		V_14 = L_39;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0118:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m041C46147B3F287D3F182E0F2F811B8D8EB384A1((&V_14), Enumerator_Dispose_m041C46147B3F287D3F182E0F2F811B8D8EB384A1_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_010d_1;
			}

IL_00ee_1:
			{
				// foreach (var componentHash in tree.ComponentTypeHashToInstance.Keys)
				int32_t L_40;
				L_40 = Enumerator_get_Current_mB6D933BAB3F52E4028691060155A28C6D5973C89_inline((&V_14), Enumerator_get_Current_mB6D933BAB3F52E4028691060155A28C6D5973C89_RuntimeMethod_var);
				V_15 = L_40;
				// var componentJObject = GetComponentJObject(tree, componentHash);
				DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_41 = ___0_tree;
				int32_t L_42 = V_15;
				JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_43;
				L_43 = DependencyTreeExtensions_GetComponentJObject_mF466234CAEE808134510C6D6D29CCFB6D7EEF4B5(L_41, L_42, NULL);
				V_16 = L_43;
				// components.Add(componentJObject);
				JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8* L_44 = V_4;
				JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_45 = V_16;
				NullCheck(L_44);
				JArray_Add_m6E648CB9C562A6CC16DC550DA611456AB0149330(L_44, L_45, NULL);
			}

IL_010d_1:
			{
				// foreach (var componentHash in tree.ComponentTypeHashToInstance.Keys)
				bool L_46;
				L_46 = Enumerator_MoveNext_m1447F14395D07036FB65812381AD7A25F97799EE((&V_14), Enumerator_MoveNext_m1447F14395D07036FB65812381AD7A25F97799EE_RuntimeMethod_var);
				if (L_46)
				{
					goto IL_00ee_1;
				}
			}
			{
				goto IL_0127;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0127:
	{
		// var json = new JObject(orderProperty, packagesProperty, componentsProperty);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_47 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_48 = L_47;
		JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* L_49 = V_1;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_49);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_49);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_50 = L_48;
		JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* L_51 = V_3;
		NullCheck(L_50);
		ArrayElementTypeCheck (L_50, L_51);
		(L_50)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_51);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_52 = L_50;
		JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* L_53 = V_5;
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_53);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_53);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_54 = (JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1*)il2cpp_codegen_object_new(JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1_il2cpp_TypeInfo_var);
		NullCheck(L_54);
		JObject__ctor_mBF0C20A0AABE0314582CA098C847E5757D24C202(L_54, L_52, NULL);
		V_6 = L_54;
		// return json.ToString();
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_55 = V_6;
		NullCheck(L_55);
		String_t* L_56;
		L_56 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_55);
		V_17 = L_56;
		goto IL_014c;
	}

IL_014c:
	{
		// }
		String_t* L_57 = V_17;
		return L_57;
	}
}
// System.Boolean Unity.Services.Core.Internal.DependencyTreeExtensions::IsOptional(Unity.Services.Core.Internal.DependencyTree,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DependencyTreeExtensions_IsOptional_m291995614CC4AA79B75123A32569FF7194759FB7 (DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___0_tree, int32_t ___1_componentTypeHash, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m8E6C3FEADDB1D6606A48972D8C7405DD98D66F6B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// return tree.ComponentTypeHashToInstance.TryGetValue(componentTypeHash, out var component)
		//     && component is null;
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_0 = ___0_tree;
		NullCheck(L_0);
		Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* L_1 = L_0->___ComponentTypeHashToInstance_3;
		int32_t L_2 = ___1_componentTypeHash;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m8E6C3FEADDB1D6606A48972D8C7405DD98D66F6B(L_1, L_2, (&V_0), Dictionary_2_TryGetValue_m8E6C3FEADDB1D6606A48972D8C7405DD98D66F6B_RuntimeMethod_var);
		if (!L_3)
		{
			goto IL_0017;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		G_B3_0 = ((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 0;
	}

IL_0018:
	{
		V_1 = (bool)G_B3_0;
		goto IL_001b;
	}

IL_001b:
	{
		// }
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Boolean Unity.Services.Core.Internal.DependencyTreeExtensions::IsProvided(Unity.Services.Core.Internal.DependencyTree,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DependencyTreeExtensions_IsProvided_m5CF82CE2D83F9EED333ABC06783E1902E30EA86A (DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___0_tree, int32_t ___1_componentTypeHash, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m050AC0D9D6F681C25C12FBBC7DD71F926D206ED9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return tree.ComponentTypeHashToPackageTypeHash.ContainsKey(componentTypeHash);
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_0 = ___0_tree;
		NullCheck(L_0);
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_1 = L_0->___ComponentTypeHashToPackageTypeHash_1;
		int32_t L_2 = ___1_componentTypeHash;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_ContainsKey_m050AC0D9D6F681C25C12FBBC7DD71F926D206ED9(L_1, L_2, Dictionary_2_ContainsKey_m050AC0D9D6F681C25C12FBBC7DD71F926D206ED9_RuntimeMethod_var);
		V_0 = L_3;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_4 = V_0;
		return L_4;
	}
}
// Newtonsoft.Json.Linq.JObject Unity.Services.Core.Internal.DependencyTreeExtensions::GetPackageJObject(Unity.Services.Core.Internal.DependencyTree,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* DependencyTreeExtensions_GetPackageJObject_m2D3CA37C10CFAE312157DA12D6BD189FE6C41F65 (DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___0_tree, int32_t ___1_packageHash, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m0E484492BA83E1C79585B6C53AC5F8418E4C473F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m8E6C3FEADDB1D6606A48972D8C7405DD98D66F6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mAB6AC7CC3190A5C78A01CB6298A778FBAA1DD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A642D37F6AB975402943D621A7F08FF5C55CC88);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19C52E9F7740BFC167EDD516F982351B658DDB7D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D46C5E16EDF4316E0B7D7CC3E8A160D1786013E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral256B8718F5B597AB472E143158542147A5DCA30A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46604309E510F59701697FD5C6D3BE31DB689786);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4DDC2B4D24FB785CBCEFBECF670764ADA53865CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF535E56705DB5F5E2C41B52885EAC1101A3D4C50);
		s_Il2CppMethodInitialized = true;
	}
	JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* V_2 = NULL;
	JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8* V_3 = NULL;
	JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* V_4 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_5 = NULL;
	bool V_6 = false;
	Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC V_7;
	memset((&V_7), 0, sizeof(V_7));
	int32_t V_8 = 0;
	JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* V_11 = NULL;
	JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* V_12 = NULL;
	JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* V_13 = NULL;
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* V_14 = NULL;
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* V_15 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B9_0 = NULL;
	String_t* G_B9_1 = NULL;
	String_t* G_B11_0 = NULL;
	String_t* G_B10_0 = NULL;
	String_t* G_B12_0 = NULL;
	String_t* G_B12_1 = NULL;
	{
		// var packageHashProperty = new JProperty("packageHash", packageHash);
		int32_t L_0 = ___1_packageHash;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* L_3 = (JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4*)il2cpp_codegen_object_new(JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		JProperty__ctor_mA59A3257A0EB4DB85735EF8F576917BF3B5415F1(L_3, _stringLiteral256B8718F5B597AB472E143158542147A5DCA30A, L_2, NULL);
		V_0 = L_3;
		// tree.PackageTypeHashToInstance.TryGetValue(packageHash, out var packageProvider);
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_4 = ___0_tree;
		NullCheck(L_4);
		Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36* L_5 = L_4->___PackageTypeHashToInstance_0;
		int32_t L_6 = ___1_packageHash;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_TryGetValue_mAB6AC7CC3190A5C78A01CB6298A778FBAA1DD050(L_5, L_6, (&V_1), Dictionary_2_TryGetValue_mAB6AC7CC3190A5C78A01CB6298A778FBAA1DD050_RuntimeMethod_var);
		// var packageProviderProperty = new JProperty("packageProvider", packageProvider != null ? packageProvider.GetType().Name : "null");
		RuntimeObject* L_8 = V_1;
		G_B1_0 = _stringLiteral1D46C5E16EDF4316E0B7D7CC3E8A160D1786013E;
		if (L_8)
		{
			G_B2_0 = _stringLiteral1D46C5E16EDF4316E0B7D7CC3E8A160D1786013E;
			goto IL_0030;
		}
	}
	{
		G_B3_0 = _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
		G_B3_1 = G_B1_0;
		goto IL_003b;
	}

IL_0030:
	{
		RuntimeObject* L_9 = V_1;
		NullCheck(L_9);
		Type_t* L_10;
		L_10 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_9, NULL);
		NullCheck(L_10);
		String_t* L_11;
		L_11 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_10);
		G_B3_0 = L_11;
		G_B3_1 = G_B2_0;
	}

IL_003b:
	{
		JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* L_12 = (JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4*)il2cpp_codegen_object_new(JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		JProperty__ctor_mA59A3257A0EB4DB85735EF8F576917BF3B5415F1(L_12, G_B3_1, G_B3_0, NULL);
		V_2 = L_12;
		// var packageDependencies = new JArray();
		JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8* L_13 = (JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8*)il2cpp_codegen_object_new(JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		JArray__ctor_m022A5DB24C674904082FD028B96F7AF93A87CF10(L_13, NULL);
		V_3 = L_13;
		// var packageDependenciesProperty = new JProperty("packageDependencies", packageDependencies);
		JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8* L_14 = V_3;
		JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* L_15 = (JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4*)il2cpp_codegen_object_new(JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		JProperty__ctor_mA59A3257A0EB4DB85735EF8F576917BF3B5415F1(L_15, _stringLiteral46604309E510F59701697FD5C6D3BE31DB689786, L_14, NULL);
		V_4 = L_15;
		// if (tree.PackageTypeHashToComponentTypeHashDependencies.TryGetValue(packageHash, out var componentDependencies))
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_16 = ___0_tree;
		NullCheck(L_16);
		Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* L_17 = L_16->___PackageTypeHashToComponentTypeHashDependencies_2;
		int32_t L_18 = ___1_packageHash;
		NullCheck(L_17);
		bool L_19;
		L_19 = Dictionary_2_TryGetValue_m0E484492BA83E1C79585B6C53AC5F8418E4C473F(L_17, L_18, (&V_5), Dictionary_2_TryGetValue_m0E484492BA83E1C79585B6C53AC5F8418E4C473F_RuntimeMethod_var);
		V_6 = L_19;
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_0148;
		}
	}
	{
		// foreach (var componentDependency in componentDependencies)
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_21 = V_5;
		NullCheck(L_21);
		Enumerator_t9DBCD072C72E44AB8959D9884EF7F528028F20EC L_22;
		L_22 = List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD(L_21, List_1_GetEnumerator_mCADB185AB483C855873FCD0B1D5AAC909ED7F7BD_RuntimeMethod_var);
		V_7 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0138:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923((&V_7), Enumerator_Dispose_m38A9F15FDBDCDFB9590C961110777EE028621923_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_012a_1;
			}

IL_007b_1:
			{
				// foreach (var componentDependency in componentDependencies)
				int32_t L_23;
				L_23 = Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_inline((&V_7), Enumerator_get_Current_mB49912FF111A954F2C326BF4FA29A53C1027187B_RuntimeMethod_var);
				V_8 = L_23;
				// var dependencyHash = new JProperty("dependencyHash", componentDependency);
				int32_t L_24 = V_8;
				int32_t L_25 = L_24;
				RuntimeObject* L_26 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_25);
				JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* L_27 = (JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4*)il2cpp_codegen_object_new(JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4_il2cpp_TypeInfo_var);
				NullCheck(L_27);
				JProperty__ctor_mA59A3257A0EB4DB85735EF8F576917BF3B5415F1(L_27, _stringLiteral4DDC2B4D24FB785CBCEFBECF670764ADA53865CA, L_26, NULL);
				V_9 = L_27;
				// tree.ComponentTypeHashToInstance.TryGetValue(componentDependency, out var componentInstance);
				DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_28 = ___0_tree;
				NullCheck(L_28);
				Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* L_29 = L_28->___ComponentTypeHashToInstance_3;
				int32_t L_30 = V_8;
				NullCheck(L_29);
				bool L_31;
				L_31 = Dictionary_2_TryGetValue_m8E6C3FEADDB1D6606A48972D8C7405DD98D66F6B(L_29, L_30, (&V_10), Dictionary_2_TryGetValue_m8E6C3FEADDB1D6606A48972D8C7405DD98D66F6B_RuntimeMethod_var);
				// var dependencyComponent = new JProperty("dependencyComponent", GetComponentIdentifier(componentInstance));
				RuntimeObject* L_32 = V_10;
				String_t* L_33;
				L_33 = DependencyTreeExtensions_GetComponentIdentifier_mA42A0F2ED2930B38CD6BD6ADB5EB4564B1888CAD(L_32, NULL);
				JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* L_34 = (JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4*)il2cpp_codegen_object_new(JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4_il2cpp_TypeInfo_var);
				NullCheck(L_34);
				JProperty__ctor_mA59A3257A0EB4DB85735EF8F576917BF3B5415F1(L_34, _stringLiteral0A642D37F6AB975402943D621A7F08FF5C55CC88, L_33, NULL);
				V_11 = L_34;
				// var dependencyProvided = new JProperty("dependencyProvided", tree.IsProvided(componentDependency) ? "true" : "false");
				DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_35 = ___0_tree;
				int32_t L_36 = V_8;
				bool L_37;
				L_37 = DependencyTreeExtensions_IsProvided_m5CF82CE2D83F9EED333ABC06783E1902E30EA86A(L_35, L_36, NULL);
				G_B7_0 = _stringLiteral19C52E9F7740BFC167EDD516F982351B658DDB7D;
				if (L_37)
				{
					G_B8_0 = _stringLiteral19C52E9F7740BFC167EDD516F982351B658DDB7D;
					goto IL_00d1_1;
				}
			}
			{
				G_B9_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
				G_B9_1 = G_B7_0;
				goto IL_00d6_1;
			}

IL_00d1_1:
			{
				G_B9_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
				G_B9_1 = G_B8_0;
			}

IL_00d6_1:
			{
				JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* L_38 = (JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4*)il2cpp_codegen_object_new(JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4_il2cpp_TypeInfo_var);
				NullCheck(L_38);
				JProperty__ctor_mA59A3257A0EB4DB85735EF8F576917BF3B5415F1(L_38, G_B9_1, G_B9_0, NULL);
				V_12 = L_38;
				// var dependencyOptional = new JProperty("dependencyOptional", tree.IsOptional(componentDependency) ? "true" : "false");
				DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_39 = ___0_tree;
				int32_t L_40 = V_8;
				bool L_41;
				L_41 = DependencyTreeExtensions_IsOptional_m291995614CC4AA79B75123A32569FF7194759FB7(L_39, L_40, NULL);
				G_B10_0 = _stringLiteralF535E56705DB5F5E2C41B52885EAC1101A3D4C50;
				if (L_41)
				{
					G_B11_0 = _stringLiteralF535E56705DB5F5E2C41B52885EAC1101A3D4C50;
					goto IL_00f3_1;
				}
			}
			{
				G_B12_0 = _stringLiteral77D38C0623F92B292B925F6E72CF5CF99A20D4EB;
				G_B12_1 = G_B10_0;
				goto IL_00f8_1;
			}

IL_00f3_1:
			{
				G_B12_0 = _stringLiteralB7C45DD316C68ABF3429C20058C2981C652192F2;
				G_B12_1 = G_B11_0;
			}

IL_00f8_1:
			{
				JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* L_42 = (JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4*)il2cpp_codegen_object_new(JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4_il2cpp_TypeInfo_var);
				NullCheck(L_42);
				JProperty__ctor_mA59A3257A0EB4DB85735EF8F576917BF3B5415F1(L_42, G_B12_1, G_B12_0, NULL);
				V_13 = L_42;
				// var dependencyJObject = new JObject(dependencyHash, dependencyComponent, dependencyProvided, dependencyOptional);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_43 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = L_43;
				JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* L_45 = V_9;
				NullCheck(L_44);
				ArrayElementTypeCheck (L_44, L_45);
				(L_44)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_45);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_46 = L_44;
				JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* L_47 = V_11;
				NullCheck(L_46);
				ArrayElementTypeCheck (L_46, L_47);
				(L_46)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_47);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_48 = L_46;
				JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* L_49 = V_12;
				NullCheck(L_48);
				ArrayElementTypeCheck (L_48, L_49);
				(L_48)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_49);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_50 = L_48;
				JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* L_51 = V_13;
				NullCheck(L_50);
				ArrayElementTypeCheck (L_50, L_51);
				(L_50)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_51);
				JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_52 = (JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1*)il2cpp_codegen_object_new(JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1_il2cpp_TypeInfo_var);
				NullCheck(L_52);
				JObject__ctor_mBF0C20A0AABE0314582CA098C847E5757D24C202(L_52, L_50, NULL);
				V_14 = L_52;
				// packageDependencies.Add(dependencyJObject);
				JArray_t1FFDF36566B9E8C56F36AB22701C1BA9DC2CBFF8* L_53 = V_3;
				JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_54 = V_14;
				NullCheck(L_53);
				JArray_Add_m6E648CB9C562A6CC16DC550DA611456AB0149330(L_53, L_54, NULL);
			}

IL_012a_1:
			{
				// foreach (var componentDependency in componentDependencies)
				bool L_55;
				L_55 = Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312((&V_7), Enumerator_MoveNext_m39C71A39758E2B4A04F44F20FCEFAF7009D5F312_RuntimeMethod_var);
				if (L_55)
				{
					goto IL_007b_1;
				}
			}
			{
				goto IL_0147;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0147:
	{
	}

IL_0148:
	{
		// return new JObject(packageHashProperty, packageProviderProperty, packageDependenciesProperty);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_56 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_57 = L_56;
		JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* L_58 = V_0;
		NullCheck(L_57);
		ArrayElementTypeCheck (L_57, L_58);
		(L_57)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_58);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_59 = L_57;
		JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* L_60 = V_2;
		NullCheck(L_59);
		ArrayElementTypeCheck (L_59, L_60);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_60);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_61 = L_59;
		JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* L_62 = V_4;
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, L_62);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_62);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_63 = (JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1*)il2cpp_codegen_object_new(JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1_il2cpp_TypeInfo_var);
		NullCheck(L_63);
		JObject__ctor_mBF0C20A0AABE0314582CA098C847E5757D24C202(L_63, L_61, NULL);
		V_15 = L_63;
		goto IL_0164;
	}

IL_0164:
	{
		// }
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_64 = V_15;
		return L_64;
	}
}
// Newtonsoft.Json.Linq.JObject Unity.Services.Core.Internal.DependencyTreeExtensions::GetComponentJObject(Unity.Services.Core.Internal.DependencyTree,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* DependencyTreeExtensions_GetComponentJObject_mF466234CAEE808134510C6D6D29CCFB6D7EEF4B5 (DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___0_tree, int32_t ___1_componentHash, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m8E6C3FEADDB1D6606A48972D8C7405DD98D66F6B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mAB6AC7CC3190A5C78A01CB6298A778FBAA1DD050_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62085E8C55DCED36DF75D38F113376BFB67686BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8BECFE146A3C715A5BD5CA1609A930E9E0EFA822);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8A8223D36D7904E9E1B99531534AE175E8799CA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD3A31FFA67A77D3443C74DB1AA944AAC009B687A);
		s_Il2CppMethodInitialized = true;
	}
	JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* V_2 = NULL;
	int32_t V_3 = 0;
	JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* V_4 = NULL;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* V_7 = NULL;
	JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* V_8 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	{
		// var componentHashProperty = new JProperty("componentHash", componentHash);
		int32_t L_0 = ___1_componentHash;
		int32_t L_1 = L_0;
		RuntimeObject* L_2 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_1);
		JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* L_3 = (JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4*)il2cpp_codegen_object_new(JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		JProperty__ctor_mA59A3257A0EB4DB85735EF8F576917BF3B5415F1(L_3, _stringLiteralD3A31FFA67A77D3443C74DB1AA944AAC009B687A, L_2, NULL);
		V_0 = L_3;
		// tree.ComponentTypeHashToInstance.TryGetValue(componentHash, out var component);
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_4 = ___0_tree;
		NullCheck(L_4);
		Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* L_5 = L_4->___ComponentTypeHashToInstance_3;
		int32_t L_6 = ___1_componentHash;
		NullCheck(L_5);
		bool L_7;
		L_7 = Dictionary_2_TryGetValue_m8E6C3FEADDB1D6606A48972D8C7405DD98D66F6B(L_5, L_6, (&V_1), Dictionary_2_TryGetValue_m8E6C3FEADDB1D6606A48972D8C7405DD98D66F6B_RuntimeMethod_var);
		// var componentProperty = new JProperty("component", GetComponentIdentifier(component));
		RuntimeObject* L_8 = V_1;
		String_t* L_9;
		L_9 = DependencyTreeExtensions_GetComponentIdentifier_mA42A0F2ED2930B38CD6BD6ADB5EB4564B1888CAD(L_8, NULL);
		JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* L_10 = (JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4*)il2cpp_codegen_object_new(JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		JProperty__ctor_mA59A3257A0EB4DB85735EF8F576917BF3B5415F1(L_10, _stringLiteral62085E8C55DCED36DF75D38F113376BFB67686BB, L_9, NULL);
		V_2 = L_10;
		// tree.ComponentTypeHashToPackageTypeHash.TryGetValue(componentHash, out var packageHash);
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_11 = ___0_tree;
		NullCheck(L_11);
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_12 = L_11->___ComponentTypeHashToPackageTypeHash_1;
		int32_t L_13 = ___1_componentHash;
		NullCheck(L_12);
		bool L_14;
		L_14 = Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9(L_12, L_13, (&V_3), Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9_RuntimeMethod_var);
		// var componentPackageHash = new JProperty("componentPackageHash", packageHash);
		int32_t L_15 = V_3;
		int32_t L_16 = L_15;
		RuntimeObject* L_17 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_16);
		JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* L_18 = (JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4*)il2cpp_codegen_object_new(JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		JProperty__ctor_mA59A3257A0EB4DB85735EF8F576917BF3B5415F1(L_18, _stringLiteralA8A8223D36D7904E9E1B99531534AE175E8799CA, L_17, NULL);
		V_4 = L_18;
		// var hasPackage = tree.PackageTypeHashToInstance.TryGetValue(packageHash, out var packageInstance);
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_19 = ___0_tree;
		NullCheck(L_19);
		Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36* L_20 = L_19->___PackageTypeHashToInstance_0;
		int32_t L_21 = V_3;
		NullCheck(L_20);
		bool L_22;
		L_22 = Dictionary_2_TryGetValue_mAB6AC7CC3190A5C78A01CB6298A778FBAA1DD050(L_20, L_21, (&V_6), Dictionary_2_TryGetValue_mAB6AC7CC3190A5C78A01CB6298A778FBAA1DD050_RuntimeMethod_var);
		V_5 = L_22;
		// var componentPackage = new JProperty("componentPackage", hasPackage ? packageInstance.GetType().Name : "null");
		bool L_23 = V_5;
		G_B1_0 = _stringLiteral8BECFE146A3C715A5BD5CA1609A930E9E0EFA822;
		if (L_23)
		{
			G_B2_0 = _stringLiteral8BECFE146A3C715A5BD5CA1609A930E9E0EFA822;
			goto IL_0073;
		}
	}
	{
		G_B3_0 = _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
		G_B3_1 = G_B1_0;
		goto IL_007f;
	}

IL_0073:
	{
		RuntimeObject* L_24 = V_6;
		NullCheck(L_24);
		Type_t* L_25;
		L_25 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_24, NULL);
		NullCheck(L_25);
		String_t* L_26;
		L_26 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_25);
		G_B3_0 = L_26;
		G_B3_1 = G_B2_0;
	}

IL_007f:
	{
		JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* L_27 = (JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4*)il2cpp_codegen_object_new(JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		JProperty__ctor_mA59A3257A0EB4DB85735EF8F576917BF3B5415F1(L_27, G_B3_1, G_B3_0, NULL);
		V_7 = L_27;
		// return new JObject(componentHashProperty, componentProperty, componentPackageHash, componentPackage);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_28 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_29 = L_28;
		JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* L_30 = V_0;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, L_30);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_30);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = L_29;
		JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* L_32 = V_2;
		NullCheck(L_31);
		ArrayElementTypeCheck (L_31, L_32);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_32);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_33 = L_31;
		JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* L_34 = V_4;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_34);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_34);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_35 = L_33;
		JProperty_t1B8E99236F2BD537EC4A7A63ACDB60D7C709C5F4* L_36 = V_7;
		NullCheck(L_35);
		ArrayElementTypeCheck (L_35, L_36);
		(L_35)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_36);
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_37 = (JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1*)il2cpp_codegen_object_new(JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1_il2cpp_TypeInfo_var);
		NullCheck(L_37);
		JObject__ctor_mBF0C20A0AABE0314582CA098C847E5757D24C202(L_37, L_35, NULL);
		V_8 = L_37;
		goto IL_00a7;
	}

IL_00a7:
	{
		// }
		JObject_t22BBBA7A90517B7E66E8C9D8D16DE84CB5054DE1* L_38 = V_8;
		return L_38;
	}
}
// System.String Unity.Services.Core.Internal.DependencyTreeExtensions::GetComponentIdentifier(Unity.Services.Core.Internal.IServiceComponent)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DependencyTreeExtensions_GetComponentIdentifier_mA42A0F2ED2930B38CD6BD6ADB5EB4564B1888CAD (RuntimeObject* ___0_component, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174);
		s_Il2CppMethodInitialized = true;
	}
	MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8* V_0 = NULL;
	bool V_1 = false;
	String_t* V_2 = NULL;
	bool V_3 = false;
	{
		// if (component == null)
		RuntimeObject* L_0 = ___0_component;
		V_1 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// return "null";
		V_2 = _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
		goto IL_003e;
	}

IL_0012:
	{
		// if (component is MissingComponent missingComponent)
		RuntimeObject* L_2 = ___0_component;
		V_0 = ((MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8*)IsInstClass((RuntimeObject*)L_2, MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8_il2cpp_TypeInfo_var));
		MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8* L_3 = V_0;
		V_3 = (bool)((!(((RuntimeObject*)(MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8*)L_3) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_4 = V_3;
		if (!L_4)
		{
			goto IL_0030;
		}
	}
	{
		// return missingComponent.IntendedType.Name;
		MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8* L_5 = V_0;
		NullCheck(L_5);
		Type_t* L_6;
		L_6 = MissingComponent_get_IntendedType_m97B07B28AD54A741B376A917DCE3635E9479CB59_inline(L_5, NULL);
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_6);
		V_2 = L_7;
		goto IL_003e;
	}

IL_0030:
	{
		// return component.GetType().Name;
		RuntimeObject* L_8 = ___0_component;
		NullCheck(L_8);
		Type_t* L_9;
		L_9 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_8, NULL);
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_9);
		V_2 = L_10;
		goto IL_003e;
	}

IL_003e:
	{
		// }
		String_t* L_11 = V_2;
		return L_11;
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
// Conversion methods for marshalling of: Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter
IL2CPP_EXTERN_C void DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3_marshal_pinvoke(const DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3& unmarshaled, DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3_marshaled_pinvoke& marshaled)
{
	Exception_t* ___Tree_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Tree' of type 'DependencyTreeInitializeOrderSorter': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Tree_0Exception, NULL);
}
IL2CPP_EXTERN_C void DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3_marshal_pinvoke_back(const DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3_marshaled_pinvoke& marshaled, DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3& unmarshaled)
{
	Exception_t* ___Tree_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Tree' of type 'DependencyTreeInitializeOrderSorter': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Tree_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter
IL2CPP_EXTERN_C void DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3_marshal_pinvoke_cleanup(DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter
IL2CPP_EXTERN_C void DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3_marshal_com(const DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3& unmarshaled, DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3_marshaled_com& marshaled)
{
	Exception_t* ___Tree_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Tree' of type 'DependencyTreeInitializeOrderSorter': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Tree_0Exception, NULL);
}
IL2CPP_EXTERN_C void DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3_marshal_com_back(const DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3_marshaled_com& marshaled, DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3& unmarshaled)
{
	Exception_t* ___Tree_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'Tree' of type 'DependencyTreeInitializeOrderSorter': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___Tree_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter
IL2CPP_EXTERN_C void DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3_marshal_com_cleanup(DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3_marshaled_com& marshaled)
{
}
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::.ctor(Unity.Services.Core.Internal.DependencyTree,System.Collections.Generic.ICollection`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter__ctor_m7FCD5445FC15A72A328BDE0828D9EFF109C4EBE7 (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___0_tree, RuntimeObject* ___1_target, const RuntimeMethod* method) 
{
	{
		// Tree = tree;
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_0 = ___0_tree;
		__this->___Tree_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Tree_0), (void*)L_0);
		// Target = target;
		RuntimeObject* L_1 = ___1_target;
		__this->___Target_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Target_1), (void*)L_1);
		// m_PackageTypeHashExplorationHistory = null;
		__this->___m_PackageTypeHashExplorationHistory_2 = (Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PackageTypeHashExplorationHistory_2), (void*)(Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0*)NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void DependencyTreeInitializeOrderSorter__ctor_m7FCD5445FC15A72A328BDE0828D9EFF109C4EBE7_AdjustorThunk (RuntimeObject* __this, DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___0_tree, RuntimeObject* ___1_target, const RuntimeMethod* method)
{
	DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3*>(__this + _offset);
	DependencyTreeInitializeOrderSorter__ctor_m7FCD5445FC15A72A328BDE0828D9EFF109C4EBE7(_thisAdjusted, ___0_tree, ___1_target, method);
}
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::SortRegisteredPackagesIntoTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter_SortRegisteredPackagesIntoTarget_m50FFB4AE5A3282877E8541CAAD905CD7C2D8F831 (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m4738B97DDCA9D95595FB6AD1700D81D0D84A8205_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IReadOnlyCollection_1_t0114882DFCA42EC6C648641A315FCD199A031075_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	HashException_tFB110FD771A95A93E65290AC3969485D400E8855* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// Target.Clear();
		RuntimeObject* L_0 = __this->___Target_1;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Int32>::Clear() */, ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0_il2cpp_TypeInfo_var, L_0);
		// RemoveUnprovidedOptionalDependenciesFromTree();
		DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependenciesFromTree_mD7E3080BAD1D57E3AF5F8B8258DABCE48E174183(__this, NULL);
		// var registeredPackageTypeHashes = GetPackageTypeHashes();
		RuntimeObject* L_1;
		L_1 = DependencyTreeInitializeOrderSorter_GetPackageTypeHashes_mF3163B612844917C07D74BB7B78FD5C48ECE4653(__this, NULL);
		V_0 = L_1;
		// m_PackageTypeHashExplorationHistory = new Dictionary<int, ExplorationMark>(registeredPackageTypeHashes.Count);
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Int32>::get_Count() */, IReadOnlyCollection_1_t0114882DFCA42EC6C648641A315FCD199A031075_il2cpp_TypeInfo_var, L_2);
		Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0* L_4 = (Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0*)il2cpp_codegen_object_new(Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dictionary_2__ctor_m4738B97DDCA9D95595FB6AD1700D81D0D84A8205(L_4, L_3, Dictionary_2__ctor_m4738B97DDCA9D95595FB6AD1700D81D0D84A8205_RuntimeMethod_var);
		__this->___m_PackageTypeHashExplorationHistory_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PackageTypeHashExplorationHistory_2), (void*)L_4);
	}
	try
	{// begin try (depth: 1)
		{
			// foreach (var packageTypeHash in registeredPackageTypeHashes)
			RuntimeObject* L_5 = V_0;
			NullCheck(L_5);
			RuntimeObject* L_6;
			L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var, L_5);
			V_1 = L_6;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0052_1:
				{// begin finally (depth: 2)
					{
						RuntimeObject* L_7 = V_1;
						if (!L_7)
						{
							goto IL_005c_1;
						}
					}
					{
						RuntimeObject* L_8 = V_1;
						NullCheck(L_8);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
					}

IL_005c_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					goto IL_0048_2;
				}

IL_0037_2:
				{
					// foreach (var packageTypeHash in registeredPackageTypeHashes)
					RuntimeObject* L_9 = V_1;
					NullCheck(L_9);
					int32_t L_10;
					L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var, L_9);
					V_2 = L_10;
					// SortTreeThrough(packageTypeHash);
					int32_t L_11 = V_2;
					DependencyTreeInitializeOrderSorter_SortTreeThrough_m2B43FBB987275FC528AD1B28C7B78A24E9FE088C(__this, L_11, NULL);
				}

IL_0048_2:
				{
					// foreach (var packageTypeHash in registeredPackageTypeHashes)
					RuntimeObject* L_12 = V_1;
					NullCheck(L_12);
					bool L_13;
					L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_12);
					if (L_13)
					{
						goto IL_0037_2;
					}
				}
				{
					goto IL_005d_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_005d_1:
		{
			goto IL_0075;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&HashException_tFB110FD771A95A93E65290AC3969485D400E8855_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0060;
		}
		throw e;
	}

CATCH_0060:
	{// begin catch(Unity.Services.Core.Internal.HashException)
		// catch (HashException ex)
		V_3 = ((HashException_tFB110FD771A95A93E65290AC3969485D400E8855*)IL2CPP_GET_ACTIVE_EXCEPTION(HashException_tFB110FD771A95A93E65290AC3969485D400E8855*));
		// throw new DependencyTreeSortFailedException(Tree, Target, ex);
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_14 = __this->___Tree_0;
		RuntimeObject* L_15 = __this->___Target_1;
		HashException_tFB110FD771A95A93E65290AC3969485D400E8855* L_16 = V_3;
		DependencyTreeSortFailedException_t039BF64DBDDFEB16DD187FE600445BF53C88A918* L_17 = (DependencyTreeSortFailedException_t039BF64DBDDFEB16DD187FE600445BF53C88A918*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DependencyTreeSortFailedException_t039BF64DBDDFEB16DD187FE600445BF53C88A918_il2cpp_TypeInfo_var)));
		NullCheck(L_17);
		DependencyTreeSortFailedException__ctor_m20BA3EA58FC55FCFCE5F857FA9A2EC228473891B(L_17, L_14, L_15, L_16, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DependencyTreeInitializeOrderSorter_SortRegisteredPackagesIntoTarget_m50FFB4AE5A3282877E8541CAAD905CD7C2D8F831_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0075:
	{
		// m_PackageTypeHashExplorationHistory = null;
		__this->___m_PackageTypeHashExplorationHistory_2 = (Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_PackageTypeHashExplorationHistory_2), (void*)(Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0*)NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void DependencyTreeInitializeOrderSorter_SortRegisteredPackagesIntoTarget_m50FFB4AE5A3282877E8541CAAD905CD7C2D8F831_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3*>(__this + _offset);
	DependencyTreeInitializeOrderSorter_SortRegisteredPackagesIntoTarget_m50FFB4AE5A3282877E8541CAAD905CD7C2D8F831(_thisAdjusted, method);
}
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::RemoveUnprovidedOptionalDependenciesFromTree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependenciesFromTree_mD7E3080BAD1D57E3AF5F8B8258DABCE48E174183 (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m53257BCC63E49ADE25842FBFFD8C94FEE95FB882_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1745E1BB6B262D6D9FD7C9CEAF34F27242951E36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mF016F088343F1C1EA14781644EF32427E2A99925_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC4512C9422884FBA36066F5C42CED876CDA1DBDC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m96C2EFA120FE8F75126D373B8D4FD3AE167E6FA7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t9D9BEEB8A22FBACB996BABF18C06B5EBD63F2FC5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_1 = NULL;
	{
		// foreach (var dependencyTypeHashes in Tree.PackageTypeHashToComponentTypeHashDependencies.Values)
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_0 = __this->___Tree_0;
		NullCheck(L_0);
		Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* L_1 = L_0->___PackageTypeHashToComponentTypeHashDependencies_2;
		NullCheck(L_1);
		ValueCollection_tE4D61B64F4018B78A9006C9160F50793B04633C6* L_2;
		L_2 = Dictionary_2_get_Values_m53257BCC63E49ADE25842FBFFD8C94FEE95FB882(L_1, Dictionary_2_get_Values_m53257BCC63E49ADE25842FBFFD8C94FEE95FB882_RuntimeMethod_var);
		NullCheck(L_2);
		Enumerator_t9D9BEEB8A22FBACB996BABF18C06B5EBD63F2FC5 L_3;
		L_3 = ValueCollection_GetEnumerator_m96C2EFA120FE8F75126D373B8D4FD3AE167E6FA7(L_2, ValueCollection_GetEnumerator_m96C2EFA120FE8F75126D373B8D4FD3AE167E6FA7_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0037:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m1745E1BB6B262D6D9FD7C9CEAF34F27242951E36((&V_0), Enumerator_Dispose_m1745E1BB6B262D6D9FD7C9CEAF34F27242951E36_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002c_1;
			}

IL_001a_1:
			{
				// foreach (var dependencyTypeHashes in Tree.PackageTypeHashToComponentTypeHashDependencies.Values)
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_4;
				L_4 = Enumerator_get_Current_mC4512C9422884FBA36066F5C42CED876CDA1DBDC_inline((&V_0), Enumerator_get_Current_mC4512C9422884FBA36066F5C42CED876CDA1DBDC_RuntimeMethod_var);
				V_1 = L_4;
				// RemoveUnprovidedOptionalDependencies(dependencyTypeHashes);
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_5 = V_1;
				DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependencies_mA453D5055F260CB080F6EE69A2F0F7CB71DB975B(__this, L_5, NULL);
			}

IL_002c_1:
			{
				// foreach (var dependencyTypeHashes in Tree.PackageTypeHashToComponentTypeHashDependencies.Values)
				bool L_6;
				L_6 = Enumerator_MoveNext_mF016F088343F1C1EA14781644EF32427E2A99925((&V_0), Enumerator_MoveNext_mF016F088343F1C1EA14781644EF32427E2A99925_RuntimeMethod_var);
				if (L_6)
				{
					goto IL_001a_1;
				}
			}
			{
				goto IL_0046;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0046:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependenciesFromTree_mD7E3080BAD1D57E3AF5F8B8258DABCE48E174183_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3*>(__this + _offset);
	DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependenciesFromTree_mD7E3080BAD1D57E3AF5F8B8258DABCE48E174183(_thisAdjusted, method);
}
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::RemoveUnprovidedOptionalDependencies(System.Collections.Generic.IList`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependencies_mA453D5055F260CB080F6EE69A2F0F7CB71DB975B (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, RuntimeObject* ___0_dependencyTypeHashes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_tFB8BE2ED9A601C1259EAB8D73D1B3E96EA321FA1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B4_0 = 0;
	{
		// for (var i = dependencyTypeHashes.Count - 1; i >= 0; i--)
		RuntimeObject* L_0 = ___0_dependencyTypeHashes;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Int32>::get_Count() */, ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0_il2cpp_TypeInfo_var, L_0);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_0048;
	}

IL_000c:
	{
		// var dependencyTypeHash = dependencyTypeHashes[i];
		RuntimeObject* L_2 = ___0_dependencyTypeHashes;
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker1< int32_t, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Int32>::get_Item(System.Int32) */, IList_1_tFB8BE2ED9A601C1259EAB8D73D1B3E96EA321FA1_il2cpp_TypeInfo_var, L_2, L_3);
		V_1 = L_4;
		// if (Tree.IsOptional(dependencyTypeHash)
		//     && !Tree.IsProvided(dependencyTypeHash))
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_5 = __this->___Tree_0;
		int32_t L_6 = V_1;
		bool L_7;
		L_7 = DependencyTreeExtensions_IsOptional_m291995614CC4AA79B75123A32569FF7194759FB7(L_5, L_6, NULL);
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_8 = __this->___Tree_0;
		int32_t L_9 = V_1;
		bool L_10;
		L_10 = DependencyTreeExtensions_IsProvided_m5CF82CE2D83F9EED333ABC06783E1902E30EA86A(L_8, L_9, NULL);
		G_B4_0 = ((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		goto IL_0035;
	}

IL_0034:
	{
		G_B4_0 = 0;
	}

IL_0035:
	{
		V_2 = (bool)G_B4_0;
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0043;
		}
	}
	{
		// dependencyTypeHashes.RemoveAt(i);
		RuntimeObject* L_12 = ___0_dependencyTypeHashes;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Int32>::RemoveAt(System.Int32) */, IList_1_tFB8BE2ED9A601C1259EAB8D73D1B3E96EA321FA1_il2cpp_TypeInfo_var, L_12, L_13);
	}

IL_0043:
	{
		// for (var i = dependencyTypeHashes.Count - 1; i >= 0; i--)
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
	}

IL_0048:
	{
		// for (var i = dependencyTypeHashes.Count - 1; i >= 0; i--)
		int32_t L_15 = V_0;
		V_3 = (bool)((((int32_t)((((int32_t)L_15) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_3;
		if (L_16)
		{
			goto IL_000c;
		}
	}
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependencies_mA453D5055F260CB080F6EE69A2F0F7CB71DB975B_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_dependencyTypeHashes, const RuntimeMethod* method)
{
	DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3*>(__this + _offset);
	DependencyTreeInitializeOrderSorter_RemoveUnprovidedOptionalDependencies_mA453D5055F260CB080F6EE69A2F0F7CB71DB975B(_thisAdjusted, ___0_dependencyTypeHashes, method);
}
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::SortTreeThrough(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter_SortTreeThrough_m2B43FBB987275FC528AD1B28C7B78A24E9FE088C (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, int32_t ___0_packageTypeHash, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD8B8B63DBF027F12B871D705B68F1AA5EBC0ADC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	DependencyTreeComponentHashException_t809B7EBA8BA1E4166E6F1FCCC21DA94BD7E0765A* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// m_PackageTypeHashExplorationHistory.TryGetValue(packageTypeHash, out var explorationMark);
		Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0* L_0 = __this->___m_PackageTypeHashExplorationHistory_2;
		int32_t L_1 = ___0_packageTypeHash;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_TryGetValue_mD8B8B63DBF027F12B871D705B68F1AA5EBC0ADC4(L_0, L_1, (&V_0), Dictionary_2_TryGetValue_mD8B8B63DBF027F12B871D705B68F1AA5EBC0ADC4_RuntimeMethod_var);
		// switch (explorationMark)
		int32_t L_3 = V_0;
		V_3 = L_3;
		int32_t L_4 = V_3;
		V_2 = L_4;
		int32_t L_5 = V_2;
		if ((((int32_t)L_5) == ((int32_t)1)))
		{
			goto IL_0020;
		}
	}
	{
		goto IL_001a;
	}

IL_001a:
	{
		int32_t L_6 = V_2;
		if ((((int32_t)L_6) == ((int32_t)2)))
		{
			goto IL_0026;
		}
	}
	{
		goto IL_0028;
	}

IL_0020:
	{
		// throw new CircularDependencyException();
		CircularDependencyException_t1447C8D464045989784E78E658EFE30FF95153FC* L_7 = (CircularDependencyException_t1447C8D464045989784E78E658EFE30FF95153FC*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&CircularDependencyException_t1447C8D464045989784E78E658EFE30FF95153FC_il2cpp_TypeInfo_var)));
		NullCheck(L_7);
		CircularDependencyException__ctor_m4C48FC29A6765759CEF10843D5A98C43F100B2E2(L_7, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DependencyTreeInitializeOrderSorter_SortTreeThrough_m2B43FBB987275FC528AD1B28C7B78A24E9FE088C_RuntimeMethod_var)));
	}

IL_0026:
	{
		// return;
		goto IL_009e;
	}

IL_0028:
	{
		// MarkPackage(packageTypeHash, ExplorationMark.Viewed);
		int32_t L_8 = ___0_packageTypeHash;
		DependencyTreeInitializeOrderSorter_MarkPackage_m4B61E4A24ECB477D9ED1CE54FA232D5C6B01FD31(__this, L_8, 1, NULL);
		// var dependencyTypeHashes = GetDependencyTypeHashesFor(packageTypeHash);
		int32_t L_9 = ___0_packageTypeHash;
		RuntimeObject* L_10;
		L_10 = DependencyTreeInitializeOrderSorter_GetDependencyTypeHashesFor_mE4896E6FD46EC6A8D6E60540C9036B58ABC124AF(__this, L_9, NULL);
		V_1 = L_10;
	}
	try
	{// begin try (depth: 1)
		// SortTreeThrough(dependencyTypeHashes);
		RuntimeObject* L_11 = V_1;
		DependencyTreeInitializeOrderSorter_SortTreeThrough_m18D24A10B30F955EE42B8E82C104B8B8B8799F6D(__this, L_11, NULL);
		goto IL_0088;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DependencyTreeComponentHashException_t809B7EBA8BA1E4166E6F1FCCC21DA94BD7E0765A_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0045;
		}
		throw e;
	}

CATCH_0045:
	{// begin catch(Unity.Services.Core.Internal.DependencyTreeComponentHashException)
		// catch (DependencyTreeComponentHashException ex)
		V_4 = ((DependencyTreeComponentHashException_t809B7EBA8BA1E4166E6F1FCCC21DA94BD7E0765A*)IL2CPP_GET_ACTIVE_EXCEPTION(DependencyTreeComponentHashException_t809B7EBA8BA1E4166E6F1FCCC21DA94BD7E0765A*));
		// throw new DependencyTreePackageHashException(packageTypeHash, $"Component with hash[{ex.Hash}] threw exception when sorting package[{packageTypeHash}][{Tree.PackageTypeHashToInstance[packageTypeHash].GetType().FullName}]", ex);
		int32_t L_12 = ___0_packageTypeHash;
		DependencyTreeComponentHashException_t809B7EBA8BA1E4166E6F1FCCC21DA94BD7E0765A* L_13 = V_4;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = HashException_get_Hash_mFCB1368E904EFFF479EB757C721CBB832D50E023_inline(L_13, NULL);
		int32_t L_15 = L_14;
		RuntimeObject* L_16 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_15);
		int32_t L_17 = ___0_packageTypeHash;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_18);
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_20 = __this->___Tree_0;
		NullCheck(L_20);
		Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36* L_21 = L_20->___PackageTypeHashToInstance_0;
		int32_t L_22 = ___0_packageTypeHash;
		NullCheck(L_21);
		RuntimeObject* L_23;
		L_23 = Dictionary_2_get_Item_m8AD97E240F583ACF35C19A2C71143DE04FF1F071(L_21, L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Dictionary_2_get_Item_m8AD97E240F583ACF35C19A2C71143DE04FF1F071_RuntimeMethod_var)));
		NullCheck(L_23);
		Type_t* L_24;
		L_24 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_23, NULL);
		NullCheck(L_24);
		String_t* L_25;
		L_25 = VirtualFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_24);
		String_t* L_26;
		L_26 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral59B135BD177050D14D8C8332E07A07482038D29D)), L_16, L_19, L_25, NULL);
		DependencyTreeComponentHashException_t809B7EBA8BA1E4166E6F1FCCC21DA94BD7E0765A* L_27 = V_4;
		DependencyTreePackageHashException_tEAE1BAE41D7E329841F3270A8E6491FBDB7CB547* L_28 = (DependencyTreePackageHashException_tEAE1BAE41D7E329841F3270A8E6491FBDB7CB547*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DependencyTreePackageHashException_tEAE1BAE41D7E329841F3270A8E6491FBDB7CB547_il2cpp_TypeInfo_var)));
		NullCheck(L_28);
		DependencyTreePackageHashException__ctor_m5BF0D7C8B38D9F1E14F2AB38FB5D420528DB10E7(L_28, L_12, L_26, L_27, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DependencyTreeInitializeOrderSorter_SortTreeThrough_m2B43FBB987275FC528AD1B28C7B78A24E9FE088C_RuntimeMethod_var)));
	}// end catch (depth: 1)

IL_0088:
	{
		// Target.Add(packageTypeHash);
		RuntimeObject* L_29 = __this->___Target_1;
		int32_t L_30 = ___0_packageTypeHash;
		NullCheck(L_29);
		InterfaceActionInvoker1< int32_t >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Int32>::Add(T) */, ICollection_1_t828FEFDDBF830D003AFB480F0898186B499E26B0_il2cpp_TypeInfo_var, L_29, L_30);
		// MarkPackage(packageTypeHash, ExplorationMark.Sorted);
		int32_t L_31 = ___0_packageTypeHash;
		DependencyTreeInitializeOrderSorter_MarkPackage_m4B61E4A24ECB477D9ED1CE54FA232D5C6B01FD31(__this, L_31, 2, NULL);
	}

IL_009e:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void DependencyTreeInitializeOrderSorter_SortTreeThrough_m2B43FBB987275FC528AD1B28C7B78A24E9FE088C_AdjustorThunk (RuntimeObject* __this, int32_t ___0_packageTypeHash, const RuntimeMethod* method)
{
	DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3*>(__this + _offset);
	DependencyTreeInitializeOrderSorter_SortTreeThrough_m2B43FBB987275FC528AD1B28C7B78A24E9FE088C(_thisAdjusted, ___0_packageTypeHash, method);
}
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::SortTreeThrough(System.Collections.Generic.IEnumerable`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter_SortTreeThrough_m18D24A10B30F955EE42B8E82C104B8B8B8799F6D (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, RuntimeObject* ___0_dependencyTypeHashes, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		// foreach (var dependency in dependencyTypeHashes)
		RuntimeObject* L_0 = ___0_dependencyTypeHashes;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int32>::GetEnumerator() */, IEnumerable_1_tCE758D940790D6D0D56B457E522C195F8C413AF2_il2cpp_TypeInfo_var, L_0);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					if (!L_2)
					{
						goto IL_0038;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					NullCheck(L_3);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_3);
				}

IL_0038:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0024_1;
			}

IL_000b_1:
			{
				// foreach (var dependency in dependencyTypeHashes)
				RuntimeObject* L_4 = V_0;
				NullCheck(L_4);
				int32_t L_5;
				L_5 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Int32>::get_Current() */, IEnumerator_1_tD6A90A7446DA8E6CF865EDFBBF18C1200BB6D452_il2cpp_TypeInfo_var, L_4);
				V_1 = L_5;
				// var dependencyPackageTypeHash = GetPackageTypeHashFor(dependency);
				int32_t L_6 = V_1;
				int32_t L_7;
				L_7 = DependencyTreeInitializeOrderSorter_GetPackageTypeHashFor_mD0F3091C18741606134FBB1F6F1465F5EB8C0634(__this, L_6, NULL);
				V_2 = L_7;
				// SortTreeThrough(dependencyPackageTypeHash);
				int32_t L_8 = V_2;
				DependencyTreeInitializeOrderSorter_SortTreeThrough_m2B43FBB987275FC528AD1B28C7B78A24E9FE088C(__this, L_8, NULL);
			}

IL_0024_1:
			{
				// foreach (var dependency in dependencyTypeHashes)
				RuntimeObject* L_9 = V_0;
				NullCheck(L_9);
				bool L_10;
				L_10 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_9);
				if (L_10)
				{
					goto IL_000b_1;
				}
			}
			{
				goto IL_0039;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0039:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void DependencyTreeInitializeOrderSorter_SortTreeThrough_m18D24A10B30F955EE42B8E82C104B8B8B8799F6D_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_dependencyTypeHashes, const RuntimeMethod* method)
{
	DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3*>(__this + _offset);
	DependencyTreeInitializeOrderSorter_SortTreeThrough_m18D24A10B30F955EE42B8E82C104B8B8B8799F6D(_thisAdjusted, ___0_dependencyTypeHashes, method);
}
// System.Void Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::MarkPackage(System.Int32,Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter/ExplorationMark)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeInitializeOrderSorter_MarkPackage_m4B61E4A24ECB477D9ED1CE54FA232D5C6B01FD31 (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, int32_t ___0_packageTypeHash, int32_t ___1_mark, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_mFAF50FE88A99867BD0A39B989DC9C9AC691D777B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_PackageTypeHashExplorationHistory[packageTypeHash] = mark;
		Dictionary_2_t109AA5B0F47A66F6FA55927DACFC39606973BAF0* L_0 = __this->___m_PackageTypeHashExplorationHistory_2;
		int32_t L_1 = ___0_packageTypeHash;
		int32_t L_2 = ___1_mark;
		NullCheck(L_0);
		Dictionary_2_set_Item_mFAF50FE88A99867BD0A39B989DC9C9AC691D777B(L_0, L_1, L_2, Dictionary_2_set_Item_mFAF50FE88A99867BD0A39B989DC9C9AC691D777B_RuntimeMethod_var);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void DependencyTreeInitializeOrderSorter_MarkPackage_m4B61E4A24ECB477D9ED1CE54FA232D5C6B01FD31_AdjustorThunk (RuntimeObject* __this, int32_t ___0_packageTypeHash, int32_t ___1_mark, const RuntimeMethod* method)
{
	DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3*>(__this + _offset);
	DependencyTreeInitializeOrderSorter_MarkPackage_m4B61E4A24ECB477D9ED1CE54FA232D5C6B01FD31(_thisAdjusted, ___0_packageTypeHash, ___1_mark, method);
}
// System.Collections.Generic.IReadOnlyCollection`1<System.Int32> Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::GetPackageTypeHashes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DependencyTreeInitializeOrderSorter_GetPackageTypeHashes_mF3163B612844917C07D74BB7B78FD5C48ECE4653 (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mBE302F6BC51FA460285907BC883053A67B73CC06_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// => Tree.PackageTypeHashToInstance.Keys;
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_0 = __this->___Tree_0;
		NullCheck(L_0);
		Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36* L_1 = L_0->___PackageTypeHashToInstance_0;
		NullCheck(L_1);
		KeyCollection_t241A367A2D827EDFBE8E517F96AE6B58053FA006* L_2;
		L_2 = Dictionary_2_get_Keys_mBE302F6BC51FA460285907BC883053A67B73CC06(L_1, Dictionary_2_get_Keys_mBE302F6BC51FA460285907BC883053A67B73CC06_RuntimeMethod_var);
		return L_2;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* DependencyTreeInitializeOrderSorter_GetPackageTypeHashes_mF3163B612844917C07D74BB7B78FD5C48ECE4653_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = DependencyTreeInitializeOrderSorter_GetPackageTypeHashes_mF3163B612844917C07D74BB7B78FD5C48ECE4653(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::GetPackageTypeHashFor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DependencyTreeInitializeOrderSorter_GetPackageTypeHashFor_mD0F3091C18741606134FBB1F6F1465F5EB8C0634 (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, int32_t ___0_componentTypeHash, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// => Tree.ComponentTypeHashToPackageTypeHash.TryGetValue(componentTypeHash, out var packageHash) ? packageHash : throw new DependencyTreeComponentHashException(componentTypeHash, $"Component with hash[{componentTypeHash}] does not exist!");
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_0 = __this->___Tree_0;
		NullCheck(L_0);
		Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* L_1 = L_0->___ComponentTypeHashToPackageTypeHash_1;
		int32_t L_2 = ___0_componentTypeHash;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9(L_1, L_2, (&V_0), Dictionary_2_TryGetValue_mAAEB730BB484D3ECA345BF704F67084E465FFBF9_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_4 = ___0_componentTypeHash;
		int32_t L_5 = ___0_componentTypeHash;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_6);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8501F02071665536240FE484662450FCC702AD6C)), L_7, NULL);
		DependencyTreeComponentHashException_t809B7EBA8BA1E4166E6F1FCCC21DA94BD7E0765A* L_9 = (DependencyTreeComponentHashException_t809B7EBA8BA1E4166E6F1FCCC21DA94BD7E0765A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DependencyTreeComponentHashException_t809B7EBA8BA1E4166E6F1FCCC21DA94BD7E0765A_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		DependencyTreeComponentHashException__ctor_mAE32DD2275602F7BC17EE37475304781149BCBC4(L_9, L_4, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DependencyTreeInitializeOrderSorter_GetPackageTypeHashFor_mD0F3091C18741606134FBB1F6F1465F5EB8C0634_RuntimeMethod_var)));
	}

IL_002c:
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C  int32_t DependencyTreeInitializeOrderSorter_GetPackageTypeHashFor_mD0F3091C18741606134FBB1F6F1465F5EB8C0634_AdjustorThunk (RuntimeObject* __this, int32_t ___0_componentTypeHash, const RuntimeMethod* method)
{
	DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = DependencyTreeInitializeOrderSorter_GetPackageTypeHashFor_mD0F3091C18741606134FBB1F6F1465F5EB8C0634(_thisAdjusted, ___0_componentTypeHash, method);
	return _returnValue;
}
// System.Collections.Generic.IEnumerable`1<System.Int32> Unity.Services.Core.Internal.DependencyTreeInitializeOrderSorter::GetDependencyTypeHashesFor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DependencyTreeInitializeOrderSorter_GetDependencyTypeHashesFor_mE4896E6FD46EC6A8D6E60540C9036B58ABC124AF (DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* __this, int32_t ___0_packageTypeHash, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_m0E484492BA83E1C79585B6C53AC5F8418E4C473F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_0 = NULL;
	{
		// => Tree.PackageTypeHashToComponentTypeHashDependencies.TryGetValue(packageTypeHash, out var dependencyHashes) ? dependencyHashes : throw new DependencyTreePackageHashException(packageTypeHash, $"Package with hash[{packageTypeHash}] does not exist!");
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_0 = __this->___Tree_0;
		NullCheck(L_0);
		Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* L_1 = L_0->___PackageTypeHashToComponentTypeHashDependencies_2;
		int32_t L_2 = ___0_packageTypeHash;
		NullCheck(L_1);
		bool L_3;
		L_3 = Dictionary_2_TryGetValue_m0E484492BA83E1C79585B6C53AC5F8418E4C473F(L_1, L_2, (&V_0), Dictionary_2_TryGetValue_m0E484492BA83E1C79585B6C53AC5F8418E4C473F_RuntimeMethod_var);
		if (L_3)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_4 = ___0_packageTypeHash;
		int32_t L_5 = ___0_packageTypeHash;
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_6);
		String_t* L_8;
		L_8 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC7534A44A75ACD68ACDE5123C6DB8DD24242F2CD)), L_7, NULL);
		DependencyTreePackageHashException_tEAE1BAE41D7E329841F3270A8E6491FBDB7CB547* L_9 = (DependencyTreePackageHashException_tEAE1BAE41D7E329841F3270A8E6491FBDB7CB547*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DependencyTreePackageHashException_tEAE1BAE41D7E329841F3270A8E6491FBDB7CB547_il2cpp_TypeInfo_var)));
		NullCheck(L_9);
		DependencyTreePackageHashException__ctor_m923C53FC638F20CEC12103AF32A773C7164D0E33(L_9, L_4, L_8, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DependencyTreeInitializeOrderSorter_GetDependencyTypeHashesFor_mE4896E6FD46EC6A8D6E60540C9036B58ABC124AF_RuntimeMethod_var)));
	}

IL_002c:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_10 = V_0;
		return L_10;
	}
}
IL2CPP_EXTERN_C  RuntimeObject* DependencyTreeInitializeOrderSorter_GetDependencyTypeHashesFor_mE4896E6FD46EC6A8D6E60540C9036B58ABC124AF_AdjustorThunk (RuntimeObject* __this, int32_t ___0_packageTypeHash, const RuntimeMethod* method)
{
	DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = DependencyTreeInitializeOrderSorter_GetDependencyTypeHashesFor_mE4896E6FD46EC6A8D6E60540C9036B58ABC124AF(_thisAdjusted, ___0_packageTypeHash, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Unity.Services.Core.Internal.HashException::get_Hash()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HashException_get_Hash_mFCB1368E904EFFF479EB757C721CBB832D50E023 (HashException_tFB110FD771A95A93E65290AC3969485D400E8855* __this, const RuntimeMethod* method) 
{
	{
		// public int Hash { get; }
		int32_t L_0 = __this->___U3CHashU3Ek__BackingField_18;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.HashException::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashException__ctor_m5D99D5AC9A02DE153D481AA8BE5DF9D41FA0348E (HashException_tFB110FD771A95A93E65290AC3969485D400E8855* __this, int32_t ___0_hash, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public HashException(int hash)
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		// Hash = hash;
		int32_t L_0 = ___0_hash;
		__this->___U3CHashU3Ek__BackingField_18 = L_0;
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.HashException::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashException__ctor_m5FBEC719A3F7F72B31F0C78070EB4D3129BFDA5B (HashException_tFB110FD771A95A93E65290AC3969485D400E8855* __this, int32_t ___0_hash, String_t* ___1_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public HashException(int hash, string message)
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m203319D1EA1274689B380A947B4ADC8445662B8F(__this, NULL);
		// Hash = hash;
		int32_t L_0 = ___0_hash;
		__this->___U3CHashU3Ek__BackingField_18 = L_0;
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.HashException::.ctor(System.Int32,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashException__ctor_m945EE76429F8A65F885AD4F0AADAC0DD9BC01655 (HashException_tFB110FD771A95A93E65290AC3969485D400E8855* __this, int32_t ___0_hash, String_t* ___1_message, Exception_t* ___2_inner, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(message, inner)
		String_t* L_0 = ___1_message;
		Exception_t* L_1 = ___2_inner;
		il2cpp_codegen_runtime_class_init_inline(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m9BC141AAB08F47C34B7ED40C1A6C0C1ADDEC5CB3(__this, L_0, L_1, NULL);
		// Hash = hash;
		int32_t L_2 = ___0_hash;
		__this->___U3CHashU3Ek__BackingField_18 = L_2;
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
// System.Void Unity.Services.Core.Internal.DependencyTreePackageHashException::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreePackageHashException__ctor_mE0682581DB0B7C459509731055254FB1DD746A18 (DependencyTreePackageHashException_tEAE1BAE41D7E329841F3270A8E6491FBDB7CB547* __this, int32_t ___0_hash, const RuntimeMethod* method) 
{
	{
		// : base(hash)
		int32_t L_0 = ___0_hash;
		HashException__ctor_m5D99D5AC9A02DE153D481AA8BE5DF9D41FA0348E(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.DependencyTreePackageHashException::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreePackageHashException__ctor_m923C53FC638F20CEC12103AF32A773C7164D0E33 (DependencyTreePackageHashException_tEAE1BAE41D7E329841F3270A8E6491FBDB7CB547* __this, int32_t ___0_hash, String_t* ___1_message, const RuntimeMethod* method) 
{
	{
		// : base(hash, message)
		int32_t L_0 = ___0_hash;
		String_t* L_1 = ___1_message;
		HashException__ctor_m5FBEC719A3F7F72B31F0C78070EB4D3129BFDA5B(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.DependencyTreePackageHashException::.ctor(System.Int32,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreePackageHashException__ctor_m5BF0D7C8B38D9F1E14F2AB38FB5D420528DB10E7 (DependencyTreePackageHashException_tEAE1BAE41D7E329841F3270A8E6491FBDB7CB547* __this, int32_t ___0_hash, String_t* ___1_message, Exception_t* ___2_inner, const RuntimeMethod* method) 
{
	{
		// : base(hash, message, inner)
		int32_t L_0 = ___0_hash;
		String_t* L_1 = ___1_message;
		Exception_t* L_2 = ___2_inner;
		HashException__ctor_m945EE76429F8A65F885AD4F0AADAC0DD9BC01655(__this, L_0, L_1, L_2, NULL);
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
// System.Void Unity.Services.Core.Internal.DependencyTreeComponentHashException::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeComponentHashException__ctor_m552C601C7E53E8ADCAC67541D9D4F2DA75EDFD26 (DependencyTreeComponentHashException_t809B7EBA8BA1E4166E6F1FCCC21DA94BD7E0765A* __this, int32_t ___0_hash, const RuntimeMethod* method) 
{
	{
		// : base(hash)
		int32_t L_0 = ___0_hash;
		HashException__ctor_m5D99D5AC9A02DE153D481AA8BE5DF9D41FA0348E(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.DependencyTreeComponentHashException::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeComponentHashException__ctor_mAE32DD2275602F7BC17EE37475304781149BCBC4 (DependencyTreeComponentHashException_t809B7EBA8BA1E4166E6F1FCCC21DA94BD7E0765A* __this, int32_t ___0_hash, String_t* ___1_message, const RuntimeMethod* method) 
{
	{
		// : base(hash, message)
		int32_t L_0 = ___0_hash;
		String_t* L_1 = ___1_message;
		HashException__ctor_m5FBEC719A3F7F72B31F0C78070EB4D3129BFDA5B(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.DependencyTreeComponentHashException::.ctor(System.Int32,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DependencyTreeComponentHashException__ctor_mD0DF4D7831FECB6F2372624B0C6870D6D8D04FBE (DependencyTreeComponentHashException_t809B7EBA8BA1E4166E6F1FCCC21DA94BD7E0765A* __this, int32_t ___0_hash, String_t* ___1_message, Exception_t* ___2_inner, const RuntimeMethod* method) 
{
	{
		// : base(hash, message, inner)
		int32_t L_0 = ___0_hash;
		String_t* L_1 = ___1_message;
		Exception_t* L_2 = ___2_inner;
		HashException__ctor_m945EE76429F8A65F885AD4F0AADAC0DD9BC01655(__this, L_0, L_1, L_2, NULL);
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
// System.Type Unity.Services.Core.Internal.MissingComponent::get_IntendedType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* MissingComponent_get_IntendedType_m97B07B28AD54A741B376A917DCE3635E9479CB59 (MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8* __this, const RuntimeMethod* method) 
{
	{
		// public Type IntendedType { get; }
		Type_t* L_0 = __this->___U3CIntendedTypeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.MissingComponent::.ctor(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MissingComponent__ctor_m2D280CE147B980C7656E897F5F237EB2A50A517B (MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8* __this, Type_t* ___0_intendedType, const RuntimeMethod* method) 
{
	{
		// internal MissingComponent(Type intendedType)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// IntendedType = intendedType;
		Type_t* L_0 = ___0_intendedType;
		__this->___U3CIntendedTypeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIntendedTypeU3Ek__BackingField_0), (void*)L_0);
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
// System.Void Unity.Services.Core.Internal.PackageInitializationInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackageInitializationInfo__ctor_mA13323855BBE265A977A230EE6F62B586D9C84D4 (PackageInitializationInfo_t3A1BAF9D785E161A9856F3C5769D513C65E49563* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// Unity.Services.Core.Internal.IPackageRegistry Unity.Services.Core.Internal.LockedPackageRegistry::get_Registry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LockedPackageRegistry_get_Registry_m4B850C75E991B690CBE9F6E18E50DD0B8C93B51A (LockedPackageRegistry_tD44860DBF1971F04B909E49EDEA6B483DD6A8499* __this, const RuntimeMethod* method) 
{
	{
		// internal IPackageRegistry Registry { get; }
		RuntimeObject* L_0 = __this->___U3CRegistryU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.LockedPackageRegistry::.ctor(Unity.Services.Core.Internal.IPackageRegistry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedPackageRegistry__ctor_m98CE0389216302BCF17DF91BC8B76CAA121D8927 (LockedPackageRegistry_tD44860DBF1971F04B909E49EDEA6B483DD6A8499* __this, RuntimeObject* ___0_registryToLock, const RuntimeMethod* method) 
{
	{
		// public LockedPackageRegistry(
		//     [NotNull] IPackageRegistry registryToLock)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Registry = registryToLock;
		RuntimeObject* L_0 = ___0_registryToLock;
		__this->___U3CRegistryU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRegistryU3Ek__BackingField_1), (void*)L_0);
		// }
		return;
	}
}
// Unity.Services.Core.Internal.DependencyTree Unity.Services.Core.Internal.LockedPackageRegistry::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* LockedPackageRegistry_get_Tree_m29C509F6076AB2B4910AA7E2413385AD3523123D (LockedPackageRegistry_tD44860DBF1971F04B909E49EDEA6B483DD6A8499* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPackageRegistry_t598A337CA30E50021BB139EF5CF3C3867139CFA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => Registry.Tree;
		RuntimeObject* L_0;
		L_0 = LockedPackageRegistry_get_Registry_m4B850C75E991B690CBE9F6E18E50DD0B8C93B51A_inline(__this, NULL);
		NullCheck(L_0);
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_1;
		L_1 = InterfaceFuncInvoker0< DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* >::Invoke(0 /* Unity.Services.Core.Internal.DependencyTree Unity.Services.Core.Internal.IPackageRegistry::get_Tree() */, IPackageRegistry_t598A337CA30E50021BB139EF5CF3C3867139CFA2_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void Unity.Services.Core.Internal.LockedPackageRegistry::set_Tree(Unity.Services.Core.Internal.DependencyTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LockedPackageRegistry_set_Tree_m51DD9195FEE8F0E7366F915B039495A797BC1C11 (LockedPackageRegistry_tD44860DBF1971F04B909E49EDEA6B483DD6A8499* __this, DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPackageRegistry_t598A337CA30E50021BB139EF5CF3C3867139CFA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set => Registry.Tree = value;
		RuntimeObject* L_0;
		L_0 = LockedPackageRegistry_get_Registry_m4B850C75E991B690CBE9F6E18E50DD0B8C93B51A_inline(__this, NULL);
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_1 = ___0_value;
		NullCheck(L_0);
		InterfaceActionInvoker1< DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* >::Invoke(1 /* System.Void Unity.Services.Core.Internal.IPackageRegistry::set_Tree(Unity.Services.Core.Internal.DependencyTree) */, IPackageRegistry_t598A337CA30E50021BB139EF5CF3C3867139CFA2_il2cpp_TypeInfo_var, L_0, L_1);
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
// Unity.Services.Core.Internal.DependencyTree Unity.Services.Core.Internal.PackageRegistry::get_Tree()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* PackageRegistry_get_Tree_m346DB9D9068093E382434951B623D2593072E31B (PackageRegistry_tEC69FE10BB71F416B3FFACF803BFAF0EED0448E9* __this, const RuntimeMethod* method) 
{
	{
		// public DependencyTree Tree { get; set; }
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_0 = __this->___U3CTreeU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.PackageRegistry::set_Tree(Unity.Services.Core.Internal.DependencyTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackageRegistry_set_Tree_m812C188D419BEE03291B07E2F0CF20D7BFA6AE0C (PackageRegistry_tEC69FE10BB71F416B3FFACF803BFAF0EED0448E9* __this, DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___0_value, const RuntimeMethod* method) 
{
	{
		// public DependencyTree Tree { get; set; }
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_0 = ___0_value;
		__this->___U3CTreeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTreeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.PackageRegistry::.ctor(Unity.Services.Core.Internal.DependencyTree)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackageRegistry__ctor_m42324D73BCB367393F2C200E417CA235BDB91330 (PackageRegistry_tEC69FE10BB71F416B3FFACF803BFAF0EED0448E9* __this, DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___0_tree, const RuntimeMethod* method) 
{
	{
		// public PackageRegistry(
		//     [CanBeNull] DependencyTree tree)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Tree = tree;
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_0 = ___0_tree;
		PackageRegistry_set_Tree_m812C188D419BEE03291B07E2F0CF20D7BFA6AE0C_inline(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.PackageRegistry::AddComponentDependencyToPackage(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PackageRegistry_AddComponentDependencyToPackage_m930F30EC365AAEE8596E7458AD8C86E73D445812 (PackageRegistry_tEC69FE10BB71F416B3FFACF803BFAF0EED0448E9* __this, int32_t ___0_componentTypeHash, int32_t ___1_packageTypeHash, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m73FCA59D80BFDAFBF320F97A352248A68190C9DC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_0 = NULL;
	bool V_1 = false;
	{
		// var dependencyTypeHashs = Tree.PackageTypeHashToComponentTypeHashDependencies[packageTypeHash];
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_0;
		L_0 = PackageRegistry_get_Tree_m346DB9D9068093E382434951B623D2593072E31B_inline(__this, NULL);
		NullCheck(L_0);
		Dictionary_2_t9899279A2990FB86A896C58A3F27F8E1705785C3* L_1 = L_0->___PackageTypeHashToComponentTypeHashDependencies_2;
		int32_t L_2 = ___1_packageTypeHash;
		NullCheck(L_1);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_3;
		L_3 = Dictionary_2_get_Item_m73FCA59D80BFDAFBF320F97A352248A68190C9DC(L_1, L_2, Dictionary_2_get_Item_m73FCA59D80BFDAFBF320F97A352248A68190C9DC_RuntimeMethod_var);
		V_0 = L_3;
		// if (!dependencyTypeHashs.Contains(componentTypeHash))
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_4 = V_0;
		int32_t L_5 = ___0_componentTypeHash;
		NullCheck(L_4);
		bool L_6;
		L_6 = List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B(L_4, L_5, List_1_Contains_m4FD96E89F15844C90032C7386BAB528817F1FF5B_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_002b;
		}
	}
	{
		// dependencyTypeHashs.Add(componentTypeHash);
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_8 = V_0;
		int32_t L_9 = ___0_componentTypeHash;
		NullCheck(L_8);
		List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_inline(L_8, L_9, List_1_Add_m0248A96C5334E9A93E6994B7780478BCD994EA3D_RuntimeMethod_var);
	}

IL_002b:
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
// Unity.Services.Core.Internal.CoreDiagnostics Unity.Services.Core.Internal.CoreDiagnostics::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* CoreDiagnostics_get_Instance_m190590CB1205EE50B22E6BA144371BD3976C0963 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static CoreDiagnostics Instance { get; internal set; }
		CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* L_0 = ((CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571_StaticFields*)il2cpp_codegen_static_fields_for(CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.CoreDiagnostics::set_Instance(Unity.Services.Core.Internal.CoreDiagnostics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreDiagnostics_set_Instance_mFEA5BC5137F5C737B49419FA33F79339B1D43F2C (CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static CoreDiagnostics Instance { get; internal set; }
		CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* L_0 = ___0_value;
		((CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571_StaticFields*)il2cpp_codegen_static_fields_for(CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571_StaticFields*)il2cpp_codegen_static_fields_for(CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IDictionary`2<System.String,System.String> Unity.Services.Core.Internal.CoreDiagnostics::get_CoreTags()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreDiagnostics_get_CoreTags_mC54A82C01F2093E739ED3991670E8E61ACBE1C20 (CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* __this, const RuntimeMethod* method) 
{
	{
		// public IDictionary<string, string> CoreTags { get; }
		RuntimeObject* L_0 = __this->___U3CCoreTagsU3Ek__BackingField_6;
		return L_0;
	}
}
// Unity.Services.Core.Telemetry.Internal.IDiagnosticsComponentProvider Unity.Services.Core.Internal.CoreDiagnostics::get_DiagnosticsComponentProvider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreDiagnostics_get_DiagnosticsComponentProvider_m3BC40B07EE22926D3F63B98F8F6858C382A253A7 (CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* __this, const RuntimeMethod* method) 
{
	{
		// internal IDiagnosticsComponentProvider DiagnosticsComponentProvider { get; set; }
		RuntimeObject* L_0 = __this->___U3CDiagnosticsComponentProviderU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.CoreDiagnostics::set_DiagnosticsComponentProvider(Unity.Services.Core.Telemetry.Internal.IDiagnosticsComponentProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreDiagnostics_set_DiagnosticsComponentProvider_m4980F8DAE6FC5015B00AB0A083327BDAB8F8A5B3 (CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal IDiagnosticsComponentProvider DiagnosticsComponentProvider { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CDiagnosticsComponentProviderU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDiagnosticsComponentProviderU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// Unity.Services.Core.Telemetry.Internal.IDiagnostics Unity.Services.Core.Internal.CoreDiagnostics::get_Diagnostics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreDiagnostics_get_Diagnostics_m0BCD0E90698D2D4CC6032CF9B747FC95B0C5CE48 (CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* __this, const RuntimeMethod* method) 
{
	{
		// internal IDiagnostics Diagnostics { get; set; }
		RuntimeObject* L_0 = __this->___U3CDiagnosticsU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.CoreDiagnostics::set_Diagnostics(Unity.Services.Core.Telemetry.Internal.IDiagnostics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreDiagnostics_set_Diagnostics_m2AF9AFE612FFCA542EFDB30AC5C15494D2E3982C (CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal IDiagnostics Diagnostics { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CDiagnosticsU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDiagnosticsU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreDiagnostics::SetProjectConfiguration(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreDiagnostics_SetProjectConfiguration_mA70A7004CE8C36FA8E0F17E5529F666D536CF987 (CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* __this, String_t* ___0_serializedProjectConfig, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B522622DB2B42C9E7CC70FC622607A00C62E8B4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// CoreTags[ProjectConfigTagName] = serializedProjectConfig;
		RuntimeObject* L_0;
		L_0 = CoreDiagnostics_get_CoreTags_mC54A82C01F2093E739ED3991670E8E61ACBE1C20_inline(__this, NULL);
		String_t* L_1 = ___0_serializedProjectConfig;
		NullCheck(L_0);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.String>::set_Item(TKey,TValue) */, IDictionary_2_t51DBA2F8AFDC8E5CC588729B12034B8C4D30B0AF_il2cpp_TypeInfo_var, L_0, _stringLiteral5B522622DB2B42C9E7CC70FC622607A00C62E8B4, L_1);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreDiagnostics::SendCircularDependencyDiagnostics(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreDiagnostics_SendCircularDependencyDiagnostics_m9A32DD117AC9C01104B3B3EA17A886C46F6EA858 (CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreDiagnostics_OnSendFailed_mAD6109FFF9114433011F68EA25A054263EA0AE21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEE7A81A087334FE7C472DDEE5F918DC21A765F45);
		s_Il2CppMethodInitialized = true;
	}
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_0 = NULL;
	{
		// var sendTask = SendCoreDiagnosticsAsync(CircularDependencyDiagnosticName, exception);
		Exception_t* L_0 = ___0_exception;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = CoreDiagnostics_SendCoreDiagnosticsAsync_m384C35BCC6830722891A162716770A5D70A41AE7(__this, _stringLiteralEE7A81A087334FE7C472DDEE5F918DC21A765F45, L_0, NULL);
		V_0 = L_1;
		// sendTask.ContinueWith(OnSendFailed, TaskContinuationOptions.OnlyOnFaulted);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2 = V_0;
		Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* L_3 = (Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A*)il2cpp_codegen_object_new(Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mC25101220D4DFE3C39E1A327AD5B6F29A69776B0(L_3, NULL, (intptr_t)((void*)CoreDiagnostics_OnSendFailed_mAD6109FFF9114433011F68EA25A054263EA0AE21_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = Task_ContinueWith_m60AF32F00DBA4A8EBAFD3833E80AD464C8FB91AF(L_2, L_3, ((int32_t)327680), NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreDiagnostics::SendCorePackageInitDiagnostics(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreDiagnostics_SendCorePackageInitDiagnostics_m70FFDD2D365654029B3C75CCDE12A384ED7C1397 (CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreDiagnostics_OnSendFailed_mAD6109FFF9114433011F68EA25A054263EA0AE21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB7C3C03AB41EA8BCBB2E5E76B37C088F0CC4C08);
		s_Il2CppMethodInitialized = true;
	}
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_0 = NULL;
	{
		// var sendTask = SendCoreDiagnosticsAsync(CorePackageInitDiagnosticName, exception);
		Exception_t* L_0 = ___0_exception;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = CoreDiagnostics_SendCoreDiagnosticsAsync_m384C35BCC6830722891A162716770A5D70A41AE7(__this, _stringLiteralDB7C3C03AB41EA8BCBB2E5E76B37C088F0CC4C08, L_0, NULL);
		V_0 = L_1;
		// sendTask.ContinueWith(OnSendFailed, TaskContinuationOptions.OnlyOnFaulted);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2 = V_0;
		Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* L_3 = (Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A*)il2cpp_codegen_object_new(Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mC25101220D4DFE3C39E1A327AD5B6F29A69776B0(L_3, NULL, (intptr_t)((void*)CoreDiagnostics_OnSendFailed_mAD6109FFF9114433011F68EA25A054263EA0AE21_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = Task_ContinueWith_m60AF32F00DBA4A8EBAFD3833E80AD464C8FB91AF(L_2, L_3, ((int32_t)327680), NULL);
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreDiagnostics::SendOperateServicesInitDiagnostics(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreDiagnostics_SendOperateServicesInitDiagnostics_m01E3A52B731604F17403740C31004A83104E8461 (CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* __this, Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreDiagnostics_OnSendFailed_mAD6109FFF9114433011F68EA25A054263EA0AE21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27295DACD5582DC8DD95604ED1649BC8F9ECAADF);
		s_Il2CppMethodInitialized = true;
	}
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* V_0 = NULL;
	{
		// var sendTask = SendCoreDiagnosticsAsync(OperateServicesInitDiagnosticName, exception);
		Exception_t* L_0 = ___0_exception;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = CoreDiagnostics_SendCoreDiagnosticsAsync_m384C35BCC6830722891A162716770A5D70A41AE7(__this, _stringLiteral27295DACD5582DC8DD95604ED1649BC8F9ECAADF, L_0, NULL);
		V_0 = L_1;
		// sendTask.ContinueWith(OnSendFailed, TaskContinuationOptions.OnlyOnFaulted);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_2 = V_0;
		Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A* L_3 = (Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A*)il2cpp_codegen_object_new(Action_1_t5EBB3AEBB9FE27F01C5BD35C3A6AD36CB3AA357A_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Action_1__ctor_mC25101220D4DFE3C39E1A327AD5B6F29A69776B0(L_3, NULL, (intptr_t)((void*)CoreDiagnostics_OnSendFailed_mAD6109FFF9114433011F68EA25A054263EA0AE21_RuntimeMethod_var), NULL);
		NullCheck(L_2);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
		L_4 = Task_ContinueWith_m60AF32F00DBA4A8EBAFD3833E80AD464C8FB91AF(L_2, L_3, ((int32_t)327680), NULL);
		// }
		return;
	}
}
// System.Threading.Tasks.Task Unity.Services.Core.Internal.CoreDiagnostics::SendCoreDiagnosticsAsync(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* CoreDiagnostics_SendCoreDiagnosticsAsync_m384C35BCC6830722891A162716770A5D70A41AE7 (CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* __this, String_t* ___0_diagnosticName, Exception_t* ___1_exception, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CSendCoreDiagnosticsAsyncU3Ed__24_tBD54EAE1168C81C1F5B4169A57653E2519682602_mE943D6C9AA1C237537F08EFB18656E99F0A1C8E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSendCoreDiagnosticsAsyncU3Ed__24_tBD54EAE1168C81C1F5B4169A57653E2519682602_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSendCoreDiagnosticsAsyncU3Ed__24_tBD54EAE1168C81C1F5B4169A57653E2519682602* V_0 = NULL;
	{
		U3CSendCoreDiagnosticsAsyncU3Ed__24_tBD54EAE1168C81C1F5B4169A57653E2519682602* L_0 = (U3CSendCoreDiagnosticsAsyncU3Ed__24_tBD54EAE1168C81C1F5B4169A57653E2519682602*)il2cpp_codegen_object_new(U3CSendCoreDiagnosticsAsyncU3Ed__24_tBD54EAE1168C81C1F5B4169A57653E2519682602_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CSendCoreDiagnosticsAsyncU3Ed__24__ctor_mF977A0D7050CAC9700AE7423B8E15309059208FB(L_0, NULL);
		V_0 = L_0;
		U3CSendCoreDiagnosticsAsyncU3Ed__24_tBD54EAE1168C81C1F5B4169A57653E2519682602* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_2;
		L_2 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CSendCoreDiagnosticsAsyncU3Ed__24_tBD54EAE1168C81C1F5B4169A57653E2519682602* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_4), (void*)__this);
		U3CSendCoreDiagnosticsAsyncU3Ed__24_tBD54EAE1168C81C1F5B4169A57653E2519682602* L_4 = V_0;
		String_t* L_5 = ___0_diagnosticName;
		NullCheck(L_4);
		L_4->___diagnosticName_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___diagnosticName_2), (void*)L_5);
		U3CSendCoreDiagnosticsAsyncU3Ed__24_tBD54EAE1168C81C1F5B4169A57653E2519682602* L_6 = V_0;
		Exception_t* L_7 = ___1_exception;
		NullCheck(L_6);
		L_6->___exception_3 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___exception_3), (void*)L_7);
		U3CSendCoreDiagnosticsAsyncU3Ed__24_tBD54EAE1168C81C1F5B4169A57653E2519682602* L_8 = V_0;
		NullCheck(L_8);
		L_8->___U3CU3E1__state_0 = (-1);
		U3CSendCoreDiagnosticsAsyncU3Ed__24_tBD54EAE1168C81C1F5B4169A57653E2519682602* L_9 = V_0;
		NullCheck(L_9);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_10 = (&L_9->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CSendCoreDiagnosticsAsyncU3Ed__24_tBD54EAE1168C81C1F5B4169A57653E2519682602_mE943D6C9AA1C237537F08EFB18656E99F0A1C8E7(L_10, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CSendCoreDiagnosticsAsyncU3Ed__24_tBD54EAE1168C81C1F5B4169A57653E2519682602_mE943D6C9AA1C237537F08EFB18656E99F0A1C8E7_RuntimeMethod_var);
		U3CSendCoreDiagnosticsAsyncU3Ed__24_tBD54EAE1168C81C1F5B4169A57653E2519682602* L_11 = V_0;
		NullCheck(L_11);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_12 = (&L_11->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_13;
		L_13 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_12, NULL);
		return L_13;
	}
}
// System.Void Unity.Services.Core.Internal.CoreDiagnostics::OnSendFailed(System.Threading.Tasks.Task)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreDiagnostics_OnSendFailed_mAD6109FFF9114433011F68EA25A054263EA0AE21 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_failedSendTask, const RuntimeMethod* method) 
{
	{
		// CoreLogger.LogException(failedSendTask.Exception);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = ___0_failedSendTask;
		NullCheck(L_0);
		AggregateException_t51B6205846DFB356B94452702201DD239D44422F* L_1;
		L_1 = Task_get_Exception_m11317CABA220E351C84B3E94B8A98F1565F42B45(L_0, NULL);
		CoreLogger_LogException_m7129C6F678E086232211CBC0347F2300D0A42F3C(L_1, NULL);
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<Unity.Services.Core.Telemetry.Internal.IDiagnostics> Unity.Services.Core.Internal.CoreDiagnostics::GetOrCreateDiagnosticsAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t7E11A949B0612EC938C5CBD9E723725819BC441E* CoreDiagnostics_GetOrCreateDiagnosticsAsync_mA2C6BC3077D3EF4104FDE4C9BA26D4B8E640CFE2 (CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m87FD370A0EBF4A65E6C3533E61C4484920815909_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CGetOrCreateDiagnosticsAsyncU3Ed__26_tAB11C3722F9B7391AAF98FE98D8F1770EBA1E4E5_mF680325A89DBCA7431662B2318B23FCFBC0231A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mE540E124DCE7F1CB8696F83A177766A36660B22B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_tAC33E355F01002DF8E0EFE1A1A42BE37728E8ABA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CGetOrCreateDiagnosticsAsyncU3Ed__26_tAB11C3722F9B7391AAF98FE98D8F1770EBA1E4E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetOrCreateDiagnosticsAsyncU3Ed__26_tAB11C3722F9B7391AAF98FE98D8F1770EBA1E4E5* V_0 = NULL;
	{
		U3CGetOrCreateDiagnosticsAsyncU3Ed__26_tAB11C3722F9B7391AAF98FE98D8F1770EBA1E4E5* L_0 = (U3CGetOrCreateDiagnosticsAsyncU3Ed__26_tAB11C3722F9B7391AAF98FE98D8F1770EBA1E4E5*)il2cpp_codegen_object_new(U3CGetOrCreateDiagnosticsAsyncU3Ed__26_tAB11C3722F9B7391AAF98FE98D8F1770EBA1E4E5_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CGetOrCreateDiagnosticsAsyncU3Ed__26__ctor_m97EC7135A6CCAB1C5779C4E0FD89EC096340EB2F(L_0, NULL);
		V_0 = L_0;
		U3CGetOrCreateDiagnosticsAsyncU3Ed__26_tAB11C3722F9B7391AAF98FE98D8F1770EBA1E4E5* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_tAC33E355F01002DF8E0EFE1A1A42BE37728E8ABA_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_tAC33E355F01002DF8E0EFE1A1A42BE37728E8ABA L_2;
		L_2 = AsyncTaskMethodBuilder_1_Create_m87FD370A0EBF4A65E6C3533E61C4484920815909(AsyncTaskMethodBuilder_1_Create_m87FD370A0EBF4A65E6C3533E61C4484920815909_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CGetOrCreateDiagnosticsAsyncU3Ed__26_tAB11C3722F9B7391AAF98FE98D8F1770EBA1E4E5* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_2), (void*)__this);
		U3CGetOrCreateDiagnosticsAsyncU3Ed__26_tAB11C3722F9B7391AAF98FE98D8F1770EBA1E4E5* L_4 = V_0;
		NullCheck(L_4);
		L_4->___U3CU3E1__state_0 = (-1);
		U3CGetOrCreateDiagnosticsAsyncU3Ed__26_tAB11C3722F9B7391AAF98FE98D8F1770EBA1E4E5* L_5 = V_0;
		NullCheck(L_5);
		AsyncTaskMethodBuilder_1_tAC33E355F01002DF8E0EFE1A1A42BE37728E8ABA* L_6 = (&L_5->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CGetOrCreateDiagnosticsAsyncU3Ed__26_tAB11C3722F9B7391AAF98FE98D8F1770EBA1E4E5_mF680325A89DBCA7431662B2318B23FCFBC0231A8(L_6, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CGetOrCreateDiagnosticsAsyncU3Ed__26_tAB11C3722F9B7391AAF98FE98D8F1770EBA1E4E5_mF680325A89DBCA7431662B2318B23FCFBC0231A8_RuntimeMethod_var);
		U3CGetOrCreateDiagnosticsAsyncU3Ed__26_tAB11C3722F9B7391AAF98FE98D8F1770EBA1E4E5* L_7 = V_0;
		NullCheck(L_7);
		AsyncTaskMethodBuilder_1_tAC33E355F01002DF8E0EFE1A1A42BE37728E8ABA* L_8 = (&L_7->___U3CU3Et__builder_1);
		Task_1_t7E11A949B0612EC938C5CBD9E723725819BC441E* L_9;
		L_9 = AsyncTaskMethodBuilder_1_get_Task_mE540E124DCE7F1CB8696F83A177766A36660B22B(L_8, AsyncTaskMethodBuilder_1_get_Task_mE540E124DCE7F1CB8696F83A177766A36660B22B_RuntimeMethod_var);
		return L_9;
	}
}
// System.Void Unity.Services.Core.Internal.CoreDiagnostics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreDiagnostics__ctor_mFCD549A6812E3CEAB8A7E42B75A777F9061B3330 (CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// = new Dictionary<string, string>();
		Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83* L_0 = (Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83*)il2cpp_codegen_object_new(Dictionary_2_t46B2DB028096FA2B828359E52F37F3105A83AD83_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052(L_0, Dictionary_2__ctor_m768E076F1E804CE4959F4E71D3E6A9ADE2F55052_RuntimeMethod_var);
		__this->___U3CCoreTagsU3Ek__BackingField_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CCoreTagsU3Ek__BackingField_6), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Unity.Services.Core.Internal.CoreDiagnostics/<SendCoreDiagnosticsAsync>d__24::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendCoreDiagnosticsAsyncU3Ed__24__ctor_mF977A0D7050CAC9700AE7423B8E15309059208FB (U3CSendCoreDiagnosticsAsyncU3Ed__24_tBD54EAE1168C81C1F5B4169A57653E2519682602* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreDiagnostics/<SendCoreDiagnosticsAsync>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendCoreDiagnosticsAsyncU3Ed__24_MoveNext_m814AC3E16A712FE76D7F4751D1FC7ED0DC4A1BF0 (U3CSendCoreDiagnosticsAsyncU3Ed__24_tBD54EAE1168C81C1F5B4169A57653E2519682602* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1A1F7733EB9E664C127E34842037B68E5D063862_TisU3CSendCoreDiagnosticsAsyncU3Ed__24_tBD54EAE1168C81C1F5B4169A57653E2519682602_m2A36ED4EF84CA5172A2A2D36C4397976A2347E4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDiagnostics_tC5C252A201DC608FD4FA8B95CB546ACE5400345E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mA69D647361B1C913C8965C30709C140E70F96285_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_m2A73A8B5A6C224F724151A09FFB30197550443F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mA9635B16BD399B9B78349D3FE093048FC3DBAAEA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_1_t1A1F7733EB9E664C127E34842037B68E5D063862 V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CSendCoreDiagnosticsAsyncU3Ed__24_tBD54EAE1168C81C1F5B4169A57653E2519682602* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	RuntimeObject* G_B9_0 = NULL;
	RuntimeObject* G_B8_0 = NULL;
	Exception_t* G_B11_0 = NULL;
	String_t* G_B11_1 = NULL;
	RuntimeObject* G_B11_2 = NULL;
	Exception_t* G_B10_0 = NULL;
	String_t* G_B10_1 = NULL;
	RuntimeObject* G_B10_2 = NULL;
	String_t* G_B12_0 = NULL;
	String_t* G_B12_1 = NULL;
	RuntimeObject* G_B12_2 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_0050_1;
		}

IL_000e_1:
		{
			// var diagnostics = await GetOrCreateDiagnosticsAsync();
			CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* L_2 = __this->___U3CU3E4__this_4;
			NullCheck(L_2);
			Task_1_t7E11A949B0612EC938C5CBD9E723725819BC441E* L_3;
			L_3 = CoreDiagnostics_GetOrCreateDiagnosticsAsync_mA2C6BC3077D3EF4104FDE4C9BA26D4B8E640CFE2(L_2, NULL);
			NullCheck(L_3);
			TaskAwaiter_1_t1A1F7733EB9E664C127E34842037B68E5D063862 L_4;
			L_4 = Task_1_GetAwaiter_mA9635B16BD399B9B78349D3FE093048FC3DBAAEA(L_3, Task_1_GetAwaiter_mA9635B16BD399B9B78349D3FE093048FC3DBAAEA_RuntimeMethod_var);
			V_1 = L_4;
			bool L_5;
			L_5 = TaskAwaiter_1_get_IsCompleted_m2A73A8B5A6C224F724151A09FFB30197550443F3((&V_1), TaskAwaiter_1_get_IsCompleted_m2A73A8B5A6C224F724151A09FFB30197550443F3_RuntimeMethod_var);
			if (L_5)
			{
				goto IL_006c_1;
			}
		}
		{
			int32_t L_6 = 0;
			V_0 = L_6;
			__this->___U3CU3E1__state_0 = L_6;
			TaskAwaiter_1_t1A1F7733EB9E664C127E34842037B68E5D063862 L_7 = V_1;
			__this->___U3CU3Eu__1_7 = L_7;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_7))->___m_task_0), (void*)NULL);
			V_2 = __this;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_8 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1A1F7733EB9E664C127E34842037B68E5D063862_TisU3CSendCoreDiagnosticsAsyncU3Ed__24_tBD54EAE1168C81C1F5B4169A57653E2519682602_m2A36ED4EF84CA5172A2A2D36C4397976A2347E4D(L_8, (&V_1), (&V_2), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t1A1F7733EB9E664C127E34842037B68E5D063862_TisU3CSendCoreDiagnosticsAsyncU3Ed__24_tBD54EAE1168C81C1F5B4169A57653E2519682602_m2A36ED4EF84CA5172A2A2D36C4397976A2347E4D_RuntimeMethod_var);
			goto IL_00fd;
		}

IL_0050_1:
		{
			TaskAwaiter_1_t1A1F7733EB9E664C127E34842037B68E5D063862 L_9 = __this->___U3CU3Eu__1_7;
			V_1 = L_9;
			TaskAwaiter_1_t1A1F7733EB9E664C127E34842037B68E5D063862* L_10 = (&__this->___U3CU3Eu__1_7);
			il2cpp_codegen_initobj(L_10, sizeof(TaskAwaiter_1_t1A1F7733EB9E664C127E34842037B68E5D063862));
			int32_t L_11 = (-1);
			V_0 = L_11;
			__this->___U3CU3E1__state_0 = L_11;
		}

IL_006c_1:
		{
			RuntimeObject* L_12;
			L_12 = TaskAwaiter_1_GetResult_mA69D647361B1C913C8965C30709C140E70F96285((&V_1), TaskAwaiter_1_GetResult_mA69D647361B1C913C8965C30709C140E70F96285_RuntimeMethod_var);
			__this->___U3CU3Es__2_6 = L_12;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_6), (void*)L_12);
			RuntimeObject* L_13 = __this->___U3CU3Es__2_6;
			__this->___U3CdiagnosticsU3E5__1_5 = L_13;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdiagnosticsU3E5__1_5), (void*)L_13);
			__this->___U3CU3Es__2_6 = (RuntimeObject*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_6), (void*)(RuntimeObject*)NULL);
			// diagnostics?.SendDiagnostic(diagnosticName, exception?.ToString(), CoreTags);
			RuntimeObject* L_14 = __this->___U3CdiagnosticsU3E5__1_5;
			RuntimeObject* L_15 = L_14;
			G_B8_0 = L_15;
			if (L_15)
			{
				G_B9_0 = L_15;
				goto IL_0098_1;
			}
		}
		{
			goto IL_00c1_1;
		}

IL_0098_1:
		{
			String_t* L_16 = __this->___diagnosticName_2;
			Exception_t* L_17 = __this->___exception_3;
			Exception_t* L_18 = L_17;
			G_B10_0 = L_18;
			G_B10_1 = L_16;
			G_B10_2 = G_B9_0;
			if (L_18)
			{
				G_B11_0 = L_18;
				G_B11_1 = L_16;
				G_B11_2 = G_B9_0;
				goto IL_00ab_1;
			}
		}
		{
			G_B12_0 = ((String_t*)(NULL));
			G_B12_1 = G_B10_1;
			G_B12_2 = G_B10_2;
			goto IL_00b0_1;
		}

IL_00ab_1:
		{
			NullCheck(G_B11_0);
			String_t* L_19;
			L_19 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B11_0);
			G_B12_0 = L_19;
			G_B12_1 = G_B11_1;
			G_B12_2 = G_B11_2;
		}

IL_00b0_1:
		{
			CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* L_20 = __this->___U3CU3E4__this_4;
			NullCheck(L_20);
			RuntimeObject* L_21;
			L_21 = CoreDiagnostics_get_CoreTags_mC54A82C01F2093E739ED3991670E8E61ACBE1C20_inline(L_20, NULL);
			NullCheck(G_B12_2);
			InterfaceActionInvoker3< String_t*, String_t*, RuntimeObject* >::Invoke(0 /* System.Void Unity.Services.Core.Telemetry.Internal.IDiagnostics::SendDiagnostic(System.String,System.String,System.Collections.Generic.IDictionary`2<System.String,System.String>) */, IDiagnostics_tC5C252A201DC608FD4FA8B95CB546ACE5400345E_il2cpp_TypeInfo_var, G_B12_2, G_B12_1, G_B12_0, L_21);
		}

IL_00c1_1:
		{
			goto IL_00e2;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00c3;
		}
		throw e;
	}

CATCH_00c3:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CdiagnosticsU3E5__1_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdiagnosticsU3E5__1_5), (void*)(RuntimeObject*)NULL);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_22 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_23 = V_3;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_22, L_23, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00fd;
	}// end catch (depth: 1)

IL_00e2:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CdiagnosticsU3E5__1_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdiagnosticsU3E5__1_5), (void*)(RuntimeObject*)NULL);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_24 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_24, NULL);
	}

IL_00fd:
	{
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreDiagnostics/<SendCoreDiagnosticsAsync>d__24::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSendCoreDiagnosticsAsyncU3Ed__24_SetStateMachine_m001FBAB9203E0C0F8DA04AB2EB57966CDE5FD838 (U3CSendCoreDiagnosticsAsyncU3Ed__24_tBD54EAE1168C81C1F5B4169A57653E2519682602* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
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
// System.Void Unity.Services.Core.Internal.CoreDiagnostics/<GetOrCreateDiagnosticsAsync>d__26::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetOrCreateDiagnosticsAsyncU3Ed__26__ctor_m97EC7135A6CCAB1C5779C4E0FD89EC096340EB2F (U3CGetOrCreateDiagnosticsAsyncU3Ed__26_tAB11C3722F9B7391AAF98FE98D8F1770EBA1E4E5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreDiagnostics/<GetOrCreateDiagnosticsAsync>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetOrCreateDiagnosticsAsyncU3Ed__26_MoveNext_m49BB8D9D5179C83C852EA6F9FD5A269613153ECC (U3CGetOrCreateDiagnosticsAsyncU3Ed__26_tAB11C3722F9B7391AAF98FE98D8F1770EBA1E4E5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CGetOrCreateDiagnosticsAsyncU3Ed__26_tAB11C3722F9B7391AAF98FE98D8F1770EBA1E4E5_m1A884D29A8718F2E1B4ED80AE8EF60CCF3097711_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tBFA82CA55CD8557D18B6898AF6B0A0A99BD72E51_TisU3CGetOrCreateDiagnosticsAsyncU3Ed__26_tAB11C3722F9B7391AAF98FE98D8F1770EBA1E4E5_m049C389067C32D223B0306C0056C32F8A8F3C1AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_mB4CC5FE74E6EF861C367C4AE42B6D3ABA866EE09_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDiagnosticsComponentProvider_t8F3AE277C8397FA813C6811A96820EFCE6417C41_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDiagnosticsFactory_t5DBE289089E6EAD4C111F0D8880F3FE812BE2CC0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m5C6D8811EE0550DCAFA7CF0DB421D4B08EC79C34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mAC7F0C79B827DABCA2DB39A48B8A7BD88CF92FD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mB121C97207C4A962A8683FD039BAB8D65127BEF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9EFC4E3BFC701CF3C9A03ED0C0CFA12327C22B8);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	TaskAwaiter_1_tBFA82CA55CD8557D18B6898AF6B0A0A99BD72E51 V_4;
	memset((&V_4), 0, sizeof(V_4));
	U3CGetOrCreateDiagnosticsAsyncU3Ed__26_tAB11C3722F9B7391AAF98FE98D8F1770EBA1E4E5* V_5 = NULL;
	TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 V_6;
	memset((&V_6), 0, sizeof(V_6));
	Exception_t* V_7 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0017_1;
			}
		}
		{
			goto IL_001c_1;
		}

IL_0012_1:
		{
			goto IL_00a7_1;
		}

IL_0017_1:
		{
			goto IL_0149_1;
		}

IL_001c_1:
		{
			// if (!(Diagnostics is null))
			CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* L_3 = __this->___U3CU3E4__this_2;
			NullCheck(L_3);
			RuntimeObject* L_4;
			L_4 = CoreDiagnostics_get_Diagnostics_m0BCD0E90698D2D4CC6032CF9B747FC95B0C5CE48_inline(L_3, NULL);
			V_2 = (bool)((((int32_t)((((RuntimeObject*)(RuntimeObject*)L_4) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_5 = V_2;
			if (!L_5)
			{
				goto IL_0044_1;
			}
		}
		{
			// return Diagnostics;
			CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* L_6 = __this->___U3CU3E4__this_2;
			NullCheck(L_6);
			RuntimeObject* L_7;
			L_7 = CoreDiagnostics_get_Diagnostics_m0BCD0E90698D2D4CC6032CF9B747FC95B0C5CE48_inline(L_6, NULL);
			V_1 = L_7;
			goto IL_01bb;
		}

IL_0044_1:
		{
			// if (DiagnosticsComponentProvider is null)
			CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* L_8 = __this->___U3CU3E4__this_2;
			NullCheck(L_8);
			RuntimeObject* L_9;
			L_9 = CoreDiagnostics_get_DiagnosticsComponentProvider_m3BC40B07EE22926D3F63B98F8F6858C382A253A7_inline(L_8, NULL);
			V_3 = (bool)((((RuntimeObject*)(RuntimeObject*)L_9) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
			bool L_10 = V_3;
			if (!L_10)
			{
				goto IL_005e_1;
			}
		}
		{
			// return null;
			V_1 = (RuntimeObject*)NULL;
			goto IL_01bb;
		}

IL_005e_1:
		{
			// var diagnosticFactory = await DiagnosticsComponentProvider.CreateDiagnosticsComponents();
			CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* L_11 = __this->___U3CU3E4__this_2;
			NullCheck(L_11);
			RuntimeObject* L_12;
			L_12 = CoreDiagnostics_get_DiagnosticsComponentProvider_m3BC40B07EE22926D3F63B98F8F6858C382A253A7_inline(L_11, NULL);
			NullCheck(L_12);
			Task_1_t4B1C4BF4F9776B675A807CB47E9EF3EF35A0048A* L_13;
			L_13 = InterfaceFuncInvoker0< Task_1_t4B1C4BF4F9776B675A807CB47E9EF3EF35A0048A* >::Invoke(0 /* System.Threading.Tasks.Task`1<Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory> Unity.Services.Core.Telemetry.Internal.IDiagnosticsComponentProvider::CreateDiagnosticsComponents() */, IDiagnosticsComponentProvider_t8F3AE277C8397FA813C6811A96820EFCE6417C41_il2cpp_TypeInfo_var, L_12);
			NullCheck(L_13);
			TaskAwaiter_1_tBFA82CA55CD8557D18B6898AF6B0A0A99BD72E51 L_14;
			L_14 = Task_1_GetAwaiter_mB121C97207C4A962A8683FD039BAB8D65127BEF1(L_13, Task_1_GetAwaiter_mB121C97207C4A962A8683FD039BAB8D65127BEF1_RuntimeMethod_var);
			V_4 = L_14;
			bool L_15;
			L_15 = TaskAwaiter_1_get_IsCompleted_mAC7F0C79B827DABCA2DB39A48B8A7BD88CF92FD8((&V_4), TaskAwaiter_1_get_IsCompleted_mAC7F0C79B827DABCA2DB39A48B8A7BD88CF92FD8_RuntimeMethod_var);
			if (L_15)
			{
				goto IL_00c4_1;
			}
		}
		{
			int32_t L_16 = 0;
			V_0 = L_16;
			__this->___U3CU3E1__state_0 = L_16;
			TaskAwaiter_1_tBFA82CA55CD8557D18B6898AF6B0A0A99BD72E51 L_17 = V_4;
			__this->___U3CU3Eu__1_6 = L_17;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_6))->___m_task_0), (void*)NULL);
			V_5 = __this;
			AsyncTaskMethodBuilder_1_tAC33E355F01002DF8E0EFE1A1A42BE37728E8ABA* L_18 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tBFA82CA55CD8557D18B6898AF6B0A0A99BD72E51_TisU3CGetOrCreateDiagnosticsAsyncU3Ed__26_tAB11C3722F9B7391AAF98FE98D8F1770EBA1E4E5_m049C389067C32D223B0306C0056C32F8A8F3C1AE(L_18, (&V_4), (&V_5), AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_tBFA82CA55CD8557D18B6898AF6B0A0A99BD72E51_TisU3CGetOrCreateDiagnosticsAsyncU3Ed__26_tAB11C3722F9B7391AAF98FE98D8F1770EBA1E4E5_m049C389067C32D223B0306C0056C32F8A8F3C1AE_RuntimeMethod_var);
			goto IL_01d7;
		}

IL_00a7_1:
		{
			TaskAwaiter_1_tBFA82CA55CD8557D18B6898AF6B0A0A99BD72E51 L_19 = __this->___U3CU3Eu__1_6;
			V_4 = L_19;
			TaskAwaiter_1_tBFA82CA55CD8557D18B6898AF6B0A0A99BD72E51* L_20 = (&__this->___U3CU3Eu__1_6);
			il2cpp_codegen_initobj(L_20, sizeof(TaskAwaiter_1_tBFA82CA55CD8557D18B6898AF6B0A0A99BD72E51));
			int32_t L_21 = (-1);
			V_0 = L_21;
			__this->___U3CU3E1__state_0 = L_21;
		}

IL_00c4_1:
		{
			RuntimeObject* L_22;
			L_22 = TaskAwaiter_1_GetResult_m5C6D8811EE0550DCAFA7CF0DB421D4B08EC79C34((&V_4), TaskAwaiter_1_GetResult_m5C6D8811EE0550DCAFA7CF0DB421D4B08EC79C34_RuntimeMethod_var);
			__this->___U3CU3Es__2_4 = L_22;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_4), (void*)L_22);
			RuntimeObject* L_23 = __this->___U3CU3Es__2_4;
			__this->___U3CdiagnosticFactoryU3E5__1_3 = L_23;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdiagnosticFactoryU3E5__1_3), (void*)L_23);
			__this->___U3CU3Es__2_4 = (RuntimeObject*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_4), (void*)(RuntimeObject*)NULL);
			// Diagnostics = diagnosticFactory.Create(CorePackageName);
			CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* L_24 = __this->___U3CU3E4__this_2;
			RuntimeObject* L_25 = __this->___U3CdiagnosticFactoryU3E5__1_3;
			NullCheck(L_25);
			RuntimeObject* L_26;
			L_26 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(1 /* Unity.Services.Core.Telemetry.Internal.IDiagnostics Unity.Services.Core.Telemetry.Internal.IDiagnosticsFactory::Create(System.String) */, IDiagnosticsFactory_t5DBE289089E6EAD4C111F0D8880F3FE812BE2CC0_il2cpp_TypeInfo_var, L_25, _stringLiteralB9EFC4E3BFC701CF3C9A03ED0C0CFA12327C22B8);
			NullCheck(L_24);
			CoreDiagnostics_set_Diagnostics_m2AF9AFE612FFCA542EFDB30AC5C15494D2E3982C_inline(L_24, L_26, NULL);
			// SetProjectConfiguration(await DiagnosticsComponentProvider.GetSerializedProjectConfigurationAsync());
			CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* L_27 = __this->___U3CU3E4__this_2;
			NullCheck(L_27);
			RuntimeObject* L_28;
			L_28 = CoreDiagnostics_get_DiagnosticsComponentProvider_m3BC40B07EE22926D3F63B98F8F6858C382A253A7_inline(L_27, NULL);
			NullCheck(L_28);
			Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_29;
			L_29 = InterfaceFuncInvoker0< Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* >::Invoke(1 /* System.Threading.Tasks.Task`1<System.String> Unity.Services.Core.Telemetry.Internal.IDiagnosticsComponentProvider::GetSerializedProjectConfigurationAsync() */, IDiagnosticsComponentProvider_t8F3AE277C8397FA813C6811A96820EFCE6417C41_il2cpp_TypeInfo_var, L_28);
			NullCheck(L_29);
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_30;
			L_30 = Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F(L_29, Task_1_GetAwaiter_m7727657658441E9D4CE9D3F8B532F9D65CB9CE1F_RuntimeMethod_var);
			V_6 = L_30;
			bool L_31;
			L_31 = TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8((&V_6), TaskAwaiter_1_get_IsCompleted_mE207C5509602B0BB59366E53CED6CC9B10A1F8A8_RuntimeMethod_var);
			if (L_31)
			{
				goto IL_0166_1;
			}
		}
		{
			int32_t L_32 = 1;
			V_0 = L_32;
			__this->___U3CU3E1__state_0 = L_32;
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_33 = V_6;
			__this->___U3CU3Eu__2_7 = L_33;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_7))->___m_task_0), (void*)NULL);
			V_5 = __this;
			AsyncTaskMethodBuilder_1_tAC33E355F01002DF8E0EFE1A1A42BE37728E8ABA* L_34 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CGetOrCreateDiagnosticsAsyncU3Ed__26_tAB11C3722F9B7391AAF98FE98D8F1770EBA1E4E5_m1A884D29A8718F2E1B4ED80AE8EF60CCF3097711(L_34, (&V_6), (&V_5), AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6_TisU3CGetOrCreateDiagnosticsAsyncU3Ed__26_tAB11C3722F9B7391AAF98FE98D8F1770EBA1E4E5_m1A884D29A8718F2E1B4ED80AE8EF60CCF3097711_RuntimeMethod_var);
			goto IL_01d7;
		}

IL_0149_1:
		{
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6 L_35 = __this->___U3CU3Eu__2_7;
			V_6 = L_35;
			TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6* L_36 = (&__this->___U3CU3Eu__2_7);
			il2cpp_codegen_initobj(L_36, sizeof(TaskAwaiter_1_t254638BB1FAD695D9A9542E098A189D438A000F6));
			int32_t L_37 = (-1);
			V_0 = L_37;
			__this->___U3CU3E1__state_0 = L_37;
		}

IL_0166_1:
		{
			String_t* L_38;
			L_38 = TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9((&V_6), TaskAwaiter_1_GetResult_m82A392802A854576DC9525B87B0053B56201ABB9_RuntimeMethod_var);
			__this->___U3CU3Es__3_5 = L_38;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_5), (void*)L_38);
			CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* L_39 = __this->___U3CU3E4__this_2;
			String_t* L_40 = __this->___U3CU3Es__3_5;
			NullCheck(L_39);
			CoreDiagnostics_SetProjectConfiguration_mA70A7004CE8C36FA8E0F17E5529F666D536CF987(L_39, L_40, NULL);
			__this->___U3CU3Es__3_5 = (String_t*)NULL;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__3_5), (void*)(String_t*)NULL);
			// return Diagnostics;
			CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* L_41 = __this->___U3CU3E4__this_2;
			NullCheck(L_41);
			RuntimeObject* L_42;
			L_42 = CoreDiagnostics_get_Diagnostics_m0BCD0E90698D2D4CC6032CF9B747FC95B0C5CE48_inline(L_41, NULL);
			V_1 = L_42;
			goto IL_01bb;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_019a;
		}
		throw e;
	}

CATCH_019a:
	{// begin catch(System.Exception)
		V_7 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CdiagnosticFactoryU3E5__1_3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdiagnosticFactoryU3E5__1_3), (void*)(RuntimeObject*)NULL);
		AsyncTaskMethodBuilder_1_tAC33E355F01002DF8E0EFE1A1A42BE37728E8ABA* L_43 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_44 = V_7;
		AsyncTaskMethodBuilder_1_SetException_m1472BDD400D3D9DA02202D6C4CA09042E6B22786(L_43, L_44, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m1472BDD400D3D9DA02202D6C4CA09042E6B22786_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01d7;
	}// end catch (depth: 1)

IL_01bb:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CdiagnosticFactoryU3E5__1_3 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CdiagnosticFactoryU3E5__1_3), (void*)(RuntimeObject*)NULL);
		AsyncTaskMethodBuilder_1_tAC33E355F01002DF8E0EFE1A1A42BE37728E8ABA* L_45 = (&__this->___U3CU3Et__builder_1);
		RuntimeObject* L_46 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_mB4CC5FE74E6EF861C367C4AE42B6D3ABA866EE09(L_45, L_46, AsyncTaskMethodBuilder_1_SetResult_mB4CC5FE74E6EF861C367C4AE42B6D3ABA866EE09_RuntimeMethod_var);
	}

IL_01d7:
	{
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreDiagnostics/<GetOrCreateDiagnosticsAsync>d__26::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetOrCreateDiagnosticsAsyncU3Ed__26_SetStateMachine_m585A57FDF4B14229883605019BE52545E830F839 (U3CGetOrCreateDiagnosticsAsyncU3Ed__26_tAB11C3722F9B7391AAF98FE98D8F1770EBA1E4E5* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
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
// Unity.Services.Core.Internal.CoreMetrics Unity.Services.Core.Internal.CoreMetrics::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* CoreMetrics_get_Instance_mE2CA807AAB4F16D20C28256A23E407E5DF5DE74E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static CoreMetrics Instance { get; internal set; }
		CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* L_0 = ((CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564_StaticFields*)il2cpp_codegen_static_fields_for(CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.CoreMetrics::set_Instance(Unity.Services.Core.Internal.CoreMetrics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreMetrics_set_Instance_mC18703DE5A475E77CBA000AA1602A2A9305AEFD2 (CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static CoreMetrics Instance { get; internal set; }
		CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* L_0 = ___0_value;
		((CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564_StaticFields*)il2cpp_codegen_static_fields_for(CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564_StaticFields*)il2cpp_codegen_static_fields_for(CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
// Unity.Services.Core.Telemetry.Internal.IMetrics Unity.Services.Core.Internal.CoreMetrics::get_Metrics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreMetrics_get_Metrics_m083DD23C26E29687AE75738D8C57A507082F5329 (CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* __this, const RuntimeMethod* method) 
{
	{
		// internal IMetrics Metrics { get; set; }
		RuntimeObject* L_0 = __this->___U3CMetricsU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.CoreMetrics::set_Metrics(Unity.Services.Core.Telemetry.Internal.IMetrics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreMetrics_set_Metrics_mCC95B75592115A7250E45CDCBF77A62DDED6F1FB (CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal IMetrics Metrics { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMetricsU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMetricsU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
// System.Collections.Generic.IDictionary`2<System.Type,Unity.Services.Core.Telemetry.Internal.IMetrics> Unity.Services.Core.Internal.CoreMetrics::get_AllPackageMetrics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CoreMetrics_get_AllPackageMetrics_mAD22D81A59A7B591E50AAF078BF97FFD55E61AF0 (CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* __this, const RuntimeMethod* method) 
{
	{
		// internal IDictionary<Type, IMetrics> AllPackageMetrics { get; }
		RuntimeObject* L_0 = __this->___U3CAllPackageMetricsU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.CoreMetrics::SendAllPackagesInitSuccessMetric()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreMetrics_SendAllPackagesInitSuccessMetric_m6A0C4AD97DA5F22FCA1723F91096E1AC63400AC1 (CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetrics_tA68E45B18912AD74792533F57895E50599D4A7D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral030AB8A2EB6A82B47D04D6636E0EA938F2D78F11);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (Metrics is null)
		RuntimeObject* L_0;
		L_0 = CoreMetrics_get_Metrics_m083DD23C26E29687AE75738D8C57A507082F5329_inline(__this, NULL);
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_002f;
	}

IL_0012:
	{
		// Metrics.SendSumMetric(AllPackagesInitSuccessMetricName);
		RuntimeObject* L_2;
		L_2 = CoreMetrics_get_Metrics_m083DD23C26E29687AE75738D8C57A507082F5329_inline(__this, NULL);
		NullCheck(L_2);
		InterfaceActionInvoker3< String_t*, double, RuntimeObject* >::Invoke(2 /* System.Void Unity.Services.Core.Telemetry.Internal.IMetrics::SendSumMetric(System.String,System.Double,System.Collections.Generic.IDictionary`2<System.String,System.String>) */, IMetrics_tA68E45B18912AD74792533F57895E50599D4A7D5_il2cpp_TypeInfo_var, L_2, _stringLiteral030AB8A2EB6A82B47D04D6636E0EA938F2D78F11, (1.0), (RuntimeObject*)NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreMetrics::SendAllPackagesInitTimeMetric(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreMetrics_SendAllPackagesInitTimeMetric_m28BB6D84801BEFC36F21D22D148C2C53C19456C6 (CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* __this, double ___0_initTimeSeconds, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetrics_tA68E45B18912AD74792533F57895E50599D4A7D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00AEDB4EA07BB4CA190DED1D7DEC75DE187AB687);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (Metrics is null)
		RuntimeObject* L_0;
		L_0 = CoreMetrics_get_Metrics_m083DD23C26E29687AE75738D8C57A507082F5329_inline(__this, NULL);
		V_0 = (bool)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_0027;
	}

IL_0012:
	{
		// Metrics.SendHistogramMetric(AllPackagesInitTimeMetricName, initTimeSeconds);
		RuntimeObject* L_2;
		L_2 = CoreMetrics_get_Metrics_m083DD23C26E29687AE75738D8C57A507082F5329_inline(__this, NULL);
		double L_3 = ___0_initTimeSeconds;
		NullCheck(L_2);
		InterfaceActionInvoker3< String_t*, double, RuntimeObject* >::Invoke(1 /* System.Void Unity.Services.Core.Telemetry.Internal.IMetrics::SendHistogramMetric(System.String,System.Double,System.Collections.Generic.IDictionary`2<System.String,System.String>) */, IMetrics_tA68E45B18912AD74792533F57895E50599D4A7D5_il2cpp_TypeInfo_var, L_2, _stringLiteral00AEDB4EA07BB4CA190DED1D7DEC75DE187AB687, L_3, (RuntimeObject*)NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreMetrics::SendInitTimeMetricForPackage(System.Type,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreMetrics_SendInitTimeMetricForPackage_m20190AC644BB9982E2833904EFE519C088EA566F (CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* __this, Type_t* ___0_packageType, double ___1_initTimeSeconds, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tBA4E97BEE1E9C159A2989A0ACE0C74405646B6EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetrics_tA68E45B18912AD74792533F57895E50599D4A7D5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral860A8D6E0621FF04D34DD0BDB8DAEB769BD82049);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// if (AllPackageMetrics.TryGetValue(packageType, out var metric))
		RuntimeObject* L_0;
		L_0 = CoreMetrics_get_AllPackageMetrics_mAD22D81A59A7B591E50AAF078BF97FFD55E61AF0_inline(__this, NULL);
		Type_t* L_1 = ___0_packageType;
		NullCheck(L_0);
		bool L_2;
		L_2 = InterfaceFuncInvoker2< bool, Type_t*, RuntimeObject** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,Unity.Services.Core.Telemetry.Internal.IMetrics>::TryGetValue(TKey,TValue&) */, IDictionary_2_tBA4E97BEE1E9C159A2989A0ACE0C74405646B6EB_il2cpp_TypeInfo_var, L_0, L_1, (&V_0));
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		// metric.SendHistogramMetric(PackageInitTimeMetricName, initTimeSeconds);
		RuntimeObject* L_4 = V_0;
		double L_5 = ___1_initTimeSeconds;
		NullCheck(L_4);
		InterfaceActionInvoker3< String_t*, double, RuntimeObject* >::Invoke(1 /* System.Void Unity.Services.Core.Telemetry.Internal.IMetrics::SendHistogramMetric(System.String,System.Double,System.Collections.Generic.IDictionary`2<System.String,System.String>) */, IMetrics_tA68E45B18912AD74792533F57895E50599D4A7D5_il2cpp_TypeInfo_var, L_4, _stringLiteral860A8D6E0621FF04D34DD0BDB8DAEB769BD82049, L_5, (RuntimeObject*)NULL);
		goto IL_0027;
	}

IL_0025:
	{
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreMetrics::Initialize(Unity.Services.Core.Configuration.Internal.IProjectConfiguration,Unity.Services.Core.Telemetry.Internal.IMetricsFactory,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreMetrics_Initialize_m7F3B9703FBA1138C36F4C3FE4838443B772B9AE7 (CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* __this, RuntimeObject* ___0_configuration, RuntimeObject* ___1_factory, Type_t* ___2_corePackageType, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t814BB76B40805DFFB842C822D22B7D4BD7297BFA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tBA4E97BEE1E9C159A2989A0ACE0C74405646B6EB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// AllPackageMetrics.Clear();
		RuntimeObject* L_0;
		L_0 = CoreMetrics_get_AllPackageMetrics_mAD22D81A59A7B591E50AAF078BF97FFD55E61AF0_inline(__this, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Type,Unity.Services.Core.Telemetry.Internal.IMetrics>>::Clear() */, ICollection_1_t814BB76B40805DFFB842C822D22B7D4BD7297BFA_il2cpp_TypeInfo_var, L_0);
		// FindAndCacheAllPackageMetrics(configuration, factory);
		RuntimeObject* L_1 = ___0_configuration;
		RuntimeObject* L_2 = ___1_factory;
		CoreMetrics_FindAndCacheAllPackageMetrics_m1CAE6AD821223E7333BC0E0888F347B7C5DF82E2(__this, L_1, L_2, NULL);
		// if (AllPackageMetrics.TryGetValue(corePackageType, out var coreMetrics))
		RuntimeObject* L_3;
		L_3 = CoreMetrics_get_AllPackageMetrics_mAD22D81A59A7B591E50AAF078BF97FFD55E61AF0_inline(__this, NULL);
		Type_t* L_4 = ___2_corePackageType;
		NullCheck(L_3);
		bool L_5;
		L_5 = InterfaceFuncInvoker2< bool, Type_t*, RuntimeObject** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,Unity.Services.Core.Telemetry.Internal.IMetrics>::TryGetValue(TKey,TValue&) */, IDictionary_2_tBA4E97BEE1E9C159A2989A0ACE0C74405646B6EB_il2cpp_TypeInfo_var, L_3, L_4, (&V_0));
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		// Metrics = coreMetrics;
		RuntimeObject* L_7 = V_0;
		CoreMetrics_set_Metrics_mCC95B75592115A7250E45CDCBF77A62DDED6F1FB_inline(__this, L_7, NULL);
		goto IL_0036;
	}

IL_0034:
	{
	}

IL_0036:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreMetrics::FindAndCacheAllPackageMetrics(Unity.Services.Core.Configuration.Internal.IProjectConfiguration,Unity.Services.Core.Telemetry.Internal.IMetricsFactory)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreMetrics_FindAndCacheAllPackageMetrics_m1CAE6AD821223E7333BC0E0888F347B7C5DF82E2 (CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* __this, RuntimeObject* ___0_configuration, RuntimeObject* ___1_factory, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreMetrics_FindAndCacheAllPackageMetrics_m1CAE6AD821223E7333BC0E0888F347B7C5DF82E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tBA4E97BEE1E9C159A2989A0ACE0C74405646B6EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IMetricsFactory_t28787E894D3913155A7403F74BD62B562E3F906F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9BC8CA8E639EC87CE6773FD14D847BAA494850DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE6E0B8F1E6E9D5A408D28E50726BF240B9602C7);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_1 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_2 = NULL;
	int32_t V_3 = 0;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_10 = NULL;
	int32_t V_11 = 0;
	String_t* V_12 = NULL;
	Type_t* V_13 = NULL;
	RuntimeObject* V_14 = NULL;
	bool V_15 = false;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B3_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B5_0 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B4_0 = NULL;
	{
		// var packageNames = configuration.GetString(AllPackageNamesKey, "");
		RuntimeObject* L_0 = ___0_configuration;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = InterfaceFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(3 /* System.String Unity.Services.Core.Configuration.Internal.IProjectConfiguration::GetString(System.String,System.String) */, IProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_il2cpp_TypeInfo_var, L_0, _stringLiteral9BC8CA8E639EC87CE6773FD14D847BAA494850DC, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		V_0 = L_1;
		// var splitNames = packageNames?.Split(AllPackageNamesSeparator) ?? Array.Empty<string>();
		String_t* L_2 = V_0;
		if (L_2)
		{
			goto IL_0018;
		}
	}
	{
		G_B3_0 = ((StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(NULL));
		goto IL_0021;
	}

IL_0018:
	{
		String_t* L_3 = V_0;
		NullCheck(L_3);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_4;
		L_4 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_3, ((int32_t)59), 0, NULL);
		G_B3_0 = L_4;
	}

IL_0021:
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = G_B3_0;
		G_B4_0 = L_5;
		if (L_5)
		{
			G_B5_0 = L_5;
			goto IL_002a;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6;
		L_6 = Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_inline(Array_Empty_TisString_t_m9832B70DF2B936246FE60F75D3D12CB946C39D16_RuntimeMethod_var);
		G_B5_0 = L_6;
	}

IL_002a:
	{
		V_1 = G_B5_0;
		// foreach (var packageName in splitNames)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = V_1;
		V_2 = L_7;
		V_3 = 0;
		goto IL_00dc;
	}

IL_0035:
	{
		// foreach (var packageName in splitNames)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = V_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		String_t* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_4 = L_11;
		// if (string.IsNullOrEmpty(packageName))
		String_t* L_12 = V_4;
		bool L_13;
		L_13 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_12, NULL);
		V_8 = L_13;
		bool L_14 = V_8;
		if (!L_14)
		{
			goto IL_004d;
		}
	}
	{
		// continue;
		goto IL_00d8;
	}

IL_004d:
	{
		// var configKey = string.Format(PackageInitializerNamesKeyFormat, packageName);
		String_t* L_15 = V_4;
		String_t* L_16;
		L_16 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralFE6E0B8F1E6E9D5A408D28E50726BF240B9602C7, L_15, NULL);
		V_5 = L_16;
		// var joinedInitializerFullNames = configuration.GetString(configKey, "");
		RuntimeObject* L_17 = ___0_configuration;
		String_t* L_18 = V_5;
		NullCheck(L_17);
		String_t* L_19;
		L_19 = InterfaceFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(3 /* System.String Unity.Services.Core.Configuration.Internal.IProjectConfiguration::GetString(System.String,System.String) */, IProjectConfiguration_tB5A7516DEB869AD005431EC83C6E02221D2B60D2_il2cpp_TypeInfo_var, L_17, L_18, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		V_6 = L_19;
		// if (string.IsNullOrEmpty(joinedInitializerFullNames))
		String_t* L_20 = V_6;
		bool L_21;
		L_21 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_20, NULL);
		V_9 = L_21;
		bool L_22 = V_9;
		if (!L_22)
		{
			goto IL_0079;
		}
	}
	{
		// continue;
		goto IL_00d8;
	}

IL_0079:
	{
		// var initializerFullNames = joinedInitializerFullNames.Split(PackageInitializerNamesSeparator);
		String_t* L_23 = V_6;
		NullCheck(L_23);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24;
		L_24 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_23, ((int32_t)59), 0, NULL);
		V_7 = L_24;
		// foreach (var initializerFullName in initializerFullNames)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = V_7;
		V_10 = L_25;
		V_11 = 0;
		goto IL_00cf;
	}

IL_008f:
	{
		// foreach (var initializerFullName in initializerFullNames)
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = V_10;
		int32_t L_27 = V_11;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		String_t* L_29 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		V_12 = L_29;
		// var packageType = Type.GetType(initializerFullName);
		String_t* L_30 = V_12;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_31;
		L_31 = il2cpp_codegen_get_type(L_30, Type_GetType_m71A077E0B5DA3BD1DC0AB9AE387056CFCF56F93F_RuntimeMethod_var, CoreMetrics_FindAndCacheAllPackageMetrics_m1CAE6AD821223E7333BC0E0888F347B7C5DF82E2_RuntimeMethod_var);
		V_13 = L_31;
		// if (packageType is null)
		Type_t* L_32 = V_13;
		V_15 = (bool)((((RuntimeObject*)(Type_t*)L_32) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_33 = V_15;
		if (!L_33)
		{
			goto IL_00ae;
		}
	}
	{
		// continue;
		goto IL_00c9;
	}

IL_00ae:
	{
		// var metric = factory.Create(packageName);
		RuntimeObject* L_34 = ___1_factory;
		String_t* L_35 = V_4;
		NullCheck(L_34);
		RuntimeObject* L_36;
		L_36 = InterfaceFuncInvoker1< RuntimeObject*, String_t* >::Invoke(1 /* Unity.Services.Core.Telemetry.Internal.IMetrics Unity.Services.Core.Telemetry.Internal.IMetricsFactory::Create(System.String) */, IMetricsFactory_t28787E894D3913155A7403F74BD62B562E3F906F_il2cpp_TypeInfo_var, L_34, L_35);
		V_14 = L_36;
		// AllPackageMetrics[packageType] = metric;
		RuntimeObject* L_37;
		L_37 = CoreMetrics_get_AllPackageMetrics_mAD22D81A59A7B591E50AAF078BF97FFD55E61AF0_inline(__this, NULL);
		Type_t* L_38 = V_13;
		RuntimeObject* L_39 = V_14;
		NullCheck(L_37);
		InterfaceActionInvoker2< Type_t*, RuntimeObject* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,Unity.Services.Core.Telemetry.Internal.IMetrics>::set_Item(TKey,TValue) */, IDictionary_2_tBA4E97BEE1E9C159A2989A0ACE0C74405646B6EB_il2cpp_TypeInfo_var, L_37, L_38, L_39);
	}

IL_00c9:
	{
		int32_t L_40 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_00cf:
	{
		// foreach (var initializerFullName in initializerFullNames)
		int32_t L_41 = V_11;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = V_10;
		NullCheck(L_42);
		if ((((int32_t)L_41) < ((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length)))))
		{
			goto IL_008f;
		}
	}
	{
	}

IL_00d8:
	{
		int32_t L_43 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00dc:
	{
		// foreach (var packageName in splitNames)
		int32_t L_44 = V_3;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_45 = V_2;
		NullCheck(L_45);
		if ((((int32_t)L_44) < ((int32_t)((int32_t)(((RuntimeArray*)L_45)->max_length)))))
		{
			goto IL_0035;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.CoreMetrics::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CoreMetrics__ctor_mF17592A929926B30C9FC2D17569B55740B15D7D2 (CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m419ED3D0511EB148508F35979CC025A6D1BD55BE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t970906E2A8141A4E3A182960BB43855C5AF0CE9E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// = new Dictionary<Type, IMetrics>();
		Dictionary_2_t970906E2A8141A4E3A182960BB43855C5AF0CE9E* L_0 = (Dictionary_2_t970906E2A8141A4E3A182960BB43855C5AF0CE9E*)il2cpp_codegen_object_new(Dictionary_2_t970906E2A8141A4E3A182960BB43855C5AF0CE9E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Dictionary_2__ctor_m419ED3D0511EB148508F35979CC025A6D1BD55BE(L_0, Dictionary_2__ctor_m419ED3D0511EB148508F35979CC025A6D1BD55BE_RuntimeMethod_var);
		__this->___U3CAllPackageMetricsU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CAllPackageMetricsU3Ek__BackingField_9), (void*)L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void Unity.Services.Core.Internal.UnityServicesInitializer::CreateStaticInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServicesInitializer_CreateStaticInstance_m11C921F54756626B2102628C99180975D8907EB9 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetResult_m7A0F162733257CA73B347B6BB9677F25A0AB0F9B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* G_B2_0 = NULL;
	TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* G_B1_0 = NULL;
	{
		// CoreRegistry.Instance = new CoreRegistry();
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_0 = (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA*)il2cpp_codegen_object_new(CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		CoreRegistry__ctor_m507734CEE1C34622E217894B3D29D7AE0EC45314(L_0, NULL);
		CoreRegistry_set_Instance_mBFC9CEE6661027ED4103B95A82ABD453555803D7_inline(L_0, NULL);
		// CoreMetrics.Instance = new CoreMetrics();
		CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* L_1 = (CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564*)il2cpp_codegen_object_new(CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		CoreMetrics__ctor_mF17592A929926B30C9FC2D17569B55740B15D7D2(L_1, NULL);
		CoreMetrics_set_Instance_mC18703DE5A475E77CBA000AA1602A2A9305AEFD2_inline(L_1, NULL);
		// CoreDiagnostics.Instance = new CoreDiagnostics();
		CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* L_2 = (CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571*)il2cpp_codegen_object_new(CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		CoreDiagnostics__ctor_mFCD549A6812E3CEAB8A7E42B75A777F9061B3330(L_2, NULL);
		CoreDiagnostics_set_Instance_mFEA5BC5137F5C737B49419FA33F79339B1D43F2C_inline(L_2, NULL);
		// UnityServices.Instance = new UnityServicesInternal(CoreRegistry.Instance, CoreMetrics.Instance, CoreDiagnostics.Instance);
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_3;
		L_3 = CoreRegistry_get_Instance_m73A64BD3CB78EF5AC698D1635B5872CEB9F9AFE2_inline(NULL);
		CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* L_4;
		L_4 = CoreMetrics_get_Instance_mE2CA807AAB4F16D20C28256A23E407E5DF5DE74E_inline(NULL);
		CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* L_5;
		L_5 = CoreDiagnostics_get_Instance_m190590CB1205EE50B22E6BA144371BD3976C0963_inline(NULL);
		UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* L_6 = (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE*)il2cpp_codegen_object_new(UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		UnityServicesInternal__ctor_mDA89BB80FC660F4AAE12F656B10C5A3EAB719252(L_6, L_3, L_4, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		UnityServices_set_Instance_m4C250363E94392D1578BEDE13EF067416804C85C_inline(L_6, NULL);
		// UnityServices.InstantiationCompletion?.TrySetResult(null);
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_7;
		L_7 = UnityServices_get_InstantiationCompletion_mA867A00609D9BFFD19B8404887CA781DB60F0AE7_inline(NULL);
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_8 = L_7;
		G_B1_0 = L_8;
		if (L_8)
		{
			G_B2_0 = L_8;
			goto IL_0047;
		}
	}
	{
		goto IL_004e;
	}

IL_0047:
	{
		NullCheck(G_B2_0);
		bool L_9;
		L_9 = TaskCompletionSource_1_TrySetResult_m7A0F162733257CA73B347B6BB9677F25A0AB0F9B(G_B2_0, NULL, TaskCompletionSource_1_TrySetResult_m7A0F162733257CA73B347B6BB9677F25A0AB0F9B_RuntimeMethod_var);
	}

IL_004e:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.UnityServicesInitializer::EnableServicesInitializationAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServicesInitializer_EnableServicesInitializationAsync_m16A565849C8E0FC0A11F2ADE7AA87B6EAA29B890 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_Start_TisU3CEnableServicesInitializationAsyncU3Ed__1_tAC20D219AB4876F92E378792660AF104511FA482_m75A1700AFE3533C22131E1099D51EE8E10E8475B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEnableServicesInitializationAsyncU3Ed__1_tAC20D219AB4876F92E378792660AF104511FA482_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CEnableServicesInitializationAsyncU3Ed__1_tAC20D219AB4876F92E378792660AF104511FA482* V_0 = NULL;
	{
		U3CEnableServicesInitializationAsyncU3Ed__1_tAC20D219AB4876F92E378792660AF104511FA482* L_0 = (U3CEnableServicesInitializationAsyncU3Ed__1_tAC20D219AB4876F92E378792660AF104511FA482*)il2cpp_codegen_object_new(U3CEnableServicesInitializationAsyncU3Ed__1_tAC20D219AB4876F92E378792660AF104511FA482_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CEnableServicesInitializationAsyncU3Ed__1__ctor_mEC213C6295048EFAE08891614F998950CDB1CCDC(L_0, NULL);
		V_0 = L_0;
		U3CEnableServicesInitializationAsyncU3Ed__1_tAC20D219AB4876F92E378792660AF104511FA482* L_1 = V_0;
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D L_2;
		L_2 = AsyncVoidMethodBuilder_Create_m13D0B23DD350C14035918384E10AF641E6B9EE67(NULL);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_synchronizationContext_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CEnableServicesInitializationAsyncU3Ed__1_tAC20D219AB4876F92E378792660AF104511FA482* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E1__state_0 = (-1);
		U3CEnableServicesInitializationAsyncU3Ed__1_tAC20D219AB4876F92E378792660AF104511FA482* L_4 = V_0;
		NullCheck(L_4);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_5 = (&L_4->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_Start_TisU3CEnableServicesInitializationAsyncU3Ed__1_tAC20D219AB4876F92E378792660AF104511FA482_m75A1700AFE3533C22131E1099D51EE8E10E8475B(L_5, (&V_0), AsyncVoidMethodBuilder_Start_TisU3CEnableServicesInitializationAsyncU3Ed__1_tAC20D219AB4876F92E378792660AF104511FA482_m75A1700AFE3533C22131E1099D51EE8E10E8475B_RuntimeMethod_var);
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
// System.Void Unity.Services.Core.Internal.UnityServicesInitializer/<EnableServicesInitializationAsync>d__1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableServicesInitializationAsyncU3Ed__1__ctor_mEC213C6295048EFAE08891614F998950CDB1CCDC (U3CEnableServicesInitializationAsyncU3Ed__1_tAC20D219AB4876F92E378792660AF104511FA482* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.UnityServicesInitializer/<EnableServicesInitializationAsync>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableServicesInitializationAsyncU3Ed__1_MoveNext_mE98AC7044CBFAF74DE70A249383A271C2018B81E (U3CEnableServicesInitializationAsyncU3Ed__1_tAC20D219AB4876F92E378792660AF104511FA482* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CEnableServicesInitializationAsyncU3Ed__1_tAC20D219AB4876F92E378792660AF104511FA482_m4D6CF3A21D281806C26D1E97BB72B61995A1BA55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_1;
	memset((&V_1), 0, sizeof(V_1));
	U3CEnableServicesInitializationAsyncU3Ed__1_tAC20D219AB4876F92E378792660AF104511FA482* V_2 = NULL;
	Exception_t* V_3 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_005d_1;
		}

IL_000e_1:
		{
			// var instance = (UnityServicesInternal)UnityServices.Instance;
			il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
			RuntimeObject* L_2;
			L_2 = UnityServices_get_Instance_m5BA0D657E90B0A0837290E98A0CB13F9D39CA0CD_inline(NULL);
			__this->___U3CinstanceU3E5__1_2 = ((UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE*)CastclassClass((RuntimeObject*)L_2, UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE_il2cpp_TypeInfo_var));
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinstanceU3E5__1_2), (void*)((UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE*)CastclassClass((RuntimeObject*)L_2, UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE_il2cpp_TypeInfo_var)));
			// await instance.EnableInitializationAsync();
			UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* L_3 = __this->___U3CinstanceU3E5__1_2;
			NullCheck(L_3);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_4;
			L_4 = UnityServicesInternal_EnableInitializationAsync_m55FC6F901CD841698285288DA3F2AC772F2B7E35(L_3, NULL);
			NullCheck(L_4);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_5;
			L_5 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_4, NULL);
			V_1 = L_5;
			bool L_6;
			L_6 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_1), NULL);
			if (L_6)
			{
				goto IL_0079_1;
			}
		}
		{
			int32_t L_7 = 0;
			V_0 = L_7;
			__this->___U3CU3E1__state_0 = L_7;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_8 = V_1;
			__this->___U3CU3Eu__1_3 = L_8;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			V_2 = __this;
			AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_9 = (&__this->___U3CU3Et__builder_1);
			AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CEnableServicesInitializationAsyncU3Ed__1_tAC20D219AB4876F92E378792660AF104511FA482_m4D6CF3A21D281806C26D1E97BB72B61995A1BA55(L_9, (&V_1), (&V_2), AsyncVoidMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CEnableServicesInitializationAsyncU3Ed__1_tAC20D219AB4876F92E378792660AF104511FA482_m4D6CF3A21D281806C26D1E97BB72B61995A1BA55_RuntimeMethod_var);
			goto IL_00bd;
		}

IL_005d_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_10 = __this->___U3CU3Eu__1_3;
			V_1 = L_10;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_11 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_11, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_12 = (-1);
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
		}

IL_0079_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_1), NULL);
			goto IL_00a2;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0083;
		}
		throw e;
	}

CATCH_0083:
	{// begin catch(System.Exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CinstanceU3E5__1_2 = (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinstanceU3E5__1_2), (void*)(UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE*)NULL);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_13 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_14 = V_3;
		AsyncVoidMethodBuilder_SetException_mD9A6F5D1A99A62AC9DF322901BFDE05193CB177B(L_13, L_14, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00bd;
	}// end catch (depth: 1)

IL_00a2:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CinstanceU3E5__1_2 = (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinstanceU3E5__1_2), (void*)(UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE*)NULL);
		AsyncVoidMethodBuilder_t253E37B63E7E7B504878AE6563347C147F98EF2D* L_15 = (&__this->___U3CU3Et__builder_1);
		AsyncVoidMethodBuilder_SetResult_m008490FDF057D5F5D871F537C7A58BE36027F3DC(L_15, NULL);
	}

IL_00bd:
	{
		return;
	}
}
// System.Void Unity.Services.Core.Internal.UnityServicesInitializer/<EnableServicesInitializationAsync>d__1::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableServicesInitializationAsyncU3Ed__1_SetStateMachine_mF049794791F6718DA52FC0A1861464C37CBBD553 (U3CEnableServicesInitializationAsyncU3Ed__1_tAC20D219AB4876F92E378792660AF104511FA482* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
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
// Unity.Services.Core.ServicesInitializationState Unity.Services.Core.Internal.UnityServicesInternal::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityServicesInternal_get_State_mDBBCB10039E6F2A9E04A054AD914C7204E5D39D4 (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) 
{
	{
		// public ServicesInitializationState State { get; private set; }
		int32_t L_0 = __this->___U3CStateU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.UnityServicesInternal::set_State(Unity.Services.Core.ServicesInitializationState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServicesInternal_set_State_mE9661C52A8B99CE53279A6D197F263F082A114D4 (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public ServicesInitializationState State { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CStateU3Ek__BackingField_0 = L_0;
		return;
	}
}
// Unity.Services.Core.InitializationOptions Unity.Services.Core.Internal.UnityServicesInternal::get_Options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* UnityServicesInternal_get_Options_mF08FB9CE83332107302744620D7A459CC581C54F (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) 
{
	{
		// public InitializationOptions Options { get; internal set; }
		InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_0 = __this->___U3COptionsU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.UnityServicesInternal::set_Options(Unity.Services.Core.InitializationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServicesInternal_set_Options_mE929B5A9BAFF0C56FE3ADA56904DB80BA1A08E9E (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* ___0_value, const RuntimeMethod* method) 
{
	{
		// public InitializationOptions Options { get; internal set; }
		InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_0 = ___0_value;
		__this->___U3COptionsU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COptionsU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
// Unity.Services.Core.Internal.CoreRegistry Unity.Services.Core.Internal.UnityServicesInternal::get_Registry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* UnityServicesInternal_get_Registry_m523CDA2793D02C2E7966D8B25FF533248D8437A4 (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) 
{
	{
		// CoreRegistry Registry { get; }
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_0 = __this->___U3CRegistryU3Ek__BackingField_4;
		return L_0;
	}
}
// Unity.Services.Core.Internal.CoreMetrics Unity.Services.Core.Internal.UnityServicesInternal::get_Metrics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* UnityServicesInternal_get_Metrics_m0052DC91F8B8F1CE98E2A38F979D96C9A2D47750 (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) 
{
	{
		// CoreMetrics Metrics { get; }
		CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* L_0 = __this->___U3CMetricsU3Ek__BackingField_5;
		return L_0;
	}
}
// Unity.Services.Core.Internal.CoreDiagnostics Unity.Services.Core.Internal.UnityServicesInternal::get_Diagnostics()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* UnityServicesInternal_get_Diagnostics_m54973089DA076B6D42CA7E9143F2A10BBC508FA3 (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) 
{
	{
		// CoreDiagnostics Diagnostics { get; }
		CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* L_0 = __this->___U3CDiagnosticsU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Unity.Services.Core.Internal.UnityServicesInternal::.ctor(Unity.Services.Core.Internal.CoreRegistry,Unity.Services.Core.Internal.CoreMetrics,Unity.Services.Core.Internal.CoreDiagnostics)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServicesInternal__ctor_mDA89BB80FC660F4AAE12F656B10C5A3EAB719252 (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___0_registry, CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* ___1_metrics, CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* ___2_diagnostics, const RuntimeMethod* method) 
{
	{
		// public UnityServicesInternal([NotNull] CoreRegistry registry, [NotNull] CoreMetrics metrics, [NotNull] CoreDiagnostics diagnostics)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// Registry = registry;
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_0 = ___0_registry;
		__this->___U3CRegistryU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRegistryU3Ek__BackingField_4), (void*)L_0);
		// Metrics = metrics;
		CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* L_1 = ___1_metrics;
		__this->___U3CMetricsU3Ek__BackingField_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMetricsU3Ek__BackingField_5), (void*)L_1);
		// Diagnostics = diagnostics;
		CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* L_2 = ___2_diagnostics;
		__this->___U3CDiagnosticsU3Ek__BackingField_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDiagnosticsU3Ek__BackingField_6), (void*)L_2);
		// }
		return;
	}
}
// System.Threading.Tasks.Task Unity.Services.Core.Internal.UnityServicesInternal::InitializeAsync(Unity.Services.Core.InitializationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* UnityServicesInternal_InitializeAsync_m964BF1654D9A647F2216029243F3CB1ED6F600C4 (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* ___0_options, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CInitializeAsyncU3Ed__20_t8926D76B0A6C9F3E94911702F6B452F1AE90A1B9_mA3EADA7D645D36CB94B9FE813F2B6FBDC3AA8D15_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeAsyncU3Ed__20_t8926D76B0A6C9F3E94911702F6B452F1AE90A1B9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitializeAsyncU3Ed__20_t8926D76B0A6C9F3E94911702F6B452F1AE90A1B9* V_0 = NULL;
	{
		U3CInitializeAsyncU3Ed__20_t8926D76B0A6C9F3E94911702F6B452F1AE90A1B9* L_0 = (U3CInitializeAsyncU3Ed__20_t8926D76B0A6C9F3E94911702F6B452F1AE90A1B9*)il2cpp_codegen_object_new(U3CInitializeAsyncU3Ed__20_t8926D76B0A6C9F3E94911702F6B452F1AE90A1B9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CInitializeAsyncU3Ed__20__ctor_m38FC37EFEC466A3A65F312A70D1081E13699BE77(L_0, NULL);
		V_0 = L_0;
		U3CInitializeAsyncU3Ed__20_t8926D76B0A6C9F3E94911702F6B452F1AE90A1B9* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_2;
		L_2 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CInitializeAsyncU3Ed__20_t8926D76B0A6C9F3E94911702F6B452F1AE90A1B9* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_3), (void*)__this);
		U3CInitializeAsyncU3Ed__20_t8926D76B0A6C9F3E94911702F6B452F1AE90A1B9* L_4 = V_0;
		InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_5 = ___0_options;
		NullCheck(L_4);
		L_4->___options_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___options_2), (void*)L_5);
		U3CInitializeAsyncU3Ed__20_t8926D76B0A6C9F3E94911702F6B452F1AE90A1B9* L_6 = V_0;
		NullCheck(L_6);
		L_6->___U3CU3E1__state_0 = (-1);
		U3CInitializeAsyncU3Ed__20_t8926D76B0A6C9F3E94911702F6B452F1AE90A1B9* L_7 = V_0;
		NullCheck(L_7);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_8 = (&L_7->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CInitializeAsyncU3Ed__20_t8926D76B0A6C9F3E94911702F6B452F1AE90A1B9_mA3EADA7D645D36CB94B9FE813F2B6FBDC3AA8D15(L_8, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CInitializeAsyncU3Ed__20_t8926D76B0A6C9F3E94911702F6B452F1AE90A1B9_mA3EADA7D645D36CB94B9FE813F2B6FBDC3AA8D15_RuntimeMethod_var);
		U3CInitializeAsyncU3Ed__20_t8926D76B0A6C9F3E94911702F6B452F1AE90A1B9* L_9 = V_0;
		NullCheck(L_9);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_10 = (&L_9->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_11;
		L_11 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_10, NULL);
		return L_11;
	}
}
// System.Boolean Unity.Services.Core.Internal.UnityServicesInternal::HasRequestedInitialization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityServicesInternal_HasRequestedInitialization_m1E00108399C4206684219675F75D7269F06C5A03 (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return !(m_Initialization is null);
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_0 = __this->___m_Initialization_3;
		V_0 = (bool)((((int32_t)((((RuntimeObject*)(TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Threading.Tasks.Task Unity.Services.Core.Internal.UnityServicesInternal::InitializeServicesAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* UnityServicesInternal_InitializeServicesAsync_mD1A530783D1BAC5937E64849348EFFCD3B26AB9E (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CInitializeServicesAsyncU3Ed__22_tE6E881564EFD3F20C6FB3EF0B94D4F2BD1F65CD9_m7C49F477B362795250C063FA437C0F918700DCD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CInitializeServicesAsyncU3Ed__22_tE6E881564EFD3F20C6FB3EF0B94D4F2BD1F65CD9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CInitializeServicesAsyncU3Ed__22_tE6E881564EFD3F20C6FB3EF0B94D4F2BD1F65CD9* V_0 = NULL;
	{
		U3CInitializeServicesAsyncU3Ed__22_tE6E881564EFD3F20C6FB3EF0B94D4F2BD1F65CD9* L_0 = (U3CInitializeServicesAsyncU3Ed__22_tE6E881564EFD3F20C6FB3EF0B94D4F2BD1F65CD9*)il2cpp_codegen_object_new(U3CInitializeServicesAsyncU3Ed__22_tE6E881564EFD3F20C6FB3EF0B94D4F2BD1F65CD9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CInitializeServicesAsyncU3Ed__22__ctor_m70B0FC84D5F8B2AC1494C1A6A89B4E7BC83329F1(L_0, NULL);
		V_0 = L_0;
		U3CInitializeServicesAsyncU3Ed__22_tE6E881564EFD3F20C6FB3EF0B94D4F2BD1F65CD9* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_2;
		L_2 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CInitializeServicesAsyncU3Ed__22_tE6E881564EFD3F20C6FB3EF0B94D4F2BD1F65CD9* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_2), (void*)__this);
		U3CInitializeServicesAsyncU3Ed__22_tE6E881564EFD3F20C6FB3EF0B94D4F2BD1F65CD9* L_4 = V_0;
		NullCheck(L_4);
		L_4->___U3CU3E1__state_0 = (-1);
		U3CInitializeServicesAsyncU3Ed__22_tE6E881564EFD3F20C6FB3EF0B94D4F2BD1F65CD9* L_5 = V_0;
		NullCheck(L_5);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_6 = (&L_5->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CInitializeServicesAsyncU3Ed__22_tE6E881564EFD3F20C6FB3EF0B94D4F2BD1F65CD9_m7C49F477B362795250C063FA437C0F918700DCD3(L_6, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CInitializeServicesAsyncU3Ed__22_tE6E881564EFD3F20C6FB3EF0B94D4F2BD1F65CD9_m7C49F477B362795250C063FA437C0F918700DCD3_RuntimeMethod_var);
		U3CInitializeServicesAsyncU3Ed__22_tE6E881564EFD3F20C6FB3EF0B94D4F2BD1F65CD9* L_7 = V_0;
		NullCheck(L_7);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_8 = (&L_7->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_9;
		L_9 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_8, NULL);
		return L_9;
	}
}
// System.Void Unity.Services.Core.Internal.UnityServicesInternal::SendInitializationMetrics(System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityServicesInternal_SendInitializationMetrics_m130644476F26813A9527EC8DF92DF8AE0CA33996 (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF* ___0_packageInitInfos, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD65DE20DDDC29FC2C2FCC26ADD8C8F5961882D57_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mEC407F859D14E6AC0034673717B5A1544CD9163C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6BAA9C755EFADC323C0D40D59AC67DEBEACC8957_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_mBA9BF8AA05F106553CEE6FEA9817EE1C6CFF88D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t846076437B615B61591349EDED51543E1164910B V_0;
	memset((&V_0), 0, sizeof(V_0));
	PackageInitializationInfo_t3A1BAF9D785E161A9856F3C5769D513C65E49563* V_1 = NULL;
	{
		// foreach (var initInfo in packageInitInfos)
		List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF* L_0 = ___0_packageInitInfos;
		NullCheck(L_0);
		Enumerator_t846076437B615B61591349EDED51543E1164910B L_1;
		L_1 = List_1_GetEnumerator_mBA9BF8AA05F106553CEE6FEA9817EE1C6CFF88D4(L_0, List_1_GetEnumerator_mBA9BF8AA05F106553CEE6FEA9817EE1C6CFF88D4_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD65DE20DDDC29FC2C2FCC26ADD8C8F5961882D57((&V_0), Enumerator_Dispose_mD65DE20DDDC29FC2C2FCC26ADD8C8F5961882D57_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_002d_1;
			}

IL_000b_1:
			{
				// foreach (var initInfo in packageInitInfos)
				PackageInitializationInfo_t3A1BAF9D785E161A9856F3C5769D513C65E49563* L_2;
				L_2 = Enumerator_get_Current_m6BAA9C755EFADC323C0D40D59AC67DEBEACC8957_inline((&V_0), Enumerator_get_Current_m6BAA9C755EFADC323C0D40D59AC67DEBEACC8957_RuntimeMethod_var);
				V_1 = L_2;
				// Metrics.SendInitTimeMetricForPackage(initInfo.PackageType, initInfo.InitializationTimeInSeconds);
				CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* L_3;
				L_3 = UnityServicesInternal_get_Metrics_m0052DC91F8B8F1CE98E2A38F979D96C9A2D47750_inline(__this, NULL);
				PackageInitializationInfo_t3A1BAF9D785E161A9856F3C5769D513C65E49563* L_4 = V_1;
				NullCheck(L_4);
				Type_t* L_5 = L_4->___PackageType_0;
				PackageInitializationInfo_t3A1BAF9D785E161A9856F3C5769D513C65E49563* L_6 = V_1;
				NullCheck(L_6);
				double L_7 = L_6->___InitializationTimeInSeconds_1;
				NullCheck(L_3);
				CoreMetrics_SendInitTimeMetricForPackage_m20190AC644BB9982E2833904EFE519C088EA566F(L_3, L_5, L_7, NULL);
			}

IL_002d_1:
			{
				// foreach (var initInfo in packageInitInfos)
				bool L_8;
				L_8 = Enumerator_MoveNext_mEC407F859D14E6AC0034673717B5A1544CD9163C((&V_0), Enumerator_MoveNext_mEC407F859D14E6AC0034673717B5A1544CD9163C_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_000b_1;
				}
			}
			{
				goto IL_0047;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Threading.Tasks.Task Unity.Services.Core.Internal.UnityServicesInternal::EnableInitializationAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* UnityServicesInternal_EnableInitializationAsync_m55FC6F901CD841698285288DA3F2AC772F2B7E35 (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_Start_TisU3CEnableInitializationAsyncU3Ed__24_t4DF9B311AF91CDF203824EA1DD5CEAAC52ABA88C_m233F613A0750E40DE9630448ADFA0022A6F9CE29_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEnableInitializationAsyncU3Ed__24_t4DF9B311AF91CDF203824EA1DD5CEAAC52ABA88C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CEnableInitializationAsyncU3Ed__24_t4DF9B311AF91CDF203824EA1DD5CEAAC52ABA88C* V_0 = NULL;
	{
		U3CEnableInitializationAsyncU3Ed__24_t4DF9B311AF91CDF203824EA1DD5CEAAC52ABA88C* L_0 = (U3CEnableInitializationAsyncU3Ed__24_t4DF9B311AF91CDF203824EA1DD5CEAAC52ABA88C*)il2cpp_codegen_object_new(U3CEnableInitializationAsyncU3Ed__24_t4DF9B311AF91CDF203824EA1DD5CEAAC52ABA88C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CEnableInitializationAsyncU3Ed__24__ctor_m95A661B4A3F49036679CA410E52233CC0FDDE631(L_0, NULL);
		V_0 = L_0;
		U3CEnableInitializationAsyncU3Ed__24_t4DF9B311AF91CDF203824EA1DD5CEAAC52ABA88C* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06 L_2;
		L_2 = AsyncTaskMethodBuilder_Create_m24F3F260A79CA2B9EC4F1F15693A33F5EC58735A(NULL);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CEnableInitializationAsyncU3Ed__24_t4DF9B311AF91CDF203824EA1DD5CEAAC52ABA88C* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_2), (void*)__this);
		U3CEnableInitializationAsyncU3Ed__24_t4DF9B311AF91CDF203824EA1DD5CEAAC52ABA88C* L_4 = V_0;
		NullCheck(L_4);
		L_4->___U3CU3E1__state_0 = (-1);
		U3CEnableInitializationAsyncU3Ed__24_t4DF9B311AF91CDF203824EA1DD5CEAAC52ABA88C* L_5 = V_0;
		NullCheck(L_5);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_6 = (&L_5->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_Start_TisU3CEnableInitializationAsyncU3Ed__24_t4DF9B311AF91CDF203824EA1DD5CEAAC52ABA88C_m233F613A0750E40DE9630448ADFA0022A6F9CE29(L_6, (&V_0), AsyncTaskMethodBuilder_Start_TisU3CEnableInitializationAsyncU3Ed__24_t4DF9B311AF91CDF203824EA1DD5CEAAC52ABA88C_m233F613A0750E40DE9630448ADFA0022A6F9CE29_RuntimeMethod_var);
		U3CEnableInitializationAsyncU3Ed__24_t4DF9B311AF91CDF203824EA1DD5CEAAC52ABA88C* L_7 = V_0;
		NullCheck(L_7);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_8 = (&L_7->___U3CU3Et__builder_1);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_9;
		L_9 = AsyncTaskMethodBuilder_get_Task_mE9125D5F8B96F26D1BA5A5347ED82669521C7F9E(L_8, NULL);
		return L_9;
	}
}
// System.Boolean Unity.Services.Core.Internal.UnityServicesInternal::<InitializeAsync>g__HasInitializationFailed|20_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityServicesInternal_U3CInitializeAsyncU3Eg__HasInitializationFailedU7C20_0_m6BEA3DDEB222184655852BBAD3EFC4952FA36F4A (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return m_Initialization.Task.IsCompleted
		//     && m_Initialization.Task.Status != TaskStatus.RanToCompletion;
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_0 = __this->___m_Initialization_3;
		NullCheck(L_0);
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_1;
		L_1 = TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_inline(L_0, TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_RuntimeMethod_var);
		NullCheck(L_1);
		bool L_2;
		L_2 = Task_get_IsCompleted_m942D6D536545EF059089398B19435591561BB831(L_1, NULL);
		if (!L_2)
		{
			goto IL_002b;
		}
	}
	{
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_3 = __this->___m_Initialization_3;
		NullCheck(L_3);
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_4;
		L_4 = TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_inline(L_3, TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_RuntimeMethod_var);
		NullCheck(L_4);
		int32_t L_5;
		L_5 = Task_get_Status_m9707FD4B44416BA03FA2FDBEB3D0F0F281D90AD8(L_4, NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_5) == ((int32_t)5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_002c;
	}

IL_002b:
	{
		G_B3_0 = 0;
	}

IL_002c:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002f;
	}

IL_002f:
	{
		// }
		bool L_6 = V_0;
		return L_6;
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
// System.Void Unity.Services.Core.Internal.UnityServicesInternal/<InitializeAsync>d__20::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeAsyncU3Ed__20__ctor_m38FC37EFEC466A3A65F312A70D1081E13699BE77 (U3CInitializeAsyncU3Ed__20_t8926D76B0A6C9F3E94911702F6B452F1AE90A1B9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.UnityServicesInternal/<InitializeAsync>d__20::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeAsyncU3Ed__20_MoveNext_mC86B42FFB62B75BA4BDC04EEC24FE48669B38FE2 (U3CInitializeAsyncU3Ed__20_t8926D76B0A6C9F3E94911702F6B452F1AE90A1B9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CInitializeAsyncU3Ed__20_t8926D76B0A6C9F3E94911702F6B452F1AE90A1B9_m10E35F0B9182DAB9EFA11A799ECA810449B75401_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeAsyncU3Ed__20_t8926D76B0A6C9F3E94911702F6B452F1AE90A1B9_mF608E440508BF5657279C236B08ABC71997A1E7F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA V_3;
	memset((&V_3), 0, sizeof(V_3));
	U3CInitializeAsyncU3Ed__20_t8926D76B0A6C9F3E94911702F6B452F1AE90A1B9* V_4 = NULL;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t* V_6 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	int32_t G_B10_0 = 0;
	int32_t G_B15_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_0012_1;
			}
		}
		{
			goto IL_000c_1;
		}

IL_000c_1:
		{
			int32_t L_2 = V_0;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_0017_1;
			}
		}
		{
			goto IL_001c_1;
		}

IL_0012_1:
		{
			goto IL_00ca_1;
		}

IL_0017_1:
		{
			goto IL_0133_1;
		}

IL_001c_1:
		{
			// if (!HasRequestedInitialization()
			//     || HasInitializationFailed())
			UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* L_3 = __this->___U3CU3E4__this_3;
			NullCheck(L_3);
			bool L_4;
			L_4 = UnityServicesInternal_HasRequestedInitialization_m1E00108399C4206684219675F75D7269F06C5A03(L_3, NULL);
			if (!L_4)
			{
				goto IL_0037_1;
			}
		}
		{
			UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* L_5 = __this->___U3CU3E4__this_3;
			NullCheck(L_5);
			bool L_6;
			L_6 = UnityServicesInternal_U3CInitializeAsyncU3Eg__HasInitializationFailedU7C20_0_m6BEA3DDEB222184655852BBAD3EFC4952FA36F4A(L_5, NULL);
			G_B10_0 = ((int32_t)(L_6));
			goto IL_0038_1;
		}

IL_0037_1:
		{
			G_B10_0 = 1;
		}

IL_0038_1:
		{
			V_1 = (bool)G_B10_0;
			bool L_7 = V_1;
			if (!L_7)
			{
				goto IL_0060_1;
			}
		}
		{
			// Options = options;
			UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* L_8 = __this->___U3CU3E4__this_3;
			InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_9 = __this->___options_2;
			NullCheck(L_8);
			UnityServicesInternal_set_Options_mE929B5A9BAFF0C56FE3ADA56904DB80BA1A08E9E_inline(L_8, L_9, NULL);
			// m_Initialization = new TaskCompletionSource<object>();
			UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* L_10 = __this->___U3CU3E4__this_3;
			TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_11 = (TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37*)il2cpp_codegen_object_new(TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37_il2cpp_TypeInfo_var);
			NullCheck(L_11);
			TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60(L_11, TaskCompletionSource_1__ctor_mBF9A903AD14C4E9CF044B227776C532BA9C40D60_RuntimeMethod_var);
			NullCheck(L_10);
			L_10->___m_Initialization_3 = L_11;
			Il2CppCodeGenWriteBarrier((void**)(&L_10->___m_Initialization_3), (void*)L_11);
		}

IL_0060_1:
		{
			// if (!CanInitialize
			//     || State != ServicesInitializationState.Uninitialized)
			UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* L_12 = __this->___U3CU3E4__this_3;
			NullCheck(L_12);
			bool L_13 = L_12->___CanInitialize_2;
			if (!L_13)
			{
				goto IL_007d_1;
			}
		}
		{
			UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* L_14 = __this->___U3CU3E4__this_3;
			NullCheck(L_14);
			int32_t L_15;
			L_15 = UnityServicesInternal_get_State_mDBBCB10039E6F2A9E04A054AD914C7204E5D39D4_inline(L_14, NULL);
			G_B15_0 = ((!(((uint32_t)L_15) <= ((uint32_t)0)))? 1 : 0);
			goto IL_007e_1;
		}

IL_007d_1:
		{
			G_B15_0 = 1;
		}

IL_007e_1:
		{
			V_2 = (bool)G_B15_0;
			bool L_16 = V_2;
			if (!L_16)
			{
				goto IL_00f1_1;
			}
		}
		{
			// await m_Initialization.Task;
			UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* L_17 = __this->___U3CU3E4__this_3;
			NullCheck(L_17);
			TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_18 = L_17->___m_Initialization_3;
			NullCheck(L_18);
			Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_19;
			L_19 = TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_inline(L_18, TaskCompletionSource_1_get_Task_mF44990297C25C7DBE1E65241C03D0120CB551552_RuntimeMethod_var);
			NullCheck(L_19);
			TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA L_20;
			L_20 = Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3(L_19, Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_RuntimeMethod_var);
			V_3 = L_20;
			bool L_21;
			L_21 = TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54((&V_3), TaskAwaiter_1_get_IsCompleted_mEEBB09E26F4165A0F864D92E1890CFCD2C8CFD54_RuntimeMethod_var);
			if (L_21)
			{
				goto IL_00e6_1;
			}
		}
		{
			int32_t L_22 = 0;
			V_0 = L_22;
			__this->___U3CU3E1__state_0 = L_22;
			TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA L_23 = V_3;
			__this->___U3CU3Eu__1_4 = L_23;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_4))->___m_task_0), (void*)NULL);
			V_4 = __this;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_24 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CInitializeAsyncU3Ed__20_t8926D76B0A6C9F3E94911702F6B452F1AE90A1B9_m10E35F0B9182DAB9EFA11A799ECA810449B75401(L_24, (&V_3), (&V_4), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA_TisU3CInitializeAsyncU3Ed__20_t8926D76B0A6C9F3E94911702F6B452F1AE90A1B9_m10E35F0B9182DAB9EFA11A799ECA810449B75401_RuntimeMethod_var);
			goto IL_018a;
		}

IL_00ca_1:
		{
			TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA L_25 = __this->___U3CU3Eu__1_4;
			V_3 = L_25;
			TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* L_26 = (&__this->___U3CU3Eu__1_4);
			il2cpp_codegen_initobj(L_26, sizeof(TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA));
			int32_t L_27 = (-1);
			V_0 = L_27;
			__this->___U3CU3E1__state_0 = L_27;
		}

IL_00e6_1:
		{
			RuntimeObject* L_28;
			L_28 = TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B((&V_3), TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_RuntimeMethod_var);
			goto IL_0159_1;
		}

IL_00f1_1:
		{
			// await InitializeServicesAsync();
			UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* L_29 = __this->___U3CU3E4__this_3;
			NullCheck(L_29);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_30;
			L_30 = UnityServicesInternal_InitializeServicesAsync_mD1A530783D1BAC5937E64849348EFFCD3B26AB9E(L_29, NULL);
			NullCheck(L_30);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_31;
			L_31 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_30, NULL);
			V_5 = L_31;
			bool L_32;
			L_32 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_5), NULL);
			if (L_32)
			{
				goto IL_0150_1;
			}
		}
		{
			int32_t L_33 = 1;
			V_0 = L_33;
			__this->___U3CU3E1__state_0 = L_33;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_34 = V_5;
			__this->___U3CU3Eu__2_5 = L_34;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__2_5))->___m_task_0), (void*)NULL);
			V_4 = __this;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_35 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeAsyncU3Ed__20_t8926D76B0A6C9F3E94911702F6B452F1AE90A1B9_mF608E440508BF5657279C236B08ABC71997A1E7F(L_35, (&V_5), (&V_4), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CInitializeAsyncU3Ed__20_t8926D76B0A6C9F3E94911702F6B452F1AE90A1B9_mF608E440508BF5657279C236B08ABC71997A1E7F_RuntimeMethod_var);
			goto IL_018a;
		}

IL_0133_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_36 = __this->___U3CU3Eu__2_5;
			V_5 = L_36;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_37 = (&__this->___U3CU3Eu__2_5);
			il2cpp_codegen_initobj(L_37, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_38 = (-1);
			V_0 = L_38;
			__this->___U3CU3E1__state_0 = L_38;
		}

IL_0150_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_5), NULL);
		}

IL_0159_1:
		{
			goto IL_0176;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_015c;
		}
		throw e;
	}

CATCH_015c:
	{// begin catch(System.Exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_39 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_40 = V_6;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_39, L_40, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_018a;
	}// end catch (depth: 1)

IL_0176:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_41 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_41, NULL);
	}

IL_018a:
	{
		return;
	}
}
// System.Void Unity.Services.Core.Internal.UnityServicesInternal/<InitializeAsync>d__20::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeAsyncU3Ed__20_SetStateMachine_m7869FD9483382585C71C67B4F0A1AF69067E7E1D (U3CInitializeAsyncU3Ed__20_t8926D76B0A6C9F3E94911702F6B452F1AE90A1B9* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
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
// System.Void Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0__ctor_mDBB05CBB8FBBCD2F03D5B8743AFC609009C0CCEC (U3CU3Ec__DisplayClass22_0_tF8E2FFAF15B36CA0EEFCE72345468844F8E9AD2C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0::<InitializeServicesAsync>g__SortPackages|0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3CInitializeServicesAsyncU3Eg__SortPackagesU7C0_m3EF4EFD7DF837E39D66E554ED45A6057383A3162 (U3CU3Ec__DisplayClass22_0_tF8E2FFAF15B36CA0EEFCE72345468844F8E9AD2C* __this, const RuntimeMethod* method) 
{
	DependencyTreeInitializeOrderSorter_tA2A117D234A7CA95345BDE5171781A2B2144CAC3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var sorter = new DependencyTreeInitializeOrderSorter(dependencyTree, sortedPackageTypeHashes);
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_0 = __this->___dependencyTree_0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_1 = __this->___sortedPackageTypeHashes_1;
		DependencyTreeInitializeOrderSorter__ctor_m7FCD5445FC15A72A328BDE0828D9EFF109C4EBE7((&V_0), L_0, L_1, NULL);
		// sorter.SortRegisteredPackagesIntoTarget();
		DependencyTreeInitializeOrderSorter_SortRegisteredPackagesIntoTarget_m50FFB4AE5A3282877E8541CAAD905CD7C2D8F831((&V_0), NULL);
		// }
		return;
	}
}
// System.Threading.Tasks.Task`1<System.Collections.Generic.List`1<Unity.Services.Core.Internal.PackageInitializationInfo>> Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0::<InitializeServicesAsync>g__InitializePackagesAsync|1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t727821A7F4CD62528E4941D3DA8119B6A7A3D4BC* U3CU3Ec__DisplayClass22_0_U3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1_m585E1B8F7070EDDBA40606D3425F8E36FDF8ECD5 (U3CU3Ec__DisplayClass22_0_tF8E2FFAF15B36CA0EEFCE72345468844F8E9AD2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Create_m4EB3E38629F4249463A5810A921389C8C24ACD6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_Start_TisU3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_t7D84CF2A9502FB46D141D018B52A52227F7FABD6_mE28B11E4C3BC8098F20388D7C928E45F3E7BF722_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_get_Task_mE41346DB8D5830551E6DBDA8548B413941945483_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_t48F43EEBD362A47F5627122EA5697AD97B922620_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_t7D84CF2A9502FB46D141D018B52A52227F7FABD6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_t7D84CF2A9502FB46D141D018B52A52227F7FABD6* V_0 = NULL;
	{
		U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_t7D84CF2A9502FB46D141D018B52A52227F7FABD6* L_0 = (U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_t7D84CF2A9502FB46D141D018B52A52227F7FABD6*)il2cpp_codegen_object_new(U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_t7D84CF2A9502FB46D141D018B52A52227F7FABD6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed__ctor_m70BE2347469F4151FEE2C44FD8F5DAAAF84B96C5(L_0, NULL);
		V_0 = L_0;
		U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_t7D84CF2A9502FB46D141D018B52A52227F7FABD6* L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AsyncTaskMethodBuilder_1_t48F43EEBD362A47F5627122EA5697AD97B922620_il2cpp_TypeInfo_var);
		AsyncTaskMethodBuilder_1_t48F43EEBD362A47F5627122EA5697AD97B922620 L_2;
		L_2 = AsyncTaskMethodBuilder_1_Create_m4EB3E38629F4249463A5810A921389C8C24ACD6A(AsyncTaskMethodBuilder_1_Create_m4EB3E38629F4249463A5810A921389C8C24ACD6A_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___U3CU3Et__builder_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_stateMachine_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&L_1->___U3CU3Et__builder_1))->___m_coreState_1))->___m_defaultContextAction_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&L_1->___U3CU3Et__builder_1))->___m_task_2), (void*)NULL);
		#endif
		U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_t7D84CF2A9502FB46D141D018B52A52227F7FABD6* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_2), (void*)__this);
		U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_t7D84CF2A9502FB46D141D018B52A52227F7FABD6* L_4 = V_0;
		NullCheck(L_4);
		L_4->___U3CU3E1__state_0 = (-1);
		U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_t7D84CF2A9502FB46D141D018B52A52227F7FABD6* L_5 = V_0;
		NullCheck(L_5);
		AsyncTaskMethodBuilder_1_t48F43EEBD362A47F5627122EA5697AD97B922620* L_6 = (&L_5->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_1_Start_TisU3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_t7D84CF2A9502FB46D141D018B52A52227F7FABD6_mE28B11E4C3BC8098F20388D7C928E45F3E7BF722(L_6, (&V_0), AsyncTaskMethodBuilder_1_Start_TisU3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_t7D84CF2A9502FB46D141D018B52A52227F7FABD6_mE28B11E4C3BC8098F20388D7C928E45F3E7BF722_RuntimeMethod_var);
		U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_t7D84CF2A9502FB46D141D018B52A52227F7FABD6* L_7 = V_0;
		NullCheck(L_7);
		AsyncTaskMethodBuilder_1_t48F43EEBD362A47F5627122EA5697AD97B922620* L_8 = (&L_7->___U3CU3Et__builder_1);
		Task_1_t727821A7F4CD62528E4941D3DA8119B6A7A3D4BC* L_9;
		L_9 = AsyncTaskMethodBuilder_1_get_Task_mE41346DB8D5830551E6DBDA8548B413941945483(L_8, AsyncTaskMethodBuilder_1_get_Task_mE41346DB8D5830551E6DBDA8548B413941945483_RuntimeMethod_var);
		return L_9;
	}
}
// System.Void Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0::<InitializeServicesAsync>g__FailServicesInitialization|2(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3CInitializeServicesAsyncU3Eg__FailServicesInitializationU7C2_mBFC7350F4146AB29FE8C595C05249A3595824B04 (U3CU3Ec__DisplayClass22_0_tF8E2FFAF15B36CA0EEFCE72345468844F8E9AD2C* __this, Exception_t* ___0_reason, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CircularDependencyException_t1447C8D464045989784E78E658EFE30FF95153FC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetException_m458D56254FBD7F874452154131D60AADD2131334_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// State = ServicesInitializationState.Uninitialized;
		UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* L_0 = __this->___U3CU3E4__this_2;
		NullCheck(L_0);
		UnityServicesInternal_set_State_mE9661C52A8B99CE53279A6D197F263F082A114D4_inline(L_0, 0, NULL);
		// initStopwatch.Stop();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_1 = __this->___initStopwatch_3;
		NullCheck(L_1);
		Stopwatch_Stop_m8F2A2EFD9D7D5B4180A5E5379E5443864618D7DC(L_1, NULL);
		// m_Initialization.TrySetException(reason);
		UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* L_2 = __this->___U3CU3E4__this_2;
		NullCheck(L_2);
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_3 = L_2->___m_Initialization_3;
		Exception_t* L_4 = ___0_reason;
		NullCheck(L_3);
		bool L_5;
		L_5 = TaskCompletionSource_1_TrySetException_m458D56254FBD7F874452154131D60AADD2131334(L_3, L_4, TaskCompletionSource_1_TrySetException_m458D56254FBD7F874452154131D60AADD2131334_RuntimeMethod_var);
		// if (reason is CircularDependencyException)
		Exception_t* L_6 = ___0_reason;
		V_0 = (bool)((!(((RuntimeObject*)(CircularDependencyException_t1447C8D464045989784E78E658EFE30FF95153FC*)((CircularDependencyException_t1447C8D464045989784E78E658EFE30FF95153FC*)IsInstClass((RuntimeObject*)L_6, CircularDependencyException_t1447C8D464045989784E78E658EFE30FF95153FC_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_7 = V_0;
		if (!L_7)
		{
			goto IL_004f;
		}
	}
	{
		// Diagnostics.SendCircularDependencyDiagnostics(reason);
		UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* L_8 = __this->___U3CU3E4__this_2;
		NullCheck(L_8);
		CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* L_9;
		L_9 = UnityServicesInternal_get_Diagnostics_m54973089DA076B6D42CA7E9143F2A10BBC508FA3_inline(L_8, NULL);
		Exception_t* L_10 = ___0_reason;
		NullCheck(L_9);
		CoreDiagnostics_SendCircularDependencyDiagnostics_m9A32DD117AC9C01104B3B3EA17A886C46F6EA858(L_9, L_10, NULL);
		goto IL_0063;
	}

IL_004f:
	{
		// Diagnostics.SendOperateServicesInitDiagnostics(reason);
		UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* L_11 = __this->___U3CU3E4__this_2;
		NullCheck(L_11);
		CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* L_12;
		L_12 = UnityServicesInternal_get_Diagnostics_m54973089DA076B6D42CA7E9143F2A10BBC508FA3_inline(L_11, NULL);
		Exception_t* L_13 = ___0_reason;
		NullCheck(L_12);
		CoreDiagnostics_SendOperateServicesInitDiagnostics_m01E3A52B731604F17403740C31004A83104E8461(L_12, L_13, NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0::<InitializeServicesAsync>g__SucceedServicesInitialization|3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass22_0_U3CInitializeServicesAsyncU3Eg__SucceedServicesInitializationU7C3_m405CF9855B1CEED7DF649B633CB7F269244F15A3 (U3CU3Ec__DisplayClass22_0_tF8E2FFAF15B36CA0EEFCE72345468844F8E9AD2C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPackageRegistry_t598A337CA30E50021BB139EF5CF3C3867139CFA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetResult_m7A0F162733257CA73B347B6BB9677F25A0AB0F9B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// State = ServicesInitializationState.Initialized;
		UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* L_0 = __this->___U3CU3E4__this_2;
		NullCheck(L_0);
		UnityServicesInternal_set_State_mE9661C52A8B99CE53279A6D197F263F082A114D4_inline(L_0, 2, NULL);
		// Registry.PackageRegistry.Tree = null;
		UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* L_1 = __this->___U3CU3E4__this_2;
		NullCheck(L_1);
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_2;
		L_2 = UnityServicesInternal_get_Registry_m523CDA2793D02C2E7966D8B25FF533248D8437A4_inline(L_1, NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = CoreRegistry_get_PackageRegistry_m0A95E6723D8237E6E9D6D0067FB0EDFCC3C29063_inline(L_2, NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* >::Invoke(1 /* System.Void Unity.Services.Core.Internal.IPackageRegistry::set_Tree(Unity.Services.Core.Internal.DependencyTree) */, IPackageRegistry_t598A337CA30E50021BB139EF5CF3C3867139CFA2_il2cpp_TypeInfo_var, L_3, (DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992*)NULL);
		// Registry.LockComponentRegistration();
		UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* L_4 = __this->___U3CU3E4__this_2;
		NullCheck(L_4);
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_5;
		L_5 = UnityServicesInternal_get_Registry_m523CDA2793D02C2E7966D8B25FF533248D8437A4_inline(L_4, NULL);
		NullCheck(L_5);
		CoreRegistry_LockComponentRegistration_mB4ED90ED4F7621588195C9922C9A669C69C831BC(L_5, NULL);
		// initStopwatch.Stop();
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_6 = __this->___initStopwatch_3;
		NullCheck(L_6);
		Stopwatch_Stop_m8F2A2EFD9D7D5B4180A5E5379E5443864618D7DC(L_6, NULL);
		// m_Initialization.TrySetResult(null);
		UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* L_7 = __this->___U3CU3E4__this_2;
		NullCheck(L_7);
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_8 = L_7->___m_Initialization_3;
		NullCheck(L_8);
		bool L_9;
		L_9 = TaskCompletionSource_1_TrySetResult_m7A0F162733257CA73B347B6BB9677F25A0AB0F9B(L_8, NULL, TaskCompletionSource_1_TrySetResult_m7A0F162733257CA73B347B6BB9677F25A0AB0F9B_RuntimeMethod_var);
		// Metrics.SendAllPackagesInitSuccessMetric();
		UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* L_10 = __this->___U3CU3E4__this_2;
		NullCheck(L_10);
		CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* L_11;
		L_11 = UnityServicesInternal_get_Metrics_m0052DC91F8B8F1CE98E2A38F979D96C9A2D47750_inline(L_10, NULL);
		NullCheck(L_11);
		CoreMetrics_SendAllPackagesInitSuccessMetric_m6A0C4AD97DA5F22FCA1723F91096E1AC63400AC1(L_11, NULL);
		// Metrics.SendAllPackagesInitTimeMetric(initStopwatch.Elapsed.TotalSeconds);
		UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* L_12 = __this->___U3CU3E4__this_2;
		NullCheck(L_12);
		CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* L_13;
		L_13 = UnityServicesInternal_get_Metrics_m0052DC91F8B8F1CE98E2A38F979D96C9A2D47750_inline(L_12, NULL);
		Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_14 = __this->___initStopwatch_3;
		NullCheck(L_14);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_15;
		L_15 = Stopwatch_get_Elapsed_mF16CCA2F9B7E2EAEFCAF8D81F44370DBAC1B2178(L_14, NULL);
		V_0 = L_15;
		double L_16;
		L_16 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_0), NULL);
		NullCheck(L_13);
		CoreMetrics_SendAllPackagesInitTimeMetric_m28BB6D84801BEFC36F21D22D148C2C53C19456C6(L_13, L_16, NULL);
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
// System.Void Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0/<<InitializeServicesAsync>g__InitializePackagesAsync|1>d::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed__ctor_m70BE2347469F4151FEE2C44FD8F5DAAAF84B96C5 (U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_t7D84CF2A9502FB46D141D018B52A52227F7FABD6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0/<<InitializeServicesAsync>g__InitializePackagesAsync|1>d::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_MoveNext_m1A0F587F4E5C48CFBB69476DC6FF0E8D71A8C89E (U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_t7D84CF2A9502FB46D141D018B52A52227F7FABD6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t03489502EBF553A2EE84E314C5C36D6E8F28D504_TisU3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_t7D84CF2A9502FB46D141D018B52A52227F7FABD6_m8ABB9ED1C779D3CA6CE0C864F256DE0E94A0C0C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_1_SetResult_m00485CE66FC14765B7ABB50FB23F9784705B055B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m79C78561964DA7B1F93E790960A196E79A7E7310_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mC4E216C5AFC1142205CD3AB88A89C42B37DE329B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m0192286BA9B87B3F93EC06D50C0D81D5C38E5335_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF* V_1 = NULL;
	TaskAwaiter_1_t03489502EBF553A2EE84E314C5C36D6E8F28D504 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_t7D84CF2A9502FB46D141D018B52A52227F7FABD6* V_3 = NULL;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_0073_1;
		}

IL_000e_1:
		{
			// var initializer = new CoreRegistryInitializer(Registry, sortedPackageTypeHashes);
			U3CU3Ec__DisplayClass22_0_tF8E2FFAF15B36CA0EEFCE72345468844F8E9AD2C* L_2 = __this->___U3CU3E4__this_2;
			NullCheck(L_2);
			UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* L_3 = L_2->___U3CU3E4__this_2;
			NullCheck(L_3);
			CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_4;
			L_4 = UnityServicesInternal_get_Registry_m523CDA2793D02C2E7966D8B25FF533248D8437A4_inline(L_3, NULL);
			U3CU3Ec__DisplayClass22_0_tF8E2FFAF15B36CA0EEFCE72345468844F8E9AD2C* L_5 = __this->___U3CU3E4__this_2;
			NullCheck(L_5);
			List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_6 = L_5->___sortedPackageTypeHashes_1;
			CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03* L_7 = (CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03*)il2cpp_codegen_object_new(CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			CoreRegistryInitializer__ctor_mBE9C46715DF41A8B1CF31CCAC9166A212318B156(L_7, L_4, L_6, NULL);
			__this->___U3CinitializerU3E5__1_3 = L_7;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinitializerU3E5__1_3), (void*)L_7);
			// return await initializer.InitializeRegistryAsync();
			CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03* L_8 = __this->___U3CinitializerU3E5__1_3;
			NullCheck(L_8);
			Task_1_t727821A7F4CD62528E4941D3DA8119B6A7A3D4BC* L_9;
			L_9 = CoreRegistryInitializer_InitializeRegistryAsync_m3E1030C1B0E033F76CF20DC208555AB915C62BF8(L_8, NULL);
			NullCheck(L_9);
			TaskAwaiter_1_t03489502EBF553A2EE84E314C5C36D6E8F28D504 L_10;
			L_10 = Task_1_GetAwaiter_m0192286BA9B87B3F93EC06D50C0D81D5C38E5335(L_9, Task_1_GetAwaiter_m0192286BA9B87B3F93EC06D50C0D81D5C38E5335_RuntimeMethod_var);
			V_2 = L_10;
			bool L_11;
			L_11 = TaskAwaiter_1_get_IsCompleted_mC4E216C5AFC1142205CD3AB88A89C42B37DE329B((&V_2), TaskAwaiter_1_get_IsCompleted_mC4E216C5AFC1142205CD3AB88A89C42B37DE329B_RuntimeMethod_var);
			if (L_11)
			{
				goto IL_008f_1;
			}
		}
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
			TaskAwaiter_1_t03489502EBF553A2EE84E314C5C36D6E8F28D504 L_13 = V_2;
			__this->___U3CU3Eu__1_5 = L_13;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_5))->___m_task_0), (void*)NULL);
			V_3 = __this;
			AsyncTaskMethodBuilder_1_t48F43EEBD362A47F5627122EA5697AD97B922620* L_14 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t03489502EBF553A2EE84E314C5C36D6E8F28D504_TisU3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_t7D84CF2A9502FB46D141D018B52A52227F7FABD6_m8ABB9ED1C779D3CA6CE0C864F256DE0E94A0C0C5(L_14, (&V_2), (&V_3), AsyncTaskMethodBuilder_1_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t03489502EBF553A2EE84E314C5C36D6E8F28D504_TisU3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_t7D84CF2A9502FB46D141D018B52A52227F7FABD6_m8ABB9ED1C779D3CA6CE0C864F256DE0E94A0C0C5_RuntimeMethod_var);
			goto IL_00e2;
		}

IL_0073_1:
		{
			TaskAwaiter_1_t03489502EBF553A2EE84E314C5C36D6E8F28D504 L_15 = __this->___U3CU3Eu__1_5;
			V_2 = L_15;
			TaskAwaiter_1_t03489502EBF553A2EE84E314C5C36D6E8F28D504* L_16 = (&__this->___U3CU3Eu__1_5);
			il2cpp_codegen_initobj(L_16, sizeof(TaskAwaiter_1_t03489502EBF553A2EE84E314C5C36D6E8F28D504));
			int32_t L_17 = (-1);
			V_0 = L_17;
			__this->___U3CU3E1__state_0 = L_17;
		}

IL_008f_1:
		{
			List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF* L_18;
			L_18 = TaskAwaiter_1_GetResult_m79C78561964DA7B1F93E790960A196E79A7E7310((&V_2), TaskAwaiter_1_GetResult_m79C78561964DA7B1F93E790960A196E79A7E7310_RuntimeMethod_var);
			__this->___U3CU3Es__2_4 = L_18;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__2_4), (void*)L_18);
			List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF* L_19 = __this->___U3CU3Es__2_4;
			V_1 = L_19;
			goto IL_00c6;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a5;
		}
		throw e;
	}

CATCH_00a5:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CinitializerU3E5__1_3 = (CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinitializerU3E5__1_3), (void*)(CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03*)NULL);
		AsyncTaskMethodBuilder_1_t48F43EEBD362A47F5627122EA5697AD97B922620* L_20 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_21 = V_4;
		AsyncTaskMethodBuilder_1_SetException_m1478EBE0D2DB997547C107D2697C8CE59E2C7B3B(L_20, L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncTaskMethodBuilder_1_SetException_m1478EBE0D2DB997547C107D2697C8CE59E2C7B3B_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00e2;
	}// end catch (depth: 1)

IL_00c6:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CinitializerU3E5__1_3 = (CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CinitializerU3E5__1_3), (void*)(CoreRegistryInitializer_tEFBAE72E8C7FB7BF2C72CD596BA44DCC0A102E03*)NULL);
		AsyncTaskMethodBuilder_1_t48F43EEBD362A47F5627122EA5697AD97B922620* L_22 = (&__this->___U3CU3Et__builder_1);
		List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF* L_23 = V_1;
		AsyncTaskMethodBuilder_1_SetResult_m00485CE66FC14765B7ABB50FB23F9784705B055B(L_22, L_23, AsyncTaskMethodBuilder_1_SetResult_m00485CE66FC14765B7ABB50FB23F9784705B055B_RuntimeMethod_var);
	}

IL_00e2:
	{
		return;
	}
}
// System.Void Unity.Services.Core.Internal.UnityServicesInternal/<>c__DisplayClass22_0/<<InitializeServicesAsync>g__InitializePackagesAsync|1>d::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_SetStateMachine_mAAD9750957C9D2A753833C40E201F4141C56143D (U3CU3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1U3Ed_t7D84CF2A9502FB46D141D018B52A52227F7FABD6* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
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
// System.Void Unity.Services.Core.Internal.UnityServicesInternal/<InitializeServicesAsync>d__22::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeServicesAsyncU3Ed__22__ctor_m70B0FC84D5F8B2AC1494C1A6A89B4E7BC83329F1 (U3CInitializeServicesAsyncU3Ed__22_tE6E881564EFD3F20C6FB3EF0B94D4F2BD1F65CD9* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.UnityServicesInternal/<InitializeServicesAsync>d__22::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeServicesAsyncU3Ed__22_MoveNext_m8CBE33D50A5251F774381D3A21B3B78F1F3B439B (U3CInitializeServicesAsyncU3Ed__22_tE6E881564EFD3F20C6FB3EF0B94D4F2BD1F65CD9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t03489502EBF553A2EE84E314C5C36D6E8F28D504_TisU3CInitializeServicesAsyncU3Ed__22_tE6E881564EFD3F20C6FB3EF0B94D4F2BD1F65CD9_mBC0C9FB8ECCDDFF344176E0CE5AFF4397005F9D1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_m9284604119CAF32B586959EFA2260DABA1C5C31C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPackageRegistry_t598A337CA30E50021BB139EF5CF3C3867139CFA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_GetResult_m79C78561964DA7B1F93E790960A196E79A7E7310_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskAwaiter_1_get_IsCompleted_mC4E216C5AFC1142205CD3AB88A89C42B37DE329B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_1_GetAwaiter_m0192286BA9B87B3F93EC06D50C0D81D5C38E5335_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass22_0_tF8E2FFAF15B36CA0EEFCE72345468844F8E9AD2C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	TaskAwaiter_1_t03489502EBF553A2EE84E314C5C36D6E8F28D504 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CInitializeServicesAsyncU3Ed__22_tE6E881564EFD3F20C6FB3EF0B94D4F2BD1F65CD9* V_3 = NULL;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_0011_1;
		}

IL_000c_1:
		{
			goto IL_00dd_1;
		}

IL_0011_1:
		{
			U3CU3Ec__DisplayClass22_0_tF8E2FFAF15B36CA0EEFCE72345468844F8E9AD2C* L_2 = (U3CU3Ec__DisplayClass22_0_tF8E2FFAF15B36CA0EEFCE72345468844F8E9AD2C*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass22_0_tF8E2FFAF15B36CA0EEFCE72345468844F8E9AD2C_il2cpp_TypeInfo_var);
			NullCheck(L_2);
			U3CU3Ec__DisplayClass22_0__ctor_mDBB05CBB8FBBCD2F03D5B8743AFC609009C0CCEC(L_2, NULL);
			__this->___U3CU3E8__1_3 = L_2;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_3), (void*)L_2);
			U3CU3Ec__DisplayClass22_0_tF8E2FFAF15B36CA0EEFCE72345468844F8E9AD2C* L_3 = __this->___U3CU3E8__1_3;
			UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* L_4 = __this->___U3CU3E4__this_2;
			NullCheck(L_3);
			L_3->___U3CU3E4__this_2 = L_4;
			Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_2), (void*)L_4);
			// State = ServicesInitializationState.Initializing;
			UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* L_5 = __this->___U3CU3E4__this_2;
			NullCheck(L_5);
			UnityServicesInternal_set_State_mE9661C52A8B99CE53279A6D197F263F082A114D4_inline(L_5, 1, NULL);
			// var initStopwatch = new Stopwatch();
			U3CU3Ec__DisplayClass22_0_tF8E2FFAF15B36CA0EEFCE72345468844F8E9AD2C* L_6 = __this->___U3CU3E8__1_3;
			Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_7 = (Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043*)il2cpp_codegen_object_new(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
			NullCheck(L_7);
			Stopwatch__ctor_mAFE6B2F45CF1C3469EF6D5307972BC098B473D0A(L_7, NULL);
			NullCheck(L_6);
			L_6->___initStopwatch_3 = L_7;
			Il2CppCodeGenWriteBarrier((void**)(&L_6->___initStopwatch_3), (void*)L_7);
			// initStopwatch.Start();
			U3CU3Ec__DisplayClass22_0_tF8E2FFAF15B36CA0EEFCE72345468844F8E9AD2C* L_8 = __this->___U3CU3E8__1_3;
			NullCheck(L_8);
			Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043* L_9 = L_8->___initStopwatch_3;
			NullCheck(L_9);
			Stopwatch_Start_m35906A38C7D336CF9DD35854C7E170D762A55915(L_9, NULL);
			// var dependencyTree = Registry.PackageRegistry.Tree;
			U3CU3Ec__DisplayClass22_0_tF8E2FFAF15B36CA0EEFCE72345468844F8E9AD2C* L_10 = __this->___U3CU3E8__1_3;
			UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* L_11 = __this->___U3CU3E4__this_2;
			NullCheck(L_11);
			CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_12;
			L_12 = UnityServicesInternal_get_Registry_m523CDA2793D02C2E7966D8B25FF533248D8437A4_inline(L_11, NULL);
			NullCheck(L_12);
			RuntimeObject* L_13;
			L_13 = CoreRegistry_get_PackageRegistry_m0A95E6723D8237E6E9D6D0067FB0EDFCC3C29063_inline(L_12, NULL);
			NullCheck(L_13);
			DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_14;
			L_14 = InterfaceFuncInvoker0< DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* >::Invoke(0 /* Unity.Services.Core.Internal.DependencyTree Unity.Services.Core.Internal.IPackageRegistry::get_Tree() */, IPackageRegistry_t598A337CA30E50021BB139EF5CF3C3867139CFA2_il2cpp_TypeInfo_var, L_13);
			NullCheck(L_10);
			L_10->___dependencyTree_0 = L_14;
			Il2CppCodeGenWriteBarrier((void**)(&L_10->___dependencyTree_0), (void*)L_14);
			// if (dependencyTree is null)
			U3CU3Ec__DisplayClass22_0_tF8E2FFAF15B36CA0EEFCE72345468844F8E9AD2C* L_15 = __this->___U3CU3E8__1_3;
			NullCheck(L_15);
			DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_16 = L_15->___dependencyTree_0;
			V_1 = (bool)((((RuntimeObject*)(DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992*)L_16) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
			bool L_17 = V_1;
			if (!L_17)
			{
				goto IL_00b8_1;
			}
		}
		{
			// var reason = new NullReferenceException("Services require a valid dependency tree to be initialized.");
			NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_18 = (NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB_il2cpp_TypeInfo_var)));
			NullCheck(L_18);
			NullReferenceException__ctor_mA41317A57F5C1C0E3F59C7EB25ABD484564B23D4(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDAE0D3C6B917D9937A0AFE3408B092A6AD9711E1)), NULL);
			__this->___U3CreasonU3E5__3_5 = L_18;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreasonU3E5__3_5), (void*)L_18);
			// FailServicesInitialization(reason);
			U3CU3Ec__DisplayClass22_0_tF8E2FFAF15B36CA0EEFCE72345468844F8E9AD2C* L_19 = __this->___U3CU3E8__1_3;
			NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_20 = __this->___U3CreasonU3E5__3_5;
			NullCheck(L_19);
			U3CU3Ec__DisplayClass22_0_U3CInitializeServicesAsyncU3Eg__FailServicesInitializationU7C2_mBFC7350F4146AB29FE8C595C05249A3595824B04(L_19, L_20, NULL);
			// throw reason;
			NullReferenceException_tBDE63A6D24569B964908408389070C6A9F5005BB* L_21 = __this->___U3CreasonU3E5__3_5;
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CInitializeServicesAsyncU3Ed__22_MoveNext_m8CBE33D50A5251F774381D3A21B3B78F1F3B439B_RuntimeMethod_var)));
		}

IL_00b8_1:
		{
			// var sortedPackageTypeHashes = new List<int>(dependencyTree.PackageTypeHashToInstance.Count);
			U3CU3Ec__DisplayClass22_0_tF8E2FFAF15B36CA0EEFCE72345468844F8E9AD2C* L_22 = __this->___U3CU3E8__1_3;
			U3CU3Ec__DisplayClass22_0_tF8E2FFAF15B36CA0EEFCE72345468844F8E9AD2C* L_23 = __this->___U3CU3E8__1_3;
			NullCheck(L_23);
			DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_24 = L_23->___dependencyTree_0;
			NullCheck(L_24);
			Dictionary_2_tC70317712FDC2AB9541D7ADDC8AC66A084F9FA36* L_25 = L_24->___PackageTypeHashToInstance_0;
			NullCheck(L_25);
			int32_t L_26;
			L_26 = Dictionary_2_get_Count_m9284604119CAF32B586959EFA2260DABA1C5C31C(L_25, Dictionary_2_get_Count_m9284604119CAF32B586959EFA2260DABA1C5C31C_RuntimeMethod_var);
			List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_27 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_il2cpp_TypeInfo_var);
			NullCheck(L_27);
			List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98(L_27, L_26, List_1__ctor_m30DD6F0F8DFBA9856BF7220A3CDB1C89ECEC0D98_RuntimeMethod_var);
			NullCheck(L_22);
			L_22->___sortedPackageTypeHashes_1 = L_27;
			Il2CppCodeGenWriteBarrier((void**)(&L_22->___sortedPackageTypeHashes_1), (void*)L_27);
		}

IL_00dd_1:
		{
		}
		try
		{// begin try (depth: 2)
			{
				int32_t L_28 = V_0;
				if (!L_28)
				{
					goto IL_00e3_2;
				}
			}
			{
				goto IL_00e5_2;
			}

IL_00e3_2:
			{
				goto IL_0133_2;
			}

IL_00e5_2:
			{
				// SortPackages();
				U3CU3Ec__DisplayClass22_0_tF8E2FFAF15B36CA0EEFCE72345468844F8E9AD2C* L_29 = __this->___U3CU3E8__1_3;
				NullCheck(L_29);
				U3CU3Ec__DisplayClass22_0_U3CInitializeServicesAsyncU3Eg__SortPackagesU7C0_m3EF4EFD7DF837E39D66E554ED45A6057383A3162(L_29, NULL);
				// packageInitInfos = await InitializePackagesAsync();
				U3CU3Ec__DisplayClass22_0_tF8E2FFAF15B36CA0EEFCE72345468844F8E9AD2C* L_30 = __this->___U3CU3E8__1_3;
				NullCheck(L_30);
				Task_1_t727821A7F4CD62528E4941D3DA8119B6A7A3D4BC* L_31;
				L_31 = U3CU3Ec__DisplayClass22_0_U3CInitializeServicesAsyncU3Eg__InitializePackagesAsyncU7C1_m585E1B8F7070EDDBA40606D3425F8E36FDF8ECD5(L_30, NULL);
				NullCheck(L_31);
				TaskAwaiter_1_t03489502EBF553A2EE84E314C5C36D6E8F28D504 L_32;
				L_32 = Task_1_GetAwaiter_m0192286BA9B87B3F93EC06D50C0D81D5C38E5335(L_31, Task_1_GetAwaiter_m0192286BA9B87B3F93EC06D50C0D81D5C38E5335_RuntimeMethod_var);
				V_2 = L_32;
				bool L_33;
				L_33 = TaskAwaiter_1_get_IsCompleted_mC4E216C5AFC1142205CD3AB88A89C42B37DE329B((&V_2), TaskAwaiter_1_get_IsCompleted_mC4E216C5AFC1142205CD3AB88A89C42B37DE329B_RuntimeMethod_var);
				if (L_33)
				{
					goto IL_014f_2;
				}
			}
			{
				int32_t L_34 = 0;
				V_0 = L_34;
				__this->___U3CU3E1__state_0 = L_34;
				TaskAwaiter_1_t03489502EBF553A2EE84E314C5C36D6E8F28D504 L_35 = V_2;
				__this->___U3CU3Eu__1_8 = L_35;
				Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_8))->___m_task_0), (void*)NULL);
				V_3 = __this;
				AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_36 = (&__this->___U3CU3Et__builder_1);
				AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t03489502EBF553A2EE84E314C5C36D6E8F28D504_TisU3CInitializeServicesAsyncU3Ed__22_tE6E881564EFD3F20C6FB3EF0B94D4F2BD1F65CD9_mBC0C9FB8ECCDDFF344176E0CE5AFF4397005F9D1(L_36, (&V_2), (&V_3), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_1_t03489502EBF553A2EE84E314C5C36D6E8F28D504_TisU3CInitializeServicesAsyncU3Ed__22_tE6E881564EFD3F20C6FB3EF0B94D4F2BD1F65CD9_mBC0C9FB8ECCDDFF344176E0CE5AFF4397005F9D1_RuntimeMethod_var);
				goto IL_01ff;
			}

IL_0133_2:
			{
				TaskAwaiter_1_t03489502EBF553A2EE84E314C5C36D6E8F28D504 L_37 = __this->___U3CU3Eu__1_8;
				V_2 = L_37;
				TaskAwaiter_1_t03489502EBF553A2EE84E314C5C36D6E8F28D504* L_38 = (&__this->___U3CU3Eu__1_8);
				il2cpp_codegen_initobj(L_38, sizeof(TaskAwaiter_1_t03489502EBF553A2EE84E314C5C36D6E8F28D504));
				int32_t L_39 = (-1);
				V_0 = L_39;
				__this->___U3CU3E1__state_0 = L_39;
			}

IL_014f_2:
			{
				List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF* L_40;
				L_40 = TaskAwaiter_1_GetResult_m79C78561964DA7B1F93E790960A196E79A7E7310((&V_2), TaskAwaiter_1_GetResult_m79C78561964DA7B1F93E790960A196E79A7E7310_RuntimeMethod_var);
				__this->___U3CU3Es__4_6 = L_40;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_6), (void*)L_40);
				List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF* L_41 = __this->___U3CU3Es__4_6;
				__this->___U3CpackageInitInfosU3E5__2_4 = L_41;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpackageInitInfosU3E5__2_4), (void*)L_41);
				__this->___U3CU3Es__4_6 = (List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF*)NULL;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3Es__4_6), (void*)(List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF*)NULL);
				goto IL_0191_1;
			}
		}// end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
			{
				IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
				goto CATCH_0172_1;
			}
			throw e;
		}

CATCH_0172_1:
		{// begin catch(System.Exception)
			// catch (Exception reason)
			V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			Exception_t* L_42 = V_4;
			__this->___U3CreasonU3E5__5_7 = L_42;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CreasonU3E5__5_7), (void*)L_42);
			// FailServicesInitialization(reason);
			U3CU3Ec__DisplayClass22_0_tF8E2FFAF15B36CA0EEFCE72345468844F8E9AD2C* L_43 = __this->___U3CU3E8__1_3;
			Exception_t* L_44 = __this->___U3CreasonU3E5__5_7;
			NullCheck(L_43);
			U3CU3Ec__DisplayClass22_0_U3CInitializeServicesAsyncU3Eg__FailServicesInitializationU7C2_mBFC7350F4146AB29FE8C595C05249A3595824B04(L_43, L_44, NULL);
			// throw;
			IL2CPP_RETHROW_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		}// end catch (depth: 2)

IL_0191_1:
		{
			// SendInitializationMetrics(packageInitInfos);
			UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* L_45 = __this->___U3CU3E4__this_2;
			List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF* L_46 = __this->___U3CpackageInitInfosU3E5__2_4;
			NullCheck(L_45);
			UnityServicesInternal_SendInitializationMetrics_m130644476F26813A9527EC8DF92DF8AE0CA33996(L_45, L_46, NULL);
			// SucceedServicesInitialization();
			U3CU3Ec__DisplayClass22_0_tF8E2FFAF15B36CA0EEFCE72345468844F8E9AD2C* L_47 = __this->___U3CU3E8__1_3;
			NullCheck(L_47);
			U3CU3Ec__DisplayClass22_0_U3CInitializeServicesAsyncU3Eg__SucceedServicesInitializationU7C3_m405CF9855B1CEED7DF649B633CB7F269244F15A3(L_47, NULL);
			goto IL_01dd;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_01b5;
		}
		throw e;
	}

CATCH_01b5:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_3 = (U3CU3Ec__DisplayClass22_0_tF8E2FFAF15B36CA0EEFCE72345468844F8E9AD2C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_3), (void*)(U3CU3Ec__DisplayClass22_0_tF8E2FFAF15B36CA0EEFCE72345468844F8E9AD2C*)NULL);
		__this->___U3CpackageInitInfosU3E5__2_4 = (List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpackageInitInfosU3E5__2_4), (void*)(List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF*)NULL);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_48 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_49 = V_4;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_48, L_49, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_01ff;
	}// end catch (depth: 1)

IL_01dd:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		__this->___U3CU3E8__1_3 = (U3CU3Ec__DisplayClass22_0_tF8E2FFAF15B36CA0EEFCE72345468844F8E9AD2C*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E8__1_3), (void*)(U3CU3Ec__DisplayClass22_0_tF8E2FFAF15B36CA0EEFCE72345468844F8E9AD2C*)NULL);
		__this->___U3CpackageInitInfosU3E5__2_4 = (List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CpackageInitInfosU3E5__2_4), (void*)(List_1_t3C7D692A515FB9D123CF8D3E78916240988226CF*)NULL);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_50 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_50, NULL);
	}

IL_01ff:
	{
		return;
	}
}
// System.Void Unity.Services.Core.Internal.UnityServicesInternal/<InitializeServicesAsync>d__22::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CInitializeServicesAsyncU3Ed__22_SetStateMachine_mFC5FA0E2CD3782B01DA1B4624BD5E80D966BFF33 (U3CInitializeServicesAsyncU3Ed__22_tE6E881564EFD3F20C6FB3EF0B94D4F2BD1F65CD9* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
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
// System.Void Unity.Services.Core.Internal.UnityServicesInternal/<EnableInitializationAsync>d__24::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableInitializationAsyncU3Ed__24__ctor_m95A661B4A3F49036679CA410E52233CC0FDDE631 (U3CEnableInitializationAsyncU3Ed__24_t4DF9B311AF91CDF203824EA1DD5CEAAC52ABA88C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.UnityServicesInternal/<EnableInitializationAsync>d__24::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableInitializationAsyncU3Ed__24_MoveNext_m248BD737D6BA2E63C2EF30305A5A4323F7AF3612 (U3CEnableInitializationAsyncU3Ed__24_t4DF9B311AF91CDF203824EA1DD5CEAAC52ABA88C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CEnableInitializationAsyncU3Ed__24_t4DF9B311AF91CDF203824EA1DD5CEAAC52ABA88C_m1BDEC89BB66589749DAF15A8EFF5EA7E06CEB476_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 V_2;
	memset((&V_2), 0, sizeof(V_2));
	U3CEnableInitializationAsyncU3Ed__24_t4DF9B311AF91CDF203824EA1DD5CEAAC52ABA88C* V_3 = NULL;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
	}
	try
	{// begin try (depth: 1)
		{
			int32_t L_1 = V_0;
			if (!L_1)
			{
				goto IL_000c_1;
			}
		}
		{
			goto IL_000e_1;
		}

IL_000c_1:
		{
			goto IL_007e_1;
		}

IL_000e_1:
		{
			// CanInitialize = true;
			UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* L_2 = __this->___U3CU3E4__this_2;
			NullCheck(L_2);
			L_2->___CanInitialize_2 = (bool)1;
			// Registry.LockPackageRegistration();
			UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* L_3 = __this->___U3CU3E4__this_2;
			NullCheck(L_3);
			CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_4;
			L_4 = UnityServicesInternal_get_Registry_m523CDA2793D02C2E7966D8B25FF533248D8437A4_inline(L_3, NULL);
			NullCheck(L_4);
			CoreRegistry_LockPackageRegistration_m031751BE6E5CBB6D30AAE2B64DAF04FC0EEA5A0B(L_4, NULL);
			// if (!HasRequestedInitialization())
			UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* L_5 = __this->___U3CU3E4__this_2;
			NullCheck(L_5);
			bool L_6;
			L_6 = UnityServicesInternal_HasRequestedInitialization_m1E00108399C4206684219675F75D7269F06C5A03(L_5, NULL);
			V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
			bool L_7 = V_1;
			if (!L_7)
			{
				goto IL_0040_1;
			}
		}
		{
			// return;
			goto IL_00be;
		}

IL_0040_1:
		{
			// await InitializeServicesAsync();
			UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* L_8 = __this->___U3CU3E4__this_2;
			NullCheck(L_8);
			Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_9;
			L_9 = UnityServicesInternal_InitializeServicesAsync_mD1A530783D1BAC5937E64849348EFFCD3B26AB9E(L_8, NULL);
			NullCheck(L_9);
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_10;
			L_10 = Task_GetAwaiter_m08B368EAC939DD35D0AC428180822255A442CA29(L_9, NULL);
			V_2 = L_10;
			bool L_11;
			L_11 = TaskAwaiter_get_IsCompleted_mC236D276FBE3A271B56EE13FCAF2C96E48453ED8((&V_2), NULL);
			if (L_11)
			{
				goto IL_009a_1;
			}
		}
		{
			int32_t L_12 = 0;
			V_0 = L_12;
			__this->___U3CU3E1__state_0 = L_12;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_13 = V_2;
			__this->___U3CU3Eu__1_3 = L_13;
			Il2CppCodeGenWriteBarrier((void**)&(((&__this->___U3CU3Eu__1_3))->___m_task_0), (void*)NULL);
			V_3 = __this;
			AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_14 = (&__this->___U3CU3Et__builder_1);
			AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CEnableInitializationAsyncU3Ed__24_t4DF9B311AF91CDF203824EA1DD5CEAAC52ABA88C_m1BDEC89BB66589749DAF15A8EFF5EA7E06CEB476(L_14, (&V_2), (&V_3), AsyncTaskMethodBuilder_AwaitUnsafeOnCompleted_TisTaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833_TisU3CEnableInitializationAsyncU3Ed__24_t4DF9B311AF91CDF203824EA1DD5CEAAC52ABA88C_m1BDEC89BB66589749DAF15A8EFF5EA7E06CEB476_RuntimeMethod_var);
			goto IL_00d2;
		}

IL_007e_1:
		{
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833 L_15 = __this->___U3CU3Eu__1_3;
			V_2 = L_15;
			TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833* L_16 = (&__this->___U3CU3Eu__1_3);
			il2cpp_codegen_initobj(L_16, sizeof(TaskAwaiter_t9B661AC8C2EFA6BAB94C77BB24A5DDA82D61F833));
			int32_t L_17 = (-1);
			V_0 = L_17;
			__this->___U3CU3E1__state_0 = L_17;
		}

IL_009a_1:
		{
			TaskAwaiter_GetResult_mC1D712500AE49B4A89C85D6B79D87D1BA9A6B94D((&V_2), NULL);
			goto IL_00be;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00a4;
		}
		throw e;
	}

CATCH_00a4:
	{// begin catch(System.Exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_18 = (&__this->___U3CU3Et__builder_1);
		Exception_t* L_19 = V_4;
		AsyncTaskMethodBuilder_SetException_mBE41863F0571E0177A15731294087DE45E1FC10B(L_18, L_19, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_00d2;
	}// end catch (depth: 1)

IL_00be:
	{
		// }
		__this->___U3CU3E1__state_0 = ((int32_t)-2);
		AsyncTaskMethodBuilder_t7A5128C134547B5918EB1AA24FE47ED4C1DF3F06* L_20 = (&__this->___U3CU3Et__builder_1);
		AsyncTaskMethodBuilder_SetResult_m76D8B84F0068257C1823B1200B00E58E0C8DDDDE(L_20, NULL);
	}

IL_00d2:
	{
		return;
	}
}
// System.Void Unity.Services.Core.Internal.UnityServicesInternal/<EnableInitializationAsync>d__24::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEnableInitializationAsyncU3Ed__24_SetStateMachine_m3D96F983B264B355592C3D4FFC2C36082AA39FA0 (U3CEnableInitializationAsyncU3Ed__24_t4DF9B311AF91CDF203824EA1DD5CEAAC52ABA88C* __this, RuntimeObject* ___0_stateMachine, const RuntimeMethod* method) 
{
	{
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
// System.Void Unity.Services.Core.Internal.JsonConvertDefaultSettingsScope::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConvertDefaultSettingsScope__ctor_m3826A21D21B591AD29F95F7B8EDC88A4D28617D0 (JsonConvertDefaultSettingsScope_t99E008BFD0664910D1F92DB4536FC5E698C8EE0A* __this, const RuntimeMethod* method) 
{
	{
		// : this((JsonSerializerSettings)null) {}
		JsonConvertDefaultSettingsScope__ctor_m9FD0A65D85DE5E3E5304A89E5135E62ECC58ECA7(__this, (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF*)NULL, (bool)1, NULL);
		// : this((JsonSerializerSettings)null) {}
		return;
	}
}
// System.Void Unity.Services.Core.Internal.JsonConvertDefaultSettingsScope::.ctor(Newtonsoft.Json.JsonSerializerSettings,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConvertDefaultSettingsScope__ctor_m9FD0A65D85DE5E3E5304A89E5135E62ECC58ECA7 (JsonConvertDefaultSettingsScope_t99E008BFD0664910D1F92DB4536FC5E698C8EE0A* __this, JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* ___0_invalidSettings, bool ___1_autoApply, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__0_mA43863B621B23FF2CA4A62E1F17470CBC5D40808_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_tD8C272FFDF458F8EBAAADC6165B340FBEA7F5C6B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_tD8C272FFDF458F8EBAAADC6165B340FBEA7F5C6B* V_0 = NULL;
	bool V_1 = false;
	{
		U3CU3Ec__DisplayClass3_0_tD8C272FFDF458F8EBAAADC6165B340FBEA7F5C6B* L_0 = (U3CU3Ec__DisplayClass3_0_tD8C272FFDF458F8EBAAADC6165B340FBEA7F5C6B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_tD8C272FFDF458F8EBAAADC6165B340FBEA7F5C6B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass3_0__ctor_m2C06B4781B8CA2B5CF68C47BD418CA23D287FDB3(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_tD8C272FFDF458F8EBAAADC6165B340FBEA7F5C6B* L_1 = V_0;
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_2 = ___0_invalidSettings;
		NullCheck(L_1);
		L_1->___invalidSettings_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___invalidSettings_0), (void*)L_2);
		// public JsonConvertDefaultSettingsScope(JsonSerializerSettings invalidSettings, bool autoApply = true)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_HasRegisteredSettings = false;
		__this->___m_HasRegisteredSettings_0 = (bool)0;
		// Callback = () => invalidSettings;
		U3CU3Ec__DisplayClass3_0_tD8C272FFDF458F8EBAAADC6165B340FBEA7F5C6B* L_3 = V_0;
		Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* L_4 = (Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08*)il2cpp_codegen_object_new(Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_1__ctor_mCA643E39063F9A7008EEF900CA5C8A9BBFF7F799(L_4, L_3, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__0_mA43863B621B23FF2CA4A62E1F17470CBC5D40808_RuntimeMethod_var), NULL);
		__this->___Callback_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Callback_1), (void*)L_4);
		// if (autoApply)
		bool L_5 = ___1_autoApply;
		V_1 = L_5;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_003c;
		}
	}
	{
		// Apply();
		JsonConvertDefaultSettingsScope_Apply_m5BB175E7B00CE7BA4F810514CBA28C4363E028BD(__this, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.JsonConvertDefaultSettingsScope::.ctor(System.Collections.Generic.IEnumerable`1<Newtonsoft.Json.JsonConverter>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConvertDefaultSettingsScope__ctor_m7E4965C98F0AF7209C9C962419F8713A5E3E3C25 (JsonConvertDefaultSettingsScope_t99E008BFD0664910D1F92DB4536FC5E698C8EE0A* __this, RuntimeObject* ___0_converters, bool ___1_autoApply, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4D3A0C3BB61FAE2CD50F2FA207948E380C0611FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m59B1652DC03FD212770C484772B3505B50B0982F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t2D3373CEE35E29CDEB531AF0926BF9553626BFDF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* G_B2_0 = NULL;
	JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* G_B2_1 = NULL;
	JsonConvertDefaultSettingsScope_t99E008BFD0664910D1F92DB4536FC5E698C8EE0A* G_B2_2 = NULL;
	JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* G_B1_0 = NULL;
	JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* G_B1_1 = NULL;
	JsonConvertDefaultSettingsScope_t99E008BFD0664910D1F92DB4536FC5E698C8EE0A* G_B1_2 = NULL;
	List_1_t2D3373CEE35E29CDEB531AF0926BF9553626BFDF* G_B3_0 = NULL;
	JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* G_B3_1 = NULL;
	JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* G_B3_2 = NULL;
	JsonConvertDefaultSettingsScope_t99E008BFD0664910D1F92DB4536FC5E698C8EE0A* G_B3_3 = NULL;
	{
		// : this(
		//     new JsonSerializerSettings
		//     {
		//         Converters = converters is null
		//             ? new List<JsonConverter>()
		//             : new List<JsonConverter>(converters),
		//     },
		//     autoApply) {}
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_0 = (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF*)il2cpp_codegen_object_new(JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		JsonSerializerSettings__ctor_mE1C9A90375BA88DF7F6911F1F96AEEC6A98CD22F(L_0, NULL);
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_1 = L_0;
		RuntimeObject* L_2 = ___0_converters;
		G_B1_0 = L_1;
		G_B1_1 = L_1;
		G_B1_2 = __this;
		if (!L_2)
		{
			G_B2_0 = L_1;
			G_B2_1 = L_1;
			G_B2_2 = __this;
			goto IL_0012;
		}
	}
	{
		RuntimeObject* L_3 = ___0_converters;
		List_1_t2D3373CEE35E29CDEB531AF0926BF9553626BFDF* L_4 = (List_1_t2D3373CEE35E29CDEB531AF0926BF9553626BFDF*)il2cpp_codegen_object_new(List_1_t2D3373CEE35E29CDEB531AF0926BF9553626BFDF_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m59B1652DC03FD212770C484772B3505B50B0982F(L_4, L_3, List_1__ctor_m59B1652DC03FD212770C484772B3505B50B0982F_RuntimeMethod_var);
		G_B3_0 = L_4;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0017;
	}

IL_0012:
	{
		List_1_t2D3373CEE35E29CDEB531AF0926BF9553626BFDF* L_5 = (List_1_t2D3373CEE35E29CDEB531AF0926BF9553626BFDF*)il2cpp_codegen_object_new(List_1_t2D3373CEE35E29CDEB531AF0926BF9553626BFDF_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m4D3A0C3BB61FAE2CD50F2FA207948E380C0611FE(L_5, List_1__ctor_m4D3A0C3BB61FAE2CD50F2FA207948E380C0611FE_RuntimeMethod_var);
		G_B3_0 = L_5;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0017:
	{
		NullCheck(G_B3_1);
		JsonSerializerSettings_set_Converters_mF3D958F510BA4BBC18E2D2088EF9D3FC839AFB4C_inline(G_B3_1, G_B3_0, NULL);
		bool L_6 = ___1_autoApply;
		JsonConvertDefaultSettingsScope__ctor_m9FD0A65D85DE5E3E5304A89E5135E62ECC58ECA7(G_B3_3, G_B3_2, L_6, NULL);
		// autoApply) {}
		return;
	}
}
// System.Void Unity.Services.Core.Internal.JsonConvertDefaultSettingsScope::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConvertDefaultSettingsScope_Finalize_m83E086DA0D0183069594CBF695A038B094919D2B (JsonConvertDefaultSettingsScope_t99E008BFD0664910D1F92DB4536FC5E698C8EE0A* __this, const RuntimeMethod* method) 
{
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0009:
			{// begin finally (depth: 1)
				Object_Finalize_mC98C96301CCABFE00F1A7EF8E15DF507CACD42B2(__this, NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// ~JsonConvertDefaultSettingsScope() => Revert();
			JsonConvertDefaultSettingsScope_Revert_mC8B3062748C6D0E7A70233D4EF072B7A863AC844(__this, NULL);
			goto IL_0011;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0011:
	{
		return;
	}
}
// System.Void Unity.Services.Core.Internal.JsonConvertDefaultSettingsScope::Apply()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConvertDefaultSettingsScope_Apply_m5BB175E7B00CE7BA4F810514CBA28C4363E028BD (JsonConvertDefaultSettingsScope_t99E008BFD0664910D1F92DB4536FC5E698C8EE0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (m_HasRegisteredSettings)
		bool L_0 = __this->___m_HasRegisteredSettings_0;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// JsonConvert.DefaultSettings -= Callback;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* L_2;
		L_2 = JsonConvert_get_DefaultSettings_m9E0FA2F335896BD62E6CD277295E7FF580667E4B_inline(NULL);
		Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* L_3 = __this->___Callback_1;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		JsonConvert_set_DefaultSettings_m52DE770DC408DFC48DE586C160F600E083EBBFB4_inline(((Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08*)Castclass((RuntimeObject*)L_4, Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08_il2cpp_TypeInfo_var)), NULL);
	}

IL_0028:
	{
		// JsonConvert.DefaultSettings += Callback;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* L_5;
		L_5 = JsonConvert_get_DefaultSettings_m9E0FA2F335896BD62E6CD277295E7FF580667E4B_inline(NULL);
		Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* L_6 = __this->___Callback_1;
		Delegate_t* L_7;
		L_7 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_5, L_6, NULL);
		JsonConvert_set_DefaultSettings_m52DE770DC408DFC48DE586C160F600E083EBBFB4_inline(((Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08*)Castclass((RuntimeObject*)L_7, Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08_il2cpp_TypeInfo_var)), NULL);
		// m_HasRegisteredSettings = true;
		__this->___m_HasRegisteredSettings_0 = (bool)1;
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.JsonConvertDefaultSettingsScope::Revert()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConvertDefaultSettingsScope_Revert_mC8B3062748C6D0E7A70233D4EF072B7A863AC844 (JsonConvertDefaultSettingsScope_t99E008BFD0664910D1F92DB4536FC5E698C8EE0A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (!m_HasRegisteredSettings)
		bool L_0 = __this->___m_HasRegisteredSettings_0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		// return;
		goto IL_0032;
	}

IL_0010:
	{
		// JsonConvert.DefaultSettings -= Callback;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* L_2;
		L_2 = JsonConvert_get_DefaultSettings_m9E0FA2F335896BD62E6CD277295E7FF580667E4B_inline(NULL);
		Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* L_3 = __this->___Callback_1;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		JsonConvert_set_DefaultSettings_m52DE770DC408DFC48DE586C160F600E083EBBFB4_inline(((Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08*)Castclass((RuntimeObject*)L_4, Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08_il2cpp_TypeInfo_var)), NULL);
		// m_HasRegisteredSettings = false;
		__this->___m_HasRegisteredSettings_0 = (bool)0;
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Unity.Services.Core.Internal.JsonConvertDefaultSettingsScope::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConvertDefaultSettingsScope_System_IDisposable_Dispose_mD1E8844BC1E1034F8776498D5567F7C10F783D78 (JsonConvertDefaultSettingsScope_t99E008BFD0664910D1F92DB4536FC5E698C8EE0A* __this, const RuntimeMethod* method) 
{
	{
		// void IDisposable.Dispose() => Revert();
		JsonConvertDefaultSettingsScope_Revert_mC8B3062748C6D0E7A70233D4EF072B7A863AC844(__this, NULL);
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
// System.Void Unity.Services.Core.Internal.JsonConvertDefaultSettingsScope/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m2C06B4781B8CA2B5CF68C47BD418CA23D287FDB3 (U3CU3Ec__DisplayClass3_0_tD8C272FFDF458F8EBAAADC6165B340FBEA7F5C6B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// Newtonsoft.Json.JsonSerializerSettings Unity.Services.Core.Internal.JsonConvertDefaultSettingsScope/<>c__DisplayClass3_0::<.ctor>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* U3CU3Ec__DisplayClass3_0_U3C_ctorU3Eb__0_mA43863B621B23FF2CA4A62E1F17470CBC5D40808 (U3CU3Ec__DisplayClass3_0_tD8C272FFDF458F8EBAAADC6165B340FBEA7F5C6B* __this, const RuntimeMethod* method) 
{
	{
		// Callback = () => invalidSettings;
		JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* L_0 = __this->___invalidSettings_0;
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
// System.Boolean Unity.Services.Core.Internal.UnityWebRequestUtils::HasSucceeded(UnityEngine.Networking.UnityWebRequest)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityWebRequestUtils_HasSucceeded_m06CCE15DA3423C35C7629483DD6BEB166AE4C32D (UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* ___0_self, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return self.result == UnityWebRequest.Result.Success;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = ___0_self;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = UnityWebRequest_get_result_mEF83848C5FCFB5E307CE4B57E42BF02FC9AED449(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		goto IL_000d;
	}

IL_000d:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Threading.Tasks.Task`1<System.String> Unity.Services.Core.Internal.UnityWebRequestUtils::GetTextAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* UnityWebRequestUtils_GetTextAsync_m2503C3E630F795B5151BBD61295F45AE38AD7EC2 (String_t* ___0_uri, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CGetTextAsyncU3Eg__CompleteFetchTaskOnRequestCompletedU7C0_mFF438AD39102AD7C40D5BB5BE65A4E3AD3AFE759_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_tE8A20757B5DDF368F4E0E479CD24294A218C58C3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_tE8A20757B5DDF368F4E0E479CD24294A218C58C3* V_0 = NULL;
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* V_1 = NULL;
	Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* V_2 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_tE8A20757B5DDF368F4E0E479CD24294A218C58C3* L_0 = (U3CU3Ec__DisplayClass2_0_tE8A20757B5DDF368F4E0E479CD24294A218C58C3*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_tE8A20757B5DDF368F4E0E479CD24294A218C58C3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_m075F5F3DE1F9440556035D45480BD01F7A8932C1(L_0, NULL);
		V_0 = L_0;
		// var completionSource = new TaskCompletionSource<string>();
		U3CU3Ec__DisplayClass2_0_tE8A20757B5DDF368F4E0E479CD24294A218C58C3* L_1 = V_0;
		TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_2 = (TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372*)il2cpp_codegen_object_new(TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1(L_2, TaskCompletionSource_1__ctor_m1E0F0E41DAFB9401D33DE03A55F9BDC5565F0CF1_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___completionSource_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___completionSource_0), (void*)L_2);
		// var request = UnityWebRequest.Get(uri);
		String_t* L_3 = ___0_uri;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4;
		L_4 = UnityWebRequest_Get_m1A332EE069BB5052368307F254A5A7627BB5FD86(L_3, NULL);
		V_1 = L_4;
		// request.SendWebRequest()
		//     .completed += CompleteFetchTaskOnRequestCompleted;
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = V_1;
		NullCheck(L_5);
		UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_6;
		L_6 = UnityWebRequest_SendWebRequest_mA3CD13983BAA5074A0640EDD661B1E46E6DB6C13(L_5, NULL);
		U3CU3Ec__DisplayClass2_0_tE8A20757B5DDF368F4E0E479CD24294A218C58C3* L_7 = V_0;
		Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* L_8 = (Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB*)il2cpp_codegen_object_new(Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Action_1__ctor_m33ABB7530487276910BEFB499A97D33FB2E06D7D(L_8, L_7, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CGetTextAsyncU3Eg__CompleteFetchTaskOnRequestCompletedU7C0_mFF438AD39102AD7C40D5BB5BE65A4E3AD3AFE759_RuntimeMethod_var), NULL);
		NullCheck(L_6);
		AsyncOperation_add_completed_mD6F21BA8127D6D4B7ABDEFAA995A7A347A20A793(L_6, L_8, NULL);
		// return completionSource.Task;
		U3CU3Ec__DisplayClass2_0_tE8A20757B5DDF368F4E0E479CD24294A218C58C3* L_9 = V_0;
		NullCheck(L_9);
		TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_10 = L_9->___completionSource_0;
		NullCheck(L_10);
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_11;
		L_11 = TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_inline(L_10, TaskCompletionSource_1_get_Task_m11D993ACE1C12B89F69CA41E3BAAE3698C3AE587_RuntimeMethod_var);
		V_2 = L_11;
		goto IL_003f;
	}

IL_003f:
	{
		// }
		Task_1_t3D7638C82ED289AF156EDBAE76842D8DF4C4A9E0* L_12 = V_2;
		return L_12;
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
// System.Void Unity.Services.Core.Internal.UnityWebRequestUtils/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m075F5F3DE1F9440556035D45480BD01F7A8932C1 (U3CU3Ec__DisplayClass2_0_tE8A20757B5DDF368F4E0E479CD24294A218C58C3* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void Unity.Services.Core.Internal.UnityWebRequestUtils/<>c__DisplayClass2_0::<GetTextAsync>g__CompleteFetchTaskOnRequestCompleted|0(UnityEngine.AsyncOperation)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3CGetTextAsyncU3Eg__CompleteFetchTaskOnRequestCompletedU7C0_mFF438AD39102AD7C40D5BB5BE65A4E3AD3AFE759 (U3CU3Ec__DisplayClass2_0_tE8A20757B5DDF368F4E0E479CD24294A218C58C3* __this, AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* ___0_rawOperation, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetException_m5E898CFE10256D572CC17EE51C94AD861200FC6C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskCompletionSource_1_TrySetResult_mA357F52C522A4C476C88EDC990A312436084B176_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5116A4464A0039AA9E9C49606A3BCBC374AADA81);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66A691710A0786DD5EDC78CA27D0BC054CD6B34D);
		s_Il2CppMethodInitialized = true;
	}
	UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* V_0 = NULL;
	UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* V_1 = NULL;
	bool V_2 = false;
	String_t* V_3 = NULL;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
	}
	try
	{// begin try (depth: 1)
		{
			// var operation = (UnityWebRequestAsyncOperation)rawOperation;
			AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_0 = ___0_rawOperation;
			V_0 = ((UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C*)CastclassClass((RuntimeObject*)L_0, UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C_il2cpp_TypeInfo_var));
			// using (var operationRequest = operation.webRequest)
			UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* L_1 = V_0;
			NullCheck(L_1);
			UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_2;
			L_2 = UnityWebRequestAsyncOperation_get_webRequest_mF67D15420C7C1C4DCA1BD6F839048A0542998BC3_inline(L_1, NULL);
			V_1 = L_2;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0069_1:
				{// begin finally (depth: 2)
					{
						UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_3 = V_1;
						if (!L_3)
						{
							goto IL_0073_1;
						}
					}
					{
						UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_4 = V_1;
						NullCheck(L_4);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
					}

IL_0073_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					// if (operationRequest.HasSucceeded())
					UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_5 = V_1;
					bool L_6;
					L_6 = UnityWebRequestUtils_HasSucceeded_m06CCE15DA3423C35C7629483DD6BEB166AE4C32D(L_5, NULL);
					V_2 = L_6;
					bool L_7 = V_2;
					if (!L_7)
					{
						goto IL_0036_2;
					}
				}
				{
					// completionSource.TrySetResult(operationRequest.downloadHandler.text);
					TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_8 = __this->___completionSource_0;
					UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_9 = V_1;
					NullCheck(L_9);
					DownloadHandler_t1B56C7D3F65D97A1E4B566A14A1E783EA8AE4EBB* L_10;
					L_10 = UnityWebRequest_get_downloadHandler_m1AA91B23D9D594A4F4FE2975FC356C508528F1D5(L_9, NULL);
					NullCheck(L_10);
					String_t* L_11;
					L_11 = DownloadHandler_get_text_mA6DE5CB2647A21E577B963708DC3D0DA4DBFE7D8(L_10, NULL);
					NullCheck(L_8);
					bool L_12;
					L_12 = TaskCompletionSource_1_TrySetResult_mA357F52C522A4C476C88EDC990A312436084B176(L_8, L_11, TaskCompletionSource_1_TrySetResult_mA357F52C522A4C476C88EDC990A312436084B176_RuntimeMethod_var);
					goto IL_0066_2;
				}

IL_0036_2:
				{
					// var errorMessage = "Couldn't fetch config file." +
					//     $"\nURL: {operationRequest.url}" +
					//     $"\nReason: {operationRequest.error}";
					UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_13 = V_1;
					NullCheck(L_13);
					String_t* L_14;
					L_14 = UnityWebRequest_get_url_mA3BF205A6FCA2BF66A62174182BE84553CE3FFA8(L_13, NULL);
					UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_15 = V_1;
					NullCheck(L_15);
					String_t* L_16;
					L_16 = UnityWebRequest_get_error_m20A5D813ED59118B7AA1D1E2EB5250178B1F5B6F(L_15, NULL);
					String_t* L_17;
					L_17 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral5116A4464A0039AA9E9C49606A3BCBC374AADA81, L_14, _stringLiteral66A691710A0786DD5EDC78CA27D0BC054CD6B34D, L_16, NULL);
					V_3 = L_17;
					// completionSource.TrySetException(new Exception(errorMessage));
					TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_18 = __this->___completionSource_0;
					String_t* L_19 = V_3;
					Exception_t* L_20 = (Exception_t*)il2cpp_codegen_object_new(Exception_t_il2cpp_TypeInfo_var);
					NullCheck(L_20);
					Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_20, L_19, NULL);
					NullCheck(L_18);
					bool L_21;
					L_21 = TaskCompletionSource_1_TrySetException_m5E898CFE10256D572CC17EE51C94AD861200FC6C(L_18, L_20, TaskCompletionSource_1_TrySetException_m5E898CFE10256D572CC17EE51C94AD861200FC6C_RuntimeMethod_var);
				}

IL_0066_2:
				{
					goto IL_0074_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0074_1:
		{
			goto IL_008b;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0077;
		}
		throw e;
	}

CATCH_0077:
	{// begin catch(System.Exception)
		// catch (Exception e)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// completionSource.TrySetException(e);
		TaskCompletionSource_1_tC9FC5C6EACD2138DA270912A14414A2FCA266372* L_22 = __this->___completionSource_0;
		Exception_t* L_23 = V_4;
		NullCheck(L_22);
		bool L_24;
		L_24 = TaskCompletionSource_1_TrySetException_m5E898CFE10256D572CC17EE51C94AD861200FC6C(L_22, L_23, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TaskCompletionSource_1_TrySetException_m5E898CFE10256D572CC17EE51C94AD861200FC6C_RuntimeMethod_var)));
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_008b;
	}// end catch (depth: 1)

IL_008b:
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool AsyncOperation_get_IsDone_mFABF133C322E1F709C84DF9FA4C57C25AE1B28D0_inline (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDone { get; protected set; }
		bool L_0 = __this->___U3CIsDoneU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperation_set_Status_m052C39A5CBBF69314029BE4E2C61FC27CB3614AC_inline (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public AsyncOperationStatus Status { get; protected set; }
		int32_t L_0 = ___0_value;
		__this->___U3CStatusU3Ek__BackingField_1 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperation_set_IsDone_mE51C475EADA09A7ADDF3A1A49CD5E70BE1003443_inline (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, bool ___0_value, const RuntimeMethod* method) 
{
	{
		// public bool IsDone { get; protected set; }
		bool L_0 = ___0_value;
		__this->___U3CIsDoneU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AsyncOperation_set_Exception_m21F6F23F876ADED9AE850C41F324CE8F5334F244_inline (AsyncOperation_t61C50301F6B88D53A578DC2EF1448406FE82C0D0* __this, Exception_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// public Exception Exception { get; protected set; }
		Exception_t* L_0 = ___0_value;
		__this->___U3CExceptionU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExceptionU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_get_CompletedTask_m1567097D0142D009DC8F9B70DA2C55DA651D55E9_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_0 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___U3CCompletedTaskU3Ek__BackingField_16;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Debug_get_unityLogger_m4FDE4D41C187123244FE13124DA636BB50C9C1E1_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_StaticFields*)il2cpp_codegen_static_fields_for(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var))->___s_Logger_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* ComponentRegistry_get_ComponentTypeHashToInstance_mC29AAC6141CC7C8A088B1083CD07A802BF281F20_inline (ComponentRegistry_tE9997750875F6233B090B300FABCF05123E45523* __this, const RuntimeMethod* method) 
{
	{
		// internal Dictionary<int, IServiceComponent> ComponentTypeHashToInstance { get; }
		Dictionary_2_t46C77EF8D9581F272536FD33F85AB49FBB94B1B9* L_0 = __this->___U3CComponentTypeHashToInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CoreRegistry_set_PackageRegistry_mCA3C399854251D17A72BBE1E9121AF7050A46D0B_inline (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal IPackageRegistry PackageRegistry { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CPackageRegistryU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPackageRegistryU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CoreRegistry_set_ComponentRegistry_mF5BBBCDFF2103D1F60E6FA3A7779B06AF3838D8E_inline (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal IComponentRegistry ComponentRegistry { get; private set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CComponentRegistryU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CComponentRegistryU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CoreRegistry_get_PackageRegistry_m0A95E6723D8237E6E9D6D0067FB0EDFCC3C29063_inline (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method) 
{
	{
		// internal IPackageRegistry PackageRegistry { get; private set; }
		RuntimeObject* L_0 = __this->___U3CPackageRegistryU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CoreRegistry_get_ComponentRegistry_mF7CA9E9CEEFF316027E6D59B2AA30AEBA7FAAC13_inline (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* __this, const RuntimeMethod* method) 
{
	{
		// internal IComponentRegistry ComponentRegistry { get; private set; }
		RuntimeObject* L_0 = __this->___U3CComponentRegistryU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t* MissingComponent_get_IntendedType_m97B07B28AD54A741B376A917DCE3635E9479CB59_inline (MissingComponent_t13C6603A039A66B56152AAAE0FFE6025777919A8* __this, const RuntimeMethod* method) 
{
	{
		// public Type IntendedType { get; }
		Type_t* L_0 = __this->___U3CIntendedTypeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t HashException_get_Hash_mFCB1368E904EFFF479EB757C721CBB832D50E023_inline (HashException_tFB110FD771A95A93E65290AC3969485D400E8855* __this, const RuntimeMethod* method) 
{
	{
		// public int Hash { get; }
		int32_t L_0 = __this->___U3CHashU3Ek__BackingField_18;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* LockedPackageRegistry_get_Registry_m4B850C75E991B690CBE9F6E18E50DD0B8C93B51A_inline (LockedPackageRegistry_tD44860DBF1971F04B909E49EDEA6B483DD6A8499* __this, const RuntimeMethod* method) 
{
	{
		// internal IPackageRegistry Registry { get; }
		RuntimeObject* L_0 = __this->___U3CRegistryU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PackageRegistry_set_Tree_m812C188D419BEE03291B07E2F0CF20D7BFA6AE0C_inline (PackageRegistry_tEC69FE10BB71F416B3FFACF803BFAF0EED0448E9* __this, DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* ___0_value, const RuntimeMethod* method) 
{
	{
		// public DependencyTree Tree { get; set; }
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_0 = ___0_value;
		__this->___U3CTreeU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTreeU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* PackageRegistry_get_Tree_m346DB9D9068093E382434951B623D2593072E31B_inline (PackageRegistry_tEC69FE10BB71F416B3FFACF803BFAF0EED0448E9* __this, const RuntimeMethod* method) 
{
	{
		// public DependencyTree Tree { get; set; }
		DependencyTree_tEBAA00C1044A3FFB3C1A7B716CDA96E9B76CD992* L_0 = __this->___U3CTreeU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CoreDiagnostics_get_CoreTags_mC54A82C01F2093E739ED3991670E8E61ACBE1C20_inline (CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* __this, const RuntimeMethod* method) 
{
	{
		// public IDictionary<string, string> CoreTags { get; }
		RuntimeObject* L_0 = __this->___U3CCoreTagsU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CoreDiagnostics_get_Diagnostics_m0BCD0E90698D2D4CC6032CF9B747FC95B0C5CE48_inline (CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* __this, const RuntimeMethod* method) 
{
	{
		// internal IDiagnostics Diagnostics { get; set; }
		RuntimeObject* L_0 = __this->___U3CDiagnosticsU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CoreDiagnostics_get_DiagnosticsComponentProvider_m3BC40B07EE22926D3F63B98F8F6858C382A253A7_inline (CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* __this, const RuntimeMethod* method) 
{
	{
		// internal IDiagnosticsComponentProvider DiagnosticsComponentProvider { get; set; }
		RuntimeObject* L_0 = __this->___U3CDiagnosticsComponentProviderU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CoreDiagnostics_set_Diagnostics_m2AF9AFE612FFCA542EFDB30AC5C15494D2E3982C_inline (CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal IDiagnostics Diagnostics { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CDiagnosticsU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDiagnosticsU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CoreMetrics_get_Metrics_m083DD23C26E29687AE75738D8C57A507082F5329_inline (CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* __this, const RuntimeMethod* method) 
{
	{
		// internal IMetrics Metrics { get; set; }
		RuntimeObject* L_0 = __this->___U3CMetricsU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* CoreMetrics_get_AllPackageMetrics_mAD22D81A59A7B591E50AAF078BF97FFD55E61AF0_inline (CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* __this, const RuntimeMethod* method) 
{
	{
		// internal IDictionary<Type, IMetrics> AllPackageMetrics { get; }
		RuntimeObject* L_0 = __this->___U3CAllPackageMetricsU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CoreMetrics_set_Metrics_mCC95B75592115A7250E45CDCBF77A62DDED6F1FB_inline (CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		// internal IMetrics Metrics { get; set; }
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CMetricsU3Ek__BackingField_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CMetricsU3Ek__BackingField_8), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CoreRegistry_set_Instance_mBFC9CEE6661027ED4103B95A82ABD453555803D7_inline (CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static CoreRegistry Instance { get; internal set; }
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_0 = ___0_value;
		((CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_StaticFields*)il2cpp_codegen_static_fields_for(CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_StaticFields*)il2cpp_codegen_static_fields_for(CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CoreMetrics_set_Instance_mC18703DE5A475E77CBA000AA1602A2A9305AEFD2_inline (CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static CoreMetrics Instance { get; internal set; }
		CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* L_0 = ___0_value;
		((CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564_StaticFields*)il2cpp_codegen_static_fields_for(CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564_StaticFields*)il2cpp_codegen_static_fields_for(CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_7), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CoreDiagnostics_set_Instance_mFEA5BC5137F5C737B49419FA33F79339B1D43F2C_inline (CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static CoreDiagnostics Instance { get; internal set; }
		CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* L_0 = ___0_value;
		((CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571_StaticFields*)il2cpp_codegen_static_fields_for(CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571_StaticFields*)il2cpp_codegen_static_fields_for(CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* CoreRegistry_get_Instance_m73A64BD3CB78EF5AC698D1635B5872CEB9F9AFE2_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static CoreRegistry Instance { get; internal set; }
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_0 = ((CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_StaticFields*)il2cpp_codegen_static_fields_for(CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* CoreMetrics_get_Instance_mE2CA807AAB4F16D20C28256A23E407E5DF5DE74E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static CoreMetrics Instance { get; internal set; }
		CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* L_0 = ((CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564_StaticFields*)il2cpp_codegen_static_fields_for(CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* CoreDiagnostics_get_Instance_m190590CB1205EE50B22E6BA144371BD3976C0963_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static CoreDiagnostics Instance { get; internal set; }
		CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* L_0 = ((CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571_StaticFields*)il2cpp_codegen_static_fields_for(CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityServices_set_Instance_m4C250363E94392D1578BEDE13EF067416804C85C_inline (RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static IUnityServices Instance { get; set; }
		RuntimeObject* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* UnityServices_get_InstantiationCompletion_mA867A00609D9BFFD19B8404887CA781DB60F0AE7_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static TaskCompletionSource<object> InstantiationCompletion { get; set; }
		il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		TaskCompletionSource_1_tB4EF81F69CCF7C4F0D956F9B26127C0634A24A37* L_0 = ((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___U3CInstantiationCompletionU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* UnityServices_get_Instance_m5BA0D657E90B0A0837290E98A0CB13F9D39CA0CD_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal static IUnityServices Instance { get; set; }
		il2cpp_codegen_runtime_class_init_inline(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_StaticFields*)il2cpp_codegen_static_fields_for(UnityServices_t4749F0FB88F542DAC1E287ACFFAB146EF9759317_il2cpp_TypeInfo_var))->___U3CInstanceU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* UnityServicesInternal_get_Metrics_m0052DC91F8B8F1CE98E2A38F979D96C9A2D47750_inline (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) 
{
	{
		// CoreMetrics Metrics { get; }
		CoreMetrics_t07426F0F7AC73A178340BE171F36C1D079CB6564* L_0 = __this->___U3CMetricsU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityServicesInternal_set_Options_mE929B5A9BAFF0C56FE3ADA56904DB80BA1A08E9E_inline (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* ___0_value, const RuntimeMethod* method) 
{
	{
		// public InitializationOptions Options { get; internal set; }
		InitializationOptions_t51AA79A729CADA6922543A7A47F1E87A09DBD17A* L_0 = ___0_value;
		__this->___U3COptionsU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3COptionsU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnityServicesInternal_get_State_mDBBCB10039E6F2A9E04A054AD914C7204E5D39D4_inline (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) 
{
	{
		// public ServicesInitializationState State { get; private set; }
		int32_t L_0 = __this->___U3CStateU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UnityServicesInternal_set_State_mE9661C52A8B99CE53279A6D197F263F082A114D4_inline (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public ServicesInitializationState State { get; private set; }
		int32_t L_0 = ___0_value;
		__this->___U3CStateU3Ek__BackingField_0 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* UnityServicesInternal_get_Diagnostics_m54973089DA076B6D42CA7E9143F2A10BBC508FA3_inline (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) 
{
	{
		// CoreDiagnostics Diagnostics { get; }
		CoreDiagnostics_t49EFB1D1FF2AEF4D8F63E4EA96D7E221B86B2571* L_0 = __this->___U3CDiagnosticsU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* UnityServicesInternal_get_Registry_m523CDA2793D02C2E7966D8B25FF533248D8437A4_inline (UnityServicesInternal_tE99B8F5B128E716B81D1A54474B758048BFFDBBE* __this, const RuntimeMethod* method) 
{
	{
		// CoreRegistry Registry { get; }
		CoreRegistry_t7B61538793CE940CE3A391364C163F1078C9F2BA* L_0 = __this->___U3CRegistryU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonSerializerSettings_set_Converters_mF3D958F510BA4BBC18E2D2088EF9D3FC839AFB4C_inline (JsonSerializerSettings_t152F58F4E62A8349D748C945AF1699F84546D3FF* __this, RuntimeObject* ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_value;
		__this->___U3CConvertersU3Ek__BackingField_46 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CConvertersU3Ek__BackingField_46), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* JsonConvert_get_DefaultSettings_m9E0FA2F335896BD62E6CD277295E7FF580667E4B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* L_0 = ((JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_StaticFields*)il2cpp_codegen_static_fields_for(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var))->___U3CDefaultSettingsU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonConvert_set_DefaultSettings_m52DE770DC408DFC48DE586C160F600E083EBBFB4_inline (Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_1_tBFD60F84D866D7D581A740F0AD1D2726E7052D08* L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var);
		((JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_StaticFields*)il2cpp_codegen_static_fields_for(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var))->___U3CDefaultSettingsU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_StaticFields*)il2cpp_codegen_static_fields_for(JsonConvert_t01281FFED14CC2AEFABB6608315D90ED5C46E0C2_il2cpp_TypeInfo_var))->___U3CDefaultSettingsU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* UnityWebRequestAsyncOperation_get_webRequest_mF67D15420C7C1C4DCA1BD6F839048A0542998BC3_inline (UnityWebRequestAsyncOperation_t14BE94558FF3A2CFC2EFBE2511A3A88252042B8C* __this, const RuntimeMethod* method) 
{
	{
		UnityWebRequest_t6233B8E22992FC2364A831C1ACB033EF3260C39F* L_0 = __this->___U3CwebRequestU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* TaskCompletionSource_1_get_Task_m4994989AA2174905CF517397D0F6B082ADC29EE9_gshared_inline (TaskCompletionSource_1_t8A40BE53A167B6D71D5640881A7A894D8DA94970* __this, const RuntimeMethod* method) 
{
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_0 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)__this->____task_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->klass->rgctx_data, 9));
	// T
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
	const Il2CppFullySharedGenericAny L_9 = L_8;
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_6 = V_0;
		int32_t L_7 = V_1;
		il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		NullCheck(L_6);
		il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_8, SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 9), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_8);
		return;
	}

IL_0034:
	{
		il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? ___0_item : &___0_item), SizeOf_T_t664E2061A913AF1FEE499655BC64F0FDE10D2A5E);
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 14)), il2cpp_rgctx_method(method->klass->rgctx_data, 14), __this, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data(method->klass->rgctx_data, 9)) ? L_9: *(void**)L_9));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_mD2ED26ACAF3BAF386FFEA83893BA51DB9FD8BA30_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m2D9E3398C2A3349E3F0F189A38E881D11DE5AA15_gshared_inline (Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TKey)
	const uint32_t SizeOf_TKey_tD6F5EEADA0A8791813A4EF1C80C94030B153E4B0 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// TKey
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tD6F5EEADA0A8791813A4EF1C80C94030B153E4B0);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_TKey_tD6F5EEADA0A8791813A4EF1C80C94030B153E4B0);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TKey_tD6F5EEADA0A8791813A4EF1C80C94030B153E4B0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m8B42D4B2DE853B9D11B997120CD0228D4780E394_gshared_inline (Enumerator_tF5AC6CD19D283FBD724440520CEE68FE2602F7AF* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_t010616E3077234188F9BB4FAF369F8571BC5F2E1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m77681472C32B9ABB97AE602C0D4C365A0A8E8ACE_gshared_inline (Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TValue)
	const uint32_t SizeOf_TValue_t000C678F2AD05088377B639A262C97D1B73DA1E8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// TValue
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_t000C678F2AD05088377B639A262C97D1B73DA1E8);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_TValue_t000C678F2AD05088377B639A262C97D1B73DA1E8);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TValue_t000C678F2AD05088377B639A262C97D1B73DA1E8);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* Array_Empty_TisIl2CppFullySharedGenericAny_m244E2A51B33F845A2093F0862FBCE502E4FDD868_gshared_inline (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = ((EmptyArray_1_tF69A5F6BAD1150A16C4C98B346D6122FE3751C80_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___Value_0;
		return L_0;
	}
}
