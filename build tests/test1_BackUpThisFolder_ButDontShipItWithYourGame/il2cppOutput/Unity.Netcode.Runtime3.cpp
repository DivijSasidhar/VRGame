﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InterfaceActionInvoker5
{
	typedef void (*Action)(void*, T1, T2, T3, T4, T5, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, p5, invokeData.method);
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
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		void* params[4] = { &p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5;
template <typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerActionInvoker5<T1*, T2, T3, T4, T5>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4, T5 p5)
	{
		void* params[5] = { p1, &p2, &p3, &p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, params[4]);
	}
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<System.UInt64>
struct Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C;
// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
// System.Action`2<System.Int32,Unity.Networking.Transport.NetworkDriver>
struct Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603;
// System.Action`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8;
// System.Action`2<Unity.Netcode.NetworkManager/ConnectionApprovalRequest,Unity.Netcode.NetworkManager/ConnectionApprovalResponse>
struct Action_2_t5E7B4E17493B71D65B87865FA28E6CCE1C2ED68B;
// System.Collections.Generic.Dictionary`2<System.UInt32,System.String>
struct Dictionary_2_t01B2D21278BD46CC9C7FF4A526928B782CC5D2BF;
// System.Collections.Generic.Dictionary`2<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler>
struct Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD;
// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.Transports.UTP.BatchedReceiveQueue>
struct Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A;
// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.NetworkClient>
struct Dictionary_2_t04CE97C57D2E25D600E03BF7F53BDCDDAC05C9DF;
// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.PendingClient>
struct Dictionary_2_tD7776C25E1F5D1B8408431CA83EAAFFE3C4C9684;
// System.Collections.Generic.Dictionary`2<System.UInt64,System.UInt64>
struct Dictionary_2_tE1184E8D53864B83C43E4E0E93F8388CEE760D42;
// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.NetworkManager/ConnectionApprovalResponse>
struct Dictionary_2_t647F7F7CA786348F8808D433385C1B2D157E852A;
// System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E;
// System.Collections.Generic.Dictionary`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>
struct Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C;
// System.Func`2<Unity.Netcode.NetworkObject,System.Boolean>
struct Func_2_t9E0E64156B6C6D11E7637D1AB92AE279580431B1;
// System.Collections.Generic.HashSet`1<Unity.Netcode.NetworkObject>
struct HashSet_1_t4CB93F2D8A0CA74AB045A363BEAA451C9E5C4337;
// System.Collections.Generic.HashSet`1<System.UInt64>
struct HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C;
// System.Collections.Generic.IEqualityComparer`1<System.UInt64>
struct IEqualityComparer_1_t958EAC5D5BD188327B4736D6F82A08EA1476A4C8;
// System.Collections.Generic.IEqualityComparer`1<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget>
struct IEqualityComparer_1_tE64C0B9EDA2F5BACAB333B43424ECA25DB52CAF1;
// System.Collections.Generic.IReadOnlyList`1<Unity.Netcode.NetworkClient>
struct IReadOnlyList_1_t0179361F5E46124A5F314B3F8A3BBF6C9160E9D7;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.UInt64,Unity.Netcode.Transports.UTP.BatchedReceiveQueue>
struct KeyCollection_t44A4E49B5C14FFA8C521AFB181691FE9E37EBD40;
// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55;
// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>
struct KeyCollection_t56099B4F564E3749A78231A91A6D5639B8D2CF0B;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>>
struct List_1_t271481075A654FA9D7D7F2CBC8C8484249302E6A;
// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS>
struct List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A;
// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig>
struct List_1_tBEE447C5DCA2C53BE427F5C2A320C9E183805319;
// System.Collections.Generic.List`1<Unity.Networking.Transport.INetworkInterface>
struct List_1_tC673C156FBD962AEDC0C4957C82DD522010A9BC6;
// System.Collections.Generic.List`1<Unity.Networking.Transport.INetworkProtocol>
struct List_1_t55E70A01F2B19225279AEE9C81F69F51DE1781C0;
// System.Collections.Generic.List`1<Unity.Netcode.NetworkBehaviour>
struct List_1_t77285321F3B26D7A49CBB0F92E556C36504A91F5;
// System.Collections.Generic.List`1<Unity.Netcode.NetworkClient>
struct List_1_t57C6C818F7D91A7154A4799FE6DEFD3ACD6F39A5;
// System.Collections.Generic.List`1<System.UInt64>
struct List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284;
// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<System.Byte>
struct UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D;
// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<System.Int32>
struct UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718;
// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<Unity.Networking.Transport.NetworkEvent>
struct UnsafeList_1_tFD7DB6B00333C2C114D553F48DA91C512E033F99;
// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6;
// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<Unity.Networking.Transport.NetworkDriver/Connection>
struct UnsafeList_1_tF90CD1BACB3990B533D04C98C2C90161BD7F9C20;
// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<Unity.Networking.Transport.NetworkPipelineProcessor/PipelineImpl>
struct UnsafeList_1_t557C9C31121D73D732851DA0465D2D22CFFBF099;
// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<Unity.Networking.Transport.NetworkPipelineProcessor/UpdatePipeline>
struct UnsafeList_1_t5D77D9399869F973DD7861206FE7B0BB5254BEDA;
// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget>
struct UnsafeList_1_t501C48EF6B212CE7B242B47AE1184A6DE456C629;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.UInt64,Unity.Netcode.Transports.UTP.BatchedReceiveQueue>
struct ValueCollection_tD491792D7459A4B5FC0EBC6F918A562110281CBD;
// System.Collections.Generic.Dictionary`2/ValueCollection<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40;
// System.Collections.Generic.Dictionary`2/ValueCollection<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>
struct ValueCollection_t3AB61A931E9B85D29A0A11FA6952A3775A93944D;
// System.Collections.Generic.Dictionary`2/Entry<System.UInt64,Unity.Netcode.Transports.UTP.BatchedReceiveQueue>[]
struct EntryU5BU5D_t035D87369BEA3523150D87EEBF1E2387D9C9D61D;
// System.Collections.Generic.Dictionary`2/Entry<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>[]
struct EntryU5BU5D_tD02EF8C2CDB271018A115A525F07124C6A158D2D;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
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
// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Unity.Netcode.Transports.UTP.BatchedReceiveQueue
struct BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60;
// Unity.Netcode.CustomMessagingManager
struct CustomMessagingManager_t713DDF9DC30FAF5178913295556DD07C946A9746;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// UnityEngine.Networking.HostTopology
struct HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// Unity.Netcode.IDeferredMessageManager
struct IDeferredMessageManager_t4090EBA76E1C9A5B841E21584A74976F383AD793;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Unity.Netcode.INetworkMetrics
struct INetworkMetrics_tE2C13758A950A5C77D2682C15F47914B13AC1C41;
// Unity.Netcode.Transports.UTP.INetworkStreamDriverConstructor
struct INetworkStreamDriverConstructor_t18108EFD3B50331C2FC8D5A90A48A345B33991EA;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// Unity.Netcode.MessagingSystem
struct MessagingSystem_tE5E070D8EDEED13D4D0C9D518961289FB3EE1C5D;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// Unity.Collections.NativeQueueBlockPoolData
struct NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87;
// Unity.Collections.NativeQueueData
struct NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52;
// Unity.Netcode.NetworkBehaviourUpdater
struct NetworkBehaviourUpdater_t215DD428092983D5AECE1BF5BA0576E5070F987C;
// Unity.Netcode.NetworkClient
struct NetworkClient_t4EB5B562D3C8D21DDD5749455CE80E5B12571F64;
// Unity.Netcode.NetworkConfig
struct NetworkConfig_tBDA76D459879B7025939BE0E2AF6D82B4A925113;
// Unity.Netcode.NetworkManager
struct NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468;
// Unity.Netcode.NetworkObject
struct NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366;
// Unity.Netcode.NetworkPrefabHandler
struct NetworkPrefabHandler_tDAE80C95FD27B1749A8657944402C831679B0AAE;
// Unity.Netcode.NetworkSceneManager
struct NetworkSceneManager_tC93DADE5972B29C0860CC236D9E11A74953C65BC;
// Unity.Netcode.NetworkSpawnManager
struct NetworkSpawnManager_t3C69A0FCA3E0961ED401C35188393E80BF22294D;
// Unity.Netcode.NetworkTickSystem
struct NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A;
// Unity.Netcode.NetworkTimeSystem
struct NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2;
// Unity.Netcode.NetworkTransport
struct NetworkTransport_t55E07951299283974C86476F46CC977780560B64;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Unity.Netcode.Transports.UTP.SecretsLoaderHelper
struct SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// Unity.Netcode.Transports.UNET.UNetTransport
struct UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A;
// Unity.Netcode.Transports.UTP.UnityTransport
struct UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4;
// Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData
struct UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4;
// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E;
// Unity.Netcode.NetworkObject/SpawnDelegate
struct SpawnDelegate_t54493DE8F3E71A9E28528811BBD80E50C09BFF57;
// Unity.Netcode.NetworkObject/VisibilityDelegate
struct VisibilityDelegate_t43869941CF7C26CBA2B0FEBB3E7A33BA67D3216A;
// Unity.Netcode.NetworkSpawnManager/<>c
struct U3CU3Ec_t2F0CD5EFD12ED6E2253375C46D6ADFD3C8F47FAF;
// Unity.Netcode.NetworkTransport/TransportEventDelegate
struct TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t0D7218F0DC5E17555FA54256075C4DEAE4B73450_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t9F8C0C6332727DDF63C389AC074D96B4E710BE72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INetworkStreamDriverConstructor_t18108EFD3B50331C2FC8D5A90A48A345B33991EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkDelivery_t8AEDF5FAB32A531130149F7D6D89023D3164D6AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkEvent_tFC4FE8610A831452CA942B169FB11657DA90B9EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkPipelineStageCollection_tFBDFB10FD21D1B4A4D5C2C075ED202AE88BA6C4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StatusCode_tCFBABBFF302C8E7E77B398732A6D400AFFB4BF2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2F0CD5EFD12ED6E2253375C46D6ADFD3C8F47FAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05CBF167EC6A1A27A353BA7420F33D3D4DE42E25;
IL2CPP_EXTERN_C String_t* _stringLiteral0A2B729244E3D5A04BA740FAA8DCEE1B8DDBA97E;
IL2CPP_EXTERN_C String_t* _stringLiteral0E53A2AA9FD828494A9BF31B94B0FAF8E8C9E010;
IL2CPP_EXTERN_C String_t* _stringLiteral1812ED2F2239F62391593B71DE1096D7784E218F;
IL2CPP_EXTERN_C String_t* _stringLiteral1BA280C4AC596D1757D38ADC504F4D2A8588BE09;
IL2CPP_EXTERN_C String_t* _stringLiteral2AA85C92110CB328BBE837E28ECEDDA3F5C5516D;
IL2CPP_EXTERN_C String_t* _stringLiteral357BFB1EF804083E0B58DA274A5B38ADF23E439E;
IL2CPP_EXTERN_C String_t* _stringLiteral35C06E70CFFAB6D4B1FA8BA3D4CC946B326C7AD6;
IL2CPP_EXTERN_C String_t* _stringLiteral3EF5DFD670952324EE6B5D5D6E2A52DA67C831E9;
IL2CPP_EXTERN_C String_t* _stringLiteral4B235B30222078A5FC7AE90F2C05161976D918ED;
IL2CPP_EXTERN_C String_t* _stringLiteral5FC154761871B7293BA5D77E57A16A71359FE4E5;
IL2CPP_EXTERN_C String_t* _stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890;
IL2CPP_EXTERN_C String_t* _stringLiteral6587EEE90C057CAA8DD4C7422F92022B3DF93856;
IL2CPP_EXTERN_C String_t* _stringLiteral664CAAFE95F7B5E13A988EDD87F1858E9E2DC07B;
IL2CPP_EXTERN_C String_t* _stringLiteral6CBC2672C8D6CA64BE38741D0052878AD0261970;
IL2CPP_EXTERN_C String_t* _stringLiteral74EECF6D713962FF58F7C2337A079B5D38A6C2C7;
IL2CPP_EXTERN_C String_t* _stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE;
IL2CPP_EXTERN_C String_t* _stringLiteral77FD1615569DBF8BA4087EE27ADBF29CF2A5B9E3;
IL2CPP_EXTERN_C String_t* _stringLiteral7A9746450EDAE716B0E0568BD80DF1E0892E43FB;
IL2CPP_EXTERN_C String_t* _stringLiteral7BD97639EEDDEB8C0AD70322C13DC2E403EDE616;
IL2CPP_EXTERN_C String_t* _stringLiteral7CD98782E6D2FF48AC2FF228F3F2B3178F849DF9;
IL2CPP_EXTERN_C String_t* _stringLiteral916C78519C75AA6AE931D2AD66B0DFAFC8EBEE40;
IL2CPP_EXTERN_C String_t* _stringLiteral96C502F2672EE8CA635B0E03F0F848B19683110C;
IL2CPP_EXTERN_C String_t* _stringLiteral9CA9192249DD16DC6C6336314648F0964730DA50;
IL2CPP_EXTERN_C String_t* _stringLiteralA9C52582463E83DEFCA4FAE51BCA879063462DA0;
IL2CPP_EXTERN_C String_t* _stringLiteralAD3F9A9908AD3B170B6FC7FE9CCF51827F5D60E4;
IL2CPP_EXTERN_C String_t* _stringLiteralB058672FF385B660C68045DBB9293867E5B42BEA;
IL2CPP_EXTERN_C String_t* _stringLiteralB5E80CC81E53D097220F05E05D90FE868A7865F9;
IL2CPP_EXTERN_C String_t* _stringLiteralB8C6E6FB0B33E536831D450A46311D742B6E95C1;
IL2CPP_EXTERN_C String_t* _stringLiteralBD4B44B128888B4302BD7BE7931C43B8DB6A7EE9;
IL2CPP_EXTERN_C String_t* _stringLiteralC276BCE36EAE8E256DCDEEF94FFF8ED36F843BEB;
IL2CPP_EXTERN_C String_t* _stringLiteralCDFC38B46CD0482AEB5A2A24BE8A5630ED20FDB8;
IL2CPP_EXTERN_C String_t* _stringLiteralD5476B4D26F0D93405A47E7865C0C4B7FC148874;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDF44CEF834FB26EC61FA60F32770FB253815B666;
IL2CPP_EXTERN_C String_t* _stringLiteralE132B6356450125CD39CFDC2E7AE7DFD49FA3F2D;
IL2CPP_EXTERN_C String_t* _stringLiteralE40160D9DA52E2A9F3C180FBFDED668C63CED0AD;
IL2CPP_EXTERN_C String_t* _stringLiteralE41C5B6E51FFAC441D1612E7E7728CE5C169F3A4;
IL2CPP_EXTERN_C String_t* _stringLiteralF258902371641A17276D7E53D25B16B6C26A890B;
IL2CPP_EXTERN_C String_t* _stringLiteralF46C8C626B0603D18028124A986B1EB9408F2744;
IL2CPP_EXTERN_C String_t* _stringLiteralF7B506665CFD025116225A200EEBE1C9FEEF060C;
IL2CPP_EXTERN_C String_t* _stringLiteralFC81C1719B246FAF2B02FB9B639685CDC97C4C8D;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ArraySegment_1_op_Equality_m8DDD8A4F446528A05995B3A15AD7635E28FE244D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisUnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_mDFDF528F272AEE465FED1CE8BB5330AA0F744D28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m370C175FD5C4D5E44F48B00453720BCA3F546BF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m062CEB4C99310EDD758768644696BB43C6F8A27B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Clear_m5050A8ED598E870BB3A292F60CA8F125B0AA6A80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m121C176E03C8FAF9DD3D1327B0A5A740A8DC540A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m157C5C355B3F70983085122641AC4E154A8A2CBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mAE62B9948A0CEE783F66F9E9FC85730381EC7013_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mB93963CC52EF7BACC2DBF92A28CDBD6E79F8A007_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mD42C03F5079D71BA857313B0569975C6B8308ACF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m183C736BA89D63C3380553A7C79BE36E329A3C81_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m9CA0898CE2B1D9B7833037BB9A2F78339ABB90F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m9EACCB2FE62411809CEA75D43888AF7DBBFDD873_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m0A366303BDD0CE0ED424E22C02B38F062EB36795_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m26BDE98ADDE2424456D95202ABA0BAA1D30E079B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m1F79B5C829C4A8219BEA6848A252669AD1032777_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m52C4A26A0A38F9BB56472580045AFD70BEEEC6AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m5A75DFC69FAF26E24498822E4BF541BC7FCE1153_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m6C03A1426C65803A8DBC0AFD73E392C1B4386513_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m9FB01015E439E90A10738C6134B30FC96A29F20D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m62407660FD405CD79B4C3DE43D8D0CC99E4A530B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m722D0C909BE2C23A52B144C90BD4A736F2C22704_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBA961C119140246EE3B77080B59C1B2158E45A94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mFC753F80A7B658E99A5F04CC9ACC52ED9DD1C4B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m03B5BF99A84FB01095607D66EB175C807EEF2178_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m33D28F03A09CA0F36EACEBC301F4F41BEBDB3A4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m65969C1CCF64E71F406D33B69802D5AE2F509049_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mA410D3A25B765A2E862298CB4901BDB78D1189EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_m45582D53760B8E2CB5D77ECA65A9C7B5E3FCE80A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Key_m021A1F603DB4FEC5A0CD6EF0D2D1B681694BEB7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m241D85407DA71D4A8C7A5158985F82472CC4C8C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_Add_m427C263965065B94DF268C9EACBEE0496DC24B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_AsArray_mE16930FF723114AF02B699ADB8009C5162D3761E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_Dispose_m1EAC342766B62EF838C22FC2AB2D96B4354FF784_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_Dispose_mC0442A0F667EFDA4EAA6B6BAC0139B86A935AAD6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_GetEnumerator_m0B13CCF571EFA970C5D524F2113A37B88A43EF6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_ResizeUninitialized_m753321DB060C4AAEC2ACD94AAC4D2766D52A821F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1__ctor_m8C903F568E40A185F0756A7A98CB77CD2619D078_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1__ctor_mE639C651EB144270377F11F9F6F5D985AE431513_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_get_IsCreated_m0088506340DF8D71C5E8A04FD537552F82443F88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NativeList_1_get_Length_mCCFB8F09EBEF5EA454CEA11FDB7B6100AF908D61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NetworkTickSystem__ctor_mC5D8B736EA2491B31CC42F54DB365EAD50AB2271_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m1534AD85F2094EE7E4C958FBEE356468ED7A1B51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mDEB82F7445A31CA12FE47E887EAE322E7ABB1B54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_SizeOf_TisNetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4_mF6303BA38BC2C1FD17880A4274FE9412A9670E0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueCollection_GetEnumerator_m3DED007ABC7D6210DF9239B5958ED9A64AD1733D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* FragmentationPipelineStage_tE8E0162E8E2630293BB6E178E70841B1C8CEA498_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* ReliableSequencedPipelineStage_tF426F5730ACE7F0BF084710243FE5F60DE8EA510_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SimulatorPipelineStageInSend_tA32732D9C7A8471B8CBF9A9DDC85D645A6D88402_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SimulatorPipelineStage_t8716306836063338A91F9A19441327935FDAE218_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* StatusCode_tCFBABBFF302C8E7E77B398732A6D400AFFB4BF2A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UnreliableSequencedPipelineStage_t625184725960F7CD0FC7FF99316E91B304E581AC_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.Transports.UTP.BatchedReceiveQueue>
struct Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t035D87369BEA3523150D87EEBF1E2387D9C9D61D* ____entries_1;
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
	KeyCollection_t44A4E49B5C14FFA8C521AFB181691FE9E37EBD40* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tD491792D7459A4B5FC0EBC6F918A562110281CBD* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>
struct Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_tD02EF8C2CDB271018A115A525F07124C6A158D2D* ____entries_1;
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
	KeyCollection_t56099B4F564E3749A78231A91A6D5639B8D2CF0B* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t3AB61A931E9B85D29A0A11FA6952A3775A93944D* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>
struct KeyCollection_t56099B4F564E3749A78231A91A6D5639B8D2CF0B  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::_dictionary
	Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* ____dictionary_0;
};

// System.Collections.Generic.Dictionary`2/ValueCollection<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>
struct ValueCollection_t3AB61A931E9B85D29A0A11FA6952A3775A93944D  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::_dictionary
	Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* ____dictionary_0;
};

// Unity.Netcode.Transports.UTP.BatchedReceiveQueue
struct BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA  : public RuntimeObject
{
	// System.Byte[] Unity.Netcode.Transports.UTP.BatchedReceiveQueue::m_Data
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_Data_0;
	// System.Int32 Unity.Netcode.Transports.UTP.BatchedReceiveQueue::m_Offset
	int32_t ___m_Offset_1;
	// System.Int32 Unity.Netcode.Transports.UTP.BatchedReceiveQueue::m_Length
	int32_t ___m_Length_2;
};

// UnityEngine.Networking.ConnectionConfig
struct ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60  : public RuntimeObject
{
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_PacketSize
	uint16_t ___m_PacketSize_0;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_FragmentSize
	uint16_t ___m_FragmentSize_1;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ResendTimeout
	uint32_t ___m_ResendTimeout_2;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_DisconnectTimeout
	uint32_t ___m_DisconnectTimeout_3;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ConnectTimeout
	uint32_t ___m_ConnectTimeout_4;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_MinUpdateTimeout
	uint32_t ___m_MinUpdateTimeout_5;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_PingTimeout
	uint32_t ___m_PingTimeout_6;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_ReducedPingTimeout
	uint32_t ___m_ReducedPingTimeout_7;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_AllCostTimeout
	uint32_t ___m_AllCostTimeout_8;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_NetworkDropThreshold
	uint8_t ___m_NetworkDropThreshold_9;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_OverflowDropThreshold
	uint8_t ___m_OverflowDropThreshold_10;
	// System.Byte UnityEngine.Networking.ConnectionConfig::m_MaxConnectionAttempt
	uint8_t ___m_MaxConnectionAttempt_11;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_AckDelay
	uint32_t ___m_AckDelay_12;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_SendDelay
	uint32_t ___m_SendDelay_13;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxCombinedReliableMessageSize
	uint16_t ___m_MaxCombinedReliableMessageSize_14;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxCombinedReliableMessageCount
	uint16_t ___m_MaxCombinedReliableMessageCount_15;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_MaxSentMessageQueueSize
	uint16_t ___m_MaxSentMessageQueueSize_16;
	// UnityEngine.Networking.ConnectionAcksType UnityEngine.Networking.ConnectionConfig::m_AcksType
	int32_t ___m_AcksType_17;
	// System.Boolean UnityEngine.Networking.ConnectionConfig::m_UsePlatformSpecificProtocols
	bool ___m_UsePlatformSpecificProtocols_18;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_InitialBandwidth
	uint32_t ___m_InitialBandwidth_19;
	// System.Single UnityEngine.Networking.ConnectionConfig::m_BandwidthPeakFactor
	float ___m_BandwidthPeakFactor_20;
	// System.UInt16 UnityEngine.Networking.ConnectionConfig::m_WebSocketReceiveBufferMaxSize
	uint16_t ___m_WebSocketReceiveBufferMaxSize_21;
	// System.UInt32 UnityEngine.Networking.ConnectionConfig::m_UdpSocketReceiveBufferMaxSize
	uint32_t ___m_UdpSocketReceiveBufferMaxSize_22;
	// System.String UnityEngine.Networking.ConnectionConfig::m_SSLCertFilePath
	String_t* ___m_SSLCertFilePath_23;
	// System.String UnityEngine.Networking.ConnectionConfig::m_SSLPrivateKeyFilePath
	String_t* ___m_SSLPrivateKeyFilePath_24;
	// System.String UnityEngine.Networking.ConnectionConfig::m_SSLCAFilePath
	String_t* ___m_SSLCAFilePath_25;
	// System.Collections.Generic.List`1<UnityEngine.Networking.ChannelQOS> UnityEngine.Networking.ConnectionConfig::m_Channels
	List_1_t85222FA2E0F2DB3034B433C2580D1D54AF021C9A* ___m_Channels_26;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<System.Byte>> UnityEngine.Networking.ConnectionConfig::m_SharedOrderChannels
	List_1_t271481075A654FA9D7D7F2CBC8C8484249302E6A* ___m_SharedOrderChannels_27;
};

// Unity.Netcode.Transports.UTP.ErrorUtilities
struct ErrorUtilities_tFF4172A99D2F0676EF29BB6FF543177DED356D84  : public RuntimeObject
{
};

// UnityEngine.Networking.HostTopology
struct HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F  : public RuntimeObject
{
	// UnityEngine.Networking.ConnectionConfig UnityEngine.Networking.HostTopology::m_DefConfig
	ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* ___m_DefConfig_0;
	// System.Int32 UnityEngine.Networking.HostTopology::m_MaxDefConnections
	int32_t ___m_MaxDefConnections_1;
	// System.Collections.Generic.List`1<UnityEngine.Networking.ConnectionConfig> UnityEngine.Networking.HostTopology::m_SpecialConnections
	List_1_tBEE447C5DCA2C53BE427F5C2A320C9E183805319* ___m_SpecialConnections_2;
	// System.UInt16 UnityEngine.Networking.HostTopology::m_ReceivedMessagePoolSize
	uint16_t ___m_ReceivedMessagePoolSize_3;
	// System.UInt16 UnityEngine.Networking.HostTopology::m_SentMessagePoolSize
	uint16_t ___m_SentMessagePoolSize_4;
	// System.Single UnityEngine.Networking.HostTopology::m_MessagePoolSizeGrowthFactor
	float ___m_MessagePoolSizeGrowthFactor_5;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// Unity.Netcode.NetworkClient
struct NetworkClient_t4EB5B562D3C8D21DDD5749455CE80E5B12571F64  : public RuntimeObject
{
	// System.UInt64 Unity.Netcode.NetworkClient::ClientId
	uint64_t ___ClientId_0;
	// Unity.Netcode.NetworkObject Unity.Netcode.NetworkClient::PlayerObject
	NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* ___PlayerObject_1;
};

// Unity.Netcode.NetworkTimeSystem
struct NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2  : public RuntimeObject
{
	// System.Double Unity.Netcode.NetworkTimeSystem::m_TimeSec
	double ___m_TimeSec_0;
	// System.Double Unity.Netcode.NetworkTimeSystem::m_CurrentLocalTimeOffset
	double ___m_CurrentLocalTimeOffset_1;
	// System.Double Unity.Netcode.NetworkTimeSystem::m_DesiredLocalTimeOffset
	double ___m_DesiredLocalTimeOffset_2;
	// System.Double Unity.Netcode.NetworkTimeSystem::m_CurrentServerTimeOffset
	double ___m_CurrentServerTimeOffset_3;
	// System.Double Unity.Netcode.NetworkTimeSystem::m_DesiredServerTimeOffset
	double ___m_DesiredServerTimeOffset_4;
	// System.Double Unity.Netcode.NetworkTimeSystem::<LocalBufferSec>k__BackingField
	double ___U3CLocalBufferSecU3Ek__BackingField_5;
	// System.Double Unity.Netcode.NetworkTimeSystem::<ServerBufferSec>k__BackingField
	double ___U3CServerBufferSecU3Ek__BackingField_6;
	// System.Double Unity.Netcode.NetworkTimeSystem::<HardResetThresholdSec>k__BackingField
	double ___U3CHardResetThresholdSecU3Ek__BackingField_7;
	// System.Double Unity.Netcode.NetworkTimeSystem::<AdjustmentRatio>k__BackingField
	double ___U3CAdjustmentRatioU3Ek__BackingField_8;
	// System.Double Unity.Netcode.NetworkTimeSystem::<LastSyncedServerTimeSec>k__BackingField
	double ___U3CLastSyncedServerTimeSecU3Ek__BackingField_9;
	// System.Double Unity.Netcode.NetworkTimeSystem::<LastSyncedRttSec>k__BackingField
	double ___U3CLastSyncedRttSecU3Ek__BackingField_10;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
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

// Unity.Netcode.NetworkSpawnManager/<>c
struct U3CU3Ec_t2F0CD5EFD12ED6E2253375C46D6ADFD3C8F47FAF  : public RuntimeObject
{
};

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 
{
	// T[] System.ArraySegment`1::_array
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
};

// System.ArraySegment`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178 
{
	// T[] System.ArraySegment`1::_array
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____array_1;
	// System.Int32 System.ArraySegment`1::_offset
	int32_t ____offset_2;
	// System.Int32 System.ArraySegment`1::_count
	int32_t ____count_3;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977;

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222;

// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669;

// Unity.Collections.NativeArray`1<System.Byte>
struct NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.Int32>
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<System.Int64>
struct NativeArray_1_t25F6CEC65DB0532CB91E2B2890FF6C2D52A210A3 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<Unity.Networking.Transport.NetworkPipelineStage>
struct NativeArray_1_t1D84CFD52CE97F84261C9C154534A72B0EA66A15 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget>
struct NativeArray_1_t85010600A230013CEAFF0C4764FC2A49F522CBE4 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Nullable`1<System.Boolean>
struct Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	bool ___value_1;
};

// System.Nullable`1<System.UInt32>
struct Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	uint32_t ___value_1;
};

// System.Nullable`1<System.UInt64>
struct Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	uint64_t ___value_1;
};

// System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
typedef Il2CppFullySharedGenericStruct Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339;

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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// Unity.Networking.Transport.NetworkConfigParameter
struct NetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D 
{
	// System.Int32 Unity.Networking.Transport.NetworkConfigParameter::connectTimeoutMS
	int32_t ___connectTimeoutMS_0;
	// System.Int32 Unity.Networking.Transport.NetworkConfigParameter::maxConnectAttempts
	int32_t ___maxConnectAttempts_1;
	// System.Int32 Unity.Networking.Transport.NetworkConfigParameter::disconnectTimeoutMS
	int32_t ___disconnectTimeoutMS_2;
	// System.Int32 Unity.Networking.Transport.NetworkConfigParameter::heartbeatTimeoutMS
	int32_t ___heartbeatTimeoutMS_3;
	// System.Int32 Unity.Networking.Transport.NetworkConfigParameter::maxFrameTimeMS
	int32_t ___maxFrameTimeMS_4;
	// System.Int32 Unity.Networking.Transport.NetworkConfigParameter::fixedFrameTimeMS
	int32_t ___fixedFrameTimeMS_5;
};

// Unity.Networking.Transport.NetworkConnection
struct NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 
{
	// System.Int32 Unity.Networking.Transport.NetworkConnection::m_NetworkId
	int32_t ___m_NetworkId_0;
	// System.Int32 Unity.Networking.Transport.NetworkConnection::m_NetworkVersion
	int32_t ___m_NetworkVersion_1;
};

// Unity.Networking.Transport.NetworkDataStreamParameter
struct NetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA 
{
	// System.Int32 Unity.Networking.Transport.NetworkDataStreamParameter::size
	int32_t ___size_1;
};

// Unity.Netcode.Transports.UTP.NetworkMetricsContext
struct NetworkMetricsContext_t1F0D6EA5D46CAEF908A2BF8795C67F4AB9726ECD 
{
	// System.UInt32 Unity.Netcode.Transports.UTP.NetworkMetricsContext::PacketSentCount
	uint32_t ___PacketSentCount_0;
	// System.UInt32 Unity.Netcode.Transports.UTP.NetworkMetricsContext::PacketReceivedCount
	uint32_t ___PacketReceivedCount_1;
};

// Unity.Networking.Transport.NetworkPipeline
struct NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 
{
	// System.Int32 Unity.Networking.Transport.NetworkPipeline::Id
	int32_t ___Id_0;
};

// Unity.Networking.Transport.NetworkPipelineStageId
struct NetworkPipelineStageId_tBE4FAE81AD1922E0BEEDBC611342E3B0A7B5ECCA 
{
	// System.Int32 Unity.Networking.Transport.NetworkPipelineStageId::Index
	int32_t ___Index_0;
	// System.Int32 Unity.Networking.Transport.NetworkPipelineStageId::IsValid
	int32_t ___IsValid_1;
};

// Unity.Netcode.NetworkTime
struct NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F 
{
	// System.Double Unity.Netcode.NetworkTime::m_TimeSec
	double ___m_TimeSec_0;
	// System.UInt32 Unity.Netcode.NetworkTime::m_TickRate
	uint32_t ___m_TickRate_1;
	// System.Double Unity.Netcode.NetworkTime::m_TickInterval
	double ___m_TickInterval_2;
	// System.Int32 Unity.Netcode.NetworkTime::m_CachedTick
	int32_t ___m_CachedTick_3;
	// System.Double Unity.Netcode.NetworkTime::m_CachedTickOffset
	double ___m_CachedTickOffset_4;
};

// Unity.Mathematics.Random
struct Random_tF24B964D3D5DE57D52CCDBF2E91ACE60F01F5F37 
{
	// System.UInt32 Unity.Mathematics.Random::state
	uint32_t ___state_0;
};

// Unity.Netcode.ReleasedNetworkId
struct ReleasedNetworkId_t7D3158E07773C6B85BCBAA69507DC8BEB8547414 
{
	// System.UInt64 Unity.Netcode.ReleasedNetworkId::NetworkId
	uint64_t ___NetworkId_0;
	// System.Single Unity.Netcode.ReleasedNetworkId::ReleaseTime
	float ___ReleaseTime_1;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// Unity.Networking.Transport.Utilities.SequenceBufferContext
struct SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599 
{
	// System.Int32 Unity.Networking.Transport.Utilities.SequenceBufferContext::Sequence
	int32_t ___Sequence_0;
	// System.Int32 Unity.Networking.Transport.Utilities.SequenceBufferContext::Acked
	int32_t ___Acked_1;
	// System.UInt32 Unity.Networking.Transport.Utilities.SequenceBufferContext::AckMask
	uint32_t ___AckMask_2;
	// System.UInt32 Unity.Networking.Transport.Utilities.SequenceBufferContext::LastAckMask
	uint32_t ___LastAckMask_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128
struct __StaticArrayInitTypeSizeU3D128_t657EFE1E055635FB0333044E0D63FE348A0F2A13 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D128_t657EFE1E055635FB0333044E0D63FE348A0F2A13__padding[128];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256
struct __StaticArrayInitTypeSizeU3D256_t6C6F2B053275FEEDECC666952C89ECDDC30817FD 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D256_t6C6F2B053275FEEDECC666952C89ECDDC30817FD__padding[256];
	};
};

// Unity.Collections.AllocatorManager/AllocatorHandle
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	// System.UInt16 Unity.Collections.AllocatorManager/AllocatorHandle::Index
	uint16_t ___Index_0;
	// System.UInt16 Unity.Collections.AllocatorManager/AllocatorHandle::Version
	uint16_t ___Version_1;
};

// Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress
struct Baselib_NetworkAddress_t2F4AF92B4EEFE31182BADF512CA004AFF48128E0 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data0
			uint8_t ___data0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___data0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data1_1_OffsetPadding[1];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data1
			uint8_t ___data1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___data1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data2_2_OffsetPadding[2];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data2
			uint8_t ___data2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___data2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data3_3_OffsetPadding[3];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data3
			uint8_t ___data3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___data3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data4_4_OffsetPadding[4];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data4
			uint8_t ___data4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___data4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data5_5_OffsetPadding[5];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data5
			uint8_t ___data5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___data5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data6_6_OffsetPadding[6];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data6
			uint8_t ___data6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___data6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data7_7_OffsetPadding[7];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data7
			uint8_t ___data7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___data7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data8_8_OffsetPadding[8];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data8
			uint8_t ___data8_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data8_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___data8_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data9_9_OffsetPadding[9];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data9
			uint8_t ___data9_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data9_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___data9_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data10_10_OffsetPadding[10];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data10
			uint8_t ___data10_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data10_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___data10_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data11_11_OffsetPadding[11];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data11
			uint8_t ___data11_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data11_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___data11_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data12_12_OffsetPadding[12];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data12
			uint8_t ___data12_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data12_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___data12_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data13_13_OffsetPadding[13];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data13
			uint8_t ___data13_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data13_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___data13_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data14_14_OffsetPadding[14];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data14
			uint8_t ___data14_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data14_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___data14_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___data15_15_OffsetPadding[15];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::data15
			uint8_t ___data15_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___data15_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___data15_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_0
			uint8_t ___ipv6_0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___ipv6_0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_1_17_OffsetPadding[1];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_1
			uint8_t ___ipv6_1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_1_17_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___ipv6_1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_2_18_OffsetPadding[2];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_2
			uint8_t ___ipv6_2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_2_18_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___ipv6_2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_3_19_OffsetPadding[3];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_3
			uint8_t ___ipv6_3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_3_19_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___ipv6_3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_4_20_OffsetPadding[4];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_4
			uint8_t ___ipv6_4_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_4_20_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___ipv6_4_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_5_21_OffsetPadding[5];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_5
			uint8_t ___ipv6_5_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_5_21_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___ipv6_5_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_6_22_OffsetPadding[6];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_6
			uint8_t ___ipv6_6_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_6_22_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___ipv6_6_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_7_23_OffsetPadding[7];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_7
			uint8_t ___ipv6_7_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_7_23_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___ipv6_7_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_8_24_OffsetPadding[8];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_8
			uint8_t ___ipv6_8_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_8_24_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___ipv6_8_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_9_25_OffsetPadding[9];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_9
			uint8_t ___ipv6_9_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_9_25_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___ipv6_9_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_10_26_OffsetPadding[10];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_10
			uint8_t ___ipv6_10_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_10_26_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___ipv6_10_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_11_27_OffsetPadding[11];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_11
			uint8_t ___ipv6_11_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_11_27_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___ipv6_11_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_12_28_OffsetPadding[12];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_12
			uint8_t ___ipv6_12_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_12_28_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___ipv6_12_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_13_29_OffsetPadding[13];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_13
			uint8_t ___ipv6_13_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_13_29_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___ipv6_13_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_14_30_OffsetPadding[14];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_14
			uint8_t ___ipv6_14_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_14_30_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___ipv6_14_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_15_31_OffsetPadding[15];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_15
			uint8_t ___ipv6_15_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_15_31_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___ipv6_15_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv4_0
			uint8_t ___ipv4_0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___ipv4_0_32_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv4_1_33_OffsetPadding[1];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv4_1
			uint8_t ___ipv4_1_33;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv4_1_33_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___ipv4_1_33_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv4_2_34_OffsetPadding[2];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv4_2
			uint8_t ___ipv4_2_34;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv4_2_34_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___ipv4_2_34_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv4_3_35_OffsetPadding[3];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv4_3
			uint8_t ___ipv4_3_35;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv4_3_35_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___ipv4_3_35_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___port0_36_OffsetPadding[16];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::port0
			uint8_t ___port0_36;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___port0_36_OffsetPadding_forAlignmentOnly[16];
			uint8_t ___port0_36_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___port1_37_OffsetPadding[17];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::port1
			uint8_t ___port1_37;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___port1_37_OffsetPadding_forAlignmentOnly[17];
			uint8_t ___port1_37_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___family_38_OffsetPadding[18];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::family
			uint8_t ___family_38;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___family_38_OffsetPadding_forAlignmentOnly[18];
			uint8_t ___family_38_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____padding_39_OffsetPadding[19];
			// System.Byte Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::_padding
			uint8_t ____padding_39;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____padding_39_OffsetPadding_forAlignmentOnly[19];
			uint8_t ____padding_39_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ipv6_scope_id_40_OffsetPadding[20];
			// System.UInt32 Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress::ipv6_scope_id
			uint32_t ___ipv6_scope_id_40;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ipv6_scope_id_40_OffsetPadding_forAlignmentOnly[20];
			uint32_t ___ipv6_scope_id_40_forAlignmentOnly;
		};
	};
};

// Unity.Networking.Transport.DataStreamReader/Context
struct Context_tD63E0B178C9748CD0DD094D0A85FEDD8096267C5 
{
	// System.Int32 Unity.Networking.Transport.DataStreamReader/Context::m_ReadByteIndex
	int32_t ___m_ReadByteIndex_0;
	// System.Int32 Unity.Networking.Transport.DataStreamReader/Context::m_BitIndex
	int32_t ___m_BitIndex_1;
	// System.UInt64 Unity.Networking.Transport.DataStreamReader/Context::m_BitBuffer
	uint64_t ___m_BitBuffer_2;
	// System.Int32 Unity.Networking.Transport.DataStreamReader/Context::m_FailedReads
	int32_t ___m_FailedReads_3;
};

// Unity.Networking.Transport.DataStreamWriter/StreamData
struct StreamData_tF9752A5347148C4C2FD2C07D204FABE9539D1E94 
{
	// System.Byte* Unity.Networking.Transport.DataStreamWriter/StreamData::buffer
	uint8_t* ___buffer_0;
	// System.Int32 Unity.Networking.Transport.DataStreamWriter/StreamData::length
	int32_t ___length_1;
	// System.Int32 Unity.Networking.Transport.DataStreamWriter/StreamData::capacity
	int32_t ___capacity_2;
	// System.UInt64 Unity.Networking.Transport.DataStreamWriter/StreamData::bitBuffer
	uint64_t ___bitBuffer_3;
	// System.Int32 Unity.Networking.Transport.DataStreamWriter/StreamData::bitIndex
	int32_t ___bitIndex_4;
	// System.Int32 Unity.Networking.Transport.DataStreamWriter/StreamData::failedWrites
	int32_t ___failedWrites_5;
};

// Unity.Networking.Transport.Relay.RelayAllocationId/<Value>e__FixedBuffer
struct U3CValueU3Ee__FixedBuffer_t0E279F5AD765D68C7D3ADB57B98FD471710955C8 
{
	union
	{
		struct
		{
			// System.Byte Unity.Networking.Transport.Relay.RelayAllocationId/<Value>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CValueU3Ee__FixedBuffer_t0E279F5AD765D68C7D3ADB57B98FD471710955C8__padding[16];
	};
};

// Unity.Networking.Transport.Relay.RelayConnectionData/<Value>e__FixedBuffer
struct U3CValueU3Ee__FixedBuffer_t2EBBD6566B9DD8EF0CBC9EF9A9340955B5792054 
{
	union
	{
		struct
		{
			// System.Byte Unity.Networking.Transport.Relay.RelayConnectionData/<Value>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CValueU3Ee__FixedBuffer_t2EBBD6566B9DD8EF0CBC9EF9A9340955B5792054__padding[255];
	};
};

// Unity.Networking.Transport.Relay.RelayHMACKey/<Value>e__FixedBuffer
struct U3CValueU3Ee__FixedBuffer_t3C8B36A587C8DE2573C0B7FD1CBD94E571B38A67 
{
	union
	{
		struct
		{
			// System.Byte Unity.Networking.Transport.Relay.RelayHMACKey/<Value>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CValueU3Ee__FixedBuffer_t3C8B36A587C8DE2573C0B7FD1CBD94E571B38A67__padding[64];
	};
};

// Unity.Networking.Transport.Relay.RelayServerData/<HMAC>e__FixedBuffer
struct U3CHMACU3Ee__FixedBuffer_tEBE6EB5356C21D7CDAA77E2AB69381855EAD9816 
{
	union
	{
		struct
		{
			// System.Byte Unity.Networking.Transport.Relay.RelayServerData/<HMAC>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CHMACU3Ee__FixedBuffer_tEBE6EB5356C21D7CDAA77E2AB69381855EAD9816__padding[32];
	};
};

// Unity.Networking.Transport.Utilities.ReliableUtility/RTTInfo
struct RTTInfo_tAF1A100DBA67BD0367A9ABA6928B4E574CBE5518 
{
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/RTTInfo::LastRtt
	int32_t ___LastRtt_0;
	// System.Single Unity.Networking.Transport.Utilities.ReliableUtility/RTTInfo::SmoothedRtt
	float ___SmoothedRtt_1;
	// System.Single Unity.Networking.Transport.Utilities.ReliableUtility/RTTInfo::SmoothedVariance
	float ___SmoothedVariance_2;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/RTTInfo::ResendTimeout
	int32_t ___ResendTimeout_3;
};

// Unity.Networking.Transport.Utilities.ReliableUtility/Statistics
struct Statistics_t11CF93D4C83ABFDDFD0BBAD848B752181939A2E5 
{
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/Statistics::PacketsReceived
	int32_t ___PacketsReceived_0;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/Statistics::PacketsSent
	int32_t ___PacketsSent_1;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/Statistics::PacketsDropped
	int32_t ___PacketsDropped_2;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/Statistics::PacketsOutOfOrder
	int32_t ___PacketsOutOfOrder_3;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/Statistics::PacketsDuplicated
	int32_t ___PacketsDuplicated_4;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/Statistics::PacketsStale
	int32_t ___PacketsStale_5;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/Statistics::PacketsResent
	int32_t ___PacketsResent_6;
};

// Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ClientSecrets
struct ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F 
{
	// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ClientSecrets::ServerCommonName
	String_t* ___ServerCommonName_0;
	// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ClientSecrets::ClientCertificate
	String_t* ___ClientCertificate_1;
};
// Native definition for P/Invoke marshalling of Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ClientSecrets
struct ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F_marshaled_pinvoke
{
	char* ___ServerCommonName_0;
	char* ___ClientCertificate_1;
};
// Native definition for COM marshalling of Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ClientSecrets
struct ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F_marshaled_com
{
	Il2CppChar* ___ServerCommonName_0;
	Il2CppChar* ___ClientCertificate_1;
};

// Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ServerSecrets
struct ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C 
{
	// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ServerSecrets::ServerPrivate
	String_t* ___ServerPrivate_0;
	// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ServerSecrets::ServerCertificate
	String_t* ___ServerCertificate_1;
};
// Native definition for P/Invoke marshalling of Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ServerSecrets
struct ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C_marshaled_pinvoke
{
	char* ___ServerPrivate_0;
	char* ___ServerCertificate_1;
};
// Native definition for COM marshalling of Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ServerSecrets
struct ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C_marshaled_com
{
	Il2CppChar* ___ServerPrivate_0;
	Il2CppChar* ___ServerCertificate_1;
};

// Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData
struct ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865 
{
	// System.String Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData::Address
	String_t* ___Address_0;
	// System.UInt16 Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData::Port
	uint16_t ___Port_1;
	// System.String Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData::ServerListenAddress
	String_t* ___ServerListenAddress_2;
};
// Native definition for P/Invoke marshalling of Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData
struct ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshaled_pinvoke
{
	char* ___Address_0;
	uint16_t ___Port_1;
	char* ___ServerListenAddress_2;
};
// Native definition for COM marshalling of Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData
struct ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshaled_com
{
	Il2CppChar* ___Address_0;
	uint16_t ___Port_1;
	Il2CppChar* ___ServerListenAddress_2;
};

// Unity.Netcode.Transports.UTP.UnityTransport/PacketLossCache
struct PacketLossCache_t70FF92B1C896E15478DE602E65D74DD34AADA3D7 
{
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport/PacketLossCache::PacketsReceived
	int32_t ___PacketsReceived_0;
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport/PacketLossCache::PacketsDropped
	int32_t ___PacketsDropped_1;
	// System.Single Unity.Netcode.Transports.UTP.UnityTransport/PacketLossCache::PacketLoss
	float ___PacketLoss_2;
};

// Unity.Netcode.Transports.UTP.UnityTransport/SimulatorParameters
struct SimulatorParameters_tC3C55F01C7027F7CBEA00FBD6828ACBBE16F3A67 
{
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport/SimulatorParameters::PacketDelayMS
	int32_t ___PacketDelayMS_0;
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport/SimulatorParameters::PacketJitterMS
	int32_t ___PacketJitterMS_1;
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport/SimulatorParameters::PacketDropRate
	int32_t ___PacketDropRate_2;
};

// Unity.Collections.NativeArray`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405 
{
	// Unity.Collections.NativeArray`1<T> Unity.Collections.NativeArray`1/Enumerator::m_Array
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___m_Array_0;
	// System.Int32 Unity.Collections.NativeArray`1/Enumerator::m_Index
	int32_t ___m_Index_1;
};

// Unity.Collections.NativeArray`1/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget>
struct Enumerator_t80B573881CD54D322A01D47FD6501B91C9258327 
{
	// Unity.Collections.NativeArray`1<T> Unity.Collections.NativeArray`1/Enumerator::m_Array
	NativeArray_1_t85010600A230013CEAFF0C4764FC2A49F522CBE4 ___m_Array_0;
	// System.Int32 Unity.Collections.NativeArray`1/Enumerator::m_Index
	int32_t ___m_Index_1;
};

// System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1;

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ComputePacketOverheadDelegate>
struct FunctionPointer_1_tF29FF6D2564E315434ED47AB1554C8096BDB3B3A 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ConnectDelegate>
struct FunctionPointer_1_t8C37DE1737CA4B219489A8BE872435F8391F4F08 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/DisconnectDelegate>
struct FunctionPointer_1_t2B11019D68001BBA761F297DF394B647E9B2D0AF 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessReceiveDelegate>
struct FunctionPointer_1_tE199B9295009A8E22A29B6DDD22ED499A663A39B 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendConnectionAcceptDelegate>
struct FunctionPointer_1_t04915FE164A4EB6B97CE508C2D62CCB1830EDD86 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendDelegate>
struct FunctionPointer_1_t10B538976246CA89EE16B10A9A3F981194F98C59 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPingDelegate>
struct FunctionPointer_1_t87DC6AA7478438FC2A893CEFC30932DB880EECFE 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPongDelegate>
struct FunctionPointer_1_t92B1E9993FD30276E18F8D355C528D0024CE9CEF 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/UpdateDelegate>
struct FunctionPointer_1_t646F6606413775C943F0F4782FBB82DED8FB3123 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/AbortSendMessageDelegate>
struct FunctionPointer_1_t605FCD8E1E05F041A75BCDAE5CE44D9A201BFAA1 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/BeginSendMessageDelegate>
struct FunctionPointer_1_t5E2F5FC9CFE7FBBBECA6EB73BABFA0CD5F645155 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/EndSendMessageDelegate>
struct FunctionPointer_1_tD15B3870776AA5A42DBB36B9CCA6AA930B9628DE 
{
	// System.IntPtr Unity.Burst.FunctionPointer`1::_ptr
	intptr_t ____ptr_0;
};

// Unity.Collections.NativeList`1<System.Byte>
struct NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* Unity.Collections.NativeList`1::m_ListData
	UnsafeList_1_t5C65DCA6782B7C9860C859C2F0C07A2C497E822D* ___m_ListData_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeList`1::m_DeprecatedAllocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator_1;
};

// Unity.Collections.NativeList`1<System.Int32>
struct NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* Unity.Collections.NativeList`1::m_ListData
	UnsafeList_1_t6C5E84D303190B625F3759C244502E1735453718* ___m_ListData_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeList`1::m_DeprecatedAllocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator_1;
};

// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkEvent>
struct NativeList_1_t163E4B6B8B23750406A8688DA1D7FD433EF9EDC1 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* Unity.Collections.NativeList`1::m_ListData
	UnsafeList_1_tFD7DB6B00333C2C114D553F48DA91C512E033F99* ___m_ListData_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeList`1::m_DeprecatedAllocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator_1;
};

// Unity.Collections.NativeList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* Unity.Collections.NativeList`1::m_ListData
	UnsafeList_1_t3A26A222433F7993EC942046A500D6EA3DCB97E6* ___m_ListData_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeList`1::m_DeprecatedAllocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator_1;
};

// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkDriver/Connection>
struct NativeList_1_tD3715B1226B4E157D6FC09924FDC7EDC5FC0E8C9 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* Unity.Collections.NativeList`1::m_ListData
	UnsafeList_1_tF90CD1BACB3990B533D04C98C2C90161BD7F9C20* ___m_ListData_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeList`1::m_DeprecatedAllocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator_1;
};

// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkPipelineProcessor/PipelineImpl>
struct NativeList_1_t7D0C4FADF421E663CFE4731E9B320F919701A66C 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* Unity.Collections.NativeList`1::m_ListData
	UnsafeList_1_t557C9C31121D73D732851DA0465D2D22CFFBF099* ___m_ListData_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeList`1::m_DeprecatedAllocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator_1;
};

// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkPipelineProcessor/UpdatePipeline>
struct NativeList_1_t1869FE735F5176A07019C960A26F7477BA6142B3 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* Unity.Collections.NativeList`1::m_ListData
	UnsafeList_1_t5D77D9399869F973DD7861206FE7B0BB5254BEDA* ___m_ListData_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeList`1::m_DeprecatedAllocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator_1;
};

// Unity.Collections.NativeList`1<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget>
struct NativeList_1_t19C42565694B875C975B0E66AD45E82CDE2EE935 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeList`1<T>* Unity.Collections.NativeList`1::m_ListData
	UnsafeList_1_t501C48EF6B212CE7B242B47AE1184A6DE456C629* ___m_ListData_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeList`1::m_DeprecatedAllocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_DeprecatedAllocator_1;
};

// Unity.Collections.NativeQueue`1<System.Int32>
struct NativeQueue_1_tC1DEEC6300FED2BCDE96AFD346BEE6CF8E03412A 
{
	// Unity.Collections.NativeQueueData* Unity.Collections.NativeQueue`1::m_Buffer
	NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* ___m_Buffer_0;
	// Unity.Collections.NativeQueueBlockPoolData* Unity.Collections.NativeQueue`1::m_QueuePool
	NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* ___m_QueuePool_1;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeQueue`1::m_AllocatorLabel
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeQueue`1<Unity.Networking.Transport.QueuedSendMessage>
struct NativeQueue_1_t6F98B587B9BF83745B5D350CBDB27E86744FB2A1 
{
	// Unity.Collections.NativeQueueData* Unity.Collections.NativeQueue`1::m_Buffer
	NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* ___m_Buffer_0;
	// Unity.Collections.NativeQueueBlockPoolData* Unity.Collections.NativeQueue`1::m_QueuePool
	NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* ___m_QueuePool_1;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeQueue`1::m_AllocatorLabel
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeQueue`1<Unity.Networking.Transport.NetworkEventQueue/SubQueueItem>
struct NativeQueue_1_t1998FE7B3590BD3E5658462E15CDFDC7E946B3F8 
{
	// Unity.Collections.NativeQueueData* Unity.Collections.NativeQueue`1::m_Buffer
	NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* ___m_Buffer_0;
	// Unity.Collections.NativeQueueBlockPoolData* Unity.Collections.NativeQueue`1::m_QueuePool
	NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* ___m_QueuePool_1;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeQueue`1::m_AllocatorLabel
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeQueue`1<Unity.Networking.Transport.NetworkPipelineProcessor/UpdatePipeline>
struct NativeQueue_1_t3C5DFC28122633C8F672980038A79B3B7D26790A 
{
	// Unity.Collections.NativeQueueData* Unity.Collections.NativeQueue`1::m_Buffer
	NativeQueueData_t61B94D7FE48C5715DD5D0C8CB574F73BF15C6E52* ___m_Buffer_0;
	// Unity.Collections.NativeQueueBlockPoolData* Unity.Collections.NativeQueue`1::m_QueuePool
	NativeQueueBlockPoolData_t3A0B3E1B852D995248D51AB68660D1B367D28E87* ___m_QueuePool_1;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeQueue`1::m_AllocatorLabel
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeReference`1<System.Int32>
struct NativeReference_1_t142B519FC6820DE38579CF6960317C3BF6EA7EAE 
{
	// System.Void* Unity.Collections.NativeReference`1::m_Data
	void* ___m_Data_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.NativeReference`1::m_AllocatorLabel
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2<System.Int64,Unity.Networking.Transport.NetworkSettings/ParameterSlice>
struct UnsafeHashMap_2_tF7A9469DA8C5BBA8B491A7436DE7FD6D75DE130B 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeHashMapData* Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::m_Buffer
	UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* ___m_Buffer_0;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2::m_AllocatorLabel
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel_1;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tD21904779CC32A6177B4E0D9832E2914FD13FFDA  : public RuntimeObject
{
};

// Unity.Networking.Transport.DataStreamReader
struct DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3 
{
	// System.Byte* Unity.Networking.Transport.DataStreamReader::m_bufferPtr
	uint8_t* ___m_bufferPtr_0;
	// Unity.Networking.Transport.DataStreamReader/Context Unity.Networking.Transport.DataStreamReader::m_Context
	Context_tD63E0B178C9748CD0DD094D0A85FEDD8096267C5 ___m_Context_1;
	// System.Int32 Unity.Networking.Transport.DataStreamReader::m_Length
	int32_t ___m_Length_2;
};

// Unity.Networking.Transport.DataStreamWriter
struct DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA 
{
	// Unity.Networking.Transport.DataStreamWriter/StreamData Unity.Networking.Transport.DataStreamWriter::m_Data
	StreamData_tF9752A5347148C4C2FD2C07D204FABE9539D1E94 ___m_Data_0;
	// System.IntPtr Unity.Networking.Transport.DataStreamWriter::m_SendHandleData
	intptr_t ___m_SendHandleData_1;
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

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// Unity.Jobs.JobHandle
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	// System.IntPtr Unity.Jobs.JobHandle::jobGroup
	intptr_t ___jobGroup_0;
	// System.Int32 Unity.Jobs.JobHandle::version
	int32_t ___version_1;
};

// Unity.Networking.Transport.NetworkEndPoint
struct NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 
{
	// Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress Unity.Networking.Transport.NetworkEndPoint::rawNetworkAddress
	Baselib_NetworkAddress_t2F4AF92B4EEFE31182BADF512CA004AFF48128E0 ___rawNetworkAddress_5;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// Unity.Networking.Transport.Relay.RelayAllocationId
struct RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 
{
	// Unity.Networking.Transport.Relay.RelayAllocationId/<Value>e__FixedBuffer Unity.Networking.Transport.Relay.RelayAllocationId::Value
	U3CValueU3Ee__FixedBuffer_t0E279F5AD765D68C7D3ADB57B98FD471710955C8 ___Value_1;
};

// Unity.Networking.Transport.Relay.RelayConnectionData
struct RelayConnectionData_tA5306A14AEB9FA72A119334CBE01CE0B1F7AC18D 
{
	// Unity.Networking.Transport.Relay.RelayConnectionData/<Value>e__FixedBuffer Unity.Networking.Transport.Relay.RelayConnectionData::Value
	U3CValueU3Ee__FixedBuffer_t2EBBD6566B9DD8EF0CBC9EF9A9340955B5792054 ___Value_1;
};

// Unity.Networking.Transport.Relay.RelayHMACKey
struct RelayHMACKey_t8A1480D4E69892635FBA3B1408C094733613B844 
{
	// Unity.Networking.Transport.Relay.RelayHMACKey/<Value>e__FixedBuffer Unity.Networking.Transport.Relay.RelayHMACKey::Value
	U3CValueU3Ee__FixedBuffer_t3C8B36A587C8DE2573C0B7FD1CBD94E571B38A67 ___Value_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.IO.Stream System.IO.StreamReader::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_3;
	// System.Text.Encoding System.IO.StreamReader::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_4;
	// System.Text.Decoder System.IO.StreamReader::_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ____decoder_5;
	// System.Byte[] System.IO.StreamReader::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_6;
	// System.Char[] System.IO.StreamReader::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_7;
	// System.Int32 System.IO.StreamReader::_charPos
	int32_t ____charPos_8;
	// System.Int32 System.IO.StreamReader::_charLen
	int32_t ____charLen_9;
	// System.Int32 System.IO.StreamReader::_byteLen
	int32_t ____byteLen_10;
	// System.Int32 System.IO.StreamReader::_bytePos
	int32_t ____bytePos_11;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_12;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_13;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_14;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_15;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamReader::_asyncReadTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncReadTask_17;
};

// Unity.Networking.Transport.NetworkDriver/Parameters
struct Parameters_t9967AF7588FE3273938F70B8335411748E0D2742 
{
	// Unity.Networking.Transport.NetworkDataStreamParameter Unity.Networking.Transport.NetworkDriver/Parameters::dataStream
	NetworkDataStreamParameter_t0151BCC5F97AE52ECE6BAF1351C7E8FF6E070CFA ___dataStream_0;
	// Unity.Networking.Transport.NetworkConfigParameter Unity.Networking.Transport.NetworkDriver/Parameters::config
	NetworkConfigParameter_t2AA94683DFCAE075DB53029EE1C08A72B5E2C22D ___config_1;
};

// Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext
struct SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0 
{
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext::WindowSize
	int32_t ___WindowSize_0;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext::MinimumResendTime
	int32_t ___MinimumResendTime_1;
	// Unity.Networking.Transport.Utilities.SequenceBufferContext Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext::SentPackets
	SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599 ___SentPackets_2;
	// Unity.Networking.Transport.Utilities.SequenceBufferContext Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext::ReceivedPackets
	SequenceBufferContext_tCDD8D043109579611EC4BF49D7CD31756AAF2599 ___ReceivedPackets_3;
	// Unity.Networking.Transport.Utilities.ReliableUtility/Statistics Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext::stats
	Statistics_t11CF93D4C83ABFDDFD0BBAD848B752181939A2E5 ___stats_4;
	// Unity.Networking.Transport.Utilities.ReliableUtility/ErrorCodes Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext::errorCode
	int32_t ___errorCode_5;
	// Unity.Networking.Transport.Utilities.ReliableUtility/RTTInfo Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext::RttInfo
	RTTInfo_tAF1A100DBA67BD0367A9ABA6928B4E574CBE5518 ___RttInfo_6;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext::TimerDataOffset
	int32_t ___TimerDataOffset_7;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext::TimerDataStride
	int32_t ___TimerDataStride_8;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext::RemoteTimerDataOffset
	int32_t ___RemoteTimerDataOffset_9;
	// System.Int32 Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext::RemoteTimerDataStride
	int32_t ___RemoteTimerDataStride_10;
};

// Unity.Netcode.Transports.UTP.UnityTransport/SendTarget
struct SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 
{
	// System.UInt64 Unity.Netcode.Transports.UTP.UnityTransport/SendTarget::ClientId
	uint64_t ___ClientId_0;
	// Unity.Networking.Transport.NetworkPipeline Unity.Netcode.Transports.UTP.UnityTransport/SendTarget::NetworkPipeline
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___NetworkPipeline_1;
};

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>
struct Enumerator_t5792751BB1368B27B31A13289F8E53829A2E45F4 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_dictionary
	Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_version
	int32_t ____version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::_currentKey
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ____currentKey_3;
};

// Unity.Collections.NativeHashMap`2<System.Int64,Unity.Networking.Transport.NetworkSettings/ParameterSlice>
struct NativeHashMap_2_tCD58FF7DD75EEFB0E828AE808528187662F809FC 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2<TKey,TValue> Unity.Collections.NativeHashMap`2::m_HashMapData
	UnsafeHashMap_2_tF7A9469DA8C5BBA8B491A7436DE7FD6D75DE130B ___m_HashMapData_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ComputePacketOverheadDelegate>
struct TransportFunctionPointer_1_t403A4BA6983AC49EB5EDF3EB14F092C746490EFF 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_tF29FF6D2564E315434ED47AB1554C8096BDB3B3A ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ConnectDelegate>
struct TransportFunctionPointer_1_t71E737606530D4C87CDCF73063247BA844270CFF 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t8C37DE1737CA4B219489A8BE872435F8391F4F08 ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/DisconnectDelegate>
struct TransportFunctionPointer_1_t8CB155AD69427676535F5D25A3C9408D5012DDB0 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t2B11019D68001BBA761F297DF394B647E9B2D0AF ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessReceiveDelegate>
struct TransportFunctionPointer_1_tF0C75E421ACA913F2FA062ED002F9586FEA669FC 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_tE199B9295009A8E22A29B6DDD22ED499A663A39B ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendConnectionAcceptDelegate>
struct TransportFunctionPointer_1_t8BEB3732EF9358D73F93626B99D9423182E4C47D 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t04915FE164A4EB6B97CE508C2D62CCB1830EDD86 ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendDelegate>
struct TransportFunctionPointer_1_t77C607A1DCF675C39F99E9EEE5AB36FB7CC494B1 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t10B538976246CA89EE16B10A9A3F981194F98C59 ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPingDelegate>
struct TransportFunctionPointer_1_t97CB0A2F7C4082FD45ACA0AE4155845480AE8843 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t87DC6AA7478438FC2A893CEFC30932DB880EECFE ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPongDelegate>
struct TransportFunctionPointer_1_t1974F1C28035CE103ECF0504CE8E87D6037E0398 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t92B1E9993FD30276E18F8D355C528D0024CE9CEF ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/UpdateDelegate>
struct TransportFunctionPointer_1_tBB4FC4ACEB955CF3ECDC5FB78DE9132C126522F2 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t646F6606413775C943F0F4782FBB82DED8FB3123 ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/AbortSendMessageDelegate>
struct TransportFunctionPointer_1_t6BF0E9809FEF820449ED4B566281FFDB8B1F6807 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t605FCD8E1E05F041A75BCDAE5CE44D9A201BFAA1 ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/BeginSendMessageDelegate>
struct TransportFunctionPointer_1_t9F2FD24758ADF9E597DCA02A01D7972B74AF6736 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_t5E2F5FC9CFE7FBBBECA6EB73BABFA0CD5F645155 ___Ptr_0;
};

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/EndSendMessageDelegate>
struct TransportFunctionPointer_1_t1933A8E5B03799A74CE910DB0A4F8FF67DD0405D 
{
	// Unity.Burst.FunctionPointer`1<T> Unity.Networking.Transport.TransportFunctionPointer`1::Ptr
	FunctionPointer_1_tD15B3870776AA5A42DBB36B9CCA6AA930B9628DE ___Ptr_0;
};

// Unity.Netcode.Transports.UTP.BatchedSendQueue
struct BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 
{
	// Unity.Collections.NativeList`1<System.Byte> Unity.Netcode.Transports.UTP.BatchedSendQueue::m_Data
	NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___m_Data_0;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Netcode.Transports.UTP.BatchedSendQueue::m_HeadTailIndices
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_HeadTailIndices_1;
	// System.Int32 Unity.Netcode.Transports.UTP.BatchedSendQueue::m_MaximumCapacity
	int32_t ___m_MaximumCapacity_2;
	// System.Int32 Unity.Netcode.Transports.UTP.BatchedSendQueue::m_MinimumCapacity
	int32_t ___m_MinimumCapacity_3;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// Unity.Networking.Transport.NetworkEventQueue
struct NetworkEventQueue_tDE8EC1A139521E69F9BBEC2D54C58B58E44CA723 
{
	// Unity.Collections.NativeQueue`1<Unity.Networking.Transport.NetworkEventQueue/SubQueueItem> Unity.Networking.Transport.NetworkEventQueue::m_MasterEventQ
	NativeQueue_1_t1998FE7B3590BD3E5658462E15CDFDC7E946B3F8 ___m_MasterEventQ_0;
	// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkEvent> Unity.Networking.Transport.NetworkEventQueue::m_ConnectionEventQ
	NativeList_1_t163E4B6B8B23750406A8688DA1D7FD433EF9EDC1 ___m_ConnectionEventQ_1;
	// Unity.Collections.NativeList`1<System.Int32> Unity.Networking.Transport.NetworkEventQueue::m_ConnectionEventHeadTail
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___m_ConnectionEventHeadTail_2;
};

// Unity.Networking.Transport.NetworkPipelineProcessor
struct NetworkPipelineProcessor_tB90104D304F7FE6A0E8BB5AD39C95B2441F6E59C 
{
	// Unity.Collections.NativeArray`1<Unity.Networking.Transport.NetworkPipelineStage> Unity.Networking.Transport.NetworkPipelineProcessor::m_StageCollection
	NativeArray_1_t1D84CFD52CE97F84261C9C154534A72B0EA66A15 ___m_StageCollection_2;
	// Unity.Collections.NativeArray`1<System.Byte> Unity.Networking.Transport.NetworkPipelineProcessor::m_StaticInstanceBuffer
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_StaticInstanceBuffer_3;
	// Unity.Collections.NativeList`1<System.Int32> Unity.Networking.Transport.NetworkPipelineProcessor::m_StageList
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___m_StageList_4;
	// Unity.Collections.NativeList`1<System.Int32> Unity.Networking.Transport.NetworkPipelineProcessor::m_AccumulatedHeaderCapacity
	NativeList_1_t0EA735A94E6EBF8FE7F3B79411C98BF692EA2213 ___m_AccumulatedHeaderCapacity_5;
	// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkPipelineProcessor/PipelineImpl> Unity.Networking.Transport.NetworkPipelineProcessor::m_Pipelines
	NativeList_1_t7D0C4FADF421E663CFE4731E9B320F919701A66C ___m_Pipelines_6;
	// Unity.Collections.NativeList`1<System.Byte> Unity.Networking.Transport.NetworkPipelineProcessor::m_ReceiveBuffer
	NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___m_ReceiveBuffer_7;
	// Unity.Collections.NativeList`1<System.Byte> Unity.Networking.Transport.NetworkPipelineProcessor::m_SendBuffer
	NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___m_SendBuffer_8;
	// Unity.Collections.NativeList`1<System.Byte> Unity.Networking.Transport.NetworkPipelineProcessor::m_SharedBuffer
	NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___m_SharedBuffer_9;
	// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkPipelineProcessor/UpdatePipeline> Unity.Networking.Transport.NetworkPipelineProcessor::m_ReceiveStageNeedsUpdate
	NativeList_1_t1869FE735F5176A07019C960A26F7477BA6142B3 ___m_ReceiveStageNeedsUpdate_10;
	// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkPipelineProcessor/UpdatePipeline> Unity.Networking.Transport.NetworkPipelineProcessor::m_SendStageNeedsUpdate
	NativeList_1_t1869FE735F5176A07019C960A26F7477BA6142B3 ___m_SendStageNeedsUpdate_11;
	// Unity.Collections.NativeQueue`1<Unity.Networking.Transport.NetworkPipelineProcessor/UpdatePipeline> Unity.Networking.Transport.NetworkPipelineProcessor::m_SendStageNeedsUpdateRead
	NativeQueue_1_t3C5DFC28122633C8F672980038A79B3B7D26790A ___m_SendStageNeedsUpdateRead_12;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Networking.Transport.NetworkPipelineProcessor::sizePerConnection
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___sizePerConnection_13;
	// Unity.Collections.NativeArray`1<System.Int64> Unity.Networking.Transport.NetworkPipelineProcessor::m_timestamp
	NativeArray_1_t25F6CEC65DB0532CB91E2B2890FF6C2D52A210A3 ___m_timestamp_14;
};

// Unity.Netcode.NetworkTickSystem
struct NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A  : public RuntimeObject
{
	// System.UInt32 Unity.Netcode.NetworkTickSystem::<TickRate>k__BackingField
	uint32_t ___U3CTickRateU3Ek__BackingField_2;
	// Unity.Netcode.NetworkTime Unity.Netcode.NetworkTickSystem::<LocalTime>k__BackingField
	NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F ___U3CLocalTimeU3Ek__BackingField_3;
	// Unity.Netcode.NetworkTime Unity.Netcode.NetworkTickSystem::<ServerTime>k__BackingField
	NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F ___U3CServerTimeU3Ek__BackingField_4;
	// System.Action Unity.Netcode.NetworkTickSystem::Tick
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___Tick_5;
};

// Unity.Networking.Transport.Relay.RelayServerData
struct RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09 
{
	// Unity.Networking.Transport.NetworkEndPoint Unity.Networking.Transport.Relay.RelayServerData::Endpoint
	NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ___Endpoint_0;
	// System.UInt16 Unity.Networking.Transport.Relay.RelayServerData::Nonce
	uint16_t ___Nonce_1;
	// Unity.Networking.Transport.Relay.RelayConnectionData Unity.Networking.Transport.Relay.RelayServerData::ConnectionData
	RelayConnectionData_tA5306A14AEB9FA72A119334CBE01CE0B1F7AC18D ___ConnectionData_2;
	// Unity.Networking.Transport.Relay.RelayConnectionData Unity.Networking.Transport.Relay.RelayServerData::HostConnectionData
	RelayConnectionData_tA5306A14AEB9FA72A119334CBE01CE0B1F7AC18D ___HostConnectionData_3;
	// Unity.Networking.Transport.Relay.RelayAllocationId Unity.Networking.Transport.Relay.RelayServerData::AllocationId
	RelayAllocationId_tAD787B0E59C71831D70A45A63526CBC685AA2984 ___AllocationId_4;
	// Unity.Networking.Transport.Relay.RelayHMACKey Unity.Networking.Transport.Relay.RelayServerData::HMACKey
	RelayHMACKey_t8A1480D4E69892635FBA3B1408C094733613B844 ___HMACKey_5;
	// Unity.Networking.Transport.Relay.RelayServerData/<HMAC>e__FixedBuffer Unity.Networking.Transport.Relay.RelayServerData::HMAC
	U3CHMACU3Ee__FixedBuffer_tEBE6EB5356C21D7CDAA77E2AB69381855EAD9816 ___HMAC_6;
	// System.Byte Unity.Networking.Transport.Relay.RelayServerData::IsSecure
	uint8_t ___IsSecure_7;
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

// System.WeakReference
struct WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E  : public RuntimeObject
{
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___gcHandle_1;
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404  : public MulticastDelegate_t
{
};

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};

// System.Action`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8  : public MulticastDelegate_t
{
};

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>
struct Enumerator_t78A82A05AC2820BE318F9F3DAD0F9B1802CB97FB 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_dictionary
	Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_version
	int32_t ____version_2;
	// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator::_currentValue
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 ____currentValue_3;
};

// System.Collections.Generic.KeyValuePair`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>
struct KeyValuePair_2_tD9D8D451DD3BF1ED3A1A65D8945C85F8A5C93293 
{
	// TKey System.Collections.Generic.KeyValuePair`2::key
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 ___value_1;
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

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// Unity.Networking.Transport.NetworkProtocol
struct NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9 
{
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ComputePacketOverheadDelegate> Unity.Networking.Transport.NetworkProtocol::ComputePacketOverhead
	TransportFunctionPointer_1_t403A4BA6983AC49EB5EDF3EB14F092C746490EFF ___ComputePacketOverhead_0;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessReceiveDelegate> Unity.Networking.Transport.NetworkProtocol::ProcessReceive
	TransportFunctionPointer_1_tF0C75E421ACA913F2FA062ED002F9586FEA669FC ___ProcessReceive_1;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendDelegate> Unity.Networking.Transport.NetworkProtocol::ProcessSend
	TransportFunctionPointer_1_t77C607A1DCF675C39F99E9EEE5AB36FB7CC494B1 ___ProcessSend_2;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendConnectionAcceptDelegate> Unity.Networking.Transport.NetworkProtocol::ProcessSendConnectionAccept
	TransportFunctionPointer_1_t8BEB3732EF9358D73F93626B99D9423182E4C47D ___ProcessSendConnectionAccept_3;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ConnectDelegate> Unity.Networking.Transport.NetworkProtocol::Connect
	TransportFunctionPointer_1_t71E737606530D4C87CDCF73063247BA844270CFF ___Connect_4;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/DisconnectDelegate> Unity.Networking.Transport.NetworkProtocol::Disconnect
	TransportFunctionPointer_1_t8CB155AD69427676535F5D25A3C9408D5012DDB0 ___Disconnect_5;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPingDelegate> Unity.Networking.Transport.NetworkProtocol::ProcessSendPing
	TransportFunctionPointer_1_t97CB0A2F7C4082FD45ACA0AE4155845480AE8843 ___ProcessSendPing_6;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPongDelegate> Unity.Networking.Transport.NetworkProtocol::ProcessSendPong
	TransportFunctionPointer_1_t1974F1C28035CE103ECF0504CE8E87D6037E0398 ___ProcessSendPong_7;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/UpdateDelegate> Unity.Networking.Transport.NetworkProtocol::Update
	TransportFunctionPointer_1_tBB4FC4ACEB955CF3ECDC5FB78DE9132C126522F2 ___Update_8;
	// System.IntPtr Unity.Networking.Transport.NetworkProtocol::UserData
	intptr_t ___UserData_9;
	// System.Int32 Unity.Networking.Transport.NetworkProtocol::MaxHeaderSize
	int32_t ___MaxHeaderSize_10;
	// System.Int32 Unity.Networking.Transport.NetworkProtocol::MaxFooterSize
	int32_t ___MaxFooterSize_11;
	// System.Boolean Unity.Networking.Transport.NetworkProtocol::NeedsUpdate
	bool ___NeedsUpdate_12;
};
// Native definition for P/Invoke marshalling of Unity.Networking.Transport.NetworkProtocol
struct NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9_marshaled_pinvoke
{
	TransportFunctionPointer_1_t403A4BA6983AC49EB5EDF3EB14F092C746490EFF ___ComputePacketOverhead_0;
	TransportFunctionPointer_1_tF0C75E421ACA913F2FA062ED002F9586FEA669FC ___ProcessReceive_1;
	TransportFunctionPointer_1_t77C607A1DCF675C39F99E9EEE5AB36FB7CC494B1 ___ProcessSend_2;
	TransportFunctionPointer_1_t8BEB3732EF9358D73F93626B99D9423182E4C47D ___ProcessSendConnectionAccept_3;
	TransportFunctionPointer_1_t71E737606530D4C87CDCF73063247BA844270CFF ___Connect_4;
	TransportFunctionPointer_1_t8CB155AD69427676535F5D25A3C9408D5012DDB0 ___Disconnect_5;
	TransportFunctionPointer_1_t97CB0A2F7C4082FD45ACA0AE4155845480AE8843 ___ProcessSendPing_6;
	TransportFunctionPointer_1_t1974F1C28035CE103ECF0504CE8E87D6037E0398 ___ProcessSendPong_7;
	TransportFunctionPointer_1_tBB4FC4ACEB955CF3ECDC5FB78DE9132C126522F2 ___Update_8;
	intptr_t ___UserData_9;
	int32_t ___MaxHeaderSize_10;
	int32_t ___MaxFooterSize_11;
	int32_t ___NeedsUpdate_12;
};
// Native definition for COM marshalling of Unity.Networking.Transport.NetworkProtocol
struct NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9_marshaled_com
{
	TransportFunctionPointer_1_t403A4BA6983AC49EB5EDF3EB14F092C746490EFF ___ComputePacketOverhead_0;
	TransportFunctionPointer_1_tF0C75E421ACA913F2FA062ED002F9586FEA669FC ___ProcessReceive_1;
	TransportFunctionPointer_1_t77C607A1DCF675C39F99E9EEE5AB36FB7CC494B1 ___ProcessSend_2;
	TransportFunctionPointer_1_t8BEB3732EF9358D73F93626B99D9423182E4C47D ___ProcessSendConnectionAccept_3;
	TransportFunctionPointer_1_t71E737606530D4C87CDCF73063247BA844270CFF ___Connect_4;
	TransportFunctionPointer_1_t8CB155AD69427676535F5D25A3C9408D5012DDB0 ___Disconnect_5;
	TransportFunctionPointer_1_t97CB0A2F7C4082FD45ACA0AE4155845480AE8843 ___ProcessSendPing_6;
	TransportFunctionPointer_1_t1974F1C28035CE103ECF0504CE8E87D6037E0398 ___ProcessSendPong_7;
	TransportFunctionPointer_1_tBB4FC4ACEB955CF3ECDC5FB78DE9132C126522F2 ___Update_8;
	intptr_t ___UserData_9;
	int32_t ___MaxHeaderSize_10;
	int32_t ___MaxFooterSize_11;
	int32_t ___NeedsUpdate_12;
};

// Unity.Networking.Transport.NetworkSendInterface
struct NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035 
{
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/BeginSendMessageDelegate> Unity.Networking.Transport.NetworkSendInterface::BeginSendMessage
	TransportFunctionPointer_1_t9F2FD24758ADF9E597DCA02A01D7972B74AF6736 ___BeginSendMessage_0;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/EndSendMessageDelegate> Unity.Networking.Transport.NetworkSendInterface::EndSendMessage
	TransportFunctionPointer_1_t1933A8E5B03799A74CE910DB0A4F8FF67DD0405D ___EndSendMessage_1;
	// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/AbortSendMessageDelegate> Unity.Networking.Transport.NetworkSendInterface::AbortSendMessage
	TransportFunctionPointer_1_t6BF0E9809FEF820449ED4B566281FFDB8B1F6807 ___AbortSendMessage_2;
	// System.IntPtr Unity.Networking.Transport.NetworkSendInterface::UserData
	intptr_t ___UserData_3;
};

// Unity.Networking.Transport.NetworkSettings
struct NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0 
{
	// Unity.Collections.NativeHashMap`2<System.Int64,Unity.Networking.Transport.NetworkSettings/ParameterSlice> Unity.Networking.Transport.NetworkSettings::m_ParameterOffsets
	NativeHashMap_2_tCD58FF7DD75EEFB0E828AE808528187662F809FC ___m_ParameterOffsets_1;
	// Unity.Collections.NativeList`1<System.Byte> Unity.Networking.Transport.NetworkSettings::m_Parameters
	NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___m_Parameters_2;
	// System.Byte Unity.Networking.Transport.NetworkSettings::m_Initialized
	uint8_t ___m_Initialized_3;
};

// Unity.Netcode.NetworkTransport/TransportEventDelegate
struct TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135  : public MulticastDelegate_t
{
};

// System.Collections.Generic.Dictionary`2/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>
struct Enumerator_t88E97C0EC0DCA5E1994B18881637E25E4AEC96AD 
{
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_dictionary
	Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* ____dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_index
	int32_t ____index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::_current
	KeyValuePair_2_tD9D8D451DD3BF1ED3A1A65D8945C85F8A5C93293 ____current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::_getEnumeratorRetType
	int32_t ____getEnumeratorRetType_4;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Unity.Networking.Transport.NetworkDriver
struct NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036 
{
	// System.Int32 Unity.Networking.Transport.NetworkDriver::m_NetworkInterfaceIndex
	int32_t ___m_NetworkInterfaceIndex_2;
	// Unity.Networking.Transport.NetworkSendInterface Unity.Networking.Transport.NetworkDriver::m_NetworkSendInterface
	NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035 ___m_NetworkSendInterface_3;
	// System.Int32 Unity.Networking.Transport.NetworkDriver::m_NetworkProtocolIndex
	int32_t ___m_NetworkProtocolIndex_4;
	// Unity.Networking.Transport.NetworkProtocol Unity.Networking.Transport.NetworkDriver::m_NetworkProtocolInterface
	NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9 ___m_NetworkProtocolInterface_5;
	// Unity.Collections.NativeQueue`1<Unity.Networking.Transport.QueuedSendMessage> Unity.Networking.Transport.NetworkDriver::m_ParallelSendQueue
	NativeQueue_1_t6F98B587B9BF83745B5D350CBDB27E86744FB2A1 ___m_ParallelSendQueue_6;
	// Unity.Networking.Transport.NetworkEventQueue Unity.Networking.Transport.NetworkDriver::m_EventQueue
	NetworkEventQueue_tDE8EC1A139521E69F9BBEC2D54C58B58E44CA723 ___m_EventQueue_7;
	// Unity.Collections.NativeArray`1<System.Byte> Unity.Networking.Transport.NetworkDriver::m_DisconnectReasons
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_DisconnectReasons_8;
	// Unity.Collections.NativeQueue`1<System.Int32> Unity.Networking.Transport.NetworkDriver::m_FreeList
	NativeQueue_1_tC1DEEC6300FED2BCDE96AFD346BEE6CF8E03412A ___m_FreeList_9;
	// Unity.Collections.NativeQueue`1<System.Int32> Unity.Networking.Transport.NetworkDriver::m_NetworkAcceptQueue
	NativeQueue_1_tC1DEEC6300FED2BCDE96AFD346BEE6CF8E03412A ___m_NetworkAcceptQueue_10;
	// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkDriver/Connection> Unity.Networking.Transport.NetworkDriver::m_ConnectionList
	NativeList_1_tD3715B1226B4E157D6FC09924FDC7EDC5FC0E8C9 ___m_ConnectionList_11;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Networking.Transport.NetworkDriver::m_InternalState
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_InternalState_12;
	// Unity.Collections.NativeReference`1<System.Int32> Unity.Networking.Transport.NetworkDriver::m_ProtocolStatus
	NativeReference_1_t142B519FC6820DE38579CF6960317C3BF6EA7EAE ___m_ProtocolStatus_13;
	// Unity.Collections.NativeQueue`1<System.Int32> Unity.Networking.Transport.NetworkDriver::m_PendingFree
	NativeQueue_1_tC1DEEC6300FED2BCDE96AFD346BEE6CF8E03412A ___m_PendingFree_14;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Networking.Transport.NetworkDriver::m_ErrorCodes
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_ErrorCodes_15;
	// Unity.Networking.Transport.NetworkDriver/Parameters Unity.Networking.Transport.NetworkDriver::m_NetworkParams
	Parameters_t9967AF7588FE3273938F70B8335411748E0D2742 ___m_NetworkParams_16;
	// Unity.Collections.NativeList`1<System.Byte> Unity.Networking.Transport.NetworkDriver::m_DataStream
	NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___m_DataStream_17;
	// Unity.Collections.NativeArray`1<System.Int32> Unity.Networking.Transport.NetworkDriver::m_DataStreamHead
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_DataStreamHead_18;
	// Unity.Networking.Transport.NetworkPipelineProcessor Unity.Networking.Transport.NetworkDriver::m_PipelineProcessor
	NetworkPipelineProcessor_tB90104D304F7FE6A0E8BB5AD39C95B2441F6E59C ___m_PipelineProcessor_19;
	// Unity.Networking.Transport.Protocols.UdpCHeader/HeaderFlags Unity.Networking.Transport.NetworkDriver::m_DefaultHeaderFlags
	uint8_t ___m_DefaultHeaderFlags_20;
	// System.Int64 Unity.Networking.Transport.NetworkDriver::m_UpdateTime
	int64_t ___m_UpdateTime_21;
	// System.Int64 Unity.Networking.Transport.NetworkDriver::m_UpdateTimeAdjustment
	int64_t ___m_UpdateTimeAdjustment_22;
	// Unity.Mathematics.Random Unity.Networking.Transport.NetworkDriver::m_Rand
	Random_tF24B964D3D5DE57D52CCDBF2E91ACE60F01F5F37 ___m_Rand_23;
};
// Native definition for P/Invoke marshalling of Unity.Networking.Transport.NetworkDriver
struct NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036_marshaled_pinvoke
{
	int32_t ___m_NetworkInterfaceIndex_2;
	NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035 ___m_NetworkSendInterface_3;
	int32_t ___m_NetworkProtocolIndex_4;
	NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9_marshaled_pinvoke ___m_NetworkProtocolInterface_5;
	NativeQueue_1_t6F98B587B9BF83745B5D350CBDB27E86744FB2A1 ___m_ParallelSendQueue_6;
	NetworkEventQueue_tDE8EC1A139521E69F9BBEC2D54C58B58E44CA723 ___m_EventQueue_7;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_DisconnectReasons_8;
	NativeQueue_1_tC1DEEC6300FED2BCDE96AFD346BEE6CF8E03412A ___m_FreeList_9;
	NativeQueue_1_tC1DEEC6300FED2BCDE96AFD346BEE6CF8E03412A ___m_NetworkAcceptQueue_10;
	NativeList_1_tD3715B1226B4E157D6FC09924FDC7EDC5FC0E8C9 ___m_ConnectionList_11;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_InternalState_12;
	NativeReference_1_t142B519FC6820DE38579CF6960317C3BF6EA7EAE ___m_ProtocolStatus_13;
	NativeQueue_1_tC1DEEC6300FED2BCDE96AFD346BEE6CF8E03412A ___m_PendingFree_14;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_ErrorCodes_15;
	Parameters_t9967AF7588FE3273938F70B8335411748E0D2742 ___m_NetworkParams_16;
	NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___m_DataStream_17;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_DataStreamHead_18;
	NetworkPipelineProcessor_tB90104D304F7FE6A0E8BB5AD39C95B2441F6E59C ___m_PipelineProcessor_19;
	uint8_t ___m_DefaultHeaderFlags_20;
	int64_t ___m_UpdateTime_21;
	int64_t ___m_UpdateTimeAdjustment_22;
	Random_tF24B964D3D5DE57D52CCDBF2E91ACE60F01F5F37 ___m_Rand_23;
};
// Native definition for COM marshalling of Unity.Networking.Transport.NetworkDriver
struct NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036_marshaled_com
{
	int32_t ___m_NetworkInterfaceIndex_2;
	NetworkSendInterface_t3C39B6892E6E0D3587471F02F0A82F8252E55035 ___m_NetworkSendInterface_3;
	int32_t ___m_NetworkProtocolIndex_4;
	NetworkProtocol_t817E46E6CEE8782B0BB83A0A95DFFD7ADCB84BC9_marshaled_com ___m_NetworkProtocolInterface_5;
	NativeQueue_1_t6F98B587B9BF83745B5D350CBDB27E86744FB2A1 ___m_ParallelSendQueue_6;
	NetworkEventQueue_tDE8EC1A139521E69F9BBEC2D54C58B58E44CA723 ___m_EventQueue_7;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___m_DisconnectReasons_8;
	NativeQueue_1_tC1DEEC6300FED2BCDE96AFD346BEE6CF8E03412A ___m_FreeList_9;
	NativeQueue_1_tC1DEEC6300FED2BCDE96AFD346BEE6CF8E03412A ___m_NetworkAcceptQueue_10;
	NativeList_1_tD3715B1226B4E157D6FC09924FDC7EDC5FC0E8C9 ___m_ConnectionList_11;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_InternalState_12;
	NativeReference_1_t142B519FC6820DE38579CF6960317C3BF6EA7EAE ___m_ProtocolStatus_13;
	NativeQueue_1_tC1DEEC6300FED2BCDE96AFD346BEE6CF8E03412A ___m_PendingFree_14;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_ErrorCodes_15;
	Parameters_t9967AF7588FE3273938F70B8335411748E0D2742 ___m_NetworkParams_16;
	NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___m_DataStream_17;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_DataStreamHead_18;
	NetworkPipelineProcessor_tB90104D304F7FE6A0E8BB5AD39C95B2441F6E59C ___m_PipelineProcessor_19;
	uint8_t ___m_DefaultHeaderFlags_20;
	int64_t ___m_UpdateTime_21;
	int64_t ___m_UpdateTimeAdjustment_22;
	Random_tF24B964D3D5DE57D52CCDBF2E91ACE60F01F5F37 ___m_Rand_23;
};

// System.Action`2<System.Int32,Unity.Networking.Transport.NetworkDriver>
struct Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603  : public MulticastDelegate_t
{
};

// Unity.Netcode.NetworkManager
struct NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Unity.Netcode.NetworkBehaviourUpdater Unity.Netcode.NetworkManager::<BehaviourUpdater>k__BackingField
	NetworkBehaviourUpdater_t215DD428092983D5AECE1BF5BA0576E5070F987C* ___U3CBehaviourUpdaterU3Ek__BackingField_13;
	// Unity.Netcode.MessagingSystem Unity.Netcode.NetworkManager::<MessagingSystem>k__BackingField
	MessagingSystem_tE5E070D8EDEED13D4D0C9D518961289FB3EE1C5D* ___U3CMessagingSystemU3Ek__BackingField_14;
	// Unity.Netcode.NetworkPrefabHandler Unity.Netcode.NetworkManager::m_PrefabHandler
	NetworkPrefabHandler_tDAE80C95FD27B1749A8657944402C831679B0AAE* ___m_PrefabHandler_15;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.NetworkManager/ConnectionApprovalResponse> Unity.Netcode.NetworkManager::ClientsToApprove
	Dictionary_2_t647F7F7CA786348F8808D433385C1B2D157E852A* ___ClientsToApprove_16;
	// System.Boolean Unity.Netcode.NetworkManager::m_ShuttingDown
	bool ___m_ShuttingDown_17;
	// System.Boolean Unity.Netcode.NetworkManager::m_StopProcessingMessages
	bool ___m_StopProcessingMessages_18;
	// Unity.Netcode.NetworkTimeSystem Unity.Netcode.NetworkManager::<NetworkTimeSystem>k__BackingField
	NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* ___U3CNetworkTimeSystemU3Ek__BackingField_19;
	// Unity.Netcode.NetworkTickSystem Unity.Netcode.NetworkManager::<NetworkTickSystem>k__BackingField
	NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A* ___U3CNetworkTickSystemU3Ek__BackingField_20;
	// System.Boolean Unity.Netcode.NetworkManager::RunInBackground
	bool ___RunInBackground_21;
	// Unity.Netcode.LogLevel Unity.Netcode.NetworkManager::LogLevel
	int32_t ___LogLevel_22;
	// Unity.Netcode.NetworkSpawnManager Unity.Netcode.NetworkManager::<SpawnManager>k__BackingField
	NetworkSpawnManager_t3C69A0FCA3E0961ED401C35188393E80BF22294D* ___U3CSpawnManagerU3Ek__BackingField_24;
	// Unity.Netcode.IDeferredMessageManager Unity.Netcode.NetworkManager::<DeferredMessageManager>k__BackingField
	RuntimeObject* ___U3CDeferredMessageManagerU3Ek__BackingField_25;
	// Unity.Netcode.CustomMessagingManager Unity.Netcode.NetworkManager::<CustomMessagingManager>k__BackingField
	CustomMessagingManager_t713DDF9DC30FAF5178913295556DD07C946A9746* ___U3CCustomMessagingManagerU3Ek__BackingField_26;
	// Unity.Netcode.NetworkSceneManager Unity.Netcode.NetworkManager::<SceneManager>k__BackingField
	NetworkSceneManager_tC93DADE5972B29C0860CC236D9E11A74953C65BC* ___U3CSceneManagerU3Ek__BackingField_27;
	// System.UInt64 Unity.Netcode.NetworkManager::m_LocalClientId
	uint64_t ___m_LocalClientId_29;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.NetworkClient> Unity.Netcode.NetworkManager::m_ConnectedClients
	Dictionary_2_t04CE97C57D2E25D600E03BF7F53BDCDDAC05C9DF* ___m_ConnectedClients_30;
	// System.UInt64 Unity.Netcode.NetworkManager::m_NextClientId
	uint64_t ___m_NextClientId_31;
	// System.Collections.Generic.Dictionary`2<System.UInt64,System.UInt64> Unity.Netcode.NetworkManager::m_ClientIdToTransportIdMap
	Dictionary_2_tE1184E8D53864B83C43E4E0E93F8388CEE760D42* ___m_ClientIdToTransportIdMap_32;
	// System.Collections.Generic.Dictionary`2<System.UInt64,System.UInt64> Unity.Netcode.NetworkManager::m_TransportIdToClientIdMap
	Dictionary_2_tE1184E8D53864B83C43E4E0E93F8388CEE760D42* ___m_TransportIdToClientIdMap_33;
	// System.Collections.Generic.List`1<Unity.Netcode.NetworkClient> Unity.Netcode.NetworkManager::m_ConnectedClientsList
	List_1_t57C6C818F7D91A7154A4799FE6DEFD3ACD6F39A5* ___m_ConnectedClientsList_34;
	// System.Collections.Generic.List`1<System.UInt64> Unity.Netcode.NetworkManager::m_ConnectedClientIds
	List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* ___m_ConnectedClientIds_35;
	// Unity.Netcode.NetworkClient Unity.Netcode.NetworkManager::<LocalClient>k__BackingField
	NetworkClient_t4EB5B562D3C8D21DDD5749455CE80E5B12571F64* ___U3CLocalClientU3Ek__BackingField_36;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.PendingClient> Unity.Netcode.NetworkManager::PendingClients
	Dictionary_2_tD7776C25E1F5D1B8408431CA83EAAFFE3C4C9684* ___PendingClients_37;
	// System.Boolean Unity.Netcode.NetworkManager::<IsServer>k__BackingField
	bool ___U3CIsServerU3Ek__BackingField_38;
	// System.Boolean Unity.Netcode.NetworkManager::<IsClient>k__BackingField
	bool ___U3CIsClientU3Ek__BackingField_39;
	// System.Boolean Unity.Netcode.NetworkManager::<IsListening>k__BackingField
	bool ___U3CIsListeningU3Ek__BackingField_40;
	// System.Boolean Unity.Netcode.NetworkManager::<IsConnectedClient>k__BackingField
	bool ___U3CIsConnectedClientU3Ek__BackingField_41;
	// System.Boolean Unity.Netcode.NetworkManager::<IsApproved>k__BackingField
	bool ___U3CIsApprovedU3Ek__BackingField_42;
	// System.Action`1<System.UInt64> Unity.Netcode.NetworkManager::OnClientConnectedCallback
	Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C* ___OnClientConnectedCallback_43;
	// System.Action`1<System.UInt64> Unity.Netcode.NetworkManager::OnClientDisconnectCallback
	Action_1_t2F07B42BD085A4AC03ECE5676157E93B9A344C1C* ___OnClientDisconnectCallback_44;
	// System.Action Unity.Netcode.NetworkManager::OnServerStarted
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnServerStarted_45;
	// System.Action Unity.Netcode.NetworkManager::OnTransportFailure
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnTransportFailure_46;
	// System.Action`2<Unity.Netcode.NetworkManager/ConnectionApprovalRequest,Unity.Netcode.NetworkManager/ConnectionApprovalResponse> Unity.Netcode.NetworkManager::m_ConnectionApprovalCallback
	Action_2_t5E7B4E17493B71D65B87865FA28E6CCE1C2ED68B* ___m_ConnectionApprovalCallback_47;
	// Unity.Netcode.NetworkConfig Unity.Netcode.NetworkManager::NetworkConfig
	NetworkConfig_tBDA76D459879B7025939BE0E2AF6D82B4A925113* ___NetworkConfig_48;
	// System.String Unity.Netcode.NetworkManager::<ConnectedHostname>k__BackingField
	String_t* ___U3CConnectedHostnameU3Ek__BackingField_49;
	// Unity.Netcode.INetworkMetrics Unity.Netcode.NetworkManager::<NetworkMetrics>k__BackingField
	RuntimeObject* ___U3CNetworkMetricsU3Ek__BackingField_50;
};

// Unity.Netcode.NetworkObject
struct NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.UInt32 Unity.Netcode.NetworkObject::GlobalObjectIdHash
	uint32_t ___GlobalObjectIdHash_4;
	// Unity.Netcode.NetworkManager Unity.Netcode.NetworkObject::NetworkManagerOwner
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* ___NetworkManagerOwner_5;
	// System.UInt64 Unity.Netcode.NetworkObject::<NetworkObjectId>k__BackingField
	uint64_t ___U3CNetworkObjectIdU3Ek__BackingField_6;
	// System.UInt64 Unity.Netcode.NetworkObject::<OwnerClientId>k__BackingField
	uint64_t ___U3COwnerClientIdU3Ek__BackingField_7;
	// System.Boolean Unity.Netcode.NetworkObject::AlwaysReplicateAsRoot
	bool ___AlwaysReplicateAsRoot_8;
	// System.Boolean Unity.Netcode.NetworkObject::<IsPlayerObject>k__BackingField
	bool ___U3CIsPlayerObjectU3Ek__BackingField_9;
	// System.Boolean Unity.Netcode.NetworkObject::<IsSpawned>k__BackingField
	bool ___U3CIsSpawnedU3Ek__BackingField_10;
	// System.Nullable`1<System.Boolean> Unity.Netcode.NetworkObject::<IsSceneObject>k__BackingField
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 ___U3CIsSceneObjectU3Ek__BackingField_11;
	// System.Boolean Unity.Netcode.NetworkObject::<DestroyWithScene>k__BackingField
	bool ___U3CDestroyWithSceneU3Ek__BackingField_12;
	// Unity.Netcode.NetworkObject/VisibilityDelegate Unity.Netcode.NetworkObject::CheckObjectVisibility
	VisibilityDelegate_t43869941CF7C26CBA2B0FEBB3E7A33BA67D3216A* ___CheckObjectVisibility_13;
	// Unity.Netcode.NetworkObject/SpawnDelegate Unity.Netcode.NetworkObject::IncludeTransformWhenSpawning
	SpawnDelegate_t54493DE8F3E71A9E28528811BBD80E50C09BFF57* ___IncludeTransformWhenSpawning_14;
	// System.Boolean Unity.Netcode.NetworkObject::DontDestroyWithOwner
	bool ___DontDestroyWithOwner_15;
	// System.Boolean Unity.Netcode.NetworkObject::AutoObjectParentSync
	bool ___AutoObjectParentSync_16;
	// System.Collections.Generic.HashSet`1<System.UInt64> Unity.Netcode.NetworkObject::Observers
	HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* ___Observers_17;
	// System.Collections.Generic.HashSet`1<System.UInt64> Unity.Netcode.NetworkObject::m_EmptyULongHashSet
	HashSet_1_t69B3138379C60F0B2D0D83966D6FF40BF4B4256C* ___m_EmptyULongHashSet_18;
	// System.Int32 Unity.Netcode.NetworkObject::SceneOriginHandle
	int32_t ___SceneOriginHandle_19;
	// UnityEngine.SceneManagement.Scene Unity.Netcode.NetworkObject::m_SceneOrigin
	Scene_tA1DC762B79745EB5140F054C884855B922318356 ___m_SceneOrigin_20;
	// System.Nullable`1<System.UInt64> Unity.Netcode.NetworkObject::m_LatestParent
	Nullable_1_tF8BFF19FF240C9F0A45168187CD7106BAA146A99 ___m_LatestParent_21;
	// UnityEngine.Transform Unity.Netcode.NetworkObject::m_CachedParent
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_CachedParent_22;
	// System.Boolean Unity.Netcode.NetworkObject::m_CachedWorldPositionStays
	bool ___m_CachedWorldPositionStays_23;
	// System.Collections.Generic.List`1<Unity.Netcode.NetworkBehaviour> Unity.Netcode.NetworkObject::m_ChildNetworkBehaviours
	List_1_t77285321F3B26D7A49CBB0F92E556C36504A91F5* ___m_ChildNetworkBehaviours_25;
};

// Unity.Netcode.NetworkTransport
struct NetworkTransport_t55E07951299283974C86476F46CC977780560B64  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Unity.Netcode.INetworkMetrics Unity.Netcode.NetworkTransport::NetworkMetrics
	RuntimeObject* ___NetworkMetrics_4;
	// Unity.Netcode.NetworkTransport/TransportEventDelegate Unity.Netcode.NetworkTransport::OnTransportEvent
	TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* ___OnTransportEvent_5;
};

// Unity.Netcode.Transports.UTP.SecretsLoaderHelper
struct SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::m_ServerCommonName
	String_t* ___m_ServerCommonName_4;
	// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::m_ClientCAFilePath
	String_t* ___m_ClientCAFilePath_5;
	// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::m_ClientCAOverride
	String_t* ___m_ClientCAOverride_6;
	// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::m_ServerCertificateFilePath
	String_t* ___m_ServerCertificateFilePath_7;
	// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::m_ServerPrivateFilePath
	String_t* ___m_ServerPrivateFilePath_8;
	// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::m_ClientCA
	String_t* ___m_ClientCA_9;
	// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::m_ServerCertificate
	String_t* ___m_ServerCertificate_10;
	// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::m_ServerPrivate
	String_t* ___m_ServerPrivate_11;
};

// Unity.Netcode.Transports.UNET.UNetTransport
struct UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A  : public NetworkTransport_t55E07951299283974C86476F46CC977780560B64
{
	// System.Int32 Unity.Netcode.Transports.UNET.UNetTransport::m_UnreliableChannelId
	int32_t ___m_UnreliableChannelId_6;
	// System.Int32 Unity.Netcode.Transports.UNET.UNetTransport::m_UnreliableSequencedChannelId
	int32_t ___m_UnreliableSequencedChannelId_7;
	// System.Int32 Unity.Netcode.Transports.UNET.UNetTransport::m_ReliableChannelId
	int32_t ___m_ReliableChannelId_8;
	// System.Int32 Unity.Netcode.Transports.UNET.UNetTransport::m_ReliableSequencedChannelId
	int32_t ___m_ReliableSequencedChannelId_9;
	// System.Int32 Unity.Netcode.Transports.UNET.UNetTransport::m_ReliableFragmentedSequencedChannelId
	int32_t ___m_ReliableFragmentedSequencedChannelId_10;
	// System.Int32 Unity.Netcode.Transports.UNET.UNetTransport::MessageBufferSize
	int32_t ___MessageBufferSize_11;
	// System.Int32 Unity.Netcode.Transports.UNET.UNetTransport::MaxConnections
	int32_t ___MaxConnections_12;
	// System.Int32 Unity.Netcode.Transports.UNET.UNetTransport::MaxSentMessageQueueSize
	int32_t ___MaxSentMessageQueueSize_13;
	// System.String Unity.Netcode.Transports.UNET.UNetTransport::ConnectAddress
	String_t* ___ConnectAddress_14;
	// System.Int32 Unity.Netcode.Transports.UNET.UNetTransport::ConnectPort
	int32_t ___ConnectPort_15;
	// System.Int32 Unity.Netcode.Transports.UNET.UNetTransport::ServerListenPort
	int32_t ___ServerListenPort_16;
	// Unity.Netcode.Transports.UNET.UNetTransport/SendMode Unity.Netcode.Transports.UNET.UNetTransport::MessageSendMode
	int32_t ___MessageSendMode_17;
	// System.Byte[] Unity.Netcode.Transports.UNET.UNetTransport::m_MessageBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___m_MessageBuffer_18;
	// System.WeakReference Unity.Netcode.Transports.UNET.UNetTransport::m_TemporaryBufferReference
	WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* ___m_TemporaryBufferReference_19;
	// System.Int32 Unity.Netcode.Transports.UNET.UNetTransport::m_ServerConnectionId
	int32_t ___m_ServerConnectionId_20;
	// System.Int32 Unity.Netcode.Transports.UNET.UNetTransport::m_ServerHostId
	int32_t ___m_ServerHostId_21;
	// Unity.Netcode.NetworkManager Unity.Netcode.Transports.UNET.UNetTransport::NetworkManager
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* ___NetworkManager_22;
};

// Unity.Netcode.Transports.UTP.UnityTransport
struct UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4  : public NetworkTransport_t55E07951299283974C86476F46CC977780560B64
{
	// Unity.Netcode.Transports.UTP.UnityTransport/ProtocolType Unity.Netcode.Transports.UTP.UnityTransport::m_ProtocolType
	int32_t ___m_ProtocolType_12;
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::m_MaxPacketQueueSize
	int32_t ___m_MaxPacketQueueSize_13;
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::m_MaxPayloadSize
	int32_t ___m_MaxPayloadSize_14;
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::m_MaxSendQueueSize
	int32_t ___m_MaxSendQueueSize_15;
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::m_HeartbeatTimeoutMS
	int32_t ___m_HeartbeatTimeoutMS_16;
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::m_ConnectTimeoutMS
	int32_t ___m_ConnectTimeoutMS_17;
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::m_MaxConnectAttempts
	int32_t ___m_MaxConnectAttempts_18;
	// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::m_DisconnectTimeoutMS
	int32_t ___m_DisconnectTimeoutMS_19;
	// Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData Unity.Netcode.Transports.UTP.UnityTransport::ConnectionData
	ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865 ___ConnectionData_20;
	// Unity.Netcode.Transports.UTP.UnityTransport/SimulatorParameters Unity.Netcode.Transports.UTP.UnityTransport::DebugSimulator
	SimulatorParameters_tC3C55F01C7027F7CBEA00FBD6828ACBBE16F3A67 ___DebugSimulator_21;
	// System.Nullable`1<System.UInt32> Unity.Netcode.Transports.UTP.UnityTransport::<DebugSimulatorRandomSeed>k__BackingField
	Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 ___U3CDebugSimulatorRandomSeedU3Ek__BackingField_22;
	// Unity.Netcode.Transports.UTP.UnityTransport/PacketLossCache Unity.Netcode.Transports.UTP.UnityTransport::m_PacketLossCache
	PacketLossCache_t70FF92B1C896E15478DE602E65D74DD34AADA3D7 ___m_PacketLossCache_25;
	// Unity.Netcode.Transports.UTP.UnityTransport/State Unity.Netcode.Transports.UTP.UnityTransport::m_State
	int32_t ___m_State_26;
	// Unity.Networking.Transport.NetworkDriver Unity.Netcode.Transports.UTP.UnityTransport::m_Driver
	NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036 ___m_Driver_27;
	// Unity.Networking.Transport.NetworkSettings Unity.Netcode.Transports.UTP.UnityTransport::m_NetworkSettings
	NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0 ___m_NetworkSettings_28;
	// System.UInt64 Unity.Netcode.Transports.UTP.UnityTransport::m_ServerClientId
	uint64_t ___m_ServerClientId_29;
	// Unity.Networking.Transport.NetworkPipeline Unity.Netcode.Transports.UTP.UnityTransport::m_UnreliableFragmentedPipeline
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___m_UnreliableFragmentedPipeline_30;
	// Unity.Networking.Transport.NetworkPipeline Unity.Netcode.Transports.UTP.UnityTransport::m_UnreliableSequencedFragmentedPipeline
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___m_UnreliableSequencedFragmentedPipeline_31;
	// Unity.Networking.Transport.NetworkPipeline Unity.Netcode.Transports.UTP.UnityTransport::m_ReliableSequencedPipeline
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___m_ReliableSequencedPipeline_32;
	// Unity.Networking.Transport.Relay.RelayServerData Unity.Netcode.Transports.UTP.UnityTransport::m_RelayServerData
	RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09 ___m_RelayServerData_33;
	// Unity.Netcode.NetworkManager Unity.Netcode.Transports.UTP.UnityTransport::NetworkManager
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* ___NetworkManager_34;
	// System.Collections.Generic.Dictionary`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue> Unity.Netcode.Transports.UTP.UnityTransport::m_SendQueue
	Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* ___m_SendQueue_35;
	// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.Transports.UTP.BatchedReceiveQueue> Unity.Netcode.Transports.UTP.UnityTransport::m_ReliableReceiveQueues
	Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A* ___m_ReliableReceiveQueues_36;
	// System.String Unity.Netcode.Transports.UTP.UnityTransport::m_ServerPrivateKey
	String_t* ___m_ServerPrivateKey_37;
	// System.String Unity.Netcode.Transports.UTP.UnityTransport::m_ServerCertificate
	String_t* ___m_ServerCertificate_38;
	// System.String Unity.Netcode.Transports.UTP.UnityTransport::m_ServerCommonName
	String_t* ___m_ServerCommonName_39;
	// System.String Unity.Netcode.Transports.UTP.UnityTransport::m_ClientCaCertificate
	String_t* ___m_ClientCaCertificate_40;
};

// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.Transports.UTP.BatchedReceiveQueue>

// System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.Transports.UTP.BatchedReceiveQueue>

// System.Collections.Generic.Dictionary`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>

// System.Collections.Generic.Dictionary`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>

// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>

// System.Collections.Generic.Dictionary`2/KeyCollection<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>

// System.Collections.Generic.Dictionary`2/ValueCollection<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>

// System.Collections.Generic.Dictionary`2/ValueCollection<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>

// Unity.Netcode.Transports.UTP.BatchedReceiveQueue

// Unity.Netcode.Transports.UTP.BatchedReceiveQueue

// UnityEngine.Networking.ConnectionConfig

// UnityEngine.Networking.ConnectionConfig

// Unity.Netcode.Transports.UTP.ErrorUtilities

// Unity.Netcode.Transports.UTP.ErrorUtilities

// UnityEngine.Networking.HostTopology

// UnityEngine.Networking.HostTopology

// System.MarshalByRefObject

// System.MarshalByRefObject

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// Unity.Netcode.NetworkClient

// Unity.Netcode.NetworkClient

// Unity.Netcode.NetworkTimeSystem

// Unity.Netcode.NetworkTimeSystem

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// Unity.Netcode.NetworkSpawnManager/<>c
struct U3CU3Ec_t2F0CD5EFD12ED6E2253375C46D6ADFD3C8F47FAF_StaticFields
{
	// Unity.Netcode.NetworkSpawnManager/<>c Unity.Netcode.NetworkSpawnManager/<>c::<>9
	U3CU3Ec_t2F0CD5EFD12ED6E2253375C46D6ADFD3C8F47FAF* ___U3CU3E9_0;
	// System.Func`2<Unity.Netcode.NetworkObject,System.Boolean> Unity.Netcode.NetworkSpawnManager/<>c::<>9__27_0
	Func_2_t9E0E64156B6C6D11E7637D1AB92AE279580431B1* ___U3CU3E9__27_0_1;
};

// Unity.Netcode.NetworkSpawnManager/<>c

// System.ArraySegment`1<System.Byte>
struct ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___U3CEmptyU3Ek__BackingField_0;
};

// System.ArraySegment`1<System.Byte>

// System.ArraySegment`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178_StaticFields
{
	// System.ArraySegment`1<T> System.ArraySegment`1::<Empty>k__BackingField
	ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178 ___U3CEmptyU3Ek__BackingField_0;
};

// System.ArraySegment`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Unity.Collections.NativeArray`1<System.Byte>

// Unity.Collections.NativeArray`1<System.Byte>

// Unity.Collections.NativeArray`1<System.Int32>

// Unity.Collections.NativeArray`1<System.Int32>

// Unity.Collections.NativeArray`1<System.Int64>

// Unity.Collections.NativeArray`1<System.Int64>

// Unity.Collections.NativeArray`1<Unity.Networking.Transport.NetworkPipelineStage>

// Unity.Collections.NativeArray`1<Unity.Networking.Transport.NetworkPipelineStage>

// Unity.Collections.NativeArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// Unity.Collections.NativeArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// Unity.Collections.NativeArray`1<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget>

// Unity.Collections.NativeArray`1<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget>

// System.Nullable`1<System.Boolean>

// System.Nullable`1<System.Boolean>

// System.Nullable`1<System.UInt32>

// System.Nullable`1<System.UInt32>

// System.Nullable`1<System.UInt64>

// System.Nullable`1<System.UInt64>

// System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

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

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// System.Char

// System.Double

// System.Double

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

// Unity.Networking.Transport.NetworkConfigParameter

// Unity.Networking.Transport.NetworkConfigParameter

// Unity.Networking.Transport.NetworkConnection

// Unity.Networking.Transport.NetworkConnection

// Unity.Networking.Transport.NetworkDataStreamParameter

// Unity.Networking.Transport.NetworkDataStreamParameter

// Unity.Netcode.Transports.UTP.NetworkMetricsContext

// Unity.Netcode.Transports.UTP.NetworkMetricsContext

// Unity.Networking.Transport.NetworkPipeline

// Unity.Networking.Transport.NetworkPipeline

// Unity.Networking.Transport.NetworkPipelineStageId

// Unity.Networking.Transport.NetworkPipelineStageId

// Unity.Netcode.NetworkTime

// Unity.Netcode.NetworkTime

// Unity.Mathematics.Random

// Unity.Mathematics.Random

// Unity.Netcode.ReleasedNetworkId

// Unity.Netcode.ReleasedNetworkId

// UnityEngine.SceneManagement.Scene

// UnityEngine.SceneManagement.Scene

// Unity.Networking.Transport.Utilities.SequenceBufferContext

// Unity.Networking.Transport.Utilities.SequenceBufferContext

// System.Single

// System.Single

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// System.IO.TextReader

// System.UInt16

// System.UInt16

// System.UInt32

// System.UInt32

// System.UInt64

// System.UInt64

// System.Void

// System.Void

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256

// Unity.Collections.AllocatorManager/AllocatorHandle

// Unity.Collections.AllocatorManager/AllocatorHandle

// Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress

// Unity.Baselib.LowLevel.Binding/Baselib_NetworkAddress

// Unity.Networking.Transport.DataStreamReader/Context

// Unity.Networking.Transport.DataStreamReader/Context

// Unity.Networking.Transport.DataStreamWriter/StreamData

// Unity.Networking.Transport.DataStreamWriter/StreamData

// Unity.Networking.Transport.Relay.RelayAllocationId/<Value>e__FixedBuffer

// Unity.Networking.Transport.Relay.RelayAllocationId/<Value>e__FixedBuffer

// Unity.Networking.Transport.Relay.RelayConnectionData/<Value>e__FixedBuffer

// Unity.Networking.Transport.Relay.RelayConnectionData/<Value>e__FixedBuffer

// Unity.Networking.Transport.Relay.RelayHMACKey/<Value>e__FixedBuffer

// Unity.Networking.Transport.Relay.RelayHMACKey/<Value>e__FixedBuffer

// Unity.Networking.Transport.Relay.RelayServerData/<HMAC>e__FixedBuffer

// Unity.Networking.Transport.Relay.RelayServerData/<HMAC>e__FixedBuffer

// Unity.Networking.Transport.Utilities.ReliableUtility/RTTInfo

// Unity.Networking.Transport.Utilities.ReliableUtility/RTTInfo

// Unity.Networking.Transport.Utilities.ReliableUtility/Statistics

// Unity.Networking.Transport.Utilities.ReliableUtility/Statistics

// Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ClientSecrets

// Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ClientSecrets

// Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ServerSecrets

// Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ServerSecrets

// Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData

// Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData

// Unity.Netcode.Transports.UTP.UnityTransport/PacketLossCache

// Unity.Netcode.Transports.UTP.UnityTransport/PacketLossCache

// Unity.Netcode.Transports.UTP.UnityTransport/SimulatorParameters

// Unity.Netcode.Transports.UTP.UnityTransport/SimulatorParameters

// Unity.Collections.NativeArray`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// Unity.Collections.NativeArray`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// Unity.Collections.NativeArray`1/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget>

// Unity.Collections.NativeArray`1/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget>

// System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ComputePacketOverheadDelegate>

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ComputePacketOverheadDelegate>

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ConnectDelegate>

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ConnectDelegate>

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/DisconnectDelegate>

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/DisconnectDelegate>

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessReceiveDelegate>

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessReceiveDelegate>

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendConnectionAcceptDelegate>

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendConnectionAcceptDelegate>

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendDelegate>

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendDelegate>

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPingDelegate>

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPingDelegate>

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPongDelegate>

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPongDelegate>

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/UpdateDelegate>

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/UpdateDelegate>

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/AbortSendMessageDelegate>

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/AbortSendMessageDelegate>

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/BeginSendMessageDelegate>

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/BeginSendMessageDelegate>

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/EndSendMessageDelegate>

// Unity.Burst.FunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/EndSendMessageDelegate>

// Unity.Collections.NativeList`1<System.Byte>

// Unity.Collections.NativeList`1<System.Byte>

// Unity.Collections.NativeList`1<System.Int32>

// Unity.Collections.NativeList`1<System.Int32>

// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkEvent>

// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkEvent>

// Unity.Collections.NativeList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// Unity.Collections.NativeList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkDriver/Connection>

// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkDriver/Connection>

// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkPipelineProcessor/PipelineImpl>

// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkPipelineProcessor/PipelineImpl>

// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkPipelineProcessor/UpdatePipeline>

// Unity.Collections.NativeList`1<Unity.Networking.Transport.NetworkPipelineProcessor/UpdatePipeline>

// Unity.Collections.NativeList`1<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget>

// Unity.Collections.NativeList`1<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget>

// Unity.Collections.NativeQueue`1<System.Int32>

// Unity.Collections.NativeQueue`1<System.Int32>

// Unity.Collections.NativeQueue`1<Unity.Networking.Transport.QueuedSendMessage>

// Unity.Collections.NativeQueue`1<Unity.Networking.Transport.QueuedSendMessage>

// Unity.Collections.NativeQueue`1<Unity.Networking.Transport.NetworkEventQueue/SubQueueItem>

// Unity.Collections.NativeQueue`1<Unity.Networking.Transport.NetworkEventQueue/SubQueueItem>

// Unity.Collections.NativeQueue`1<Unity.Networking.Transport.NetworkPipelineProcessor/UpdatePipeline>

// Unity.Collections.NativeQueue`1<Unity.Networking.Transport.NetworkPipelineProcessor/UpdatePipeline>

// Unity.Collections.NativeReference`1<System.Int32>

// Unity.Collections.NativeReference`1<System.Int32>

// Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2<System.Int64,Unity.Networking.Transport.NetworkSettings/ParameterSlice>

// Unity.Collections.LowLevel.Unsafe.UnsafeHashMap`2<System.Int64,Unity.Networking.Transport.NetworkSettings/ParameterSlice>

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_tD21904779CC32A6177B4E0D9832E2914FD13FFDA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::069E42803A623C550E1D97957542706C51EE52C6262757503BCA925BF40009C9
	__StaticArrayInitTypeSizeU3D256_t6C6F2B053275FEEDECC666952C89ECDDC30817FD ___069E42803A623C550E1D97957542706C51EE52C6262757503BCA925BF40009C9_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::0DC23B9F693E00DB8A82C23DBC72BF724412EEFE73C8011C7B034B95055395BA
	__StaticArrayInitTypeSizeU3D128_t657EFE1E055635FB0333044E0D63FE348A0F2A13 ___0DC23B9F693E00DB8A82C23DBC72BF724412EEFE73C8011C7B034B95055395BA_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=128 <PrivateImplementationDetails>::AEC63A1D9817B88413C02DFD4ACAA4DCE92E7B31885038AD5F851B01F6E20836
	__StaticArrayInitTypeSizeU3D128_t657EFE1E055635FB0333044E0D63FE348A0F2A13 ___AEC63A1D9817B88413C02DFD4ACAA4DCE92E7B31885038AD5F851B01F6E20836_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=256 <PrivateImplementationDetails>::CFFA0C336E65626D7D6A1B7DEC9EA46121AA12320D3A2187436F489C100F3047
	__StaticArrayInitTypeSizeU3D256_t6C6F2B053275FEEDECC666952C89ECDDC30817FD ___CFFA0C336E65626D7D6A1B7DEC9EA46121AA12320D3A2187436F489C100F3047_3;
};

// <PrivateImplementationDetails>

// Unity.Networking.Transport.DataStreamReader

// Unity.Networking.Transport.DataStreamReader

// Unity.Networking.Transport.DataStreamWriter

// Unity.Networking.Transport.DataStreamWriter

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// System.Runtime.InteropServices.GCHandle

// System.Runtime.InteropServices.GCHandle

// Unity.Jobs.JobHandle

// Unity.Jobs.JobHandle

// Unity.Networking.Transport.NetworkEndPoint
struct NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63_StaticFields
{
	// System.Boolean Unity.Networking.Transport.NetworkEndPoint::IsLittleEndian
	bool ___IsLittleEndian_4;
};

// Unity.Networking.Transport.NetworkEndPoint

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// Unity.Profiling.ProfilerMarker

// Unity.Profiling.ProfilerMarker

// Unity.Networking.Transport.Relay.RelayAllocationId

// Unity.Networking.Transport.Relay.RelayAllocationId

// Unity.Networking.Transport.Relay.RelayConnectionData

// Unity.Networking.Transport.Relay.RelayConnectionData

// Unity.Networking.Transport.Relay.RelayHMACKey

// Unity.Networking.Transport.Relay.RelayHMACKey

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_StaticFields
{
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___Null_2;
};

// System.IO.StreamReader

// Unity.Networking.Transport.NetworkDriver/Parameters

// Unity.Networking.Transport.NetworkDriver/Parameters

// Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext

// Unity.Networking.Transport.Utilities.ReliableUtility/SharedContext

// Unity.Netcode.Transports.UTP.UnityTransport/SendTarget

// Unity.Netcode.Transports.UTP.UnityTransport/SendTarget

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>

// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>

// Unity.Collections.NativeHashMap`2<System.Int64,Unity.Networking.Transport.NetworkSettings/ParameterSlice>

// Unity.Collections.NativeHashMap`2<System.Int64,Unity.Networking.Transport.NetworkSettings/ParameterSlice>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ComputePacketOverheadDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ComputePacketOverheadDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ConnectDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ConnectDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/DisconnectDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/DisconnectDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessReceiveDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessReceiveDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendConnectionAcceptDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendConnectionAcceptDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPingDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPingDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPongDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/ProcessSendPongDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/UpdateDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkProtocol/UpdateDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/AbortSendMessageDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/AbortSendMessageDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/BeginSendMessageDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/BeginSendMessageDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/EndSendMessageDelegate>

// Unity.Networking.Transport.TransportFunctionPointer`1<Unity.Networking.Transport.NetworkSendInterface/EndSendMessageDelegate>

// Unity.Netcode.Transports.UTP.BatchedSendQueue

// Unity.Netcode.Transports.UTP.BatchedSendQueue

// UnityEngine.Component

// UnityEngine.Component

// System.MulticastDelegate

// System.MulticastDelegate

// Unity.Networking.Transport.NetworkEventQueue

// Unity.Networking.Transport.NetworkEventQueue

// Unity.Networking.Transport.NetworkPipelineProcessor

// Unity.Networking.Transport.NetworkPipelineProcessor

// Unity.Netcode.NetworkTickSystem
struct NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A_StaticFields
{
	// Unity.Profiling.ProfilerMarker Unity.Netcode.NetworkTickSystem::s_Tick
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_Tick_0;
};

// Unity.Netcode.NetworkTickSystem

// Unity.Networking.Transport.Relay.RelayServerData

// Unity.Networking.Transport.Relay.RelayServerData

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

// System.WeakReference

// System.WeakReference

// System.Action`1<System.Int32>

// System.Action`1<System.Int32>

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Action`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>

// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>

// System.Collections.Generic.KeyValuePair`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>

// System.Collections.Generic.KeyValuePair`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>

// System.Action

// System.Action

// System.ArgumentException

// System.ArgumentException

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// Unity.Networking.Transport.NetworkProtocol

// Unity.Networking.Transport.NetworkProtocol

// Unity.Networking.Transport.NetworkSendInterface

// Unity.Networking.Transport.NetworkSendInterface

// Unity.Networking.Transport.NetworkSettings

// Unity.Networking.Transport.NetworkSettings

// Unity.Netcode.NetworkTransport/TransportEventDelegate

// Unity.Netcode.NetworkTransport/TransportEventDelegate

// System.Collections.Generic.Dictionary`2/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>

// System.Collections.Generic.Dictionary`2/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Unity.Networking.Transport.NetworkDriver
struct NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036_StaticFields
{
	// System.Collections.Generic.List`1<Unity.Networking.Transport.INetworkInterface> Unity.Networking.Transport.NetworkDriver::s_NetworkInterfaces
	List_1_tC673C156FBD962AEDC0C4957C82DD522010A9BC6* ___s_NetworkInterfaces_0;
	// System.Collections.Generic.List`1<Unity.Networking.Transport.INetworkProtocol> Unity.Networking.Transport.NetworkDriver::s_NetworkProtocols
	List_1_t55E70A01F2B19225279AEE9C81F69F51DE1781C0* ___s_NetworkProtocols_1;
};

// Unity.Networking.Transport.NetworkDriver

// System.Action`2<System.Int32,Unity.Networking.Transport.NetworkDriver>

// System.Action`2<System.Int32,Unity.Networking.Transport.NetworkDriver>

// Unity.Netcode.NetworkManager
struct NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_StaticFields
{
	// System.Collections.Generic.Dictionary`2<System.UInt32,Unity.Netcode.NetworkManager/RpcReceiveHandler> Unity.Netcode.NetworkManager::__rpc_func_table
	Dictionary_2_t535993A174BD2EEC9F9DB2BB1AA684D960BD89AD* _____rpc_func_table_4;
	// System.Collections.Generic.Dictionary`2<System.UInt32,System.String> Unity.Netcode.NetworkManager::__rpc_name_table
	Dictionary_2_t01B2D21278BD46CC9C7FF4A526928B782CC5D2BF* _____rpc_name_table_5;
	// Unity.Profiling.ProfilerMarker Unity.Netcode.NetworkManager::s_SyncTime
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_SyncTime_6;
	// Unity.Profiling.ProfilerMarker Unity.Netcode.NetworkManager::s_TransportPoll
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_TransportPoll_7;
	// Unity.Profiling.ProfilerMarker Unity.Netcode.NetworkManager::s_TransportConnect
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_TransportConnect_8;
	// Unity.Profiling.ProfilerMarker Unity.Netcode.NetworkManager::s_HandleIncomingData
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_HandleIncomingData_9;
	// Unity.Profiling.ProfilerMarker Unity.Netcode.NetworkManager::s_TransportDisconnect
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___s_TransportDisconnect_10;
	// Unity.Netcode.NetworkManager Unity.Netcode.NetworkManager::<Singleton>k__BackingField
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* ___U3CSingletonU3Ek__BackingField_23;
	// System.Action Unity.Netcode.NetworkManager::OnSingletonReady
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnSingletonReady_51;
};

// Unity.Netcode.NetworkManager

// Unity.Netcode.NetworkObject
struct NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366_StaticFields
{
	// System.Collections.Generic.HashSet`1<Unity.Netcode.NetworkObject> Unity.Netcode.NetworkObject::OrphanChildren
	HashSet_1_t4CB93F2D8A0CA74AB045A363BEAA451C9E5C4337* ___OrphanChildren_24;
};

// Unity.Netcode.NetworkObject

// Unity.Netcode.NetworkTransport

// Unity.Netcode.NetworkTransport

// Unity.Netcode.Transports.UTP.SecretsLoaderHelper

// Unity.Netcode.Transports.UTP.SecretsLoaderHelper

// Unity.Netcode.Transports.UNET.UNetTransport

// Unity.Netcode.Transports.UNET.UNetTransport

// Unity.Netcode.Transports.UTP.UnityTransport
struct UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_StaticFields
{
	// Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData Unity.Netcode.Transports.UTP.UnityTransport::s_DefaultConnectionAddressData
	ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865 ___s_DefaultConnectionAddressData_10;
	// Unity.Netcode.Transports.UTP.INetworkStreamDriverConstructor Unity.Netcode.Transports.UTP.UnityTransport::s_DriverConstructor
	RuntimeObject* ___s_DriverConstructor_11;
	// System.Action`2<System.Int32,Unity.Networking.Transport.NetworkDriver> Unity.Netcode.Transports.UTP.UnityTransport::TransportInitialized
	Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* ___TransportInitialized_23;
	// System.Action`1<System.Int32> Unity.Netcode.Transports.UTP.UnityTransport::TransportDisposed
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___TransportDisposed_24;
};

// Unity.Netcode.Transports.UTP.UnityTransport
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
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
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB  : public RuntimeArray
{
	ALIGN_FIELD (8) Type_t* m_Items[1];

	inline Type_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t* value)
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


// System.Boolean System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Nullable_1_GetValueOrDefault_mC057FBD944AF068B90EBDD0B496231A01B2A4228_gshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor(T[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArraySegment_1__ctor_m3A1337B17EA471D2D1538CB43ADB3B91267F978F_gshared (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.NativeList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NativeList_1_get_Length_mBCE0D52E1FEFC40B5CFEE2F41B493C7FF6A07FA7_gshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeList_1_get_IsCreated_m4E2356CCFFB361C91CBEFB528F727AC7C244043F_gshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeList_1__ctor_mA1DFF4EEBED87ED011F318AEC145588B17212121_gshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, int32_t ___0_initialCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::ResizeUninitialized(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeList_1_ResizeUninitialized_mC281739878E0A1D9BD814C0B970B46A554D8EDFD_gshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, int32_t ___0_length, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeList_1_Dispose_m42535264C7291A64741CA36B4F0567D15D7BDC2F_gshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* __this, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeListUnsafeUtility::GetUnsafePtr<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(Unity.Collections.NativeList`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeListUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_mE9C167B5E37C0635A71E22EBFB746FB93AA72EC0_gshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1 ___0_list, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_mEF96248898C14F3687A5C72B920F841701E4E13C_gshared_inline (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, const RuntimeMethod* method) ;
// T[] System.ArraySegment`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Array()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ArraySegment_1_get_Array_mE4A35DFD81ABF447350B9A05C0F4BF0248A3CFF2_gshared_inline (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Offset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m4FAFF061AB36BF278BA8DC37B6D13718A06301E6_gshared_inline (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.NativeList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::AsArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 NativeList_1_AsArray_m1E9616CC42457555561B1165B47ED6E2EEADAC98_gshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Action`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(T1,T2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m6343941059117DF354182855F996EB3D08B4C06C_gshared_inline (Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_arg1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_arg2, const RuntimeMethod* method) ;
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
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Clear_m935B3F117860376DC854C9E0C80CBD99BE77EEA4_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
// System.Boolean System.ArraySegment`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::op_Equality(System.ArraySegment`1<T>,System.ArraySegment`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ArraySegment_1_op_Equality_mFB1809C3CA4BB2B0507478FDBB654C0E9CBEC612_gshared (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178 ___0_a, ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178 ___1_b, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_GetEnumerator_mEC4954B142C43B5CBAA045953EAD4E168FFCD492_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3D89F01AE65EC60062FFB578C0E771C098EF2CB7_gshared (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m26AF82C275C82180BB7F23C7E408BC1FEB9A38EE_gshared_inline (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* il2cppRetVal, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Key()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.KeyValuePair`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m97783F73CDB1D0083A2F7D26A51847BF0843ADEA_gshared (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_gshared (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 ___0_nativeArray, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* Dictionary_2_get_Keys_mD82D6690B1A801E8EED43F1B1D310893C9D334CF_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyCollection_GetEnumerator_m1624A44B07D62B8CC592FEAE7A521D9504E0ACB3_gshared (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* __this, Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m3E0B734E98D35978EEE706FCEC2FE08FEA74FD35_gshared (Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977* __this, const RuntimeMethod* method) ;
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m2D9E3398C2A3349E3F0F189A38E881D11DE5AA15_gshared_inline (Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Add(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeList_1_Add_m9BE8F632802CF4BA6110C86A3C1842F568C58DBB_gshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m21C503A713FDCA406492E2BE960D85320752E615_gshared (Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977* __this, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1/Enumerator<T> Unity.Collections.NativeList`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405 NativeList_1_GetEnumerator_mAEC3E4F148C87993A6A957CCD8D16A1CBADF6621_gshared (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m97F29D6F80B478A97A6DA81F665E7DA693E17E64_gshared (Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405* __this, const RuntimeMethod* method) ;
// T Unity.Collections.NativeArray`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_get_Current_mF9A198DACCE8ED0DC6FD097825D7A0F82D149DBA_gshared (Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mC9099E56E01AB33169AB4EE888BD9A2B752961DE_gshared (Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_gshared (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_key, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E* __this, const RuntimeMethod* method) ;

// System.Void Unity.Netcode.NetworkSpawnManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA20E665C6052E54E3607E6884A81589A1ED5ED3F (U3CU3Ec_t2F0CD5EFD12ED6E2253375C46D6ADFD3C8F47FAF* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Nullable`1<System.Boolean> Unity.Netcode.NetworkObject::get_IsSceneObject()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 NetworkObject_get_IsSceneObject_m6C81B3BFDFCB5A8C0105BD7F570A8A041AE6A297_inline (NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Boolean>::get_HasValue()
inline bool Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, const RuntimeMethod*))Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, method);
}
// T System.Nullable`1<System.Boolean>::GetValueOrDefault()
inline bool Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_inline (Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01* __this, const RuntimeMethod* method)
{
	bool il2cppRetVal;
	((  void (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mC057FBD944AF068B90EBDD0B496231A01B2A4228_gshared_inline)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, (Il2CppFullySharedGenericStruct*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00 (Delegate_t* ___0_a, Delegate_t* ___1_b, const RuntimeMethod* method) ;
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3 (Delegate_t* ___0_source, Delegate_t* ___1_value, const RuntimeMethod* method) ;
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, String_t* ___1_paramName, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkTickSystem::set_TickRate(System.UInt32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkTickSystem_set_TickRate_m0BF57B36E23A399A2DE37AC16EDE30EF48378172_inline (NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A* __this, uint32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkTime::.ctor(System.UInt32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTime__ctor_m967B514256DF729D17E1821504B335E112870E4D (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* __this, uint32_t ___0_tickRate, double ___1_timeSec, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkTickSystem::set_LocalTime(Unity.Netcode.NetworkTime)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkTickSystem_set_LocalTime_mF80A790CE331B5993719CEB6AF95DA98E3C31967_inline (NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A* __this, NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkTickSystem::set_ServerTime(Unity.Netcode.NetworkTime)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkTickSystem_set_ServerTime_mCBDD0E0D8DCB5BFB612E4075EED08555BE43A794_inline (NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A* __this, NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F ___0_value, const RuntimeMethod* method) ;
// System.UInt32 Unity.Netcode.NetworkTickSystem::get_TickRate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t NetworkTickSystem_get_TickRate_mE053E1F4706D7744E24E0CB387DADE9454EDD337_inline (NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A* __this, const RuntimeMethod* method) ;
// Unity.Netcode.NetworkTime Unity.Netcode.NetworkTickSystem::get_LocalTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F NetworkTickSystem_get_LocalTime_mAEE28AA7DBED595F9D8755CE5D76B7CEFF7EA6F5_inline (NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Netcode.NetworkTime::get_Tick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NetworkTime_get_Tick_m1544072B4A5D9F6767E31A77EFB451B6B0F5B991_inline (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* __this, const RuntimeMethod* method) ;
// Unity.Netcode.NetworkTime Unity.Netcode.NetworkTickSystem::get_ServerTime()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F NetworkTickSystem_get_ServerTime_mE2386D4FF186C19B938427535A681AD47A799882_inline (NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkTime::.ctor(System.UInt32,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTime__ctor_mD40214D6A925F3027C77DA7051C210F487C0CC55 (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* __this, uint32_t ___0_tickRate, int32_t ___1_tick, double ___2_tickOffset, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker::Begin()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker_Begin_mD07DB736ADA7D8BAF9D969CC7F3C55848A218C6E_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, const RuntimeMethod* method) ;
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker::End()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker_End_m025AE3EF0F96F6DADC53489A53FC6EE65073DE60_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.ProfilerMarker::.ctor(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, String_t* ___0_name, const RuntimeMethod* method) ;
// System.Double Unity.Netcode.NetworkTime::get_TickOffset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double NetworkTime_get_TickOffset_m7B60157F5852925EF3F4D55D8E67FAEEDD87BA3A_inline (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* __this, const RuntimeMethod* method) ;
// System.Double Unity.Netcode.NetworkTime::get_Time()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double NetworkTime_get_Time_mDC7F8AB78A0D860B5D3BF62AF1E42724059F690B_inline (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* __this, const RuntimeMethod* method) ;
// System.Single Unity.Netcode.NetworkTime::get_TimeAsFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NetworkTime_get_TimeAsFloat_mA9117D03A7D40E675F50B67A4317019B3AAF1797 (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* __this, const RuntimeMethod* method) ;
// System.Double Unity.Netcode.NetworkTime::get_FixedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkTime_get_FixedTime_mD8B701640E6938B87ADFC11BFDABC77BFA08BF9D (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* __this, const RuntimeMethod* method) ;
// System.Single Unity.Netcode.NetworkTime::get_FixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NetworkTime_get_FixedDeltaTime_mE939797F1CB254D4403A9A3EE00E0AB3F49B5045 (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* __this, const RuntimeMethod* method) ;
// System.UInt32 Unity.Netcode.NetworkTime::get_TickRate()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t NetworkTime_get_TickRate_m011971B594D6DB1C676AB1EC9029E1BB5A569CB6_inline (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Assertions.Assert::IsTrue(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsTrue_m390B3F48332F46CE76AB45491A60ACDCCF521AAE (bool ___0_condition, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkTime::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTime__ctor_m858F636F85697CAE1E079038854B8D88068A5F8F (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* __this, uint32_t ___0_tickRate, const RuntimeMethod* method) ;
// System.Void UnityEngine.Assertions.Assert::IsTrue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663 (bool ___0_condition, const RuntimeMethod* method) ;
// Unity.Netcode.NetworkTime Unity.Netcode.NetworkTime::op_Addition(Unity.Netcode.NetworkTime,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F NetworkTime_op_Addition_m055F0632D8CF893898025AD5E20FD0B42AA448F1 (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F ___0_a, double ___1_b, const RuntimeMethod* method) ;
// Unity.Netcode.NetworkTime Unity.Netcode.NetworkTime::ToFixedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F NetworkTime_ToFixedTime_mBFCFEFB08EBF314FB9666AA128F5DFD9A876D690 (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* __this, const RuntimeMethod* method) ;
// Unity.Netcode.NetworkTime Unity.Netcode.NetworkTime::op_Subtraction(Unity.Netcode.NetworkTime,Unity.Netcode.NetworkTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F NetworkTime_op_Subtraction_m6C3EF5E0A951578447A3AF3B0BF446FAD0883720 (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F ___0_a, NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F ___1_b, const RuntimeMethod* method) ;
// Unity.Netcode.NetworkTime Unity.Netcode.NetworkTime::TimeTicksAgo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F NetworkTime_TimeTicksAgo_m3DE56CDB34180F78932D9A115AC6CE36578DA446 (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* __this, int32_t ___0_ticks, const RuntimeMethod* method) ;
// System.Double System.Math::Truncate(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Math_Truncate_mE66B1AD68C17D27675DE0CB74643374F9EDB649C (double ___0_d, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkTime::UpdateCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTime_UpdateCache_m9AA9E6D10AAE300E01CCB5C577A92BBF76783155 (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkTimeSystem::set_LocalBufferSec(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkTimeSystem_set_LocalBufferSec_m82C2D3A892C9D7B79D851FA876ED7B46437EF68C_inline (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, double ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkTimeSystem::set_ServerBufferSec(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkTimeSystem_set_ServerBufferSec_mB9AB61649D77F483873DF72CCE2BB4345572547E_inline (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, double ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkTimeSystem::set_HardResetThresholdSec(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkTimeSystem_set_HardResetThresholdSec_mDEEB22B6CCED462F413F8E86A27758FF4A9078ED_inline (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, double ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkTimeSystem::set_AdjustmentRatio(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkTimeSystem_set_AdjustmentRatio_m20025653AD41C17935FE110A9E3FCF66C7AD0B2D_inline (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, double ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkTimeSystem::.ctor(System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTimeSystem__ctor_mB81EDAB0045029A03A6B97FFCB578FAD6F17D847 (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, double ___0_localBufferSec, double ___1_serverBufferSec, double ___2_hardResetThresholdSec, double ___3_adjustmentRatio, const RuntimeMethod* method) ;
// System.Double Unity.Netcode.NetworkTimeSystem::get_HardResetThresholdSec()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double NetworkTimeSystem_get_HardResetThresholdSec_mE047FE8D47C8221D28F8FDB581C12C5B2BC71E38_inline (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, const RuntimeMethod* method) ;
// System.Double Unity.Netcode.NetworkTimeSystem::get_AdjustmentRatio()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double NetworkTimeSystem_get_AdjustmentRatio_mAEB1E3BD937B871B16ECFF62C01C5D55939AFD96_inline (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkTimeSystem::Sync(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTimeSystem_Sync_m53B4C804F962B6B4AF76DA61BDB9915BB3295696 (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, double ___0_serverTimeSec, double ___1_rttSec, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.NetworkTimeSystem::Advance(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTimeSystem_Advance_mDCD452D5627C27644989F2A2FA413D1237A35D19 (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, double ___0_deltaTimeSec, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkTimeSystem::set_LastSyncedRttSec(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkTimeSystem_set_LastSyncedRttSec_mA1C80CC3F306B8060F2602E40AF1197D222F77A8_inline (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, double ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkTimeSystem::set_LastSyncedServerTimeSec(System.Double)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkTimeSystem_set_LastSyncedServerTimeSec_m4CFF62DC57A58B9634184818ADACC6E2935E0190_inline (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, double ___0_value, const RuntimeMethod* method) ;
// System.Double Unity.Netcode.NetworkTimeSystem::get_ServerBufferSec()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double NetworkTimeSystem_get_ServerBufferSec_m07C6CA24A68C6972C984DE91B2AC93CED5717546_inline (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, const RuntimeMethod* method) ;
// System.Double Unity.Netcode.NetworkTimeSystem::get_LocalBufferSec()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double NetworkTimeSystem_get_LocalBufferSec_m2EE2B31F9AFDB2E6DCD3A842243723BD27D789A4_inline (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkTransport/TransportEventDelegate::Invoke(Unity.Netcode.NetworkEvent,System.UInt64,System.ArraySegment`1<System.Byte>,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TransportEventDelegate_Invoke_m229F59FBB7622E360ABD0E052077C885EDFF2FBE_inline (TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* __this, int32_t ___0_eventType, uint64_t ___1_clientId, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___2_payload, float ___3_receiveTime, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.DataStreamReader::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataStreamReader_get_Length_m5F216EB0F2C71A0576B7DD18864D2E3700AC050B (DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3* __this, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.DataStreamReader::ReadBytes(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataStreamReader_ReadBytes_m1E2D499A170CDF22A902617B1072E7E1091874A3 (DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3* __this, uint8_t* ___0_data, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41 (RuntimeArray* ___0_sourceArray, int32_t ___1_sourceIndex, RuntimeArray* ___2_destinationArray, int32_t ___3_destinationIndex, int32_t ___4_length, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<System.Byte>(T[]&,System.Int32)
inline void Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t, const RuntimeMethod*))Array_Resize_TisIl2CppFullySharedGenericAny_m263FC41C8DB989397C43C86556D63CEBE13F4712_gshared)((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)___0_array, ___1_newSize, method);
}
// System.Int32 System.BitConverter::ToInt32(System.Byte[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BitConverter_ToInt32_m259B4E62995575B80C4086347C867EB3C8D7DAB3 (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_value, int32_t ___1_startIndex, const RuntimeMethod* method) ;
// System.Void System.ArraySegment`1<System.Byte>::.ctor(T[],System.Int32,System.Int32)
inline void ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20 (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___0_array, int32_t ___1_offset, int32_t ___2_count, const RuntimeMethod* method)
{
	((  void (*) (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*, __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*, int32_t, int32_t, const RuntimeMethod*))ArraySegment_1__ctor_m3A1337B17EA471D2D1538CB43ADB3B91267F978F_gshared)((ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*)__this, (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)___0_array, ___1_offset, ___2_count, method);
}
// System.Int32 Unity.Netcode.Transports.UTP.BatchedSendQueue::get_HeadIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchedSendQueue_get_HeadIndex_m91CD2AD83101A70E26EF78B7460C36AC3C8F2C20 (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UTP.BatchedSendQueue::set_HeadIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchedSendQueue_set_HeadIndex_m44301042025EB7BA0D7B95A4CD1AF41821E44A29 (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 Unity.Netcode.Transports.UTP.BatchedSendQueue::get_TailIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchedSendQueue_get_TailIndex_mB4B8DD7E3103F96442E8B53CCA0BB5A5E25A2F16 (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UTP.BatchedSendQueue::set_TailIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchedSendQueue_set_TailIndex_m7D3474452C23C3195715C10C99050B0097B1FF18 (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Int32 Unity.Netcode.Transports.UTP.BatchedSendQueue::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchedSendQueue_get_Length_mD3D3E7C0FAA4242AC69FF929F9463C5D2FCC531A (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.NativeList`1<System.Byte>::get_Length()
inline int32_t NativeList_1_get_Length_mCCFB8F09EBEF5EA454CEA11FDB7B6100AF908D61 (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))NativeList_1_get_Length_mBCE0D52E1FEFC40B5CFEE2F41B493C7FF6A07FA7_gshared)((NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*)__this, method);
}
// System.Int32 Unity.Netcode.Transports.UTP.BatchedSendQueue::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchedSendQueue_get_Capacity_mD2B74A2589C7B887FB02D5483B408FEBFAEE7AAA (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Transports.UTP.BatchedSendQueue::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchedSendQueue_get_IsEmpty_m3036A22A4DAE86E6660B259E38AD2B0FBC21BD9C (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeList`1<System.Byte>::get_IsCreated()
inline bool NativeList_1_get_IsCreated_m0088506340DF8D71C5E8A04FD537552F82443F88 (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))NativeList_1_get_IsCreated_m4E2356CCFFB361C91CBEFB528F727AC7C244043F_gshared)((NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*)__this, method);
}
// System.Boolean Unity.Netcode.Transports.UTP.BatchedSendQueue::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchedSendQueue_get_IsCreated_mA3E2725C73F697AFC4A9BDD092A5E936F317A8CA (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, const RuntimeMethod* method) ;
// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.AllocatorManager/AllocatorHandle::op_Implicit(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D (int32_t ___0_a, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeList`1<System.Byte>::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
inline void NativeList_1__ctor_m8C903F568E40A185F0756A7A98CB77CD2619D078 (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* __this, int32_t ___0_initialCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	((  void (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))NativeList_1__ctor_mA1DFF4EEBED87ED011F318AEC145588B17212121_gshared)((NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*)__this, ___0_initialCapacity, ___1_allocator, method);
}
// System.Void Unity.Collections.NativeArray`1<System.Int32>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, int32_t ___0_length, int32_t ___1_allocator, int32_t ___2_options, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m788DE0F85C4051DDF092DDF96484DE655ACFB6F1_gshared)((NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)__this, ___0_length, ___1_allocator, ___2_options, method);
}
// System.Void Unity.Collections.NativeList`1<System.Byte>::ResizeUninitialized(System.Int32)
inline void NativeList_1_ResizeUninitialized_m753321DB060C4AAEC2ACD94AAC4D2766D52A821F (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* __this, int32_t ___0_length, const RuntimeMethod* method)
{
	((  void (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, int32_t, const RuntimeMethod*))NativeList_1_ResizeUninitialized_mC281739878E0A1D9BD814C0B970B46A554D8EDFD_gshared)((NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*)__this, ___0_length, method);
}
// System.Void Unity.Netcode.Transports.UTP.BatchedSendQueue::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchedSendQueue__ctor_m18E80247931EBB63D59B4DD6E4979D0B3D6FCC1E (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, int32_t ___0_capacity, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeList`1<System.Byte>::Dispose()
inline void NativeList_1_Dispose_mC0442A0F667EFDA4EAA6B6BAC0139B86A935AAD6 (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))NativeList_1_Dispose_m42535264C7291A64741CA36B4F0567D15D7BDC2F_gshared)((NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*)__this, method);
}
// System.Void Unity.Collections.NativeArray`1<System.Int32>::Dispose()
inline void NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, const RuntimeMethod*))NativeArray_1_Dispose_m365A262FA4CA431467F021D7732CECD68316AF80_gshared)((NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)__this, method);
}
// System.Void Unity.Netcode.Transports.UTP.BatchedSendQueue::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchedSendQueue_Dispose_mD4F40F358E16AD02B90DF571E134D2A08526CD7C (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.DataStreamWriter::WriteBytes(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataStreamWriter_WriteBytes_m5A6218CBEEA1204AC2B8822CB09422FCABF42CFD (DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* __this, uint8_t* ___0_data, int32_t ___1_bytes, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UTP.BatchedSendQueue::WriteBytes(Unity.Networking.Transport.DataStreamWriter&,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchedSendQueue_WriteBytes_mDC41B4796901540484FFDD18C7F8E060BC771933 (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* ___0_writer, uint8_t* ___1_data, int32_t ___2_length, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeListUnsafeUtility::GetUnsafePtr<System.Byte>(Unity.Collections.NativeList`1<T>)
inline void* NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3 (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 ___0_list, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1, const RuntimeMethod*))NativeListUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_mE9C167B5E37C0635A71E22EBFB746FB93AA72EC0_gshared)(il2cpp_codegen_cast_struct<NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1, NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94>(&___0_list), method);
}
// System.Void Unity.Networking.Transport.DataStreamWriter::.ctor(System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataStreamWriter__ctor_mE61DA857285F4FF4469253135FF3E8A40673EE62 (DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* __this, uint8_t* ___0_data, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Int32 System.ArraySegment`1<System.Byte>::get_Count()
inline int32_t ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*, const RuntimeMethod*))ArraySegment_1_get_Count_mEF96248898C14F3687A5C72B920F841701E4E13C_gshared_inline)((ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*)__this, method);
}
// System.Boolean Unity.Networking.Transport.DataStreamWriter::WriteInt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DataStreamWriter_WriteInt_mEE3DE78C7B6AA46BB509437F89EEA0658F2A851E (DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// T[] System.ArraySegment`1<System.Byte>::get_Array()
inline ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* il2cppRetVal = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*, const RuntimeMethod*))ArraySegment_1_get_Array_mE4A35DFD81ABF447350B9A05C0F4BF0248A3CFF2_gshared_inline)((ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*)__this, method);
	return (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)il2cppRetVal;
}
// System.Int32 System.ArraySegment`1<System.Byte>::get_Offset()
inline int32_t ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*, const RuntimeMethod*))ArraySegment_1_get_Offset_m4FAFF061AB36BF278BA8DC37B6D13718A06301E6_gshared_inline)((ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178*)__this, method);
}
// System.Void Unity.Netcode.Transports.UTP.BatchedSendQueue::AppendDataAtTail(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchedSendQueue_AppendDataAtTail_mC41B180A6F396AF0E90BE8FE09D17330EBAB56D9 (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___0_data, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemMove(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemMove_m4799FAA9C4BCFA1AEDC6ED01BB9A6DF657C4CEE3 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Transports.UTP.BatchedSendQueue::PushMessage(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchedSendQueue_PushMessage_m4721141E1D061171E1E7105817641CD163A15CFA (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___0_message, const RuntimeMethod* method) ;
// Unity.Collections.NativeArray`1<T> Unity.Collections.NativeList`1<System.Byte>::AsArray()
inline NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF NativeList_1_AsArray_mE16930FF723114AF02B699ADB8009C5162D3761E (NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* __this, const RuntimeMethod* method)
{
	NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 il2cppRetVal = ((  NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))NativeList_1_AsArray_m1E9616CC42457555561B1165B47ED6E2EEADAC98_gshared)((NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*)__this, method);
	return il2cpp_codegen_cast_struct<NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18>(&il2cppRetVal);
}
// System.Void Unity.Networking.Transport.DataStreamReader::.ctor(Unity.Collections.NativeArray`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataStreamReader__ctor_mE6C5005A31142F3547C3CE8D5D98AFCC383C009B (DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3* __this, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_array, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.DataStreamWriter::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataStreamWriter_get_Capacity_m52E805154817DAEED4FE0A784865F825C8BEA15D (DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* __this, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.DataStreamReader::SeekSet(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataStreamReader_SeekSet_m0B3939FF6C6A1C3B5A47CCA959457ED3DDF421DE (DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3* __this, int32_t ___0_pos, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.DataStreamReader::ReadInt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataStreamReader_ReadInt_m862924CC887B2309FAA8ED4C8E40E452B3D58E45 (DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.DataStreamReader::GetBytesRead()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DataStreamReader_GetBytesRead_m3A3C261F207245C5211B1066DC6BEFED2F1A7636 (DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Netcode.Transports.UTP.BatchedSendQueue::FillWriterWithMessages(Unity.Networking.Transport.DataStreamWriter&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchedSendQueue_FillWriterWithMessages_m1A6BE297B16C5E6BECF53F1108979256ECB1FBF4 (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* ___0_writer, const RuntimeMethod* method) ;
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52 (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// System.Int32 Unity.Netcode.Transports.UTP.BatchedSendQueue::FillWriterWithBytes(Unity.Networking.Transport.DataStreamWriter&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchedSendQueue_FillWriterWithBytes_mD06BD823D9E4782EE51937EE1103662A1F9F3DE3 (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* ___0_writer, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UTP.BatchedSendQueue::Consume(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchedSendQueue_Consume_m27415A79D38546D9757A191041B1D4EC8165509A (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, int32_t ___0_size, const RuntimeMethod* method) ;
// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::get_ServerCertificate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SecretsLoaderHelper_get_ServerCertificate_m17E07950D0BAE0F46481FD63731F00F964024023 (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::get_ServerPrivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SecretsLoaderHelper_get_ServerPrivate_mC64E26A2A2D022FA90E1D97ECBA6EC63988D55ED (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, const RuntimeMethod* method) ;
// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::get_ClientCA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SecretsLoaderHelper_get_ClientCA_mCD4313D71FDCA16695E86846C97ED8273E3D07E1 (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, const RuntimeMethod* method) ;
// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::get_ServerCommonName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SecretsLoaderHelper_get_ServerCommonName_m7757A0EB69519290091CFE45CFA5AA5704CE4326_inline (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<Unity.Netcode.Transports.UTP.UnityTransport>()
inline UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* Component_GetComponent_TisUnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_mDFDF528F272AEE465FED1CE8BB5330AA0F744D28 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* il2cppRetVal;
	((  void (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Component_GetComponent_TisIl2CppFullySharedGenericAny_m47CBDD147982125387F078ABBFDAAB92D397A6C2_gshared)((Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SetServerSecrets(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SetServerSecrets_m684BAAECD15C338E085AC16DB4CE73B1AA28E027 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, String_t* ___0_serverCertificate, String_t* ___1_serverPrivateKey, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SetClientSecrets(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SetClientSecrets_mEF4456DE072468B4B0F3133CA9A61B32FFD3DCC5 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, String_t* ___0_serverCommonName, String_t* ___1_caCertificate, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::ReadFile(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SecretsLoaderHelper_ReadFile_mDFF04D3D0602F3F2973F673741CDA4C128F1190A (String_t* ___0_path, String_t* ___1_label, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_m08BA7049EACE030ACE06AB8A8F2CDF2E2AFB55C6 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, String_t* ___0_path, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
// System.String System.Enum::GetName(System.Type,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_GetName_m05FE85181853F756BA6BB2C033DD3590E6114D29 (Type_t* ___0_enumType, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// Unity.Netcode.Transports.UTP.INetworkStreamDriverConstructor Unity.Netcode.Transports.UTP.UnityTransport::get_DriverConstructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityTransport_get_DriverConstructor_m87F5F253CC96D0739B5C93BE84A65A8851748461 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Object::GetInstanceID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkDriver Unity.Netcode.Transports.UTP.UnityTransport::get_NetworkDriver()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036 UnityTransport_get_NetworkDriver_m47D16CBF8A15BF7D86BFC276040B31046E38926D_inline (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) ;
// System.Void System.Action`2<System.Int32,Unity.Networking.Transport.NetworkDriver>::Invoke(T1,T2)
inline void Action_2_Invoke_mD7C393AE045EF225975A8BF6B27887913C28A829_inline (Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* __this, int32_t ___0_arg1, NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036 ___1_arg2, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Action_2_Invoke_m6343941059117DF354182855F996EB3D08B4C06C_gshared_inline)((Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8*)__this, (Il2CppFullySharedGenericAny)&___0_arg1, (Il2CppFullySharedGenericAny)&___1_arg2, method);
}
// System.Boolean Unity.Networking.Transport.NetworkDriver::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkDriver_get_IsCreated_m006F28C4A90B06A10CD0A09865C6F66C95B6142D (NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* __this, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.NetworkDriver::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkDriver_Dispose_m2B995E03ECC8DE8FFAD368C217B6D6B47367E28D (NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* __this, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.NetworkSettings::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSettings_Dispose_m2D73A6555834E52D4631863324D4FA79F1B696FD (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::get_Values()
inline ValueCollection_t3AB61A931E9B85D29A0A11FA6952A3775A93944D* Dictionary_2_get_Values_m26BDE98ADDE2424456D95202ABA0BAA1D30E079B (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* __this, const RuntimeMethod* method)
{
	ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* il2cppRetVal = ((  ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40* (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2_get_Values_mE06FB7381D8152E35F0716DC7FE13788362112A7_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
	return (ValueCollection_t3AB61A931E9B85D29A0A11FA6952A3775A93944D*)il2cppRetVal;
}
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::GetEnumerator()
inline Enumerator_t78A82A05AC2820BE318F9F3DAD0F9B1802CB97FB ValueCollection_GetEnumerator_m3DED007ABC7D6210DF9239B5958ED9A64AD1733D (ValueCollection_t3AB61A931E9B85D29A0A11FA6952A3775A93944D* __this, const RuntimeMethod* method)
{
	Enumerator_t78A82A05AC2820BE318F9F3DAD0F9B1802CB97FB il2cppRetVal;
	((  void (*) (ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*, Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222*, const RuntimeMethod*))ValueCollection_GetEnumerator_m22BB9C6494A679370661D0B6DA1FA7EF744281EA_gshared)((ValueCollection_tC492596681BD51AB34FC76FA76C15C9B3FFB7B40*)__this, (Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::Dispose()
inline void Enumerator_Dispose_m52C4A26A0A38F9BB56472580045AFD70BEEEC6AE (Enumerator_t78A82A05AC2820BE318F9F3DAD0F9B1802CB97FB* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222*, const RuntimeMethod*))Enumerator_Dispose_mB05777B182DD6D8C5ED21811C2CA95405D2743F8_gshared)((Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222*)__this, method);
}
// TValue System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::get_Current()
inline BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 Enumerator_get_Current_m33D28F03A09CA0F36EACEBC301F4F41BEBDB3A4D_inline (Enumerator_t78A82A05AC2820BE318F9F3DAD0F9B1802CB97FB* __this, const RuntimeMethod* method)
{
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 il2cppRetVal;
	((  void (*) (Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m77681472C32B9ABB97AE602C0D4C365A0A8E8ACE_gshared_inline)((Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::MoveNext()
inline bool Enumerator_MoveNext_m62407660FD405CD79B4C3DE43D8D0CC99E4A530B (Enumerator_t78A82A05AC2820BE318F9F3DAD0F9B1802CB97FB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222*, const RuntimeMethod*))Enumerator_MoveNext_m297C3CEEAAC8D29D8F7C93E0801CD1D362D1C66F_gshared)((Enumerator_tEEF12A9EDAAA0461A72ED9491F6AC20B22440222*)__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::Clear()
inline void Dictionary_2_Clear_m5050A8ED598E870BB3A292F60CA8F125B0AA6A80 (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2_Clear_m935B3F117860376DC854C9E0C80CBD99BE77EEA4_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void System.Action`1<System.Int32>::Invoke(T)
inline void Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* __this, int32_t ___0_obj, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline)((Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99*)__this, (Il2CppFullySharedGenericAny)&___0_obj, method);
}
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkPipeline Unity.Networking.Transport.NetworkPipeline::get_Null()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 NetworkPipeline_get_Null_m2A86DFD59FADE78775823D6AB411F3F968BBB00D (const RuntimeMethod* method) ;
// System.Boolean System.ValueType::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkSettings& Unity.Networking.Transport.Relay.RelayParameterExtensions::WithRelayParameters(Unity.Networking.Transport.NetworkSettings&,Unity.Networking.Transport.Relay.RelayServerData&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* RelayParameterExtensions_WithRelayParameters_m8025C21B35FAD6E160B05C727131152D372D3F0F (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* ___0_settings, RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09* ___1_serverData, int32_t ___2_relayConnectionTimeMS, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkEndPoint Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData::get_ServerEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ConnectionAddressData_get_ServerEndPoint_m86FC9C426088E6F206D0D1FBE1574A0BCBF6439C (ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::InitDriver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_InitDriver_mB509E02E33E60F36C30B2DDAB377866ABEA22DEA (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkFamily Unity.Networking.Transport.NetworkEndPoint::get_Family()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkEndPoint_get_Family_mD65C497E01B38CF8F1E4EB94B50A1E7E6CF5BE5E (NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63* __this, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkEndPoint Unity.Networking.Transport.NetworkEndPoint::get_AnyIpv4()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 NetworkEndPoint_get_AnyIpv4_m9E44E70ACE51BA65B73BBF8217835C6669D0927D (const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkEndPoint Unity.Networking.Transport.NetworkEndPoint::get_AnyIpv6()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 NetworkEndPoint_get_AnyIpv6_mC4CE165BBEF5C10339B7CE69AF44BDBFFE84DA24 (const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.NetworkDriver::Bind(Unity.Networking.Transport.NetworkEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkDriver_Bind_m994686C7645A1A631C8A4B74B5E508ECB062C771 (NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* __this, NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ___0_endpoint, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkConnection Unity.Networking.Transport.NetworkDriver::Connect(Unity.Networking.Transport.NetworkEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 NetworkDriver_Connect_m135819C4EE07E41AE102BC66C00BE43DEB454FCE (NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* __this, NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ___0_endpoint, const RuntimeMethod* method) ;
// System.UInt64 Unity.Netcode.Transports.UTP.UnityTransport::ParseClientId(Unity.Networking.Transport.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UnityTransport_ParseClientId_mD0481F6EE16C9EA9CCA32FFA624FF0B89D8E69AE (NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 ___0_utpConnectionId, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.NetworkDriver::Listen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkDriver_Listen_m9673394E3D802D8A4FD978682B4AFDC19B0C7020 (NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* __this, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.Relay.RelayServerData::.ctor(System.String,System.UInt16,System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RelayServerData__ctor_m039E25DA5133BDFB0F8C29E4C721A792C7C46042 (RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09* __this, String_t* ___0_host, uint16_t ___1_port, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_allocationId, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_connectionData, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_hostConnectionData, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_key, bool ___6_isSecure, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SetProtocol(Unity.Netcode.Transports.UTP.UnityTransport/ProtocolType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SetProtocol_mAE283237461395BF44FC7AF6654254F62D67A3C3 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, int32_t ___0_inProtocol, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SetRelayServerData(System.String,System.UInt16,System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SetRelayServerData_m512E33CBD4BAF9DC1A743BDF16C55EA6B82461F0 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, String_t* ___0_ipv4Address, uint16_t ___1_port, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_allocationIdBytes, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_keyBytes, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_connectionDataBytes, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_hostConnectionDataBytes, bool ___6_isSecure, const RuntimeMethod* method) ;
// System.String Unity.Networking.Transport.NetworkEndPoint::get_Address()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NetworkEndPoint_get_Address_m8CB1DFBD3F0943AF98BC707EB0F942B698EE00E5 (NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63* __this, const RuntimeMethod* method) ;
// System.String[] System.String::Split(System.Char,System.StringSplitOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4 (String_t* __this, Il2CppChar ___0_separator, int32_t ___1_options, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.NetworkEndPoint::op_Inequality(Unity.Networking.Transport.NetworkEndPoint,Unity.Networking.Transport.NetworkEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkEndPoint_op_Inequality_m582DA760A6FE0C5119D41F5CE211A397FE07A384 (NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ___0_lhs, NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ___1_rhs, const RuntimeMethod* method) ;
// System.UInt16 Unity.Networking.Transport.NetworkEndPoint::get_Port()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t NetworkEndPoint_get_Port_m92EFA89C28AE3EA5AF00CD0BC8DB7403897756EB (NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SetConnectionData(System.String,System.UInt16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SetConnectionData_m072363DFC264110D349C7D3F958E8464EB1B74CC (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, String_t* ___0_ipv4Address, uint16_t ___1_port, String_t* ___2_listenAddress, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport::ServerBindAndListen(Unity.Networking.Transport.NetworkEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityTransport_ServerBindAndListen_mB644AE979C589A568E8AB675D01CCABFAF02446F (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ___0_endPoint, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkConnection Unity.Netcode.Transports.UTP.UnityTransport::ParseClientId(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 UnityTransport_ParseClientId_m75436222E397B5D5BCCF778D71890A12F0E090E5 (uint64_t ___0_netcodeConnectionId, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.NetworkDriver::BeginSend(Unity.Networking.Transport.NetworkPipeline,Unity.Networking.Transport.NetworkConnection,Unity.Networking.Transport.DataStreamWriter&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkDriver_BeginSend_m21166BF86B424CA3C6550DC2FACE745E7D20218A (NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* __this, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___0_pipe, NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 ___1_id, DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* ___2_writer, int32_t ___3_requiredPayloadSize, const RuntimeMethod* method) ;
// System.String Unity.Netcode.Transports.UTP.ErrorUtilities::ErrorToString(Unity.Networking.Transport.Error.StatusCode,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorUtilities_ErrorToString_m4343A44389AFF8060D72162538C2BCC1652C92E8 (int32_t ___0_error, uint64_t ___1_connectionId, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.NetworkPipeline::op_Equality(Unity.Networking.Transport.NetworkPipeline,Unity.Networking.Transport.NetworkPipeline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkPipeline_op_Equality_mA9AE79BEA5C9AEEA5EBD0EA49EC22CAC387918D2 (NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___0_lhs, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___1_rhs, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.NetworkDriver::EndSend(Unity.Networking.Transport.DataStreamWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkDriver_EndSend_m8F3C9019D168C63D011BF527ABB0C213C840C394 (NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* __this, DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA ___0_writer, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkConnection Unity.Networking.Transport.NetworkDriver::Accept()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 NetworkDriver_Accept_m3F866B13DCB636206113E97EA279160AFDA789DB (NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.NetworkConnection::op_Equality(Unity.Networking.Transport.NetworkConnection,Unity.Networking.Transport.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkConnection_op_Equality_m14044022C0D3C1DA3CF97186FCD59D88256F8202 (NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 ___0_lhs, NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 ___1_rhs, const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510 (const RuntimeMethod* method) ;
// System.Void Unity.Netcode.NetworkTransport::InvokeOnTransportEvent(Unity.Netcode.NetworkEvent,System.UInt64,System.ArraySegment`1<System.Byte>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_InvokeOnTransportEvent_m56EFDDC779FB136044F3064BE9E68BF81EB9790F (NetworkTransport_t55E07951299283974C86476F46CC977780560B64* __this, int32_t ___0_eventType, uint64_t ___1_clientId, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___2_payload, float ___3_receiveTime, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.Transports.UTP.BatchedReceiveQueue>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mD42C03F5079D71BA857313B0569975C6B8308ACF (Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A* __this, uint64_t ___0_key, BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA** ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, (Il2CppFullySharedGenericAny*)___1_value, method);
}
// System.Void Unity.Netcode.Transports.UTP.BatchedReceiveQueue::PushReader(Unity.Networking.Transport.DataStreamReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchedReceiveQueue_PushReader_m0E81E806C9D1FD220CF8A15189B42C36FD37ED19 (BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA* __this, DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3 ___0_reader, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UTP.BatchedReceiveQueue::.ctor(Unity.Networking.Transport.DataStreamReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchedReceiveQueue__ctor_m965421034E74E6506EE2DE1D5EE913C6E2A55DE9 (BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA* __this, DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3 ___0_reader, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.Transports.UTP.BatchedReceiveQueue>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m1F79B5C829C4A8219BEA6848A252669AD1032777 (Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A* __this, uint64_t ___0_key, BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_set_Item_m4C6841170DD11AED683D2D71919F362A4CFF4A80_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, (Il2CppFullySharedGenericAny)___1_value, method);
}
// System.ArraySegment`1<System.Byte> Unity.Netcode.Transports.UTP.BatchedReceiveQueue::PopMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 BatchedReceiveQueue_PopMessage_m20B586540098D5D1A1FD0830396FAFB62CD6E9BF (BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA* __this, const RuntimeMethod* method) ;
// System.Boolean System.ArraySegment`1<System.Byte>::op_Equality(System.ArraySegment`1<T>,System.ArraySegment`1<T>)
inline bool ArraySegment_1_op_Equality_m8DDD8A4F446528A05995B3A15AD7635E28FE244D (ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___0_a, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___1_b, const RuntimeMethod* method)
{
	return ((  bool (*) (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178, ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178, const RuntimeMethod*))ArraySegment_1_op_Equality_mFB1809C3CA4BB2B0507478FDBB654C0E9CBEC612_gshared)(il2cpp_codegen_cast_struct<ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093>(&___0_a), il2cpp_codegen_cast_struct<ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093>(&___1_b), method);
}
// System.Boolean Unity.Netcode.Transports.UTP.BatchedReceiveQueue::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchedReceiveQueue_get_IsEmpty_mE6FE9C4054B69EFAB47C9842F39A16E9F1753721 (BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA* __this, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkEvent/Type Unity.Networking.Transport.NetworkDriver::PopEvent(Unity.Networking.Transport.NetworkConnection&,Unity.Networking.Transport.DataStreamReader&,Unity.Networking.Transport.NetworkPipeline&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t NetworkDriver_PopEvent_mE0ECB283C8178BAA9C30364C1242BABEC19B5757 (NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* __this, NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4* ___0_con, DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3* ___1_reader, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* ___2_pipeline, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.Transports.UTP.BatchedReceiveQueue>::Remove(TKey)
inline bool Dictionary_2_Remove_m157C5C355B3F70983085122641AC4E154A8A2CBC (Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A* __this, uint64_t ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, method);
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::ClearSendQueuesForClientId(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_ClearSendQueuesForClientId_m1184B02CF88D93128579FE112BC2337E5C10BD0F (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, uint64_t ___0_clientId, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::ReceiveMessages(System.UInt64,Unity.Networking.Transport.NetworkPipeline,Unity.Networking.Transport.DataStreamReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_ReceiveMessages_mB3FBD7582B7E56D776F3869A236952701DC217D5 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, uint64_t ___0_clientId, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___1_pipeline, DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3 ___2_dataReader, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::GetEnumerator()
inline Enumerator_t88E97C0EC0DCA5E1994B18881637E25E4AEC96AD Dictionary_2_GetEnumerator_m121C176E03C8FAF9DD3D1327B0A5A740A8DC540A (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* __this, const RuntimeMethod* method)
{
	Enumerator_t88E97C0EC0DCA5E1994B18881637E25E4AEC96AD il2cppRetVal;
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Dictionary_2_GetEnumerator_mEC4954B142C43B5CBAA045953EAD4E168FFCD492_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::Dispose()
inline void Enumerator_Dispose_m9FB01015E439E90A10738C6134B30FC96A29F20D (Enumerator_t88E97C0EC0DCA5E1994B18881637E25E4AEC96AD* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Enumerator_Dispose_m3D89F01AE65EC60062FFB578C0E771C098EF2CB7_gshared)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, method);
}
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::get_Current()
inline KeyValuePair_2_tD9D8D451DD3BF1ED3A1A65D8945C85F8A5C93293 Enumerator_get_Current_mA410D3A25B765A2E862298CB4901BDB78D1189EE_inline (Enumerator_t88E97C0EC0DCA5E1994B18881637E25E4AEC96AD* __this, const RuntimeMethod* method)
{
	KeyValuePair_2_tD9D8D451DD3BF1ED3A1A65D8945C85F8A5C93293 il2cppRetVal;
	((  void (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, const RuntimeMethod*))Enumerator_get_Current_m26AF82C275C82180BB7F23C7E408BC1FEB9A38EE_gshared_inline)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TKey System.Collections.Generic.KeyValuePair`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::get_Key()
inline SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 KeyValuePair_2_get_Key_m021A1F603DB4FEC5A0CD6EF0D2D1B681694BEB7E_inline (KeyValuePair_2_tD9D8D451DD3BF1ED3A1A65D8945C85F8A5C93293* __this, const RuntimeMethod* method)
{
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 il2cppRetVal;
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TValue System.Collections.Generic.KeyValuePair`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::get_Value()
inline BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 KeyValuePair_2_get_Value_m241D85407DA71D4A8C7A5158985F82472CC4C8C5_inline (KeyValuePair_2_tD9D8D451DD3BF1ED3A1A65D8945C85F8A5C93293* __this, const RuntimeMethod* method)
{
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 il2cppRetVal;
	((  void (*) (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline)((KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SendBatchedMessages(Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SendBatchedMessages_m676B328E0E17B2E446769BEC8B541904CAF8C65A (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___0_sendTarget, BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 ___1_queue, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::MoveNext()
inline bool Enumerator_MoveNext_mBA961C119140246EE3B77080B59C1B2158E45A94 (Enumerator_t88E97C0EC0DCA5E1994B18881637E25E4AEC96AD* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*, const RuntimeMethod*))Enumerator_MoveNext_m97783F73CDB1D0083A2F7D26A51847BF0843ADEA_gshared)((Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1*)__this, method);
}
// Unity.Jobs.JobHandle Unity.Networking.Transport.NetworkDriver::ScheduleUpdate(Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 NetworkDriver_ScheduleUpdate_mBF306FD6BA96C2D1439D9322429EDFB7FF581A14 (NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_dep, const RuntimeMethod* method) ;
// System.Void Unity.Jobs.JobHandle::Complete()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JobHandle_Complete_mDCED35A125AAB37EDDAB2E31C805B4904B614A4A (JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08* __this, const RuntimeMethod* method) ;
// Unity.Networking.Transport.Relay.RelayConnectionStatus Unity.Networking.Transport.Relay.NetworkDriverRelayExtensions::GetRelayConnectionStatus(Unity.Networking.Transport.NetworkDriver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkDriverRelayExtensions_GetRelayConnectionStatus_mE2BFB1735FAA4BBD33FB3C3C8770BC30D99B2CA6 (NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036 ___0_driver, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport::AcceptConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityTransport_AcceptConnection_m14AA4E2915B8E5C2E6B8643A3C103EED242A928B (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport::ProcessEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityTransport_ProcessEvent_mDBA825C0B894F06F2C2B4A64BBDF0AA0E52FBC7A (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::DisposeInternals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_DisposeInternals_mF5FB50D48F59B47C7FD498535BCE4A6933874303 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkConnection/State Unity.Networking.Transport.NetworkDriver::GetConnectionState(Unity.Networking.Transport.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkDriver_GetConnectionState_mFEBA599E66C6FA4677B5738EAF0BA99E52436EF9 (NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* __this, NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 ___0_con, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkPipelineStageId Unity.Networking.Transport.NetworkPipelineStageCollection::GetStageId(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkPipelineStageId_tBE4FAE81AD1922E0BEEDBC611342E3B0A7B5ECCA NetworkPipelineStageCollection_GetStageId_m46FAF89A65BC1F183DB1894225CE89C7A39CEF20 (Type_t* ___0_stageType, const RuntimeMethod* method) ;
// System.Void Unity.Networking.Transport.NetworkDriver::GetPipelineBuffers(Unity.Networking.Transport.NetworkPipeline,Unity.Networking.Transport.NetworkPipelineStageId,Unity.Networking.Transport.NetworkConnection,Unity.Collections.NativeArray`1<System.Byte>&,Unity.Collections.NativeArray`1<System.Byte>&,Unity.Collections.NativeArray`1<System.Byte>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkDriver_GetPipelineBuffers_mDFAB4A0B3F7E3A330FFC1B21D72C1E2ADF790667 (NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* __this, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___0_pipeline, NetworkPipelineStageId_tBE4FAE81AD1922E0BEEDBC611342E3B0A7B5ECCA ___1_stageId, NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 ___2_connection, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* ___3_readProcessingBuffer, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* ___4_writeProcessingBuffer, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF* ___5_sharedBuffer, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafePtr<System.Byte>(Unity.Collections.NativeArray`1<T>)
inline void* NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2 (NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF ___0_nativeArray, const RuntimeMethod* method)
{
	return ((  void* (*) (NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, const RuntimeMethod*))NativeArrayUnsafeUtility_GetUnsafePtr_TisIl2CppFullySharedGenericStruct_m4AB802D5B1B296D0F976C1E7631699B0C4A4D00F_gshared)(il2cpp_codegen_cast_struct<NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF>(&___0_nativeArray), method);
}
// System.Void Unity.Collections.NativeList`1<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget>::.ctor(System.Int32,Unity.Collections.AllocatorManager/AllocatorHandle)
inline void NativeList_1__ctor_mE639C651EB144270377F11F9F6F5D985AE431513 (NativeList_1_t19C42565694B875C975B0E66AD45E82CDE2EE935* __this, int32_t ___0_initialCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	((  void (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))NativeList_1__ctor_mA1DFF4EEBED87ED011F318AEC145588B17212121_gshared)((NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*)__this, ___0_initialCapacity, ___1_allocator, method);
}
// System.Void Unity.Collections.NativeList`1<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget>::Dispose()
inline void NativeList_1_Dispose_m1EAC342766B62EF838C22FC2AB2D96B4354FF784 (NativeList_1_t19C42565694B875C975B0E66AD45E82CDE2EE935* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))NativeList_1_Dispose_m42535264C7291A64741CA36B4F0567D15D7BDC2F_gshared)((NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*)__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::get_Keys()
inline KeyCollection_t56099B4F564E3749A78231A91A6D5639B8D2CF0B* Dictionary_2_get_Keys_m0A366303BDD0CE0ED424E22C02B38F062EB36795 (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* __this, const RuntimeMethod* method)
{
	KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* il2cppRetVal = ((  KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55* (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2_get_Keys_mD82D6690B1A801E8EED43F1B1D310893C9D334CF_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
	return (KeyCollection_t56099B4F564E3749A78231A91A6D5639B8D2CF0B*)il2cppRetVal;
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::GetEnumerator()
inline Enumerator_t5792751BB1368B27B31A13289F8E53829A2E45F4 KeyCollection_GetEnumerator_m45582D53760B8E2CB5D77ECA65A9C7B5E3FCE80A (KeyCollection_t56099B4F564E3749A78231A91A6D5639B8D2CF0B* __this, const RuntimeMethod* method)
{
	Enumerator_t5792751BB1368B27B31A13289F8E53829A2E45F4 il2cppRetVal;
	((  void (*) (KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55*, Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977*, const RuntimeMethod*))KeyCollection_GetEnumerator_m1624A44B07D62B8CC592FEAE7A521D9504E0ACB3_gshared)((KeyCollection_tB792ACBAE0B99278B0B7B0F7440B4788E98F0D55*)__this, (Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::Dispose()
inline void Enumerator_Dispose_m5A75DFC69FAF26E24498822E4BF541BC7FCE1153 (Enumerator_t5792751BB1368B27B31A13289F8E53829A2E45F4* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977*, const RuntimeMethod*))Enumerator_Dispose_m3E0B734E98D35978EEE706FCEC2FE08FEA74FD35_gshared)((Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977*)__this, method);
}
// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::get_Current()
inline SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 Enumerator_get_Current_m65969C1CCF64E71F406D33B69802D5AE2F509049_inline (Enumerator_t5792751BB1368B27B31A13289F8E53829A2E45F4* __this, const RuntimeMethod* method)
{
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 il2cppRetVal;
	((  void (*) (Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977*, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Enumerator_get_Current_m2D9E3398C2A3349E3F0F189A38E881D11DE5AA15_gshared_inline)((Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977*)__this, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void Unity.Collections.NativeList`1<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget>::Add(T&)
inline void NativeList_1_Add_m427C263965065B94DF268C9EACBEE0496DC24B90 (NativeList_1_t19C42565694B875C975B0E66AD45E82CDE2EE935* __this, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct*, const RuntimeMethod*))NativeList_1_Add_m9BE8F632802CF4BA6110C86A3C1842F568C58DBB_gshared)((NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*)__this, (Il2CppFullySharedGenericStruct*)___0_value, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::MoveNext()
inline bool Enumerator_MoveNext_m722D0C909BE2C23A52B144C90BD4A736F2C22704 (Enumerator_t5792751BB1368B27B31A13289F8E53829A2E45F4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977*, const RuntimeMethod*))Enumerator_MoveNext_m21C503A713FDCA406492E2BE960D85320752E615_gshared)((Enumerator_tE10E03C65C00BC14DE96993EA5248F610F88C977*)__this, method);
}
// Unity.Collections.NativeArray`1/Enumerator<T> Unity.Collections.NativeList`1<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget>::GetEnumerator()
inline Enumerator_t80B573881CD54D322A01D47FD6501B91C9258327 NativeList_1_GetEnumerator_m0B13CCF571EFA970C5D524F2113A37B88A43EF6F (NativeList_1_t19C42565694B875C975B0E66AD45E82CDE2EE935* __this, const RuntimeMethod* method)
{
	Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405 il2cppRetVal = ((  Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405 (*) (NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*, const RuntimeMethod*))NativeList_1_GetEnumerator_mAEC3E4F148C87993A6A957CCD8D16A1CBADF6621_gshared)((NativeList_1_tC1434025FAC1738D2E1A0029AA90EC61D91370C1*)__this, method);
	return il2cpp_codegen_cast_struct<Enumerator_t80B573881CD54D322A01D47FD6501B91C9258327, Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405>(&il2cppRetVal);
}
// System.Void Unity.Collections.NativeArray`1/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget>::Dispose()
inline void Enumerator_Dispose_m6C03A1426C65803A8DBC0AFD73E392C1B4386513 (Enumerator_t80B573881CD54D322A01D47FD6501B91C9258327* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405*, const RuntimeMethod*))Enumerator_Dispose_m97F29D6F80B478A97A6DA81F665E7DA693E17E64_gshared)((Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405*)__this, method);
}
// T Unity.Collections.NativeArray`1/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget>::get_Current()
inline SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 Enumerator_get_Current_m03B5BF99A84FB01095607D66EB175C807EEF2178 (Enumerator_t80B573881CD54D322A01D47FD6501B91C9258327* __this, const RuntimeMethod* method)
{
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 il2cppRetVal;
	((  void (*) (Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Enumerator_get_Current_mF9A198DACCE8ED0DC6FD097825D7A0F82D149DBA_gshared)((Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405*)__this, (Il2CppFullySharedGenericStruct*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// TValue System.Collections.Generic.Dictionary`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::get_Item(TKey)
inline BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 Dictionary_2_get_Item_m9EACCB2FE62411809CEA75D43888AF7DBBFDD873 (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* __this, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___0_key, const RuntimeMethod* method)
{
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 il2cppRetVal;
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_get_Item_m2E96908E9716367701CD737FA54C884EB2A8C3EA_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::Remove(TKey)
inline bool Dictionary_2_Remove_mAE62B9948A0CEE783F66F9E9FC85730381EC7013 (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* __this, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___0_key, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Remove_m583C4F0E2926B584BE6EC6008195360FC631C14C_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, method);
}
// System.Boolean Unity.Collections.NativeArray`1/Enumerator<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget>::MoveNext()
inline bool Enumerator_MoveNext_mFC753F80A7B658E99A5F04CC9ACC52ED9DD1C4B0 (Enumerator_t80B573881CD54D322A01D47FD6501B91C9258327* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405*, const RuntimeMethod*))Enumerator_MoveNext_mC9099E56E01AB33169AB4EE888BD9A2B752961DE_gshared)((Enumerator_t82F77221EB09A3A14061DC0C6965526D856BC405*)__this, method);
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::FlushSendQueuesForClientId(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_FlushSendQueuesForClientId_mA5F9D3324BB7AFDA5FE62A99A0A8836D1C3BF7A3 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, uint64_t ___0_clientId, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.NetworkDriver::Disconnect(Unity.Networking.Transport.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkDriver_Disconnect_m1925090D52AEF6839A78D391892C269C2184D587 (NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* __this, NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 ___0_id, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Assert(System.Boolean,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Assert_mA460392021AC0A8210C9081E3C1C9652DBF32BF6 (bool ___0_condition, String_t* ___1_message, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.UInt64 Unity.Netcode.NetworkManager::ClientIdToTransportId(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetworkManager_ClientIdToTransportId_m36273DB340E8A39BB7E19504A0EB52988983CF01 (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, uint64_t ___0_clientId, const RuntimeMethod* method) ;
// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::ExtractRtt(Unity.Networking.Transport.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityTransport_ExtractRtt_m0FB3C110BE2C6299E93F5E059819D4187D984671 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 ___0_networkConnection, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Networking.Transport.NetworkConnection>()
inline int32_t UnsafeUtility_SizeOf_TisNetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4_mF6303BA38BC2C1FD17880A4274FE9412A9670E0C (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_gshared)(method);
}
// System.Void Unity.Networking.Transport.NetworkSettings::.ctor(Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkSettings__ctor_mA6470D24077F1464F81F521A490AAB45DF4E4EFB (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* __this, int32_t ___0_allocator, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkSettings& Unity.Networking.Transport.Utilities.FragmentationStageParameterExtensions::WithFragmentationStageParameters(Unity.Networking.Transport.NetworkSettings&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* FragmentationStageParameterExtensions_WithFragmentationStageParameters_m36789359AAC36AE9359B0D4851E5B3E66A570720 (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* ___0_settings, int32_t ___1_payloadCapacity, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkSettings& Unity.Networking.Transport.BaselibNetworkParameterExtensions::WithBaselibNetworkInterfaceParameters(Unity.Networking.Transport.NetworkSettings&,System.Int32,System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* BaselibNetworkParameterExtensions_WithBaselibNetworkInterfaceParameters_m7D3FB8742A79FAF55A847330FE57ADB0C10B75FD (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* ___0_settings, int32_t ___1_receiveQueueCapacity, int32_t ___2_sendQueueCapacity, uint32_t ___3_maximumPayloadSize, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkPipeline Unity.Netcode.Transports.UTP.UnityTransport::SelectSendPipeline(Unity.Netcode.NetworkDelivery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 UnityTransport_SelectSendPipeline_m30254C6AD763FA133356411D218D998CC9C03E91 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, int32_t ___0_delivery, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.NetworkPipeline::op_Inequality(Unity.Networking.Transport.NetworkPipeline,Unity.Networking.Transport.NetworkPipeline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkPipeline_op_Inequality_m3B0595A06BF15AF50491B0B482B36B12C2683178 (NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___0_lhs, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___1_rhs, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UTP.UnityTransport/SendTarget::.ctor(System.UInt64,Unity.Networking.Transport.NetworkPipeline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendTarget__ctor_mF0E1C6C7B9CF2C58418453C22D843533E585BD41 (SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* __this, uint64_t ___0_clientId, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___1_networkPipeline, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mB93963CC52EF7BACC2DBF92A28CDBD6E79F8A007 (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* __this, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___0_key, BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* ___1_value, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny*, const RuntimeMethod*))Dictionary_2_TryGetValue_m7519D765EAF1E8A7D3137C2F1B7B3A01D15A1692_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, (Il2CppFullySharedGenericAny*)___1_value, method);
}
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF (int32_t ___0_val1, int32_t ___1_val2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::Add(TKey,TValue)
inline void Dictionary_2_Add_m370C175FD5C4D5E44F48B00453720BCA3F546BF4 (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* __this, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___0_key, BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 ___1_value, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))Dictionary_2_Add_m54D479280472DEA042DB3933AF547E666B017333_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, (Il2CppFullySharedGenericAny)&___0_key, (Il2CppFullySharedGenericAny)&___1_value, method);
}
// System.UInt64 Unity.Netcode.NetworkManager::TransportIdToClientId(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetworkManager_TransportIdToClientId_m8B93A6A1E6250B432D49D76E2A63E3A64E0E41ED (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, uint64_t ___0_transportId, const RuntimeMethod* method) ;
// Unity.Jobs.JobHandle Unity.Networking.Transport.NetworkDriver::ScheduleFlushSend(Unity.Jobs.JobHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 NetworkDriver_ScheduleFlushSend_mD70E667D237F0E074B7B41BB34458119043A0958 (NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* __this, JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___0_dep, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport::ClientBindAndConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityTransport_ClientBindAndConnect_m314FF705C9FCF4363F289CDD4674F179E8203BDF (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkEndPoint Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData::get_ListenEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ConnectionAddressData_get_ListenEndPoint_m2B73F5C05418A012BEB4E01A6E43DC7FACBAA8D0 (ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport::StartRelayServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityTransport_StartRelayServer_m6AABA070D1F162026424AF5D7DD02FD6C9227097 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.Transports.UTP.BatchedReceiveQueue>::Clear()
inline void Dictionary_2_Clear_m062CEB4C99310EDD758768644696BB43C6F8A27B (Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2_Clear_m935B3F117860376DC854C9E0C80CBD99BE77EEA4_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Nullable`1<System.UInt32> Unity.Netcode.Transports.UTP.UnityTransport::get_DebugSimulatorRandomSeed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 UnityTransport_get_DebugSimulatorRandomSeed_m4C482F701019EFFA6017A5FAE91F2458BEF684FE_inline (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.UInt32>::get_HasValue()
inline bool Nullable_1_get_HasValue_mDEB82F7445A31CA12FE47E887EAE322E7ABB1B54_inline (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, const RuntimeMethod*))Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, method);
}
// System.Int64 System.Diagnostics.Stopwatch::GetTimestamp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_GetTimestamp_mA3BDF219C573A34751D6A792E86C825B74D2CEB7 (const RuntimeMethod* method) ;
// T System.Nullable`1<System.UInt32>::GetValueOrDefault()
inline uint32_t Nullable_1_GetValueOrDefault_m1534AD85F2094EE7E4C958FBEE356468ED7A1B51_inline (Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099* __this, const RuntimeMethod* method)
{
	uint32_t il2cppRetVal;
	((  void (*) (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mC057FBD944AF068B90EBDD0B496231A01B2A4228_gshared_inline)((Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339*)__this, (Il2CppFullySharedGenericStruct*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// Unity.Networking.Transport.NetworkSettings& Unity.Networking.Transport.Utilities.SimulatorStageParameterExtensions::WithSimulatorStageParameters(Unity.Networking.Transport.NetworkSettings&,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* SimulatorStageParameterExtensions_WithSimulatorStageParameters_mC426EFA09868B412137F4DA2770D658A594E8B1B (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* ___0_settings, int32_t ___1_maxPacketCount, int32_t ___2_maxPacketSize, int32_t ___3_packetDelayMs, int32_t ___4_packetJitterMs, int32_t ___5_packetDropInterval, int32_t ___6_packetDropPercentage, int32_t ___7_fuzzFactor, int32_t ___8_fuzzOffset, uint32_t ___9_randomSeed, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::ConfigureSimulatorForUtp1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_ConfigureSimulatorForUtp1_mFF544D83794051D6C5FC63C364211D6A14BE01E3 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkSettings& Unity.Networking.Transport.CommonNetworkParametersExtensions::WithNetworkConfigParameters(Unity.Networking.Transport.NetworkSettings&,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* CommonNetworkParametersExtensions_WithNetworkConfigParameters_m6EF7D65466B63D63B632D3D5BDF49CB47CD938F7 (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* ___0_settings, int32_t ___1_connectTimeoutMS, int32_t ___2_maxConnectAttempts, int32_t ___3_disconnectTimeoutMS, int32_t ___4_heartbeatTimeoutMS, int32_t ___5_maxFrameTimeMS, int32_t ___6_fixedFrameTimeMS, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkDriver Unity.Networking.Transport.NetworkDriver::Create(Unity.Networking.Transport.NetworkSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036 NetworkDriver_Create_m28AD7ED83DAC754E2CF8605F6DC7465203B42DBE (NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0 ___0_settings, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SetupPipelinesForUtp1(Unity.Networking.Transport.NetworkDriver,Unity.Networking.Transport.NetworkPipeline&,Unity.Networking.Transport.NetworkPipeline&,Unity.Networking.Transport.NetworkPipeline&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SetupPipelinesForUtp1_mBB88F9D60C339BA6D7462E30462B02BDC10A7B3D (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036 ___0_driver, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* ___1_unreliableFragmentedPipeline, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* ___2_unreliableSequencedFragmentedPipeline, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* ___3_reliableSequencedPipeline, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkPipeline Unity.Networking.Transport.NetworkDriver::CreatePipeline(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 NetworkDriver_CreatePipeline_mB6407333A9AE696CECBAFA7A0389DA04F35AAB9C (NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* __this, TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___0_stages, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue>::.ctor()
inline void Dictionary_2__ctor_m9CA0898CE2B1D9B7833037BB9A2F78339ABB90F8 (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.UInt64,Unity.Netcode.Transports.UTP.BatchedReceiveQueue>::.ctor()
inline void Dictionary_2__ctor_m183C736BA89D63C3380553A7C79BE36E329A3C81 (Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A* __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*, const RuntimeMethod*))Dictionary_2__ctor_m7745B6ED71E47C95E1BFCE647C4F026A404C668F_gshared)((Dictionary_2_t5C32AF17A5801FB3109E5B0E622BA8402A04E08E*)__this, method);
}
// System.Void Unity.Netcode.NetworkTransport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport__ctor_m4539E8F121DB9DFB42D7B63EC51A14FB1C7738AF (NetworkTransport_t55E07951299283974C86476F46CC977780560B64* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.NetworkEndPoint::TryParse(System.String,System.UInt16,Unity.Networking.Transport.NetworkEndPoint&,Unity.Networking.Transport.NetworkFamily)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkEndPoint_TryParse_mFB525A245C1DE79526D34FEBC03F49BC6428CD4E (String_t* ___0_address, uint16_t ___1_port, NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63* ___2_endpoint, int32_t ___3_family, const RuntimeMethod* method) ;
// Unity.Networking.Transport.NetworkEndPoint Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData::ParseNetworkEndpoint(System.String,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ConnectionAddressData_ParseNetworkEndpoint_m11DE31B21D1DFD889066782743112F705D61B9F2 (String_t* ___0_ip, uint16_t ___1_port, const RuntimeMethod* method) ;
// System.Boolean Unity.Networking.Transport.NetworkPipeline::Equals(Unity.Networking.Transport.NetworkPipeline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkPipeline_Equals_mDDEEE23DC6479D865F524372DE89B48CC06B6F14 (NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* __this, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___0_connection, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport/SendTarget::Equals(Unity.Netcode.Transports.UTP.UnityTransport/SendTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SendTarget_Equals_m4AC1B3FB486AD1CA46DBDC5FE5058E30875E276D (SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* __this, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___0_other, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport/SendTarget::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SendTarget_Equals_m27323FF07528764D41E022C17E26EB8AEBA94DC7 (SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Int32 System.UInt64::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92 (uint64_t* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Networking.Transport.NetworkPipeline::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkPipeline_GetHashCode_m34FA347FD9DD395BCE190E09E593FA9B97C662EF (NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* __this, const RuntimeMethod* method) ;
// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport/SendTarget::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SendTarget_GetHashCode_m66B6A6AA72CC4FD2B06652898A8F9DCE5A41C357 (SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* __this, const RuntimeMethod* method) ;
// System.UInt64 Unity.Netcode.Transports.UNET.UNetTransport::GetNetcodeClientId(System.Byte,System.UInt16,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UNetTransport_GetNetcodeClientId_m5DCF7E11C678B0C4832A16A064F1110E91CE6E71 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, uint8_t ___0_hostId, uint16_t ___1_connectionId, bool ___2_isServer, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.NetworkTransport::get_IsStarted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_get_IsStarted_mB18FFFD3F8718BFE678B7460A9D5772F1B02628E (const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.NetworkManager::get_IsServer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkManager_get_IsServer_m3FF8C5D22D260033AD3FC6C4AF44E7161BDD7F52_inline (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) ;
// Unity.Netcode.NetworkManager Unity.Netcode.NetworkManager::get_Singleton()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline (const RuntimeMethod* method) ;
// System.Collections.Generic.IReadOnlyList`1<Unity.Netcode.NetworkClient> Unity.Netcode.NetworkManager::get_ConnectedClientsList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NetworkManager_get_ConnectedClientsList_mA7F66C446F46012C187EB6C41FB399C511E6EDC9 (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UNET.UNetTransport::SendQueued(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_SendQueued_mAE5434E329C5ED83943167B2E5F2EED18E7FABAA (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, uint64_t ___0_clientId, const RuntimeMethod* method) ;
// System.UInt64 Unity.Netcode.NetworkManager::get_LocalClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t NetworkManager_get_LocalClientId_m1B93454E7949ACBF20043DCDD884F63E119E6577 (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Transports.UNET.UNetTransport::GetUNetConnectionDetails(System.UInt64,System.Byte&,System.UInt16&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_GetUNetConnectionDetails_m90DED60407712B004DAB13A12A663B4CBDBE3F25 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, uint64_t ___0_clientId, uint8_t* ___1_hostId, uint16_t* ___2_connectionId, const RuntimeMethod* method) ;
// System.Void System.WeakReference::.ctor(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference__ctor_m5F9E2F970CD85965A003C0B37ABDBFAA1F5CF241 (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* __this, RuntimeObject* ___0_target, const RuntimeMethod* method) ;
// System.Void System.Buffer::BlockCopy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358 (RuntimeArray* ___0_src, int32_t ___1_srcOffset, RuntimeArray* ___2_dst, int32_t ___3_dstOffset, int32_t ___4_count, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.NetworkTransport::QueueMessageForSending(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_QueueMessageForSending_mBCFD4B1C14BA55D53E8C4F5928E4182C1FC38B5F (int32_t ___0_hostId, int32_t ___1_connectionId, int32_t ___2_channelId, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_buffer, int32_t ___4_size, uint8_t* ___5_error, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.NetworkTransport::Send(System.Int32,System.Int32,System.Int32,System.Byte[],System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_Send_m58F29B19199882D9D8053858C265380DCF292855 (int32_t ___0_hostId, int32_t ___1_connectionId, int32_t ___2_channelId, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_buffer, int32_t ___4_size, uint8_t* ___5_error, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.NetworkTransport::SendQueuedMessages(System.Int32,System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_SendQueuedMessages_mB66F1C5C0101405B87D5258D3FC75900F456C76E (int32_t ___0_hostId, int32_t ___1_connectionId, uint8_t* ___2_error, const RuntimeMethod* method) ;
// UnityEngine.Networking.NetworkEventType UnityEngine.Networking.NetworkTransport::Receive(System.Int32&,System.Int32&,System.Int32&,System.Byte[],System.Int32,System.Int32&,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_Receive_mB4ED3D95EAE1EFC83A28F78D49E03565F353CB74 (int32_t* ___0_hostId, int32_t* ___1_connectionId, int32_t* ___2_channelId, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_buffer, int32_t ___4_bufferSize, int32_t* ___5_receivedSize, uint8_t* ___6_error, const RuntimeMethod* method) ;
// UnityEngine.Networking.ConnectionConfig Unity.Netcode.Transports.UNET.UNetTransport::GetConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* UNetTransport_GetConfig_mB660650490F62C46550B3E4C967DC53813193B64 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.HostTopology::.ctor(UnityEngine.Networking.ConnectionConfig,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HostTopology__ctor_mC7A4302FD60DCD0207953FE6EA520B29ABDDCF13 (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* __this, ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* ___0_defaultConfig, int32_t ___1_maxDefaultConnections, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Networking.NetworkTransport::AddHost(UnityEngine.Networking.HostTopology,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_AddHost_m2C18DF965A03542887B43E391DC153A0CB44F33C (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* ___0_topology, int32_t ___1_port, String_t* ___2_ip, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Networking.NetworkTransport::Connect(System.Int32,System.String,System.Int32,System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_Connect_mF7BC9C0E04D5D5D6763128FAB3F51FD5CF62BDEC (int32_t ___0_hostId, String_t* ___1_address, int32_t ___2_port, int32_t ___3_exeptionConnectionId, uint8_t* ___4_error, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Networking.NetworkTransport::Disconnect(System.Int32,System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_Disconnect_m8E51494D2734381CA06AF22578A8EE5B8E6A5F20 (int32_t ___0_hostId, int32_t ___1_connectionId, uint8_t* ___2_error, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Networking.NetworkTransport::GetCurrentRTT(System.Int32,System.Int32,System.Byte&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTransport_GetCurrentRTT_mB6407834EF7EF2DE689EFF0CB276825A51C3E10D (int32_t ___0_hostId, int32_t ___1_connectionId, uint8_t* ___2_error, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.NetworkTransport::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_Shutdown_mBC882DF0C55BA635D3E0281F95D9BFC2F9FE1996 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.NetworkTransport::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_Init_m0ADB18EAE22E2B2AFD8183ED3A3EE71A6020B0BE (const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.ConnectionConfig::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig__ctor_mF6E6BBCAC0C41237A0A26FC3BDA8C882AC627113 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, const RuntimeMethod* method) ;
// System.Byte UnityEngine.Networking.ConnectionConfig::AddChannel(UnityEngine.Networking.QosType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t ConnectionConfig_AddChannel_m8272FB8322A2D4E18F56FC4FDCCACB043851C11E (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void UnityEngine.Networking.ConnectionConfig::set_MaxSentMessageQueueSize(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConnectionConfig_set_MaxSentMessageQueueSize_m4EF0FBEF7C0BF9A3D28BE8577B7AA449522EDEE7 (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* __this, uint16_t ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::BeginSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_BeginSample_mB5106F4E7ECEF54906545665ED23928D14F5FCA7 (intptr_t ___0_markerPtr, const RuntimeMethod* method) ;
// System.Void Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::EndSample(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProfilerUnsafeUtility_EndSample_mFDB4EFB160A9CB817D2F8ED21B88693616B27409 (intptr_t ___0_markerPtr, const RuntimeMethod* method) ;
// System.IntPtr Unity.Profiling.LowLevel.Unsafe.ProfilerUnsafeUtility::CreateMarker(System.String,System.UInt16,Unity.Profiling.LowLevel.MarkerFlags,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t ProfilerUnsafeUtility_CreateMarker_mC5E1AAB8CC1F0342065DF85BA3334445ED754E64 (String_t* ___0_name, uint16_t ___1_categoryId, uint16_t ___2_flags, int32_t ___3_metadataCount, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.Netcode.NetworkSpawnManager/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mEED7686F2975C76568B84CA1CD60FCD9E5CE2825 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2F0CD5EFD12ED6E2253375C46D6ADFD3C8F47FAF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2F0CD5EFD12ED6E2253375C46D6ADFD3C8F47FAF* L_0 = (U3CU3Ec_t2F0CD5EFD12ED6E2253375C46D6ADFD3C8F47FAF*)il2cpp_codegen_object_new(U3CU3Ec_t2F0CD5EFD12ED6E2253375C46D6ADFD3C8F47FAF_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mA20E665C6052E54E3607E6884A81589A1ED5ED3F(L_0, NULL);
		((U3CU3Ec_t2F0CD5EFD12ED6E2253375C46D6ADFD3C8F47FAF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2F0CD5EFD12ED6E2253375C46D6ADFD3C8F47FAF_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t2F0CD5EFD12ED6E2253375C46D6ADFD3C8F47FAF_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2F0CD5EFD12ED6E2253375C46D6ADFD3C8F47FAF_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void Unity.Netcode.NetworkSpawnManager/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mA20E665C6052E54E3607E6884A81589A1ED5ED3F (U3CU3Ec_t2F0CD5EFD12ED6E2253375C46D6ADFD3C8F47FAF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean Unity.Netcode.NetworkSpawnManager/<>c::<ServerResetShudownStateForSceneObjects>b__27_0(Unity.Netcode.NetworkObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CServerResetShudownStateForSceneObjectsU3Eb__27_0_m5B03278558AA76B1BC61D459A31673395CD153B8 (U3CU3Ec_t2F0CD5EFD12ED6E2253375C46D6ADFD3C8F47FAF* __this, NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* ___0_c, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// var networkObjects = UnityEngine.Object.FindObjectsOfType<NetworkObject>().Where((c) => c.IsSceneObject != null && c.IsSceneObject == true);
		NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* L_0 = ___0_c;
		NullCheck(L_0);
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_1;
		L_1 = NetworkObject_get_IsSceneObject_m6C81B3BFDFCB5A8C0105BD7F570A8A041AE6A297_inline(L_0, NULL);
		V_0 = L_1;
		bool L_2;
		L_2 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline((&V_0), Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* L_3 = ___0_c;
		NullCheck(L_3);
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_4;
		L_4 = NetworkObject_get_IsSceneObject_m6C81B3BFDFCB5A8C0105BD7F570A8A041AE6A297_inline(L_3, NULL);
		V_0 = L_4;
		V_1 = (bool)1;
		bool L_5;
		L_5 = Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_inline((&V_0), Nullable_1_GetValueOrDefault_m86E1210429A6EA0082CC7806DD638E8B4555F148_RuntimeMethod_var);
		bool L_6 = V_1;
		bool L_7;
		L_7 = Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_inline((&V_0), Nullable_1_get_HasValue_m6B76D139692C43B2AF7C695FAB044B16ACFAF355_RuntimeMethod_var);
		G_B3_0 = ((int32_t)(((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0)&(int32_t)L_7));
		goto IL_002e;
	}

IL_002d:
	{
		G_B3_0 = 0;
	}

IL_002e:
	{
		return (bool)G_B3_0;
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
// System.UInt32 Unity.Netcode.NetworkTickSystem::get_TickRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NetworkTickSystem_get_TickRate_mE053E1F4706D7744E24E0CB387DADE9454EDD337 (NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A* __this, const RuntimeMethod* method) 
{
	{
		// public uint TickRate { get; internal set; }
		uint32_t L_0 = __this->___U3CTickRateU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Void Unity.Netcode.NetworkTickSystem::set_TickRate(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTickSystem_set_TickRate_m0BF57B36E23A399A2DE37AC16EDE30EF48378172 (NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public uint TickRate { get; internal set; }
		uint32_t L_0 = ___0_value;
		__this->___U3CTickRateU3Ek__BackingField_2 = L_0;
		return;
	}
}
// Unity.Netcode.NetworkTime Unity.Netcode.NetworkTickSystem::get_LocalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F NetworkTickSystem_get_LocalTime_mAEE28AA7DBED595F9D8755CE5D76B7CEFF7EA6F5 (NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A* __this, const RuntimeMethod* method) 
{
	{
		// public NetworkTime LocalTime { get; internal set; }
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_0 = __this->___U3CLocalTimeU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void Unity.Netcode.NetworkTickSystem::set_LocalTime(Unity.Netcode.NetworkTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTickSystem_set_LocalTime_mF80A790CE331B5993719CEB6AF95DA98E3C31967 (NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A* __this, NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F ___0_value, const RuntimeMethod* method) 
{
	{
		// public NetworkTime LocalTime { get; internal set; }
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_0 = ___0_value;
		__this->___U3CLocalTimeU3Ek__BackingField_3 = L_0;
		return;
	}
}
// Unity.Netcode.NetworkTime Unity.Netcode.NetworkTickSystem::get_ServerTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F NetworkTickSystem_get_ServerTime_mE2386D4FF186C19B938427535A681AD47A799882 (NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A* __this, const RuntimeMethod* method) 
{
	{
		// public NetworkTime ServerTime { get; internal set; }
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_0 = __this->___U3CServerTimeU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void Unity.Netcode.NetworkTickSystem::set_ServerTime(Unity.Netcode.NetworkTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTickSystem_set_ServerTime_mCBDD0E0D8DCB5BFB612E4075EED08555BE43A794 (NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A* __this, NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F ___0_value, const RuntimeMethod* method) 
{
	{
		// public NetworkTime ServerTime { get; internal set; }
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_0 = ___0_value;
		__this->___U3CServerTimeU3Ek__BackingField_4 = L_0;
		return;
	}
}
// System.Void Unity.Netcode.NetworkTickSystem::add_Tick(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTickSystem_add_Tick_m98EC2B9E3EC9C5E7552C41DC5E0BB933D0A270ED (NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___Tick_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___Tick_5);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Netcode.NetworkTickSystem::remove_Tick(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTickSystem_remove_Tick_m4B8357FF77BE8DD9442EB611F01937BA1E3144F9 (NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_1 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_2 = NULL;
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = __this->___Tick_5;
		V_0 = L_0;
	}

IL_0007:
	{
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_1 = V_0;
		V_1 = L_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)CastclassSealed((RuntimeObject*)L_4, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var));
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07** L_5 = (&__this->___Tick_5);
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_6 = V_2;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_7 = V_1;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_8;
		L_8 = InterlockedCompareExchangeImpl<Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*>(L_5, L_6, L_7);
		V_0 = L_8;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_9 = V_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = V_1;
		if ((!(((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_9) == ((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Netcode.NetworkTickSystem::.ctor(System.UInt32,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTickSystem__ctor_mC5D8B736EA2491B31CC42F54DB365EAD50AB2271 (NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A* __this, uint32_t ___0_tickRate, double ___1_localTimeSec, double ___2_serverTimeSec, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// public NetworkTickSystem(uint tickRate, double localTimeSec, double serverTimeSec)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (tickRate == 0)
		uint32_t L_0 = ___0_tickRate;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// throw new ArgumentException("Tickrate must be a positive value.", nameof(tickRate));
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_2 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentException__ctor_m8F9D40CE19D19B698A70F9A258640EB52DB39B62(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB058672FF385B660C68045DBB9293867E5B42BEA)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2AA85C92110CB328BBE837E28ECEDDA3F5C5516D)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NetworkTickSystem__ctor_mC5D8B736EA2491B31CC42F54DB365EAD50AB2271_RuntimeMethod_var)));
	}

IL_0021:
	{
		// TickRate = tickRate;
		uint32_t L_3 = ___0_tickRate;
		NetworkTickSystem_set_TickRate_m0BF57B36E23A399A2DE37AC16EDE30EF48378172_inline(__this, L_3, NULL);
		// Tick = null;
		__this->___Tick_5 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Tick_5), (void*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL);
		// LocalTime = new NetworkTime(tickRate, localTimeSec);
		uint32_t L_4 = ___0_tickRate;
		double L_5 = ___1_localTimeSec;
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_6;
		memset((&L_6), 0, sizeof(L_6));
		NetworkTime__ctor_m967B514256DF729D17E1821504B335E112870E4D((&L_6), L_4, L_5, /*hidden argument*/NULL);
		NetworkTickSystem_set_LocalTime_mF80A790CE331B5993719CEB6AF95DA98E3C31967_inline(__this, L_6, NULL);
		// ServerTime = new NetworkTime(tickRate, serverTimeSec);
		uint32_t L_7 = ___0_tickRate;
		double L_8 = ___2_serverTimeSec;
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_9;
		memset((&L_9), 0, sizeof(L_9));
		NetworkTime__ctor_m967B514256DF729D17E1821504B335E112870E4D((&L_9), L_7, L_8, /*hidden argument*/NULL);
		NetworkTickSystem_set_ServerTime_mCBDD0E0D8DCB5BFB612E4075EED08555BE43A794_inline(__this, L_9, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.NetworkTickSystem::Reset(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTickSystem_Reset_m43B50EC6BC214CC72B78D977F4E83DEA7E9052F1 (NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A* __this, double ___0_localTimeSec, double ___1_serverTimeSec, const RuntimeMethod* method) 
{
	{
		// LocalTime = new NetworkTime(TickRate, localTimeSec);
		uint32_t L_0;
		L_0 = NetworkTickSystem_get_TickRate_mE053E1F4706D7744E24E0CB387DADE9454EDD337_inline(__this, NULL);
		double L_1 = ___0_localTimeSec;
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_2;
		memset((&L_2), 0, sizeof(L_2));
		NetworkTime__ctor_m967B514256DF729D17E1821504B335E112870E4D((&L_2), L_0, L_1, /*hidden argument*/NULL);
		NetworkTickSystem_set_LocalTime_mF80A790CE331B5993719CEB6AF95DA98E3C31967_inline(__this, L_2, NULL);
		// ServerTime = new NetworkTime(TickRate, serverTimeSec);
		uint32_t L_3;
		L_3 = NetworkTickSystem_get_TickRate_mE053E1F4706D7744E24E0CB387DADE9454EDD337_inline(__this, NULL);
		double L_4 = ___1_serverTimeSec;
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_5;
		memset((&L_5), 0, sizeof(L_5));
		NetworkTime__ctor_m967B514256DF729D17E1821504B335E112870E4D((&L_5), L_3, L_4, /*hidden argument*/NULL);
		NetworkTickSystem_set_ServerTime_mCBDD0E0D8DCB5BFB612E4075EED08555BE43A794_inline(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.NetworkTickSystem::UpdateTick(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTickSystem_UpdateTick_m2D218F227F3652072922C8494D3F8260ACC68FB3 (NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A* __this, double ___0_localTimeSec, double ___1_serverTimeSec, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F V_5;
	memset((&V_5), 0, sizeof(V_5));
	int32_t V_6 = 0;
	bool V_7 = false;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B3_0 = NULL;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* G_B2_0 = NULL;
	{
		// var previousLocalTick = LocalTime.Tick;
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_0;
		L_0 = NetworkTickSystem_get_LocalTime_mAEE28AA7DBED595F9D8755CE5D76B7CEFF7EA6F5_inline(__this, NULL);
		V_5 = L_0;
		int32_t L_1;
		L_1 = NetworkTime_get_Tick_m1544072B4A5D9F6767E31A77EFB451B6B0F5B991_inline((&V_5), NULL);
		V_0 = L_1;
		// LocalTime = new NetworkTime(TickRate, localTimeSec);
		uint32_t L_2;
		L_2 = NetworkTickSystem_get_TickRate_mE053E1F4706D7744E24E0CB387DADE9454EDD337_inline(__this, NULL);
		double L_3 = ___0_localTimeSec;
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_4;
		memset((&L_4), 0, sizeof(L_4));
		NetworkTime__ctor_m967B514256DF729D17E1821504B335E112870E4D((&L_4), L_2, L_3, /*hidden argument*/NULL);
		NetworkTickSystem_set_LocalTime_mF80A790CE331B5993719CEB6AF95DA98E3C31967_inline(__this, L_4, NULL);
		// ServerTime = new NetworkTime(TickRate, serverTimeSec);
		uint32_t L_5;
		L_5 = NetworkTickSystem_get_TickRate_mE053E1F4706D7744E24E0CB387DADE9454EDD337_inline(__this, NULL);
		double L_6 = ___1_serverTimeSec;
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_7;
		memset((&L_7), 0, sizeof(L_7));
		NetworkTime__ctor_m967B514256DF729D17E1821504B335E112870E4D((&L_7), L_5, L_6, /*hidden argument*/NULL);
		NetworkTickSystem_set_ServerTime_mCBDD0E0D8DCB5BFB612E4075EED08555BE43A794_inline(__this, L_7, NULL);
		// var cacheLocalTime = LocalTime;
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_8;
		L_8 = NetworkTickSystem_get_LocalTime_mAEE28AA7DBED595F9D8755CE5D76B7CEFF7EA6F5_inline(__this, NULL);
		V_1 = L_8;
		// var cacheServerTime = ServerTime;
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_9;
		L_9 = NetworkTickSystem_get_ServerTime_mE2386D4FF186C19B938427535A681AD47A799882_inline(__this, NULL);
		V_2 = L_9;
		// var currentLocalTick = LocalTime.Tick;
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_10;
		L_10 = NetworkTickSystem_get_LocalTime_mAEE28AA7DBED595F9D8755CE5D76B7CEFF7EA6F5_inline(__this, NULL);
		V_5 = L_10;
		int32_t L_11;
		L_11 = NetworkTime_get_Tick_m1544072B4A5D9F6767E31A77EFB451B6B0F5B991_inline((&V_5), NULL);
		V_3 = L_11;
		// var localToServerDifference = currentLocalTick - ServerTime.Tick;
		int32_t L_12 = V_3;
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_13;
		L_13 = NetworkTickSystem_get_ServerTime_mE2386D4FF186C19B938427535A681AD47A799882_inline(__this, NULL);
		V_5 = L_13;
		int32_t L_14;
		L_14 = NetworkTime_get_Tick_m1544072B4A5D9F6767E31A77EFB451B6B0F5B991_inline((&V_5), NULL);
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_12, L_14));
		// for (int i = previousLocalTick + 1; i <= currentLocalTick; i++)
		int32_t L_15 = V_0;
		V_6 = ((int32_t)il2cpp_codegen_add(L_15, 1));
		goto IL_00dc;
	}

IL_006f:
	{
		// LocalTime = new NetworkTime(TickRate, i);
		uint32_t L_16;
		L_16 = NetworkTickSystem_get_TickRate_mE053E1F4706D7744E24E0CB387DADE9454EDD337_inline(__this, NULL);
		int32_t L_17 = V_6;
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_18;
		memset((&L_18), 0, sizeof(L_18));
		NetworkTime__ctor_mD40214D6A925F3027C77DA7051C210F487C0CC55((&L_18), L_16, L_17, (0.0), /*hidden argument*/NULL);
		NetworkTickSystem_set_LocalTime_mF80A790CE331B5993719CEB6AF95DA98E3C31967_inline(__this, L_18, NULL);
		// ServerTime = new NetworkTime(TickRate, i - localToServerDifference);
		uint32_t L_19;
		L_19 = NetworkTickSystem_get_TickRate_mE053E1F4706D7744E24E0CB387DADE9454EDD337_inline(__this, NULL);
		int32_t L_20 = V_6;
		int32_t L_21 = V_4;
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_22;
		memset((&L_22), 0, sizeof(L_22));
		NetworkTime__ctor_mD40214D6A925F3027C77DA7051C210F487C0CC55((&L_22), L_19, ((int32_t)il2cpp_codegen_subtract(L_20, L_21)), (0.0), /*hidden argument*/NULL);
		NetworkTickSystem_set_ServerTime_mCBDD0E0D8DCB5BFB612E4075EED08555BE43A794_inline(__this, L_22, NULL);
		// s_Tick.Begin();
		il2cpp_codegen_runtime_class_init_inline(NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A_il2cpp_TypeInfo_var);
		ProfilerMarker_Begin_mD07DB736ADA7D8BAF9D969CC7F3C55848A218C6E_inline((&((NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A_il2cpp_TypeInfo_var))->___s_Tick_0), NULL);
		// Tick?.Invoke();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_23 = __this->___Tick_5;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_24 = L_23;
		G_B2_0 = L_24;
		if (L_24)
		{
			G_B3_0 = L_24;
			goto IL_00c4;
		}
	}
	{
		goto IL_00ca;
	}

IL_00c4:
	{
		NullCheck(G_B3_0);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(G_B3_0, NULL);
	}

IL_00ca:
	{
		// s_Tick.End();
		il2cpp_codegen_runtime_class_init_inline(NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A_il2cpp_TypeInfo_var);
		ProfilerMarker_End_m025AE3EF0F96F6DADC53489A53FC6EE65073DE60_inline((&((NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A_il2cpp_TypeInfo_var))->___s_Tick_0), NULL);
		// for (int i = previousLocalTick + 1; i <= currentLocalTick; i++)
		int32_t L_25 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_00dc:
	{
		// for (int i = previousLocalTick + 1; i <= currentLocalTick; i++)
		int32_t L_26 = V_6;
		int32_t L_27 = V_3;
		V_7 = (bool)((((int32_t)((((int32_t)L_26) > ((int32_t)L_27))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_7;
		if (L_28)
		{
			goto IL_006f;
		}
	}
	{
		// LocalTime = cacheLocalTime;
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_29 = V_1;
		NetworkTickSystem_set_LocalTime_mF80A790CE331B5993719CEB6AF95DA98E3C31967_inline(__this, L_29, NULL);
		// ServerTime = cacheServerTime;
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_30 = V_2;
		NetworkTickSystem_set_ServerTime_mCBDD0E0D8DCB5BFB612E4075EED08555BE43A794_inline(__this, L_30, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.NetworkTickSystem::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTickSystem__cctor_m4977DE551F53E70AB75BD2F128EEE1A0DC2B061F (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B235B30222078A5FC7AE90F2C05161976D918ED);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static ProfilerMarker s_Tick = new ProfilerMarker($"{nameof(NetworkTickSystem)}.Tick");
		ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD L_0;
		memset((&L_0), 0, sizeof(L_0));
		ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline((&L_0), _stringLiteral4B235B30222078A5FC7AE90F2C05161976D918ED, /*hidden argument*/NULL);
		((NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A_StaticFields*)il2cpp_codegen_static_fields_for(NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A_il2cpp_TypeInfo_var))->___s_Tick_0 = L_0;
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
// System.Double Unity.Netcode.NetworkTime::get_TickOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkTime_get_TickOffset_m7B60157F5852925EF3F4D55D8E67FAEEDD87BA3A (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* __this, const RuntimeMethod* method) 
{
	{
		// public double TickOffset => m_CachedTickOffset;
		double L_0 = __this->___m_CachedTickOffset_4;
		return L_0;
	}
}
IL2CPP_EXTERN_C  double NetworkTime_get_TickOffset_m7B60157F5852925EF3F4D55D8E67FAEEDD87BA3A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F*>(__this + _offset);
	double _returnValue;
	_returnValue = NetworkTime_get_TickOffset_m7B60157F5852925EF3F4D55D8E67FAEEDD87BA3A_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Double Unity.Netcode.NetworkTime::get_Time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkTime_get_Time_mDC7F8AB78A0D860B5D3BF62AF1E42724059F690B (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* __this, const RuntimeMethod* method) 
{
	{
		// public double Time => m_TimeSec;
		double L_0 = __this->___m_TimeSec_0;
		return L_0;
	}
}
IL2CPP_EXTERN_C  double NetworkTime_get_Time_mDC7F8AB78A0D860B5D3BF62AF1E42724059F690B_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F*>(__this + _offset);
	double _returnValue;
	_returnValue = NetworkTime_get_Time_mDC7F8AB78A0D860B5D3BF62AF1E42724059F690B_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Single Unity.Netcode.NetworkTime::get_TimeAsFloat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NetworkTime_get_TimeAsFloat_mA9117D03A7D40E675F50B67A4317019B3AAF1797 (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* __this, const RuntimeMethod* method) 
{
	{
		// public float TimeAsFloat => (float)m_TimeSec;
		double L_0 = __this->___m_TimeSec_0;
		return ((float)L_0);
	}
}
IL2CPP_EXTERN_C  float NetworkTime_get_TimeAsFloat_mA9117D03A7D40E675F50B67A4317019B3AAF1797_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F*>(__this + _offset);
	float _returnValue;
	_returnValue = NetworkTime_get_TimeAsFloat_mA9117D03A7D40E675F50B67A4317019B3AAF1797(_thisAdjusted, method);
	return _returnValue;
}
// System.Double Unity.Netcode.NetworkTime::get_FixedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkTime_get_FixedTime_mD8B701640E6938B87ADFC11BFDABC77BFA08BF9D (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* __this, const RuntimeMethod* method) 
{
	{
		// public double FixedTime => m_CachedTick * m_TickInterval;
		int32_t L_0 = __this->___m_CachedTick_3;
		double L_1 = __this->___m_TickInterval_2;
		return ((double)il2cpp_codegen_multiply(((double)L_0), L_1));
	}
}
IL2CPP_EXTERN_C  double NetworkTime_get_FixedTime_mD8B701640E6938B87ADFC11BFDABC77BFA08BF9D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F*>(__this + _offset);
	double _returnValue;
	_returnValue = NetworkTime_get_FixedTime_mD8B701640E6938B87ADFC11BFDABC77BFA08BF9D(_thisAdjusted, method);
	return _returnValue;
}
// System.Single Unity.Netcode.NetworkTime::get_FixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float NetworkTime_get_FixedDeltaTime_mE939797F1CB254D4403A9A3EE00E0AB3F49B5045 (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* __this, const RuntimeMethod* method) 
{
	{
		// public float FixedDeltaTime => (float)m_TickInterval;
		double L_0 = __this->___m_TickInterval_2;
		return ((float)L_0);
	}
}
IL2CPP_EXTERN_C  float NetworkTime_get_FixedDeltaTime_mE939797F1CB254D4403A9A3EE00E0AB3F49B5045_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F*>(__this + _offset);
	float _returnValue;
	_returnValue = NetworkTime_get_FixedDeltaTime_mE939797F1CB254D4403A9A3EE00E0AB3F49B5045(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Unity.Netcode.NetworkTime::get_Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NetworkTime_get_Tick_m1544072B4A5D9F6767E31A77EFB451B6B0F5B991 (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* __this, const RuntimeMethod* method) 
{
	{
		// public int Tick => m_CachedTick;
		int32_t L_0 = __this->___m_CachedTick_3;
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t NetworkTime_get_Tick_m1544072B4A5D9F6767E31A77EFB451B6B0F5B991_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = NetworkTime_get_Tick_m1544072B4A5D9F6767E31A77EFB451B6B0F5B991_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.UInt32 Unity.Netcode.NetworkTime::get_TickRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t NetworkTime_get_TickRate_m011971B594D6DB1C676AB1EC9029E1BB5A569CB6 (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* __this, const RuntimeMethod* method) 
{
	{
		// public uint TickRate => m_TickRate;
		uint32_t L_0 = __this->___m_TickRate_1;
		return L_0;
	}
}
IL2CPP_EXTERN_C  uint32_t NetworkTime_get_TickRate_m011971B594D6DB1C676AB1EC9029E1BB5A569CB6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F*>(__this + _offset);
	uint32_t _returnValue;
	_returnValue = NetworkTime_get_TickRate_m011971B594D6DB1C676AB1EC9029E1BB5A569CB6_inline(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Netcode.NetworkTime::.ctor(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTime__ctor_m858F636F85697CAE1E079038854B8D88068A5F8F (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* __this, uint32_t ___0_tickRate, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB058672FF385B660C68045DBB9293867E5B42BEA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Assert.IsTrue(tickRate > 0, "Tickrate must be a positive value.");
		uint32_t L_0 = ___0_tickRate;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_m390B3F48332F46CE76AB45491A60ACDCCF521AAE((bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0), _stringLiteralB058672FF385B660C68045DBB9293867E5B42BEA, NULL);
		// m_TickRate = tickRate;
		uint32_t L_1 = ___0_tickRate;
		__this->___m_TickRate_1 = L_1;
		// m_TickInterval = 1f / m_TickRate; // potential floating point precision issue, could result in different interval on different machines
		uint32_t L_2 = __this->___m_TickRate_1;
		__this->___m_TickInterval_2 = ((double)((float)((1.0f)/((float)((double)(uint32_t)L_2)))));
		// m_CachedTickOffset = 0;
		__this->___m_CachedTickOffset_4 = (0.0);
		// m_CachedTick = 0;
		__this->___m_CachedTick_3 = 0;
		// m_TimeSec = 0;
		__this->___m_TimeSec_0 = (0.0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkTime__ctor_m858F636F85697CAE1E079038854B8D88068A5F8F_AdjustorThunk (RuntimeObject* __this, uint32_t ___0_tickRate, const RuntimeMethod* method)
{
	NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F*>(__this + _offset);
	NetworkTime__ctor_m858F636F85697CAE1E079038854B8D88068A5F8F(_thisAdjusted, ___0_tickRate, method);
}
// System.Void Unity.Netcode.NetworkTime::.ctor(System.UInt32,System.Int32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTime__ctor_mD40214D6A925F3027C77DA7051C210F487C0CC55 (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* __this, uint32_t ___0_tickRate, int32_t ___1_tick, double ___2_tickOffset, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : this(tickRate)
		uint32_t L_0 = ___0_tickRate;
		NetworkTime__ctor_m858F636F85697CAE1E079038854B8D88068A5F8F(__this, L_0, NULL);
		// Assert.IsTrue(tickOffset < 1d / tickRate);
		double L_1 = ___2_tickOffset;
		uint32_t L_2 = ___0_tickRate;
		il2cpp_codegen_runtime_class_init_inline(Assert_tDC16963451AC4364803739B73A4477ADCB365863_il2cpp_TypeInfo_var);
		Assert_IsTrue_mE42C53B7220324D1FBAFB7AE48A7D8DD7796A663((bool)((((double)L_1) < ((double)((double)((1.0)/((double)((double)(uint32_t)L_2))))))? 1 : 0), NULL);
		// m_CachedTickOffset = tickOffset;
		double L_3 = ___2_tickOffset;
		__this->___m_CachedTickOffset_4 = L_3;
		// m_CachedTick = tick;
		int32_t L_4 = ___1_tick;
		__this->___m_CachedTick_3 = L_4;
		// m_TimeSec = tick * m_TickInterval + tickOffset;
		int32_t L_5 = ___1_tick;
		double L_6 = __this->___m_TickInterval_2;
		double L_7 = ___2_tickOffset;
		__this->___m_TimeSec_0 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_multiply(((double)L_5), L_6)), L_7));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkTime__ctor_mD40214D6A925F3027C77DA7051C210F487C0CC55_AdjustorThunk (RuntimeObject* __this, uint32_t ___0_tickRate, int32_t ___1_tick, double ___2_tickOffset, const RuntimeMethod* method)
{
	NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F*>(__this + _offset);
	NetworkTime__ctor_mD40214D6A925F3027C77DA7051C210F487C0CC55(_thisAdjusted, ___0_tickRate, ___1_tick, ___2_tickOffset, method);
}
// System.Void Unity.Netcode.NetworkTime::.ctor(System.UInt32,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTime__ctor_m967B514256DF729D17E1821504B335E112870E4D (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* __this, uint32_t ___0_tickRate, double ___1_timeSec, const RuntimeMethod* method) 
{
	{
		// : this(tickRate)
		uint32_t L_0 = ___0_tickRate;
		NetworkTime__ctor_m858F636F85697CAE1E079038854B8D88068A5F8F(__this, L_0, NULL);
		// this += timeSec;
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_1 = (*(NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F*)__this);
		double L_2 = ___1_timeSec;
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_3;
		L_3 = NetworkTime_op_Addition_m055F0632D8CF893898025AD5E20FD0B42AA448F1(L_1, L_2, NULL);
		*(NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F*)__this = L_3;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkTime__ctor_m967B514256DF729D17E1821504B335E112870E4D_AdjustorThunk (RuntimeObject* __this, uint32_t ___0_tickRate, double ___1_timeSec, const RuntimeMethod* method)
{
	NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F*>(__this + _offset);
	NetworkTime__ctor_m967B514256DF729D17E1821504B335E112870E4D(_thisAdjusted, ___0_tickRate, ___1_timeSec, method);
}
// Unity.Netcode.NetworkTime Unity.Netcode.NetworkTime::ToFixedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F NetworkTime_ToFixedTime_mBFCFEFB08EBF314FB9666AA128F5DFD9A876D690 (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* __this, const RuntimeMethod* method) 
{
	NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new NetworkTime(m_TickRate, m_CachedTick);
		uint32_t L_0 = __this->___m_TickRate_1;
		int32_t L_1 = __this->___m_CachedTick_3;
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_2;
		memset((&L_2), 0, sizeof(L_2));
		NetworkTime__ctor_mD40214D6A925F3027C77DA7051C210F487C0CC55((&L_2), L_0, L_1, (0.0), /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F NetworkTime_ToFixedTime_mBFCFEFB08EBF314FB9666AA128F5DFD9A876D690_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F*>(__this + _offset);
	NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F _returnValue;
	_returnValue = NetworkTime_ToFixedTime_mBFCFEFB08EBF314FB9666AA128F5DFD9A876D690(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Netcode.NetworkTime Unity.Netcode.NetworkTime::TimeTicksAgo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F NetworkTime_TimeTicksAgo_m3DE56CDB34180F78932D9A115AC6CE36578DA446 (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* __this, int32_t ___0_ticks, const RuntimeMethod* method) 
{
	NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return this - new NetworkTime(TickRate, ticks);
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_0 = (*(NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F*)__this);
		uint32_t L_1;
		L_1 = NetworkTime_get_TickRate_m011971B594D6DB1C676AB1EC9029E1BB5A569CB6_inline(__this, NULL);
		int32_t L_2 = ___0_ticks;
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_3;
		memset((&L_3), 0, sizeof(L_3));
		NetworkTime__ctor_mD40214D6A925F3027C77DA7051C210F487C0CC55((&L_3), L_1, L_2, (0.0), /*hidden argument*/NULL);
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_4;
		L_4 = NetworkTime_op_Subtraction_m6C3EF5E0A951578447A3AF3B0BF446FAD0883720(L_0, L_3, NULL);
		V_0 = L_4;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_5 = V_0;
		return L_5;
	}
}
IL2CPP_EXTERN_C  NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F NetworkTime_TimeTicksAgo_m3DE56CDB34180F78932D9A115AC6CE36578DA446_AdjustorThunk (RuntimeObject* __this, int32_t ___0_ticks, const RuntimeMethod* method)
{
	NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F*>(__this + _offset);
	NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F _returnValue;
	_returnValue = NetworkTime_TimeTicksAgo_m3DE56CDB34180F78932D9A115AC6CE36578DA446(_thisAdjusted, ___0_ticks, method);
	return _returnValue;
}
// System.Void Unity.Netcode.NetworkTime::UpdateCache()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTime_UpdateCache_m9AA9E6D10AAE300E01CCB5C577A92BBF76783155 (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		// double d = m_TimeSec / m_TickInterval;
		double L_0 = __this->___m_TimeSec_0;
		double L_1 = __this->___m_TickInterval_2;
		V_0 = ((double)(L_0/L_1));
		// m_CachedTick = (int)d;
		double L_2 = V_0;
		__this->___m_CachedTick_3 = il2cpp_codegen_cast_double_to_int<int32_t>(L_2);
		// if ((d - m_CachedTick) >= 0.999999999999)
		double L_3 = V_0;
		int32_t L_4 = __this->___m_CachedTick_3;
		V_1 = (bool)((((int32_t)((!(((double)((double)il2cpp_codegen_subtract(L_3, ((double)L_4)))) >= ((double)(0.99999999999900002))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0042;
		}
	}
	{
		// m_CachedTick++;
		int32_t L_6 = __this->___m_CachedTick_3;
		__this->___m_CachedTick_3 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0042:
	{
		// m_CachedTickOffset = ((d - Math.Truncate(d)) * m_TickInterval);
		double L_7 = V_0;
		double L_8 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_9;
		L_9 = Math_Truncate_mE66B1AD68C17D27675DE0CB74643374F9EDB649C(L_8, NULL);
		double L_10 = __this->___m_TickInterval_2;
		__this->___m_CachedTickOffset_4 = ((double)il2cpp_codegen_multiply(((double)il2cpp_codegen_subtract(L_7, L_9)), L_10));
		// if (m_CachedTick < 0 && m_CachedTickOffset != 0d)
		int32_t L_11 = __this->___m_CachedTick_3;
		if ((((int32_t)L_11) >= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		double L_12 = __this->___m_CachedTickOffset_4;
		G_B5_0 = ((((int32_t)((((double)L_12) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0077;
	}

IL_0076:
	{
		G_B5_0 = 0;
	}

IL_0077:
	{
		V_2 = (bool)G_B5_0;
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_009e;
		}
	}
	{
		// m_CachedTick--;
		int32_t L_14 = __this->___m_CachedTick_3;
		__this->___m_CachedTick_3 = ((int32_t)il2cpp_codegen_subtract(L_14, 1));
		// m_CachedTickOffset = m_TickInterval + m_CachedTickOffset;
		double L_15 = __this->___m_TickInterval_2;
		double L_16 = __this->___m_CachedTickOffset_4;
		__this->___m_CachedTickOffset_4 = ((double)il2cpp_codegen_add(L_15, L_16));
	}

IL_009e:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkTime_UpdateCache_m9AA9E6D10AAE300E01CCB5C577A92BBF76783155_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F*>(__this + _offset);
	NetworkTime_UpdateCache_m9AA9E6D10AAE300E01CCB5C577A92BBF76783155(_thisAdjusted, method);
}
// Unity.Netcode.NetworkTime Unity.Netcode.NetworkTime::op_Subtraction(Unity.Netcode.NetworkTime,Unity.Netcode.NetworkTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F NetworkTime_op_Subtraction_m6C3EF5E0A951578447A3AF3B0BF446FAD0883720 (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F ___0_a, NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F ___1_b, const RuntimeMethod* method) 
{
	NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new NetworkTime(a.TickRate, a.Time - b.Time);
		uint32_t L_0;
		L_0 = NetworkTime_get_TickRate_m011971B594D6DB1C676AB1EC9029E1BB5A569CB6_inline((&___0_a), NULL);
		double L_1;
		L_1 = NetworkTime_get_Time_mDC7F8AB78A0D860B5D3BF62AF1E42724059F690B_inline((&___0_a), NULL);
		double L_2;
		L_2 = NetworkTime_get_Time_mDC7F8AB78A0D860B5D3BF62AF1E42724059F690B_inline((&___1_b), NULL);
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_3;
		memset((&L_3), 0, sizeof(L_3));
		NetworkTime__ctor_m967B514256DF729D17E1821504B335E112870E4D((&L_3), L_0, ((double)il2cpp_codegen_subtract(L_1, L_2)), /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_4 = V_0;
		return L_4;
	}
}
// Unity.Netcode.NetworkTime Unity.Netcode.NetworkTime::op_Addition(Unity.Netcode.NetworkTime,Unity.Netcode.NetworkTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F NetworkTime_op_Addition_mB52B67EBF41251A74CE372B4D4E7C8BB62CD305B (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F ___0_a, NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F ___1_b, const RuntimeMethod* method) 
{
	NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new NetworkTime(a.TickRate, a.Time + b.Time);
		uint32_t L_0;
		L_0 = NetworkTime_get_TickRate_m011971B594D6DB1C676AB1EC9029E1BB5A569CB6_inline((&___0_a), NULL);
		double L_1;
		L_1 = NetworkTime_get_Time_mDC7F8AB78A0D860B5D3BF62AF1E42724059F690B_inline((&___0_a), NULL);
		double L_2;
		L_2 = NetworkTime_get_Time_mDC7F8AB78A0D860B5D3BF62AF1E42724059F690B_inline((&___1_b), NULL);
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_3;
		memset((&L_3), 0, sizeof(L_3));
		NetworkTime__ctor_m967B514256DF729D17E1821504B335E112870E4D((&L_3), L_0, ((double)il2cpp_codegen_add(L_1, L_2)), /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_001f;
	}

IL_001f:
	{
		// }
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_4 = V_0;
		return L_4;
	}
}
// Unity.Netcode.NetworkTime Unity.Netcode.NetworkTime::op_Addition(Unity.Netcode.NetworkTime,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F NetworkTime_op_Addition_m055F0632D8CF893898025AD5E20FD0B42AA448F1 (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F ___0_a, double ___1_b, const RuntimeMethod* method) 
{
	NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// a.m_TimeSec += b;
		double* L_0 = (&(&___0_a)->___m_TimeSec_0);
		double* L_1 = L_0;
		double L_2 = *((double*)L_1);
		double L_3 = ___1_b;
		*((double*)L_1) = (double)((double)il2cpp_codegen_add(L_2, L_3));
		// a.UpdateCache();
		NetworkTime_UpdateCache_m9AA9E6D10AAE300E01CCB5C577A92BBF76783155((&___0_a), NULL);
		// return a;
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_4 = ___0_a;
		V_0 = L_4;
		goto IL_0019;
	}

IL_0019:
	{
		// }
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_5 = V_0;
		return L_5;
	}
}
// Unity.Netcode.NetworkTime Unity.Netcode.NetworkTime::op_Subtraction(Unity.Netcode.NetworkTime,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F NetworkTime_op_Subtraction_m746F7694F911D9F3346295F0F3B13857BCD58FFD (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F ___0_a, double ___1_b, const RuntimeMethod* method) 
{
	NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return a + -b;
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_0 = ___0_a;
		double L_1 = ___1_b;
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_2;
		L_2 = NetworkTime_op_Addition_m055F0632D8CF893898025AD5E20FD0B42AA448F1(L_0, ((-L_1)), NULL);
		V_0 = L_2;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_3 = V_0;
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
// System.Double Unity.Netcode.NetworkTimeSystem::get_LocalBufferSec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkTimeSystem_get_LocalBufferSec_m2EE2B31F9AFDB2E6DCD3A842243723BD27D789A4 (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, const RuntimeMethod* method) 
{
	{
		// public double LocalBufferSec { get; set; }
		double L_0 = __this->___U3CLocalBufferSecU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void Unity.Netcode.NetworkTimeSystem::set_LocalBufferSec(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTimeSystem_set_LocalBufferSec_m82C2D3A892C9D7B79D851FA876ED7B46437EF68C (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		// public double LocalBufferSec { get; set; }
		double L_0 = ___0_value;
		__this->___U3CLocalBufferSecU3Ek__BackingField_5 = L_0;
		return;
	}
}
// System.Double Unity.Netcode.NetworkTimeSystem::get_ServerBufferSec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkTimeSystem_get_ServerBufferSec_m07C6CA24A68C6972C984DE91B2AC93CED5717546 (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, const RuntimeMethod* method) 
{
	{
		// public double ServerBufferSec { get; set; }
		double L_0 = __this->___U3CServerBufferSecU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void Unity.Netcode.NetworkTimeSystem::set_ServerBufferSec(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTimeSystem_set_ServerBufferSec_mB9AB61649D77F483873DF72CCE2BB4345572547E (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		// public double ServerBufferSec { get; set; }
		double L_0 = ___0_value;
		__this->___U3CServerBufferSecU3Ek__BackingField_6 = L_0;
		return;
	}
}
// System.Double Unity.Netcode.NetworkTimeSystem::get_HardResetThresholdSec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkTimeSystem_get_HardResetThresholdSec_mE047FE8D47C8221D28F8FDB581C12C5B2BC71E38 (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, const RuntimeMethod* method) 
{
	{
		// public double HardResetThresholdSec { get; set; }
		double L_0 = __this->___U3CHardResetThresholdSecU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Void Unity.Netcode.NetworkTimeSystem::set_HardResetThresholdSec(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTimeSystem_set_HardResetThresholdSec_mDEEB22B6CCED462F413F8E86A27758FF4A9078ED (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		// public double HardResetThresholdSec { get; set; }
		double L_0 = ___0_value;
		__this->___U3CHardResetThresholdSecU3Ek__BackingField_7 = L_0;
		return;
	}
}
// System.Double Unity.Netcode.NetworkTimeSystem::get_AdjustmentRatio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkTimeSystem_get_AdjustmentRatio_mAEB1E3BD937B871B16ECFF62C01C5D55939AFD96 (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, const RuntimeMethod* method) 
{
	{
		// public double AdjustmentRatio { get; set; }
		double L_0 = __this->___U3CAdjustmentRatioU3Ek__BackingField_8;
		return L_0;
	}
}
// System.Void Unity.Netcode.NetworkTimeSystem::set_AdjustmentRatio(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTimeSystem_set_AdjustmentRatio_m20025653AD41C17935FE110A9E3FCF66C7AD0B2D (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		// public double AdjustmentRatio { get; set; }
		double L_0 = ___0_value;
		__this->___U3CAdjustmentRatioU3Ek__BackingField_8 = L_0;
		return;
	}
}
// System.Double Unity.Netcode.NetworkTimeSystem::get_LocalTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkTimeSystem_get_LocalTime_m52082AD2B933832491435CE4729AE62FC392B0C6 (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, const RuntimeMethod* method) 
{
	{
		// public double LocalTime => m_TimeSec + m_CurrentLocalTimeOffset;
		double L_0 = __this->___m_TimeSec_0;
		double L_1 = __this->___m_CurrentLocalTimeOffset_1;
		return ((double)il2cpp_codegen_add(L_0, L_1));
	}
}
// System.Double Unity.Netcode.NetworkTimeSystem::get_ServerTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkTimeSystem_get_ServerTime_mAD3D1FEC80ADAD9C0A1FFB2C1347CDDF8E9FA93F (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, const RuntimeMethod* method) 
{
	{
		// public double ServerTime => m_TimeSec + m_CurrentServerTimeOffset;
		double L_0 = __this->___m_TimeSec_0;
		double L_1 = __this->___m_CurrentServerTimeOffset_3;
		return ((double)il2cpp_codegen_add(L_0, L_1));
	}
}
// System.Double Unity.Netcode.NetworkTimeSystem::get_LastSyncedServerTimeSec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkTimeSystem_get_LastSyncedServerTimeSec_m5332AA8AB59F2A047862E029092C9B2C66B21A6D (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, const RuntimeMethod* method) 
{
	{
		// internal double LastSyncedServerTimeSec { get; private set; }
		double L_0 = __this->___U3CLastSyncedServerTimeSecU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void Unity.Netcode.NetworkTimeSystem::set_LastSyncedServerTimeSec(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTimeSystem_set_LastSyncedServerTimeSec_m4CFF62DC57A58B9634184818ADACC6E2935E0190 (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		// internal double LastSyncedServerTimeSec { get; private set; }
		double L_0 = ___0_value;
		__this->___U3CLastSyncedServerTimeSecU3Ek__BackingField_9 = L_0;
		return;
	}
}
// System.Double Unity.Netcode.NetworkTimeSystem::get_LastSyncedRttSec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double NetworkTimeSystem_get_LastSyncedRttSec_m7F5102C22B9B081940C47604632502C2389CC120 (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, const RuntimeMethod* method) 
{
	{
		// internal double LastSyncedRttSec { get; private set; }
		double L_0 = __this->___U3CLastSyncedRttSecU3Ek__BackingField_10;
		return L_0;
	}
}
// System.Void Unity.Netcode.NetworkTimeSystem::set_LastSyncedRttSec(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTimeSystem_set_LastSyncedRttSec_mA1C80CC3F306B8060F2602E40AF1197D222F77A8 (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		// internal double LastSyncedRttSec { get; private set; }
		double L_0 = ___0_value;
		__this->___U3CLastSyncedRttSecU3Ek__BackingField_10 = L_0;
		return;
	}
}
// System.Void Unity.Netcode.NetworkTimeSystem::.ctor(System.Double,System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTimeSystem__ctor_mB81EDAB0045029A03A6B97FFCB578FAD6F17D847 (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, double ___0_localBufferSec, double ___1_serverBufferSec, double ___2_hardResetThresholdSec, double ___3_adjustmentRatio, const RuntimeMethod* method) 
{
	{
		// public NetworkTimeSystem(double localBufferSec, double serverBufferSec, double hardResetThresholdSec, double adjustmentRatio = 0.01d)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// LocalBufferSec = localBufferSec;
		double L_0 = ___0_localBufferSec;
		NetworkTimeSystem_set_LocalBufferSec_m82C2D3A892C9D7B79D851FA876ED7B46437EF68C_inline(__this, L_0, NULL);
		// ServerBufferSec = serverBufferSec;
		double L_1 = ___1_serverBufferSec;
		NetworkTimeSystem_set_ServerBufferSec_mB9AB61649D77F483873DF72CCE2BB4345572547E_inline(__this, L_1, NULL);
		// HardResetThresholdSec = hardResetThresholdSec;
		double L_2 = ___2_hardResetThresholdSec;
		NetworkTimeSystem_set_HardResetThresholdSec_mDEEB22B6CCED462F413F8E86A27758FF4A9078ED_inline(__this, L_2, NULL);
		// AdjustmentRatio = adjustmentRatio;
		double L_3 = ___3_adjustmentRatio;
		NetworkTimeSystem_set_AdjustmentRatio_m20025653AD41C17935FE110A9E3FCF66C7AD0B2D_inline(__this, L_3, NULL);
		// }
		return;
	}
}
// Unity.Netcode.NetworkTimeSystem Unity.Netcode.NetworkTimeSystem::ServerTimeSystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* NetworkTimeSystem_ServerTimeSystem_m084A3A551D7F1496D336F64F8DB0F4345EB68C5D (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* V_0 = NULL;
	{
		// return new NetworkTimeSystem(0, 0, double.MaxValue);
		NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* L_0 = (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2*)il2cpp_codegen_object_new(NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		NetworkTimeSystem__ctor_mB81EDAB0045029A03A6B97FFCB578FAD6F17D847(L_0, (0.0), (0.0), (1.7976931348623157E+308), (0.01), NULL);
		V_0 = L_0;
		goto IL_002d;
	}

IL_002d:
	{
		// }
		NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Unity.Netcode.NetworkTimeSystem::Advance(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTimeSystem_Advance_mDCD452D5627C27644989F2A2FA413D1237A35D19 (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, double ___0_deltaTimeSec, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	double G_B7_0 = 0.0;
	double G_B7_1 = 0.0;
	NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* G_B7_2 = NULL;
	double G_B6_0 = 0.0;
	double G_B6_1 = 0.0;
	NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* G_B6_2 = NULL;
	double G_B8_0 = 0.0;
	double G_B8_1 = 0.0;
	double G_B8_2 = 0.0;
	NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* G_B8_3 = NULL;
	double G_B10_0 = 0.0;
	double G_B10_1 = 0.0;
	NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* G_B10_2 = NULL;
	double G_B9_0 = 0.0;
	double G_B9_1 = 0.0;
	NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* G_B9_2 = NULL;
	double G_B11_0 = 0.0;
	double G_B11_1 = 0.0;
	double G_B11_2 = 0.0;
	NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* G_B11_3 = NULL;
	{
		// m_TimeSec += deltaTimeSec;
		double L_0 = __this->___m_TimeSec_0;
		double L_1 = ___0_deltaTimeSec;
		__this->___m_TimeSec_0 = ((double)il2cpp_codegen_add(L_0, L_1));
		// if (Math.Abs(m_DesiredLocalTimeOffset - m_CurrentLocalTimeOffset) > HardResetThresholdSec || Math.Abs(m_DesiredServerTimeOffset - m_CurrentServerTimeOffset) > HardResetThresholdSec)
		double L_2 = __this->___m_DesiredLocalTimeOffset_2;
		double L_3 = __this->___m_CurrentLocalTimeOffset_1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_4;
		L_4 = fabs(((double)il2cpp_codegen_subtract(L_2, L_3)));
		double L_5;
		L_5 = NetworkTimeSystem_get_HardResetThresholdSec_mE047FE8D47C8221D28F8FDB581C12C5B2BC71E38_inline(__this, NULL);
		if ((((double)L_4) > ((double)L_5)))
		{
			goto IL_0045;
		}
	}
	{
		double L_6 = __this->___m_DesiredServerTimeOffset_4;
		double L_7 = __this->___m_CurrentServerTimeOffset_3;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_8;
		L_8 = fabs(((double)il2cpp_codegen_subtract(L_6, L_7)));
		double L_9;
		L_9 = NetworkTimeSystem_get_HardResetThresholdSec_mE047FE8D47C8221D28F8FDB581C12C5B2BC71E38_inline(__this, NULL);
		G_B3_0 = ((((double)L_8) > ((double)L_9))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B3_0 = 1;
	}

IL_0046:
	{
		V_0 = (bool)G_B3_0;
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_009f;
		}
	}
	{
		// m_TimeSec += m_DesiredServerTimeOffset;
		double L_11 = __this->___m_TimeSec_0;
		double L_12 = __this->___m_DesiredServerTimeOffset_4;
		__this->___m_TimeSec_0 = ((double)il2cpp_codegen_add(L_11, L_12));
		// m_DesiredLocalTimeOffset -= m_DesiredServerTimeOffset;
		double L_13 = __this->___m_DesiredLocalTimeOffset_2;
		double L_14 = __this->___m_DesiredServerTimeOffset_4;
		__this->___m_DesiredLocalTimeOffset_2 = ((double)il2cpp_codegen_subtract(L_13, L_14));
		// m_CurrentLocalTimeOffset = m_DesiredLocalTimeOffset;
		double L_15 = __this->___m_DesiredLocalTimeOffset_2;
		__this->___m_CurrentLocalTimeOffset_1 = L_15;
		// m_DesiredServerTimeOffset = 0;
		__this->___m_DesiredServerTimeOffset_4 = (0.0);
		// m_CurrentServerTimeOffset = 0;
		__this->___m_CurrentServerTimeOffset_3 = (0.0);
		// return true;
		V_1 = (bool)1;
		goto IL_00fb;
	}

IL_009f:
	{
		// m_CurrentLocalTimeOffset += deltaTimeSec * (m_DesiredLocalTimeOffset > m_CurrentLocalTimeOffset ? AdjustmentRatio : -AdjustmentRatio);
		double L_16 = __this->___m_CurrentLocalTimeOffset_1;
		double L_17 = ___0_deltaTimeSec;
		double L_18 = __this->___m_DesiredLocalTimeOffset_2;
		double L_19 = __this->___m_CurrentLocalTimeOffset_1;
		G_B6_0 = L_17;
		G_B6_1 = L_16;
		G_B6_2 = __this;
		if ((((double)L_18) > ((double)L_19)))
		{
			G_B7_0 = L_17;
			G_B7_1 = L_16;
			G_B7_2 = __this;
			goto IL_00be;
		}
	}
	{
		double L_20;
		L_20 = NetworkTimeSystem_get_AdjustmentRatio_mAEB1E3BD937B871B16ECFF62C01C5D55939AFD96_inline(__this, NULL);
		G_B8_0 = ((-L_20));
		G_B8_1 = G_B6_0;
		G_B8_2 = G_B6_1;
		G_B8_3 = G_B6_2;
		goto IL_00c4;
	}

IL_00be:
	{
		double L_21;
		L_21 = NetworkTimeSystem_get_AdjustmentRatio_mAEB1E3BD937B871B16ECFF62C01C5D55939AFD96_inline(__this, NULL);
		G_B8_0 = L_21;
		G_B8_1 = G_B7_0;
		G_B8_2 = G_B7_1;
		G_B8_3 = G_B7_2;
	}

IL_00c4:
	{
		NullCheck(G_B8_3);
		G_B8_3->___m_CurrentLocalTimeOffset_1 = ((double)il2cpp_codegen_add(G_B8_2, ((double)il2cpp_codegen_multiply(G_B8_1, G_B8_0))));
		// m_CurrentServerTimeOffset += deltaTimeSec * (m_DesiredServerTimeOffset > m_CurrentServerTimeOffset ? AdjustmentRatio : -AdjustmentRatio);
		double L_22 = __this->___m_CurrentServerTimeOffset_3;
		double L_23 = ___0_deltaTimeSec;
		double L_24 = __this->___m_DesiredServerTimeOffset_4;
		double L_25 = __this->___m_CurrentServerTimeOffset_3;
		G_B9_0 = L_23;
		G_B9_1 = L_22;
		G_B9_2 = __this;
		if ((((double)L_24) > ((double)L_25)))
		{
			G_B10_0 = L_23;
			G_B10_1 = L_22;
			G_B10_2 = __this;
			goto IL_00ea;
		}
	}
	{
		double L_26;
		L_26 = NetworkTimeSystem_get_AdjustmentRatio_mAEB1E3BD937B871B16ECFF62C01C5D55939AFD96_inline(__this, NULL);
		G_B11_0 = ((-L_26));
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		G_B11_3 = G_B9_2;
		goto IL_00f0;
	}

IL_00ea:
	{
		double L_27;
		L_27 = NetworkTimeSystem_get_AdjustmentRatio_mAEB1E3BD937B871B16ECFF62C01C5D55939AFD96_inline(__this, NULL);
		G_B11_0 = L_27;
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
		G_B11_3 = G_B10_2;
	}

IL_00f0:
	{
		NullCheck(G_B11_3);
		G_B11_3->___m_CurrentServerTimeOffset_3 = ((double)il2cpp_codegen_add(G_B11_2, ((double)il2cpp_codegen_multiply(G_B11_1, G_B11_0))));
		// return false;
		V_1 = (bool)0;
		goto IL_00fb;
	}

IL_00fb:
	{
		// }
		bool L_28 = V_1;
		return L_28;
	}
}
// System.Void Unity.Netcode.NetworkTimeSystem::Reset(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTimeSystem_Reset_mA0B82BBF7AC03F4FC1BCFB52C451E8B7F38F8672 (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, double ___0_serverTimeSec, double ___1_rttSec, const RuntimeMethod* method) 
{
	{
		// Sync(serverTimeSec, rttSec);
		double L_0 = ___0_serverTimeSec;
		double L_1 = ___1_rttSec;
		NetworkTimeSystem_Sync_m53B4C804F962B6B4AF76DA61BDB9915BB3295696(__this, L_0, L_1, NULL);
		// Advance(0);
		bool L_2;
		L_2 = NetworkTimeSystem_Advance_mDCD452D5627C27644989F2A2FA413D1237A35D19(__this, (0.0), NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.NetworkTimeSystem::Sync(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTimeSystem_Sync_m53B4C804F962B6B4AF76DA61BDB9915BB3295696 (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, double ___0_serverTimeSec, double ___1_rttSec, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		// LastSyncedRttSec = rttSec;
		double L_0 = ___1_rttSec;
		NetworkTimeSystem_set_LastSyncedRttSec_mA1C80CC3F306B8060F2602E40AF1197D222F77A8_inline(__this, L_0, NULL);
		// LastSyncedServerTimeSec = serverTimeSec;
		double L_1 = ___0_serverTimeSec;
		NetworkTimeSystem_set_LastSyncedServerTimeSec_m4CFF62DC57A58B9634184818ADACC6E2935E0190_inline(__this, L_1, NULL);
		// var timeDif = serverTimeSec - m_TimeSec;
		double L_2 = ___0_serverTimeSec;
		double L_3 = __this->___m_TimeSec_0;
		V_0 = ((double)il2cpp_codegen_subtract(L_2, L_3));
		// m_DesiredServerTimeOffset = timeDif - ServerBufferSec;
		double L_4 = V_0;
		double L_5;
		L_5 = NetworkTimeSystem_get_ServerBufferSec_m07C6CA24A68C6972C984DE91B2AC93CED5717546_inline(__this, NULL);
		__this->___m_DesiredServerTimeOffset_4 = ((double)il2cpp_codegen_subtract(L_4, L_5));
		// m_DesiredLocalTimeOffset = timeDif + rttSec + LocalBufferSec;
		double L_6 = V_0;
		double L_7 = ___1_rttSec;
		double L_8;
		L_8 = NetworkTimeSystem_get_LocalBufferSec_m2EE2B31F9AFDB2E6DCD3A842243723BD27D789A4_inline(__this, NULL);
		__this->___m_DesiredLocalTimeOffset_2 = ((double)il2cpp_codegen_add(((double)il2cpp_codegen_add(L_6, L_7)), L_8));
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
// System.Boolean Unity.Netcode.NetworkTransport::get_IsSupported()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransport_get_IsSupported_m55D61FEFB95616D76EE1CCAA551D4ED53C8F6CD0 (NetworkTransport_t55E07951299283974C86476F46CC977780560B64* __this, const RuntimeMethod* method) 
{
	{
		// public virtual bool IsSupported => true;
		return (bool)1;
	}
}
// System.Void Unity.Netcode.NetworkTransport::add_OnTransportEvent(Unity.Netcode.NetworkTransport/TransportEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_add_OnTransportEvent_m47B8F9ACBBB2EC7F737857DB19489C24C4C9E8E4 (NetworkTransport_t55E07951299283974C86476F46CC977780560B64* __this, TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* V_0 = NULL;
	TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* V_1 = NULL;
	TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* V_2 = NULL;
	{
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_0 = __this->___OnTransportEvent_5;
		V_0 = L_0;
	}

IL_0007:
	{
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_1 = V_0;
		V_1 = L_1;
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_2 = V_1;
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135*)CastclassSealed((RuntimeObject*)L_4, TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135_il2cpp_TypeInfo_var));
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135** L_5 = (&__this->___OnTransportEvent_5);
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_6 = V_2;
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_7 = V_1;
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_8;
		L_8 = InterlockedCompareExchangeImpl<TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135*>(L_5, L_6, L_7);
		V_0 = L_8;
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_9 = V_0;
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_10 = V_1;
		if ((!(((RuntimeObject*)(TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135*)L_9) == ((RuntimeObject*)(TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Netcode.NetworkTransport::remove_OnTransportEvent(Unity.Netcode.NetworkTransport/TransportEventDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_remove_OnTransportEvent_mAB4E27758F95E4649B1B90725F7B20096B30145A (NetworkTransport_t55E07951299283974C86476F46CC977780560B64* __this, TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* V_0 = NULL;
	TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* V_1 = NULL;
	TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* V_2 = NULL;
	{
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_0 = __this->___OnTransportEvent_5;
		V_0 = L_0;
	}

IL_0007:
	{
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_1 = V_0;
		V_1 = L_1;
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_2 = V_1;
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135*)CastclassSealed((RuntimeObject*)L_4, TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135_il2cpp_TypeInfo_var));
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135** L_5 = (&__this->___OnTransportEvent_5);
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_6 = V_2;
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_7 = V_1;
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_8;
		L_8 = InterlockedCompareExchangeImpl<TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135*>(L_5, L_6, L_7);
		V_0 = L_8;
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_9 = V_0;
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_10 = V_1;
		if ((!(((RuntimeObject*)(TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135*)L_9) == ((RuntimeObject*)(TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135*)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Netcode.NetworkTransport::InvokeOnTransportEvent(Unity.Netcode.NetworkEvent,System.UInt64,System.ArraySegment`1<System.Byte>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport_InvokeOnTransportEvent_m56EFDDC779FB136044F3064BE9E68BF81EB9790F (NetworkTransport_t55E07951299283974C86476F46CC977780560B64* __this, int32_t ___0_eventType, uint64_t ___1_clientId, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___2_payload, float ___3_receiveTime, const RuntimeMethod* method) 
{
	TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* G_B2_0 = NULL;
	TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* G_B1_0 = NULL;
	{
		// OnTransportEvent?.Invoke(eventType, clientId, payload, receiveTime);
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_0 = __this->___OnTransportEvent_5;
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		goto IL_0018;
	}

IL_000d:
	{
		int32_t L_2 = ___0_eventType;
		uint64_t L_3 = ___1_clientId;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_4 = ___2_payload;
		float L_5 = ___3_receiveTime;
		NullCheck(G_B2_0);
		TransportEventDelegate_Invoke_m229F59FBB7622E360ABD0E052077C885EDFF2FBE_inline(G_B2_0, L_2, L_3, L_4, L_5, NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.NetworkTransport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransport__ctor_m4539E8F121DB9DFB42D7B63EC51A14FB1C7738AF (NetworkTransport_t55E07951299283974C86476F46CC977780560B64* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
void TransportEventDelegate_Invoke_m229F59FBB7622E360ABD0E052077C885EDFF2FBE_Multicast(TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* __this, int32_t ___0_eventType, uint64_t ___1_clientId, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___2_payload, float ___3_receiveTime, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* currentDelegate = reinterpret_cast<TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, uint64_t, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, float, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, ___0_eventType, ___1_clientId, ___2_payload, ___3_receiveTime, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void TransportEventDelegate_Invoke_m229F59FBB7622E360ABD0E052077C885EDFF2FBE_OpenInst(TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* __this, int32_t ___0_eventType, uint64_t ___1_clientId, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___2_payload, float ___3_receiveTime, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, uint64_t, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_eventType, ___1_clientId, ___2_payload, ___3_receiveTime, method);
}
void TransportEventDelegate_Invoke_m229F59FBB7622E360ABD0E052077C885EDFF2FBE_OpenStatic(TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* __this, int32_t ___0_eventType, uint64_t ___1_clientId, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___2_payload, float ___3_receiveTime, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (int32_t, uint64_t, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___0_eventType, ___1_clientId, ___2_payload, ___3_receiveTime, method);
}
void TransportEventDelegate_Invoke_m229F59FBB7622E360ABD0E052077C885EDFF2FBE_OpenStaticInvoker(TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* __this, int32_t ___0_eventType, uint64_t ___1_clientId, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___2_payload, float ___3_receiveTime, const RuntimeMethod* method)
{
	InvokerActionInvoker4< int32_t, uint64_t, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, float >::Invoke(__this->___method_ptr_0, method, NULL, ___0_eventType, ___1_clientId, ___2_payload, ___3_receiveTime);
}
void TransportEventDelegate_Invoke_m229F59FBB7622E360ABD0E052077C885EDFF2FBE_ClosedStaticInvoker(TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* __this, int32_t ___0_eventType, uint64_t ___1_clientId, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___2_payload, float ___3_receiveTime, const RuntimeMethod* method)
{
	InvokerActionInvoker5< RuntimeObject*, int32_t, uint64_t, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, float >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___0_eventType, ___1_clientId, ___2_payload, ___3_receiveTime);
}
// System.Void Unity.Netcode.NetworkTransport/TransportEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransportEventDelegate__ctor_mAF3FFFC3C352B29CF7221CF2ECE6D968F35BF90F (TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 4;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TransportEventDelegate_Invoke_m229F59FBB7622E360ABD0E052077C885EDFF2FBE_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&TransportEventDelegate_Invoke_m229F59FBB7622E360ABD0E052077C885EDFF2FBE_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&TransportEventDelegate_Invoke_m229F59FBB7622E360ABD0E052077C885EDFF2FBE_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&TransportEventDelegate_Invoke_m229F59FBB7622E360ABD0E052077C885EDFF2FBE_Multicast;
}
// System.Void Unity.Netcode.NetworkTransport/TransportEventDelegate::Invoke(Unity.Netcode.NetworkEvent,System.UInt64,System.ArraySegment`1<System.Byte>,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransportEventDelegate_Invoke_m229F59FBB7622E360ABD0E052077C885EDFF2FBE (TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* __this, int32_t ___0_eventType, uint64_t ___1_clientId, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___2_payload, float ___3_receiveTime, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, uint64_t, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_eventType, ___1_clientId, ___2_payload, ___3_receiveTime, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Unity.Netcode.NetworkTransport/TransportEventDelegate::BeginInvoke(Unity.Netcode.NetworkEvent,System.UInt64,System.ArraySegment`1<System.Byte>,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TransportEventDelegate_BeginInvoke_m096188072C0C81ECD769AB1B8209E2E7CE121AA6 (TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* __this, int32_t ___0_eventType, uint64_t ___1_clientId, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___2_payload, float ___3_receiveTime, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___4_callback, RuntimeObject* ___5_object, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkEvent_tFC4FE8610A831452CA942B169FB11657DA90B9EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(NetworkEvent_tFC4FE8610A831452CA942B169FB11657DA90B9EB_il2cpp_TypeInfo_var, &___0_eventType);
	__d_args[1] = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &___1_clientId);
	__d_args[2] = Box(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_il2cpp_TypeInfo_var, &___2_payload);
	__d_args[3] = Box(Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var, &___3_receiveTime);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___4_callback, (RuntimeObject*)___5_object);
}
// System.Void Unity.Netcode.NetworkTransport/TransportEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransportEventDelegate_EndInvoke_m40161665A1A08F92AE989358150764E38F579AAE (TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Unity.Netcode.Transports.UTP.BatchedReceiveQueue::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchedReceiveQueue_get_IsEmpty_mE6FE9C4054B69EFAB47C9842F39A16E9F1753721 (BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsEmpty => m_Length <= 0;
		int32_t L_0 = __this->___m_Length_2;
		return (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Unity.Netcode.Transports.UTP.BatchedReceiveQueue::.ctor(Unity.Networking.Transport.DataStreamReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchedReceiveQueue__ctor_m965421034E74E6506EE2DE1D5EE913C6E2A55DE9 (BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA* __this, DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3 ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_1 = NULL;
	{
		// public BatchedReceiveQueue(DataStreamReader reader)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_Data = new byte[reader.Length];
		int32_t L_0;
		L_0 = DataStreamReader_get_Length_m5F216EB0F2C71A0576B7DD18864D2E3700AC050B((&___0_reader), NULL);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_0);
		__this->___m_Data_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_Data_0), (void*)L_1);
		// fixed (byte* dataPtr = m_Data)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = __this->___m_Data_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = L_2;
		V_1 = L_3;
		if (!L_3)
		{
			goto IL_002a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = V_1;
		NullCheck(L_4);
		if (((int32_t)(((RuntimeArray*)L_4)->max_length)))
		{
			goto IL_002f;
		}
	}

IL_002a:
	{
		V_0 = (uint8_t*)((uintptr_t)0);
		goto IL_0038;
	}

IL_002f:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_1;
		NullCheck(L_5);
		V_0 = (uint8_t*)((uintptr_t)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0038:
	{
		// reader.ReadBytes(dataPtr, reader.Length);
		uint8_t* L_6 = V_0;
		int32_t L_7;
		L_7 = DataStreamReader_get_Length_m5F216EB0F2C71A0576B7DD18864D2E3700AC050B((&___0_reader), NULL);
		DataStreamReader_ReadBytes_m1E2D499A170CDF22A902617B1072E7E1091874A3((&___0_reader), L_6, L_7, NULL);
		V_1 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		// m_Offset = 0;
		__this->___m_Offset_1 = 0;
		// m_Length = reader.Length;
		int32_t L_8;
		L_8 = DataStreamReader_get_Length_m5F216EB0F2C71A0576B7DD18864D2E3700AC050B((&___0_reader), NULL);
		__this->___m_Length_2 = L_8;
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.BatchedReceiveQueue::PushReader(Unity.Networking.Transport.DataStreamReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchedReceiveQueue_PushReader_m0E81E806C9D1FD220CF8A15189B42C36FD37ED19 (BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA* __this, DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3 ___0_reader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	uint8_t* V_4 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_5 = NULL;
	{
		// var available = m_Data.Length - (m_Offset + m_Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___m_Data_0;
		NullCheck(L_0);
		int32_t L_1 = __this->___m_Offset_1;
		int32_t L_2 = __this->___m_Length_2;
		V_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_0)->max_length)), ((int32_t)il2cpp_codegen_add(L_1, L_2))));
		// if (available < reader.Length)
		int32_t L_3 = V_0;
		int32_t L_4;
		L_4 = DataStreamReader_get_Length_m5F216EB0F2C71A0576B7DD18864D2E3700AC050B((&___0_reader), NULL);
		V_1 = (bool)((((int32_t)L_3) < ((int32_t)L_4))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0093;
		}
	}
	{
		// if (m_Length > 0)
		int32_t L_6 = __this->___m_Length_2;
		V_2 = (bool)((((int32_t)L_6) > ((int32_t)0))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0055;
		}
	}
	{
		// Array.Copy(m_Data, m_Offset, m_Data, 0, m_Length);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = __this->___m_Data_0;
		int32_t L_9 = __this->___m_Offset_1;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___m_Data_0;
		int32_t L_11 = __this->___m_Length_2;
		Array_Copy_mB4904E17BD92E320613A3251C0205E0786B3BF41((RuntimeArray*)L_8, L_9, (RuntimeArray*)L_10, 0, L_11, NULL);
	}

IL_0055:
	{
		// m_Offset = 0;
		__this->___m_Offset_1 = 0;
		goto IL_0076;
	}

IL_005e:
	{
		// Array.Resize(ref m_Data, m_Data.Length * 2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_12 = (&__this->___m_Data_0);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_13 = __this->___m_Data_0;
		NullCheck(L_13);
		Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297(L_12, ((int32_t)il2cpp_codegen_multiply(((int32_t)(((RuntimeArray*)L_13)->max_length)), 2)), Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mDEA5A67641D397AE82678232B46E377173ED4297_RuntimeMethod_var);
	}

IL_0076:
	{
		// while (m_Data.Length - m_Length < reader.Length)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_14 = __this->___m_Data_0;
		NullCheck(L_14);
		int32_t L_15 = __this->___m_Length_2;
		int32_t L_16;
		L_16 = DataStreamReader_get_Length_m5F216EB0F2C71A0576B7DD18864D2E3700AC050B((&___0_reader), NULL);
		V_3 = (bool)((((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_14)->max_length)), L_15))) < ((int32_t)L_16))? 1 : 0);
		bool L_17 = V_3;
		if (L_17)
		{
			goto IL_005e;
		}
	}
	{
	}

IL_0093:
	{
		// fixed (byte* dataPtr = m_Data)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_18 = __this->___m_Data_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = L_18;
		V_5 = L_19;
		if (!L_19)
		{
			goto IL_00a5;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_20 = V_5;
		NullCheck(L_20);
		if (((int32_t)(((RuntimeArray*)L_20)->max_length)))
		{
			goto IL_00ab;
		}
	}

IL_00a5:
	{
		V_4 = (uint8_t*)((uintptr_t)0);
		goto IL_00b6;
	}

IL_00ab:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_5;
		NullCheck(L_21);
		V_4 = (uint8_t*)((uintptr_t)((L_21)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_00b6:
	{
		// reader.ReadBytes(dataPtr + m_Offset + m_Length, reader.Length);
		uint8_t* L_22 = V_4;
		int32_t L_23 = __this->___m_Offset_1;
		int32_t L_24 = __this->___m_Length_2;
		int32_t L_25;
		L_25 = DataStreamReader_get_Length_m5F216EB0F2C71A0576B7DD18864D2E3700AC050B((&___0_reader), NULL);
		DataStreamReader_ReadBytes_m1E2D499A170CDF22A902617B1072E7E1091874A3((&___0_reader), ((uint8_t*)il2cpp_codegen_add((intptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_22, L_23)), L_24)), L_25, NULL);
		V_5 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		// m_Length += reader.Length;
		int32_t L_26 = __this->___m_Length_2;
		int32_t L_27;
		L_27 = DataStreamReader_get_Length_m5F216EB0F2C71A0576B7DD18864D2E3700AC050B((&___0_reader), NULL);
		__this->___m_Length_2 = ((int32_t)il2cpp_codegen_add(L_26, L_27));
		// }
		return;
	}
}
// System.ArraySegment`1<System.Byte> Unity.Netcode.Transports.UTP.BatchedReceiveQueue::PopMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 BatchedReceiveQueue_PopMessage_m20B586540098D5D1A1FD0830396FAFB62CD6E9BF (BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_3;
	memset((&V_3), 0, sizeof(V_3));
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	{
		// if (m_Length < sizeof(int))
		int32_t L_0 = __this->___m_Length_2;
		V_2 = (bool)((((int32_t)L_0) < ((int32_t)4))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// return default;
		il2cpp_codegen_initobj((&V_3), sizeof(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093));
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_2 = V_3;
		V_4 = L_2;
		goto IL_0088;
	}

IL_001c:
	{
		// var messageLength = BitConverter.ToInt32(m_Data, m_Offset);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___m_Data_0;
		int32_t L_4 = __this->___m_Offset_1;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = BitConverter_ToInt32_m259B4E62995575B80C4086347C867EB3C8D7DAB3(L_3, L_4, NULL);
		V_0 = L_5;
		// if (m_Length - sizeof(int) < messageLength)
		int32_t L_6 = __this->___m_Length_2;
		int32_t L_7 = V_0;
		V_5 = (bool)((((int32_t)((int32_t)il2cpp_codegen_subtract(L_6, 4))) < ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_5;
		if (!L_8)
		{
			goto IL_004d;
		}
	}
	{
		// return default;
		il2cpp_codegen_initobj((&V_3), sizeof(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093));
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_9 = V_3;
		V_4 = L_9;
		goto IL_0088;
	}

IL_004d:
	{
		// var data = new ArraySegment<byte>(m_Data, m_Offset + sizeof(int), messageLength);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = __this->___m_Data_0;
		int32_t L_11 = __this->___m_Offset_1;
		int32_t L_12 = V_0;
		ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20((&V_1), L_10, ((int32_t)il2cpp_codegen_add(L_11, 4)), L_12, ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		// m_Offset += sizeof(int) + messageLength;
		int32_t L_13 = __this->___m_Offset_1;
		int32_t L_14 = V_0;
		__this->___m_Offset_1 = ((int32_t)il2cpp_codegen_add(L_13, ((int32_t)il2cpp_codegen_add(4, L_14))));
		// m_Length -= sizeof(int) + messageLength;
		int32_t L_15 = __this->___m_Length_2;
		int32_t L_16 = V_0;
		__this->___m_Length_2 = ((int32_t)il2cpp_codegen_subtract(L_15, ((int32_t)il2cpp_codegen_add(4, L_16))));
		// return data;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_17 = V_1;
		V_4 = L_17;
		goto IL_0088;
	}

IL_0088:
	{
		// }
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_18 = V_4;
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
// System.Int32 Unity.Netcode.Transports.UTP.BatchedSendQueue::get_HeadIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchedSendQueue_get_HeadIndex_m91CD2AD83101A70E26EF78B7460C36AC3C8F2C20 (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return m_HeadTailIndices[k_HeadInternalIndex]; }
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_0 = (&__this->___m_HeadTailIndices_1);
		int32_t L_1;
		L_1 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_0)->___m_Buffer_0, 0);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		// get { return m_HeadTailIndices[k_HeadInternalIndex]; }
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t BatchedSendQueue_get_HeadIndex_m91CD2AD83101A70E26EF78B7460C36AC3C8F2C20_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BatchedSendQueue_get_HeadIndex_m91CD2AD83101A70E26EF78B7460C36AC3C8F2C20(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Netcode.Transports.UTP.BatchedSendQueue::set_HeadIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchedSendQueue_set_HeadIndex_m44301042025EB7BA0D7B95A4CD1AF41821E44A29 (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_HeadTailIndices[k_HeadInternalIndex] = value; }
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_0 = (&__this->___m_HeadTailIndices_1);
		int32_t L_1 = ___0_value;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_0)->___m_Buffer_0, 0, (L_1));
		// set { m_HeadTailIndices[k_HeadInternalIndex] = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void BatchedSendQueue_set_HeadIndex_m44301042025EB7BA0D7B95A4CD1AF41821E44A29_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988*>(__this + _offset);
	BatchedSendQueue_set_HeadIndex_m44301042025EB7BA0D7B95A4CD1AF41821E44A29(_thisAdjusted, ___0_value, method);
}
// System.Int32 Unity.Netcode.Transports.UTP.BatchedSendQueue::get_TailIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchedSendQueue_get_TailIndex_mB4B8DD7E3103F96442E8B53CCA0BB5A5E25A2F16 (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return m_HeadTailIndices[k_TailInternalIndex]; }
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_0 = (&__this->___m_HeadTailIndices_1);
		int32_t L_1;
		L_1 = IL2CPP_NATIVEARRAY_GET_ITEM(int32_t, (L_0)->___m_Buffer_0, 1);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		// get { return m_HeadTailIndices[k_TailInternalIndex]; }
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  int32_t BatchedSendQueue_get_TailIndex_mB4B8DD7E3103F96442E8B53CCA0BB5A5E25A2F16_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BatchedSendQueue_get_TailIndex_mB4B8DD7E3103F96442E8B53CCA0BB5A5E25A2F16(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Netcode.Transports.UTP.BatchedSendQueue::set_TailIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchedSendQueue_set_TailIndex_m7D3474452C23C3195715C10C99050B0097B1FF18 (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set { m_HeadTailIndices[k_TailInternalIndex] = value; }
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_0 = (&__this->___m_HeadTailIndices_1);
		int32_t L_1 = ___0_value;
		IL2CPP_NATIVEARRAY_SET_ITEM(int32_t, (L_0)->___m_Buffer_0, 1, (L_1));
		// set { m_HeadTailIndices[k_TailInternalIndex] = value; }
		return;
	}
}
IL2CPP_EXTERN_C  void BatchedSendQueue_set_TailIndex_m7D3474452C23C3195715C10C99050B0097B1FF18_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988*>(__this + _offset);
	BatchedSendQueue_set_TailIndex_m7D3474452C23C3195715C10C99050B0097B1FF18(_thisAdjusted, ___0_value, method);
}
// System.Int32 Unity.Netcode.Transports.UTP.BatchedSendQueue::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchedSendQueue_get_Length_mD3D3E7C0FAA4242AC69FF929F9463C5D2FCC531A (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, const RuntimeMethod* method) 
{
	{
		// public int Length => TailIndex - HeadIndex;
		int32_t L_0;
		L_0 = BatchedSendQueue_get_TailIndex_mB4B8DD7E3103F96442E8B53CCA0BB5A5E25A2F16(__this, NULL);
		int32_t L_1;
		L_1 = BatchedSendQueue_get_HeadIndex_m91CD2AD83101A70E26EF78B7460C36AC3C8F2C20(__this, NULL);
		return ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
	}
}
IL2CPP_EXTERN_C  int32_t BatchedSendQueue_get_Length_mD3D3E7C0FAA4242AC69FF929F9463C5D2FCC531A_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BatchedSendQueue_get_Length_mD3D3E7C0FAA4242AC69FF929F9463C5D2FCC531A(_thisAdjusted, method);
	return _returnValue;
}
// System.Int32 Unity.Netcode.Transports.UTP.BatchedSendQueue::get_Capacity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchedSendQueue_get_Capacity_mD2B74A2589C7B887FB02D5483B408FEBFAEE7AAA (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_Length_mCCFB8F09EBEF5EA454CEA11FDB7B6100AF908D61_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int Capacity => m_Data.Length;
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* L_0 = (&__this->___m_Data_0);
		int32_t L_1;
		L_1 = NativeList_1_get_Length_mCCFB8F09EBEF5EA454CEA11FDB7B6100AF908D61(L_0, NativeList_1_get_Length_mCCFB8F09EBEF5EA454CEA11FDB7B6100AF908D61_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t BatchedSendQueue_get_Capacity_mD2B74A2589C7B887FB02D5483B408FEBFAEE7AAA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BatchedSendQueue_get_Capacity_mD2B74A2589C7B887FB02D5483B408FEBFAEE7AAA(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.Netcode.Transports.UTP.BatchedSendQueue::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchedSendQueue_get_IsEmpty_m3036A22A4DAE86E6660B259E38AD2B0FBC21BD9C (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsEmpty => HeadIndex == TailIndex;
		int32_t L_0;
		L_0 = BatchedSendQueue_get_HeadIndex_m91CD2AD83101A70E26EF78B7460C36AC3C8F2C20(__this, NULL);
		int32_t L_1;
		L_1 = BatchedSendQueue_get_TailIndex_mB4B8DD7E3103F96442E8B53CCA0BB5A5E25A2F16(__this, NULL);
		return (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool BatchedSendQueue_get_IsEmpty_m3036A22A4DAE86E6660B259E38AD2B0FBC21BD9C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988*>(__this + _offset);
	bool _returnValue;
	_returnValue = BatchedSendQueue_get_IsEmpty_m3036A22A4DAE86E6660B259E38AD2B0FBC21BD9C(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean Unity.Netcode.Transports.UTP.BatchedSendQueue::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchedSendQueue_get_IsCreated_mA3E2725C73F697AFC4A9BDD092A5E936F317A8CA (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_get_IsCreated_m0088506340DF8D71C5E8A04FD537552F82443F88_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool IsCreated => m_Data.IsCreated;
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* L_0 = (&__this->___m_Data_0);
		bool L_1;
		L_1 = NativeList_1_get_IsCreated_m0088506340DF8D71C5E8A04FD537552F82443F88(L_0, NativeList_1_get_IsCreated_m0088506340DF8D71C5E8A04FD537552F82443F88_RuntimeMethod_var);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool BatchedSendQueue_get_IsCreated_mA3E2725C73F697AFC4A9BDD092A5E936F317A8CA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988*>(__this + _offset);
	bool _returnValue;
	_returnValue = BatchedSendQueue_get_IsCreated_mA3E2725C73F697AFC4A9BDD092A5E936F317A8CA(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Netcode.Transports.UTP.BatchedSendQueue::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchedSendQueue__ctor_m18E80247931EBB63D59B4DD6E4979D0B3D6FCC1E (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, int32_t ___0_capacity, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ResizeUninitialized_m753321DB060C4AAEC2ACD94AAC4D2766D52A821F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1__ctor_m8C903F568E40A185F0756A7A98CB77CD2619D078_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// m_MaximumCapacity = capacity + (capacity & 1);
		int32_t L_0 = ___0_capacity;
		int32_t L_1 = ___0_capacity;
		__this->___m_MaximumCapacity_2 = ((int32_t)il2cpp_codegen_add(L_0, ((int32_t)(L_1&1))));
		// m_MinimumCapacity = m_MaximumCapacity;
		int32_t L_2 = __this->___m_MaximumCapacity_2;
		__this->___m_MinimumCapacity_3 = L_2;
		goto IL_002a;
	}

IL_001a:
	{
		// m_MinimumCapacity /= 2;
		int32_t L_3 = __this->___m_MinimumCapacity_3;
		__this->___m_MinimumCapacity_3 = ((int32_t)(L_3/2));
	}

IL_002a:
	{
		// while (m_MinimumCapacity / 2 >= MinimumMinimumCapacity)
		int32_t L_4 = __this->___m_MinimumCapacity_3;
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)(L_4/2))) < ((int32_t)((int32_t)4096)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_0;
		if (L_5)
		{
			goto IL_001a;
		}
	}
	{
		// m_Data = new NativeList<byte>(m_MinimumCapacity, Allocator.Persistent);
		int32_t L_6 = __this->___m_MinimumCapacity_3;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_7;
		L_7 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(4, NULL);
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 L_8;
		memset((&L_8), 0, sizeof(L_8));
		NativeList_1__ctor_m8C903F568E40A185F0756A7A98CB77CD2619D078((&L_8), L_6, L_7, /*hidden argument*/NativeList_1__ctor_m8C903F568E40A185F0756A7A98CB77CD2619D078_RuntimeMethod_var);
		__this->___m_Data_0 = L_8;
		// m_HeadTailIndices = new NativeArray<int>(2, Allocator.Persistent);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_9;
		memset((&L_9), 0, sizeof(L_9));
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&L_9), 2, 4, 1, /*hidden argument*/NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_RuntimeMethod_var);
		__this->___m_HeadTailIndices_1 = L_9;
		// m_Data.ResizeUninitialized(m_MinimumCapacity);
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* L_10 = (&__this->___m_Data_0);
		int32_t L_11 = __this->___m_MinimumCapacity_3;
		NativeList_1_ResizeUninitialized_m753321DB060C4AAEC2ACD94AAC4D2766D52A821F(L_10, L_11, NativeList_1_ResizeUninitialized_m753321DB060C4AAEC2ACD94AAC4D2766D52A821F_RuntimeMethod_var);
		// HeadIndex = 0;
		BatchedSendQueue_set_HeadIndex_m44301042025EB7BA0D7B95A4CD1AF41821E44A29(__this, 0, NULL);
		// TailIndex = 0;
		BatchedSendQueue_set_TailIndex_m7D3474452C23C3195715C10C99050B0097B1FF18(__this, 0, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BatchedSendQueue__ctor_m18E80247931EBB63D59B4DD6E4979D0B3D6FCC1E_AdjustorThunk (RuntimeObject* __this, int32_t ___0_capacity, const RuntimeMethod* method)
{
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988*>(__this + _offset);
	BatchedSendQueue__ctor_m18E80247931EBB63D59B4DD6E4979D0B3D6FCC1E(_thisAdjusted, ___0_capacity, method);
}
// System.Void Unity.Netcode.Transports.UTP.BatchedSendQueue::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchedSendQueue_Dispose_mD4F40F358E16AD02B90DF571E134D2A08526CD7C (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Dispose_mC0442A0F667EFDA4EAA6B6BAC0139B86A935AAD6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (IsCreated)
		bool L_0;
		L_0 = BatchedSendQueue_get_IsCreated_mA3E2725C73F697AFC4A9BDD092A5E936F317A8CA(__this, NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0025;
		}
	}
	{
		// m_Data.Dispose();
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* L_2 = (&__this->___m_Data_0);
		NativeList_1_Dispose_mC0442A0F667EFDA4EAA6B6BAC0139B86A935AAD6(L_2, NativeList_1_Dispose_mC0442A0F667EFDA4EAA6B6BAC0139B86A935AAD6_RuntimeMethod_var);
		// m_HeadTailIndices.Dispose();
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_3 = (&__this->___m_HeadTailIndices_1);
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E(L_3, NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_RuntimeMethod_var);
	}

IL_0025:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BatchedSendQueue_Dispose_mD4F40F358E16AD02B90DF571E134D2A08526CD7C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988*>(__this + _offset);
	BatchedSendQueue_Dispose_mD4F40F358E16AD02B90DF571E134D2A08526CD7C(_thisAdjusted, method);
}
// System.Void Unity.Netcode.Transports.UTP.BatchedSendQueue::WriteBytes(Unity.Networking.Transport.DataStreamWriter&,System.Byte*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchedSendQueue_WriteBytes_mDC41B4796901540484FFDD18C7F8E060BC771933 (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* ___0_writer, uint8_t* ___1_data, int32_t ___2_length, const RuntimeMethod* method) 
{
	{
		// writer.WriteBytes(data, length);
		DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* L_0 = ___0_writer;
		uint8_t* L_1 = ___1_data;
		int32_t L_2 = ___2_length;
		bool L_3;
		L_3 = DataStreamWriter_WriteBytes_m5A6218CBEEA1204AC2B8822CB09422FCABF42CFD(L_0, L_1, L_2, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BatchedSendQueue_WriteBytes_mDC41B4796901540484FFDD18C7F8E060BC771933_AdjustorThunk (RuntimeObject* __this, DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* ___0_writer, uint8_t* ___1_data, int32_t ___2_length, const RuntimeMethod* method)
{
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988*>(__this + _offset);
	BatchedSendQueue_WriteBytes_mDC41B4796901540484FFDD18C7F8E060BC771933(_thisAdjusted, ___0_writer, ___1_data, ___2_length, method);
}
// System.Void Unity.Netcode.Transports.UTP.BatchedSendQueue::AppendDataAtTail(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchedSendQueue_AppendDataAtTail_mC41B180A6F396AF0E90BE8FE09D17330EBAB56D9 (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___0_data, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	{
		// var writer = new DataStreamWriter((byte*)m_Data.GetUnsafePtr() + TailIndex, Capacity - TailIndex);
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 L_0 = __this->___m_Data_0;
		void* L_1;
		L_1 = NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3(L_0, NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3_RuntimeMethod_var);
		int32_t L_2;
		L_2 = BatchedSendQueue_get_TailIndex_mB4B8DD7E3103F96442E8B53CCA0BB5A5E25A2F16(__this, NULL);
		int32_t L_3;
		L_3 = BatchedSendQueue_get_Capacity_mD2B74A2589C7B887FB02D5483B408FEBFAEE7AAA(__this, NULL);
		int32_t L_4;
		L_4 = BatchedSendQueue_get_TailIndex_mB4B8DD7E3103F96442E8B53CCA0BB5A5E25A2F16(__this, NULL);
		DataStreamWriter__ctor_mE61DA857285F4FF4469253135FF3E8A40673EE62((&V_0), (uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_1, L_2)), ((int32_t)il2cpp_codegen_subtract(L_3, L_4)), NULL);
		// writer.WriteInt(data.Count);
		int32_t L_5;
		L_5 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___0_data), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		bool L_6;
		L_6 = DataStreamWriter_WriteInt_mEE3DE78C7B6AA46BB509437F89EEA0658F2A851E((&V_0), L_5, NULL);
		// fixed (byte* dataPtr = data.Array)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7;
		L_7 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&___0_data), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = L_7;
		V_2 = L_8;
		if (!L_8)
		{
			goto IL_0047;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_9 = V_2;
		NullCheck(L_9);
		if (((int32_t)(((RuntimeArray*)L_9)->max_length)))
		{
			goto IL_004c;
		}
	}

IL_0047:
	{
		V_1 = (uint8_t*)((uintptr_t)0);
		goto IL_0055;
	}

IL_004c:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_10 = V_2;
		NullCheck(L_10);
		V_1 = (uint8_t*)((uintptr_t)((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))));
	}

IL_0055:
	{
		// WriteBytes(ref writer, dataPtr + data.Offset, data.Count);
		uint8_t* L_11 = V_1;
		int32_t L_12;
		L_12 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&___0_data), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		int32_t L_13;
		L_13 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___0_data), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		BatchedSendQueue_WriteBytes_mDC41B4796901540484FFDD18C7F8E060BC771933(__this, (&V_0), ((uint8_t*)il2cpp_codegen_add((intptr_t)L_11, L_12)), L_13, NULL);
		V_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL;
		// TailIndex += sizeof(int) + data.Count;
		int32_t L_14;
		L_14 = BatchedSendQueue_get_TailIndex_mB4B8DD7E3103F96442E8B53CCA0BB5A5E25A2F16(__this, NULL);
		int32_t L_15;
		L_15 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___0_data), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		BatchedSendQueue_set_TailIndex_m7D3474452C23C3195715C10C99050B0097B1FF18(__this, ((int32_t)il2cpp_codegen_add(L_14, ((int32_t)il2cpp_codegen_add(4, L_15)))), NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BatchedSendQueue_AppendDataAtTail_mC41B180A6F396AF0E90BE8FE09D17330EBAB56D9_AdjustorThunk (RuntimeObject* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___0_data, const RuntimeMethod* method)
{
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988*>(__this + _offset);
	BatchedSendQueue_AppendDataAtTail_mC41B180A6F396AF0E90BE8FE09D17330EBAB56D9(_thisAdjusted, ___0_data, method);
}
// System.Boolean Unity.Netcode.Transports.UTP.BatchedSendQueue::PushMessage(System.ArraySegment`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BatchedSendQueue_PushMessage_m4721141E1D061171E1E7105817641CD163A15CFA (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___0_message, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ResizeUninitialized_m753321DB060C4AAEC2ACD94AAC4D2766D52A821F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B15_0 = 0;
	{
		// if (!IsCreated)
		bool L_0;
		L_0 = BatchedSendQueue_get_IsCreated_mA3E2725C73F697AFC4A9BDD092A5E936F317A8CA(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_016b;
	}

IL_0016:
	{
		// if (Capacity - TailIndex >= sizeof(int) + message.Count)
		int32_t L_2;
		L_2 = BatchedSendQueue_get_Capacity_mD2B74A2589C7B887FB02D5483B408FEBFAEE7AAA(__this, NULL);
		int32_t L_3;
		L_3 = BatchedSendQueue_get_TailIndex_mB4B8DD7E3103F96442E8B53CCA0BB5A5E25A2F16(__this, NULL);
		int32_t L_4;
		L_4 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___0_message), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_subtract(L_2, L_3))) < ((int32_t)((int32_t)il2cpp_codegen_add(4, L_4))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0045;
		}
	}
	{
		// AppendDataAtTail(message);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_6 = ___0_message;
		BatchedSendQueue_AppendDataAtTail_mC41B180A6F396AF0E90BE8FE09D17330EBAB56D9(__this, L_6, NULL);
		// return true;
		V_1 = (bool)1;
		goto IL_016b;
	}

IL_0045:
	{
		// if (HeadIndex > 0 && Length > 0)
		int32_t L_7;
		L_7 = BatchedSendQueue_get_HeadIndex_m91CD2AD83101A70E26EF78B7460C36AC3C8F2C20(__this, NULL);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0059;
		}
	}
	{
		int32_t L_8;
		L_8 = BatchedSendQueue_get_Length_mD3D3E7C0FAA4242AC69FF929F9463C5D2FCC531A(__this, NULL);
		G_B7_0 = ((((int32_t)L_8) > ((int32_t)0))? 1 : 0);
		goto IL_005a;
	}

IL_0059:
	{
		G_B7_0 = 0;
	}

IL_005a:
	{
		V_3 = (bool)G_B7_0;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_00a1;
		}
	}
	{
		// UnsafeUtility.MemMove(m_Data.GetUnsafePtr(), (byte*)m_Data.GetUnsafePtr() + HeadIndex, Length);
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 L_10 = __this->___m_Data_0;
		void* L_11;
		L_11 = NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3(L_10, NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3_RuntimeMethod_var);
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 L_12 = __this->___m_Data_0;
		void* L_13;
		L_13 = NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3(L_12, NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3_RuntimeMethod_var);
		int32_t L_14;
		L_14 = BatchedSendQueue_get_HeadIndex_m91CD2AD83101A70E26EF78B7460C36AC3C8F2C20(__this, NULL);
		int32_t L_15;
		L_15 = BatchedSendQueue_get_Length_mD3D3E7C0FAA4242AC69FF929F9463C5D2FCC531A(__this, NULL);
		UnsafeUtility_MemMove_m4799FAA9C4BCFA1AEDC6ED01BB9A6DF657C4CEE3(L_11, ((void*)il2cpp_codegen_add((intptr_t)L_13, L_14)), ((int64_t)L_15), NULL);
		// TailIndex = Length;
		int32_t L_16;
		L_16 = BatchedSendQueue_get_Length_mD3D3E7C0FAA4242AC69FF929F9463C5D2FCC531A(__this, NULL);
		BatchedSendQueue_set_TailIndex_m7D3474452C23C3195715C10C99050B0097B1FF18(__this, L_16, NULL);
		// HeadIndex = 0;
		BatchedSendQueue_set_HeadIndex_m44301042025EB7BA0D7B95A4CD1AF41821E44A29(__this, 0, NULL);
	}

IL_00a1:
	{
		// if (Capacity - TailIndex >= sizeof(int) + message.Count)
		int32_t L_17;
		L_17 = BatchedSendQueue_get_Capacity_mD2B74A2589C7B887FB02D5483B408FEBFAEE7AAA(__this, NULL);
		int32_t L_18;
		L_18 = BatchedSendQueue_get_TailIndex_mB4B8DD7E3103F96442E8B53CCA0BB5A5E25A2F16(__this, NULL);
		int32_t L_19;
		L_19 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___0_message), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_subtract(L_17, L_18))) < ((int32_t)((int32_t)il2cpp_codegen_add(4, L_19))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_010e;
		}
	}
	{
		// AppendDataAtTail(message);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_21 = ___0_message;
		BatchedSendQueue_AppendDataAtTail_mC41B180A6F396AF0E90BE8FE09D17330EBAB56D9(__this, L_21, NULL);
		goto IL_00e3;
	}

IL_00cd:
	{
		// m_Data.ResizeUninitialized(Capacity / 2);
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* L_22 = (&__this->___m_Data_0);
		int32_t L_23;
		L_23 = BatchedSendQueue_get_Capacity_mD2B74A2589C7B887FB02D5483B408FEBFAEE7AAA(__this, NULL);
		NativeList_1_ResizeUninitialized_m753321DB060C4AAEC2ACD94AAC4D2766D52A821F(L_22, ((int32_t)(L_23/2)), NativeList_1_ResizeUninitialized_m753321DB060C4AAEC2ACD94AAC4D2766D52A821F_RuntimeMethod_var);
	}

IL_00e3:
	{
		// while (TailIndex < Capacity / 4 && Capacity > m_MinimumCapacity)
		int32_t L_24;
		L_24 = BatchedSendQueue_get_TailIndex_mB4B8DD7E3103F96442E8B53CCA0BB5A5E25A2F16(__this, NULL);
		int32_t L_25;
		L_25 = BatchedSendQueue_get_Capacity_mD2B74A2589C7B887FB02D5483B408FEBFAEE7AAA(__this, NULL);
		if ((((int32_t)L_24) >= ((int32_t)((int32_t)(L_25/4)))))
		{
			goto IL_0103;
		}
	}
	{
		int32_t L_26;
		L_26 = BatchedSendQueue_get_Capacity_mD2B74A2589C7B887FB02D5483B408FEBFAEE7AAA(__this, NULL);
		int32_t L_27 = __this->___m_MinimumCapacity_3;
		G_B15_0 = ((((int32_t)L_26) > ((int32_t)L_27))? 1 : 0);
		goto IL_0104;
	}

IL_0103:
	{
		G_B15_0 = 0;
	}

IL_0104:
	{
		V_5 = (bool)G_B15_0;
		bool L_28 = V_5;
		if (L_28)
		{
			goto IL_00cd;
		}
	}
	{
		// return true;
		V_1 = (bool)1;
		goto IL_016b;
	}

IL_010e:
	{
		goto IL_0141;
	}

IL_0110:
	{
		// if (Capacity * 2 > m_MaximumCapacity)
		int32_t L_29;
		L_29 = BatchedSendQueue_get_Capacity_mD2B74A2589C7B887FB02D5483B408FEBFAEE7AAA(__this, NULL);
		int32_t L_30 = __this->___m_MaximumCapacity_2;
		V_6 = (bool)((((int32_t)((int32_t)il2cpp_codegen_multiply(L_29, 2))) > ((int32_t)L_30))? 1 : 0);
		bool L_31 = V_6;
		if (!L_31)
		{
			goto IL_012c;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_016b;
	}

IL_012c:
	{
		// m_Data.ResizeUninitialized(Capacity * 2);
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* L_32 = (&__this->___m_Data_0);
		int32_t L_33;
		L_33 = BatchedSendQueue_get_Capacity_mD2B74A2589C7B887FB02D5483B408FEBFAEE7AAA(__this, NULL);
		NativeList_1_ResizeUninitialized_m753321DB060C4AAEC2ACD94AAC4D2766D52A821F(L_32, ((int32_t)il2cpp_codegen_multiply(L_33, 2)), NativeList_1_ResizeUninitialized_m753321DB060C4AAEC2ACD94AAC4D2766D52A821F_RuntimeMethod_var);
	}

IL_0141:
	{
		// while (Capacity - TailIndex < sizeof(int) + message.Count)
		int32_t L_34;
		L_34 = BatchedSendQueue_get_Capacity_mD2B74A2589C7B887FB02D5483B408FEBFAEE7AAA(__this, NULL);
		int32_t L_35;
		L_35 = BatchedSendQueue_get_TailIndex_mB4B8DD7E3103F96442E8B53CCA0BB5A5E25A2F16(__this, NULL);
		int32_t L_36;
		L_36 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___0_message), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		V_7 = (bool)((((int32_t)((int32_t)il2cpp_codegen_subtract(L_34, L_35))) < ((int32_t)((int32_t)il2cpp_codegen_add(4, L_36))))? 1 : 0);
		bool L_37 = V_7;
		if (L_37)
		{
			goto IL_0110;
		}
	}
	{
		// AppendDataAtTail(message);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_38 = ___0_message;
		BatchedSendQueue_AppendDataAtTail_mC41B180A6F396AF0E90BE8FE09D17330EBAB56D9(__this, L_38, NULL);
		// return true;
		V_1 = (bool)1;
		goto IL_016b;
	}

IL_016b:
	{
		// }
		bool L_39 = V_1;
		return L_39;
	}
}
IL2CPP_EXTERN_C  bool BatchedSendQueue_PushMessage_m4721141E1D061171E1E7105817641CD163A15CFA_AdjustorThunk (RuntimeObject* __this, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___0_message, const RuntimeMethod* method)
{
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988*>(__this + _offset);
	bool _returnValue;
	_returnValue = BatchedSendQueue_PushMessage_m4721141E1D061171E1E7105817641CD163A15CFA(_thisAdjusted, ___0_message, method);
	return _returnValue;
}
// System.Int32 Unity.Netcode.Transports.UTP.BatchedSendQueue::FillWriterWithMessages(Unity.Networking.Transport.DataStreamWriter&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchedSendQueue_FillWriterWithMessages_m1A6BE297B16C5E6BECF53F1108979256ECB1FBF4 (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* ___0_writer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_AsArray_mE16930FF723114AF02B699ADB8009C5162D3761E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t G_B3_0 = 0;
	{
		// if (!IsCreated || Length == 0)
		bool L_0;
		L_0 = BatchedSendQueue_get_IsCreated_mA3E2725C73F697AFC4A9BDD092A5E936F317A8CA(__this, NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1;
		L_1 = BatchedSendQueue_get_Length_mD3D3E7C0FAA4242AC69FF929F9463C5D2FCC531A(__this, NULL);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// return 0;
		V_1 = 0;
		goto IL_00c8;
	}

IL_0021:
	{
		// var reader = new DataStreamReader(m_Data.AsArray());
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* L_3 = (&__this->___m_Data_0);
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_4;
		L_4 = NativeList_1_AsArray_mE16930FF723114AF02B699ADB8009C5162D3761E(L_3, NativeList_1_AsArray_mE16930FF723114AF02B699ADB8009C5162D3761E_RuntimeMethod_var);
		DataStreamReader__ctor_mE6C5005A31142F3547C3CE8D5D98AFCC383C009B((&V_2), L_4, NULL);
		// var writerAvailable = writer.Capacity;
		DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* L_5 = ___0_writer;
		int32_t L_6;
		L_6 = DataStreamWriter_get_Capacity_m52E805154817DAEED4FE0A784865F825C8BEA15D(L_5, NULL);
		V_3 = L_6;
		// var readerOffset = HeadIndex;
		int32_t L_7;
		L_7 = BatchedSendQueue_get_HeadIndex_m91CD2AD83101A70E26EF78B7460C36AC3C8F2C20(__this, NULL);
		V_4 = L_7;
		goto IL_00ad;
	}

IL_0045:
	{
		// reader.SeekSet(readerOffset);
		int32_t L_8 = V_4;
		DataStreamReader_SeekSet_m0B3939FF6C6A1C3B5A47CCA959457ED3DDF421DE((&V_2), L_8, NULL);
		// var messageLength = reader.ReadInt();
		int32_t L_9;
		L_9 = DataStreamReader_ReadInt_m862924CC887B2309FAA8ED4C8E40E452B3D58E45((&V_2), NULL);
		V_5 = L_9;
		// if (writerAvailable < sizeof(int) + messageLength)
		int32_t L_10 = V_3;
		int32_t L_11 = V_5;
		V_6 = (bool)((((int32_t)L_10) < ((int32_t)((int32_t)il2cpp_codegen_add(4, L_11))))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_0069;
		}
	}
	{
		// break;
		goto IL_00bd;
	}

IL_0069:
	{
		// writer.WriteInt(messageLength);
		DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* L_13 = ___0_writer;
		int32_t L_14 = V_5;
		bool L_15;
		L_15 = DataStreamWriter_WriteInt_mEE3DE78C7B6AA46BB509437F89EEA0658F2A851E(L_13, L_14, NULL);
		// var messageOffset = HeadIndex + reader.GetBytesRead();
		int32_t L_16;
		L_16 = BatchedSendQueue_get_HeadIndex_m91CD2AD83101A70E26EF78B7460C36AC3C8F2C20(__this, NULL);
		int32_t L_17;
		L_17 = DataStreamReader_GetBytesRead_m3A3C261F207245C5211B1066DC6BEFED2F1A7636((&V_2), NULL);
		V_7 = ((int32_t)il2cpp_codegen_add(L_16, L_17));
		// WriteBytes(ref writer, (byte*)m_Data.GetUnsafePtr() + messageOffset, messageLength);
		DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* L_18 = ___0_writer;
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 L_19 = __this->___m_Data_0;
		void* L_20;
		L_20 = NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3(L_19, NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3_RuntimeMethod_var);
		int32_t L_21 = V_7;
		int32_t L_22 = V_5;
		BatchedSendQueue_WriteBytes_mDC41B4796901540484FFDD18C7F8E060BC771933(__this, L_18, (uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_20, L_21)), L_22, NULL);
		// writerAvailable -= sizeof(int) + messageLength;
		int32_t L_23 = V_3;
		int32_t L_24 = V_5;
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_23, ((int32_t)il2cpp_codegen_add(4, L_24))));
		// readerOffset += sizeof(int) + messageLength;
		int32_t L_25 = V_4;
		int32_t L_26 = V_5;
		V_4 = ((int32_t)il2cpp_codegen_add(L_25, ((int32_t)il2cpp_codegen_add(4, L_26))));
	}

IL_00ad:
	{
		// while (readerOffset < TailIndex)
		int32_t L_27 = V_4;
		int32_t L_28;
		L_28 = BatchedSendQueue_get_TailIndex_mB4B8DD7E3103F96442E8B53CCA0BB5A5E25A2F16(__this, NULL);
		V_8 = (bool)((((int32_t)L_27) < ((int32_t)L_28))? 1 : 0);
		bool L_29 = V_8;
		if (L_29)
		{
			goto IL_0045;
		}
	}

IL_00bd:
	{
		// return writer.Capacity - writerAvailable;
		DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* L_30 = ___0_writer;
		int32_t L_31;
		L_31 = DataStreamWriter_get_Capacity_m52E805154817DAEED4FE0A784865F825C8BEA15D(L_30, NULL);
		int32_t L_32 = V_3;
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_31, L_32));
		goto IL_00c8;
	}

IL_00c8:
	{
		// }
		int32_t L_33 = V_1;
		return L_33;
	}
}
IL2CPP_EXTERN_C  int32_t BatchedSendQueue_FillWriterWithMessages_m1A6BE297B16C5E6BECF53F1108979256ECB1FBF4_AdjustorThunk (RuntimeObject* __this, DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* ___0_writer, const RuntimeMethod* method)
{
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BatchedSendQueue_FillWriterWithMessages_m1A6BE297B16C5E6BECF53F1108979256ECB1FBF4(_thisAdjusted, ___0_writer, method);
	return _returnValue;
}
// System.Int32 Unity.Netcode.Transports.UTP.BatchedSendQueue::FillWriterWithBytes(Unity.Networking.Transport.DataStreamWriter&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BatchedSendQueue_FillWriterWithBytes_mD06BD823D9E4782EE51937EE1103662A1F9F3DE3 (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* ___0_writer, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B3_0 = 0;
	{
		// if (!IsCreated || Length == 0)
		bool L_0;
		L_0 = BatchedSendQueue_get_IsCreated_mA3E2725C73F697AFC4A9BDD092A5E936F317A8CA(__this, NULL);
		if (!L_0)
		{
			goto IL_0014;
		}
	}
	{
		int32_t L_1;
		L_1 = BatchedSendQueue_get_Length_mD3D3E7C0FAA4242AC69FF929F9463C5D2FCC531A(__this, NULL);
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0014:
	{
		G_B3_0 = 1;
	}

IL_0015:
	{
		V_1 = (bool)G_B3_0;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// return 0;
		V_2 = 0;
		goto IL_0051;
	}

IL_001e:
	{
		// var copyLength = Math.Min(writer.Capacity, Length);
		DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* L_3 = ___0_writer;
		int32_t L_4;
		L_4 = DataStreamWriter_get_Capacity_m52E805154817DAEED4FE0A784865F825C8BEA15D(L_3, NULL);
		int32_t L_5;
		L_5 = BatchedSendQueue_get_Length_mD3D3E7C0FAA4242AC69FF929F9463C5D2FCC531A(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_6;
		L_6 = Math_Min_m53C488772A34D53917BCA2A491E79A0A5356ED52(L_4, L_5, NULL);
		V_0 = L_6;
		// WriteBytes(ref writer, (byte*)m_Data.GetUnsafePtr() + HeadIndex, copyLength);
		DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* L_7 = ___0_writer;
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94 L_8 = __this->___m_Data_0;
		void* L_9;
		L_9 = NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3(L_8, NativeListUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mCE332CC7994DB38B04B6184C5A12241EEC4330C3_RuntimeMethod_var);
		int32_t L_10;
		L_10 = BatchedSendQueue_get_HeadIndex_m91CD2AD83101A70E26EF78B7460C36AC3C8F2C20(__this, NULL);
		int32_t L_11 = V_0;
		BatchedSendQueue_WriteBytes_mDC41B4796901540484FFDD18C7F8E060BC771933(__this, L_7, (uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_9, L_10)), L_11, NULL);
		// return copyLength;
		int32_t L_12 = V_0;
		V_2 = L_12;
		goto IL_0051;
	}

IL_0051:
	{
		// }
		int32_t L_13 = V_2;
		return L_13;
	}
}
IL2CPP_EXTERN_C  int32_t BatchedSendQueue_FillWriterWithBytes_mD06BD823D9E4782EE51937EE1103662A1F9F3DE3_AdjustorThunk (RuntimeObject* __this, DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA* ___0_writer, const RuntimeMethod* method)
{
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = BatchedSendQueue_FillWriterWithBytes_mD06BD823D9E4782EE51937EE1103662A1F9F3DE3(_thisAdjusted, ___0_writer, method);
	return _returnValue;
}
// System.Void Unity.Netcode.Transports.UTP.BatchedSendQueue::Consume(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchedSendQueue_Consume_m27415A79D38546D9757A191041B1D4EC8165509A (BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* __this, int32_t ___0_size, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_ResizeUninitialized_m753321DB060C4AAEC2ACD94AAC4D2766D52A821F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (size >= Length)
		int32_t L_0 = ___0_size;
		int32_t L_1;
		L_1 = BatchedSendQueue_get_Length_mD3D3E7C0FAA4242AC69FF929F9463C5D2FCC531A(__this, NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		// HeadIndex = 0;
		BatchedSendQueue_set_HeadIndex_m44301042025EB7BA0D7B95A4CD1AF41821E44A29(__this, 0, NULL);
		// TailIndex = 0;
		BatchedSendQueue_set_TailIndex_m7D3474452C23C3195715C10C99050B0097B1FF18(__this, 0, NULL);
		// m_Data.ResizeUninitialized(m_MinimumCapacity);
		NativeList_1_tEEE3A07B710DA14F96F06ECF1D5D8D7353698B94* L_3 = (&__this->___m_Data_0);
		int32_t L_4 = __this->___m_MinimumCapacity_3;
		NativeList_1_ResizeUninitialized_m753321DB060C4AAEC2ACD94AAC4D2766D52A821F(L_3, L_4, NativeList_1_ResizeUninitialized_m753321DB060C4AAEC2ACD94AAC4D2766D52A821F_RuntimeMethod_var);
		goto IL_0048;
	}

IL_0037:
	{
		// HeadIndex += size;
		int32_t L_5;
		L_5 = BatchedSendQueue_get_HeadIndex_m91CD2AD83101A70E26EF78B7460C36AC3C8F2C20(__this, NULL);
		int32_t L_6 = ___0_size;
		BatchedSendQueue_set_HeadIndex_m44301042025EB7BA0D7B95A4CD1AF41821E44A29(__this, ((int32_t)il2cpp_codegen_add(L_5, L_6)), NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void BatchedSendQueue_Consume_m27415A79D38546D9757A191041B1D4EC8165509A_AdjustorThunk (RuntimeObject* __this, int32_t ___0_size, const RuntimeMethod* method)
{
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988*>(__this + _offset);
	BatchedSendQueue_Consume_m27415A79D38546D9757A191041B1D4EC8165509A(_thisAdjusted, ___0_size, method);
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
// System.Void Unity.Netcode.Transports.UTP.SecretsLoaderHelper::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecretsLoaderHelper_Awake_mD0DE669368057A3BD8EA7E790DFC5EF19FA799CA (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisUnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_mDFDF528F272AEE465FED1CE8BB5330AA0F744D28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF258902371641A17276D7E53D25B16B6C26A890B);
		s_Il2CppMethodInitialized = true;
	}
	ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C V_0;
	memset((&V_0), 0, sizeof(V_0));
	ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F V_1;
	memset((&V_1), 0, sizeof(V_1));
	UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* V_2 = NULL;
	Exception_t* V_3 = NULL;
	Exception_t* V_4 = NULL;
	Exception_t* V_5 = NULL;
	Exception_t* V_6 = NULL;
	bool V_7 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// var serverSecrets = new ServerSecrets();
		il2cpp_codegen_initobj((&V_0), sizeof(ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C));
	}
	try
	{// begin try (depth: 1)
		// serverSecrets.ServerCertificate = ServerCertificate;
		String_t* L_0;
		L_0 = SecretsLoaderHelper_get_ServerCertificate_m17E07950D0BAE0F46481FD63731F00F964024023(__this, NULL);
		(&V_0)->___ServerCertificate_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___ServerCertificate_1), (void*)L_0);
		goto IL_0026;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_001a;
		}
		throw e;
	}

CATCH_001a:
	{// begin catch(System.Exception)
		// catch (Exception exception)
		V_3 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// Debug.Log(exception);
		Exception_t* L_1 = V_3;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_1, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0026;
	}// end catch (depth: 1)

IL_0026:
	{
	}
	try
	{// begin try (depth: 1)
		// serverSecrets.ServerPrivate = ServerPrivate;
		String_t* L_2;
		L_2 = SecretsLoaderHelper_get_ServerPrivate_mC64E26A2A2D022FA90E1D97ECBA6EC63988D55ED(__this, NULL);
		(&V_0)->___ServerPrivate_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___ServerPrivate_0), (void*)L_2);
		goto IL_0046;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0038;
		}
		throw e;
	}

CATCH_0038:
	{// begin catch(System.Exception)
		// catch (Exception exception)
		V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// Debug.Log(exception);
		Exception_t* L_3 = V_4;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_3, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0046;
	}// end catch (depth: 1)

IL_0046:
	{
		// var clientSecrets = new ClientSecrets();
		il2cpp_codegen_initobj((&V_1), sizeof(ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F));
	}
	try
	{// begin try (depth: 1)
		// clientSecrets.ClientCertificate = ClientCA;
		String_t* L_4;
		L_4 = SecretsLoaderHelper_get_ClientCA_mCD4313D71FDCA16695E86846C97ED8273E3D07E1(__this, NULL);
		(&V_1)->___ClientCertificate_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___ClientCertificate_1), (void*)L_4);
		goto IL_006d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_005f;
		}
		throw e;
	}

CATCH_005f:
	{// begin catch(System.Exception)
		// catch (Exception exception)
		V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// Debug.Log(exception);
		Exception_t* L_5 = V_5;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_5, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_006d;
	}// end catch (depth: 1)

IL_006d:
	{
	}
	try
	{// begin try (depth: 1)
		// clientSecrets.ServerCommonName = ServerCommonName;
		String_t* L_6;
		L_6 = SecretsLoaderHelper_get_ServerCommonName_m7757A0EB69519290091CFE45CFA5AA5704CE4326_inline(__this, NULL);
		(&V_1)->___ServerCommonName_0 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_1)->___ServerCommonName_0), (void*)L_6);
		goto IL_008d;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_007f;
		}
		throw e;
	}

CATCH_007f:
	{// begin catch(System.Exception)
		// catch (Exception exception)
		V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
		// Debug.Log(exception);
		Exception_t* L_7 = V_6;
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_008d;
	}// end catch (depth: 1)

IL_008d:
	{
		// var unityTransportComponent = GetComponent<UnityTransport>();
		UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* L_8;
		L_8 = Component_GetComponent_TisUnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_mDFDF528F272AEE465FED1CE8BB5330AA0F744D28(__this, Component_GetComponent_TisUnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_mDFDF528F272AEE465FED1CE8BB5330AA0F744D28_RuntimeMethod_var);
		V_2 = L_8;
		// if (unityTransportComponent == null)
		UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* L_9 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_7 = L_10;
		bool L_11 = V_7;
		if (!L_11)
		{
			goto IL_00af;
		}
	}
	{
		// Debug.LogError($"You need to select the UnityTransport protocol, in the NetworkManager, in order for the SecretsLoaderHelper component to be useful.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralF258902371641A17276D7E53D25B16B6C26A890B, NULL);
		// return;
		goto IL_00d5;
	}

IL_00af:
	{
		// unityTransportComponent.SetServerSecrets(serverSecrets.ServerCertificate, serverSecrets.ServerPrivate);
		UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* L_12 = V_2;
		ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C L_13 = V_0;
		String_t* L_14 = L_13.___ServerCertificate_1;
		ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C L_15 = V_0;
		String_t* L_16 = L_15.___ServerPrivate_0;
		NullCheck(L_12);
		UnityTransport_SetServerSecrets_m684BAAECD15C338E085AC16DB4CE73B1AA28E027(L_12, L_14, L_16, NULL);
		// unityTransportComponent.SetClientSecrets(clientSecrets.ServerCommonName, clientSecrets.ClientCertificate);
		UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* L_17 = V_2;
		ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F L_18 = V_1;
		String_t* L_19 = L_18.___ServerCommonName_0;
		ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F L_20 = V_1;
		String_t* L_21 = L_20.___ClientCertificate_1;
		NullCheck(L_17);
		UnityTransport_SetClientSecrets_mEF4456DE072468B4B0F3133CA9A61B32FFD3DCC5(L_17, L_19, L_21, NULL);
	}

IL_00d5:
	{
		// }
		return;
	}
}
// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::get_ServerCommonName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SecretsLoaderHelper_get_ServerCommonName_m7757A0EB69519290091CFE45CFA5AA5704CE4326 (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ServerCommonName;
		String_t* L_0 = __this->___m_ServerCommonName_4;
		return L_0;
	}
}
// System.Void Unity.Netcode.Transports.UTP.SecretsLoaderHelper::set_ServerCommonName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecretsLoaderHelper_set_ServerCommonName_mF5C925D49116E1C300E3D3D38B667CB49A45B243 (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_ServerCommonName = value;
		String_t* L_0 = ___0_value;
		__this->___m_ServerCommonName_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ServerCommonName_4), (void*)L_0);
		return;
	}
}
// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::get_ClientCAFilePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SecretsLoaderHelper_get_ClientCAFilePath_mA26003801EBE4D2769374C068E8AC49BA038A3A4 (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ClientCAFilePath;
		String_t* L_0 = __this->___m_ClientCAFilePath_5;
		return L_0;
	}
}
// System.Void Unity.Netcode.Transports.UTP.SecretsLoaderHelper::set_ClientCAFilePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecretsLoaderHelper_set_ClientCAFilePath_mD7C079046DC03F9F57DE16F68EFFA7E8EA1A4544 (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_ClientCAFilePath = value;
		String_t* L_0 = ___0_value;
		__this->___m_ClientCAFilePath_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ClientCAFilePath_5), (void*)L_0);
		return;
	}
}
// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::get_ClientCAOverride()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SecretsLoaderHelper_get_ClientCAOverride_m2CF26A176FFEFEB596DC782370A34DECD888AF79 (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ClientCAOverride;
		String_t* L_0 = __this->___m_ClientCAOverride_6;
		return L_0;
	}
}
// System.Void Unity.Netcode.Transports.UTP.SecretsLoaderHelper::set_ClientCAOverride(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecretsLoaderHelper_set_ClientCAOverride_m5F3085FC01FA644632DD140EDB26CCE1188ABE78 (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_ClientCAOverride = value;
		String_t* L_0 = ___0_value;
		__this->___m_ClientCAOverride_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ClientCAOverride_6), (void*)L_0);
		return;
	}
}
// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::get_ServerCertificateFilePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SecretsLoaderHelper_get_ServerCertificateFilePath_m1D50ADCE4A3ADB643EF5B319D0A4FC2447E2CE98 (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ServerCertificateFilePath;
		String_t* L_0 = __this->___m_ServerCertificateFilePath_7;
		return L_0;
	}
}
// System.Void Unity.Netcode.Transports.UTP.SecretsLoaderHelper::set_ServerCertificateFilePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecretsLoaderHelper_set_ServerCertificateFilePath_m850DFBC1A35878001CDE4EE10803DE7EB4412610 (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_ServerCertificateFilePath = value;
		String_t* L_0 = ___0_value;
		__this->___m_ServerCertificateFilePath_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ServerCertificateFilePath_7), (void*)L_0);
		return;
	}
}
// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::get_ServerPrivateFilePath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SecretsLoaderHelper_get_ServerPrivateFilePath_mAF26CA5AA6390A8973F691A068D53940A0316CB7 (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ServerPrivateFilePath;
		String_t* L_0 = __this->___m_ServerPrivateFilePath_8;
		return L_0;
	}
}
// System.Void Unity.Netcode.Transports.UTP.SecretsLoaderHelper::set_ServerPrivateFilePath(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecretsLoaderHelper_set_ServerPrivateFilePath_mF6AE970AABEFE64AFBA938955069FBB3CF6D2255 (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_ServerPrivate = value;
		String_t* L_0 = ___0_value;
		__this->___m_ServerPrivate_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ServerPrivate_11), (void*)L_0);
		return;
	}
}
// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::get_ClientCA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SecretsLoaderHelper_get_ClientCA_mCD4313D71FDCA16695E86846C97ED8273E3D07E1 (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9C52582463E83DEFCA4FAE51BCA879063462DA0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	{
		// if (m_ClientCAOverride != "")
		String_t* L_0 = __this->___m_ClientCAOverride_6;
		bool L_1;
		L_1 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// return m_ClientCAOverride;
		String_t* L_3 = __this->___m_ClientCAOverride_6;
		V_1 = L_3;
		goto IL_0032;
	}

IL_001f:
	{
		// return ReadFile(m_ClientCAFilePath, "Client Certificate");
		String_t* L_4 = __this->___m_ClientCAFilePath_5;
		String_t* L_5;
		L_5 = SecretsLoaderHelper_ReadFile_mDFF04D3D0602F3F2973F673741CDA4C128F1190A(L_4, _stringLiteralA9C52582463E83DEFCA4FAE51BCA879063462DA0, NULL);
		V_1 = L_5;
		goto IL_0032;
	}

IL_0032:
	{
		// }
		String_t* L_6 = V_1;
		return L_6;
	}
}
// System.Void Unity.Netcode.Transports.UTP.SecretsLoaderHelper::set_ClientCA(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecretsLoaderHelper_set_ClientCA_m529EDF51ACA147886C7E65892F4007A01D1EEBC6 (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_ClientCA = value;
		String_t* L_0 = ___0_value;
		__this->___m_ClientCA_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ClientCA_9), (void*)L_0);
		return;
	}
}
// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::get_ServerCertificate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SecretsLoaderHelper_get_ServerCertificate_m17E07950D0BAE0F46481FD63731F00F964024023 (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE132B6356450125CD39CFDC2E7AE7DFD49FA3F2D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => ReadFile(m_ServerCertificateFilePath, "Server Certificate");
		String_t* L_0 = __this->___m_ServerCertificateFilePath_7;
		String_t* L_1;
		L_1 = SecretsLoaderHelper_ReadFile_mDFF04D3D0602F3F2973F673741CDA4C128F1190A(L_0, _stringLiteralE132B6356450125CD39CFDC2E7AE7DFD49FA3F2D, NULL);
		return L_1;
	}
}
// System.Void Unity.Netcode.Transports.UTP.SecretsLoaderHelper::set_ServerCertificate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecretsLoaderHelper_set_ServerCertificate_m9F42351E69D51DF4B1415F52390CED03D2F315FA (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_ServerCertificate = value;
		String_t* L_0 = ___0_value;
		__this->___m_ServerCertificate_10 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ServerCertificate_10), (void*)L_0);
		return;
	}
}
// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::get_ServerPrivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SecretsLoaderHelper_get_ServerPrivate_mC64E26A2A2D022FA90E1D97ECBA6EC63988D55ED (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral357BFB1EF804083E0B58DA274A5B38ADF23E439E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// get => ReadFile(m_ServerPrivateFilePath, "Server Key");
		String_t* L_0 = __this->___m_ServerPrivateFilePath_8;
		String_t* L_1;
		L_1 = SecretsLoaderHelper_ReadFile_mDFF04D3D0602F3F2973F673741CDA4C128F1190A(L_0, _stringLiteral357BFB1EF804083E0B58DA274A5B38ADF23E439E, NULL);
		return L_1;
	}
}
// System.Void Unity.Netcode.Transports.UTP.SecretsLoaderHelper::set_ServerPrivate(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecretsLoaderHelper_set_ServerPrivate_m86ABFEA3A5AFD9BA34DB5D7E45B2DA1DDBED0143 (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, String_t* ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_ServerPrivate = value;
		String_t* L_0 = ___0_value;
		__this->___m_ServerPrivate_11 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ServerPrivate_11), (void*)L_0);
		return;
	}
}
// System.String Unity.Netcode.Transports.UTP.SecretsLoaderHelper::ReadFile(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SecretsLoaderHelper_ReadFile_mDFF04D3D0602F3F2973F673741CDA4C128F1190A (String_t* ___0_path, String_t* ___1_label, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BA280C4AC596D1757D38ADC504F4D2A8588BE09);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96C502F2672EE8CA635B0E03F0F848B19683110C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE40160D9DA52E2A9F3C180FBFDED668C63CED0AD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC81C1719B246FAF2B02FB9B639685CDC97C4C8D);
		s_Il2CppMethodInitialized = true;
	}
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	int32_t G_B3_0 = 0;
	String_t* G_B8_0 = NULL;
	{
		// if (path == null || path == "")
		String_t* L_0 = ___0_path;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___0_path;
		bool L_2;
		L_2 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_1, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, NULL);
		G_B3_0 = ((int32_t)(L_2));
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = 1;
	}

IL_0012:
	{
		V_2 = (bool)G_B3_0;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// return "";
		V_3 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		goto IL_0071;
	}

IL_001f:
	{
		// var reader = new StreamReader(path);
		String_t* L_4 = ___0_path;
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_5 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		StreamReader__ctor_m08BA7049EACE030ACE06AB8A8F2CDF2E2AFB55C6(L_5, L_4, NULL);
		V_0 = L_5;
		// string fileContent = reader.ReadToEnd();
		StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_6 = V_0;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(13 /* System.String System.IO.TextReader::ReadToEnd() */, L_6);
		V_1 = L_7;
		// Debug.Log((fileContent.Length > 1) ? ("Successfully loaded " + fileContent.Length + " byte(s) from " + label) : ("Could not read " + label + " file"));
		String_t* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		if ((((int32_t)L_9) > ((int32_t)1)))
		{
			goto IL_0048;
		}
	}
	{
		String_t* L_10 = ___1_label;
		String_t* L_11;
		L_11 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralFC81C1719B246FAF2B02FB9B639685CDC97C4C8D, L_10, _stringLiteral1BA280C4AC596D1757D38ADC504F4D2A8588BE09, NULL);
		G_B8_0 = L_11;
		goto IL_0067;
	}

IL_0048:
	{
		String_t* L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13;
		L_13 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_12, NULL);
		V_4 = L_13;
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_4), NULL);
		String_t* L_15 = ___1_label;
		String_t* L_16;
		L_16 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralE40160D9DA52E2A9F3C180FBFDED668C63CED0AD, L_14, _stringLiteral96C502F2672EE8CA635B0E03F0F848B19683110C, L_15, NULL);
		G_B8_0 = L_16;
	}

IL_0067:
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(G_B8_0, NULL);
		// return fileContent;
		String_t* L_17 = V_1;
		V_3 = L_17;
		goto IL_0071;
	}

IL_0071:
	{
		// }
		String_t* L_18 = V_3;
		return L_18;
	}
}
// System.Void Unity.Netcode.Transports.UTP.SecretsLoaderHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SecretsLoaderHelper__ctor_mF1115A4191D86771D43EED22B1A0B96415BC3BD5 (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FC154761871B7293BA5D77E57A16A71359FE4E5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string m_ServerCommonName = "localhost";
		__this->___m_ServerCommonName_4 = _stringLiteral5FC154761871B7293BA5D77E57A16A71359FE4E5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ServerCommonName_4), (void*)_stringLiteral5FC154761871B7293BA5D77E57A16A71359FE4E5);
		// private string m_ClientCAFilePath = ""; // "Assets/Secure/myGameClientCA.pem"
		__this->___m_ClientCAFilePath_5 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ClientCAFilePath_5), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// private string m_ClientCAOverride = "";
		__this->___m_ClientCAOverride_6 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ClientCAOverride_6), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// private string m_ServerCertificateFilePath = ""; // "Assets/Secure/myGameServerCertificate.pem"
		__this->___m_ServerCertificateFilePath_7 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ServerCertificateFilePath_7), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// private string m_ServerPrivateFilePath = ""; // "Assets/Secure/myGameServerPrivate.pem"
		__this->___m_ServerPrivateFilePath_8 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ServerPrivateFilePath_8), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// Conversion methods for marshalling of: Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ServerSecrets
IL2CPP_EXTERN_C void ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C_marshal_pinvoke(const ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C& unmarshaled, ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C_marshaled_pinvoke& marshaled)
{
	marshaled.___ServerPrivate_0 = il2cpp_codegen_marshal_string(unmarshaled.___ServerPrivate_0);
	marshaled.___ServerCertificate_1 = il2cpp_codegen_marshal_string(unmarshaled.___ServerCertificate_1);
}
IL2CPP_EXTERN_C void ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C_marshal_pinvoke_back(const ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C_marshaled_pinvoke& marshaled, ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C& unmarshaled)
{
	unmarshaled.___ServerPrivate_0 = il2cpp_codegen_marshal_string_result(marshaled.___ServerPrivate_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ServerPrivate_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___ServerPrivate_0));
	unmarshaled.___ServerCertificate_1 = il2cpp_codegen_marshal_string_result(marshaled.___ServerCertificate_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ServerCertificate_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___ServerCertificate_1));
}
// Conversion method for clean up from marshalling of: Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ServerSecrets
IL2CPP_EXTERN_C void ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C_marshal_pinvoke_cleanup(ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___ServerPrivate_0);
	marshaled.___ServerPrivate_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___ServerCertificate_1);
	marshaled.___ServerCertificate_1 = NULL;
}
// Conversion methods for marshalling of: Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ServerSecrets
IL2CPP_EXTERN_C void ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C_marshal_com(const ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C& unmarshaled, ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C_marshaled_com& marshaled)
{
	marshaled.___ServerPrivate_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___ServerPrivate_0);
	marshaled.___ServerCertificate_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___ServerCertificate_1);
}
IL2CPP_EXTERN_C void ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C_marshal_com_back(const ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C_marshaled_com& marshaled, ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C& unmarshaled)
{
	unmarshaled.___ServerPrivate_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___ServerPrivate_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ServerPrivate_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___ServerPrivate_0));
	unmarshaled.___ServerCertificate_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___ServerCertificate_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ServerCertificate_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___ServerCertificate_1));
}
// Conversion method for clean up from marshalling of: Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ServerSecrets
IL2CPP_EXTERN_C void ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C_marshal_com_cleanup(ServerSecrets_t1B158653389F99B639CFD4895A7EB3B55C02D49C_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___ServerPrivate_0);
	marshaled.___ServerPrivate_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___ServerCertificate_1);
	marshaled.___ServerCertificate_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ClientSecrets
IL2CPP_EXTERN_C void ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F_marshal_pinvoke(const ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F& unmarshaled, ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F_marshaled_pinvoke& marshaled)
{
	marshaled.___ServerCommonName_0 = il2cpp_codegen_marshal_string(unmarshaled.___ServerCommonName_0);
	marshaled.___ClientCertificate_1 = il2cpp_codegen_marshal_string(unmarshaled.___ClientCertificate_1);
}
IL2CPP_EXTERN_C void ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F_marshal_pinvoke_back(const ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F_marshaled_pinvoke& marshaled, ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F& unmarshaled)
{
	unmarshaled.___ServerCommonName_0 = il2cpp_codegen_marshal_string_result(marshaled.___ServerCommonName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ServerCommonName_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___ServerCommonName_0));
	unmarshaled.___ClientCertificate_1 = il2cpp_codegen_marshal_string_result(marshaled.___ClientCertificate_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ClientCertificate_1), (void*)il2cpp_codegen_marshal_string_result(marshaled.___ClientCertificate_1));
}
// Conversion method for clean up from marshalling of: Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ClientSecrets
IL2CPP_EXTERN_C void ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F_marshal_pinvoke_cleanup(ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___ServerCommonName_0);
	marshaled.___ServerCommonName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___ClientCertificate_1);
	marshaled.___ClientCertificate_1 = NULL;
}
// Conversion methods for marshalling of: Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ClientSecrets
IL2CPP_EXTERN_C void ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F_marshal_com(const ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F& unmarshaled, ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F_marshaled_com& marshaled)
{
	marshaled.___ServerCommonName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___ServerCommonName_0);
	marshaled.___ClientCertificate_1 = il2cpp_codegen_marshal_bstring(unmarshaled.___ClientCertificate_1);
}
IL2CPP_EXTERN_C void ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F_marshal_com_back(const ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F_marshaled_com& marshaled, ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F& unmarshaled)
{
	unmarshaled.___ServerCommonName_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___ServerCommonName_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ServerCommonName_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___ServerCommonName_0));
	unmarshaled.___ClientCertificate_1 = il2cpp_codegen_marshal_bstring_result(marshaled.___ClientCertificate_1);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ClientCertificate_1), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___ClientCertificate_1));
}
// Conversion method for clean up from marshalling of: Unity.Netcode.Transports.UTP.SecretsLoaderHelper/ClientSecrets
IL2CPP_EXTERN_C void ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F_marshal_com_cleanup(ClientSecrets_tCF0BB7296D9793A68810A4E62C4F0EAE3445D80F_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___ServerCommonName_0);
	marshaled.___ServerCommonName_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___ClientCertificate_1);
	marshaled.___ClientCertificate_1 = NULL;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Unity.Netcode.Transports.UTP.ErrorUtilities::ErrorToString(Unity.Networking.Transport.Error.StatusCode,System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ErrorUtilities_ErrorToString_m4343A44389AFF8060D72162538C2BCC1652C92E8 (int32_t ___0_error, uint64_t ___1_connectionId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StatusCode_tCFBABBFF302C8E7E77B398732A6D400AFFB4BF2A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StatusCode_tCFBABBFF302C8E7E77B398732A6D400AFFB4BF2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0E53A2AA9FD828494A9BF31B94B0FAF8E8C9E010);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EF5DFD670952324EE6B5D5D6E2A52DA67C831E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6587EEE90C057CAA8DD4C7422F92022B3DF93856);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral74EECF6D713962FF58F7C2337A079B5D38A6C2C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77FD1615569DBF8BA4087EE27ADBF29CF2A5B9E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral916C78519C75AA6AE931D2AD66B0DFAFC8EBEE40);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB5E80CC81E53D097220F05E05D90FE868A7865F9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC276BCE36EAE8E256DCDEEF94FFF8ED36F843BEB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDFC38B46CD0482AEB5A2A24BE8A5630ED20FDB8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF46C8C626B0603D18028124A986B1EB9408F2744);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	{
		// switch (error)
		int32_t L_0 = ___0_error;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, ((int32_t)-9))))
		{
			case 0:
			{
				goto IL_00a4;
			}
			case 1:
			{
				goto IL_009c;
			}
			case 2:
			{
				goto IL_0094;
			}
			case 3:
			{
				goto IL_008c;
			}
			case 4:
			{
				goto IL_0084;
			}
			case 5:
			{
				goto IL_007c;
			}
			case 6:
			{
				goto IL_0069;
			}
			case 7:
			{
				goto IL_0056;
			}
			case 8:
			{
				goto IL_0043;
			}
			case 9:
			{
				goto IL_0038;
			}
		}
	}
	{
		goto IL_00ac;
	}

IL_0038:
	{
		// return k_NetworkSuccess;
		V_2 = _stringLiteral6477FB0CBF4E978465F5CB8C51161A34304B3890;
		goto IL_00ce;
	}

IL_0043:
	{
		// return string.Format(k_NetworkIdMismatch, connectionId);
		uint64_t L_3 = ___1_connectionId;
		uint64_t L_4 = L_3;
		RuntimeObject* L_5 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_4);
		String_t* L_6;
		L_6 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral0E53A2AA9FD828494A9BF31B94B0FAF8E8C9E010, L_5, NULL);
		V_2 = L_6;
		goto IL_00ce;
	}

IL_0056:
	{
		// return string.Format(k_NetworkVersionMismatch, connectionId);
		uint64_t L_7 = ___1_connectionId;
		uint64_t L_8 = L_7;
		RuntimeObject* L_9 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_8);
		String_t* L_10;
		L_10 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralCDFC38B46CD0482AEB5A2A24BE8A5630ED20FDB8, L_9, NULL);
		V_2 = L_10;
		goto IL_00ce;
	}

IL_0069:
	{
		// return string.Format(k_NetworkStateMismatch, connectionId);
		uint64_t L_11 = ___1_connectionId;
		uint64_t L_12 = L_11;
		RuntimeObject* L_13 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14;
		L_14 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral916C78519C75AA6AE931D2AD66B0DFAFC8EBEE40, L_13, NULL);
		V_2 = L_14;
		goto IL_00ce;
	}

IL_007c:
	{
		// return k_NetworkPacketOverflow;
		V_2 = _stringLiteral77FD1615569DBF8BA4087EE27ADBF29CF2A5B9E3;
		goto IL_00ce;
	}

IL_0084:
	{
		// return k_NetworkSendQueueFull;
		V_2 = _stringLiteralC276BCE36EAE8E256DCDEEF94FFF8ED36F843BEB;
		goto IL_00ce;
	}

IL_008c:
	{
		// return k_NetworkHeaderInvalid;
		V_2 = _stringLiteral74EECF6D713962FF58F7C2337A079B5D38A6C2C7;
		goto IL_00ce;
	}

IL_0094:
	{
		// return k_NetworkDriverParallelForErr;
		V_2 = _stringLiteralB5E80CC81E53D097220F05E05D90FE868A7865F9;
		goto IL_00ce;
	}

IL_009c:
	{
		// return k_NetworkSendHandleInvalid;
		V_2 = _stringLiteral6587EEE90C057CAA8DD4C7422F92022B3DF93856;
		goto IL_00ce;
	}

IL_00a4:
	{
		// return k_NetworkArgumentMismatch;
		V_2 = _stringLiteralF46C8C626B0603D18028124A986B1EB9408F2744;
		goto IL_00ce;
	}

IL_00ac:
	{
		// return $"Unknown ErrorCode {Enum.GetName(typeof(Networking.Transport.Error.StatusCode), error)}";
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (StatusCode_tCFBABBFF302C8E7E77B398732A6D400AFFB4BF2A_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		int32_t L_17 = ___0_error;
		int32_t L_18 = L_17;
		RuntimeObject* L_19 = Box(StatusCode_tCFBABBFF302C8E7E77B398732A6D400AFFB4BF2A_il2cpp_TypeInfo_var, &L_18);
		il2cpp_codegen_runtime_class_init_inline(Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_il2cpp_TypeInfo_var);
		String_t* L_20;
		L_20 = Enum_GetName_m05FE85181853F756BA6BB2C033DD3590E6114D29(L_16, L_19, NULL);
		String_t* L_21;
		L_21 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral3EF5DFD670952324EE6B5D5D6E2A52DA67C831E9, L_20, NULL);
		V_2 = L_21;
		goto IL_00ce;
	}

IL_00ce:
	{
		// }
		String_t* L_22 = V_2;
		return L_22;
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
// Unity.Netcode.Transports.UTP.INetworkStreamDriverConstructor Unity.Netcode.Transports.UTP.UnityTransport::get_DriverConstructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityTransport_get_DriverConstructor_m87F5F253CC96D0739B5C93BE84A65A8851748461 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// public INetworkStreamDriverConstructor DriverConstructor => s_DriverConstructor ?? this;
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		RuntimeObject* L_0 = ((UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_StaticFields*)il2cpp_codegen_static_fields_for(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var))->___s_DriverConstructor_11;
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
	}
	{
		G_B2_0 = ((RuntimeObject*)(__this));
	}

IL_000a:
	{
		return G_B2_0;
	}
}
// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::get_MaxPacketQueueSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityTransport_get_MaxPacketQueueSize_mC13CE2EBBF0F7C51ABA961E6AB376FB8C8C7DFF5 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	{
		// get => m_MaxPacketQueueSize;
		int32_t L_0 = __this->___m_MaxPacketQueueSize_13;
		return L_0;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::set_MaxPacketQueueSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_set_MaxPacketQueueSize_m9F9FC2E296E7D5207E4C8C1F6AC178C737925C5B (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_MaxPacketQueueSize = value;
		int32_t L_0 = ___0_value;
		__this->___m_MaxPacketQueueSize_13 = L_0;
		return;
	}
}
// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::get_MaxPayloadSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityTransport_get_MaxPayloadSize_m0A3E0523AE7DED468B470B268DBBFCBADD44FC77 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	{
		// get => m_MaxPayloadSize;
		int32_t L_0 = __this->___m_MaxPayloadSize_14;
		return L_0;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::set_MaxPayloadSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_set_MaxPayloadSize_mB8DAA286A18CBB7BB6C106F2473C23E8F47C4410 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_MaxPayloadSize = value;
		int32_t L_0 = ___0_value;
		__this->___m_MaxPayloadSize_14 = L_0;
		return;
	}
}
// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::get_MaxSendQueueSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityTransport_get_MaxSendQueueSize_m94386ECF24A4CAD01D45992C5847073C7BB32426 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	{
		// get => m_MaxSendQueueSize;
		int32_t L_0 = __this->___m_MaxSendQueueSize_15;
		return L_0;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::set_MaxSendQueueSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_set_MaxSendQueueSize_m36EA903E2E61AD19A6811E3C0272DF22ABA569DC (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_MaxSendQueueSize = value;
		int32_t L_0 = ___0_value;
		__this->___m_MaxSendQueueSize_15 = L_0;
		return;
	}
}
// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::get_HeartbeatTimeoutMS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityTransport_get_HeartbeatTimeoutMS_m6308B229D855B51E09EF35C9316AC01040B3A95D (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	{
		// get => m_HeartbeatTimeoutMS;
		int32_t L_0 = __this->___m_HeartbeatTimeoutMS_16;
		return L_0;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::set_HeartbeatTimeoutMS(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_set_HeartbeatTimeoutMS_m7320D864F3AB6CC0B9A1976E6E2E0F2E41F22D0F (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_HeartbeatTimeoutMS = value;
		int32_t L_0 = ___0_value;
		__this->___m_HeartbeatTimeoutMS_16 = L_0;
		return;
	}
}
// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::get_ConnectTimeoutMS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityTransport_get_ConnectTimeoutMS_m4C9FDA5A88F2CF8E257E57D847993EA53485077E (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ConnectTimeoutMS;
		int32_t L_0 = __this->___m_ConnectTimeoutMS_17;
		return L_0;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::set_ConnectTimeoutMS(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_set_ConnectTimeoutMS_mA22CAB7EB21E092F550378931530C73B312007F0 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_ConnectTimeoutMS = value;
		int32_t L_0 = ___0_value;
		__this->___m_ConnectTimeoutMS_17 = L_0;
		return;
	}
}
// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::get_MaxConnectAttempts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityTransport_get_MaxConnectAttempts_mE7B28453B6028FC4F9BF60E8C90B8D1B3B2DBC2F (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	{
		// get => m_MaxConnectAttempts;
		int32_t L_0 = __this->___m_MaxConnectAttempts_18;
		return L_0;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::set_MaxConnectAttempts(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_set_MaxConnectAttempts_mAC9DF28461C83520F1B109C3466C1ACFA52AE3F5 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_MaxConnectAttempts = value;
		int32_t L_0 = ___0_value;
		__this->___m_MaxConnectAttempts_18 = L_0;
		return;
	}
}
// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::get_DisconnectTimeoutMS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityTransport_get_DisconnectTimeoutMS_mC58096ACB706C41555B365BD77A65021AAD3C486 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	{
		// get => m_DisconnectTimeoutMS;
		int32_t L_0 = __this->___m_DisconnectTimeoutMS_19;
		return L_0;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::set_DisconnectTimeoutMS(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_set_DisconnectTimeoutMS_m7408E6D445D8197BE24F9FD57FA5815C2D225ED5 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// set => m_DisconnectTimeoutMS = value;
		int32_t L_0 = ___0_value;
		__this->___m_DisconnectTimeoutMS_19 = L_0;
		return;
	}
}
// System.Nullable`1<System.UInt32> Unity.Netcode.Transports.UTP.UnityTransport::get_DebugSimulatorRandomSeed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 UnityTransport_get_DebugSimulatorRandomSeed_m4C482F701019EFFA6017A5FAE91F2458BEF684FE (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	{
		// internal uint? DebugSimulatorRandomSeed { get; set; } = null;
		Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 L_0 = __this->___U3CDebugSimulatorRandomSeedU3Ek__BackingField_22;
		return L_0;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::set_DebugSimulatorRandomSeed(System.Nullable`1<System.UInt32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_set_DebugSimulatorRandomSeed_mAEF0C85E1B5CF6DF22484977AC4F28DD3BE2509E (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 ___0_value, const RuntimeMethod* method) 
{
	{
		// internal uint? DebugSimulatorRandomSeed { get; set; } = null;
		Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 L_0 = ___0_value;
		__this->___U3CDebugSimulatorRandomSeedU3Ek__BackingField_22 = L_0;
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::add_TransportInitialized(System.Action`2<System.Int32,Unity.Networking.Transport.NetworkDriver>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_add_TransportInitialized_m1D6A6DC9236B0F12093B10F3A044D4CCFE41C808 (Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* V_0 = NULL;
	Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* V_1 = NULL;
	Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_0 = ((UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_StaticFields*)il2cpp_codegen_static_fields_for(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var))->___TransportInitialized_23;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_1 = V_0;
		V_1 = L_1;
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_2 = V_1;
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603*)Castclass((RuntimeObject*)L_4, Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_5 = V_2;
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_6 = V_1;
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603*>((&((UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_StaticFields*)il2cpp_codegen_static_fields_for(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var))->___TransportInitialized_23), L_5, L_6);
		V_0 = L_7;
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_8 = V_0;
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603*)L_8) == ((RuntimeObject*)(Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::remove_TransportInitialized(System.Action`2<System.Int32,Unity.Networking.Transport.NetworkDriver>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_remove_TransportInitialized_mA9097C55FB17D221BA959457DEA2E03C32835FD5 (Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* V_0 = NULL;
	Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* V_1 = NULL;
	Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_0 = ((UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_StaticFields*)il2cpp_codegen_static_fields_for(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var))->___TransportInitialized_23;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_1 = V_0;
		V_1 = L_1;
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_2 = V_1;
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603*)Castclass((RuntimeObject*)L_4, Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_5 = V_2;
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_6 = V_1;
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603*>((&((UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_StaticFields*)il2cpp_codegen_static_fields_for(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var))->___TransportInitialized_23), L_5, L_6);
		V_0 = L_7;
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_8 = V_0;
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603*)L_8) == ((RuntimeObject*)(Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::add_TransportDisposed(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_add_TransportDisposed_mFAC9F26B8F671544A590A518D103D17D6198668A (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_0 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_1 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = ((UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_StaticFields*)il2cpp_codegen_static_fields_for(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var))->___TransportDisposed_24;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = V_0;
		V_1 = L_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_2 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Combine_m1F725AEF318BE6F0426863490691A6F4606E7D00(L_2, L_3, NULL);
		V_2 = ((Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)Castclass((RuntimeObject*)L_4, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_5 = V_2;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_6 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*>((&((UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_StaticFields*)il2cpp_codegen_static_fields_for(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var))->___TransportDisposed_24), L_5, L_6);
		V_0 = L_7;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_8 = V_0;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_8) == ((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::remove_TransportDisposed(System.Action`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_remove_TransportDisposed_mF3F41C8A345D5BD55A8B370119DD047FD3518649 (Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_0 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_1 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* V_2 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_0 = ((UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_StaticFields*)il2cpp_codegen_static_fields_for(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var))->___TransportDisposed_24;
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_1 = V_0;
		V_1 = L_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_2 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_3 = ___0_value;
		Delegate_t* L_4;
		L_4 = Delegate_Remove_m8B7DD5661308FA972E23CA1CC3FC9CEB355504E3(L_2, L_3, NULL);
		V_2 = ((Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)Castclass((RuntimeObject*)L_4, Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404_il2cpp_TypeInfo_var));
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_5 = V_2;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_6 = V_1;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_7;
		L_7 = InterlockedCompareExchangeImpl<Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*>((&((UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_StaticFields*)il2cpp_codegen_static_fields_for(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var))->___TransportDisposed_24), L_5, L_6);
		V_0 = L_7;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_8 = V_0;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_8) == ((RuntimeObject*)(Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404*)L_9))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// Unity.Networking.Transport.NetworkDriver Unity.Netcode.Transports.UTP.UnityTransport::get_NetworkDriver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036 UnityTransport_get_NetworkDriver_m47D16CBF8A15BF7D86BFC276040B31046E38926D (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	{
		// internal NetworkDriver NetworkDriver => m_Driver;
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036 L_0 = __this->___m_Driver_27;
		return L_0;
	}
}
// System.UInt64 Unity.Netcode.Transports.UTP.UnityTransport::get_ServerClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UnityTransport_get_ServerClientId_mCC6EA60FC2E9D11A04BB6F09A72C21BAD7782F65 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	{
		// public override ulong ServerClientId => m_ServerClientId;
		uint64_t L_0 = __this->___m_ServerClientId_29;
		return L_0;
	}
}
// Unity.Netcode.Transports.UTP.UnityTransport/ProtocolType Unity.Netcode.Transports.UTP.UnityTransport::get_Protocol()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityTransport_get_Protocol_mDC856C9295082D44BAD5585C803BC66716C8CBCD (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	{
		// public ProtocolType Protocol => m_ProtocolType;
		int32_t L_0 = __this->___m_ProtocolType_12;
		return L_0;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::InitDriver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_InitDriver_mB509E02E33E60F36C30B2DDAB377866ABEA22DEA (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INetworkStreamDriverConstructor_t18108EFD3B50331C2FC8D5A90A48A345B33991EA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* G_B2_0 = NULL;
	Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* G_B1_0 = NULL;
	{
		// DriverConstructor.CreateDriver(
		//     this,
		//     out m_Driver,
		//     out m_UnreliableFragmentedPipeline,
		//     out m_UnreliableSequencedFragmentedPipeline,
		//     out m_ReliableSequencedPipeline);
		RuntimeObject* L_0;
		L_0 = UnityTransport_get_DriverConstructor_m87F5F253CC96D0739B5C93BE84A65A8851748461(__this, NULL);
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_1 = (&__this->___m_Driver_27);
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* L_2 = (&__this->___m_UnreliableFragmentedPipeline_30);
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* L_3 = (&__this->___m_UnreliableSequencedFragmentedPipeline_31);
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* L_4 = (&__this->___m_ReliableSequencedPipeline_32);
		NullCheck(L_0);
		InterfaceActionInvoker5< UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4*, NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036*, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69*, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69*, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* >::Invoke(0 /* System.Void Unity.Netcode.Transports.UTP.INetworkStreamDriverConstructor::CreateDriver(Unity.Netcode.Transports.UTP.UnityTransport,Unity.Networking.Transport.NetworkDriver&,Unity.Networking.Transport.NetworkPipeline&,Unity.Networking.Transport.NetworkPipeline&,Unity.Networking.Transport.NetworkPipeline&) */, INetworkStreamDriverConstructor_t18108EFD3B50331C2FC8D5A90A48A345B33991EA_il2cpp_TypeInfo_var, L_0, __this, L_1, L_2, L_3, L_4);
		// TransportInitialized?.Invoke(GetInstanceID(), NetworkDriver);
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_5 = ((UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_StaticFields*)il2cpp_codegen_static_fields_for(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var))->___TransportInitialized_23;
		Action_2_tAE8A107BF234FA7C2417606ABD3072F6728F8603* L_6 = L_5;
		G_B1_0 = L_6;
		if (L_6)
		{
			G_B2_0 = L_6;
			goto IL_0031;
		}
	}
	{
		goto IL_0043;
	}

IL_0031:
	{
		int32_t L_7;
		L_7 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(__this, NULL);
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036 L_8;
		L_8 = UnityTransport_get_NetworkDriver_m47D16CBF8A15BF7D86BFC276040B31046E38926D_inline(__this, NULL);
		NullCheck(G_B2_0);
		Action_2_Invoke_mD7C393AE045EF225975A8BF6B27887913C28A829_inline(G_B2_0, L_7, L_8, NULL);
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::DisposeInternals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_DisposeInternals_mF5FB50D48F59B47C7FD498535BCE4A6933874303 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m5050A8ED598E870BB3A292F60CA8F125B0AA6A80_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m26BDE98ADDE2424456D95202ABA0BAA1D30E079B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m52C4A26A0A38F9BB56472580045AFD70BEEEC6AE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m62407660FD405CD79B4C3DE43D8D0CC99E4A530B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m33D28F03A09CA0F36EACEBC301F4F41BEBDB3A4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ValueCollection_GetEnumerator_m3DED007ABC7D6210DF9239B5958ED9A64AD1733D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t78A82A05AC2820BE318F9F3DAD0F9B1802CB97FB V_1;
	memset((&V_1), 0, sizeof(V_1));
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* G_B10_0 = NULL;
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* G_B9_0 = NULL;
	{
		// if (m_Driver.IsCreated)
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_0 = (&__this->___m_Driver_27);
		bool L_1;
		L_1 = NetworkDriver_get_IsCreated_m006F28C4A90B06A10CD0A09865C6F66C95B6142D(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// m_Driver.Dispose();
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_3 = (&__this->___m_Driver_27);
		NetworkDriver_Dispose_m2B995E03ECC8DE8FFAD368C217B6D6B47367E28D(L_3, NULL);
	}

IL_001e:
	{
		// m_NetworkSettings.Dispose();
		NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* L_4 = (&__this->___m_NetworkSettings_28);
		NetworkSettings_Dispose_m2D73A6555834E52D4631863324D4FA79F1B696FD(L_4, NULL);
		// foreach (var queue in m_SendQueue.Values)
		Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* L_5 = __this->___m_SendQueue_35;
		NullCheck(L_5);
		ValueCollection_t3AB61A931E9B85D29A0A11FA6952A3775A93944D* L_6;
		L_6 = Dictionary_2_get_Values_m26BDE98ADDE2424456D95202ABA0BAA1D30E079B(L_5, Dictionary_2_get_Values_m26BDE98ADDE2424456D95202ABA0BAA1D30E079B_RuntimeMethod_var);
		NullCheck(L_6);
		Enumerator_t78A82A05AC2820BE318F9F3DAD0F9B1802CB97FB L_7;
		L_7 = ValueCollection_GetEnumerator_m3DED007ABC7D6210DF9239B5958ED9A64AD1733D(L_6, ValueCollection_GetEnumerator_m3DED007ABC7D6210DF9239B5958ED9A64AD1733D_RuntimeMethod_var);
		V_1 = L_7;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m52C4A26A0A38F9BB56472580045AFD70BEEEC6AE((&V_1), Enumerator_Dispose_m52C4A26A0A38F9BB56472580045AFD70BEEEC6AE_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0050_1;
			}

IL_003e_1:
			{
				// foreach (var queue in m_SendQueue.Values)
				BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 L_8;
				L_8 = Enumerator_get_Current_m33D28F03A09CA0F36EACEBC301F4F41BEBDB3A4D_inline((&V_1), Enumerator_get_Current_m33D28F03A09CA0F36EACEBC301F4F41BEBDB3A4D_RuntimeMethod_var);
				V_2 = L_8;
				// queue.Dispose();
				BatchedSendQueue_Dispose_mD4F40F358E16AD02B90DF571E134D2A08526CD7C((&V_2), NULL);
			}

IL_0050_1:
			{
				// foreach (var queue in m_SendQueue.Values)
				bool L_9;
				L_9 = Enumerator_MoveNext_m62407660FD405CD79B4C3DE43D8D0CC99E4A530B((&V_1), Enumerator_MoveNext_m62407660FD405CD79B4C3DE43D8D0CC99E4A530B_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_003e_1;
				}
			}
			{
				goto IL_006a;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_006a:
	{
		// m_SendQueue.Clear();
		Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* L_10 = __this->___m_SendQueue_35;
		NullCheck(L_10);
		Dictionary_2_Clear_m5050A8ED598E870BB3A292F60CA8F125B0AA6A80(L_10, Dictionary_2_Clear_m5050A8ED598E870BB3A292F60CA8F125B0AA6A80_RuntimeMethod_var);
		// TransportDisposed?.Invoke(GetInstanceID());
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_11 = ((UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_StaticFields*)il2cpp_codegen_static_fields_for(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var))->___TransportDisposed_24;
		Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* L_12 = L_11;
		G_B9_0 = L_12;
		if (L_12)
		{
			G_B10_0 = L_12;
			goto IL_0081;
		}
	}
	{
		goto IL_008d;
	}

IL_0081:
	{
		int32_t L_13;
		L_13 = Object_GetInstanceID_m554FF4073C9465F3835574CC084E68AAEEC6CC6A(__this, NULL);
		NullCheck(G_B10_0);
		Action_1_Invoke_mAC3C34BA1905AB5B79E483CD9BB082B7D667F703_inline(G_B10_0, L_13, NULL);
	}

IL_008d:
	{
		// }
		return;
	}
}
// Unity.Networking.Transport.NetworkPipeline Unity.Netcode.Transports.UTP.UnityTransport::SelectSendPipeline(Unity.Netcode.NetworkDelivery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 UnityTransport_SelectSendPipeline_m30254C6AD763FA133356411D218D998CC9C03E91 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, int32_t ___0_delivery, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkDelivery_t8AEDF5FAB32A531130149F7D6D89023D3164D6AD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A2B729244E3D5A04BA740FAA8DCEE1B8DDBA97E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CA9192249DD16DC6C6336314648F0964730DA50);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// switch (delivery)
		int32_t L_0 = ___0_delivery;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0021;
			}
			case 1:
			{
				goto IL_002a;
			}
			case 2:
			{
				goto IL_0033;
			}
			case 3:
			{
				goto IL_0033;
			}
			case 4:
			{
				goto IL_0033;
			}
		}
	}
	{
		goto IL_003c;
	}

IL_0021:
	{
		// return m_UnreliableFragmentedPipeline;
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_3 = __this->___m_UnreliableFragmentedPipeline_30;
		V_2 = L_3;
		goto IL_005f;
	}

IL_002a:
	{
		// return m_UnreliableSequencedFragmentedPipeline;
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_4 = __this->___m_UnreliableSequencedFragmentedPipeline_31;
		V_2 = L_4;
		goto IL_005f;
	}

IL_0033:
	{
		// return m_ReliableSequencedPipeline;
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_5 = __this->___m_ReliableSequencedPipeline_32;
		V_2 = L_5;
		goto IL_005f;
	}

IL_003c:
	{
		// Debug.LogError($"Unknown {nameof(NetworkDelivery)} value: {delivery}");
		int32_t L_6 = ___0_delivery;
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = Box(NetworkDelivery_t8AEDF5FAB32A531130149F7D6D89023D3164D6AD_il2cpp_TypeInfo_var, &L_7);
		String_t* L_9;
		L_9 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral0A2B729244E3D5A04BA740FAA8DCEE1B8DDBA97E, _stringLiteral9CA9192249DD16DC6C6336314648F0964730DA50, L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_9, NULL);
		// return NetworkPipeline.Null;
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_10;
		L_10 = NetworkPipeline_get_Null_m2A86DFD59FADE78775823D6AB411F3F968BBB00D(NULL);
		V_2 = L_10;
		goto IL_005f;
	}

IL_005f:
	{
		// }
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_11 = V_2;
		return L_11;
	}
}
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport::ClientBindAndConnect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityTransport_ClientBindAndConnect_m314FF705C9FCF4363F289CDD4674F179E8203BDF (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35C06E70CFFAB6D4B1FA8BA3D4CC946B326C7AD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8C6E6FB0B33E536831D450A46311D742B6E95C1);
		s_Il2CppMethodInitialized = true;
	}
	NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 V_0;
	memset((&V_0), 0, sizeof(V_0));
	NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	bool V_8 = false;
	NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	{
		// var serverEndpoint = default(NetworkEndpoint);
		il2cpp_codegen_initobj((&V_0), sizeof(NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63));
		// if (m_ProtocolType == ProtocolType.RelayUnityTransport)
		int32_t L_0 = __this->___m_ProtocolType_12;
		V_4 = (bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0);
		bool L_1 = V_4;
		if (!L_1)
		{
			goto IL_007a;
		}
	}
	{
		// if (m_RelayServerData.Equals(default(RelayServerData)))
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09* L_2 = (&__this->___m_RelayServerData_33);
		il2cpp_codegen_initobj((&V_6), sizeof(RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09));
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09 L_3 = V_6;
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09 L_4 = L_3;
		RuntimeObject* L_5 = Box(RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09_il2cpp_TypeInfo_var, &L_4);
		Il2CppFakeBox<RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09> L_6(RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09_il2cpp_TypeInfo_var, L_2);
		bool L_7;
		L_7 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_6), L_5, NULL);
		V_5 = L_7;
		bool L_8 = V_5;
		if (!L_8)
		{
			goto IL_0053;
		}
	}
	{
		// Debug.LogError("You must call SetRelayServerData() at least once before calling StartRelayServer.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralB8C6E6FB0B33E536831D450A46311D742B6E95C1, NULL);
		// return false;
		V_7 = (bool)0;
		goto IL_00ed;
	}

IL_0053:
	{
		// m_NetworkSettings.WithRelayParameters(ref m_RelayServerData, m_HeartbeatTimeoutMS);
		NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* L_9 = (&__this->___m_NetworkSettings_28);
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09* L_10 = (&__this->___m_RelayServerData_33);
		int32_t L_11 = __this->___m_HeartbeatTimeoutMS_16;
		NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* L_12;
		L_12 = RelayParameterExtensions_WithRelayParameters_m8025C21B35FAD6E160B05C727131152D372D3F0F(L_9, L_10, L_11, NULL);
		// serverEndpoint = m_RelayServerData.Endpoint;
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09* L_13 = (&__this->___m_RelayServerData_33);
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_14 = L_13->___Endpoint_0;
		V_0 = L_14;
		goto IL_0088;
	}

IL_007a:
	{
		// serverEndpoint = ConnectionData.ServerEndPoint;
		ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865* L_15 = (&__this->___ConnectionData_20);
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_16;
		L_16 = ConnectionAddressData_get_ServerEndPoint_m86FC9C426088E6F206D0D1FBE1574A0BCBF6439C(L_15, NULL);
		V_0 = L_16;
	}

IL_0088:
	{
		// InitDriver();
		UnityTransport_InitDriver_mB509E02E33E60F36C30B2DDAB377866ABEA22DEA(__this, NULL);
		// var bindEndpoint = serverEndpoint.Family == NetworkFamily.Ipv6 ? NetworkEndpoint.AnyIpv6 : NetworkEndpoint.AnyIpv4;
		int32_t L_17;
		L_17 = NetworkEndPoint_get_Family_mD65C497E01B38CF8F1E4EB94B50A1E7E6CF5BE5E((&V_0), NULL);
		if ((((int32_t)L_17) == ((int32_t)((int32_t)23))))
		{
			goto IL_00a1;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63_il2cpp_TypeInfo_var);
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_18;
		L_18 = NetworkEndPoint_get_AnyIpv4_m9E44E70ACE51BA65B73BBF8217835C6669D0927D(NULL);
		G_B8_0 = L_18;
		goto IL_00a6;
	}

IL_00a1:
	{
		il2cpp_codegen_runtime_class_init_inline(NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63_il2cpp_TypeInfo_var);
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_19;
		L_19 = NetworkEndPoint_get_AnyIpv6_mC4CE165BBEF5C10339B7CE69AF44BDBFFE84DA24(NULL);
		G_B8_0 = L_19;
	}

IL_00a6:
	{
		V_1 = G_B8_0;
		// int result = m_Driver.Bind(bindEndpoint);
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_20 = (&__this->___m_Driver_27);
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_21 = V_1;
		int32_t L_22;
		L_22 = NetworkDriver_Bind_m994686C7645A1A631C8A4B74B5E508ECB062C771(L_20, L_21, NULL);
		V_2 = L_22;
		// if (result != 0)
		int32_t L_23 = V_2;
		V_8 = (bool)((!(((uint32_t)L_23) <= ((uint32_t)0)))? 1 : 0);
		bool L_24 = V_8;
		if (!L_24)
		{
			goto IL_00cf;
		}
	}
	{
		// Debug.LogError("Client failed to bind");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral35C06E70CFFAB6D4B1FA8BA3D4CC946B326C7AD6, NULL);
		// return false;
		V_7 = (bool)0;
		goto IL_00ed;
	}

IL_00cf:
	{
		// var serverConnection = m_Driver.Connect(serverEndpoint);
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_25 = (&__this->___m_Driver_27);
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_26 = V_0;
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_27;
		L_27 = NetworkDriver_Connect_m135819C4EE07E41AE102BC66C00BE43DEB454FCE(L_25, L_26, NULL);
		V_3 = L_27;
		// m_ServerClientId = ParseClientId(serverConnection);
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_28 = V_3;
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		uint64_t L_29;
		L_29 = UnityTransport_ParseClientId_mD0481F6EE16C9EA9CCA32FFA624FF0B89D8E69AE(L_28, NULL);
		__this->___m_ServerClientId_29 = L_29;
		// return true;
		V_7 = (bool)1;
		goto IL_00ed;
	}

IL_00ed:
	{
		// }
		bool L_30 = V_7;
		return L_30;
	}
}
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport::ServerBindAndListen(Unity.Networking.Transport.NetworkEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityTransport_ServerBindAndListen_mB644AE979C589A568E8AB675D01CCABFAF02446F (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ___0_endPoint, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral664CAAFE95F7B5E13A988EDD87F1858E9E2DC07B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD3F9A9908AD3B170B6FC7FE9CCF51827F5D60E4);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// InitDriver();
		UnityTransport_InitDriver_mB509E02E33E60F36C30B2DDAB377866ABEA22DEA(__this, NULL);
		// int result = m_Driver.Bind(endPoint);
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_0 = (&__this->___m_Driver_27);
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_1 = ___0_endPoint;
		int32_t L_2;
		L_2 = NetworkDriver_Bind_m994686C7645A1A631C8A4B74B5E508ECB062C771(L_0, L_1, NULL);
		V_0 = L_2;
		// if (result != 0)
		int32_t L_3 = V_0;
		V_1 = (bool)((!(((uint32_t)L_3) <= ((uint32_t)0)))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002d;
		}
	}
	{
		// Debug.LogError("Server failed to bind");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralAD3F9A9908AD3B170B6FC7FE9CCF51827F5D60E4, NULL);
		// return false;
		V_2 = (bool)0;
		goto IL_005c;
	}

IL_002d:
	{
		// result = m_Driver.Listen();
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_5 = (&__this->___m_Driver_27);
		int32_t L_6;
		L_6 = NetworkDriver_Listen_m9673394E3D802D8A4FD978682B4AFDC19B0C7020(L_5, NULL);
		V_0 = L_6;
		// if (result != 0)
		int32_t L_7 = V_0;
		V_3 = (bool)((!(((uint32_t)L_7) <= ((uint32_t)0)))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0051;
		}
	}
	{
		// Debug.LogError("Server failed to listen");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral664CAAFE95F7B5E13A988EDD87F1858E9E2DC07B, NULL);
		// return false;
		V_2 = (bool)0;
		goto IL_005c;
	}

IL_0051:
	{
		// m_State = State.Listening;
		__this->___m_State_26 = 1;
		// return true;
		V_2 = (bool)1;
		goto IL_005c;
	}

IL_005c:
	{
		// }
		bool L_9 = V_2;
		return L_9;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SetProtocol(Unity.Netcode.Transports.UTP.UnityTransport/ProtocolType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SetProtocol_mAE283237461395BF44FC7AF6654254F62D67A3C3 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, int32_t ___0_inProtocol, const RuntimeMethod* method) 
{
	{
		// m_ProtocolType = inProtocol;
		int32_t L_0 = ___0_inProtocol;
		__this->___m_ProtocolType_12 = L_0;
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SetRelayServerData(System.String,System.UInt16,System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SetRelayServerData_m512E33CBD4BAF9DC1A743BDF16C55EA6B82461F0 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, String_t* ___0_ipv4Address, uint16_t ___1_port, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_allocationIdBytes, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_keyBytes, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_connectionDataBytes, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_hostConnectionDataBytes, bool ___6_isSecure, const RuntimeMethod* method) 
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B2_0 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* G_B1_0 = NULL;
	{
		// var hostConnectionData = hostConnectionDataBytes ?? connectionDataBytes;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = ___5_hostConnectionDataBytes;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0009;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___4_connectionDataBytes;
		G_B2_0 = L_2;
	}

IL_0009:
	{
		V_0 = G_B2_0;
		// m_RelayServerData = new RelayServerData(ipv4Address, port, allocationIdBytes, connectionDataBytes, hostConnectionData, keyBytes, isSecure);
		String_t* L_3 = ___0_ipv4Address;
		uint16_t L_4 = ___1_port;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___2_allocationIdBytes;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = ___4_connectionDataBytes;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_7 = V_0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_8 = ___3_keyBytes;
		bool L_9 = ___6_isSecure;
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09 L_10;
		memset((&L_10), 0, sizeof(L_10));
		RelayServerData__ctor_m039E25DA5133BDFB0F8C29E4C721A792C7C46042((&L_10), L_3, L_4, L_5, L_6, L_7, L_8, L_9, /*hidden argument*/NULL);
		__this->___m_RelayServerData_33 = L_10;
		// SetProtocol(ProtocolType.RelayUnityTransport);
		UnityTransport_SetProtocol_mAE283237461395BF44FC7AF6654254F62D67A3C3(__this, 1, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SetRelayServerData(Unity.Networking.Transport.Relay.RelayServerData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SetRelayServerData_m5ECB5AF89AEFCDF25BD0C7ABF37DB6731DF5C312 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09 ___0_serverData, const RuntimeMethod* method) 
{
	{
		// m_RelayServerData = serverData;
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09 L_0 = ___0_serverData;
		__this->___m_RelayServerData_33 = L_0;
		// SetProtocol(ProtocolType.RelayUnityTransport);
		UnityTransport_SetProtocol_mAE283237461395BF44FC7AF6654254F62D67A3C3(__this, 1, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SetHostRelayData(System.String,System.UInt16,System.Byte[],System.Byte[],System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SetHostRelayData_m89AD8AC44A31BF76DC1B936B31E3E89331735ACC (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, String_t* ___0_ipAddress, uint16_t ___1_port, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_allocationId, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_key, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_connectionData, bool ___5_isSecure, const RuntimeMethod* method) 
{
	{
		// SetRelayServerData(ipAddress, port, allocationId, key, connectionData, null, isSecure);
		String_t* L_0 = ___0_ipAddress;
		uint16_t L_1 = ___1_port;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_allocationId;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___3_key;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___4_connectionData;
		bool L_5 = ___5_isSecure;
		UnityTransport_SetRelayServerData_m512E33CBD4BAF9DC1A743BDF16C55EA6B82461F0(__this, L_0, L_1, L_2, L_3, L_4, (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)NULL, L_5, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SetClientRelayData(System.String,System.UInt16,System.Byte[],System.Byte[],System.Byte[],System.Byte[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SetClientRelayData_m69B1257AB81304EC6727B25101ABF25169E92C82 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, String_t* ___0_ipAddress, uint16_t ___1_port, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___2_allocationId, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___3_key, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___4_connectionData, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___5_hostConnectionData, bool ___6_isSecure, const RuntimeMethod* method) 
{
	{
		// SetRelayServerData(ipAddress, port, allocationId, key, connectionData, hostConnectionData, isSecure);
		String_t* L_0 = ___0_ipAddress;
		uint16_t L_1 = ___1_port;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = ___2_allocationId;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = ___3_key;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = ___4_connectionData;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = ___5_hostConnectionData;
		bool L_6 = ___6_isSecure;
		UnityTransport_SetRelayServerData_m512E33CBD4BAF9DC1A743BDF16C55EA6B82461F0(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SetConnectionData(System.String,System.UInt16,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SetConnectionData_m072363DFC264110D349C7D3F958E8464EB1B74CC (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, String_t* ___0_ipv4Address, uint16_t ___1_port, String_t* ___2_listenAddress, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865 V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* G_B2_0 = NULL;
	ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865* G_B2_1 = NULL;
	UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* G_B2_2 = NULL;
	String_t* G_B1_0 = NULL;
	ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865* G_B1_1 = NULL;
	UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* G_B1_2 = NULL;
	{
		// ConnectionData = new ConnectionAddressData
		// {
		//     Address = ipv4Address,
		//     Port = port,
		//     ServerListenAddress = listenAddress ?? string.Empty
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865));
		String_t* L_0 = ___0_ipv4Address;
		(&V_0)->___Address_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Address_0), (void*)L_0);
		uint16_t L_1 = ___1_port;
		(&V_0)->___Port_1 = L_1;
		String_t* L_2 = ___2_listenAddress;
		String_t* L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = (&V_0);
		G_B1_2 = __this;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = (&V_0);
			G_B2_2 = __this;
			goto IL_0026;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		G_B2_0 = L_4;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0026:
	{
		G_B2_1->___ServerListenAddress_2 = G_B2_0;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_1->___ServerListenAddress_2), (void*)G_B2_0);
		ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865 L_5 = V_0;
		NullCheck(G_B2_2);
		G_B2_2->___ConnectionData_20 = L_5;
		Il2CppCodeGenWriteBarrier((void**)&(((&G_B2_2->___ConnectionData_20))->___Address_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&G_B2_2->___ConnectionData_20))->___ServerListenAddress_2), (void*)NULL);
		#endif
		// SetProtocol(ProtocolType.UnityTransport);
		UnityTransport_SetProtocol_mAE283237461395BF44FC7AF6654254F62D67A3C3(__this, 0, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SetConnectionData(Unity.Networking.Transport.NetworkEndPoint,Unity.Networking.Transport.NetworkEndPoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SetConnectionData_mC635E5F6D3D308B6080633687EAF778DCB72807A (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ___0_endPoint, NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ___1_listenEndPoint, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A9746450EDAE716B0E0568BD80DF1E0892E43FB);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	bool V_2 = false;
	NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	{
		// string serverAddress = endPoint.Address.Split(':')[0];
		String_t* L_0;
		L_0 = NetworkEndPoint_get_Address_m8CB1DFBD3F0943AF98BC707EB0F942B698EE00E5((&___0_endPoint), NULL);
		NullCheck(L_0);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1;
		L_1 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_0, ((int32_t)58), 0, NULL);
		NullCheck(L_1);
		int32_t L_2 = 0;
		String_t* L_3 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		// string listenAddress = string.Empty;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		V_1 = L_4;
		// if (listenEndPoint != default)
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_5 = ___1_listenEndPoint;
		il2cpp_codegen_initobj((&V_3), sizeof(NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63));
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_6 = V_3;
		il2cpp_codegen_runtime_class_init_inline(NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = NetworkEndPoint_op_Inequality_m582DA760A6FE0C5119D41F5CE211A397FE07A384(L_5, L_6, NULL);
		V_2 = L_7;
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0083;
		}
	}
	{
		// listenAddress = listenEndPoint.Address.Split(':')[0];
		String_t* L_9;
		L_9 = NetworkEndPoint_get_Address_m8CB1DFBD3F0943AF98BC707EB0F942B698EE00E5((&___1_listenEndPoint), NULL);
		NullCheck(L_9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_10;
		L_10 = String_Split_m9530B73D02054692283BF35C3A27C8F2230946F4(L_9, ((int32_t)58), 0, NULL);
		NullCheck(L_10);
		int32_t L_11 = 0;
		String_t* L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_1 = L_12;
		// if (endPoint.Port != listenEndPoint.Port)
		uint16_t L_13;
		L_13 = NetworkEndPoint_get_Port_m92EFA89C28AE3EA5AF00CD0BC8DB7403897756EB((&___0_endPoint), NULL);
		uint16_t L_14;
		L_14 = NetworkEndPoint_get_Port_m92EFA89C28AE3EA5AF00CD0BC8DB7403897756EB((&___1_listenEndPoint), NULL);
		V_4 = (bool)((((int32_t)((((int32_t)L_13) == ((int32_t)L_14))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0082;
		}
	}
	{
		// Debug.LogError($"Port mismatch between server and listen endpoints ({endPoint.Port} vs {listenEndPoint.Port}).");
		uint16_t L_16;
		L_16 = NetworkEndPoint_get_Port_m92EFA89C28AE3EA5AF00CD0BC8DB7403897756EB((&___0_endPoint), NULL);
		uint16_t L_17 = L_16;
		RuntimeObject* L_18 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_17);
		uint16_t L_19;
		L_19 = NetworkEndPoint_get_Port_m92EFA89C28AE3EA5AF00CD0BC8DB7403897756EB((&___1_listenEndPoint), NULL);
		uint16_t L_20 = L_19;
		RuntimeObject* L_21 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_20);
		String_t* L_22;
		L_22 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral7A9746450EDAE716B0E0568BD80DF1E0892E43FB, L_18, L_21, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_22, NULL);
	}

IL_0082:
	{
	}

IL_0083:
	{
		// SetConnectionData(serverAddress, endPoint.Port, listenAddress);
		String_t* L_23 = V_0;
		uint16_t L_24;
		L_24 = NetworkEndPoint_get_Port_m92EFA89C28AE3EA5AF00CD0BC8DB7403897756EB((&___0_endPoint), NULL);
		String_t* L_25 = V_1;
		UnityTransport_SetConnectionData_m072363DFC264110D349C7D3F958E8464EB1B74CC(__this, L_23, L_24, L_25, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SetDebugSimulatorParameters(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SetDebugSimulatorParameters_m5CB0CEB4B3BEB77426DE36CC9C1654B3A9E2A9D3 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, int32_t ___0_packetDelay, int32_t ___1_packetJitter, int32_t ___2_dropRate, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6CBC2672C8D6CA64BE38741D0052878AD0261970);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	SimulatorParameters_tC3C55F01C7027F7CBEA00FBD6828ACBBE16F3A67 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (m_Driver.IsCreated)
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_0 = (&__this->___m_Driver_27);
		bool L_1;
		L_1 = NetworkDriver_get_IsCreated_m006F28C4A90B06A10CD0A09865C6F66C95B6142D(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// Debug.LogError("SetDebugSimulatorParameters() must be called before StartClient() or StartServer().");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral6CBC2672C8D6CA64BE38741D0052878AD0261970, NULL);
		// return;
		goto IL_0045;
	}

IL_001e:
	{
		// DebugSimulator = new SimulatorParameters
		// {
		//     PacketDelayMS = packetDelay,
		//     PacketJitterMS = packetJitter,
		//     PacketDropRate = dropRate
		// };
		il2cpp_codegen_initobj((&V_1), sizeof(SimulatorParameters_tC3C55F01C7027F7CBEA00FBD6828ACBBE16F3A67));
		int32_t L_3 = ___0_packetDelay;
		(&V_1)->___PacketDelayMS_0 = L_3;
		int32_t L_4 = ___1_packetJitter;
		(&V_1)->___PacketJitterMS_1 = L_4;
		int32_t L_5 = ___2_dropRate;
		(&V_1)->___PacketDropRate_2 = L_5;
		SimulatorParameters_tC3C55F01C7027F7CBEA00FBD6828ACBBE16F3A67 L_6 = V_1;
		__this->___DebugSimulator_21 = L_6;
	}

IL_0045:
	{
		// }
		return;
	}
}
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport::StartRelayServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityTransport_StartRelayServer_m6AABA070D1F162026424AF5D7DD02FD6C9227097 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB8C6E6FB0B33E536831D450A46311D742B6E95C1);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		// if (m_RelayServerData.Equals(default(RelayServerData)))
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09* L_0 = (&__this->___m_RelayServerData_33);
		il2cpp_codegen_initobj((&V_1), sizeof(RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09));
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09 L_1 = V_1;
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09 L_2 = L_1;
		RuntimeObject* L_3 = Box(RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09_il2cpp_TypeInfo_var, &L_2);
		Il2CppFakeBox<RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09> L_4(RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09_il2cpp_TypeInfo_var, L_0);
		bool L_5;
		L_5 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_4), L_3, NULL);
		V_0 = L_5;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0034;
		}
	}
	{
		// Debug.LogError("You must call SetRelayServerData() at least once before calling StartRelayServer.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralB8C6E6FB0B33E536831D450A46311D742B6E95C1, NULL);
		// return false;
		V_2 = (bool)0;
		goto IL_005b;
	}

IL_0034:
	{
		// m_NetworkSettings.WithRelayParameters(ref m_RelayServerData, m_HeartbeatTimeoutMS);
		NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* L_7 = (&__this->___m_NetworkSettings_28);
		RelayServerData_t8D74FE8A133FB1F7C1BF9C0D39C69B5A75F70F09* L_8 = (&__this->___m_RelayServerData_33);
		int32_t L_9 = __this->___m_HeartbeatTimeoutMS_16;
		NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* L_10;
		L_10 = RelayParameterExtensions_WithRelayParameters_m8025C21B35FAD6E160B05C727131152D372D3F0F(L_7, L_8, L_9, NULL);
		// return ServerBindAndListen(NetworkEndpoint.AnyIpv4);
		il2cpp_codegen_runtime_class_init_inline(NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63_il2cpp_TypeInfo_var);
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_11;
		L_11 = NetworkEndPoint_get_AnyIpv4_m9E44E70ACE51BA65B73BBF8217835C6669D0927D(NULL);
		bool L_12;
		L_12 = UnityTransport_ServerBindAndListen_mB644AE979C589A568E8AB675D01CCABFAF02446F(__this, L_11, NULL);
		V_2 = L_12;
		goto IL_005b;
	}

IL_005b:
	{
		// }
		bool L_13 = V_2;
		return L_13;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SendBatchedMessages(Unity.Netcode.Transports.UTP.UnityTransport/SendTarget,Unity.Netcode.Transports.UTP.BatchedSendQueue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SendBatchedMessages_m676B328E0E17B2E446769BEC8B541904CAF8C65A (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___0_sendTarget, BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 ___1_queue, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF44CEF834FB26EC61FA60F32770FB253815B666);
		s_Il2CppMethodInitialized = true;
	}
	uint64_t V_0 = 0;
	NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B6_0 = 0;
	{
		// var clientId = sendTarget.ClientId;
		SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_0 = ___0_sendTarget;
		uint64_t L_1 = L_0.___ClientId_0;
		V_0 = L_1;
		// var connection = ParseClientId(clientId);
		uint64_t L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_3;
		L_3 = UnityTransport_ParseClientId_m75436222E397B5D5BCCF778D71890A12F0E090E5(L_2, NULL);
		V_1 = L_3;
		// var pipeline = sendTarget.NetworkPipeline;
		SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_4 = ___0_sendTarget;
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_5 = L_4.___NetworkPipeline_1;
		V_2 = L_5;
		goto IL_00d4;
	}

IL_001b:
	{
		// var result = m_Driver.BeginSend(pipeline, connection, out var writer);
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_6 = (&__this->___m_Driver_27);
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_7 = V_2;
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_8 = V_1;
		int32_t L_9;
		L_9 = NetworkDriver_BeginSend_m21166BF86B424CA3C6550DC2FACE745E7D20218A(L_6, L_7, L_8, (&V_4), 0, NULL);
		V_3 = L_9;
		// if (result != (int)Networking.Transport.Error.StatusCode.Success)
		int32_t L_10 = V_3;
		V_6 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		bool L_11 = V_6;
		if (!L_11)
		{
			goto IL_0054;
		}
	}
	{
		// Debug.LogError("Error sending the message: " +
		//     ErrorUtilities.ErrorToString((Networking.Transport.Error.StatusCode)result, clientId));
		int32_t L_12 = V_3;
		uint64_t L_13 = V_0;
		String_t* L_14;
		L_14 = ErrorUtilities_ErrorToString_m4343A44389AFF8060D72162538C2BCC1652C92E8(L_12, L_13, NULL);
		String_t* L_15;
		L_15 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDF44CEF834FB26EC61FA60F32770FB253815B666, L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_15, NULL);
		// return;
		goto IL_00e7;
	}

IL_0054:
	{
		// var written = pipeline == m_ReliableSequencedPipeline ? queue.FillWriterWithBytes(ref writer) : queue.FillWriterWithMessages(ref writer);
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_16 = V_2;
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_17 = __this->___m_ReliableSequencedPipeline_32;
		bool L_18;
		L_18 = NetworkPipeline_op_Equality_mA9AE79BEA5C9AEEA5EBD0EA49EC22CAC387918D2(L_16, L_17, NULL);
		if (L_18)
		{
			goto IL_006d;
		}
	}
	{
		int32_t L_19;
		L_19 = BatchedSendQueue_FillWriterWithMessages_m1A6BE297B16C5E6BECF53F1108979256ECB1FBF4((&___1_queue), (&V_4), NULL);
		G_B6_0 = L_19;
		goto IL_0076;
	}

IL_006d:
	{
		int32_t L_20;
		L_20 = BatchedSendQueue_FillWriterWithBytes_mD06BD823D9E4782EE51937EE1103662A1F9F3DE3((&___1_queue), (&V_4), NULL);
		G_B6_0 = L_20;
	}

IL_0076:
	{
		V_5 = G_B6_0;
		// result = m_Driver.EndSend(writer);
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_21 = (&__this->___m_Driver_27);
		DataStreamWriter_t58BB6BA9D4C598E54C1B1E6D5B7511625C8EF6EA L_22 = V_4;
		int32_t L_23;
		L_23 = NetworkDriver_EndSend_m8F3C9019D168C63D011BF527ABB0C213C840C394(L_21, L_22, NULL);
		V_3 = L_23;
		// if (result == written)
		int32_t L_24 = V_3;
		int32_t L_25 = V_5;
		V_7 = (bool)((((int32_t)L_24) == ((int32_t)L_25))? 1 : 0);
		bool L_26 = V_7;
		if (!L_26)
		{
			goto IL_009f;
		}
	}
	{
		// queue.Consume(written);
		int32_t L_27 = V_5;
		BatchedSendQueue_Consume_m27415A79D38546D9757A191041B1D4EC8165509A((&___1_queue), L_27, NULL);
		goto IL_00d3;
	}

IL_009f:
	{
		// if (result != (int)Networking.Transport.Error.StatusCode.NetworkSendQueueFull)
		int32_t L_28 = V_3;
		V_8 = (bool)((((int32_t)((((int32_t)L_28) == ((int32_t)((int32_t)-5)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_8;
		if (!L_29)
		{
			goto IL_00d1;
		}
	}
	{
		// Debug.LogError("Error sending the message: " + ErrorUtilities.ErrorToString((Networking.Transport.Error.StatusCode)result, clientId));
		int32_t L_30 = V_3;
		uint64_t L_31 = V_0;
		String_t* L_32;
		L_32 = ErrorUtilities_ErrorToString_m4343A44389AFF8060D72162538C2BCC1652C92E8(L_30, L_31, NULL);
		String_t* L_33;
		L_33 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDF44CEF834FB26EC61FA60F32770FB253815B666, L_32, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_33, NULL);
		// queue.Consume(written);
		int32_t L_34 = V_5;
		BatchedSendQueue_Consume_m27415A79D38546D9757A191041B1D4EC8165509A((&___1_queue), L_34, NULL);
	}

IL_00d1:
	{
		// return;
		goto IL_00e7;
	}

IL_00d3:
	{
	}

IL_00d4:
	{
		// while (!queue.IsEmpty)
		bool L_35;
		L_35 = BatchedSendQueue_get_IsEmpty_m3036A22A4DAE86E6660B259E38AD2B0FBC21BD9C((&___1_queue), NULL);
		V_9 = (bool)((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_9;
		if (L_36)
		{
			goto IL_001b;
		}
	}

IL_00e7:
	{
		// }
		return;
	}
}
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport::AcceptConnection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityTransport_AcceptConnection_m14AA4E2915B8E5C2E6B8643A3C103EED242A928B (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var connection = m_Driver.Accept();
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_0 = (&__this->___m_Driver_27);
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_1;
		L_1 = NetworkDriver_Accept_m3F866B13DCB636206113E97EA279160AFDA789DB(L_0, NULL);
		V_0 = L_1;
		// if (connection == default)
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_2 = V_0;
		il2cpp_codegen_initobj((&V_2), sizeof(NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4));
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_3 = V_2;
		bool L_4;
		L_4 = NetworkConnection_op_Equality_m14044022C0D3C1DA3CF97186FCD59D88256F8202(L_2, L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0025;
		}
	}
	{
		// return false;
		V_3 = (bool)0;
		goto IL_0046;
	}

IL_0025:
	{
		// InvokeOnTransportEvent(NetcodeNetworkEvent.Connect,
		//     ParseClientId(connection),
		//     default,
		//     Time.realtimeSinceStartup);
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_6 = V_0;
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		uint64_t L_7;
		L_7 = UnityTransport_ParseClientId_mD0481F6EE16C9EA9CCA32FFA624FF0B89D8E69AE(L_6, NULL);
		il2cpp_codegen_initobj((&V_4), sizeof(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093));
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_8 = V_4;
		float L_9;
		L_9 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		NetworkTransport_InvokeOnTransportEvent_m56EFDDC779FB136044F3064BE9E68BF81EB9790F(__this, 1, L_7, L_8, L_9, NULL);
		// return true;
		V_3 = (bool)1;
		goto IL_0046;
	}

IL_0046:
	{
		// }
		bool L_10 = V_3;
		return L_10;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::ReceiveMessages(System.UInt64,Unity.Networking.Transport.NetworkPipeline,Unity.Networking.Transport.DataStreamReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_ReceiveMessages_mB3FBD7582B7E56D776F3869A236952701DC217D5 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, uint64_t ___0_clientId, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___1_pipeline, DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3 ___2_dataReader, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_op_Equality_m8DDD8A4F446528A05995B3A15AD7635E28FE244D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mD42C03F5079D71BA857313B0569975C6B8308ACF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m1F79B5C829C4A8219BEA6848A252669AD1032777_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	{
		// if (pipeline == m_ReliableSequencedPipeline)
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_0 = ___1_pipeline;
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_1 = __this->___m_ReliableSequencedPipeline_32;
		bool L_2;
		L_2 = NetworkPipeline_op_Equality_mA9AE79BEA5C9AEEA5EBD0EA49EC22CAC387918D2(L_0, L_1, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_004a;
		}
	}
	{
		// if (m_ReliableReceiveQueues.TryGetValue(clientId, out queue))
		Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A* L_4 = __this->___m_ReliableReceiveQueues_36;
		uint64_t L_5 = ___0_clientId;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_TryGetValue_mD42C03F5079D71BA857313B0569975C6B8308ACF(L_4, L_5, (&V_0), Dictionary_2_TryGetValue_mD42C03F5079D71BA857313B0569975C6B8308ACF_RuntimeMethod_var);
		V_2 = L_6;
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0030;
		}
	}
	{
		// queue.PushReader(dataReader);
		BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA* L_8 = V_0;
		DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3 L_9 = ___2_dataReader;
		NullCheck(L_8);
		BatchedReceiveQueue_PushReader_m0E81E806C9D1FD220CF8A15189B42C36FD37ED19(L_8, L_9, NULL);
		goto IL_0047;
	}

IL_0030:
	{
		// queue = new BatchedReceiveQueue(dataReader);
		DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3 L_10 = ___2_dataReader;
		BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA* L_11 = (BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA*)il2cpp_codegen_object_new(BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		BatchedReceiveQueue__ctor_m965421034E74E6506EE2DE1D5EE913C6E2A55DE9(L_11, L_10, NULL);
		V_0 = L_11;
		// m_ReliableReceiveQueues[clientId] = queue;
		Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A* L_12 = __this->___m_ReliableReceiveQueues_36;
		uint64_t L_13 = ___0_clientId;
		BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA* L_14 = V_0;
		NullCheck(L_12);
		Dictionary_2_set_Item_m1F79B5C829C4A8219BEA6848A252669AD1032777(L_12, L_13, L_14, Dictionary_2_set_Item_m1F79B5C829C4A8219BEA6848A252669AD1032777_RuntimeMethod_var);
	}

IL_0047:
	{
		goto IL_0053;
	}

IL_004a:
	{
		// queue = new BatchedReceiveQueue(dataReader);
		DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3 L_15 = ___2_dataReader;
		BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA* L_16 = (BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA*)il2cpp_codegen_object_new(BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		BatchedReceiveQueue__ctor_m965421034E74E6506EE2DE1D5EE913C6E2A55DE9(L_16, L_15, NULL);
		V_0 = L_16;
	}

IL_0053:
	{
		goto IL_0086;
	}

IL_0055:
	{
		// var message = queue.PopMessage();
		BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA* L_17 = V_0;
		NullCheck(L_17);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_18;
		L_18 = BatchedReceiveQueue_PopMessage_m20B586540098D5D1A1FD0830396FAFB62CD6E9BF(L_17, NULL);
		V_3 = L_18;
		// if (message == default)
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_19 = V_3;
		il2cpp_codegen_initobj((&V_5), sizeof(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093));
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_20 = V_5;
		il2cpp_codegen_runtime_class_init_inline(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = ArraySegment_1_op_Equality_m8DDD8A4F446528A05995B3A15AD7635E28FE244D(L_19, L_20, ArraySegment_1_op_Equality_m8DDD8A4F446528A05995B3A15AD7635E28FE244D_RuntimeMethod_var);
		V_4 = L_21;
		bool L_22 = V_4;
		if (!L_22)
		{
			goto IL_0076;
		}
	}
	{
		// break;
		goto IL_0095;
	}

IL_0076:
	{
		// InvokeOnTransportEvent(NetcodeNetworkEvent.Data, clientId, message, Time.realtimeSinceStartup);
		uint64_t L_23 = ___0_clientId;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_24 = V_3;
		float L_25;
		L_25 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		NetworkTransport_InvokeOnTransportEvent_m56EFDDC779FB136044F3064BE9E68BF81EB9790F(__this, 0, L_23, L_24, L_25, NULL);
	}

IL_0086:
	{
		// while (!queue.IsEmpty)
		BatchedReceiveQueue_tC1E18401E84CC865CA6333642F2F466ED13F01FA* L_26 = V_0;
		NullCheck(L_26);
		bool L_27;
		L_27 = BatchedReceiveQueue_get_IsEmpty_mE6FE9C4054B69EFAB47C9842F39A16E9F1753721(L_26, NULL);
		V_6 = (bool)((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_6;
		if (L_28)
		{
			goto IL_0055;
		}
	}

IL_0095:
	{
		// }
		return;
	}
}
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport::ProcessEvent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityTransport_ProcessEvent_mDBA825C0B894F06F2C2B4A64BBDF0AA0E52FBC7A (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m157C5C355B3F70983085122641AC4E154A8A2CBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CD98782E6D2FF48AC2FF228F3F2B3178F849DF9);
		s_Il2CppMethodInitialized = true;
	}
	int16_t V_0 = 0;
	NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3 V_2;
	memset((&V_2), 0, sizeof(V_2));
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 V_3;
	memset((&V_3), 0, sizeof(V_3));
	uint64_t V_4 = 0;
	int16_t V_5 = 0;
	int16_t V_6 = 0;
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		// var eventType = m_Driver.PopEvent(out var networkConnection, out var reader, out var pipeline);
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_0 = (&__this->___m_Driver_27);
		int16_t L_1;
		L_1 = NetworkDriver_PopEvent_mE0ECB283C8178BAA9C30364C1242BABEC19B5757(L_0, (&V_1), (&V_2), (&V_3), NULL);
		V_0 = L_1;
		// var clientId = ParseClientId(networkConnection);
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_2 = V_1;
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		uint64_t L_3;
		L_3 = UnityTransport_ParseClientId_mD0481F6EE16C9EA9CCA32FFA624FF0B89D8E69AE(L_2, NULL);
		V_4 = L_3;
		// switch (eventType)
		int16_t L_4 = V_0;
		V_6 = L_4;
		int16_t L_5 = V_6;
		V_5 = L_5;
		int16_t L_6 = V_5;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_6, 1)))
		{
			case 0:
			{
				goto IL_00e1;
			}
			case 1:
			{
				goto IL_003c;
			}
			case 2:
			{
				goto IL_0065;
			}
		}
	}
	{
		goto IL_00f2;
	}

IL_003c:
	{
		// InvokeOnTransportEvent(NetcodeNetworkEvent.Connect,
		//     clientId,
		//     default,
		//     Time.realtimeSinceStartup);
		uint64_t L_7 = V_4;
		il2cpp_codegen_initobj((&V_7), sizeof(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093));
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_8 = V_7;
		float L_9;
		L_9 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		NetworkTransport_InvokeOnTransportEvent_m56EFDDC779FB136044F3064BE9E68BF81EB9790F(__this, 1, L_7, L_8, L_9, NULL);
		// m_State = State.Connected;
		__this->___m_State_26 = 2;
		// return true;
		V_8 = (bool)1;
		goto IL_00f7;
	}

IL_0065:
	{
		// if (m_State == State.Connected)
		int32_t L_10 = __this->___m_State_26;
		V_9 = (bool)((((int32_t)L_10) == ((int32_t)2))? 1 : 0);
		bool L_11 = V_9;
		if (!L_11)
		{
			goto IL_0088;
		}
	}
	{
		// m_State = State.Disconnected;
		__this->___m_State_26 = 0;
		// m_ServerClientId = default;
		__this->___m_ServerClientId_29 = ((int64_t)0);
		goto IL_00ac;
	}

IL_0088:
	{
		// else if (m_State == State.Disconnected)
		int32_t L_12 = __this->___m_State_26;
		V_10 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_10;
		if (!L_13)
		{
			goto IL_00ac;
		}
	}
	{
		// Debug.LogError("Failed to connect to server.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral7CD98782E6D2FF48AC2FF228F3F2B3178F849DF9, NULL);
		// m_ServerClientId = default;
		__this->___m_ServerClientId_29 = ((int64_t)0);
	}

IL_00ac:
	{
		// m_ReliableReceiveQueues.Remove(clientId);
		Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A* L_14 = __this->___m_ReliableReceiveQueues_36;
		uint64_t L_15 = V_4;
		NullCheck(L_14);
		bool L_16;
		L_16 = Dictionary_2_Remove_m157C5C355B3F70983085122641AC4E154A8A2CBC(L_14, L_15, Dictionary_2_Remove_m157C5C355B3F70983085122641AC4E154A8A2CBC_RuntimeMethod_var);
		// ClearSendQueuesForClientId(clientId);
		uint64_t L_17 = V_4;
		UnityTransport_ClearSendQueuesForClientId_m1184B02CF88D93128579FE112BC2337E5C10BD0F(__this, L_17, NULL);
		// InvokeOnTransportEvent(NetcodeNetworkEvent.Disconnect,
		//     clientId,
		//     default,
		//     Time.realtimeSinceStartup);
		uint64_t L_18 = V_4;
		il2cpp_codegen_initobj((&V_7), sizeof(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093));
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_19 = V_7;
		float L_20;
		L_20 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		NetworkTransport_InvokeOnTransportEvent_m56EFDDC779FB136044F3064BE9E68BF81EB9790F(__this, 2, L_18, L_19, L_20, NULL);
		// return true;
		V_8 = (bool)1;
		goto IL_00f7;
	}

IL_00e1:
	{
		// ReceiveMessages(clientId, pipeline, reader);
		uint64_t L_21 = V_4;
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_22 = V_3;
		DataStreamReader_t712DF6CE1A53094AE623CCA3F3DFC7B73E3C50B3 L_23 = V_2;
		UnityTransport_ReceiveMessages_mB3FBD7582B7E56D776F3869A236952701DC217D5(__this, L_21, L_22, L_23, NULL);
		// return true;
		V_8 = (bool)1;
		goto IL_00f7;
	}

IL_00f2:
	{
		// return false;
		V_8 = (bool)0;
		goto IL_00f7;
	}

IL_00f7:
	{
		// }
		bool L_24 = V_8;
		return L_24;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_Update_mBFE9366E0A3A29DADCEC7A1A8C3C3FA6C124935A (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m121C176E03C8FAF9DD3D1327B0A5A740A8DC540A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9FB01015E439E90A10738C6134B30FC96A29F20D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBA961C119140246EE3B77080B59C1B2158E45A94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA410D3A25B765A2E862298CB4901BDB78D1189EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m021A1F603DB4FEC5A0CD6EF0D2D1B681694BEB7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m241D85407DA71D4A8C7A5158985F82472CC4C8C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBD4B44B128888B4302BD7BE7931C43B8DB6A7EE9);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t88E97C0EC0DCA5E1994B18881637E25E4AEC96AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tD9D8D451DD3BF1ED3A1A65D8945C85F8A5C93293 V_2;
	memset((&V_2), 0, sizeof(V_2));
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	bool V_7 = false;
	int32_t G_B10_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B23_0 = 0;
	{
		// if (m_Driver.IsCreated)
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_0 = (&__this->___m_Driver_27);
		bool L_1;
		L_1 = NetworkDriver_get_IsCreated_m006F28C4A90B06A10CD0A09865C6F66C95B6142D(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0103;
		}
	}
	{
		// foreach (var kvp in m_SendQueue)
		Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* L_3 = __this->___m_SendQueue_35;
		NullCheck(L_3);
		Enumerator_t88E97C0EC0DCA5E1994B18881637E25E4AEC96AD L_4;
		L_4 = Dictionary_2_GetEnumerator_m121C176E03C8FAF9DD3D1327B0A5A740A8DC540A(L_3, Dictionary_2_GetEnumerator_m121C176E03C8FAF9DD3D1327B0A5A740A8DC540A_RuntimeMethod_var);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004d:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9FB01015E439E90A10738C6134B30FC96A29F20D((&V_1), Enumerator_Dispose_m9FB01015E439E90A10738C6134B30FC96A29F20D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0042_1;
			}

IL_0023_1:
			{
				// foreach (var kvp in m_SendQueue)
				KeyValuePair_2_tD9D8D451DD3BF1ED3A1A65D8945C85F8A5C93293 L_5;
				L_5 = Enumerator_get_Current_mA410D3A25B765A2E862298CB4901BDB78D1189EE_inline((&V_1), Enumerator_get_Current_mA410D3A25B765A2E862298CB4901BDB78D1189EE_RuntimeMethod_var);
				V_2 = L_5;
				// SendBatchedMessages(kvp.Key, kvp.Value);
				SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_6;
				L_6 = KeyValuePair_2_get_Key_m021A1F603DB4FEC5A0CD6EF0D2D1B681694BEB7E_inline((&V_2), KeyValuePair_2_get_Key_m021A1F603DB4FEC5A0CD6EF0D2D1B681694BEB7E_RuntimeMethod_var);
				BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 L_7;
				L_7 = KeyValuePair_2_get_Value_m241D85407DA71D4A8C7A5158985F82472CC4C8C5_inline((&V_2), KeyValuePair_2_get_Value_m241D85407DA71D4A8C7A5158985F82472CC4C8C5_RuntimeMethod_var);
				UnityTransport_SendBatchedMessages_m676B328E0E17B2E446769BEC8B541904CAF8C65A(__this, L_6, L_7, NULL);
			}

IL_0042_1:
			{
				// foreach (var kvp in m_SendQueue)
				bool L_8;
				L_8 = Enumerator_MoveNext_mBA961C119140246EE3B77080B59C1B2158E45A94((&V_1), Enumerator_MoveNext_mBA961C119140246EE3B77080B59C1B2158E45A94_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0023_1;
				}
			}
			{
				goto IL_005c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005c:
	{
		// m_Driver.ScheduleUpdate().Complete();
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_9 = (&__this->___m_Driver_27);
		il2cpp_codegen_initobj((&V_3), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_10 = V_3;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_11;
		L_11 = NetworkDriver_ScheduleUpdate_mBF306FD6BA96C2D1439D9322429EDFB7FF581A14(L_9, L_10, NULL);
		V_3 = L_11;
		JobHandle_Complete_mDCED35A125AAB37EDDAB2E31C805B4904B614A4A((&V_3), NULL);
		// if (m_ProtocolType == ProtocolType.RelayUnityTransport && m_Driver.GetRelayConnectionStatus() == RelayConnectionStatus.AllocationInvalid)
		int32_t L_12 = __this->___m_ProtocolType_12;
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0092;
		}
	}
	{
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036 L_13 = __this->___m_Driver_27;
		int32_t L_14;
		L_14 = NetworkDriverRelayExtensions_GetRelayConnectionStatus_mE2BFB1735FAA4BBD33FB3C3C8770BC30D99B2CA6(L_13, NULL);
		G_B10_0 = ((((int32_t)L_14) == ((int32_t)2))? 1 : 0);
		goto IL_0093;
	}

IL_0092:
	{
		G_B10_0 = 0;
	}

IL_0093:
	{
		V_4 = (bool)G_B10_0;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_00c0;
		}
	}
	{
		// Debug.LogError("Transport failure! Relay allocation needs to be recreated, and NetworkManager restarted. " +
		//     "Use NetworkManager.OnTransportFailure to be notified of such events programmatically.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteralBD4B44B128888B4302BD7BE7931C43B8DB6A7EE9, NULL);
		// InvokeOnTransportEvent(NetcodeNetworkEvent.TransportFailure, 0, default, Time.realtimeSinceStartup);
		il2cpp_codegen_initobj((&V_5), sizeof(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093));
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_16 = V_5;
		float L_17;
		L_17 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		NetworkTransport_InvokeOnTransportEvent_m56EFDDC779FB136044F3064BE9E68BF81EB9790F(__this, 3, ((int64_t)0), L_16, L_17, NULL);
		// return;
		goto IL_0103;
	}

IL_00c0:
	{
		goto IL_00c5;
	}

IL_00c2:
	{
	}

IL_00c5:
	{
		// while (AcceptConnection() && m_Driver.IsCreated)
		bool L_18;
		L_18 = UnityTransport_AcceptConnection_m14AA4E2915B8E5C2E6B8643A3C103EED242A928B(__this, NULL);
		if (!L_18)
		{
			goto IL_00da;
		}
	}
	{
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_19 = (&__this->___m_Driver_27);
		bool L_20;
		L_20 = NetworkDriver_get_IsCreated_m006F28C4A90B06A10CD0A09865C6F66C95B6142D(L_19, NULL);
		G_B17_0 = ((int32_t)(L_20));
		goto IL_00db;
	}

IL_00da:
	{
		G_B17_0 = 0;
	}

IL_00db:
	{
		V_6 = (bool)G_B17_0;
		bool L_21 = V_6;
		if (L_21)
		{
			goto IL_00c2;
		}
	}
	{
		goto IL_00e6;
	}

IL_00e3:
	{
	}

IL_00e6:
	{
		// while (ProcessEvent() && m_Driver.IsCreated)
		bool L_22;
		L_22 = UnityTransport_ProcessEvent_mDBA825C0B894F06F2C2B4A64BBDF0AA0E52FBC7A(__this, NULL);
		if (!L_22)
		{
			goto IL_00fb;
		}
	}
	{
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_23 = (&__this->___m_Driver_27);
		bool L_24;
		L_24 = NetworkDriver_get_IsCreated_m006F28C4A90B06A10CD0A09865C6F66C95B6142D(L_23, NULL);
		G_B23_0 = ((int32_t)(L_24));
		goto IL_00fc;
	}

IL_00fb:
	{
		G_B23_0 = 0;
	}

IL_00fc:
	{
		V_7 = (bool)G_B23_0;
		bool L_25 = V_7;
		if (L_25)
		{
			goto IL_00e3;
		}
	}
	{
	}

IL_0103:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_OnDestroy_mC173384DDD1FAFD46FC6FDFF094944243D466BE2 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	{
		// DisposeInternals();
		UnityTransport_DisposeInternals_mF5FB50D48F59B47C7FD498535BCE4A6933874303(__this, NULL);
		// }
		return;
	}
}
// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport::ExtractRtt(Unity.Networking.Transport.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityTransport_ExtractRtt_m0FB3C110BE2C6299E93F5E059819D4187D984671 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 ___0_networkConnection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkPipelineStageCollection_tFBDFB10FD21D1B4A4D5C2C075ED202AE88BA6C4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReliableSequencedPipelineStage_tF426F5730ACE7F0BF084710243FE5F60DE8EA510_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t V_2 = 0;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_4;
	memset((&V_4), 0, sizeof(V_4));
	SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* V_5 = NULL;
	{
		// if (m_Driver.GetConnectionState(networkConnection) != NetworkConnection.State.Connected)
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_0 = (&__this->___m_Driver_27);
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_1 = ___0_networkConnection;
		int32_t L_2;
		L_2 = NetworkDriver_GetConnectionState_mFEBA599E66C6FA4677B5738EAF0BA99E52436EF9(L_0, L_1, NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// return 0;
		V_2 = 0;
		goto IL_005c;
	}

IL_001c:
	{
		//             m_Driver.GetPipelineBuffers(m_ReliableSequencedPipeline,
		// #if UTP_TRANSPORT_2_0_ABOVE
		//                 NetworkPipelineStageId.Get<ReliableSequencedPipelineStage>(),
		// #else
		//                 NetworkPipelineStageCollection.GetStageId(typeof(ReliableSequencedPipelineStage)),
		// #endif
		//                 networkConnection,
		//                 out _,
		//                 out _,
		//                 out var sharedBuffer);
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_4 = (&__this->___m_Driver_27);
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_5 = __this->___m_ReliableSequencedPipeline_32;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (ReliableSequencedPipelineStage_tF426F5730ACE7F0BF084710243FE5F60DE8EA510_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(NetworkPipelineStageCollection_tFBDFB10FD21D1B4A4D5C2C075ED202AE88BA6C4A_il2cpp_TypeInfo_var);
		NetworkPipelineStageId_tBE4FAE81AD1922E0BEEDBC611342E3B0A7B5ECCA L_8;
		L_8 = NetworkPipelineStageCollection_GetStageId_m46FAF89A65BC1F183DB1894225CE89C7A39CEF20(L_7, NULL);
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_9 = ___0_networkConnection;
		NetworkDriver_GetPipelineBuffers_mDFAB4A0B3F7E3A330FFC1B21D72C1E2ADF790667(L_4, L_5, L_8, L_9, (&V_3), (&V_4), (&V_0), NULL);
		// var sharedContext = (ReliableUtility.SharedContext*)sharedBuffer.GetUnsafePtr();
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_10 = V_0;
		void* L_11;
		L_11 = NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2(L_10, NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		V_5 = (SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0*)L_11;
		// return sharedContext->RttInfo.LastRtt;
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_12 = V_5;
		NullCheck(L_12);
		RTTInfo_tAF1A100DBA67BD0367A9ABA6928B4E574CBE5518* L_13 = (&L_12->___RttInfo_6);
		int32_t L_14 = L_13->___LastRtt_0;
		V_2 = L_14;
		goto IL_005c;
	}

IL_005c:
	{
		// }
		int32_t L_15 = V_2;
		return L_15;
	}
}
// System.Single Unity.Netcode.Transports.UTP.UnityTransport::ExtractPacketLoss(Unity.Networking.Transport.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float UnityTransport_ExtractPacketLoss_m1AFCF5C8A265863BDFEF469E46634030D76BC358 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 ___0_networkConnection, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkPipelineStageCollection_tFBDFB10FD21D1B4A4D5C2C075ED202AE88BA6C4A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReliableSequencedPipelineStage_tF426F5730ACE7F0BF084710243FE5F60DE8EA510_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	float V_2 = 0.0f;
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_3;
	memset((&V_3), 0, sizeof(V_3));
	NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF V_4;
	memset((&V_4), 0, sizeof(V_4));
	SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* V_5 = NULL;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	bool V_8 = false;
	int32_t G_B5_0 = 0;
	PacketLossCache_t70FF92B1C896E15478DE602E65D74DD34AADA3D7* G_B9_0 = NULL;
	PacketLossCache_t70FF92B1C896E15478DE602E65D74DD34AADA3D7* G_B8_0 = NULL;
	float G_B10_0 = 0.0f;
	PacketLossCache_t70FF92B1C896E15478DE602E65D74DD34AADA3D7* G_B10_1 = NULL;
	{
		// if (m_Driver.GetConnectionState(networkConnection) != NetworkConnection.State.Connected)
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_0 = (&__this->___m_Driver_27);
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_1 = ___0_networkConnection;
		int32_t L_2;
		L_2 = NetworkDriver_GetConnectionState_mFEBA599E66C6FA4677B5738EAF0BA99E52436EF9(L_0, L_1, NULL);
		V_1 = (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// return 0f;
		V_2 = (0.0f);
		goto IL_0110;
	}

IL_0023:
	{
		//             m_Driver.GetPipelineBuffers(m_ReliableSequencedPipeline,
		// #if UTP_TRANSPORT_2_0_ABOVE
		//                 NetworkPipelineStageId.Get<ReliableSequencedPipelineStage>(),
		// #else
		//                 NetworkPipelineStageCollection.GetStageId(typeof(ReliableSequencedPipelineStage)),
		// #endif
		//                 networkConnection,
		//                 out _,
		//                 out _,
		//                 out var sharedBuffer);
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_4 = (&__this->___m_Driver_27);
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_5 = __this->___m_ReliableSequencedPipeline_32;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = { reinterpret_cast<intptr_t> (ReliableSequencedPipelineStage_tF426F5730ACE7F0BF084710243FE5F60DE8EA510_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_7;
		L_7 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(NetworkPipelineStageCollection_tFBDFB10FD21D1B4A4D5C2C075ED202AE88BA6C4A_il2cpp_TypeInfo_var);
		NetworkPipelineStageId_tBE4FAE81AD1922E0BEEDBC611342E3B0A7B5ECCA L_8;
		L_8 = NetworkPipelineStageCollection_GetStageId_m46FAF89A65BC1F183DB1894225CE89C7A39CEF20(L_7, NULL);
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_9 = ___0_networkConnection;
		NetworkDriver_GetPipelineBuffers_mDFAB4A0B3F7E3A330FFC1B21D72C1E2ADF790667(L_4, L_5, L_8, L_9, (&V_3), (&V_4), (&V_0), NULL);
		// var sharedContext = (ReliableUtility.SharedContext*)sharedBuffer.GetUnsafePtr();
		NativeArray_1_t81F55263465517B73C455D3400CF67B4BADD85CF L_10 = V_0;
		void* L_11;
		L_11 = NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2(L_10, NativeArrayUnsafeUtility_GetUnsafePtr_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m8CFDB2DF56E810A2E2FB3686AF676FCAC65AFCC2_RuntimeMethod_var);
		V_5 = (SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0*)L_11;
		// var packetReceivedDelta = (float)(sharedContext->stats.PacketsReceived - m_PacketLossCache.PacketsReceived);
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_12 = V_5;
		NullCheck(L_12);
		Statistics_t11CF93D4C83ABFDDFD0BBAD848B752181939A2E5* L_13 = (&L_12->___stats_4);
		int32_t L_14 = L_13->___PacketsReceived_0;
		PacketLossCache_t70FF92B1C896E15478DE602E65D74DD34AADA3D7* L_15 = (&__this->___m_PacketLossCache_25);
		int32_t L_16 = L_15->___PacketsReceived_0;
		V_6 = ((float)((int32_t)il2cpp_codegen_subtract(L_14, L_16)));
		// var packetDroppedDelta = (float)(sharedContext->stats.PacketsDropped - m_PacketLossCache.PacketsDropped);
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_17 = V_5;
		NullCheck(L_17);
		Statistics_t11CF93D4C83ABFDDFD0BBAD848B752181939A2E5* L_18 = (&L_17->___stats_4);
		int32_t L_19 = L_18->___PacketsDropped_2;
		PacketLossCache_t70FF92B1C896E15478DE602E65D74DD34AADA3D7* L_20 = (&__this->___m_PacketLossCache_25);
		int32_t L_21 = L_20->___PacketsDropped_1;
		V_7 = ((float)((int32_t)il2cpp_codegen_subtract(L_19, L_21)));
		// if (packetDroppedDelta == 0 && packetReceivedDelta == 0)
		float L_22 = V_7;
		if ((!(((float)L_22) == ((float)(0.0f)))))
		{
			goto IL_009e;
		}
	}
	{
		float L_23 = V_6;
		G_B5_0 = ((((float)L_23) == ((float)(0.0f)))? 1 : 0);
		goto IL_009f;
	}

IL_009e:
	{
		G_B5_0 = 0;
	}

IL_009f:
	{
		V_8 = (bool)G_B5_0;
		bool L_24 = V_8;
		if (!L_24)
		{
			goto IL_00b4;
		}
	}
	{
		// return m_PacketLossCache.PacketLoss;
		PacketLossCache_t70FF92B1C896E15478DE602E65D74DD34AADA3D7* L_25 = (&__this->___m_PacketLossCache_25);
		float L_26 = L_25->___PacketLoss_2;
		V_2 = L_26;
		goto IL_0110;
	}

IL_00b4:
	{
		// m_PacketLossCache.PacketsReceived = sharedContext->stats.PacketsReceived;
		PacketLossCache_t70FF92B1C896E15478DE602E65D74DD34AADA3D7* L_27 = (&__this->___m_PacketLossCache_25);
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_28 = V_5;
		NullCheck(L_28);
		Statistics_t11CF93D4C83ABFDDFD0BBAD848B752181939A2E5* L_29 = (&L_28->___stats_4);
		int32_t L_30 = L_29->___PacketsReceived_0;
		L_27->___PacketsReceived_0 = L_30;
		// m_PacketLossCache.PacketsDropped = sharedContext->stats.PacketsDropped;
		PacketLossCache_t70FF92B1C896E15478DE602E65D74DD34AADA3D7* L_31 = (&__this->___m_PacketLossCache_25);
		SharedContext_t575CA37AEBD0F17E8E9C83FEF60ADBF9F718A9A0* L_32 = V_5;
		NullCheck(L_32);
		Statistics_t11CF93D4C83ABFDDFD0BBAD848B752181939A2E5* L_33 = (&L_32->___stats_4);
		int32_t L_34 = L_33->___PacketsDropped_2;
		L_31->___PacketsDropped_1 = L_34;
		// m_PacketLossCache.PacketLoss = packetReceivedDelta > 0 ? packetDroppedDelta / packetReceivedDelta : 0;
		PacketLossCache_t70FF92B1C896E15478DE602E65D74DD34AADA3D7* L_35 = (&__this->___m_PacketLossCache_25);
		float L_36 = V_6;
		G_B8_0 = L_35;
		if ((((float)L_36) > ((float)(0.0f))))
		{
			G_B9_0 = L_35;
			goto IL_00f8;
		}
	}
	{
		G_B10_0 = (0.0f);
		G_B10_1 = G_B8_0;
		goto IL_00fd;
	}

IL_00f8:
	{
		float L_37 = V_7;
		float L_38 = V_6;
		G_B10_0 = ((float)(L_37/L_38));
		G_B10_1 = G_B9_0;
	}

IL_00fd:
	{
		G_B10_1->___PacketLoss_2 = G_B10_0;
		// return m_PacketLossCache.PacketLoss;
		PacketLossCache_t70FF92B1C896E15478DE602E65D74DD34AADA3D7* L_39 = (&__this->___m_PacketLossCache_25);
		float L_40 = L_39->___PacketLoss_2;
		V_2 = L_40;
		goto IL_0110;
	}

IL_0110:
	{
		// }
		float L_41 = V_2;
		return L_41;
	}
}
// System.UInt64 Unity.Netcode.Transports.UTP.UnityTransport::ParseClientId(Unity.Networking.Transport.NetworkConnection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UnityTransport_ParseClientId_mD0481F6EE16C9EA9CCA32FFA624FF0B89D8E69AE (NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 ___0_utpConnectionId, const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		// return *(ulong*)&utpConnectionId;
		int64_t L_0 = *((int64_t*)((uintptr_t)(&___0_utpConnectionId)));
		V_0 = L_0;
		goto IL_0008;
	}

IL_0008:
	{
		// }
		uint64_t L_1 = V_0;
		return L_1;
	}
}
// Unity.Networking.Transport.NetworkConnection Unity.Netcode.Transports.UTP.UnityTransport::ParseClientId(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 UnityTransport_ParseClientId_m75436222E397B5D5BCCF778D71890A12F0E090E5 (uint64_t ___0_netcodeConnectionId, const RuntimeMethod* method) 
{
	NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return *(NetworkConnection*)&netcodeConnectionId;
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_0 = (*(NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4*)((uintptr_t)(&___0_netcodeConnectionId)));
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_1 = V_0;
		return L_1;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::ClearSendQueuesForClientId(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_ClearSendQueuesForClientId_m1184B02CF88D93128579FE112BC2337E5C10BD0F (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, uint64_t ___0_clientId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mAE62B9948A0CEE783F66F9E9FC85730381EC7013_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m9EACCB2FE62411809CEA75D43888AF7DBBFDD873_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m0A366303BDD0CE0ED424E22C02B38F062EB36795_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m5A75DFC69FAF26E24498822E4BF541BC7FCE1153_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m6C03A1426C65803A8DBC0AFD73E392C1B4386513_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m722D0C909BE2C23A52B144C90BD4A736F2C22704_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mFC753F80A7B658E99A5F04CC9ACC52ED9DD1C4B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m03B5BF99A84FB01095607D66EB175C807EEF2178_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m65969C1CCF64E71F406D33B69802D5AE2F509049_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m45582D53760B8E2CB5D77ECA65A9C7B5E3FCE80A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Add_m427C263965065B94DF268C9EACBEE0496DC24B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_Dispose_m1EAC342766B62EF838C22FC2AB2D96B4354FF784_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1_GetEnumerator_m0B13CCF571EFA970C5D524F2113A37B88A43EF6F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NativeList_1__ctor_mE639C651EB144270377F11F9F6F5D985AE431513_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	NativeList_1_t19C42565694B875C975B0E66AD45E82CDE2EE935 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Enumerator_t5792751BB1368B27B31A13289F8E53829A2E45F4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	Enumerator_t80B573881CD54D322A01D47FD6501B91C9258327 V_4;
	memset((&V_4), 0, sizeof(V_4));
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 V_5;
	memset((&V_5), 0, sizeof(V_5));
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// using var keys = new NativeList<SendTarget>(16, Allocator.Temp);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0;
		L_0 = AllocatorHandle_op_Implicit_mDCF4431F31BB4A09438AE644785C4273F86B2B8D(2, NULL);
		NativeList_1__ctor_mE639C651EB144270377F11F9F6F5D985AE431513((&V_0), ((int32_t)16), L_0, NativeList_1__ctor_mE639C651EB144270377F11F9F6F5D985AE431513_RuntimeMethod_var);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00b9:
			{// begin finally (depth: 1)
				NativeList_1_Dispose_m1EAC342766B62EF838C22FC2AB2D96B4354FF784((&V_0), NativeList_1_Dispose_m1EAC342766B62EF838C22FC2AB2D96B4354FF784_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				// foreach (var key in m_SendQueue.Keys)
				Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* L_1 = __this->___m_SendQueue_35;
				NullCheck(L_1);
				KeyCollection_t56099B4F564E3749A78231A91A6D5639B8D2CF0B* L_2;
				L_2 = Dictionary_2_get_Keys_m0A366303BDD0CE0ED424E22C02B38F062EB36795(L_1, Dictionary_2_get_Keys_m0A366303BDD0CE0ED424E22C02B38F062EB36795_RuntimeMethod_var);
				NullCheck(L_2);
				Enumerator_t5792751BB1368B27B31A13289F8E53829A2E45F4 L_3;
				L_3 = KeyCollection_GetEnumerator_m45582D53760B8E2CB5D77ECA65A9C7B5E3FCE80A(L_2, KeyCollection_GetEnumerator_m45582D53760B8E2CB5D77ECA65A9C7B5E3FCE80A_RuntimeMethod_var);
				V_1 = L_3;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_0052_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m5A75DFC69FAF26E24498822E4BF541BC7FCE1153((&V_1), Enumerator_Dispose_m5A75DFC69FAF26E24498822E4BF541BC7FCE1153_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_0047_2;
					}

IL_0024_2:
					{
						// foreach (var key in m_SendQueue.Keys)
						SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_4;
						L_4 = Enumerator_get_Current_m65969C1CCF64E71F406D33B69802D5AE2F509049_inline((&V_1), Enumerator_get_Current_m65969C1CCF64E71F406D33B69802D5AE2F509049_RuntimeMethod_var);
						V_2 = L_4;
						// if (key.ClientId == clientId)
						SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_5 = V_2;
						uint64_t L_6 = L_5.___ClientId_0;
						uint64_t L_7 = ___0_clientId;
						V_3 = (bool)((((int64_t)L_6) == ((int64_t)L_7))? 1 : 0);
						bool L_8 = V_3;
						if (!L_8)
						{
							goto IL_0046_2;
						}
					}
					{
						// keys.Add(key);
						NativeList_1_Add_m427C263965065B94DF268C9EACBEE0496DC24B90((&V_0), (&V_2), NativeList_1_Add_m427C263965065B94DF268C9EACBEE0496DC24B90_RuntimeMethod_var);
					}

IL_0046_2:
					{
					}

IL_0047_2:
					{
						// foreach (var key in m_SendQueue.Keys)
						bool L_9;
						L_9 = Enumerator_MoveNext_m722D0C909BE2C23A52B144C90BD4A736F2C22704((&V_1), Enumerator_MoveNext_m722D0C909BE2C23A52B144C90BD4A736F2C22704_RuntimeMethod_var);
						if (L_9)
						{
							goto IL_0024_2;
						}
					}
					{
						goto IL_0061_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0061_1:
			{
				// foreach (var target in keys)
				Enumerator_t80B573881CD54D322A01D47FD6501B91C9258327 L_10;
				L_10 = NativeList_1_GetEnumerator_m0B13CCF571EFA970C5D524F2113A37B88A43EF6F((&V_0), NativeList_1_GetEnumerator_m0B13CCF571EFA970C5D524F2113A37B88A43EF6F_RuntimeMethod_var);
				V_4 = L_10;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_00a8_1:
					{// begin finally (depth: 2)
						Enumerator_Dispose_m6C03A1426C65803A8DBC0AFD73E392C1B4386513((&V_4), Enumerator_Dispose_m6C03A1426C65803A8DBC0AFD73E392C1B4386513_RuntimeMethod_var);
						return;
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						goto IL_009d_2;
					}

IL_006d_2:
					{
						// foreach (var target in keys)
						SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_11;
						L_11 = Enumerator_get_Current_m03B5BF99A84FB01095607D66EB175C807EEF2178((&V_4), Enumerator_get_Current_m03B5BF99A84FB01095607D66EB175C807EEF2178_RuntimeMethod_var);
						V_5 = L_11;
						// m_SendQueue[target].Dispose();
						Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* L_12 = __this->___m_SendQueue_35;
						SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_13 = V_5;
						NullCheck(L_12);
						BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 L_14;
						L_14 = Dictionary_2_get_Item_m9EACCB2FE62411809CEA75D43888AF7DBBFDD873(L_12, L_13, Dictionary_2_get_Item_m9EACCB2FE62411809CEA75D43888AF7DBBFDD873_RuntimeMethod_var);
						V_6 = L_14;
						BatchedSendQueue_Dispose_mD4F40F358E16AD02B90DF571E134D2A08526CD7C((&V_6), NULL);
						// m_SendQueue.Remove(target);
						Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* L_15 = __this->___m_SendQueue_35;
						SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_16 = V_5;
						NullCheck(L_15);
						bool L_17;
						L_17 = Dictionary_2_Remove_mAE62B9948A0CEE783F66F9E9FC85730381EC7013(L_15, L_16, Dictionary_2_Remove_mAE62B9948A0CEE783F66F9E9FC85730381EC7013_RuntimeMethod_var);
					}

IL_009d_2:
					{
						// foreach (var target in keys)
						bool L_18;
						L_18 = Enumerator_MoveNext_mFC753F80A7B658E99A5F04CC9ACC52ED9DD1C4B0((&V_4), Enumerator_MoveNext_mFC753F80A7B658E99A5F04CC9ACC52ED9DD1C4B0_RuntimeMethod_var);
						if (L_18)
						{
							goto IL_006d_2;
						}
					}
					{
						goto IL_00b7_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_00b7_1:
			{
				// }
				goto IL_00c8;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00c8:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::FlushSendQueuesForClientId(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_FlushSendQueuesForClientId_mA5F9D3324BB7AFDA5FE62A99A0A8836D1C3BF7A3 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, uint64_t ___0_clientId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m121C176E03C8FAF9DD3D1327B0A5A740A8DC540A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9FB01015E439E90A10738C6134B30FC96A29F20D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBA961C119140246EE3B77080B59C1B2158E45A94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA410D3A25B765A2E862298CB4901BDB78D1189EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m021A1F603DB4FEC5A0CD6EF0D2D1B681694BEB7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m241D85407DA71D4A8C7A5158985F82472CC4C8C5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t88E97C0EC0DCA5E1994B18881637E25E4AEC96AD V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_tD9D8D451DD3BF1ED3A1A65D8945C85F8A5C93293 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		// foreach (var kvp in m_SendQueue)
		Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* L_0 = __this->___m_SendQueue_35;
		NullCheck(L_0);
		Enumerator_t88E97C0EC0DCA5E1994B18881637E25E4AEC96AD L_1;
		L_1 = Dictionary_2_GetEnumerator_m121C176E03C8FAF9DD3D1327B0A5A740A8DC540A(L_0, Dictionary_2_GetEnumerator_m121C176E03C8FAF9DD3D1327B0A5A740A8DC540A_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_004f:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9FB01015E439E90A10738C6134B30FC96A29F20D((&V_0), Enumerator_Dispose_m9FB01015E439E90A10738C6134B30FC96A29F20D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0044_1;
			}

IL_0010_1:
			{
				// foreach (var kvp in m_SendQueue)
				KeyValuePair_2_tD9D8D451DD3BF1ED3A1A65D8945C85F8A5C93293 L_2;
				L_2 = Enumerator_get_Current_mA410D3A25B765A2E862298CB4901BDB78D1189EE_inline((&V_0), Enumerator_get_Current_mA410D3A25B765A2E862298CB4901BDB78D1189EE_RuntimeMethod_var);
				V_1 = L_2;
				// if (kvp.Key.ClientId == clientId)
				SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_3;
				L_3 = KeyValuePair_2_get_Key_m021A1F603DB4FEC5A0CD6EF0D2D1B681694BEB7E_inline((&V_1), KeyValuePair_2_get_Key_m021A1F603DB4FEC5A0CD6EF0D2D1B681694BEB7E_RuntimeMethod_var);
				uint64_t L_4 = L_3.___ClientId_0;
				uint64_t L_5 = ___0_clientId;
				V_2 = (bool)((((int64_t)L_4) == ((int64_t)L_5))? 1 : 0);
				bool L_6 = V_2;
				if (!L_6)
				{
					goto IL_0043_1;
				}
			}
			{
				// SendBatchedMessages(kvp.Key, kvp.Value);
				SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_7;
				L_7 = KeyValuePair_2_get_Key_m021A1F603DB4FEC5A0CD6EF0D2D1B681694BEB7E_inline((&V_1), KeyValuePair_2_get_Key_m021A1F603DB4FEC5A0CD6EF0D2D1B681694BEB7E_RuntimeMethod_var);
				BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 L_8;
				L_8 = KeyValuePair_2_get_Value_m241D85407DA71D4A8C7A5158985F82472CC4C8C5_inline((&V_1), KeyValuePair_2_get_Value_m241D85407DA71D4A8C7A5158985F82472CC4C8C5_RuntimeMethod_var);
				UnityTransport_SendBatchedMessages_m676B328E0E17B2E446769BEC8B541904CAF8C65A(__this, L_7, L_8, NULL);
			}

IL_0043_1:
			{
			}

IL_0044_1:
			{
				// foreach (var kvp in m_SendQueue)
				bool L_9;
				L_9 = Enumerator_MoveNext_mBA961C119140246EE3B77080B59C1B2158E45A94((&V_0), Enumerator_MoveNext_mBA961C119140246EE3B77080B59C1B2158E45A94_RuntimeMethod_var);
				if (L_9)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_005e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005e:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::DisconnectLocalClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_DisconnectLocalClient_mEDB43EB97106CCA76C64FF8A5BB35F6DACBF85E3 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m157C5C355B3F70983085122641AC4E154A8A2CBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (m_State == State.Connected)
		int32_t L_0 = __this->___m_State_26;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_007e;
		}
	}
	{
		// FlushSendQueuesForClientId(m_ServerClientId);
		uint64_t L_2 = __this->___m_ServerClientId_29;
		UnityTransport_FlushSendQueuesForClientId_mA5F9D3324BB7AFDA5FE62A99A0A8836D1C3BF7A3(__this, L_2, NULL);
		// if (m_Driver.Disconnect(ParseClientId(m_ServerClientId)) == 0)
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_3 = (&__this->___m_Driver_27);
		uint64_t L_4 = __this->___m_ServerClientId_29;
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_5;
		L_5 = UnityTransport_ParseClientId_m75436222E397B5D5BCCF778D71890A12F0E090E5(L_4, NULL);
		int32_t L_6;
		L_6 = NetworkDriver_Disconnect_m1925090D52AEF6839A78D391892C269C2184D587(L_3, L_5, NULL);
		V_1 = (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_007d;
		}
	}
	{
		// m_State = State.Disconnected;
		__this->___m_State_26 = 0;
		// m_ReliableReceiveQueues.Remove(m_ServerClientId);
		Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A* L_8 = __this->___m_ReliableReceiveQueues_36;
		uint64_t L_9 = __this->___m_ServerClientId_29;
		NullCheck(L_8);
		bool L_10;
		L_10 = Dictionary_2_Remove_m157C5C355B3F70983085122641AC4E154A8A2CBC(L_8, L_9, Dictionary_2_Remove_m157C5C355B3F70983085122641AC4E154A8A2CBC_RuntimeMethod_var);
		// ClearSendQueuesForClientId(m_ServerClientId);
		uint64_t L_11 = __this->___m_ServerClientId_29;
		UnityTransport_ClearSendQueuesForClientId_m1184B02CF88D93128579FE112BC2337E5C10BD0F(__this, L_11, NULL);
		// InvokeOnTransportEvent(NetcodeNetworkEvent.Disconnect,
		//     m_ServerClientId,
		//     default,
		//     Time.realtimeSinceStartup);
		uint64_t L_12 = __this->___m_ServerClientId_29;
		il2cpp_codegen_initobj((&V_2), sizeof(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093));
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_13 = V_2;
		float L_14;
		L_14 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		NetworkTransport_InvokeOnTransportEvent_m56EFDDC779FB136044F3064BE9E68BF81EB9790F(__this, 2, L_12, L_13, L_14, NULL);
	}

IL_007d:
	{
	}

IL_007e:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::DisconnectRemoteClient(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_DisconnectRemoteClient_m93C0FA95B3D27700018A57D6D5EB64036ACE26AD (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, uint64_t ___0_clientId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m157C5C355B3F70983085122641AC4E154A8A2CBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF7B506665CFD025116225A200EEBE1C9FEEF060C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		// Debug.Assert(m_State == State.Listening, "DisconnectRemoteClient should be called on a listening server");
		int32_t L_0 = __this->___m_State_26;
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_mA460392021AC0A8210C9081E3C1C9652DBF32BF6((bool)((((int32_t)L_0) == ((int32_t)1))? 1 : 0), _stringLiteralF7B506665CFD025116225A200EEBE1C9FEEF060C, NULL);
		// if (m_State == State.Listening)
		int32_t L_1 = __this->___m_State_26;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_006a;
		}
	}
	{
		// FlushSendQueuesForClientId(clientId);
		uint64_t L_3 = ___0_clientId;
		UnityTransport_FlushSendQueuesForClientId_mA5F9D3324BB7AFDA5FE62A99A0A8836D1C3BF7A3(__this, L_3, NULL);
		// m_ReliableReceiveQueues.Remove(clientId);
		Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A* L_4 = __this->___m_ReliableReceiveQueues_36;
		uint64_t L_5 = ___0_clientId;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_Remove_m157C5C355B3F70983085122641AC4E154A8A2CBC(L_4, L_5, Dictionary_2_Remove_m157C5C355B3F70983085122641AC4E154A8A2CBC_RuntimeMethod_var);
		// ClearSendQueuesForClientId(clientId);
		uint64_t L_7 = ___0_clientId;
		UnityTransport_ClearSendQueuesForClientId_m1184B02CF88D93128579FE112BC2337E5C10BD0F(__this, L_7, NULL);
		// var connection = ParseClientId(clientId);
		uint64_t L_8 = ___0_clientId;
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_9;
		L_9 = UnityTransport_ParseClientId_m75436222E397B5D5BCCF778D71890A12F0E090E5(L_8, NULL);
		V_1 = L_9;
		// if (m_Driver.GetConnectionState(connection) != NetworkConnection.State.Disconnected)
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_10 = (&__this->___m_Driver_27);
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_11 = V_1;
		int32_t L_12;
		L_12 = NetworkDriver_GetConnectionState_mFEBA599E66C6FA4677B5738EAF0BA99E52436EF9(L_10, L_11, NULL);
		V_2 = (bool)((!(((uint32_t)L_12) <= ((uint32_t)0)))? 1 : 0);
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_0069;
		}
	}
	{
		// m_Driver.Disconnect(connection);
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_14 = (&__this->___m_Driver_27);
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_15 = V_1;
		int32_t L_16;
		L_16 = NetworkDriver_Disconnect_m1925090D52AEF6839A78D391892C269C2184D587(L_14, L_15, NULL);
	}

IL_0069:
	{
	}

IL_006a:
	{
		// }
		return;
	}
}
// System.UInt64 Unity.Netcode.Transports.UTP.UnityTransport::GetCurrentRtt(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UnityTransport_GetCurrentRtt_mC1B944E456E546D7925BE63E0EDBC0002DADF507 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, uint64_t ___0_clientId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	uint64_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	uint64_t V_4 = 0;
	{
		// if (NetworkManager != null)
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0 = __this->___NetworkManager_34;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		// var transportId = NetworkManager.ClientIdToTransportId(clientId);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_3 = __this->___NetworkManager_34;
		uint64_t L_4 = ___0_clientId;
		NullCheck(L_3);
		uint64_t L_5;
		L_5 = NetworkManager_ClientIdToTransportId_m36273DB340E8A39BB7E19504A0EB52988983CF01(L_3, L_4, NULL);
		V_1 = L_5;
		// var rtt = ExtractRtt(ParseClientId(transportId));
		uint64_t L_6 = V_1;
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_7;
		L_7 = UnityTransport_ParseClientId_m75436222E397B5D5BCCF778D71890A12F0E090E5(L_6, NULL);
		int32_t L_8;
		L_8 = UnityTransport_ExtractRtt_m0FB3C110BE2C6299E93F5E059819D4187D984671(__this, L_7, NULL);
		V_2 = L_8;
		// if (rtt > 0)
		int32_t L_9 = V_2;
		V_3 = (bool)((((int32_t)L_9) > ((int32_t)0))? 1 : 0);
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_003b;
		}
	}
	{
		// return (ulong)rtt;
		int32_t L_11 = V_2;
		V_4 = ((int64_t)L_11);
		goto IL_004d;
	}

IL_003b:
	{
	}

IL_003c:
	{
		// return (ulong)ExtractRtt(ParseClientId(clientId));
		uint64_t L_12 = ___0_clientId;
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		NetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4 L_13;
		L_13 = UnityTransport_ParseClientId_m75436222E397B5D5BCCF778D71890A12F0E090E5(L_12, NULL);
		int32_t L_14;
		L_14 = UnityTransport_ExtractRtt_m0FB3C110BE2C6299E93F5E059819D4187D984671(__this, L_13, NULL);
		V_4 = ((int64_t)L_14);
		goto IL_004d;
	}

IL_004d:
	{
		// }
		uint64_t L_15 = V_4;
		return L_15;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::Initialize(Unity.Netcode.NetworkManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_Initialize_m841F9062D918F68F0DA0DD29F1F56DA221FA0E0F (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* ___0_networkManager, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisNetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4_mF6303BA38BC2C1FD17880A4274FE9412A9670E0C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05CBF167EC6A1A27A353BA7420F33D3D4DE42E25);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Debug.Assert(sizeof(ulong) == UnsafeUtility.SizeOf<NetworkConnection>(), "Netcode connection id size does not match UTP connection id size");
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisNetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4_mF6303BA38BC2C1FD17880A4274FE9412A9670E0C(UnsafeUtility_SizeOf_TisNetworkConnection_t0A1170D9665C62249582E5DAABC2EAF2D01DEDF4_mF6303BA38BC2C1FD17880A4274FE9412A9670E0C_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Assert_mA460392021AC0A8210C9081E3C1C9652DBF32BF6((bool)((((int32_t)8) == ((int32_t)L_0))? 1 : 0), _stringLiteral05CBF167EC6A1A27A353BA7420F33D3D4DE42E25, NULL);
		// NetworkManager = networkManager;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_1 = ___0_networkManager;
		__this->___NetworkManager_34 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NetworkManager_34), (void*)L_1);
		// m_NetworkSettings = new NetworkSettings(Allocator.Persistent);
		NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0 L_2;
		memset((&L_2), 0, sizeof(L_2));
		NetworkSettings__ctor_mA6470D24077F1464F81F521A490AAB45DF4E4EFB((&L_2), 4, /*hidden argument*/NULL);
		__this->___m_NetworkSettings_28 = L_2;
		// var fragmentationCapacity = m_MaxPayloadSize + BatchedSendQueue.PerMessageOverhead;
		int32_t L_3 = __this->___m_MaxPayloadSize_14;
		V_0 = ((int32_t)il2cpp_codegen_add(L_3, 4));
		// m_NetworkSettings.WithFragmentationStageParameters(payloadCapacity: fragmentationCapacity);
		NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* L_4 = (&__this->___m_NetworkSettings_28);
		int32_t L_5 = V_0;
		NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* L_6;
		L_6 = FragmentationStageParameterExtensions_WithFragmentationStageParameters_m36789359AAC36AE9359B0D4851E5B3E66A570720(L_4, L_5, NULL);
		// m_NetworkSettings.WithBaselibNetworkInterfaceParameters(
		//     receiveQueueCapacity: m_MaxPacketQueueSize,
		//     sendQueueCapacity: m_MaxPacketQueueSize);
		NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* L_7 = (&__this->___m_NetworkSettings_28);
		int32_t L_8 = __this->___m_MaxPacketQueueSize_13;
		int32_t L_9 = __this->___m_MaxPacketQueueSize_13;
		NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* L_10;
		L_10 = BaselibNetworkParameterExtensions_WithBaselibNetworkInterfaceParameters_m7D3FB8742A79FAF55A847330FE57ADB0C10B75FD(L_7, L_8, L_9, ((int32_t)2000), NULL);
		// }
		return;
	}
}
// Unity.Netcode.NetworkEvent Unity.Netcode.Transports.UTP.UnityTransport::PollEvent(System.UInt64&,System.ArraySegment`1<System.Byte>&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnityTransport_PollEvent_mA28A5028DFCBFC49D690F1E3E34FC0D8A51FFC0F (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, uint64_t* ___0_clientId, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* ___1_payload, float* ___2_receiveTime, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// clientId = default;
		uint64_t* L_0 = ___0_clientId;
		*((int64_t*)L_0) = (int64_t)((int64_t)0);
		// payload = default;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* L_1 = ___1_payload;
		il2cpp_codegen_initobj(L_1, sizeof(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093));
		// receiveTime = default;
		float* L_2 = ___2_receiveTime;
		*((float*)L_2) = (float)(0.0f);
		// return NetcodeNetworkEvent.Nothing;
		V_0 = 4;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::Send(System.UInt64,System.ArraySegment`1<System.Byte>,Unity.Netcode.NetworkDelivery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_Send_m4475D81752A3D653C94F4C545C349F607EC23867 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, uint64_t ___0_clientId, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___1_payload, int32_t ___2_networkDelivery, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m370C175FD5C4D5E44F48B00453720BCA3F546BF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mB93963CC52EF7BACC2DBF92A28CDBD6E79F8A007_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1812ED2F2239F62391593B71DE1096D7784E218F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BD97639EEDDEB8C0AD70322C13DC2E403EDE616);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5476B4D26F0D93405A47E7865C0C4B7FC148874);
		s_Il2CppMethodInitialized = true;
	}
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 V_1;
	memset((&V_1), 0, sizeof(V_1));
	BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	uint64_t V_8 = 0;
	bool V_9 = false;
	ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 V_10;
	memset((&V_10), 0, sizeof(V_10));
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_11;
	memset((&V_11), 0, sizeof(V_11));
	int32_t G_B3_0 = 0;
	int32_t G_B9_0 = 0;
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* G_B14_0 = NULL;
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* G_B13_0 = NULL;
	uint64_t G_B15_0 = 0;
	{
		// var pipeline = SelectSendPipeline(networkDelivery);
		int32_t L_0 = ___2_networkDelivery;
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_1;
		L_1 = UnityTransport_SelectSendPipeline_m30254C6AD763FA133356411D218D998CC9C03E91(__this, L_0, NULL);
		V_0 = L_1;
		// if (pipeline != m_ReliableSequencedPipeline && payload.Count > m_MaxPayloadSize)
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_2 = V_0;
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_3 = __this->___m_ReliableSequencedPipeline_32;
		bool L_4;
		L_4 = NetworkPipeline_op_Inequality_m3B0595A06BF15AF50491B0B482B36B12C2683178(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0028;
		}
	}
	{
		int32_t L_5;
		L_5 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___1_payload), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		int32_t L_6 = __this->___m_MaxPayloadSize_14;
		G_B3_0 = ((((int32_t)L_5) > ((int32_t)L_6))? 1 : 0);
		goto IL_0029;
	}

IL_0028:
	{
		G_B3_0 = 0;
	}

IL_0029:
	{
		V_3 = (bool)G_B3_0;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_005a;
		}
	}
	{
		// Debug.LogError($"Unreliable payload of size {payload.Count} larger than configured 'Max Payload Size' ({m_MaxPayloadSize}).");
		int32_t L_8;
		L_8 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___1_payload), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		int32_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_9);
		int32_t L_11 = __this->___m_MaxPayloadSize_14;
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_12);
		String_t* L_14;
		L_14 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteral7BD97639EEDDEB8C0AD70322C13DC2E403EDE616, L_10, L_13, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_14, NULL);
		// return;
		goto IL_01a2;
	}

IL_005a:
	{
		// var sendTarget = new SendTarget(clientId, pipeline);
		uint64_t L_15 = ___0_clientId;
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_16 = V_0;
		SendTarget__ctor_mF0E1C6C7B9CF2C58418453C22D843533E585BD41((&V_1), L_15, L_16, NULL);
		// if (!m_SendQueue.TryGetValue(sendTarget, out var queue))
		Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* L_17 = __this->___m_SendQueue_35;
		SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_18 = V_1;
		NullCheck(L_17);
		bool L_19;
		L_19 = Dictionary_2_TryGetValue_mB93963CC52EF7BACC2DBF92A28CDBD6E79F8A007(L_17, L_18, (&V_2), Dictionary_2_TryGetValue_mB93963CC52EF7BACC2DBF92A28CDBD6E79F8A007_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_19) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_00bd;
		}
	}
	{
		// var maxCapacity = m_MaxSendQueueSize > 0 ? m_MaxSendQueueSize : m_DisconnectTimeoutMS * k_MaxReliableThroughput;
		int32_t L_21 = __this->___m_MaxSendQueueSize_15;
		if ((((int32_t)L_21) > ((int32_t)0)))
		{
			goto IL_0092;
		}
	}
	{
		int32_t L_22 = __this->___m_DisconnectTimeoutMS_19;
		G_B9_0 = ((int32_t)il2cpp_codegen_multiply(L_22, ((int32_t)2688)));
		goto IL_0098;
	}

IL_0092:
	{
		int32_t L_23 = __this->___m_MaxSendQueueSize_15;
		G_B9_0 = L_23;
	}

IL_0098:
	{
		V_5 = G_B9_0;
		// queue = new BatchedSendQueue(Math.Max(maxCapacity, m_MaxPayloadSize));
		int32_t L_24 = V_5;
		int32_t L_25 = __this->___m_MaxPayloadSize_14;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		int32_t L_26;
		L_26 = Math_Max_m530EBA549AFD98CFC2BD29FE86C6376E67DF11CF(L_24, L_25, NULL);
		BatchedSendQueue__ctor_m18E80247931EBB63D59B4DD6E4979D0B3D6FCC1E((&V_2), L_26, NULL);
		// m_SendQueue.Add(sendTarget, queue);
		Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* L_27 = __this->___m_SendQueue_35;
		SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_28 = V_1;
		BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 L_29 = V_2;
		NullCheck(L_27);
		Dictionary_2_Add_m370C175FD5C4D5E44F48B00453720BCA3F546BF4(L_27, L_28, L_29, Dictionary_2_Add_m370C175FD5C4D5E44F48B00453720BCA3F546BF4_RuntimeMethod_var);
	}

IL_00bd:
	{
		// if (!queue.PushMessage(payload))
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_30 = ___1_payload;
		bool L_31;
		L_31 = BatchedSendQueue_PushMessage_m4721141E1D061171E1E7105817641CD163A15CFA((&V_2), L_30, NULL);
		V_6 = (bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
		bool L_32 = V_6;
		if (!L_32)
		{
			goto IL_01a2;
		}
	}
	{
		// if (pipeline == m_ReliableSequencedPipeline)
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_33 = V_0;
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_34 = __this->___m_ReliableSequencedPipeline_32;
		bool L_35;
		L_35 = NetworkPipeline_op_Equality_mA9AE79BEA5C9AEEA5EBD0EA49EC22CAC387918D2(L_33, L_34, NULL);
		V_7 = L_35;
		bool L_36 = V_7;
		if (!L_36)
		{
			goto IL_016e;
		}
	}
	{
		// var ngoClientId = NetworkManager?.TransportIdToClientId(clientId) ?? clientId;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_37 = __this->___NetworkManager_34;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_38 = L_37;
		G_B13_0 = L_38;
		if (L_38)
		{
			G_B14_0 = L_38;
			goto IL_00f5;
		}
	}
	{
		uint64_t L_39 = ___0_clientId;
		G_B15_0 = L_39;
		goto IL_00fb;
	}

IL_00f5:
	{
		uint64_t L_40 = ___0_clientId;
		NullCheck(G_B14_0);
		uint64_t L_41;
		L_41 = NetworkManager_TransportIdToClientId_m8B93A6A1E6250B432D49D76E2A63E3A64E0E41ED(G_B14_0, L_40, NULL);
		G_B15_0 = L_41;
	}

IL_00fb:
	{
		V_8 = G_B15_0;
		// Debug.LogError($"Couldn't add payload of size {payload.Count} to reliable send queue. " +
		//     $"Closing connection {ngoClientId} as reliability guarantees can't be maintained.");
		int32_t L_42;
		L_42 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___1_payload), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		int32_t L_43 = L_42;
		RuntimeObject* L_44 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_43);
		String_t* L_45;
		L_45 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteral1812ED2F2239F62391593B71DE1096D7784E218F, L_44, NULL);
		uint64_t L_46 = V_8;
		uint64_t L_47 = L_46;
		RuntimeObject* L_48 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_47);
		String_t* L_49;
		L_49 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(_stringLiteralD5476B4D26F0D93405A47E7865C0C4B7FC148874, L_48, NULL);
		String_t* L_50;
		L_50 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_45, L_49, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_50, NULL);
		// if (clientId == m_ServerClientId)
		uint64_t L_51 = ___0_clientId;
		uint64_t L_52 = __this->___m_ServerClientId_29;
		V_9 = (bool)((((int64_t)L_51) == ((int64_t)L_52))? 1 : 0);
		bool L_53 = V_9;
		if (!L_53)
		{
			goto IL_0149;
		}
	}
	{
		// DisconnectLocalClient();
		VirtualActionInvoker0::Invoke(11 /* System.Void Unity.Netcode.NetworkTransport::DisconnectLocalClient() */, __this);
		goto IL_016b;
	}

IL_0149:
	{
		// DisconnectRemoteClient(clientId);
		uint64_t L_54 = ___0_clientId;
		VirtualActionInvoker1< uint64_t >::Invoke(10 /* System.Void Unity.Netcode.NetworkTransport::DisconnectRemoteClient(System.UInt64) */, __this, L_54);
		// InvokeOnTransportEvent(NetcodeNetworkEvent.Disconnect,
		//     clientId,
		//     default(ArraySegment<byte>),
		//     Time.realtimeSinceStartup);
		uint64_t L_55 = ___0_clientId;
		il2cpp_codegen_initobj((&V_10), sizeof(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093));
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_56 = V_10;
		float L_57;
		L_57 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		NetworkTransport_InvokeOnTransportEvent_m56EFDDC779FB136044F3064BE9E68BF81EB9790F(__this, 2, L_55, L_56, L_57, NULL);
	}

IL_016b:
	{
		goto IL_01a1;
	}

IL_016e:
	{
		// m_Driver.ScheduleFlushSend(default).Complete();
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_58 = (&__this->___m_Driver_27);
		il2cpp_codegen_initobj((&V_11), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_59 = V_11;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_60;
		L_60 = NetworkDriver_ScheduleFlushSend_mD70E667D237F0E074B7B41BB34458119043A0958(L_58, L_59, NULL);
		V_11 = L_60;
		JobHandle_Complete_mDCED35A125AAB37EDDAB2E31C805B4904B614A4A((&V_11), NULL);
		// SendBatchedMessages(sendTarget, queue);
		SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_61 = V_1;
		BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 L_62 = V_2;
		UnityTransport_SendBatchedMessages_m676B328E0E17B2E446769BEC8B541904CAF8C65A(__this, L_61, L_62, NULL);
		// queue.PushMessage(payload);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_63 = ___1_payload;
		bool L_64;
		L_64 = BatchedSendQueue_PushMessage_m4721141E1D061171E1E7105817641CD163A15CFA((&V_2), L_63, NULL);
	}

IL_01a1:
	{
	}

IL_01a2:
	{
		// }
		return;
	}
}
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport::StartClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityTransport_StartClient_m4FA31F88A64822EB6A76CB2CBD014C3DCA7521C0 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B5_0 = 0;
	{
		// if (m_Driver.IsCreated)
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_0 = (&__this->___m_Driver_27);
		bool L_1;
		L_1 = NetworkDriver_get_IsCreated_m006F28C4A90B06A10CD0A09865C6F66C95B6142D(L_0, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0043;
	}

IL_0015:
	{
		// var succeeded = ClientBindAndConnect();
		bool L_3;
		L_3 = UnityTransport_ClientBindAndConnect_m314FF705C9FCF4363F289CDD4674F179E8203BDF(__this, NULL);
		V_0 = L_3;
		// if (!succeeded && m_Driver.IsCreated)
		bool L_4 = V_0;
		if (L_4)
		{
			goto IL_002c;
		}
	}
	{
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_5 = (&__this->___m_Driver_27);
		bool L_6;
		L_6 = NetworkDriver_get_IsCreated_m006F28C4A90B06A10CD0A09865C6F66C95B6142D(L_5, NULL);
		G_B5_0 = ((int32_t)(L_6));
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 0;
	}

IL_002d:
	{
		V_3 = (bool)G_B5_0;
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		// m_Driver.Dispose();
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_8 = (&__this->___m_Driver_27);
		NetworkDriver_Dispose_m2B995E03ECC8DE8FFAD368C217B6D6B47367E28D(L_8, NULL);
	}

IL_003f:
	{
		// return succeeded;
		bool L_9 = V_0;
		V_2 = L_9;
		goto IL_0043;
	}

IL_0043:
	{
		// }
		bool L_10 = V_2;
		return L_10;
	}
}
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport::StartServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnityTransport_StartServer_m5612BA7D209464F20F4C78BD33DA2E52CE1E75A3 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B9_0 = 0;
	int32_t G_B15_0 = 0;
	{
		// if (m_Driver.IsCreated)
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_0 = (&__this->___m_Driver_27);
		bool L_1;
		L_1 = NetworkDriver_get_IsCreated_m006F28C4A90B06A10CD0A09865C6F66C95B6142D(L_0, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_009d;
	}

IL_0018:
	{
		// switch (m_ProtocolType)
		int32_t L_3 = __this->___m_ProtocolType_12;
		V_4 = L_3;
		int32_t L_4 = V_4;
		V_3 = L_4;
		int32_t L_5 = V_3;
		if (!L_5)
		{
			goto IL_002e;
		}
	}
	{
		goto IL_0028;
	}

IL_0028:
	{
		int32_t L_6 = V_3;
		if ((((int32_t)L_6) == ((int32_t)1)))
		{
			goto IL_0069;
		}
	}
	{
		goto IL_0099;
	}

IL_002e:
	{
		// succeeded = ServerBindAndListen(ConnectionData.ListenEndPoint);
		ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865* L_7 = (&__this->___ConnectionData_20);
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_8;
		L_8 = ConnectionAddressData_get_ListenEndPoint_m2B73F5C05418A012BEB4E01A6E43DC7FACBAA8D0(L_7, NULL);
		bool L_9;
		L_9 = UnityTransport_ServerBindAndListen_mB644AE979C589A568E8AB675D01CCABFAF02446F(__this, L_8, NULL);
		V_0 = L_9;
		// if (!succeeded && m_Driver.IsCreated)
		bool L_10 = V_0;
		if (L_10)
		{
			goto IL_0050;
		}
	}
	{
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_11 = (&__this->___m_Driver_27);
		bool L_12;
		L_12 = NetworkDriver_get_IsCreated_m006F28C4A90B06A10CD0A09865C6F66C95B6142D(L_11, NULL);
		G_B9_0 = ((int32_t)(L_12));
		goto IL_0051;
	}

IL_0050:
	{
		G_B9_0 = 0;
	}

IL_0051:
	{
		V_5 = (bool)G_B9_0;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0065;
		}
	}
	{
		// m_Driver.Dispose();
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_14 = (&__this->___m_Driver_27);
		NetworkDriver_Dispose_m2B995E03ECC8DE8FFAD368C217B6D6B47367E28D(L_14, NULL);
	}

IL_0065:
	{
		// return succeeded;
		bool L_15 = V_0;
		V_2 = L_15;
		goto IL_009d;
	}

IL_0069:
	{
		// succeeded = StartRelayServer();
		bool L_16;
		L_16 = UnityTransport_StartRelayServer_m6AABA070D1F162026424AF5D7DD02FD6C9227097(__this, NULL);
		V_0 = L_16;
		// if (!succeeded && m_Driver.IsCreated)
		bool L_17 = V_0;
		if (L_17)
		{
			goto IL_0080;
		}
	}
	{
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_18 = (&__this->___m_Driver_27);
		bool L_19;
		L_19 = NetworkDriver_get_IsCreated_m006F28C4A90B06A10CD0A09865C6F66C95B6142D(L_18, NULL);
		G_B15_0 = ((int32_t)(L_19));
		goto IL_0081;
	}

IL_0080:
	{
		G_B15_0 = 0;
	}

IL_0081:
	{
		V_6 = (bool)G_B15_0;
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_0095;
		}
	}
	{
		// m_Driver.Dispose();
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_21 = (&__this->___m_Driver_27);
		NetworkDriver_Dispose_m2B995E03ECC8DE8FFAD368C217B6D6B47367E28D(L_21, NULL);
	}

IL_0095:
	{
		// return succeeded;
		bool L_22 = V_0;
		V_2 = L_22;
		goto IL_009d;
	}

IL_0099:
	{
		// return false;
		V_2 = (bool)0;
		goto IL_009d;
	}

IL_009d:
	{
		// }
		bool L_23 = V_2;
		return L_23;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_Shutdown_m1621E8704F3F914888483AB0EABDACF431E158FF (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Clear_m062CEB4C99310EDD758768644696BB43C6F8A27B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m121C176E03C8FAF9DD3D1327B0A5A740A8DC540A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m9FB01015E439E90A10738C6134B30FC96A29F20D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBA961C119140246EE3B77080B59C1B2158E45A94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mA410D3A25B765A2E862298CB4901BDB78D1189EE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Key_m021A1F603DB4FEC5A0CD6EF0D2D1B681694BEB7E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m241D85407DA71D4A8C7A5158985F82472CC4C8C5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Enumerator_t88E97C0EC0DCA5E1994B18881637E25E4AEC96AD V_1;
	memset((&V_1), 0, sizeof(V_1));
	KeyValuePair_2_tD9D8D451DD3BF1ED3A1A65D8945C85F8A5C93293 V_2;
	memset((&V_2), 0, sizeof(V_2));
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (!m_Driver.IsCreated)
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_0 = (&__this->___m_Driver_27);
		bool L_1;
		L_1 = NetworkDriver_get_IsCreated_m006F28C4A90B06A10CD0A09865C6F66C95B6142D(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// return;
		goto IL_0099;
	}

IL_0019:
	{
		// foreach (var kvp in m_SendQueue)
		Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* L_3 = __this->___m_SendQueue_35;
		NullCheck(L_3);
		Enumerator_t88E97C0EC0DCA5E1994B18881637E25E4AEC96AD L_4;
		L_4 = Dictionary_2_GetEnumerator_m121C176E03C8FAF9DD3D1327B0A5A740A8DC540A(L_3, Dictionary_2_GetEnumerator_m121C176E03C8FAF9DD3D1327B0A5A740A8DC540A_RuntimeMethod_var);
		V_1 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0052:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m9FB01015E439E90A10738C6134B30FC96A29F20D((&V_1), Enumerator_Dispose_m9FB01015E439E90A10738C6134B30FC96A29F20D_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0047_1;
			}

IL_0028_1:
			{
				// foreach (var kvp in m_SendQueue)
				KeyValuePair_2_tD9D8D451DD3BF1ED3A1A65D8945C85F8A5C93293 L_5;
				L_5 = Enumerator_get_Current_mA410D3A25B765A2E862298CB4901BDB78D1189EE_inline((&V_1), Enumerator_get_Current_mA410D3A25B765A2E862298CB4901BDB78D1189EE_RuntimeMethod_var);
				V_2 = L_5;
				// SendBatchedMessages(kvp.Key, kvp.Value);
				SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_6;
				L_6 = KeyValuePair_2_get_Key_m021A1F603DB4FEC5A0CD6EF0D2D1B681694BEB7E_inline((&V_2), KeyValuePair_2_get_Key_m021A1F603DB4FEC5A0CD6EF0D2D1B681694BEB7E_RuntimeMethod_var);
				BatchedSendQueue_t02561F5EACBA3E6C3E02337D82B685BF701AF988 L_7;
				L_7 = KeyValuePair_2_get_Value_m241D85407DA71D4A8C7A5158985F82472CC4C8C5_inline((&V_2), KeyValuePair_2_get_Value_m241D85407DA71D4A8C7A5158985F82472CC4C8C5_RuntimeMethod_var);
				UnityTransport_SendBatchedMessages_m676B328E0E17B2E446769BEC8B541904CAF8C65A(__this, L_6, L_7, NULL);
			}

IL_0047_1:
			{
				// foreach (var kvp in m_SendQueue)
				bool L_8;
				L_8 = Enumerator_MoveNext_mBA961C119140246EE3B77080B59C1B2158E45A94((&V_1), Enumerator_MoveNext_mBA961C119140246EE3B77080B59C1B2158E45A94_RuntimeMethod_var);
				if (L_8)
				{
					goto IL_0028_1;
				}
			}
			{
				goto IL_0061;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0061:
	{
		// m_Driver.ScheduleUpdate().Complete();
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_9 = (&__this->___m_Driver_27);
		il2cpp_codegen_initobj((&V_3), sizeof(JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08));
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_10 = V_3;
		JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 L_11;
		L_11 = NetworkDriver_ScheduleUpdate_mBF306FD6BA96C2D1439D9322429EDFB7FF581A14(L_9, L_10, NULL);
		V_3 = L_11;
		JobHandle_Complete_mDCED35A125AAB37EDDAB2E31C805B4904B614A4A((&V_3), NULL);
		// DisposeInternals();
		UnityTransport_DisposeInternals_mF5FB50D48F59B47C7FD498535BCE4A6933874303(__this, NULL);
		// m_ReliableReceiveQueues.Clear();
		Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A* L_12 = __this->___m_ReliableReceiveQueues_36;
		NullCheck(L_12);
		Dictionary_2_Clear_m062CEB4C99310EDD758768644696BB43C6F8A27B(L_12, Dictionary_2_Clear_m062CEB4C99310EDD758768644696BB43C6F8A27B_RuntimeMethod_var);
		// m_ServerClientId = 0;
		__this->___m_ServerClientId_29 = ((int64_t)0);
	}

IL_0099:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::ConfigureSimulatorForUtp1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_ConfigureSimulatorForUtp1_mFF544D83794051D6C5FC63C364211D6A14BE01E3 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_GetValueOrDefault_m1534AD85F2094EE7E4C958FBEE356468ED7A1B51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_HasValue_mDEB82F7445A31CA12FE47E887EAE322E7ABB1B54_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t G_B2_0 = 0;
	int32_t G_B2_1 = 0;
	int32_t G_B2_2 = 0;
	int32_t G_B2_3 = 0;
	int32_t G_B2_4 = 0;
	int32_t G_B2_5 = 0;
	int32_t G_B2_6 = 0;
	int32_t G_B2_7 = 0;
	NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* G_B2_8 = NULL;
	int32_t G_B1_0 = 0;
	int32_t G_B1_1 = 0;
	int32_t G_B1_2 = 0;
	int32_t G_B1_3 = 0;
	int32_t G_B1_4 = 0;
	int32_t G_B1_5 = 0;
	int32_t G_B1_6 = 0;
	int32_t G_B1_7 = 0;
	NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* G_B1_8 = NULL;
	uint32_t G_B3_0 = 0;
	int32_t G_B3_1 = 0;
	int32_t G_B3_2 = 0;
	int32_t G_B3_3 = 0;
	int32_t G_B3_4 = 0;
	int32_t G_B3_5 = 0;
	int32_t G_B3_6 = 0;
	int32_t G_B3_7 = 0;
	int32_t G_B3_8 = 0;
	NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* G_B3_9 = NULL;
	{
		// m_NetworkSettings.WithSimulatorStageParameters(
		//     maxPacketCount: 300, // TODO Is there any way to compute a better value?
		//     maxPacketSize: NetworkParameterConstants.MTU,
		//     packetDelayMs: DebugSimulator.PacketDelayMS,
		//     packetJitterMs: DebugSimulator.PacketJitterMS,
		//     packetDropPercentage: DebugSimulator.PacketDropRate,
		//     randomSeed: DebugSimulatorRandomSeed ?? (uint)System.Diagnostics.Stopwatch.GetTimestamp()
		// );
		NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* L_0 = (&__this->___m_NetworkSettings_28);
		SimulatorParameters_tC3C55F01C7027F7CBEA00FBD6828ACBBE16F3A67* L_1 = (&__this->___DebugSimulator_21);
		int32_t L_2 = L_1->___PacketDelayMS_0;
		SimulatorParameters_tC3C55F01C7027F7CBEA00FBD6828ACBBE16F3A67* L_3 = (&__this->___DebugSimulator_21);
		int32_t L_4 = L_3->___PacketJitterMS_1;
		SimulatorParameters_tC3C55F01C7027F7CBEA00FBD6828ACBBE16F3A67* L_5 = (&__this->___DebugSimulator_21);
		int32_t L_6 = L_5->___PacketDropRate_2;
		Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 L_7;
		L_7 = UnityTransport_get_DebugSimulatorRandomSeed_m4C482F701019EFFA6017A5FAE91F2458BEF684FE_inline(__this, NULL);
		V_0 = L_7;
		bool L_8;
		L_8 = Nullable_1_get_HasValue_mDEB82F7445A31CA12FE47E887EAE322E7ABB1B54_inline((&V_0), Nullable_1_get_HasValue_mDEB82F7445A31CA12FE47E887EAE322E7ABB1B54_RuntimeMethod_var);
		G_B1_0 = 0;
		G_B1_1 = 0;
		G_B1_2 = L_6;
		G_B1_3 = 0;
		G_B1_4 = L_4;
		G_B1_5 = L_2;
		G_B1_6 = ((int32_t)1400);
		G_B1_7 = ((int32_t)300);
		G_B1_8 = L_0;
		if (L_8)
		{
			G_B2_0 = 0;
			G_B2_1 = 0;
			G_B2_2 = L_6;
			G_B2_3 = 0;
			G_B2_4 = L_4;
			G_B2_5 = L_2;
			G_B2_6 = ((int32_t)1400);
			G_B2_7 = ((int32_t)300);
			G_B2_8 = L_0;
			goto IL_004d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Stopwatch_tA188A210449E22C07053A7D3014DD182C7369043_il2cpp_TypeInfo_var);
		int64_t L_9;
		L_9 = Stopwatch_GetTimestamp_mA3BDF219C573A34751D6A792E86C825B74D2CEB7(NULL);
		G_B3_0 = ((uint32_t)(((int32_t)(uint32_t)L_9)));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		G_B3_4 = G_B1_3;
		G_B3_5 = G_B1_4;
		G_B3_6 = G_B1_5;
		G_B3_7 = G_B1_6;
		G_B3_8 = G_B1_7;
		G_B3_9 = G_B1_8;
		goto IL_0054;
	}

IL_004d:
	{
		uint32_t L_10;
		L_10 = Nullable_1_GetValueOrDefault_m1534AD85F2094EE7E4C958FBEE356468ED7A1B51_inline((&V_0), Nullable_1_GetValueOrDefault_m1534AD85F2094EE7E4C958FBEE356468ED7A1B51_RuntimeMethod_var);
		G_B3_0 = L_10;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		G_B3_4 = G_B2_3;
		G_B3_5 = G_B2_4;
		G_B3_6 = G_B2_5;
		G_B3_7 = G_B2_6;
		G_B3_8 = G_B2_7;
		G_B3_9 = G_B2_8;
	}

IL_0054:
	{
		NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* L_11;
		L_11 = SimulatorStageParameterExtensions_WithSimulatorStageParameters_mC426EFA09868B412137F4DA2770D658A594E8B1B(G_B3_9, G_B3_8, G_B3_7, G_B3_6, G_B3_5, G_B3_4, G_B3_3, G_B3_2, G_B3_1, G_B3_0, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SetServerSecrets(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SetServerSecrets_m684BAAECD15C338E085AC16DB4CE73B1AA28E027 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, String_t* ___0_serverCertificate, String_t* ___1_serverPrivateKey, const RuntimeMethod* method) 
{
	{
		// m_ServerPrivateKey = serverPrivateKey;
		String_t* L_0 = ___1_serverPrivateKey;
		__this->___m_ServerPrivateKey_37 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ServerPrivateKey_37), (void*)L_0);
		// m_ServerCertificate = serverCertificate;
		String_t* L_1 = ___0_serverCertificate;
		__this->___m_ServerCertificate_38 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ServerCertificate_38), (void*)L_1);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SetClientSecrets(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SetClientSecrets_mEF4456DE072468B4B0F3133CA9A61B32FFD3DCC5 (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, String_t* ___0_serverCommonName, String_t* ___1_caCertificate, const RuntimeMethod* method) 
{
	{
		// m_ServerCommonName = serverCommonName;
		String_t* L_0 = ___0_serverCommonName;
		__this->___m_ServerCommonName_39 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ServerCommonName_39), (void*)L_0);
		// m_ClientCaCertificate = caCertificate;
		String_t* L_1 = ___1_caCertificate;
		__this->___m_ClientCaCertificate_40 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ClientCaCertificate_40), (void*)L_1);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::CreateDriver(Unity.Netcode.Transports.UTP.UnityTransport,Unity.Networking.Transport.NetworkDriver&,Unity.Networking.Transport.NetworkPipeline&,Unity.Networking.Transport.NetworkPipeline&,Unity.Networking.Transport.NetworkPipeline&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_CreateDriver_mDD45116E8912CE7A9069395A8F86894E77B9CD5C (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* ___0_transport, NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* ___1_driver, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* ___2_unreliableFragmentedPipeline, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* ___3_unreliableSequencedFragmentedPipeline, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* ___4_reliableSequencedPipeline, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// ConfigureSimulatorForUtp1();
		UnityTransport_ConfigureSimulatorForUtp1_mFF544D83794051D6C5FC63C364211D6A14BE01E3(__this, NULL);
		//             m_NetworkSettings.WithNetworkConfigParameters(
		//                 maxConnectAttempts: transport.m_MaxConnectAttempts,
		//                 connectTimeoutMS: transport.m_ConnectTimeoutMS,
		//                 disconnectTimeoutMS: transport.m_DisconnectTimeoutMS,
		// #if UTP_TRANSPORT_2_0_ABOVE
		//                 sendQueueCapacity: m_MaxPacketQueueSize,
		//                 receiveQueueCapacity: m_MaxPacketQueueSize,
		// #endif
		//                 heartbeatTimeoutMS: transport.m_HeartbeatTimeoutMS);
		NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* L_0 = (&__this->___m_NetworkSettings_28);
		UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* L_1 = ___0_transport;
		NullCheck(L_1);
		int32_t L_2 = L_1->___m_MaxConnectAttempts_18;
		V_0 = L_2;
		UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* L_3 = ___0_transport;
		NullCheck(L_3);
		int32_t L_4 = L_3->___m_ConnectTimeoutMS_17;
		int32_t L_5 = V_0;
		UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* L_6 = ___0_transport;
		NullCheck(L_6);
		int32_t L_7 = L_6->___m_DisconnectTimeoutMS_19;
		UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* L_8 = ___0_transport;
		NullCheck(L_8);
		int32_t L_9 = L_8->___m_HeartbeatTimeoutMS_16;
		NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0* L_10;
		L_10 = CommonNetworkParametersExtensions_WithNetworkConfigParameters_m6EF7D65466B63D63B632D3D5BDF49CB47CD938F7(L_0, L_4, L_5, L_7, L_9, 0, 0, NULL);
		// driver = NetworkDriver.Create(m_NetworkSettings);
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_11 = ___1_driver;
		NetworkSettings_tF4E51C6335E296671D0F783AF9497052A3D903E0 L_12 = __this->___m_NetworkSettings_28;
		il2cpp_codegen_runtime_class_init_inline(NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036_il2cpp_TypeInfo_var);
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036 L_13;
		L_13 = NetworkDriver_Create_m28AD7ED83DAC754E2CF8605F6DC7465203B42DBE(L_12, NULL);
		*(NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036*)L_11 = L_13;
		// SetupPipelinesForUtp1(driver,
		//     out unreliableFragmentedPipeline,
		//     out unreliableSequencedFragmentedPipeline,
		//     out reliableSequencedPipeline);
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036* L_14 = ___1_driver;
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036 L_15 = (*(NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036*)L_14);
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* L_16 = ___2_unreliableFragmentedPipeline;
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* L_17 = ___3_unreliableSequencedFragmentedPipeline;
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* L_18 = ___4_reliableSequencedPipeline;
		UnityTransport_SetupPipelinesForUtp1_mBB88F9D60C339BA6D7462E30462B02BDC10A7B3D(__this, L_15, L_16, L_17, L_18, NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::SetupPipelinesForUtp1(Unity.Networking.Transport.NetworkDriver,Unity.Networking.Transport.NetworkPipeline&,Unity.Networking.Transport.NetworkPipeline&,Unity.Networking.Transport.NetworkPipeline&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport_SetupPipelinesForUtp1_mBB88F9D60C339BA6D7462E30462B02BDC10A7B3D (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036 ___0_driver, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* ___1_unreliableFragmentedPipeline, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* ___2_unreliableSequencedFragmentedPipeline, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* ___3_reliableSequencedPipeline, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FragmentationPipelineStage_tE8E0162E8E2630293BB6E178E70841B1C8CEA498_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReliableSequencedPipelineStage_tF426F5730ACE7F0BF084710243FE5F60DE8EA510_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimulatorPipelineStageInSend_tA32732D9C7A8471B8CBF9A9DDC85D645A6D88402_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SimulatorPipelineStage_t8716306836063338A91F9A19441327935FDAE218_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnreliableSequencedPipelineStage_t625184725960F7CD0FC7FF99316E91B304E581AC_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// if (DebugSimulator.PacketDelayMS > 0 || DebugSimulator.PacketDropRate > 0)
		SimulatorParameters_tC3C55F01C7027F7CBEA00FBD6828ACBBE16F3A67* L_0 = (&__this->___DebugSimulator_21);
		int32_t L_1 = L_0->___PacketDelayMS_0;
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_001f;
		}
	}
	{
		SimulatorParameters_tC3C55F01C7027F7CBEA00FBD6828ACBBE16F3A67* L_2 = (&__this->___DebugSimulator_21);
		int32_t L_3 = L_2->___PacketDropRate_2;
		G_B3_0 = ((((int32_t)L_3) > ((int32_t)0))? 1 : 0);
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
			goto IL_00e7;
		}
	}
	{
		//                 unreliableFragmentedPipeline = driver.CreatePipeline(
		//                     typeof(FragmentationPipelineStage),
		//                     typeof(SimulatorPipelineStage),
		//                     typeof(SimulatorPipelineStageInSend)
		// #if MULTIPLAYER_TOOLS_1_0_0_PRE_7
		//                     , typeof(NetworkMetricsPipelineStage)
		// #endif
		//                 );
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* L_5 = ___1_unreliableFragmentedPipeline;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_6 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)3);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_7 = L_6;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (FragmentationPipelineStage_tE8E0162E8E2630293BB6E178E70841B1C8CEA498_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_9);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_10 = L_7;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (SimulatorPipelineStage_t8716306836063338A91F9A19441327935FDAE218_0_0_0_var) };
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, L_12);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_12);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_13 = L_10;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (SimulatorPipelineStageInSend_tA32732D9C7A8471B8CBF9A9DDC85D645A6D88402_0_0_0_var) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_15);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t*)L_15);
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_16;
		L_16 = NetworkDriver_CreatePipeline_mB6407333A9AE696CECBAFA7A0389DA04F35AAB9C((&___0_driver), L_13, NULL);
		*(NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69*)L_5 = L_16;
		//                 unreliableSequencedFragmentedPipeline = driver.CreatePipeline(
		//                     typeof(FragmentationPipelineStage),
		//                     typeof(UnreliableSequencedPipelineStage),
		//                     typeof(SimulatorPipelineStage),
		//                     typeof(SimulatorPipelineStageInSend)
		// #if MULTIPLAYER_TOOLS_1_0_0_PRE_7
		//                     , typeof(NetworkMetricsPipelineStage)
		// #endif
		//                 );
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* L_17 = ___2_unreliableSequencedFragmentedPipeline;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_18 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)4);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_19 = L_18;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (FragmentationPipelineStage_tE8E0162E8E2630293BB6E178E70841B1C8CEA498_0_0_0_var) };
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, L_21);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_21);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_22 = L_19;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (UnreliableSequencedPipelineStage_t625184725960F7CD0FC7FF99316E91B304E581AC_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_24);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_24);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_25 = L_22;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (SimulatorPipelineStage_t8716306836063338A91F9A19441327935FDAE218_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_26, NULL);
		NullCheck(L_25);
		ArrayElementTypeCheck (L_25, L_27);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t*)L_27);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_28 = L_25;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (SimulatorPipelineStageInSend_tA32732D9C7A8471B8CBF9A9DDC85D645A6D88402_0_0_0_var) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_30);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(3), (Type_t*)L_30);
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_31;
		L_31 = NetworkDriver_CreatePipeline_mB6407333A9AE696CECBAFA7A0389DA04F35AAB9C((&___0_driver), L_28, NULL);
		*(NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69*)L_17 = L_31;
		//                 reliableSequencedPipeline = driver.CreatePipeline(
		//                     typeof(ReliableSequencedPipelineStage),
		//                     typeof(SimulatorPipelineStage),
		//                     typeof(SimulatorPipelineStageInSend)
		// #if MULTIPLAYER_TOOLS_1_0_0_PRE_7
		//                     , typeof(NetworkMetricsPipelineStage)
		// #endif
		//                 );
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* L_32 = ___3_reliableSequencedPipeline;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_33 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)3);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_34 = L_33;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (ReliableSequencedPipelineStage_tF426F5730ACE7F0BF084710243FE5F60DE8EA510_0_0_0_var) };
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, L_36);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_36);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_37 = L_34;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (SimulatorPipelineStage_t8716306836063338A91F9A19441327935FDAE218_0_0_0_var) };
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, L_39);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_39);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_40 = L_37;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_41 = { reinterpret_cast<intptr_t> (SimulatorPipelineStageInSend_tA32732D9C7A8471B8CBF9A9DDC85D645A6D88402_0_0_0_var) };
		Type_t* L_42;
		L_42 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_41, NULL);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_42);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(2), (Type_t*)L_42);
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_43;
		L_43 = NetworkDriver_CreatePipeline_mB6407333A9AE696CECBAFA7A0389DA04F35AAB9C((&___0_driver), L_40, NULL);
		*(NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69*)L_32 = L_43;
		goto IL_0157;
	}

IL_00e7:
	{
		//                 unreliableFragmentedPipeline = driver.CreatePipeline(
		//                     typeof(FragmentationPipelineStage)
		// #if MULTIPLAYER_TOOLS_1_0_0_PRE_7
		//                     , typeof(NetworkMetricsPipelineStage)
		// #endif
		//                 );
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* L_44 = ___1_unreliableFragmentedPipeline;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_45 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_46 = L_45;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_47 = { reinterpret_cast<intptr_t> (FragmentationPipelineStage_tE8E0162E8E2630293BB6E178E70841B1C8CEA498_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_48;
		L_48 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_47, NULL);
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, L_48);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_48);
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_49;
		L_49 = NetworkDriver_CreatePipeline_mB6407333A9AE696CECBAFA7A0389DA04F35AAB9C((&___0_driver), L_46, NULL);
		*(NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69*)L_44 = L_49;
		//                 unreliableSequencedFragmentedPipeline = driver.CreatePipeline(
		//                     typeof(FragmentationPipelineStage),
		//                     typeof(UnreliableSequencedPipelineStage)
		// #if MULTIPLAYER_TOOLS_1_0_0_PRE_7
		//                     , typeof(NetworkMetricsPipelineStage)
		// #endif
		//                 );
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* L_50 = ___2_unreliableSequencedFragmentedPipeline;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_51 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)2);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_52 = L_51;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_53 = { reinterpret_cast<intptr_t> (FragmentationPipelineStage_tE8E0162E8E2630293BB6E178E70841B1C8CEA498_0_0_0_var) };
		Type_t* L_54;
		L_54 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_53, NULL);
		NullCheck(L_52);
		ArrayElementTypeCheck (L_52, L_54);
		(L_52)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_54);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_55 = L_52;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_56 = { reinterpret_cast<intptr_t> (UnreliableSequencedPipelineStage_t625184725960F7CD0FC7FF99316E91B304E581AC_0_0_0_var) };
		Type_t* L_57;
		L_57 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_56, NULL);
		NullCheck(L_55);
		ArrayElementTypeCheck (L_55, L_57);
		(L_55)->SetAt(static_cast<il2cpp_array_size_t>(1), (Type_t*)L_57);
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_58;
		L_58 = NetworkDriver_CreatePipeline_mB6407333A9AE696CECBAFA7A0389DA04F35AAB9C((&___0_driver), L_55, NULL);
		*(NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69*)L_50 = L_58;
		//                 reliableSequencedPipeline = driver.CreatePipeline(
		//                     typeof(ReliableSequencedPipelineStage)
		// #if MULTIPLAYER_TOOLS_1_0_0_PRE_7
		//                     , typeof(NetworkMetricsPipelineStage)
		// #endif
		//                 );
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69* L_59 = ___3_reliableSequencedPipeline;
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_60 = (TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB*)SZArrayNew(TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB_il2cpp_TypeInfo_var, (uint32_t)1);
		TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* L_61 = L_60;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_62 = { reinterpret_cast<intptr_t> (ReliableSequencedPipelineStage_tF426F5730ACE7F0BF084710243FE5F60DE8EA510_0_0_0_var) };
		Type_t* L_63;
		L_63 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_62, NULL);
		NullCheck(L_61);
		ArrayElementTypeCheck (L_61, L_63);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(0), (Type_t*)L_63);
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_64;
		L_64 = NetworkDriver_CreatePipeline_mB6407333A9AE696CECBAFA7A0389DA04F35AAB9C((&___0_driver), L_61, NULL);
		*(NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69*)L_59 = L_64;
	}

IL_0157:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport__ctor_mEB73F6512BBAAEB46A28608909209C1479EEFA7E (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m183C736BA89D63C3380553A7C79BE36E329A3C81_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m9CA0898CE2B1D9B7833037BB9A2F78339ABB90F8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SimulatorParameters_tC3C55F01C7027F7CBEA00FBD6828ACBBE16F3A67 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// private int m_MaxPacketQueueSize = InitialMaxPacketQueueSize;
		__this->___m_MaxPacketQueueSize_13 = ((int32_t)128);
		// private int m_MaxPayloadSize = InitialMaxPayloadSize;
		__this->___m_MaxPayloadSize_14 = ((int32_t)6144);
		// private int m_MaxSendQueueSize = 0;
		__this->___m_MaxSendQueueSize_15 = 0;
		// private int m_HeartbeatTimeoutMS = NetworkParameterConstants.HeartbeatTimeoutMS;
		__this->___m_HeartbeatTimeoutMS_16 = ((int32_t)500);
		// private int m_ConnectTimeoutMS = NetworkParameterConstants.ConnectTimeoutMS;
		__this->___m_ConnectTimeoutMS_17 = ((int32_t)1000);
		// private int m_MaxConnectAttempts = NetworkParameterConstants.MaxConnectAttempts;
		__this->___m_MaxConnectAttempts_18 = ((int32_t)60);
		// private int m_DisconnectTimeoutMS = NetworkParameterConstants.DisconnectTimeoutMS;
		__this->___m_DisconnectTimeoutMS_19 = ((int32_t)30000);
		// public ConnectionAddressData ConnectionData = s_DefaultConnectionAddressData;
		il2cpp_codegen_runtime_class_init_inline(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865 L_0 = ((UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_StaticFields*)il2cpp_codegen_static_fields_for(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var))->___s_DefaultConnectionAddressData_10;
		__this->___ConnectionData_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___ConnectionData_20))->___Address_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&__this->___ConnectionData_20))->___ServerListenAddress_2), (void*)NULL);
		#endif
		// public SimulatorParameters DebugSimulator = new SimulatorParameters
		// {
		//     PacketDelayMS = 0,
		//     PacketJitterMS = 0,
		//     PacketDropRate = 0
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(SimulatorParameters_tC3C55F01C7027F7CBEA00FBD6828ACBBE16F3A67));
		(&V_0)->___PacketDelayMS_0 = 0;
		(&V_0)->___PacketJitterMS_1 = 0;
		(&V_0)->___PacketDropRate_2 = 0;
		SimulatorParameters_tC3C55F01C7027F7CBEA00FBD6828ACBBE16F3A67 L_1 = V_0;
		__this->___DebugSimulator_21 = L_1;
		// internal uint? DebugSimulatorRandomSeed { get; set; } = null;
		Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099* L_2 = (&__this->___U3CDebugSimulatorRandomSeedU3Ek__BackingField_22);
		il2cpp_codegen_initobj(L_2, sizeof(Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099));
		// private PacketLossCache m_PacketLossCache = new PacketLossCache();
		PacketLossCache_t70FF92B1C896E15478DE602E65D74DD34AADA3D7* L_3 = (&__this->___m_PacketLossCache_25);
		il2cpp_codegen_initobj(L_3, sizeof(PacketLossCache_t70FF92B1C896E15478DE602E65D74DD34AADA3D7));
		// private State m_State = State.Disconnected;
		__this->___m_State_26 = 0;
		// private readonly Dictionary<SendTarget, BatchedSendQueue> m_SendQueue = new Dictionary<SendTarget, BatchedSendQueue>();
		Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C* L_4 = (Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C*)il2cpp_codegen_object_new(Dictionary_2_t9130683265B11F47AF4883A8C11CFF9042353D7C_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Dictionary_2__ctor_m9CA0898CE2B1D9B7833037BB9A2F78339ABB90F8(L_4, Dictionary_2__ctor_m9CA0898CE2B1D9B7833037BB9A2F78339ABB90F8_RuntimeMethod_var);
		__this->___m_SendQueue_35 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_SendQueue_35), (void*)L_4);
		// private readonly Dictionary<ulong, BatchedReceiveQueue> m_ReliableReceiveQueues = new Dictionary<ulong, BatchedReceiveQueue>();
		Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A* L_5 = (Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A*)il2cpp_codegen_object_new(Dictionary_2_tC2CF9601A39271B876E79D1A06B630105A5ADD1A_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Dictionary_2__ctor_m183C736BA89D63C3380553A7C79BE36E329A3C81(L_5, Dictionary_2__ctor_m183C736BA89D63C3380553A7C79BE36E329A3C81_RuntimeMethod_var);
		__this->___m_ReliableReceiveQueues_36 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_ReliableReceiveQueues_36), (void*)L_5);
		NetworkTransport__ctor_m4539E8F121DB9DFB42D7B63EC51A14FB1C7738AF(__this, NULL);
		return;
	}
}
// System.Void Unity.Netcode.Transports.UTP.UnityTransport::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityTransport__cctor_m255D25B358930E8CFF3C281AE9F70A3E5AD545A8 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// private static ConnectionAddressData s_DefaultConnectionAddressData = new ConnectionAddressData { Address = "127.0.0.1", Port = 7777, ServerListenAddress = string.Empty };
		il2cpp_codegen_initobj((&V_0), sizeof(ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865));
		(&V_0)->___Address_0 = _stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___Address_0), (void*)_stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE);
		(&V_0)->___Port_1 = (uint16_t)((int32_t)7777);
		String_t* L_0 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		(&V_0)->___ServerListenAddress_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&(&V_0)->___ServerListenAddress_2), (void*)L_0);
		ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865 L_1 = V_0;
		((UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_StaticFields*)il2cpp_codegen_static_fields_for(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var))->___s_DefaultConnectionAddressData_10 = L_1;
		Il2CppCodeGenWriteBarrier((void**)&(((&((UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_StaticFields*)il2cpp_codegen_static_fields_for(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var))->___s_DefaultConnectionAddressData_10))->___Address_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&((UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_StaticFields*)il2cpp_codegen_static_fields_for(UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4_il2cpp_TypeInfo_var))->___s_DefaultConnectionAddressData_10))->___ServerListenAddress_2), (void*)NULL);
		#endif
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
// Conversion methods for marshalling of: Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData
IL2CPP_EXTERN_C void ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshal_pinvoke(const ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865& unmarshaled, ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshaled_pinvoke& marshaled)
{
	marshaled.___Address_0 = il2cpp_codegen_marshal_string(unmarshaled.___Address_0);
	marshaled.___Port_1 = unmarshaled.___Port_1;
	marshaled.___ServerListenAddress_2 = il2cpp_codegen_marshal_string(unmarshaled.___ServerListenAddress_2);
}
IL2CPP_EXTERN_C void ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshal_pinvoke_back(const ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshaled_pinvoke& marshaled, ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865& unmarshaled)
{
	unmarshaled.___Address_0 = il2cpp_codegen_marshal_string_result(marshaled.___Address_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Address_0), (void*)il2cpp_codegen_marshal_string_result(marshaled.___Address_0));
	uint16_t unmarshaledPort_temp_1 = 0;
	unmarshaledPort_temp_1 = marshaled.___Port_1;
	unmarshaled.___Port_1 = unmarshaledPort_temp_1;
	unmarshaled.___ServerListenAddress_2 = il2cpp_codegen_marshal_string_result(marshaled.___ServerListenAddress_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ServerListenAddress_2), (void*)il2cpp_codegen_marshal_string_result(marshaled.___ServerListenAddress_2));
}
// Conversion method for clean up from marshalling of: Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData
IL2CPP_EXTERN_C void ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshal_pinvoke_cleanup(ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Address_0);
	marshaled.___Address_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___ServerListenAddress_2);
	marshaled.___ServerListenAddress_2 = NULL;
}
// Conversion methods for marshalling of: Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData
IL2CPP_EXTERN_C void ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshal_com(const ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865& unmarshaled, ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshaled_com& marshaled)
{
	marshaled.___Address_0 = il2cpp_codegen_marshal_bstring(unmarshaled.___Address_0);
	marshaled.___Port_1 = unmarshaled.___Port_1;
	marshaled.___ServerListenAddress_2 = il2cpp_codegen_marshal_bstring(unmarshaled.___ServerListenAddress_2);
}
IL2CPP_EXTERN_C void ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshal_com_back(const ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshaled_com& marshaled, ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865& unmarshaled)
{
	unmarshaled.___Address_0 = il2cpp_codegen_marshal_bstring_result(marshaled.___Address_0);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___Address_0), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___Address_0));
	uint16_t unmarshaledPort_temp_1 = 0;
	unmarshaledPort_temp_1 = marshaled.___Port_1;
	unmarshaled.___Port_1 = unmarshaledPort_temp_1;
	unmarshaled.___ServerListenAddress_2 = il2cpp_codegen_marshal_bstring_result(marshaled.___ServerListenAddress_2);
	Il2CppCodeGenWriteBarrier((void**)(&unmarshaled.___ServerListenAddress_2), (void*)il2cpp_codegen_marshal_bstring_result(marshaled.___ServerListenAddress_2));
}
// Conversion method for clean up from marshalling of: Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData
IL2CPP_EXTERN_C void ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshal_com_cleanup(ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___Address_0);
	marshaled.___Address_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___ServerListenAddress_2);
	marshaled.___ServerListenAddress_2 = NULL;
}
// Unity.Networking.Transport.NetworkEndPoint Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData::ParseNetworkEndpoint(System.String,System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ConnectionAddressData_ParseNetworkEndpoint_m11DE31B21D1DFD889066782743112F705D61B9F2 (String_t* ___0_ip, uint16_t ___1_port, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE41C5B6E51FFAC441D1612E7E7728CE5C169F3A4);
		s_Il2CppMethodInitialized = true;
	}
	NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B3_0 = 0;
	{
		// NetworkEndpoint endpoint = default;
		il2cpp_codegen_initobj((&V_0), sizeof(NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63));
		// if (!NetworkEndpoint.TryParse(ip, port, out endpoint, NetworkFamily.Ipv4) &&
		//     !NetworkEndpoint.TryParse(ip, port, out endpoint, NetworkFamily.Ipv6))
		String_t* L_0 = ___0_ip;
		uint16_t L_1 = ___1_port;
		il2cpp_codegen_runtime_class_init_inline(NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = NetworkEndPoint_TryParse_mFB525A245C1DE79526D34FEBC03F49BC6428CD4E(L_0, L_1, (&V_0), 2, NULL);
		if (L_2)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_3 = ___0_ip;
		uint16_t L_4 = ___1_port;
		il2cpp_codegen_runtime_class_init_inline(NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = NetworkEndPoint_TryParse_mFB525A245C1DE79526D34FEBC03F49BC6428CD4E(L_3, L_4, (&V_0), ((int32_t)23), NULL);
		G_B3_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
	}

IL_0026:
	{
		V_1 = (bool)G_B3_0;
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0043;
		}
	}
	{
		// Debug.LogError($"Invalid network endpoint: {ip}:{port}.");
		String_t* L_7 = ___0_ip;
		uint16_t L_8 = ___1_port;
		uint16_t L_9 = L_8;
		RuntimeObject* L_10 = Box(UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11;
		L_11 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(_stringLiteralE41C5B6E51FFAC441D1612E7E7728CE5C169F3A4, L_7, L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_11, NULL);
	}

IL_0043:
	{
		// return endpoint;
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_12 = V_0;
		V_2 = L_12;
		goto IL_0047;
	}

IL_0047:
	{
		// }
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_13 = V_2;
		return L_13;
	}
}
// Unity.Networking.Transport.NetworkEndPoint Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData::get_ServerEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ConnectionAddressData_get_ServerEndPoint_m86FC9C426088E6F206D0D1FBE1574A0BCBF6439C (ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865* __this, const RuntimeMethod* method) 
{
	{
		// public NetworkEndpoint ServerEndPoint => ParseNetworkEndpoint(Address, Port);
		String_t* L_0 = __this->___Address_0;
		uint16_t L_1 = __this->___Port_1;
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_2;
		L_2 = ConnectionAddressData_ParseNetworkEndpoint_m11DE31B21D1DFD889066782743112F705D61B9F2(L_0, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ConnectionAddressData_get_ServerEndPoint_m86FC9C426088E6F206D0D1FBE1574A0BCBF6439C_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865*>(__this + _offset);
	NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 _returnValue;
	_returnValue = ConnectionAddressData_get_ServerEndPoint_m86FC9C426088E6F206D0D1FBE1574A0BCBF6439C(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Networking.Transport.NetworkEndPoint Unity.Netcode.Transports.UTP.UnityTransport/ConnectionAddressData::get_ListenEndPoint()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ConnectionAddressData_get_ListenEndPoint_m2B73F5C05418A012BEB4E01A6E43DC7FACBAA8D0 (ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865* __this, const RuntimeMethod* method) 
{
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	int32_t G_B3_0 = 0;
	String_t* G_B6_0 = NULL;
	{
		// public NetworkEndpoint ListenEndPoint => ParseNetworkEndpoint((ServerListenAddress?.Length == 0) ? Address : ServerListenAddress, Port);
		String_t* L_0 = __this->___ServerListenAddress_2;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0015;
	}

IL_000d:
	{
		NullCheck(G_B2_0);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(G_B2_0, NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}

IL_0015:
	{
		if (G_B3_0)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_3 = __this->___ServerListenAddress_2;
		G_B6_0 = L_3;
		goto IL_0025;
	}

IL_001f:
	{
		String_t* L_4 = __this->___Address_0;
		G_B6_0 = L_4;
	}

IL_0025:
	{
		uint16_t L_5 = __this->___Port_1;
		NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 L_6;
		L_6 = ConnectionAddressData_ParseNetworkEndpoint_m11DE31B21D1DFD889066782743112F705D61B9F2(G_B6_0, L_5, NULL);
		return L_6;
	}
}
IL2CPP_EXTERN_C  NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 ConnectionAddressData_get_ListenEndPoint_m2B73F5C05418A012BEB4E01A6E43DC7FACBAA8D0_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ConnectionAddressData_tE074DBD643B591CD8B01A9847B16376BBA2F1865*>(__this + _offset);
	NetworkEndPoint_t40D02F3956B78E8C6115ED188912FBCE35437F63 _returnValue;
	_returnValue = ConnectionAddressData_get_ListenEndPoint_m2B73F5C05418A012BEB4E01A6E43DC7FACBAA8D0(_thisAdjusted, method);
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
// System.Void Unity.Netcode.Transports.UTP.UnityTransport/SendTarget::.ctor(System.UInt64,Unity.Networking.Transport.NetworkPipeline)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SendTarget__ctor_mF0E1C6C7B9CF2C58418453C22D843533E585BD41 (SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* __this, uint64_t ___0_clientId, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___1_networkPipeline, const RuntimeMethod* method) 
{
	{
		// ClientId = clientId;
		uint64_t L_0 = ___0_clientId;
		__this->___ClientId_0 = L_0;
		// NetworkPipeline = networkPipeline;
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_1 = ___1_networkPipeline;
		__this->___NetworkPipeline_1 = L_1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SendTarget__ctor_mF0E1C6C7B9CF2C58418453C22D843533E585BD41_AdjustorThunk (RuntimeObject* __this, uint64_t ___0_clientId, NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 ___1_networkPipeline, const RuntimeMethod* method)
{
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653*>(__this + _offset);
	SendTarget__ctor_mF0E1C6C7B9CF2C58418453C22D843533E585BD41(_thisAdjusted, ___0_clientId, ___1_networkPipeline, method);
}
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport/SendTarget::Equals(Unity.Netcode.Transports.UTP.UnityTransport/SendTarget)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SendTarget_Equals_m4AC1B3FB486AD1CA46DBDC5FE5058E30875E276D (SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* __this, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___0_other, const RuntimeMethod* method) 
{
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// return ClientId == other.ClientId && NetworkPipeline.Equals(other.NetworkPipeline);
		uint64_t L_0 = __this->___ClientId_0;
		SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_1 = ___0_other;
		uint64_t L_2 = L_1.___ClientId_0;
		if ((!(((uint64_t)L_0) == ((uint64_t)L_2))))
		{
			goto IL_0025;
		}
	}
	{
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_3 = __this->___NetworkPipeline_1;
		V_0 = L_3;
		SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_4 = ___0_other;
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_5 = L_4.___NetworkPipeline_1;
		bool L_6;
		L_6 = NetworkPipeline_Equals_mDDEEE23DC6479D865F524372DE89B48CC06B6F14((&V_0), L_5, NULL);
		G_B3_0 = ((int32_t)(L_6));
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = 0;
	}

IL_0026:
	{
		V_1 = (bool)G_B3_0;
		goto IL_0029;
	}

IL_0029:
	{
		// }
		bool L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C  bool SendTarget_Equals_m4AC1B3FB486AD1CA46DBDC5FE5058E30875E276D_AdjustorThunk (RuntimeObject* __this, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 ___0_other, const RuntimeMethod* method)
{
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653*>(__this + _offset);
	bool _returnValue;
	_returnValue = SendTarget_Equals_m4AC1B3FB486AD1CA46DBDC5FE5058E30875E276D(_thisAdjusted, ___0_other, method);
	return _returnValue;
}
// System.Boolean Unity.Netcode.Transports.UTP.UnityTransport/SendTarget::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SendTarget_Equals_m27323FF07528764D41E022C17E26EB8AEBA94DC7 (SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// return obj is SendTarget other && Equals(other);
		RuntimeObject* L_0 = ___0_obj;
		if (!((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653_il2cpp_TypeInfo_var)))
		{
			goto IL_0019;
		}
	}
	{
		RuntimeObject* L_1 = ___0_obj;
		V_0 = ((*(SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653*)((SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653*)(SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653*)UnBox(L_1, SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653_il2cpp_TypeInfo_var))));
		SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653 L_2 = V_0;
		bool L_3;
		L_3 = SendTarget_Equals_m4AC1B3FB486AD1CA46DBDC5FE5058E30875E276D(__this, L_2, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_1 = (bool)G_B3_0;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool SendTarget_Equals_m27323FF07528764D41E022C17E26EB8AEBA94DC7_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653*>(__this + _offset);
	bool _returnValue;
	_returnValue = SendTarget_Equals_m27323FF07528764D41E022C17E26EB8AEBA94DC7(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Int32 Unity.Netcode.Transports.UTP.UnityTransport/SendTarget::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SendTarget_GetHashCode_m66B6A6AA72CC4FD2B06652898A8F9DCE5A41C357 (SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* __this, const RuntimeMethod* method) 
{
	NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// return (ClientId.GetHashCode() * 397) ^ NetworkPipeline.GetHashCode();
		uint64_t* L_0 = (&__this->___ClientId_0);
		int32_t L_1;
		L_1 = UInt64_GetHashCode_m65D9FD0102B6B01BF38D986F060F0BDBC29B4F92(L_0, NULL);
		NetworkPipeline_t83BB00B4CE9811A2B75D37E50EFB85FD60044A69 L_2 = __this->___NetworkPipeline_1;
		V_0 = L_2;
		int32_t L_3;
		L_3 = NetworkPipeline_GetHashCode_m34FA347FD9DD395BCE190E09E593FA9B97C662EF((&V_0), NULL);
		V_1 = ((int32_t)(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)397)))^L_3));
		goto IL_002b;
	}

IL_002b:
	{
		// }
		int32_t L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t SendTarget_GetHashCode_m66B6A6AA72CC4FD2B06652898A8F9DCE5A41C357_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SendTarget_tAD1A6A2A5769AE7D57910A8DA4F258B09A45F653*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SendTarget_GetHashCode_m66B6A6AA72CC4FD2B06652898A8F9DCE5A41C357(_thisAdjusted, method);
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
// System.UInt64 Unity.Netcode.Transports.UNET.UNetTransport::get_ServerClientId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UNetTransport_get_ServerClientId_m359544B1359E41F2FA8793037D66A004AB179767 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, const RuntimeMethod* method) 
{
	{
		// public override ulong ServerClientId => GetNetcodeClientId(0, 0, true);
		uint64_t L_0;
		L_0 = UNetTransport_GetNetcodeClientId_m5DCF7E11C678B0C4832A16A064F1110E91CE6E71(__this, (uint8_t)0, (uint16_t)0, (bool)1, NULL);
		return L_0;
	}
}
// System.Void Unity.Netcode.Transports.UNET.UNetTransport::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_LateUpdate_mCE7ED80C40E3D4178A5F9500F5C36731286AECA4 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t0D7218F0DC5E17555FA54256075C4DEAE4B73450_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t9F8C0C6332727DDF63C389AC074D96B4E710BE72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	NetworkClient_t4EB5B562D3C8D21DDD5749455CE80E5B12571F64* V_3 = NULL;
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	{
		// if (UnityEngine.Networking.NetworkTransport.IsStarted && MessageSendMode == SendMode.Queued)
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = NetworkTransport_get_IsStarted_mB18FFFD3F8718BFE678B7460A9D5772F1B02628E(NULL);
		if (!L_0)
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = __this->___MessageSendMode_17;
		G_B3_0 = ((((int32_t)L_1) == ((int32_t)1))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 0;
	}

IL_0014:
	{
		V_0 = (bool)G_B3_0;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_008f;
		}
	}
	{
		// if (NetworkManager != null && NetworkManager.IsServer)
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_3 = __this->___NetworkManager_22;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_5 = __this->___NetworkManager_22;
		NullCheck(L_5);
		bool L_6;
		L_6 = NetworkManager_get_IsServer_m3FF8C5D22D260033AD3FC6C4AF44E7161BDD7F52_inline(L_5, NULL);
		G_B7_0 = ((int32_t)(L_6));
		goto IL_0035;
	}

IL_0034:
	{
		G_B7_0 = 0;
	}

IL_0035:
	{
		V_1 = (bool)G_B7_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_007b;
		}
	}
	{
		// foreach (var targetClient in NetworkManager.Singleton.ConnectedClientsList)
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_8;
		L_8 = NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline(NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = NetworkManager_get_ConnectedClientsList_mA7F66C446F46012C187EB6C41FB399C511E6EDC9(L_8, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Unity.Netcode.NetworkClient>::GetEnumerator() */, IEnumerable_1_t0D7218F0DC5E17555FA54256075C4DEAE4B73450_il2cpp_TypeInfo_var, L_9);
		V_2 = L_10;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006d:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_11 = V_2;
					if (!L_11)
					{
						goto IL_0077;
					}
				}
				{
					RuntimeObject* L_12 = V_2;
					NullCheck(L_12);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
				}

IL_0077:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0063_1;
			}

IL_004d_1:
			{
				// foreach (var targetClient in NetworkManager.Singleton.ConnectedClientsList)
				RuntimeObject* L_13 = V_2;
				NullCheck(L_13);
				NetworkClient_t4EB5B562D3C8D21DDD5749455CE80E5B12571F64* L_14;
				L_14 = InterfaceFuncInvoker0< NetworkClient_t4EB5B562D3C8D21DDD5749455CE80E5B12571F64* >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<Unity.Netcode.NetworkClient>::get_Current() */, IEnumerator_1_t9F8C0C6332727DDF63C389AC074D96B4E710BE72_il2cpp_TypeInfo_var, L_13);
				V_3 = L_14;
				// SendQueued(targetClient.ClientId);
				NetworkClient_t4EB5B562D3C8D21DDD5749455CE80E5B12571F64* L_15 = V_3;
				NullCheck(L_15);
				uint64_t L_16 = L_15->___ClientId_0;
				UNetTransport_SendQueued_mAE5434E329C5ED83943167B2E5F2EED18E7FABAA(__this, L_16, NULL);
			}

IL_0063_1:
			{
				// foreach (var targetClient in NetworkManager.Singleton.ConnectedClientsList)
				RuntimeObject* L_17 = V_2;
				NullCheck(L_17);
				bool L_18;
				L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_17);
				if (L_18)
				{
					goto IL_004d_1;
				}
			}
			{
				goto IL_0078;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0078:
	{
		goto IL_008e;
	}

IL_007b:
	{
		// SendQueued(NetworkManager.Singleton.LocalClientId);
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_19;
		L_19 = NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline(NULL);
		NullCheck(L_19);
		uint64_t L_20;
		L_20 = NetworkManager_get_LocalClientId_m1B93454E7949ACBF20043DCDD884F63E119E6577(L_19, NULL);
		UNetTransport_SendQueued_mAE5434E329C5ED83943167B2E5F2EED18E7FABAA(__this, L_20, NULL);
	}

IL_008e:
	{
	}

IL_008f:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UNET.UNetTransport::Send(System.UInt64,System.ArraySegment`1<System.Byte>,Unity.Netcode.NetworkDelivery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_Send_m4C7588596E538BA0A9A22E19184B5B44A8480D11 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, uint64_t ___0_clientId, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___1_payload, int32_t ___2_networkDelivery, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	uint16_t V_1 = 0;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	bool V_10 = false;
	uint8_t V_11 = 0x0;
	uint8_t V_12 = 0x0;
	int32_t G_B7_0 = 0;
	{
		// GetUNetConnectionDetails(clientId, out byte hostId, out ushort connectionId);
		uint64_t L_0 = ___0_clientId;
		UNetTransport_GetUNetConnectionDetails_m90DED60407712B004DAB13A12A663B4CBDBE3F25(__this, L_0, (&V_0), (&V_1), NULL);
		// if (payload.Offset > 0)
		int32_t L_1;
		L_1 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&___1_payload), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		bool L_2 = V_4;
		if (!L_2)
		{
			goto IL_00c5;
		}
	}
	{
		// if (m_MessageBuffer.Length >= payload.Count)
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_3 = __this->___m_MessageBuffer_18;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___1_payload), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		V_5 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))) < ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_5;
		if (!L_5)
		{
			goto IL_0046;
		}
	}
	{
		// buffer = m_MessageBuffer;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_6 = __this->___m_MessageBuffer_18;
		V_2 = L_6;
		goto IL_00a5;
	}

IL_0046:
	{
		// if (m_TemporaryBufferReference != null && ((bufferRef = m_TemporaryBufferReference.Target) != null) && ((byte[])bufferRef).Length >= payload.Count)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_7 = __this->___m_TemporaryBufferReference_19;
		if (!L_7)
		{
			goto IL_0076;
		}
	}
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_8 = __this->___m_TemporaryBufferReference_19;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_8);
		RuntimeObject* L_10 = L_9;
		V_6 = L_10;
		if (!L_10)
		{
			goto IL_0076;
		}
	}
	{
		RuntimeObject* L_11 = V_6;
		NullCheck(((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_11, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)));
		int32_t L_12;
		L_12 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___1_payload), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		G_B7_0 = ((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_11, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)))->max_length))) < ((int32_t)L_12))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0077;
	}

IL_0076:
	{
		G_B7_0 = 0;
	}

IL_0077:
	{
		V_7 = (bool)G_B7_0;
		bool L_13 = V_7;
		if (!L_13)
		{
			goto IL_0089;
		}
	}
	{
		// buffer = (byte[])bufferRef;
		RuntimeObject* L_14 = V_6;
		V_2 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_14, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
		goto IL_00a4;
	}

IL_0089:
	{
		// buffer = new byte[payload.Count];
		int32_t L_15;
		L_15 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___1_payload), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_16 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_15);
		V_2 = L_16;
		// m_TemporaryBufferReference = new WeakReference(buffer);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_17 = V_2;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_18 = (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)il2cpp_codegen_object_new(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		WeakReference__ctor_m5F9E2F970CD85965A003C0B37ABDBFAA1F5CF241(L_18, (RuntimeObject*)L_17, NULL);
		__this->___m_TemporaryBufferReference_19 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TemporaryBufferReference_19), (void*)L_18);
	}

IL_00a4:
	{
	}

IL_00a5:
	{
		// Buffer.BlockCopy(payload.Array, payload.Offset, buffer, 0, payload.Count);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19;
		L_19 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&___1_payload), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		int32_t L_20;
		L_20 = ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_inline((&___1_payload), ArraySegment_1_get_Offset_m28FEFF65E8FA9A92DF84966071346BFD426CC3AA_RuntimeMethod_var);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_21 = V_2;
		int32_t L_22;
		L_22 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___1_payload), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		Buffer_BlockCopy_m2F7BC0C5BA97C500E3F87D5008718F797E02B358((RuntimeArray*)L_19, L_20, (RuntimeArray*)L_21, 0, L_22, NULL);
		goto IL_00cf;
	}

IL_00c5:
	{
		// buffer = payload.Array;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_inline((&___1_payload), ArraySegment_1_get_Array_m85F374406C1E34FDEFA7F160336A247891AF8105_RuntimeMethod_var);
		V_2 = L_23;
	}

IL_00cf:
	{
		// int channelId = -1;
		V_3 = (-1);
		// switch (networkDelivery)
		int32_t L_24 = ___2_networkDelivery;
		V_9 = L_24;
		int32_t L_25 = V_9;
		V_8 = L_25;
		int32_t L_26 = V_8;
		switch (L_26)
		{
			case 0:
			{
				goto IL_00f5;
			}
			case 1:
			{
				goto IL_00fe;
			}
			case 2:
			{
				goto IL_0107;
			}
			case 3:
			{
				goto IL_0110;
			}
			case 4:
			{
				goto IL_0119;
			}
		}
	}
	{
		goto IL_0122;
	}

IL_00f5:
	{
		// channelId = m_UnreliableChannelId;
		int32_t L_27 = __this->___m_UnreliableChannelId_6;
		V_3 = L_27;
		// break;
		goto IL_0122;
	}

IL_00fe:
	{
		// channelId = m_UnreliableSequencedChannelId;
		int32_t L_28 = __this->___m_UnreliableSequencedChannelId_7;
		V_3 = L_28;
		// break;
		goto IL_0122;
	}

IL_0107:
	{
		// channelId = m_ReliableChannelId;
		int32_t L_29 = __this->___m_ReliableChannelId_8;
		V_3 = L_29;
		// break;
		goto IL_0122;
	}

IL_0110:
	{
		// channelId = m_ReliableSequencedChannelId;
		int32_t L_30 = __this->___m_ReliableSequencedChannelId_9;
		V_3 = L_30;
		// break;
		goto IL_0122;
	}

IL_0119:
	{
		// channelId = m_ReliableFragmentedSequencedChannelId;
		int32_t L_31 = __this->___m_ReliableFragmentedSequencedChannelId_10;
		V_3 = L_31;
		// break;
		goto IL_0122;
	}

IL_0122:
	{
		// if (MessageSendMode == SendMode.Queued)
		int32_t L_32 = __this->___MessageSendMode_17;
		V_10 = (bool)((((int32_t)L_32) == ((int32_t)1))? 1 : 0);
		bool L_33 = V_10;
		if (!L_33)
		{
			goto IL_0148;
		}
	}
	{
		// UnityEngine.Networking.NetworkTransport.QueueMessageForSending(hostId, connectionId, channelId, buffer, payload.Count, out byte error);
		uint8_t L_34 = V_0;
		uint16_t L_35 = V_1;
		int32_t L_36 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_37 = V_2;
		int32_t L_38;
		L_38 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___1_payload), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		bool L_39;
		L_39 = NetworkTransport_QueueMessageForSending_mBCFD4B1C14BA55D53E8C4F5928E4182C1FC38B5F(L_34, L_35, L_36, L_37, L_38, (&V_11), NULL);
		goto IL_015d;
	}

IL_0148:
	{
		// UnityEngine.Networking.NetworkTransport.Send(hostId, connectionId, channelId, buffer, payload.Count, out byte error);
		uint8_t L_40 = V_0;
		uint16_t L_41 = V_1;
		int32_t L_42 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_43 = V_2;
		int32_t L_44;
		L_44 = ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_inline((&___1_payload), ArraySegment_1_get_Count_m7B026228B16D905890B805EA70E9114D1517B053_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		bool L_45;
		L_45 = NetworkTransport_Send_m58F29B19199882D9D8053858C265380DCF292855(L_40, L_41, L_42, L_43, L_44, (&V_12), NULL);
	}

IL_015d:
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UNET.UNetTransport::SendQueued(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_SendQueued_mAE5434E329C5ED83943167B2E5F2EED18E7FABAA (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, uint64_t ___0_clientId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	uint16_t V_1 = 0;
	uint8_t V_2 = 0x0;
	{
		// GetUNetConnectionDetails(clientId, out byte hostId, out ushort connectionId);
		uint64_t L_0 = ___0_clientId;
		UNetTransport_GetUNetConnectionDetails_m90DED60407712B004DAB13A12A663B4CBDBE3F25(__this, L_0, (&V_0), (&V_1), NULL);
		// UnityEngine.Networking.NetworkTransport.SendQueuedMessages(hostId, connectionId, out _);
		uint8_t L_1 = V_0;
		uint16_t L_2 = V_1;
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = NetworkTransport_SendQueuedMessages_mB66F1C5C0101405B87D5258D3FC75900F456C76E(L_1, L_2, (&V_2), NULL);
		// }
		return;
	}
}
// Unity.Netcode.NetworkEvent Unity.Netcode.Transports.UNET.UNetTransport::PollEvent(System.UInt64&,System.ArraySegment`1<System.Byte>&,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UNetTransport_PollEvent_m2B3B3E3EFB0B448552244173F8C036C26EF49AF9 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, uint64_t* ___0_clientId, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* ___1_payload, float* ___2_receiveTime, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	uint8_t V_4 = 0x0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_8 = NULL;
	bool V_9 = false;
	bool V_10 = false;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t G_B5_0 = 0;
	{
		// var eventType = UnityEngine.Networking.NetworkTransport.Receive(out int hostId, out int connectionId, out _, m_MessageBuffer, m_MessageBuffer.Length, out int receivedSize, out byte error);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_0 = __this->___m_MessageBuffer_18;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_1 = __this->___m_MessageBuffer_18;
		NullCheck(L_1);
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = NetworkTransport_Receive_mB4ED3D95EAE1EFC83A28F78D49E03565F353CB74((&V_1), (&V_2), (&V_6), L_0, ((int32_t)(((RuntimeArray*)L_1)->max_length)), (&V_3), (&V_4), NULL);
		V_0 = L_2;
		// clientId = GetNetcodeClientId((byte)hostId, (ushort)connectionId, false);
		uint64_t* L_3 = ___0_clientId;
		int32_t L_4 = V_1;
		int32_t L_5 = V_2;
		uint64_t L_6;
		L_6 = UNetTransport_GetNetcodeClientId_m5DCF7E11C678B0C4832A16A064F1110E91CE6E71(__this, (uint8_t)((int32_t)(uint8_t)L_4), (uint16_t)((int32_t)(uint16_t)L_5), (bool)0, NULL);
		*((int64_t*)L_3) = (int64_t)L_6;
		// receiveTime = Time.realtimeSinceStartup;
		float* L_7 = ___2_receiveTime;
		float L_8;
		L_8 = Time_get_realtimeSinceStartup_m73B3CB73175D79A44333D59BB70F9EDE55EC9510(NULL);
		*((float*)L_7) = (float)L_8;
		// var networkError = (NetworkError)error;
		uint8_t L_9 = V_4;
		V_5 = L_9;
		// if (networkError == NetworkError.MessageToLong)
		int32_t L_10 = V_5;
		V_7 = (bool)((((int32_t)L_10) == ((int32_t)7))? 1 : 0);
		bool L_11 = V_7;
		if (!L_11)
		{
			goto IL_00d1;
		}
	}
	{
		// if (m_TemporaryBufferReference != null && m_TemporaryBufferReference.IsAlive && ((byte[])m_TemporaryBufferReference.Target).Length >= receivedSize)
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_12 = __this->___m_TemporaryBufferReference_19;
		if (!L_12)
		{
			goto IL_0075;
		}
	}
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_13 = __this->___m_TemporaryBufferReference_19;
		NullCheck(L_13);
		bool L_14;
		L_14 = VirtualFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.WeakReference::get_IsAlive() */, L_13);
		if (!L_14)
		{
			goto IL_0075;
		}
	}
	{
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_15 = __this->___m_TemporaryBufferReference_19;
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_15);
		NullCheck(((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_16, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)));
		int32_t L_17 = V_3;
		G_B5_0 = ((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_16, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var)))->max_length))) < ((int32_t)L_17))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0076;
	}

IL_0075:
	{
		G_B5_0 = 0;
	}

IL_0076:
	{
		V_9 = (bool)G_B5_0;
		bool L_18 = V_9;
		if (!L_18)
		{
			goto IL_0092;
		}
	}
	{
		// tempBuffer = (byte[])m_TemporaryBufferReference.Target;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_19 = __this->___m_TemporaryBufferReference_19;
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = VirtualFuncInvoker0< RuntimeObject* >::Invoke(6 /* System.Object System.WeakReference::get_Target() */, L_19);
		V_8 = ((ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)Castclass((RuntimeObject*)L_20, ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var));
		goto IL_00a9;
	}

IL_0092:
	{
		// tempBuffer = new byte[receivedSize];
		int32_t L_21 = V_3;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_22 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_21);
		V_8 = L_22;
		// m_TemporaryBufferReference = new WeakReference(tempBuffer);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23 = V_8;
		WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E* L_24 = (WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E*)il2cpp_codegen_object_new(WeakReference_tD4B0518CE911FFD9FAAB3FCD492644A354312D8E_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		WeakReference__ctor_m5F9E2F970CD85965A003C0B37ABDBFAA1F5CF241(L_24, (RuntimeObject*)L_23, NULL);
		__this->___m_TemporaryBufferReference_19 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_TemporaryBufferReference_19), (void*)L_24);
	}

IL_00a9:
	{
		// eventType = UnityEngine.Networking.NetworkTransport.Receive(out hostId, out connectionId, out _, tempBuffer, tempBuffer.Length, out receivedSize, out error);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_25 = V_8;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_26 = V_8;
		NullCheck(L_26);
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		int32_t L_27;
		L_27 = NetworkTransport_Receive_mB4ED3D95EAE1EFC83A28F78D49E03565F353CB74((&V_1), (&V_2), (&V_6), L_25, ((int32_t)(((RuntimeArray*)L_26)->max_length)), (&V_3), (&V_4), NULL);
		V_0 = L_27;
		// payload = new ArraySegment<byte>(tempBuffer, 0, receivedSize);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* L_28 = ___1_payload;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_29 = V_8;
		int32_t L_30 = V_3;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_31;
		memset((&L_31), 0, sizeof(L_31));
		ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20((&L_31), L_29, 0, L_30, /*hidden argument*/ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		*(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*)L_28 = L_31;
		Il2CppCodeGenWriteBarrier((void**)&(((ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*)L_28)->____array_1), (void*)NULL);
		goto IL_00e6;
	}

IL_00d1:
	{
		// payload = new ArraySegment<byte>(m_MessageBuffer, 0, receivedSize);
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093* L_32 = ___1_payload;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_33 = __this->___m_MessageBuffer_18;
		int32_t L_34 = V_3;
		ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 L_35;
		memset((&L_35), 0, sizeof(L_35));
		ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20((&L_35), L_33, 0, L_34, /*hidden argument*/ArraySegment_1__ctor_m664EA6AD314FAA6BCA4F6D0586AEF01559537F20_RuntimeMethod_var);
		*(ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*)L_32 = L_35;
		Il2CppCodeGenWriteBarrier((void**)&(((ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093*)L_32)->____array_1), (void*)NULL);
	}

IL_00e6:
	{
		// if (networkError == NetworkError.Timeout)
		int32_t L_36 = V_5;
		V_10 = (bool)((((int32_t)L_36) == ((int32_t)6))? 1 : 0);
		bool L_37 = V_10;
		if (!L_37)
		{
			goto IL_00f5;
		}
	}
	{
		// eventType = NetworkEventType.DisconnectEvent;
		V_0 = 2;
	}

IL_00f5:
	{
		// switch (eventType)
		int32_t L_38 = V_0;
		V_12 = L_38;
		int32_t L_39 = V_12;
		V_11 = L_39;
		int32_t L_40 = V_11;
		switch (L_40)
		{
			case 0:
			{
				goto IL_0119;
			}
			case 1:
			{
				goto IL_011e;
			}
			case 2:
			{
				goto IL_0123;
			}
			case 3:
			{
				goto IL_0128;
			}
			case 4:
			{
				goto IL_0128;
			}
		}
	}
	{
		goto IL_0128;
	}

IL_0119:
	{
		// return NetworkEvent.Data;
		V_13 = 0;
		goto IL_012d;
	}

IL_011e:
	{
		// return NetworkEvent.Connect;
		V_13 = 1;
		goto IL_012d;
	}

IL_0123:
	{
		// return NetworkEvent.Disconnect;
		V_13 = 2;
		goto IL_012d;
	}

IL_0128:
	{
		// return NetworkEvent.Nothing;
		V_13 = 4;
		goto IL_012d;
	}

IL_012d:
	{
		// }
		int32_t L_41 = V_13;
		return L_41;
	}
}
// System.Boolean Unity.Netcode.Transports.UNET.UNetTransport::StartClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UNetTransport_StartClient_m7D430B310E7E678616409CBD9DC7A62B1730471C (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	bool V_1 = false;
	{
		// m_ServerHostId = UnityEngine.Networking.NetworkTransport.AddHost(new HostTopology(GetConfig(), 1), 0, null);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_0;
		L_0 = UNetTransport_GetConfig_mB660650490F62C46550B3E4C967DC53813193B64(__this, NULL);
		HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* L_1 = (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F*)il2cpp_codegen_object_new(HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		HostTopology__ctor_mC7A4302FD60DCD0207953FE6EA520B29ABDDCF13(L_1, L_0, 1, NULL);
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = NetworkTransport_AddHost_m2C18DF965A03542887B43E391DC153A0CB44F33C(L_1, 0, (String_t*)NULL, NULL);
		__this->___m_ServerHostId_21 = L_2;
		// m_ServerConnectionId = UnityEngine.Networking.NetworkTransport.Connect(m_ServerHostId, ConnectAddress, ConnectPort, 0, out byte error);
		int32_t L_3 = __this->___m_ServerHostId_21;
		String_t* L_4 = __this->___ConnectAddress_14;
		int32_t L_5 = __this->___ConnectPort_15;
		int32_t L_6;
		L_6 = NetworkTransport_Connect_mF7BC9C0E04D5D5D6763128FAB3F51FD5CF62BDEC(L_3, L_4, L_5, 0, (&V_0), NULL);
		__this->___m_ServerConnectionId_20 = L_6;
		// return (NetworkError)error == NetworkError.Ok;
		uint8_t L_7 = V_0;
		V_1 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		goto IL_0041;
	}

IL_0041:
	{
		// }
		bool L_8 = V_1;
		return L_8;
	}
}
// System.Boolean Unity.Netcode.Transports.UNET.UNetTransport::StartServer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UNetTransport_StartServer_mA835EB4590F0F107C20EADFB3B6A9816D6BEF7F9 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* V_0 = NULL;
	bool V_1 = false;
	{
		// var topology = new HostTopology(GetConfig(), MaxConnections);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_0;
		L_0 = UNetTransport_GetConfig_mB660650490F62C46550B3E4C967DC53813193B64(__this, NULL);
		int32_t L_1 = __this->___MaxConnections_12;
		HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* L_2 = (HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F*)il2cpp_codegen_object_new(HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HostTopology__ctor_mC7A4302FD60DCD0207953FE6EA520B29ABDDCF13(L_2, L_0, L_1, NULL);
		V_0 = L_2;
		// return -1 != UnityEngine.Networking.NetworkTransport.AddHost(topology, ServerListenPort, null);
		HostTopology_t42F8AAE9D1D67C150A71CF2B38F7E6163759514F* L_3 = V_0;
		int32_t L_4 = __this->___ServerListenPort_16;
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = NetworkTransport_AddHost_m2C18DF965A03542887B43E391DC153A0CB44F33C(L_3, L_4, (String_t*)NULL, NULL);
		V_1 = (bool)((((int32_t)((((int32_t)(-1)) == ((int32_t)L_5))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0029;
	}

IL_0029:
	{
		// }
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Void Unity.Netcode.Transports.UNET.UNetTransport::DisconnectRemoteClient(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_DisconnectRemoteClient_m6BF77B6EE4222030BEB84EE397A10C6364258DE0 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, uint64_t ___0_clientId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	uint16_t V_1 = 0;
	uint8_t V_2 = 0x0;
	{
		// GetUNetConnectionDetails(clientId, out byte hostId, out ushort connectionId);
		uint64_t L_0 = ___0_clientId;
		UNetTransport_GetUNetConnectionDetails_m90DED60407712B004DAB13A12A663B4CBDBE3F25(__this, L_0, (&V_0), (&V_1), NULL);
		// UnityEngine.Networking.NetworkTransport.Disconnect((int)hostId, (int)connectionId, out byte error);
		uint8_t L_1 = V_0;
		uint16_t L_2 = V_1;
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = NetworkTransport_Disconnect_m8E51494D2734381CA06AF22578A8EE5B8E6A5F20(L_1, L_2, (&V_2), NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UNET.UNetTransport::DisconnectLocalClient()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_DisconnectLocalClient_mC6DD90DD7A10B23BA6AF74DC6CAF10F6A079ECBC (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	{
		// UnityEngine.Networking.NetworkTransport.Disconnect(m_ServerHostId, m_ServerConnectionId, out byte error);
		int32_t L_0 = __this->___m_ServerHostId_21;
		int32_t L_1 = __this->___m_ServerConnectionId_20;
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = NetworkTransport_Disconnect_m8E51494D2734381CA06AF22578A8EE5B8E6A5F20(L_0, L_1, (&V_0), NULL);
		// }
		return;
	}
}
// System.UInt64 Unity.Netcode.Transports.UNET.UNetTransport::GetCurrentRtt(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UNetTransport_GetCurrentRtt_m2B1E15B3E50EB2428605CCBB66F3BEFA0715B9DD (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, uint64_t ___0_clientId, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t V_0 = 0x0;
	uint16_t V_1 = 0;
	uint8_t V_2 = 0x0;
	uint64_t V_3 = 0;
	{
		// GetUNetConnectionDetails(clientId, out byte hostId, out ushort connectionId);
		uint64_t L_0 = ___0_clientId;
		UNetTransport_GetUNetConnectionDetails_m90DED60407712B004DAB13A12A663B4CBDBE3F25(__this, L_0, (&V_0), (&V_1), NULL);
		// return (ulong)UnityEngine.Networking.NetworkTransport.GetCurrentRTT((int)hostId, (int)connectionId, out byte error);
		uint8_t L_1 = V_0;
		uint16_t L_2 = V_1;
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = NetworkTransport_GetCurrentRTT_mB6407834EF7EF2DE689EFF0CB276825A51C3E10D(L_1, L_2, (&V_2), NULL);
		V_3 = ((int64_t)L_3);
		goto IL_001a;
	}

IL_001a:
	{
		// }
		uint64_t L_4 = V_3;
		return L_4;
	}
}
// System.Void Unity.Netcode.Transports.UNET.UNetTransport::Shutdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_Shutdown_m7FF84172B99ED983BF242F5BF2CBDC6EF1B5104A (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Networking.NetworkTransport.Shutdown();
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		NetworkTransport_Shutdown_mBC882DF0C55BA635D3E0281F95D9BFC2F9FE1996(NULL);
		// }
		return;
	}
}
// System.Void Unity.Netcode.Transports.UNET.UNetTransport::Initialize(Unity.Netcode.NetworkManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_Initialize_m4FFEE72C84D864C2D8DB8C6F73A01713CDAAC265 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* ___0_networkManager, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NetworkManager = networkManager;
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0 = ___0_networkManager;
		__this->___NetworkManager_22 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___NetworkManager_22), (void*)L_0);
		// m_MessageBuffer = new byte[MessageBufferSize];
		int32_t L_1 = __this->___MessageBufferSize_11;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_2 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->___m_MessageBuffer_18 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_MessageBuffer_18), (void*)L_2);
		// UnityEngine.Networking.NetworkTransport.Init();
		il2cpp_codegen_runtime_class_init_inline(NetworkTransport_t71D9824074F9F4D84E53B2AD28B990EBDE5AE3D4_il2cpp_TypeInfo_var);
		NetworkTransport_Init_m0ADB18EAE22E2B2AFD8183ED3A3EE71A6020B0BE(NULL);
		// }
		return;
	}
}
// System.UInt64 Unity.Netcode.Transports.UNET.UNetTransport::GetNetcodeClientId(System.Byte,System.UInt16,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UNetTransport_GetNetcodeClientId_m5DCF7E11C678B0C4832A16A064F1110E91CE6E71 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, uint8_t ___0_hostId, uint16_t ___1_connectionId, bool ___2_isServer, const RuntimeMethod* method) 
{
	bool V_0 = false;
	uint64_t V_1 = 0;
	{
		// if (isServer)
		bool L_0 = ___2_isServer;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		// return 0;
		V_1 = ((int64_t)0);
		goto IL_001a;
	}

IL_000c:
	{
		// return (connectionId | (ulong)hostId << 16) + 1;
		uint16_t L_2 = ___1_connectionId;
		uint8_t L_3 = ___0_hostId;
		V_1 = ((int64_t)il2cpp_codegen_add(((int64_t)(((int64_t)(uint64_t)L_2)|((int64_t)(((int64_t)(uint64_t)L_3)<<((int32_t)16))))), ((int64_t)1)));
		goto IL_001a;
	}

IL_001a:
	{
		// }
		uint64_t L_4 = V_1;
		return L_4;
	}
}
// System.Void Unity.Netcode.Transports.UNET.UNetTransport::GetUNetConnectionDetails(System.UInt64,System.Byte&,System.UInt16&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport_GetUNetConnectionDetails_m90DED60407712B004DAB13A12A663B4CBDBE3F25 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, uint64_t ___0_clientId, uint8_t* ___1_hostId, uint16_t* ___2_connectionId, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (clientId == 0)
		uint64_t L_0 = ___0_clientId;
		V_0 = (bool)((((int64_t)L_0) == ((int64_t)((int64_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// hostId = (byte)m_ServerHostId;
		uint8_t* L_2 = ___1_hostId;
		int32_t L_3 = __this->___m_ServerHostId_21;
		*((int8_t*)L_2) = (int8_t)((int32_t)(uint8_t)L_3);
		// connectionId = (ushort)m_ServerConnectionId;
		uint16_t* L_4 = ___2_connectionId;
		int32_t L_5 = __this->___m_ServerConnectionId_20;
		*((int16_t*)L_4) = (int16_t)((int32_t)(uint16_t)L_5);
		goto IL_0033;
	}

IL_0020:
	{
		// hostId = (byte)((clientId - 1) >> 16);
		uint8_t* L_6 = ___1_hostId;
		uint64_t L_7 = ___0_clientId;
		*((int8_t*)L_6) = (int8_t)((int32_t)(uint8_t)((int64_t)((uint64_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_7, ((int64_t)1)))>>((int32_t)16))));
		// connectionId = (ushort)((clientId - 1));
		uint16_t* L_8 = ___2_connectionId;
		uint64_t L_9 = ___0_clientId;
		*((int16_t*)L_8) = (int16_t)((int32_t)(uint16_t)((int64_t)il2cpp_codegen_subtract((int64_t)L_9, ((int64_t)1))));
	}

IL_0033:
	{
		// }
		return;
	}
}
// UnityEngine.Networking.ConnectionConfig Unity.Netcode.Transports.UNET.UNetTransport::GetConfig()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* UNetTransport_GetConfig_mB660650490F62C46550B3E4C967DC53813193B64 (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* V_0 = NULL;
	ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* V_1 = NULL;
	{
		// var connectionConfig = new ConnectionConfig();
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_0 = (ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60*)il2cpp_codegen_object_new(ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		ConnectionConfig__ctor_mF6E6BBCAC0C41237A0A26FC3BDA8C882AC627113(L_0, NULL);
		V_0 = L_0;
		// m_UnreliableChannelId = connectionConfig.AddChannel(QosType.Unreliable);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_1 = V_0;
		NullCheck(L_1);
		uint8_t L_2;
		L_2 = ConnectionConfig_AddChannel_m8272FB8322A2D4E18F56FC4FDCCACB043851C11E(L_1, 0, NULL);
		__this->___m_UnreliableChannelId_6 = L_2;
		// m_UnreliableSequencedChannelId = connectionConfig.AddChannel(QosType.UnreliableSequenced);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_3 = V_0;
		NullCheck(L_3);
		uint8_t L_4;
		L_4 = ConnectionConfig_AddChannel_m8272FB8322A2D4E18F56FC4FDCCACB043851C11E(L_3, 2, NULL);
		__this->___m_UnreliableSequencedChannelId_7 = L_4;
		// m_ReliableChannelId = connectionConfig.AddChannel(QosType.Reliable);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_5 = V_0;
		NullCheck(L_5);
		uint8_t L_6;
		L_6 = ConnectionConfig_AddChannel_m8272FB8322A2D4E18F56FC4FDCCACB043851C11E(L_5, 3, NULL);
		__this->___m_ReliableChannelId_8 = L_6;
		// m_ReliableSequencedChannelId = connectionConfig.AddChannel(QosType.ReliableSequenced);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_7 = V_0;
		NullCheck(L_7);
		uint8_t L_8;
		L_8 = ConnectionConfig_AddChannel_m8272FB8322A2D4E18F56FC4FDCCACB043851C11E(L_7, 5, NULL);
		__this->___m_ReliableSequencedChannelId_9 = L_8;
		// m_ReliableFragmentedSequencedChannelId = connectionConfig.AddChannel(QosType.ReliableFragmentedSequenced);
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_9 = V_0;
		NullCheck(L_9);
		uint8_t L_10;
		L_10 = ConnectionConfig_AddChannel_m8272FB8322A2D4E18F56FC4FDCCACB043851C11E(L_9, ((int32_t)10), NULL);
		__this->___m_ReliableFragmentedSequencedChannelId_10 = L_10;
		// connectionConfig.MaxSentMessageQueueSize = (ushort)MaxSentMessageQueueSize;
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_11 = V_0;
		int32_t L_12 = __this->___MaxSentMessageQueueSize_13;
		NullCheck(L_11);
		ConnectionConfig_set_MaxSentMessageQueueSize_m4EF0FBEF7C0BF9A3D28BE8577B7AA449522EDEE7(L_11, (uint16_t)((int32_t)(uint16_t)L_12), NULL);
		// return connectionConfig;
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_13 = V_0;
		V_1 = L_13;
		goto IL_005b;
	}

IL_005b:
	{
		// }
		ConnectionConfig_t969B00662A379715B813EDFD15D8EFAE7DA50E60* L_14 = V_1;
		return L_14;
	}
}
// System.Void Unity.Netcode.Transports.UNET.UNetTransport::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UNetTransport__ctor_mF3B67C172CE0E35FB1BE70D11129B3B6C2A1447A (UNetTransport_tD730B547BE9F02C1EE84782C11DE52E996A9E68A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int MessageBufferSize = 1024 * 5;
		__this->___MessageBufferSize_11 = ((int32_t)5120);
		// public int MaxConnections = 100;
		__this->___MaxConnections_12 = ((int32_t)100);
		// public int MaxSentMessageQueueSize = 128;
		__this->___MaxSentMessageQueueSize_13 = ((int32_t)128);
		// public string ConnectAddress = "127.0.0.1";
		__this->___ConnectAddress_14 = _stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ConnectAddress_14), (void*)_stringLiteral76C3D4024DE9EE847070E35CC5A197DC21F66FEE);
		// public int ConnectPort = 7777;
		__this->___ConnectPort_15 = ((int32_t)7777);
		// public int ServerListenPort = 7777;
		__this->___ServerListenPort_16 = ((int32_t)7777);
		// public SendMode MessageSendMode = SendMode.Immediately;
		__this->___MessageSendMode_17 = 0;
		NetworkTransport__ctor_m4539E8F121DB9DFB42D7B63EC51A14FB1C7738AF(__this, NULL);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 NetworkObject_get_IsSceneObject_m6C81B3BFDFCB5A8C0105BD7F570A8A041AE6A297_inline (NetworkObject_t8D6F76C7440A9E6176FC7F9268E5720C346A7366* __this, const RuntimeMethod* method) 
{
	{
		// public bool? IsSceneObject { get; internal set; }
		Nullable_1_t78F453FADB4A9F50F267A4E349019C34410D1A01 L_0 = __this->___U3CIsSceneObjectU3Ek__BackingField_11;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkTickSystem_set_TickRate_m0BF57B36E23A399A2DE37AC16EDE30EF48378172_inline (NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	{
		// public uint TickRate { get; internal set; }
		uint32_t L_0 = ___0_value;
		__this->___U3CTickRateU3Ek__BackingField_2 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkTickSystem_set_LocalTime_mF80A790CE331B5993719CEB6AF95DA98E3C31967_inline (NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A* __this, NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F ___0_value, const RuntimeMethod* method) 
{
	{
		// public NetworkTime LocalTime { get; internal set; }
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_0 = ___0_value;
		__this->___U3CLocalTimeU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkTickSystem_set_ServerTime_mCBDD0E0D8DCB5BFB612E4075EED08555BE43A794_inline (NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A* __this, NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F ___0_value, const RuntimeMethod* method) 
{
	{
		// public NetworkTime ServerTime { get; internal set; }
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_0 = ___0_value;
		__this->___U3CServerTimeU3Ek__BackingField_4 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t NetworkTickSystem_get_TickRate_mE053E1F4706D7744E24E0CB387DADE9454EDD337_inline (NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A* __this, const RuntimeMethod* method) 
{
	{
		// public uint TickRate { get; internal set; }
		uint32_t L_0 = __this->___U3CTickRateU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F NetworkTickSystem_get_LocalTime_mAEE28AA7DBED595F9D8755CE5D76B7CEFF7EA6F5_inline (NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A* __this, const RuntimeMethod* method) 
{
	{
		// public NetworkTime LocalTime { get; internal set; }
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_0 = __this->___U3CLocalTimeU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t NetworkTime_get_Tick_m1544072B4A5D9F6767E31A77EFB451B6B0F5B991_inline (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* __this, const RuntimeMethod* method) 
{
	{
		// public int Tick => m_CachedTick;
		int32_t L_0 = __this->___m_CachedTick_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F NetworkTickSystem_get_ServerTime_mE2386D4FF186C19B938427535A681AD47A799882_inline (NetworkTickSystem_t03E11F229B752CF97C7A1616D2CFF513D988780A* __this, const RuntimeMethod* method) 
{
	{
		// public NetworkTime ServerTime { get; internal set; }
		NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F L_0 = __this->___U3CServerTimeU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker_Begin_mD07DB736ADA7D8BAF9D969CC7F3C55848A218C6E_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___m_Ptr_0;
		ProfilerUnsafeUtility_BeginSample_mB5106F4E7ECEF54906545665ED23928D14F5FCA7(L_0, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker_End_m025AE3EF0F96F6DADC53489A53FC6EE65073DE60_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, const RuntimeMethod* method) 
{
	{
		intptr_t L_0 = __this->___m_Ptr_0;
		ProfilerUnsafeUtility_EndSample_mFDB4EFB160A9CB817D2F8ED21B88693616B27409(L_0, NULL);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProfilerMarker__ctor_mDD68B0A8B71E0301F592AF8891560150E55699C8_inline (ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD* __this, String_t* ___0_name, const RuntimeMethod* method) 
{
	{
		String_t* L_0 = ___0_name;
		intptr_t L_1;
		L_1 = ProfilerUnsafeUtility_CreateMarker_mC5E1AAB8CC1F0342065DF85BA3334445ED754E64(L_0, (uint16_t)1, 0, 0, NULL);
		__this->___m_Ptr_0 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double NetworkTime_get_TickOffset_m7B60157F5852925EF3F4D55D8E67FAEEDD87BA3A_inline (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* __this, const RuntimeMethod* method) 
{
	{
		// public double TickOffset => m_CachedTickOffset;
		double L_0 = __this->___m_CachedTickOffset_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double NetworkTime_get_Time_mDC7F8AB78A0D860B5D3BF62AF1E42724059F690B_inline (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* __this, const RuntimeMethod* method) 
{
	{
		// public double Time => m_TimeSec;
		double L_0 = __this->___m_TimeSec_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t NetworkTime_get_TickRate_m011971B594D6DB1C676AB1EC9029E1BB5A569CB6_inline (NetworkTime_t2E4697E4558B217C431021D2CC30A9306E778B5F* __this, const RuntimeMethod* method) 
{
	{
		// public uint TickRate => m_TickRate;
		uint32_t L_0 = __this->___m_TickRate_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkTimeSystem_set_LocalBufferSec_m82C2D3A892C9D7B79D851FA876ED7B46437EF68C_inline (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		// public double LocalBufferSec { get; set; }
		double L_0 = ___0_value;
		__this->___U3CLocalBufferSecU3Ek__BackingField_5 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkTimeSystem_set_ServerBufferSec_mB9AB61649D77F483873DF72CCE2BB4345572547E_inline (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		// public double ServerBufferSec { get; set; }
		double L_0 = ___0_value;
		__this->___U3CServerBufferSecU3Ek__BackingField_6 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkTimeSystem_set_HardResetThresholdSec_mDEEB22B6CCED462F413F8E86A27758FF4A9078ED_inline (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		// public double HardResetThresholdSec { get; set; }
		double L_0 = ___0_value;
		__this->___U3CHardResetThresholdSecU3Ek__BackingField_7 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkTimeSystem_set_AdjustmentRatio_m20025653AD41C17935FE110A9E3FCF66C7AD0B2D_inline (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		// public double AdjustmentRatio { get; set; }
		double L_0 = ___0_value;
		__this->___U3CAdjustmentRatioU3Ek__BackingField_8 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double NetworkTimeSystem_get_HardResetThresholdSec_mE047FE8D47C8221D28F8FDB581C12C5B2BC71E38_inline (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, const RuntimeMethod* method) 
{
	{
		// public double HardResetThresholdSec { get; set; }
		double L_0 = __this->___U3CHardResetThresholdSecU3Ek__BackingField_7;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double NetworkTimeSystem_get_AdjustmentRatio_mAEB1E3BD937B871B16ECFF62C01C5D55939AFD96_inline (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, const RuntimeMethod* method) 
{
	{
		// public double AdjustmentRatio { get; set; }
		double L_0 = __this->___U3CAdjustmentRatioU3Ek__BackingField_8;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkTimeSystem_set_LastSyncedRttSec_mA1C80CC3F306B8060F2602E40AF1197D222F77A8_inline (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		// internal double LastSyncedRttSec { get; private set; }
		double L_0 = ___0_value;
		__this->___U3CLastSyncedRttSecU3Ek__BackingField_10 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void NetworkTimeSystem_set_LastSyncedServerTimeSec_m4CFF62DC57A58B9634184818ADACC6E2935E0190_inline (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		// internal double LastSyncedServerTimeSec { get; private set; }
		double L_0 = ___0_value;
		__this->___U3CLastSyncedServerTimeSecU3Ek__BackingField_9 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double NetworkTimeSystem_get_ServerBufferSec_m07C6CA24A68C6972C984DE91B2AC93CED5717546_inline (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, const RuntimeMethod* method) 
{
	{
		// public double ServerBufferSec { get; set; }
		double L_0 = __this->___U3CServerBufferSecU3Ek__BackingField_6;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double NetworkTimeSystem_get_LocalBufferSec_m2EE2B31F9AFDB2E6DCD3A842243723BD27D789A4_inline (NetworkTimeSystem_t41941E913D45E10F4FAF8455F1CED3DD9432FFA2* __this, const RuntimeMethod* method) 
{
	{
		// public double LocalBufferSec { get; set; }
		double L_0 = __this->___U3CLocalBufferSecU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TransportEventDelegate_Invoke_m229F59FBB7622E360ABD0E052077C885EDFF2FBE_inline (TransportEventDelegate_tE4A97FD9060826B2E6E5B6B5EDB9E6541AD59135* __this, int32_t ___0_eventType, uint64_t ___1_clientId, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093 ___2_payload, float ___3_receiveTime, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, int32_t, uint64_t, ArraySegment_1_t3DC888623B720A071D69279F1FCB95A109195093, float, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_eventType, ___1_clientId, ___2_payload, ___3_receiveTime, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* SecretsLoaderHelper_get_ServerCommonName_m7757A0EB69519290091CFE45CFA5AA5704CE4326_inline (SecretsLoaderHelper_t82F8B8C1ABE0864565CB6AE06B04F336861FE6EE* __this, const RuntimeMethod* method) 
{
	{
		// get => m_ServerCommonName;
		String_t* L_0 = __this->___m_ServerCommonName_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036 UnityTransport_get_NetworkDriver_m47D16CBF8A15BF7D86BFC276040B31046E38926D_inline (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	{
		// internal NetworkDriver NetworkDriver => m_Driver;
		NetworkDriver_t3E4A5DD4686388B9F25135C01E4DB57E79449036 L_0 = __this->___m_Driver_27;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 UnityTransport_get_DebugSimulatorRandomSeed_m4C482F701019EFFA6017A5FAE91F2458BEF684FE_inline (UnityTransport_tF042DD8CD61B26480CA826D0164BD595A87249A4* __this, const RuntimeMethod* method) 
{
	{
		// internal uint? DebugSimulatorRandomSeed { get; set; } = null;
		Nullable_1_tD043F01310E483091D0E9A5526C3425F13EF2099 L_0 = __this->___U3CDebugSimulatorRandomSeedU3Ek__BackingField_22;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool NetworkManager_get_IsServer_m3FF8C5D22D260033AD3FC6C4AF44E7161BDD7F52_inline (NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsServer { get; internal set; }
		bool L_0 = __this->___U3CIsServerU3Ek__BackingField_38;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* NetworkManager_get_Singleton_m0F86FB1D52C8EDB866101D9CAE0CAA1D7DAE2266_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static NetworkManager Singleton { get; private set; }
		il2cpp_codegen_runtime_class_init_inline(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var);
		NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* L_0 = ((NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_StaticFields*)il2cpp_codegen_static_fields_for(NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468_il2cpp_TypeInfo_var))->___U3CSingletonU3Ek__BackingField_23;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m14F273FB376DF00D727434CDCD28AB4EDCC14C3C_gshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = *(bool*)il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),0));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Nullable_1_GetValueOrDefault_mC057FBD944AF068B90EBDD0B496231A01B2A4228_gshared_inline (Nullable_1_t71C4EA4E848DBD7A4A97704069FB951159A3A339* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(T)
	const uint32_t SizeOf_T_tF1352992D99D495C6F2BE3DC43F8A00BAD6B2EAA = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_tF1352992D99D495C6F2BE3DC43F8A00BAD6B2EAA);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_T_tF1352992D99D495C6F2BE3DC43F8A00BAD6B2EAA);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_tF1352992D99D495C6F2BE3DC43F8A00BAD6B2EAA);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Count_mEF96248898C14F3687A5C72B920F841701E4E13C_gshared_inline (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____count_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ArraySegment_1_get_Array_mE4A35DFD81ABF447350B9A05C0F4BF0248A3CFF2_gshared_inline (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, const RuntimeMethod* method) 
{
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_0 = (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC*)__this->____array_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ArraySegment_1_get_Offset_m4FAFF061AB36BF278BA8DC37B6D13718A06301E6_gshared_inline (ArraySegment_1_t00CCB00D2C671984CD055C219135EB0500C79178* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____offset_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_2_Invoke_m6343941059117DF354182855F996EB3D08B4C06C_gshared_inline (Action_2_t1D42C7D8DCD2DEB7C556FB3783F0EDAFF694E5E8* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_arg1, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___1_arg2, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_arg1, ___1_arg2, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m5A038831CEB84A7E374FE59D43444412629F833F_gshared_inline (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_obj, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___0_obj, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Enumerator_get_Current_m26AF82C275C82180BB7F23C7E408BC1FEB9A38EE_gshared_inline (Enumerator_tB3750C37D2E2D54A46142439AF83A76EC665D9B1* __this, KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
	const uint32_t SizeOf_KeyValuePair_2_t23F299E80A87656CF35AA5186B375FDE51A801EF = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>
	const KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669 L_0 = alloca(SizeOf_KeyValuePair_2_t23F299E80A87656CF35AA5186B375FDE51A801EF);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),3)), SizeOf_KeyValuePair_2_t23F299E80A87656CF35AA5186B375FDE51A801EF);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_KeyValuePair_2_t23F299E80A87656CF35AA5186B375FDE51A801EF);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Key_mBE75BF8983618BC1ACEC20F94C1BFF85C8AA50F1_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TKey)
	const uint32_t SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 0));
	// TKey
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),0)), SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TKey_tAE1541CEBE7E523E393A46E588568F4BD8337859);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void KeyValuePair_2_get_Value_mFA1964BF56AA214EE0D491CC197F61BC9E5F1F7A_gshared_inline (KeyValuePair_2_t28EF90BF7804CE5D7F99A364266351E7DC652669* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	// sizeof(TValue)
	const uint32_t SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 2));
	// TValue
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7);
	{
		il2cpp_codegen_memcpy(L_0, il2cpp_codegen_get_instance_field_data_pointer(__this, il2cpp_rgctx_field(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1),1)), SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_TValue_tAEA6D09BCD56B8A100F4F042BC143BC0266C28B7);
		return;
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
