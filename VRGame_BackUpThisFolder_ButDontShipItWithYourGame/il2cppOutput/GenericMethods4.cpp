#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




template <typename T1>
struct VirtualActionInvoker1Invoker;
template <typename T1>
struct VirtualActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
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
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker;
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2Invoker<R, T1*, T2*>
{
	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		R ret;
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, &ret);
		return ret;
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
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename R>
struct InvokerFuncInvoker0
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		R ret;
		method->invoker_method(methodPtr, method, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1)
	{
		R ret;
		void* params[1] = { &p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct InvokerFuncInvoker1<R, T1*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2;
template <typename R, typename T1, typename T2>
struct InvokerFuncInvoker2<R, T1*, T2>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		R ret;
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3 p3)
	{
		R ret;
		void* params[3] = { &p1, &p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InvokerFuncInvoker3<R, T1*, T2, T3*>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		R ret;
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4;
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1*, T2, T3, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3 p3, T4 p4)
	{
		R ret;
		void* params[4] = { p1, &p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InvokerFuncInvoker4<R, T1, T2, T3*, T4>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2 p2, T3* p3, T4 p4)
	{
		R ret;
		void* params[4] = { &p1, &p2, p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7<R, T1*, T2, T3*, T4, T5, T6, T7>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3, T4 p4, T5 p5, T6 p6, T7 p7)
	{
		R ret;
		void* params[7] = { p1, &p2, p3, &p4, &p5, &p6, &p7 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1;
template <typename R, typename T1>
struct ConstrainedFuncInvoker1<R, T1*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

// System.Collections.Generic.Comparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985;
// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource>
struct DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB;
// UnityEngine.Rendering.DynamicArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0;
// System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9;
// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
// System.Collections.Generic.List`1<Unity.Netcode.Components.NetworkAnimator/AnimationState>
struct List_1_tC2F3127C988D2A272DC7A2947921A06E0A3607B1;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource[]
struct IRenderGraphResourceU5BU5D_tC72A5980774D8ACE9E681BE8A3FAB493A70BC2F3;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType[]
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
// Unity.Netcode.Components.NetworkAnimator/AnimationState[]
struct AnimationStateU5BU5D_tB96C52AAD2E254B2AFEFBD7708F15BAB34E2F799;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource
struct IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D;
// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool
struct IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// Unity.Netcode.NetworkManager
struct NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468;
// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.String
struct String_t;
// System.Type
struct Type_t;
// Unity.Collections.LowLevel.Unsafe.UnsafeList
struct UnsafeList_t821320446016467933FF194D701C7EDDC23E538B;
// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock
struct UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C;
// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlockData
struct UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Unity.Netcode.FastBufferReader/ReaderHandle
struct ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8;
// Unity.Netcode.FastBufferWriter/WriterHandle
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6;
// Unity.Netcode.NetworkManager/NetworkManagerHooks
struct NetworkManagerHooks_t93458A933EFB97C9290803810FC835C53384DC5C;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData
struct RenderGraphResourcesData_tB2FF97B16A3E1DE700283778679C5CC0C39F4CFE;
// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/ResourceCallback
struct ResourceCallback_t45358BA8AC82EF742271B868C50331854DD58EEC;

IL2CPP_EXTERN_C RuntimeClass* AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tC2F3127C988D2A272DC7A2947921A06E0A3607B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral31D59E11265D87A3FD577199D35ECA0E2DE709B6;
IL2CPP_EXTERN_C String_t* _stringLiteral652DA0C7786060CFEE6F2BAD09E443DB730D34FD;
IL2CPP_EXTERN_C String_t* _stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1;
IL2CPP_EXTERN_C String_t* _stringLiteralFF4E2CEDF872FD0595EFE63EC988C3491269381E;
IL2CPP_EXTERN_C String_t* _stringLiteralFF9A35089103E5784EF02A898717C81941E4D1A8;
IL2CPP_EXTERN_C const RuntimeMethod* AnimationState_NetworkSerialize_TisIl2CppFullySharedGenericAny_mFAD99C42F673091B016FE6E915258ADAC6275C80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m8642F4FDC2A1CF74B24F3995ECB249BF02961CBE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF368BE26A0935A9A61A46434633D524D3B397282_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mAE7CE068F021D8955F868E911364D81C925CF998_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferReader_TryBeginRead_mDCCE31EA62FDF16BF16B1ED58CF3330944ED4900_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_GetWriteSize_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9DE25C140A46DB1137553A4C8D157DF144AA2299_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_GetWriteSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m239A1FC0690B28D46F1D2812FCB8046C65F3D759_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_GetWriteSize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mE9E453C5856C284C73F2D9D9B41A8D05DA0658FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9A6DD82B240885C6E59B9F4122F92FF7CE913031_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6D7ED227F91E338082124731CDFE37B6D416EAE2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastBufferWriter_WriteValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDB3737B5FA971F4654BA652B9933DEF3101796C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEB377EB04184619FC08EF4B6F29EEEA52F6CD9E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m8BAE428950AC23075F08161455618EA5A4F074F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mCF324D95C252195545037A68C8A5D18D0FAEE9F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.Comparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985  : public RuntimeObject
{
};

// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource>
struct DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB  : public RuntimeObject
{
	// T[] UnityEngine.Rendering.DynamicArray`1::m_Array
	IRenderGraphResourceU5BU5D_tC72A5980774D8ACE9E681BE8A3FAB493A70BC2F3* ___m_Array_0;
	// System.Int32 UnityEngine.Rendering.DynamicArray`1::<size>k__BackingField
	int32_t ___U3CsizeU3Ek__BackingField_1;
};

// UnityEngine.Rendering.DynamicArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0  : public RuntimeObject
{
	// T[] UnityEngine.Rendering.DynamicArray`1::m_Array
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___m_Array_0;
	// System.Int32 UnityEngine.Rendering.DynamicArray`1::<size>k__BackingField
	int32_t ___U3CsizeU3Ek__BackingField_1;
};

// System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9  : public RuntimeObject
{
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

// System.Collections.Generic.List`1<Unity.Netcode.Components.NetworkAnimator/AnimationState>
struct List_1_tC2F3127C988D2A272DC7A2947921A06E0A3607B1  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	AnimationStateU5BU5D_tB96C52AAD2E254B2AFEFBD7708F15BAB34E2F799* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource
struct IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D  : public RuntimeObject
{
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::imported
	bool ___imported_0;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::shared
	bool ___shared_1;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::sharedExplicitRelease
	bool ___sharedExplicitRelease_2;
	// System.Boolean UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::requestFallBack
	bool ___requestFallBack_3;
	// System.UInt32 UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::writeCount
	uint32_t ___writeCount_4;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::cachedHash
	int32_t ___cachedHash_5;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::transientPassIndex
	int32_t ___transientPassIndex_6;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::sharedResourceLastFrameUsed
	int32_t ___sharedResourceLastFrameUsed_7;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::m_Pool
	IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* ___m_Pool_8;
};

// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool
struct IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
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

// Unity.Netcode.NetworkManager/NetworkManagerHooks
struct NetworkManagerHooks_t93458A933EFB97C9290803810FC835C53384DC5C  : public RuntimeObject
{
	// Unity.Netcode.NetworkManager Unity.Netcode.NetworkManager/NetworkManagerHooks::m_NetworkManager
	NetworkManager_t3C1F76E0C1B39BB363D1C5C7667A5CC90A6CE468* ___m_NetworkManager_0;
};

// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData
struct RenderGraphResourcesData_tB2FF97B16A3E1DE700283778679C5CC0C39F4CFE  : public RuntimeObject
{
	// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource> UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData::resourceArray
	DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* ___resourceArray_0;
	// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData::sharedResourcesCount
	int32_t ___sharedResourcesCount_1;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData::pool
	IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* ___pool_2;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/ResourceCallback UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData::createResourceCallback
	ResourceCallback_t45358BA8AC82EF742271B868C50331854DD58EEC* ___createResourceCallback_3;
	// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/ResourceCallback UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData::releaseResourceCallback
	ResourceCallback_t45358BA8AC82EF742271B868C50331854DD58EEC* ___releaseResourceCallback_4;
};

// Unity.Burst.Intrinsics.X86/Avx2
struct Avx2_tEF5390382630DE33677921890832DA46CE372FBC  : public RuntimeObject
{
};

// Unity.Burst.Intrinsics.X86/Sse4_2
struct Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C  : public RuntimeObject
{
};

// Unity.Netcode.BufferSerializer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
typedef Il2CppFullySharedGenericStruct BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10;

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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// Unity.Netcode.FastBufferReader
struct FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 
{
	// Unity.Netcode.FastBufferReader/ReaderHandle* Unity.Netcode.FastBufferReader::Handle
	ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* ___Handle_0;
};

// Unity.Netcode.FastBufferWriter
struct FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC 
{
	// Unity.Netcode.FastBufferWriter/WriterHandle* Unity.Netcode.FastBufferWriter::Handle
	WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* ___Handle_0;
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

// Unity.Netcode.MessageHeader
struct MessageHeader_tA497137CB00465BF3A030227D406C71C5124B280 
{
	// System.UInt32 Unity.Netcode.MessageHeader::MessageType
	uint32_t ___MessageType_0;
	// System.UInt32 Unity.Netcode.MessageHeader::MessageSize
	uint32_t ___MessageSize_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
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

// Unity.Burst.Intrinsics.v64
struct v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Burst.Intrinsics.v64::Byte0
			uint8_t ___Byte0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_1_OffsetPadding[1];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte1
			uint8_t ___Byte1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_2_OffsetPadding[2];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte2
			uint8_t ___Byte2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_3_OffsetPadding[3];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte3
			uint8_t ___Byte3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_4_OffsetPadding[4];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte4
			uint8_t ___Byte4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_5_OffsetPadding[5];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte5
			uint8_t ___Byte5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_6_OffsetPadding[6];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte6
			uint8_t ___Byte6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_7_OffsetPadding[7];
			// System.Byte Unity.Burst.Intrinsics.v64::Byte7
			uint8_t ___Byte7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte Unity.Burst.Intrinsics.v64::SByte0
			int8_t ___SByte0_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_9_OffsetPadding[1];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte1
			int8_t ___SByte1_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_9_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_10_OffsetPadding[2];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte2
			int8_t ___SByte2_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_10_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_11_OffsetPadding[3];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte3
			int8_t ___SByte3_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_11_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_12_OffsetPadding[4];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte4
			int8_t ___SByte4_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_12_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_13_OffsetPadding[5];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte5
			int8_t ___SByte5_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_13_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_14_OffsetPadding[6];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte6
			int8_t ___SByte6_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_14_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_15_OffsetPadding[7];
			// System.SByte Unity.Burst.Intrinsics.v64::SByte7
			int8_t ___SByte7_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_15_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort0
			uint16_t ___UShort0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_17_OffsetPadding[2];
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort1
			uint16_t ___UShort1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_17_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_18_OffsetPadding[4];
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort2
			uint16_t ___UShort2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_18_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_19_OffsetPadding[6];
			// System.UInt16 Unity.Burst.Intrinsics.v64::UShort3
			uint16_t ___UShort3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_19_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort0
			int16_t ___SShort0_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_21_OffsetPadding[2];
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort1
			int16_t ___SShort1_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_21_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_22_OffsetPadding[4];
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort2
			int16_t ___SShort2_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_22_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_23_OffsetPadding[6];
			// System.Int16 Unity.Burst.Intrinsics.v64::SShort3
			int16_t ___SShort3_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_23_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 Unity.Burst.Intrinsics.v64::UInt0
			uint32_t ___UInt0_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_25_OffsetPadding[4];
			// System.UInt32 Unity.Burst.Intrinsics.v64::UInt1
			uint32_t ___UInt1_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_25_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Unity.Burst.Intrinsics.v64::SInt0
			int32_t ___SInt0_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_27_OffsetPadding[4];
			// System.Int32 Unity.Burst.Intrinsics.v64::SInt1
			int32_t ___SInt1_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_27_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Unity.Burst.Intrinsics.v64::ULong0
			uint64_t ___ULong0_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 Unity.Burst.Intrinsics.v64::SLong0
			int64_t ___SLong0_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single Unity.Burst.Intrinsics.v64::Float0
			float ___Float0_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_31_OffsetPadding[4];
			// System.Single Unity.Burst.Intrinsics.v64::Float1
			float ___Float1_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_31_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double Unity.Burst.Intrinsics.v64::Double0
			double ___Double0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_32_forAlignmentOnly;
		};
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

// Unity.Netcode.FastBufferReader/ReaderHandle
struct ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8 
{
	// System.Byte* Unity.Netcode.FastBufferReader/ReaderHandle::BufferPointer
	uint8_t* ___BufferPointer_0;
	// System.Int32 Unity.Netcode.FastBufferReader/ReaderHandle::Position
	int32_t ___Position_1;
	// System.Int32 Unity.Netcode.FastBufferReader/ReaderHandle::Length
	int32_t ___Length_2;
	// Unity.Collections.Allocator Unity.Netcode.FastBufferReader/ReaderHandle::Allocator
	int32_t ___Allocator_3;
	// System.Int32 Unity.Netcode.FastBufferReader/ReaderHandle::AllowedReadMark
	int32_t ___AllowedReadMark_4;
	// System.Boolean Unity.Netcode.FastBufferReader/ReaderHandle::InBitwiseContext
	bool ___InBitwiseContext_5;
};
// Native definition for P/Invoke marshalling of Unity.Netcode.FastBufferReader/ReaderHandle
struct ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8_marshaled_pinvoke
{
	uint8_t* ___BufferPointer_0;
	int32_t ___Position_1;
	int32_t ___Length_2;
	int32_t ___Allocator_3;
	int32_t ___AllowedReadMark_4;
	int32_t ___InBitwiseContext_5;
};
// Native definition for COM marshalling of Unity.Netcode.FastBufferReader/ReaderHandle
struct ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8_marshaled_com
{
	uint8_t* ___BufferPointer_0;
	int32_t ___Position_1;
	int32_t ___Length_2;
	int32_t ___Allocator_3;
	int32_t ___AllowedReadMark_4;
	int32_t ___InBitwiseContext_5;
};

// Unity.Netcode.FastBufferWriter/ForNetworkSerializable
struct ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 
{
	union
	{
		struct
		{
		};
		uint8_t ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3__padding[1];
	};
};

// Unity.Netcode.FastBufferWriter/ForPrimitives
struct ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 
{
	union
	{
		struct
		{
		};
		uint8_t ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292__padding[1];
	};
};

// Unity.Netcode.FastBufferWriter/ForStructs
struct ForStructs_t415180F4B3263FD619114E5DAAC9C3030BEBB83D 
{
	union
	{
		struct
		{
		};
		uint8_t ForStructs_t415180F4B3263FD619114E5DAAC9C3030BEBB83D__padding[1];
	};
};

// Unity.Netcode.FastBufferWriter/WriterHandle
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6 
{
	// System.Byte* Unity.Netcode.FastBufferWriter/WriterHandle::BufferPointer
	uint8_t* ___BufferPointer_0;
	// System.Int32 Unity.Netcode.FastBufferWriter/WriterHandle::Position
	int32_t ___Position_1;
	// System.Int32 Unity.Netcode.FastBufferWriter/WriterHandle::Length
	int32_t ___Length_2;
	// System.Int32 Unity.Netcode.FastBufferWriter/WriterHandle::Capacity
	int32_t ___Capacity_3;
	// System.Int32 Unity.Netcode.FastBufferWriter/WriterHandle::MaxCapacity
	int32_t ___MaxCapacity_4;
	// Unity.Collections.Allocator Unity.Netcode.FastBufferWriter/WriterHandle::Allocator
	int32_t ___Allocator_5;
	// System.Boolean Unity.Netcode.FastBufferWriter/WriterHandle::BufferGrew
	bool ___BufferGrew_6;
	// System.Int32 Unity.Netcode.FastBufferWriter/WriterHandle::AllowedWriteMark
	int32_t ___AllowedWriteMark_7;
	// System.Boolean Unity.Netcode.FastBufferWriter/WriterHandle::InBitwiseContext
	bool ___InBitwiseContext_8;
};
// Native definition for P/Invoke marshalling of Unity.Netcode.FastBufferWriter/WriterHandle
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6_marshaled_pinvoke
{
	uint8_t* ___BufferPointer_0;
	int32_t ___Position_1;
	int32_t ___Length_2;
	int32_t ___Capacity_3;
	int32_t ___MaxCapacity_4;
	int32_t ___Allocator_5;
	int32_t ___BufferGrew_6;
	int32_t ___AllowedWriteMark_7;
	int32_t ___InBitwiseContext_8;
};
// Native definition for COM marshalling of Unity.Netcode.FastBufferWriter/WriterHandle
struct WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6_marshaled_com
{
	uint8_t* ___BufferPointer_0;
	int32_t ___Position_1;
	int32_t ___Length_2;
	int32_t ___Capacity_3;
	int32_t ___MaxCapacity_4;
	int32_t ___Allocator_5;
	int32_t ___BufferGrew_6;
	int32_t ___AllowedWriteMark_7;
	int32_t ___InBitwiseContext_8;
};

// Unity.Collections.Memory/Unmanaged
struct Unmanaged_t06043455F062B5BBF755BE852B0A7AB1876E3310 
{
	union
	{
		struct
		{
		};
		uint8_t Unmanaged_t06043455F062B5BBF755BE852B0A7AB1876E3310__padding[1];
	};
};

// Unity.Netcode.Components.NetworkAnimator/AnimationMessage
struct AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26 
{
	// System.Boolean Unity.Netcode.Components.NetworkAnimator/AnimationMessage::HasBeenProcessed
	bool ___HasBeenProcessed_0;
	// System.Collections.Generic.List`1<Unity.Netcode.Components.NetworkAnimator/AnimationState> Unity.Netcode.Components.NetworkAnimator/AnimationMessage::AnimationStates
	List_1_tC2F3127C988D2A272DC7A2947921A06E0A3607B1* ___AnimationStates_1;
	// System.Int32 Unity.Netcode.Components.NetworkAnimator/AnimationMessage::IsDirtyCount
	int32_t ___IsDirtyCount_2;
};
// Native definition for P/Invoke marshalling of Unity.Netcode.Components.NetworkAnimator/AnimationMessage
struct AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_marshaled_pinvoke
{
	int32_t ___HasBeenProcessed_0;
	List_1_tC2F3127C988D2A272DC7A2947921A06E0A3607B1* ___AnimationStates_1;
	int32_t ___IsDirtyCount_2;
};
// Native definition for COM marshalling of Unity.Netcode.Components.NetworkAnimator/AnimationMessage
struct AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26_marshaled_com
{
	int32_t ___HasBeenProcessed_0;
	List_1_tC2F3127C988D2A272DC7A2947921A06E0A3607B1* ___AnimationStates_1;
	int32_t ___IsDirtyCount_2;
};

// Unity.Netcode.Components.NetworkAnimator/AnimationState
struct AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA 
{
	// System.Boolean Unity.Netcode.Components.NetworkAnimator/AnimationState::HasBeenProcessed
	bool ___HasBeenProcessed_0;
	// System.Int32 Unity.Netcode.Components.NetworkAnimator/AnimationState::StateHash
	int32_t ___StateHash_1;
	// System.Single Unity.Netcode.Components.NetworkAnimator/AnimationState::NormalizedTime
	float ___NormalizedTime_2;
	// System.Int32 Unity.Netcode.Components.NetworkAnimator/AnimationState::Layer
	int32_t ___Layer_3;
	// System.Single Unity.Netcode.Components.NetworkAnimator/AnimationState::Weight
	float ___Weight_4;
	// System.Boolean Unity.Netcode.Components.NetworkAnimator/AnimationState::Transition
	bool ___Transition_5;
	// System.Int32 Unity.Netcode.Components.NetworkAnimator/AnimationState::DestinationStateHash
	int32_t ___DestinationStateHash_6;
};
// Native definition for P/Invoke marshalling of Unity.Netcode.Components.NetworkAnimator/AnimationState
struct AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA_marshaled_pinvoke
{
	int32_t ___HasBeenProcessed_0;
	int32_t ___StateHash_1;
	float ___NormalizedTime_2;
	int32_t ___Layer_3;
	float ___Weight_4;
	int32_t ___Transition_5;
	int32_t ___DestinationStateHash_6;
};
// Native definition for COM marshalling of Unity.Netcode.Components.NetworkAnimator/AnimationState
struct AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA_marshaled_com
{
	int32_t ___HasBeenProcessed_0;
	int32_t ___StateHash_1;
	float ___NormalizedTime_2;
	int32_t ___Layer_3;
	float ___Weight_4;
	int32_t ___Transition_5;
	int32_t ___DestinationStateHash_6;
};

// Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage
struct AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46 
{
	// System.Int32 Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage::Hash
	int32_t ___Hash_0;
	// System.Boolean Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage::IsTriggerSet
	bool ___IsTriggerSet_1;
};
// Native definition for P/Invoke marshalling of Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage
struct AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_marshaled_pinvoke
{
	int32_t ___Hash_0;
	int32_t ___IsTriggerSet_1;
};
// Native definition for COM marshalling of Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage
struct AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46_marshaled_com
{
	int32_t ___Hash_0;
	int32_t ___IsTriggerSet_1;
};

// Unity.Netcode.Components.NetworkAnimator/ParametersUpdateMessage
struct ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536 
{
	// System.Byte[] Unity.Netcode.Components.NetworkAnimator/ParametersUpdateMessage::Parameters
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___Parameters_0;
};
// Native definition for P/Invoke marshalling of Unity.Netcode.Components.NetworkAnimator/ParametersUpdateMessage
struct ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___Parameters_0;
};
// Native definition for COM marshalling of Unity.Netcode.Components.NetworkAnimator/ParametersUpdateMessage
struct ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___Parameters_0;
};

// Unity.Netcode.Components.NetworkTransform/NetworkTransformState
struct NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0 
{
	// System.UInt16 Unity.Netcode.Components.NetworkTransform/NetworkTransformState::m_Bitset
	uint16_t ___m_Bitset_11;
	// System.Single Unity.Netcode.Components.NetworkTransform/NetworkTransformState::PositionX
	float ___PositionX_12;
	// System.Single Unity.Netcode.Components.NetworkTransform/NetworkTransformState::PositionY
	float ___PositionY_13;
	// System.Single Unity.Netcode.Components.NetworkTransform/NetworkTransformState::PositionZ
	float ___PositionZ_14;
	// System.Single Unity.Netcode.Components.NetworkTransform/NetworkTransformState::RotAngleX
	float ___RotAngleX_15;
	// System.Single Unity.Netcode.Components.NetworkTransform/NetworkTransformState::RotAngleY
	float ___RotAngleY_16;
	// System.Single Unity.Netcode.Components.NetworkTransform/NetworkTransformState::RotAngleZ
	float ___RotAngleZ_17;
	// System.Single Unity.Netcode.Components.NetworkTransform/NetworkTransformState::ScaleX
	float ___ScaleX_18;
	// System.Single Unity.Netcode.Components.NetworkTransform/NetworkTransformState::ScaleY
	float ___ScaleY_19;
	// System.Single Unity.Netcode.Components.NetworkTransform/NetworkTransformState::ScaleZ
	float ___ScaleZ_20;
	// System.Double Unity.Netcode.Components.NetworkTransform/NetworkTransformState::SentTime
	double ___SentTime_21;
	// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::IsDirty
	bool ___IsDirty_22;
	// System.Int32 Unity.Netcode.Components.NetworkTransform/NetworkTransformState::EndExtrapolationTick
	int32_t ___EndExtrapolationTick_23;
};
// Native definition for P/Invoke marshalling of Unity.Netcode.Components.NetworkTransform/NetworkTransformState
struct NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0_marshaled_pinvoke
{
	uint16_t ___m_Bitset_11;
	float ___PositionX_12;
	float ___PositionY_13;
	float ___PositionZ_14;
	float ___RotAngleX_15;
	float ___RotAngleY_16;
	float ___RotAngleZ_17;
	float ___ScaleX_18;
	float ___ScaleY_19;
	float ___ScaleZ_20;
	double ___SentTime_21;
	int32_t ___IsDirty_22;
	int32_t ___EndExtrapolationTick_23;
};
// Native definition for COM marshalling of Unity.Netcode.Components.NetworkTransform/NetworkTransformState
struct NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0_marshaled_com
{
	uint16_t ___m_Bitset_11;
	float ___PositionX_12;
	float ___PositionY_13;
	float ___PositionZ_14;
	float ___RotAngleX_15;
	float ___RotAngleY_16;
	float ___RotAngleZ_17;
	float ___ScaleX_18;
	float ___ScaleY_19;
	float ___ScaleZ_20;
	double ___SentTime_21;
	int32_t ___IsDirty_22;
	int32_t ___EndExtrapolationTick_23;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader
struct Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6 
{
	// System.Byte* Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::Ptr
	uint8_t* ___Ptr_0;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::Size
	int32_t ___Size_1;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::Offset
	int32_t ___Offset_2;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelReader
struct ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3 
{
	// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelReader::Ptr
	void* ___Ptr_0;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelReader::Length
	int32_t ___Length_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelWriter
struct ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB 
{
	// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelWriter::Ptr
	void* ___Ptr_0;
	// Unity.Collections.LowLevel.Unsafe.UnsafeList* Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelWriter::ListData
	UnsafeList_t821320446016467933FF194D701C7EDDC23E538B* ___ListData_1;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader
struct Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlockData* Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::m_BlockStream
	UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* ___m_BlockStream_0;
	// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock* Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::m_CurrentBlock
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___m_CurrentBlock_1;
	// System.Byte* Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::m_CurrentPtr
	uint8_t* ___m_CurrentPtr_2;
	// System.Byte* Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::m_CurrentBlockEnd
	uint8_t* ___m_CurrentBlockEnd_3;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::m_RemainingItemCount
	int32_t ___m_RemainingItemCount_4;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::m_LastBlockSize
	int32_t ___m_LastBlockSize_5;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer
struct Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlockData* Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::m_BlockStream
	UnsafeStreamBlockData_t7024BEE600A8D8D0A263688FDF269C9F89473DA6* ___m_BlockStream_0;
	// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock* Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::m_CurrentBlock
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___m_CurrentBlock_1;
	// System.Byte* Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::m_CurrentPtr
	uint8_t* ___m_CurrentPtr_2;
	// System.Byte* Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::m_CurrentBlockEnd
	uint8_t* ___m_CurrentBlockEnd_3;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::m_ForeachIndex
	int32_t ___m_ForeachIndex_4;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::m_ElementCount
	int32_t ___m_ElementCount_5;
	// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock* Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::m_FirstBlock
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___m_FirstBlock_6;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::m_FirstOffset
	int32_t ___m_FirstOffset_7;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::m_NumberOfBlocks
	int32_t ___m_NumberOfBlocks_8;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::m_ThreadIndex
	int32_t ___m_ThreadIndex_9;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock/<Data>e__FixedBuffer
struct U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116 
{
	union
	{
		struct
		{
			// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock/<Data>e__FixedBuffer::FixedElementField
			uint8_t ___FixedElementField_0;
		};
		uint8_t U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116__padding[1];
	};
};

// Unity.Collections.Memory/Unmanaged/Array
struct Array_t3B8F006A80A48C83471DE3516556F1AFE6873381 
{
	union
	{
		struct
		{
		};
		uint8_t Array_t3B8F006A80A48C83471DE3516556F1AFE6873381__padding[1];
	};
};

// Unity.Collections.xxHash3/StreamingState/StreamingStateData
struct StreamingStateData_tB4ECCAB2ECCD0555A32604F161D9B80D9FA42B3A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Unity.Collections.xxHash3/StreamingState/StreamingStateData::Acc
			uint64_t ___Acc_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___Acc_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Buffer_1_OffsetPadding[64];
			// System.Byte Unity.Collections.xxHash3/StreamingState/StreamingStateData::Buffer
			uint8_t ___Buffer_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Buffer_1_OffsetPadding_forAlignmentOnly[64];
			uint8_t ___Buffer_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___IsHash64_2_OffsetPadding[320];
			// System.Int32 Unity.Collections.xxHash3/StreamingState/StreamingStateData::IsHash64
			int32_t ___IsHash64_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___IsHash64_2_OffsetPadding_forAlignmentOnly[320];
			int32_t ___IsHash64_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___BufferedSize_3_OffsetPadding[324];
			// System.Int32 Unity.Collections.xxHash3/StreamingState/StreamingStateData::BufferedSize
			int32_t ___BufferedSize_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___BufferedSize_3_OffsetPadding_forAlignmentOnly[324];
			int32_t ___BufferedSize_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___NbStripesSoFar_4_OffsetPadding[328];
			// System.Int32 Unity.Collections.xxHash3/StreamingState/StreamingStateData::NbStripesSoFar
			int32_t ___NbStripesSoFar_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___NbStripesSoFar_4_OffsetPadding_forAlignmentOnly[328];
			int32_t ___NbStripesSoFar_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___TotalLength_5_OffsetPadding[336];
			// System.Int64 Unity.Collections.xxHash3/StreamingState/StreamingStateData::TotalLength
			int64_t ___TotalLength_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___TotalLength_5_OffsetPadding_forAlignmentOnly[336];
			int64_t ___TotalLength_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Seed_6_OffsetPadding[344];
			// System.UInt64 Unity.Collections.xxHash3/StreamingState/StreamingStateData::Seed
			uint64_t ___Seed_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Seed_6_OffsetPadding_forAlignmentOnly[344];
			uint64_t ___Seed_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SecretKey_7_OffsetPadding[352];
			// System.Byte Unity.Collections.xxHash3/StreamingState/StreamingStateData::SecretKey
			uint8_t ___SecretKey_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SecretKey_7_OffsetPadding_forAlignmentOnly[352];
			uint8_t ___SecretKey_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ____PadEnd_8_OffsetPadding[540];
			// System.Byte Unity.Collections.xxHash3/StreamingState/StreamingStateData::_PadEnd
			uint8_t ____PadEnd_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ____PadEnd_8_OffsetPadding_forAlignmentOnly[540];
			uint8_t ____PadEnd_8_forAlignmentOnly;
		};
	};
};

// Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray/<Bits>e__FixedBuffer
struct U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD 
{
	union
	{
		struct
		{
			// System.UInt16 Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray/<Bits>e__FixedBuffer::FixedElementField
			uint16_t ___FixedElementField_0;
		};
		uint8_t U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD__padding[32];
	};
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

// Unity.Netcode.NetworkContext
struct NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1 
{
	// System.Object Unity.Netcode.NetworkContext::SystemOwner
	RuntimeObject* ___SystemOwner_0;
	// System.UInt64 Unity.Netcode.NetworkContext::SenderId
	uint64_t ___SenderId_1;
	// System.Single Unity.Netcode.NetworkContext::Timestamp
	float ___Timestamp_2;
	// Unity.Netcode.MessageHeader Unity.Netcode.NetworkContext::Header
	MessageHeader_tA497137CB00465BF3A030227D406C71C5124B280 ___Header_3;
	// System.Int32 Unity.Netcode.NetworkContext::SerializedHeaderSize
	int32_t ___SerializedHeaderSize_4;
	// System.UInt32 Unity.Netcode.NetworkContext::MessageSize
	uint32_t ___MessageSize_5;
};
// Native definition for P/Invoke marshalling of Unity.Netcode.NetworkContext
struct NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1_marshaled_pinvoke
{
	Il2CppIUnknown* ___SystemOwner_0;
	uint64_t ___SenderId_1;
	float ___Timestamp_2;
	MessageHeader_tA497137CB00465BF3A030227D406C71C5124B280 ___Header_3;
	int32_t ___SerializedHeaderSize_4;
	uint32_t ___MessageSize_5;
};
// Native definition for COM marshalling of Unity.Netcode.NetworkContext
struct NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1_marshaled_com
{
	Il2CppIUnknown* ___SystemOwner_0;
	uint64_t ___SenderId_1;
	float ___Timestamp_2;
	MessageHeader_tA497137CB00465BF3A030227D406C71C5124B280 ___Header_3;
	int32_t ___SerializedHeaderSize_4;
	uint32_t ___MessageSize_5;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeList
struct UnsafeList_t821320446016467933FF194D701C7EDDC23E538B 
{
	// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeList::Ptr
	void* ___Ptr_0;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList::Length
	int32_t ___Length_1;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList::unused
	int32_t ___unused_2;
	// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList::Capacity
	int32_t ___Capacity_3;
	// Unity.Collections.AllocatorManager/AllocatorHandle Unity.Collections.LowLevel.Unsafe.UnsafeList::Allocator
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___Allocator_4;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock
struct UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock* Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock::Next
	UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* ___Next_0;
	// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock/<Data>e__FixedBuffer Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock::Data
	U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116 ___Data_1;
};

// Unity.Burst.Intrinsics.v128
struct v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte Unity.Burst.Intrinsics.v128::Byte0
			uint8_t ___Byte0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___Byte0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte1_1_OffsetPadding[1];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte1
			uint8_t ___Byte1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___Byte1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte2_2_OffsetPadding[2];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte2
			uint8_t ___Byte2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___Byte2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte3_3_OffsetPadding[3];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte3
			uint8_t ___Byte3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___Byte3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte4_4_OffsetPadding[4];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte4
			uint8_t ___Byte4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___Byte4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte5_5_OffsetPadding[5];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte5
			uint8_t ___Byte5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___Byte5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte6_6_OffsetPadding[6];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte6
			uint8_t ___Byte6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___Byte6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte7_7_OffsetPadding[7];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte7
			uint8_t ___Byte7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___Byte7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte8_8_OffsetPadding[8];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte8
			uint8_t ___Byte8_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte8_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___Byte8_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte9_9_OffsetPadding[9];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte9
			uint8_t ___Byte9_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte9_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___Byte9_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte10_10_OffsetPadding[10];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte10
			uint8_t ___Byte10_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte10_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___Byte10_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte11_11_OffsetPadding[11];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte11
			uint8_t ___Byte11_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte11_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___Byte11_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte12_12_OffsetPadding[12];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte12
			uint8_t ___Byte12_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte12_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___Byte12_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte13_13_OffsetPadding[13];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte13
			uint8_t ___Byte13_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte13_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___Byte13_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte14_14_OffsetPadding[14];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte14
			uint8_t ___Byte14_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte14_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___Byte14_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Byte15_15_OffsetPadding[15];
			// System.Byte Unity.Burst.Intrinsics.v128::Byte15
			uint8_t ___Byte15_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Byte15_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___Byte15_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte Unity.Burst.Intrinsics.v128::SByte0
			int8_t ___SByte0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___SByte0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte1_17_OffsetPadding[1];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte1
			int8_t ___SByte1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte1_17_OffsetPadding_forAlignmentOnly[1];
			int8_t ___SByte1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte2_18_OffsetPadding[2];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte2
			int8_t ___SByte2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte2_18_OffsetPadding_forAlignmentOnly[2];
			int8_t ___SByte2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte3_19_OffsetPadding[3];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte3
			int8_t ___SByte3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte3_19_OffsetPadding_forAlignmentOnly[3];
			int8_t ___SByte3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte4_20_OffsetPadding[4];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte4
			int8_t ___SByte4_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte4_20_OffsetPadding_forAlignmentOnly[4];
			int8_t ___SByte4_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte5_21_OffsetPadding[5];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte5
			int8_t ___SByte5_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte5_21_OffsetPadding_forAlignmentOnly[5];
			int8_t ___SByte5_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte6_22_OffsetPadding[6];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte6
			int8_t ___SByte6_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte6_22_OffsetPadding_forAlignmentOnly[6];
			int8_t ___SByte6_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte7_23_OffsetPadding[7];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte7
			int8_t ___SByte7_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte7_23_OffsetPadding_forAlignmentOnly[7];
			int8_t ___SByte7_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte8_24_OffsetPadding[8];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte8
			int8_t ___SByte8_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte8_24_OffsetPadding_forAlignmentOnly[8];
			int8_t ___SByte8_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte9_25_OffsetPadding[9];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte9
			int8_t ___SByte9_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte9_25_OffsetPadding_forAlignmentOnly[9];
			int8_t ___SByte9_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte10_26_OffsetPadding[10];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte10
			int8_t ___SByte10_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte10_26_OffsetPadding_forAlignmentOnly[10];
			int8_t ___SByte10_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte11_27_OffsetPadding[11];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte11
			int8_t ___SByte11_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte11_27_OffsetPadding_forAlignmentOnly[11];
			int8_t ___SByte11_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte12_28_OffsetPadding[12];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte12
			int8_t ___SByte12_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte12_28_OffsetPadding_forAlignmentOnly[12];
			int8_t ___SByte12_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte13_29_OffsetPadding[13];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte13
			int8_t ___SByte13_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte13_29_OffsetPadding_forAlignmentOnly[13];
			int8_t ___SByte13_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte14_30_OffsetPadding[14];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte14
			int8_t ___SByte14_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte14_30_OffsetPadding_forAlignmentOnly[14];
			int8_t ___SByte14_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SByte15_31_OffsetPadding[15];
			// System.SByte Unity.Burst.Intrinsics.v128::SByte15
			int8_t ___SByte15_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SByte15_31_OffsetPadding_forAlignmentOnly[15];
			int8_t ___SByte15_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort0
			uint16_t ___UShort0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___UShort0_32_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort1_33_OffsetPadding[2];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort1
			uint16_t ___UShort1_33;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort1_33_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___UShort1_33_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort2_34_OffsetPadding[4];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort2
			uint16_t ___UShort2_34;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort2_34_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___UShort2_34_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort3_35_OffsetPadding[6];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort3
			uint16_t ___UShort3_35;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort3_35_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___UShort3_35_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort4_36_OffsetPadding[8];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort4
			uint16_t ___UShort4_36;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort4_36_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___UShort4_36_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort5_37_OffsetPadding[10];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort5
			uint16_t ___UShort5_37;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort5_37_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___UShort5_37_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort6_38_OffsetPadding[12];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort6
			uint16_t ___UShort6_38;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort6_38_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___UShort6_38_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UShort7_39_OffsetPadding[14];
			// System.UInt16 Unity.Burst.Intrinsics.v128::UShort7
			uint16_t ___UShort7_39;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UShort7_39_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___UShort7_39_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort0
			int16_t ___SShort0_40;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___SShort0_40_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort1_41_OffsetPadding[2];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort1
			int16_t ___SShort1_41;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort1_41_OffsetPadding_forAlignmentOnly[2];
			int16_t ___SShort1_41_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort2_42_OffsetPadding[4];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort2
			int16_t ___SShort2_42;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort2_42_OffsetPadding_forAlignmentOnly[4];
			int16_t ___SShort2_42_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort3_43_OffsetPadding[6];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort3
			int16_t ___SShort3_43;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort3_43_OffsetPadding_forAlignmentOnly[6];
			int16_t ___SShort3_43_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort4_44_OffsetPadding[8];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort4
			int16_t ___SShort4_44;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort4_44_OffsetPadding_forAlignmentOnly[8];
			int16_t ___SShort4_44_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort5_45_OffsetPadding[10];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort5
			int16_t ___SShort5_45;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort5_45_OffsetPadding_forAlignmentOnly[10];
			int16_t ___SShort5_45_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort6_46_OffsetPadding[12];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort6
			int16_t ___SShort6_46;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort6_46_OffsetPadding_forAlignmentOnly[12];
			int16_t ___SShort6_46_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SShort7_47_OffsetPadding[14];
			// System.Int16 Unity.Burst.Intrinsics.v128::SShort7
			int16_t ___SShort7_47;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SShort7_47_OffsetPadding_forAlignmentOnly[14];
			int16_t ___SShort7_47_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt0
			uint32_t ___UInt0_48;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___UInt0_48_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt1_49_OffsetPadding[4];
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt1
			uint32_t ___UInt1_49;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt1_49_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___UInt1_49_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt2_50_OffsetPadding[8];
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt2
			uint32_t ___UInt2_50;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt2_50_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___UInt2_50_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___UInt3_51_OffsetPadding[12];
			// System.UInt32 Unity.Burst.Intrinsics.v128::UInt3
			uint32_t ___UInt3_51;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___UInt3_51_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___UInt3_51_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt0
			int32_t ___SInt0_52;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___SInt0_52_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt1_53_OffsetPadding[4];
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt1
			int32_t ___SInt1_53;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt1_53_OffsetPadding_forAlignmentOnly[4];
			int32_t ___SInt1_53_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt2_54_OffsetPadding[8];
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt2
			int32_t ___SInt2_54;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt2_54_OffsetPadding_forAlignmentOnly[8];
			int32_t ___SInt2_54_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SInt3_55_OffsetPadding[12];
			// System.Int32 Unity.Burst.Intrinsics.v128::SInt3
			int32_t ___SInt3_55;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SInt3_55_OffsetPadding_forAlignmentOnly[12];
			int32_t ___SInt3_55_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 Unity.Burst.Intrinsics.v128::ULong0
			uint64_t ___ULong0_56;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___ULong0_56_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ULong1_57_OffsetPadding[8];
			// System.UInt64 Unity.Burst.Intrinsics.v128::ULong1
			uint64_t ___ULong1_57;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ULong1_57_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ULong1_57_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 Unity.Burst.Intrinsics.v128::SLong0
			int64_t ___SLong0_58;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___SLong0_58_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___SLong1_59_OffsetPadding[8];
			// System.Int64 Unity.Burst.Intrinsics.v128::SLong1
			int64_t ___SLong1_59;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___SLong1_59_OffsetPadding_forAlignmentOnly[8];
			int64_t ___SLong1_59_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single Unity.Burst.Intrinsics.v128::Float0
			float ___Float0_60;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___Float0_60_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float1_61_OffsetPadding[4];
			// System.Single Unity.Burst.Intrinsics.v128::Float1
			float ___Float1_61;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float1_61_OffsetPadding_forAlignmentOnly[4];
			float ___Float1_61_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float2_62_OffsetPadding[8];
			// System.Single Unity.Burst.Intrinsics.v128::Float2
			float ___Float2_62;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float2_62_OffsetPadding_forAlignmentOnly[8];
			float ___Float2_62_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Float3_63_OffsetPadding[12];
			// System.Single Unity.Burst.Intrinsics.v128::Float3
			float ___Float3_63;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Float3_63_OffsetPadding_forAlignmentOnly[12];
			float ___Float3_63_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double Unity.Burst.Intrinsics.v128::Double0
			double ___Double0_64;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___Double0_64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Double1_65_OffsetPadding[8];
			// System.Double Unity.Burst.Intrinsics.v128::Double1
			double ___Double1_65;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Double1_65_OffsetPadding_forAlignmentOnly[8];
			double ___Double1_65_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// Unity.Burst.Intrinsics.v64 Unity.Burst.Intrinsics.v128::Lo64
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Lo64_66;
		};
		#pragma pack(pop, tp)
		struct
		{
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Lo64_66_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___Hi64_67_OffsetPadding[8];
			// Unity.Burst.Intrinsics.v64 Unity.Burst.Intrinsics.v128::Hi64
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Hi64_67;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___Hi64_67_OffsetPadding_forAlignmentOnly[8];
			v64_t9C4037532D386FF1E9B95E5FBD01FEF472AC1F96 ___Hi64_67_forAlignmentOnly;
		};
	};
};

// Unity.Collections.NativeStream/Reader
struct Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader Unity.Collections.NativeStream/Reader::m_Reader
	Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458 ___m_Reader_0;
};

// Unity.Collections.NativeStream/Writer
struct Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F 
{
	// Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer Unity.Collections.NativeStream/Writer::m_Writer
	Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F ___m_Writer_0;
};

// Unity.Collections.xxHash3/StreamingState
struct StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020 
{
	// Unity.Collections.xxHash3/StreamingState/StreamingStateData Unity.Collections.xxHash3/StreamingState::State
	StreamingStateData_tB4ECCAB2ECCD0555A32604F161D9B80D9FA42B3A ___State_4;
};

// Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray
struct StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 
{
	// Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray/<Bits>e__FixedBuffer Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray::Bits
	U3CBitsU3Ee__FixedBuffer_tFED81968B5AEB075B5560B55A16A31C5F01A83BD ___Bits_0;
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

// System.ArithmeticException
struct ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// System.OverflowException
struct OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C  : public ArithmeticException_t07E77822D0007642BC8959A671E70D1F33C84FEA
{
};

// System.Collections.Generic.Comparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985_StaticFields
{
	// System.Collections.Generic.Comparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.Comparer`1::defaultComparer
	Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* ___defaultComparer_0;
};

// System.Collections.Generic.Comparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource>

// UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource>

// UnityEngine.Rendering.DynamicArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// UnityEngine.Rendering.DynamicArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>
struct EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9_StaticFields
{
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* ___defaultComparer_0;
};

// System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// System.Collections.Generic.List`1<Unity.Netcode.Components.NetworkAnimator/AnimationState>
struct List_1_tC2F3127C988D2A272DC7A2947921A06E0A3607B1_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	AnimationStateU5BU5D_tB96C52AAD2E254B2AFEFBD7708F15BAB34E2F799* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<Unity.Netcode.Components.NetworkAnimator/AnimationState>

// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource

// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource

// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool

// UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool

// System.Reflection.MemberInfo

// System.Reflection.MemberInfo

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// System.ValueType

// System.ValueType

// Unity.Netcode.NetworkManager/NetworkManagerHooks

// Unity.Netcode.NetworkManager/NetworkManagerHooks

// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData

// UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData

// Unity.Burst.Intrinsics.X86/Avx2

// Unity.Burst.Intrinsics.X86/Avx2

// Unity.Burst.Intrinsics.X86/Sse4_2
struct Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_StaticFields
{
	// System.UInt32[] Unity.Burst.Intrinsics.X86/Sse4_2::crctab
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___crctab_0;
};

// Unity.Burst.Intrinsics.X86/Sse4_2

// Unity.Netcode.BufferSerializer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Unity.Netcode.BufferSerializer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>

// Unity.Collections.NativeArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

// Unity.Collections.NativeArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>

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

// System.Double

// System.Double

// Unity.Netcode.FastBufferReader

// Unity.Netcode.FastBufferReader

// Unity.Netcode.FastBufferWriter
struct FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_StaticFields
{
	// System.Byte[] Unity.Netcode.FastBufferWriter::s_ByteArrayCache
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_ByteArrayCache_1;
};

// Unity.Netcode.FastBufferWriter

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

// Unity.Netcode.MessageHeader

// Unity.Netcode.MessageHeader

// System.Single

// System.Single

// System.UInt16

// System.UInt16

// System.UInt64

// System.UInt64

// System.Void

// System.Void

// Unity.Burst.Intrinsics.v64

// Unity.Burst.Intrinsics.v64

// Unity.Collections.AllocatorManager/AllocatorHandle

// Unity.Collections.AllocatorManager/AllocatorHandle

// Unity.Netcode.FastBufferReader/ReaderHandle

// Unity.Netcode.FastBufferReader/ReaderHandle

// Unity.Netcode.FastBufferWriter/ForNetworkSerializable

// Unity.Netcode.FastBufferWriter/ForNetworkSerializable

// Unity.Netcode.FastBufferWriter/ForPrimitives

// Unity.Netcode.FastBufferWriter/ForPrimitives

// Unity.Netcode.FastBufferWriter/ForStructs

// Unity.Netcode.FastBufferWriter/ForStructs

// Unity.Netcode.FastBufferWriter/WriterHandle

// Unity.Netcode.FastBufferWriter/WriterHandle

// Unity.Collections.Memory/Unmanaged

// Unity.Collections.Memory/Unmanaged

// Unity.Netcode.Components.NetworkAnimator/AnimationMessage

// Unity.Netcode.Components.NetworkAnimator/AnimationMessage

// Unity.Netcode.Components.NetworkAnimator/AnimationState

// Unity.Netcode.Components.NetworkAnimator/AnimationState

// Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage

// Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage

// Unity.Netcode.Components.NetworkAnimator/ParametersUpdateMessage

// Unity.Netcode.Components.NetworkAnimator/ParametersUpdateMessage

// Unity.Netcode.Components.NetworkTransform/NetworkTransformState

// Unity.Netcode.Components.NetworkTransform/NetworkTransformState

// Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader

// Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader

// Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelReader

// Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelReader

// Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelWriter

// Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelWriter

// Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader

// Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader

// Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer

// Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer

// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock/<Data>e__FixedBuffer

// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock/<Data>e__FixedBuffer

// Unity.Collections.Memory/Unmanaged/Array

// Unity.Collections.Memory/Unmanaged/Array

// Unity.Collections.xxHash3/StreamingState/StreamingStateData

// Unity.Collections.xxHash3/StreamingState/StreamingStateData

// Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray/<Bits>e__FixedBuffer

// Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray/<Bits>e__FixedBuffer

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// Unity.Netcode.NetworkContext

// Unity.Netcode.NetworkContext

// System.RuntimeTypeHandle

// System.RuntimeTypeHandle

// Unity.Collections.LowLevel.Unsafe.UnsafeList

// Unity.Collections.LowLevel.Unsafe.UnsafeList

// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock

// Unity.Collections.LowLevel.Unsafe.UnsafeStreamBlock

// Unity.Burst.Intrinsics.v128

// Unity.Burst.Intrinsics.v128

// Unity.Collections.NativeStream/Reader

// Unity.Collections.NativeStream/Reader

// Unity.Collections.NativeStream/Writer

// Unity.Collections.NativeStream/Writer

// Unity.Collections.xxHash3/StreamingState
struct StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020_StaticFields
{
	// System.Int32 Unity.Collections.xxHash3/StreamingState::SECRET_LIMIT
	int32_t ___SECRET_LIMIT_0;
	// System.Int32 Unity.Collections.xxHash3/StreamingState::NB_STRIPES_PER_BLOCK
	int32_t ___NB_STRIPES_PER_BLOCK_1;
	// System.Int32 Unity.Collections.xxHash3/StreamingState::INTERNAL_BUFFER_SIZE
	int32_t ___INTERNAL_BUFFER_SIZE_2;
	// System.Int32 Unity.Collections.xxHash3/StreamingState::INTERNAL_BUFFER_STRIPES
	int32_t ___INTERNAL_BUFFER_STRIPES_3;
};

// Unity.Collections.xxHash3/StreamingState

// Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray

// Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray

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

// System.ArithmeticException

// System.ArithmeticException

// System.InvalidOperationException

// System.InvalidOperationException

// System.OverflowException

// System.OverflowException
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


// T& Unity.Collections.NativeStream/Reader::Peek<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m2858A9931F3736225D223F6D7A66EB3B740CFB3E_gshared (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* __this, const RuntimeMethod* method) ;
// T& Unity.Collections.NativeStream/Reader::Read<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_m72E44AFFE62AB8341A8BF0975D02F88F85B58819_gshared (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* __this, const RuntimeMethod* method) ;
// T& Unity.Collections.NativeStream/Writer::Allocate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m152D2779B7277D522B694AF0698A887AEDD0B866_gshared (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeStream/Writer::Write<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_Write_TisIl2CppFullySharedGenericStruct_m4B52108B68A52441FB126D64ECBC48059BFFE7CB_gshared (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny ___0_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* __this, int32_t ___0_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkAnimator/AnimationMessage::NetworkSerialize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Unity.Netcode.BufferSerializer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMessage_NetworkSerialize_TisIl2CppFullySharedGenericAny_mE846E28B371306FE4081D17B2F6F1DDA38DF87D6_gshared (AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26* __this, /*Unity.Netcode.BufferSerializer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 ___0_serializer, const RuntimeMethod* method) ;
// System.Int32 Unity.Netcode.FastBufferWriter::GetWriteSize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T&,Unity.Netcode.FastBufferWriter/ForStructs)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_GetWriteSize_TisIl2CppFullySharedGenericStruct_m2139D4ADD3A98DE64C0D2D519EBD32826B36D24A_gshared_inline (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___0_value, ForStructs_t415180F4B3263FD619114E5DAAC9C3030BEBB83D ___1_unused, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferWriter::WriteValue<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T&,Unity.Netcode.FastBufferWriter/ForPrimitives)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValue_TisIl2CppFullySharedGenericStruct_m576FF3C4FCD70A41F8A902F9BF4CAE68AC93243F_gshared_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferReader::ReadValue<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T&,Unity.Netcode.FastBufferWriter/ForPrimitives)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValue_TisIl2CppFullySharedGenericStruct_m07EEBDC9EC3FD07C301FFBC05F5F012B1A3F6435_gshared_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkAnimator/AnimationState::NetworkSerialize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Unity.Netcode.BufferSerializer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState_NetworkSerialize_TisIl2CppFullySharedGenericAny_mFAD99C42F673091B016FE6E915258ADAC6275C80_gshared (AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA* __this, /*Unity.Netcode.BufferSerializer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 ___0_serializer, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage::NetworkSerialize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Unity.Netcode.BufferSerializer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationTriggerMessage_NetworkSerialize_TisIl2CppFullySharedGenericAny_m19F989C02349EC879B45D21A753F931CC935E160_gshared (AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46* __this, /*Unity.Netcode.BufferSerializer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 ___0_serializer, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkAnimator/ParametersUpdateMessage::NetworkSerialize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Unity.Netcode.BufferSerializer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParametersUpdateMessage_NetworkSerialize_TisIl2CppFullySharedGenericAny_m77889F14D21C124F55D53B6DAE359421EC25991B_gshared (ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536* __this, /*Unity.Netcode.BufferSerializer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 ___0_serializer, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::NetworkSerialize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Unity.Netcode.BufferSerializer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_NetworkSerialize_TisIl2CppFullySharedGenericAny_mF1AE35F9ACC173849CAF88BF7240733114AF4597_gshared (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, /*Unity.Netcode.BufferSerializer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 ___0_serializer, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Rendering.DynamicArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_size()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_m128222BE63C9931B08CD38DF32B858CD1CD4926D_gshared_inline (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rendering.DynamicArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::Resize(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicArray_1_Resize_m83B9E2903381BE0CD673D1B67026BE32C5F2347F_gshared (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0* __this, int32_t ___0_newSize, bool ___1_keepContent, const RuntimeMethod* method) ;
// T& UnityEngine.Rendering.DynamicArray`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* DynamicArray_1_get_Item_mF0AEE4C8CFEB5DC5134BABA7A507D441E0ACE206_gshared (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0* __this, int32_t ___0_index, const RuntimeMethod* method) ;
// T Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_value, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNextArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___0_length, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelReader::Contains<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParallelReader_Contains_TisIl2CppFullySharedGenericStruct_m3E8E3368063185B63AF2A43F654A0CCCE305DF05_gshared (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) ;
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelReader::IndexOf<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParallelReader_IndexOf_TisIl2CppFullySharedGenericStruct_mA41274E9720BDAE828F792E8312512224E784386_gshared (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelWriter::AddNoResize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelWriter_AddNoResize_TisIl2CppFullySharedGenericStruct_m8CCCC826E771315EFE8F2FADFBC9A955F3547471_gshared (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelWriter::AddRangeNoResize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(Unity.Collections.LowLevel.Unsafe.UnsafeList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_mCADDD070BDE349E58E4C49290C4F48865E0F2476_gshared (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, UnsafeList_t821320446016467933FF194D701C7EDDC23E538B ___0_list, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelWriter::AddRangeNoResize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_m558F744AD4AF77FD4E6101BB8B4FCDAB079B0727_gshared (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, void* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
// T& Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::Peek<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6_gshared (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method) ;
// T& Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::Read<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633_gshared (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method) ;
// T& Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::Allocate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7_gshared (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::Write<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917_gshared (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) ;
// System.Void Unity.Collections.xxHash3/StreamingState::Update<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D_gshared (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___0_input, const RuntimeMethod* method) ;

// T& Unity.Collections.NativeStream/Reader::Peek<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
inline Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m2858A9931F3736225D223F6D7A66EB3B740CFB3E (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9*, const RuntimeMethod*))Reader_Peek_TisIl2CppFullySharedGenericStruct_m2858A9931F3736225D223F6D7A66EB3B740CFB3E_gshared)((Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9*)__this, method);
}
// System.Byte* Unity.Collections.NativeStream/Reader::ReadUnsafePtr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Reader_ReadUnsafePtr_m6B71AAF3513F6A2D6AA072F03A5E9E7020F46906 (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* __this, int32_t ___0_size, const RuntimeMethod* method) ;
// T& Unity.Collections.NativeStream/Reader::Read<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
inline Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_m72E44AFFE62AB8341A8BF0975D02F88F85B58819 (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9*, const RuntimeMethod*))Reader_Read_TisIl2CppFullySharedGenericStruct_m72E44AFFE62AB8341A8BF0975D02F88F85B58819_gshared)((Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9*)__this, method);
}
// System.Byte* Unity.Collections.NativeStream/Writer::Allocate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Writer_Allocate_m647D78C16BD8AE24E717888CC1568DF31D573311 (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* __this, int32_t ___0_size, const RuntimeMethod* method) ;
// T& Unity.Collections.NativeStream/Writer::Allocate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
inline Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m152D2779B7277D522B694AF0698A887AEDD0B866 (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F*, const RuntimeMethod*))Writer_Allocate_TisIl2CppFullySharedGenericStruct_m152D2779B7277D522B694AF0698A887AEDD0B866_gshared)((Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F*)__this, method);
}
// System.Void Unity.Collections.NativeStream/Writer::Write<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T)
inline void Writer_Write_TisIl2CppFullySharedGenericStruct_m4B52108B68A52441FB126D64ECBC48059BFFE7CB (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct, const RuntimeMethod*))Writer_Write_TisIl2CppFullySharedGenericStruct_m4B52108B68A52441FB126D64ECBC48059BFFE7CB_gshared)((Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F*)__this, ___0_value, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Netcode.Components.NetworkAnimator/AnimationState>::.ctor()
inline void List_1__ctor_m8BAE428950AC23075F08161455618EA5A4F074F5 (List_1_tC2F3127C988D2A272DC7A2947921A06E0A3607B1* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))List_1__ctor_m0AFBAEA7EC427E32CC9CA267B1930DC5DF67A374_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, method);
}
// System.Void System.Collections.Generic.List`1<Unity.Netcode.Components.NetworkAnimator/AnimationState>::Add(T)
inline void List_1_Add_mEB377EB04184619FC08EF4B6F29EEEA52F6CD9E0_inline (List_1_tC2F3127C988D2A272DC7A2947921A06E0A3607B1* __this, AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType*/Il2CppFullySharedGenericAny, const RuntimeMethod*))List_1_Add_mD4F3498FBD3BDD3F03CBCFB38041CBAC9C28CAFC_gshared_inline)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, (Il2CppFullySharedGenericAny)&___0_item, method);
}
// T System.Collections.Generic.List`1<Unity.Netcode.Components.NetworkAnimator/AnimationState>::get_Item(System.Int32)
inline AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA List_1_get_Item_mCF324D95C252195545037A68C8A5D18D0FAEE9F2 (List_1_tC2F3127C988D2A272DC7A2947921A06E0A3607B1* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA il2cppRetVal;
	((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, Il2CppFullySharedGenericAny*, const RuntimeMethod*))List_1_get_Item_m6E4BA37C1FB558E4A62AE4324212E45D09C5C937_gshared)((List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)__this, ___0_index, (Il2CppFullySharedGenericAny*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void Unity.Netcode.Components.NetworkAnimator/AnimationMessage::NetworkSerialize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Unity.Netcode.BufferSerializer`1<T>)
inline void AnimationMessage_NetworkSerialize_TisIl2CppFullySharedGenericAny_mE846E28B371306FE4081D17B2F6F1DDA38DF87D6 (AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26* __this, /*Unity.Netcode.BufferSerializer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 ___0_serializer, const RuntimeMethod* method)
{
	((  void (*) (AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26*, /*Unity.Netcode.BufferSerializer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10, const RuntimeMethod*))AnimationMessage_NetworkSerialize_TisIl2CppFullySharedGenericAny_mE846E28B371306FE4081D17B2F6F1DDA38DF87D6_gshared)((AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26*)__this, ___0_serializer, method);
}
// System.Int32 Unity.Netcode.FastBufferWriter::GetWriteSize<System.Boolean>(T&,Unity.Netcode.FastBufferWriter/ForStructs)
inline int32_t FastBufferWriter_GetWriteSize_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9DE25C140A46DB1137553A4C8D157DF144AA2299_inline (bool* ___0_value, ForStructs_t415180F4B3263FD619114E5DAAC9C3030BEBB83D ___1_unused, const RuntimeMethod* method)
{
	return ((  int32_t (*) (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct*, ForStructs_t415180F4B3263FD619114E5DAAC9C3030BEBB83D, const RuntimeMethod*))FastBufferWriter_GetWriteSize_TisIl2CppFullySharedGenericStruct_m2139D4ADD3A98DE64C0D2D519EBD32826B36D24A_gshared_inline)((Il2CppFullySharedGenericStruct*)___0_value, ___1_unused, method);
}
// System.Int32 Unity.Netcode.FastBufferWriter::GetWriteSize<System.Int32>(T&,Unity.Netcode.FastBufferWriter/ForStructs)
inline int32_t FastBufferWriter_GetWriteSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m239A1FC0690B28D46F1D2812FCB8046C65F3D759_inline (int32_t* ___0_value, ForStructs_t415180F4B3263FD619114E5DAAC9C3030BEBB83D ___1_unused, const RuntimeMethod* method)
{
	return ((  int32_t (*) (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct*, ForStructs_t415180F4B3263FD619114E5DAAC9C3030BEBB83D, const RuntimeMethod*))FastBufferWriter_GetWriteSize_TisIl2CppFullySharedGenericStruct_m2139D4ADD3A98DE64C0D2D519EBD32826B36D24A_gshared_inline)((Il2CppFullySharedGenericStruct*)___0_value, ___1_unused, method);
}
// System.Int32 Unity.Netcode.FastBufferWriter::GetWriteSize<System.Single>(T&,Unity.Netcode.FastBufferWriter/ForStructs)
inline int32_t FastBufferWriter_GetWriteSize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mE9E453C5856C284C73F2D9D9B41A8D05DA0658FA_inline (float* ___0_value, ForStructs_t415180F4B3263FD619114E5DAAC9C3030BEBB83D ___1_unused, const RuntimeMethod* method)
{
	return ((  int32_t (*) (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct*, ForStructs_t415180F4B3263FD619114E5DAAC9C3030BEBB83D, const RuntimeMethod*))FastBufferWriter_GetWriteSize_TisIl2CppFullySharedGenericStruct_m2139D4ADD3A98DE64C0D2D519EBD32826B36D24A_gshared_inline)((Il2CppFullySharedGenericStruct*)___0_value, ___1_unused, method);
}
// System.Boolean Unity.Netcode.FastBufferWriter::TryBeginWrite(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___0_bytes, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
// System.Void System.OverflowException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264 (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferWriter::WriteValue<System.Boolean>(T&,Unity.Netcode.FastBufferWriter/ForPrimitives)
inline void FastBufferWriter_WriteValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9A6DD82B240885C6E59B9F4122F92FF7CE913031_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, bool* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method)
{
	((  void (*) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))FastBufferWriter_WriteValue_TisIl2CppFullySharedGenericStruct_m576FF3C4FCD70A41F8A902F9BF4CAE68AC93243F_gshared_inline)((FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)__this, (Il2CppFullySharedGenericStruct*)___0_value, ___1_unused, method);
}
// System.Void Unity.Netcode.FastBufferWriter::WriteValue<System.Int32>(T&,Unity.Netcode.FastBufferWriter/ForPrimitives)
inline void FastBufferWriter_WriteValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6D7ED227F91E338082124731CDFE37B6D416EAE2_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method)
{
	((  void (*) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))FastBufferWriter_WriteValue_TisIl2CppFullySharedGenericStruct_m576FF3C4FCD70A41F8A902F9BF4CAE68AC93243F_gshared_inline)((FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)__this, (Il2CppFullySharedGenericStruct*)___0_value, ___1_unused, method);
}
// System.Void Unity.Netcode.FastBufferWriter::WriteValue<System.Single>(T&,Unity.Netcode.FastBufferWriter/ForPrimitives)
inline void FastBufferWriter_WriteValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDB3737B5FA971F4654BA652B9933DEF3101796C3_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, float* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method)
{
	((  void (*) (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))FastBufferWriter_WriteValue_TisIl2CppFullySharedGenericStruct_m576FF3C4FCD70A41F8A902F9BF4CAE68AC93243F_gshared_inline)((FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC*)__this, (Il2CppFullySharedGenericStruct*)___0_value, ___1_unused, method);
}
// System.Boolean Unity.Netcode.FastBufferReader::TryBeginRead(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferReader_TryBeginRead_mDCCE31EA62FDF16BF16B1ED58CF3330944ED4900_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, int32_t ___0_bytes, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferReader::ReadValue<System.Boolean>(T&,Unity.Netcode.FastBufferWriter/ForPrimitives)
inline void FastBufferReader_ReadValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m8642F4FDC2A1CF74B24F3995ECB249BF02961CBE_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, bool* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method)
{
	((  void (*) (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))FastBufferReader_ReadValue_TisIl2CppFullySharedGenericStruct_m07EEBDC9EC3FD07C301FFBC05F5F012B1A3F6435_gshared_inline)((FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99*)__this, (Il2CppFullySharedGenericStruct*)___0_value, ___1_unused, method);
}
// System.Void Unity.Netcode.FastBufferReader::ReadValue<System.Int32>(T&,Unity.Netcode.FastBufferWriter/ForPrimitives)
inline void FastBufferReader_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF368BE26A0935A9A61A46434633D524D3B397282_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, int32_t* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method)
{
	((  void (*) (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))FastBufferReader_ReadValue_TisIl2CppFullySharedGenericStruct_m07EEBDC9EC3FD07C301FFBC05F5F012B1A3F6435_gshared_inline)((FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99*)__this, (Il2CppFullySharedGenericStruct*)___0_value, ___1_unused, method);
}
// System.Void Unity.Netcode.FastBufferReader::ReadValue<System.Single>(T&,Unity.Netcode.FastBufferWriter/ForPrimitives)
inline void FastBufferReader_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mAE7CE068F021D8955F868E911364D81C925CF998_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, float* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method)
{
	((  void (*) (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292, const RuntimeMethod*))FastBufferReader_ReadValue_TisIl2CppFullySharedGenericStruct_m07EEBDC9EC3FD07C301FFBC05F5F012B1A3F6435_gshared_inline)((FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99*)__this, (Il2CppFullySharedGenericStruct*)___0_value, ___1_unused, method);
}
// System.Void Unity.Netcode.Components.NetworkAnimator/AnimationState::NetworkSerialize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Unity.Netcode.BufferSerializer`1<T>)
inline void AnimationState_NetworkSerialize_TisIl2CppFullySharedGenericAny_mFAD99C42F673091B016FE6E915258ADAC6275C80 (AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA* __this, /*Unity.Netcode.BufferSerializer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 ___0_serializer, const RuntimeMethod* method)
{
	((  void (*) (AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA*, /*Unity.Netcode.BufferSerializer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10, const RuntimeMethod*))AnimationState_NetworkSerialize_TisIl2CppFullySharedGenericAny_mFAD99C42F673091B016FE6E915258ADAC6275C80_gshared)((AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA*)__this, ___0_serializer, method);
}
// System.Void Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage::NetworkSerialize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Unity.Netcode.BufferSerializer`1<T>)
inline void AnimationTriggerMessage_NetworkSerialize_TisIl2CppFullySharedGenericAny_m19F989C02349EC879B45D21A753F931CC935E160 (AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46* __this, /*Unity.Netcode.BufferSerializer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 ___0_serializer, const RuntimeMethod* method)
{
	((  void (*) (AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46*, /*Unity.Netcode.BufferSerializer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10, const RuntimeMethod*))AnimationTriggerMessage_NetworkSerialize_TisIl2CppFullySharedGenericAny_m19F989C02349EC879B45D21A753F931CC935E160_gshared)((AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46*)__this, ___0_serializer, method);
}
// System.Void Unity.Netcode.Components.NetworkAnimator/ParametersUpdateMessage::NetworkSerialize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Unity.Netcode.BufferSerializer`1<T>)
inline void ParametersUpdateMessage_NetworkSerialize_TisIl2CppFullySharedGenericAny_m77889F14D21C124F55D53B6DAE359421EC25991B (ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536* __this, /*Unity.Netcode.BufferSerializer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 ___0_serializer, const RuntimeMethod* method)
{
	((  void (*) (ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536*, /*Unity.Netcode.BufferSerializer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10, const RuntimeMethod*))ParametersUpdateMessage_NetworkSerialize_TisIl2CppFullySharedGenericAny_m77889F14D21C124F55D53B6DAE359421EC25991B_gshared)((ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536*)__this, ___0_serializer, method);
}
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasPositionX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasPositionX_m38C1D7FA45D4F042E1DF6DF427769E833DB1562B (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasPositionY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasPositionY_mAE9F9A90D1BE78E78A7B06EBFD935553D7B5BC1A (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasPositionZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasPositionZ_m720D04DBA54389D30D834C4317BC520A023ED05A (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasRotAngleX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasRotAngleX_m1C906A4534F5AF8B6648B87FB651D799E9818E81 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasRotAngleY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasRotAngleY_m725B8770DD0AB539D53748D175EC57D5C3ECB5EC (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasRotAngleZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasRotAngleZ_m0E8B47FF7B00F0AF937652726E9B3D47CBA254FE (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasScaleX()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasScaleX_m62884CDB2892EBAA435E6B5990ED6E263813E27F (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasScaleY()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasScaleY_m08BBB82139D65BFEB7A608F9CFC048E841ACA9DE (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasScaleZ()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasScaleZ_m4C1375674CCF760F831467D767B1CB24DB916F12 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasPositionChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasPositionChange_m2914558867BE5E630E14B06A65AFA70242957FAD (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasRotAngleChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasRotAngleChange_m422A91DCE0FBAFD8B608131ED3D2C0C5E123EAF0 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Netcode.Components.NetworkTransform/NetworkTransformState::get_HasScaleChange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NetworkTransformState_get_HasScaleChange_m86DDA3159D5CC25EB66F58C543B247F0D7D94E5C (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::NetworkSerialize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Unity.Netcode.BufferSerializer`1<T>)
inline void NetworkTransformState_NetworkSerialize_TisIl2CppFullySharedGenericAny_mF1AE35F9ACC173849CAF88BF7240733114AF4597 (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, /*Unity.Netcode.BufferSerializer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 ___0_serializer, const RuntimeMethod* method)
{
	((  void (*) (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*, /*Unity.Netcode.BufferSerializer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10, const RuntimeMethod*))NetworkTransformState_NetworkSerialize_TisIl2CppFullySharedGenericAny_mF1AE35F9ACC173849CAF88BF7240733114AF4597_gshared)((NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*)__this, ___0_serializer, method);
}
// System.Int32 UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource>::get_size()
inline int32_t DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_inline (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0*, const RuntimeMethod*))DynamicArray_1_get_size_m128222BE63C9931B08CD38DF32B858CD1CD4926D_gshared_inline)((DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0*)__this, method);
}
// System.Void UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource>::Resize(System.Int32,System.Boolean)
inline void DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1 (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* __this, int32_t ___0_newSize, bool ___1_keepContent, const RuntimeMethod* method)
{
	((  void (*) (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0*, int32_t, bool, const RuntimeMethod*))DynamicArray_1_Resize_m83B9E2903381BE0CD673D1B67026BE32C5F2347F_gshared)((DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0*)__this, ___0_newSize, ___1_keepContent, method);
}
// T& UnityEngine.Rendering.DynamicArray`1<UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource>::get_Item(System.Int32)
inline IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	Il2CppFullySharedGenericAny* il2cppRetVal = ((  Il2CppFullySharedGenericAny* (*) (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0*, int32_t, const RuntimeMethod*))DynamicArray_1_get_Item_mF0AEE4C8CFEB5DC5134BABA7A507D441E0ACE206_gshared)((DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0*)__this, ___0_index, method);
	return (IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D**)il2cppRetVal;
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
inline void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2_gshared)((Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*)__this, il2cppRetVal, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T&)
inline void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59_gshared)((Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*)__this, ___0_value, method);
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<System.Int32>()
inline int32_t Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, const RuntimeMethod* method)
{
	int32_t il2cppRetVal;
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2_gshared)((Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*)__this, (Il2CppFullySharedGenericStruct*)&il2cppRetVal, method);
	return il2cppRetVal;
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t ___0_structSize, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::MemCpy(System.Void*,System.Void*,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
inline void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372 (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_value, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	((  void (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372_gshared)((Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*)__this, ___0_value, ___1_allocator, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNextArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Int32&)
inline void* Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___0_length, const RuntimeMethod* method)
{
	return ((  void* (*) (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*, int32_t*, const RuntimeMethod*))Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC_gshared)((Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*)__this, ___0_length, method);
}
// System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelReader::Contains<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T)
inline bool ParallelReader_Contains_TisIl2CppFullySharedGenericStruct_m3E8E3368063185B63AF2A43F654A0CCCE305DF05 (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	return ((  bool (*) (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct, const RuntimeMethod*))ParallelReader_Contains_TisIl2CppFullySharedGenericStruct_m3E8E3368063185B63AF2A43F654A0CCCE305DF05_gshared)((ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3*)__this, ___0_value, method);
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelReader::IndexOf<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T)
inline int32_t ParallelReader_IndexOf_TisIl2CppFullySharedGenericStruct_mA41274E9720BDAE828F792E8312512224E784386 (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct, const RuntimeMethod*))ParallelReader_IndexOf_TisIl2CppFullySharedGenericStruct_mA41274E9720BDAE828F792E8312512224E784386_gshared)((ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3*)__this, ___0_value, method);
}
// System.Int32 System.Threading.Interlocked::Increment(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309 (int32_t* ___0_location, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelWriter::AddNoResize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T)
inline void ParallelWriter_AddNoResize_TisIl2CppFullySharedGenericStruct_m8CCCC826E771315EFE8F2FADFBC9A955F3547471 (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	((  void (*) (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct, const RuntimeMethod*))ParallelWriter_AddNoResize_TisIl2CppFullySharedGenericStruct_m8CCCC826E771315EFE8F2FADFBC9A955F3547471_gshared)((ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*)__this, ___0_value, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelWriter::AddRangeNoResize(System.Int32,System.Int32,System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelWriter_AddRangeNoResize_m08B8547437AD093C40E375EF247B0F487EB7E5CD (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, int32_t ___0_sizeOf, int32_t ___1_alignOf, void* ___2_ptr, int32_t ___3_length, const RuntimeMethod* method) ;
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelWriter::AddRangeNoResize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(Unity.Collections.LowLevel.Unsafe.UnsafeList)
inline void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_mCADDD070BDE349E58E4C49290C4F48865E0F2476 (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, UnsafeList_t821320446016467933FF194D701C7EDDC23E538B ___0_list, const RuntimeMethod* method)
{
	((  void (*) (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*, UnsafeList_t821320446016467933FF194D701C7EDDC23E538B, const RuntimeMethod*))ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_mCADDD070BDE349E58E4C49290C4F48865E0F2476_gshared)((ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*)__this, ___0_list, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelWriter::AddRangeNoResize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Void*,System.Int32)
inline void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_m558F744AD4AF77FD4E6101BB8B4FCDAB079B0727 (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, void* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*, void*, int32_t, const RuntimeMethod*))ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_m558F744AD4AF77FD4E6101BB8B4FCDAB079B0727_gshared)((ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*)__this, ___0_ptr, ___1_length, method);
}
// T& Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::Peek<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
inline Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6 (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*, const RuntimeMethod*))Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6_gshared)((Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*)__this, method);
}
// System.Byte* Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::ReadUnsafePtr(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Reader_ReadUnsafePtr_m6CDEF727114990BC4C2DF321BE752F229104A888 (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, int32_t ___0_size, const RuntimeMethod* method) ;
// T& Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::Read<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
inline Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633 (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*, const RuntimeMethod*))Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633_gshared)((Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*)__this, method);
}
// System.Byte* Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::Allocate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Writer_Allocate_m85F9D4FF8746C0A59DC23A9003398A6D9D42526D (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, int32_t ___0_size, const RuntimeMethod* method) ;
// T& Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::Allocate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
inline Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7 (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, const RuntimeMethod* method)
{
	return ((  Il2CppFullySharedGenericStruct* (*) (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*, const RuntimeMethod*))Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7_gshared)((Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*)__this, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::Write<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T)
inline void Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917 (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	((  void (*) (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct, const RuntimeMethod*))Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917_gshared)((Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*)__this, ___0_value, method);
}
// System.Void Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray::SetBit(System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01 (StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6* __this, int32_t ___0_aindex, int32_t ___1_bindex, bool ___2_val, const RuntimeMethod* method) ;
// System.Boolean Unity.Burst.Intrinsics.X86/Sse4_2/StrBoolArray::GetBit(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78 (StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6* __this, int32_t ___0_aindex, int32_t ___1_bindex, const RuntimeMethod* method) ;
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStriOutput(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123 (int32_t ___0_len, int32_t ___1_imm8, int32_t ___2_intRes2, const RuntimeMethod* method) ;
// System.Void Unity.Collections.xxHash3/StreamingState::Update(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState_Update_mD0C172FBC9AB99BC72DF8CC3665ABB61658AB9E5 (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* __this, void* ___0_input, int32_t ___1_length, const RuntimeMethod* method) ;
// System.Void Unity.Collections.xxHash3/StreamingState::Update<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T&)
inline void StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___0_input, const RuntimeMethod* method)
{
	((  void (*) (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020*, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct*, const RuntimeMethod*))StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D_gshared)((StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020*)__this, ___0_input, method);
}
// System.Void* Unity.Collections.Memory/Unmanaged/Array::Resize(System.Void*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle,System.Int64,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380 (void* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, int64_t ___4_size, int32_t ___5_align, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
// System.Void Unity.Netcode.FastBufferWriter::Grow(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastBufferWriter_Grow_mAD43637D60A44A3D7DCEB09D0425822F6C2A23FB (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___0_additionalSizeRequired, const RuntimeMethod* method) ;
// T* Unity.Collections.Memory/Unmanaged::Allocate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Unmanaged_Allocate_TisIl2CppFullySharedGenericStruct_m057D0CA6874E6719E10B462BACECFDC4352FE9AE_gshared (AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___0_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	{
		// return Array.Resize<T>(null, 0, 1, allocator);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_0 = ___0_allocator;
		Il2CppFullySharedGenericStruct* L_1;
		L_1 = InvokerFuncInvoker4< Il2CppFullySharedGenericStruct*, Il2CppFullySharedGenericStruct*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, (Il2CppFullySharedGenericStruct*)((uintptr_t)0), ((int64_t)0), ((int64_t)1), L_0);
		V_0 = L_1;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		Il2CppFullySharedGenericStruct* L_2 = V_0;
		return L_2;
	}
}
// System.Void Unity.Collections.Memory/Unmanaged::Free<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T*,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisIl2CppFullySharedGenericStruct_mC5E4D92A647D08D8B3B7CCF667B40D0ECD8ACB83_gshared (Il2CppFullySharedGenericStruct* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		// if (pointer == null)
		Il2CppFullySharedGenericStruct* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		// return;
		goto IL_0018;
	}

IL_000c:
	{
		// Array.Resize(pointer, 1, 0, allocator);
		Il2CppFullySharedGenericStruct* L_2 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		Il2CppFullySharedGenericStruct* L_4;
		L_4 = InvokerFuncInvoker4< Il2CppFullySharedGenericStruct*, Il2CppFullySharedGenericStruct*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_2, ((int64_t)1), ((int64_t)0), L_3);
	}

IL_0018:
	{
		// }
		return;
	}
}
// T& Unity.Collections.NativeStream/Reader::Peek<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m2858A9931F3736225D223F6D7A66EB3B740CFB3E_gshared (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	{
		// int size = UnsafeUtility.SizeOf<T>();
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		V_0 = L_0;
		// return ref m_Reader.Peek<T>();
		Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* L_1 = (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*)(&__this->___m_Reader_0);
		Il2CppFullySharedGenericStruct* L_2;
		L_2 = InvokerFuncInvoker0< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), L_1);
		V_1 = L_2;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		Il2CppFullySharedGenericStruct* L_3 = V_1;
		return L_3;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m2858A9931F3736225D223F6D7A66EB3B740CFB3E_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Reader_Peek_TisIl2CppFullySharedGenericStruct_m2858A9931F3736225D223F6D7A66EB3B740CFB3E(_thisAdjusted, method);
	return _returnValue;
}
// T& Unity.Collections.NativeStream/Reader::Read<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_m72E44AFFE62AB8341A8BF0975D02F88F85B58819_gshared (Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	{
		// int size = UnsafeUtility.SizeOf<T>();
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		V_0 = L_0;
		// return ref UnsafeUtility.AsRef<T>(ReadUnsafePtr(size));
		int32_t L_1 = V_0;
		uint8_t* L_2;
		L_2 = Reader_ReadUnsafePtr_m6B71AAF3513F6A2D6AA072F03A5E9E7020F46906(__this, L_1, NULL);
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = InvokerFuncInvoker1< Il2CppFullySharedGenericStruct*, void* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, (void*)L_2);
		V_1 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		Il2CppFullySharedGenericStruct* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_m72E44AFFE62AB8341A8BF0975D02F88F85B58819_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t84D582FCC8C26F85ACE0F2F31416D31F71FE4AD9*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Reader_Read_TisIl2CppFullySharedGenericStruct_m72E44AFFE62AB8341A8BF0975D02F88F85B58819(_thisAdjusted, method);
	return _returnValue;
}
// T& Unity.Collections.NativeStream/Writer::Allocate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m152D2779B7277D522B694AF0698A887AEDD0B866_gshared (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	{
		// int size = UnsafeUtility.SizeOf<T>();
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		V_0 = L_0;
		// return ref UnsafeUtility.AsRef<T>(Allocate(size));
		int32_t L_1 = V_0;
		uint8_t* L_2;
		L_2 = Writer_Allocate_m647D78C16BD8AE24E717888CC1568DF31D573311(__this, L_1, NULL);
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = InvokerFuncInvoker1< Il2CppFullySharedGenericStruct*, void* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, (void*)L_2);
		V_1 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		Il2CppFullySharedGenericStruct* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m152D2779B7277D522B694AF0698A887AEDD0B866_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Writer_Allocate_TisIl2CppFullySharedGenericStruct_m152D2779B7277D522B694AF0698A887AEDD0B866(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Collections.NativeStream/Writer::Write<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_Write_TisIl2CppFullySharedGenericStruct_m4B52108B68A52441FB126D64ECBC48059BFFE7CB_gshared (Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t4D147616122922D2FA67851EB5ADEC781EBCE735 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t4D147616122922D2FA67851EB5ADEC781EBCE735);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	{
		// ref T dst = ref Allocate<T>();
		Il2CppFullySharedGenericStruct* L_0;
		L_0 = InvokerFuncInvoker0< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this);
		V_0 = L_0;
		// dst = value;
		Il2CppFullySharedGenericStruct* L_1 = V_0;
		il2cpp_codegen_memcpy(L_2, ___0_value, SizeOf_T_t4D147616122922D2FA67851EB5ADEC781EBCE735);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_1, L_2, SizeOf_T_t4D147616122922D2FA67851EB5ADEC781EBCE735);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericStruct*)L_1, (void*)L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Writer_Write_TisIl2CppFullySharedGenericStruct_m4B52108B68A52441FB126D64ECBC48059BFFE7CB_AdjustorThunk (RuntimeObject* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Writer_tFFFC2E32CAA4337A0C5E1FAF6127DCC8BBD9DB8F*>(__this + _offset);
	Writer_Write_TisIl2CppFullySharedGenericStruct_m4B52108B68A52441FB126D64ECBC48059BFFE7CB(_thisAdjusted, ___0_value, method);
}
// System.Void Unity.Netcode.Components.NetworkAnimator/AnimationMessage::NetworkSerialize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Unity.Netcode.BufferSerializer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationMessage_NetworkSerialize_TisIl2CppFullySharedGenericAny_mE846E28B371306FE4081D17B2F6F1DDA38DF87D6_gshared (AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26* __this, /*Unity.Netcode.BufferSerializer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 ___0_serializer, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEB377EB04184619FC08EF4B6F29EEEA52F6CD9E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m8BAE428950AC23075F08161455618EA5A4F074F5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mCF324D95C252195545037A68C8A5D18D0FAEE9F2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tC2F3127C988D2A272DC7A2947921A06E0A3607B1_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 V_4;
	memset((&V_4), 0, sizeof(V_4));
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	{
		// var animationState = new AnimationState();
		il2cpp_codegen_initobj((&V_0), sizeof(AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA));
		// if (serializer.IsReader)
		bool L_0;
		L_0 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer);
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_007c;
		}
	}
	{
		// AnimationStates = new List<AnimationState>();
		List_1_tC2F3127C988D2A272DC7A2947921A06E0A3607B1* L_2 = (List_1_tC2F3127C988D2A272DC7A2947921A06E0A3607B1*)il2cpp_codegen_object_new(List_1_tC2F3127C988D2A272DC7A2947921A06E0A3607B1_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m8BAE428950AC23075F08161455618EA5A4F074F5(L_2, List_1__ctor_m8BAE428950AC23075F08161455618EA5A4F074F5_RuntimeMethod_var);
		__this->___AnimationStates_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AnimationStates_1), (void*)L_2);
		// serializer.SerializeValue(ref IsDirtyCount);
		int32_t* L_3 = (int32_t*)(&__this->___IsDirtyCount_2);
		il2cpp_codegen_initobj((&V_2), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_4 = V_2;
		InvokerActionInvoker2< int32_t*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_3, L_4);
		// for (int i = 0; i < IsDirtyCount; i++)
		V_3 = 0;
		goto IL_006a;
	}

IL_003b:
	{
		// animationState = new AnimationState();
		il2cpp_codegen_initobj((&V_0), sizeof(AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA));
		// serializer.SerializeValue(ref animationState);
		il2cpp_codegen_initobj((&V_4), sizeof(ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3));
		ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 L_5 = V_4;
		InvokerActionInvoker2< AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA*, ForNetworkSerializable_t9761409AA2A84D519B485A78188E85CFF1A9C7E3 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, (&V_0), L_5);
		// AnimationStates.Add(animationState);
		List_1_tC2F3127C988D2A272DC7A2947921A06E0A3607B1* L_6 = (List_1_tC2F3127C988D2A272DC7A2947921A06E0A3607B1*)__this->___AnimationStates_1;
		AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA L_7 = V_0;
		NullCheck(L_6);
		List_1_Add_mEB377EB04184619FC08EF4B6F29EEEA52F6CD9E0_inline(L_6, L_7, List_1_Add_mEB377EB04184619FC08EF4B6F29EEEA52F6CD9E0_RuntimeMethod_var);
		// for (int i = 0; i < IsDirtyCount; i++)
		int32_t L_8 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_006a:
	{
		// for (int i = 0; i < IsDirtyCount; i++)
		int32_t L_9 = V_3;
		int32_t L_10 = (int32_t)__this->___IsDirtyCount_2;
		V_5 = (bool)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_5;
		if (L_11)
		{
			goto IL_003b;
		}
	}
	{
		goto IL_00ca;
	}

IL_007c:
	{
		// serializer.SerializeValue(ref IsDirtyCount);
		int32_t* L_12 = (int32_t*)(&__this->___IsDirtyCount_2);
		il2cpp_codegen_initobj((&V_2), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_13 = V_2;
		InvokerActionInvoker2< int32_t*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_12, L_13);
		// for (int i = 0; i < IsDirtyCount; i++)
		V_6 = 0;
		goto IL_00b9;
	}

IL_0099:
	{
		// animationState = AnimationStates[i];
		List_1_tC2F3127C988D2A272DC7A2947921A06E0A3607B1* L_14 = (List_1_tC2F3127C988D2A272DC7A2947921A06E0A3607B1*)__this->___AnimationStates_1;
		int32_t L_15 = V_6;
		NullCheck(L_14);
		AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA L_16;
		L_16 = List_1_get_Item_mCF324D95C252195545037A68C8A5D18D0FAEE9F2(L_14, L_15, List_1_get_Item_mCF324D95C252195545037A68C8A5D18D0FAEE9F2_RuntimeMethod_var);
		V_0 = L_16;
		// serializer.SerializeNetworkSerializable(ref animationState);
		InvokerActionInvoker1< AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, (&V_0));
		// for (int i = 0; i < IsDirtyCount; i++)
		int32_t L_17 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_00b9:
	{
		// for (int i = 0; i < IsDirtyCount; i++)
		int32_t L_18 = V_6;
		int32_t L_19 = (int32_t)__this->___IsDirtyCount_2;
		V_7 = (bool)((((int32_t)L_18) < ((int32_t)L_19))? 1 : 0);
		bool L_20 = V_7;
		if (L_20)
		{
			goto IL_0099;
		}
	}
	{
	}

IL_00ca:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationMessage_NetworkSerialize_TisIl2CppFullySharedGenericAny_mE846E28B371306FE4081D17B2F6F1DDA38DF87D6_AdjustorThunk (RuntimeObject* __this, /*Unity.Netcode.BufferSerializer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 ___0_serializer, const RuntimeMethod* method)
{
	AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationMessage_t49CE48EDAE50CAD493D95D676E848F87613EBE26*>(__this + _offset);
	AnimationMessage_NetworkSerialize_TisIl2CppFullySharedGenericAny_mE846E28B371306FE4081D17B2F6F1DDA38DF87D6(_thisAdjusted, ___0_serializer, method);
}
// System.Void Unity.Netcode.Components.NetworkAnimator/AnimationState::NetworkSerialize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Unity.Netcode.BufferSerializer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationState_NetworkSerialize_TisIl2CppFullySharedGenericAny_mFAD99C42F673091B016FE6E915258ADAC6275C80_gshared (AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA* __this, /*Unity.Netcode.BufferSerializer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 ___0_serializer, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m8642F4FDC2A1CF74B24F3995ECB249BF02961CBE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF368BE26A0935A9A61A46434633D524D3B397282_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferReader_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mAE7CE068F021D8955F868E911364D81C925CF998_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9DE25C140A46DB1137553A4C8D157DF144AA2299_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m239A1FC0690B28D46F1D2812FCB8046C65F3D759_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_GetWriteSize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mE9E453C5856C284C73F2D9D9B41A8D05DA0658FA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9A6DD82B240885C6E59B9F4122F92FF7CE913031_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6D7ED227F91E338082124731CDFE37B6D416EAE2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_WriteValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDB3737B5FA971F4654BA652B9933DEF3101796C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	ForStructs_t415180F4B3263FD619114E5DAAC9C3030BEBB83D V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 V_8;
	memset((&V_8), 0, sizeof(V_8));
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	{
		// if (serializer.IsWriter)
		bool L_0;
		L_0 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_018e;
		}
	}
	{
		// var writer = serializer.GetFastBufferWriter();
		FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC L_2;
		L_2 = InvokerFuncInvoker0< FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer);
		V_1 = L_2;
		// var writeSize = FastBufferWriter.GetWriteSize(Transition);
		bool* L_3 = (bool*)(&__this->___Transition_5);
		il2cpp_codegen_initobj((&V_3), sizeof(ForStructs_t415180F4B3263FD619114E5DAAC9C3030BEBB83D));
		ForStructs_t415180F4B3263FD619114E5DAAC9C3030BEBB83D L_4 = V_3;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_5;
		L_5 = FastBufferWriter_GetWriteSize_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9DE25C140A46DB1137553A4C8D157DF144AA2299_inline(L_3, L_4, FastBufferWriter_GetWriteSize_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9DE25C140A46DB1137553A4C8D157DF144AA2299_RuntimeMethod_var);
		V_2 = L_5;
		// writeSize += FastBufferWriter.GetWriteSize(StateHash);
		int32_t L_6 = V_2;
		int32_t* L_7 = (int32_t*)(&__this->___StateHash_1);
		il2cpp_codegen_initobj((&V_3), sizeof(ForStructs_t415180F4B3263FD619114E5DAAC9C3030BEBB83D));
		ForStructs_t415180F4B3263FD619114E5DAAC9C3030BEBB83D L_8 = V_3;
		int32_t L_9;
		L_9 = FastBufferWriter_GetWriteSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m239A1FC0690B28D46F1D2812FCB8046C65F3D759_inline(L_7, L_8, FastBufferWriter_GetWriteSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m239A1FC0690B28D46F1D2812FCB8046C65F3D759_RuntimeMethod_var);
		V_2 = ((int32_t)il2cpp_codegen_add(L_6, L_9));
		// writeSize += FastBufferWriter.GetWriteSize(NormalizedTime);
		int32_t L_10 = V_2;
		float* L_11 = (float*)(&__this->___NormalizedTime_2);
		il2cpp_codegen_initobj((&V_3), sizeof(ForStructs_t415180F4B3263FD619114E5DAAC9C3030BEBB83D));
		ForStructs_t415180F4B3263FD619114E5DAAC9C3030BEBB83D L_12 = V_3;
		int32_t L_13;
		L_13 = FastBufferWriter_GetWriteSize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mE9E453C5856C284C73F2D9D9B41A8D05DA0658FA_inline(L_11, L_12, FastBufferWriter_GetWriteSize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mE9E453C5856C284C73F2D9D9B41A8D05DA0658FA_RuntimeMethod_var);
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, L_13));
		// writeSize += FastBufferWriter.GetWriteSize(Layer);
		int32_t L_14 = V_2;
		int32_t* L_15 = (int32_t*)(&__this->___Layer_3);
		il2cpp_codegen_initobj((&V_3), sizeof(ForStructs_t415180F4B3263FD619114E5DAAC9C3030BEBB83D));
		ForStructs_t415180F4B3263FD619114E5DAAC9C3030BEBB83D L_16 = V_3;
		int32_t L_17;
		L_17 = FastBufferWriter_GetWriteSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m239A1FC0690B28D46F1D2812FCB8046C65F3D759_inline(L_15, L_16, FastBufferWriter_GetWriteSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m239A1FC0690B28D46F1D2812FCB8046C65F3D759_RuntimeMethod_var);
		V_2 = ((int32_t)il2cpp_codegen_add(L_14, L_17));
		// writeSize += FastBufferWriter.GetWriteSize(Weight);
		int32_t L_18 = V_2;
		float* L_19 = (float*)(&__this->___Weight_4);
		il2cpp_codegen_initobj((&V_3), sizeof(ForStructs_t415180F4B3263FD619114E5DAAC9C3030BEBB83D));
		ForStructs_t415180F4B3263FD619114E5DAAC9C3030BEBB83D L_20 = V_3;
		int32_t L_21;
		L_21 = FastBufferWriter_GetWriteSize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mE9E453C5856C284C73F2D9D9B41A8D05DA0658FA_inline(L_19, L_20, FastBufferWriter_GetWriteSize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mE9E453C5856C284C73F2D9D9B41A8D05DA0658FA_RuntimeMethod_var);
		V_2 = ((int32_t)il2cpp_codegen_add(L_18, L_21));
		// if (Transition)
		bool L_22 = (bool)__this->___Transition_5;
		V_4 = L_22;
		bool L_23 = V_4;
		if (!L_23)
		{
			goto IL_00ae;
		}
	}
	{
		// writeSize += FastBufferWriter.GetWriteSize(DestinationStateHash);
		int32_t L_24 = V_2;
		int32_t* L_25 = (int32_t*)(&__this->___DestinationStateHash_6);
		il2cpp_codegen_initobj((&V_3), sizeof(ForStructs_t415180F4B3263FD619114E5DAAC9C3030BEBB83D));
		ForStructs_t415180F4B3263FD619114E5DAAC9C3030BEBB83D L_26 = V_3;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_27;
		L_27 = FastBufferWriter_GetWriteSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m239A1FC0690B28D46F1D2812FCB8046C65F3D759_inline(L_25, L_26, FastBufferWriter_GetWriteSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m239A1FC0690B28D46F1D2812FCB8046C65F3D759_RuntimeMethod_var);
		V_2 = ((int32_t)il2cpp_codegen_add(L_24, L_27));
	}

IL_00ae:
	{
		// if (!writer.TryBeginWrite(writeSize))
		int32_t L_28 = V_2;
		bool L_29;
		L_29 = FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline((&V_1), L_28, NULL);
		V_5 = (bool)((((int32_t)L_29) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_5;
		if (!L_30)
		{
			goto IL_00ea;
		}
	}
	{
		// throw new OverflowException($"[{GetType().Name}] Could not serialize: Out of buffer space.");
		AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA L_31 = (*(AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA*)__this);
		AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA L_32 = L_31;
		RuntimeObject* L_33 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA_il2cpp_TypeInfo_var)), &L_32);
		Type_t* L_34;
		L_34 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_33, NULL);
		NullCheck((MemberInfo_t*)L_34);
		String_t* L_35;
		L_35 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t*)L_34);
		String_t* L_36;
		L_36 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1)), L_35, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral31D59E11265D87A3FD577199D35ECA0E2DE709B6)), NULL);
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_37 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_37);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_37, L_36, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_37, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationState_NetworkSerialize_TisIl2CppFullySharedGenericAny_mFAD99C42F673091B016FE6E915258ADAC6275C80_RuntimeMethod_var)));
	}

IL_00ea:
	{
		// writer.WriteValue(Transition);
		bool* L_38 = (bool*)(&__this->___Transition_5);
		il2cpp_codegen_initobj((&V_6), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_39 = V_6;
		FastBufferWriter_WriteValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9A6DD82B240885C6E59B9F4122F92FF7CE913031_inline((&V_1), L_38, L_39, FastBufferWriter_WriteValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9A6DD82B240885C6E59B9F4122F92FF7CE913031_RuntimeMethod_var);
		// writer.WriteValue(StateHash);
		int32_t* L_40 = (int32_t*)(&__this->___StateHash_1);
		il2cpp_codegen_initobj((&V_6), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_41 = V_6;
		FastBufferWriter_WriteValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6D7ED227F91E338082124731CDFE37B6D416EAE2_inline((&V_1), L_40, L_41, FastBufferWriter_WriteValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6D7ED227F91E338082124731CDFE37B6D416EAE2_RuntimeMethod_var);
		// writer.WriteValue(NormalizedTime);
		float* L_42 = (float*)(&__this->___NormalizedTime_2);
		il2cpp_codegen_initobj((&V_6), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_43 = V_6;
		FastBufferWriter_WriteValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDB3737B5FA971F4654BA652B9933DEF3101796C3_inline((&V_1), L_42, L_43, FastBufferWriter_WriteValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDB3737B5FA971F4654BA652B9933DEF3101796C3_RuntimeMethod_var);
		// writer.WriteValue(Layer);
		int32_t* L_44 = (int32_t*)(&__this->___Layer_3);
		il2cpp_codegen_initobj((&V_6), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_45 = V_6;
		FastBufferWriter_WriteValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6D7ED227F91E338082124731CDFE37B6D416EAE2_inline((&V_1), L_44, L_45, FastBufferWriter_WriteValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6D7ED227F91E338082124731CDFE37B6D416EAE2_RuntimeMethod_var);
		// writer.WriteValue(Weight);
		float* L_46 = (float*)(&__this->___Weight_4);
		il2cpp_codegen_initobj((&V_6), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_47 = V_6;
		FastBufferWriter_WriteValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDB3737B5FA971F4654BA652B9933DEF3101796C3_inline((&V_1), L_46, L_47, FastBufferWriter_WriteValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mDB3737B5FA971F4654BA652B9933DEF3101796C3_RuntimeMethod_var);
		// if (Transition)
		bool L_48 = (bool)__this->___Transition_5;
		V_7 = L_48;
		bool L_49 = V_7;
		if (!L_49)
		{
			goto IL_0188;
		}
	}
	{
		// writer.WriteValue(DestinationStateHash);
		int32_t* L_50 = (int32_t*)(&__this->___DestinationStateHash_6);
		il2cpp_codegen_initobj((&V_6), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_51 = V_6;
		FastBufferWriter_WriteValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6D7ED227F91E338082124731CDFE37B6D416EAE2_inline((&V_1), L_50, L_51, FastBufferWriter_WriteValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m6D7ED227F91E338082124731CDFE37B6D416EAE2_RuntimeMethod_var);
	}

IL_0188:
	{
		goto IL_034b;
	}

IL_018e:
	{
		// var reader = serializer.GetFastBufferReader();
		FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 L_52;
		L_52 = InvokerFuncInvoker0< FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer);
		V_8 = L_52;
		// if (!reader.TryBeginRead(FastBufferWriter.GetWriteSize(Transition)))
		bool* L_53 = (bool*)(&__this->___Transition_5);
		il2cpp_codegen_initobj((&V_3), sizeof(ForStructs_t415180F4B3263FD619114E5DAAC9C3030BEBB83D));
		ForStructs_t415180F4B3263FD619114E5DAAC9C3030BEBB83D L_54 = V_3;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_55;
		L_55 = FastBufferWriter_GetWriteSize_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9DE25C140A46DB1137553A4C8D157DF144AA2299_inline(L_53, L_54, FastBufferWriter_GetWriteSize_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m9DE25C140A46DB1137553A4C8D157DF144AA2299_RuntimeMethod_var);
		bool L_56;
		L_56 = FastBufferReader_TryBeginRead_mDCCE31EA62FDF16BF16B1ED58CF3330944ED4900_inline((&V_8), L_55, NULL);
		V_10 = (bool)((((int32_t)L_56) == ((int32_t)0))? 1 : 0);
		bool L_57 = V_10;
		if (!L_57)
		{
			goto IL_01e7;
		}
	}
	{
		// throw new OverflowException($"[{GetType().Name}] Could not deserialize: Out of buffer space.");
		AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA L_58 = (*(AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA*)__this);
		AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA L_59 = L_58;
		RuntimeObject* L_60 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA_il2cpp_TypeInfo_var)), &L_59);
		Type_t* L_61;
		L_61 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_60, NULL);
		NullCheck((MemberInfo_t*)L_61);
		String_t* L_62;
		L_62 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t*)L_61);
		String_t* L_63;
		L_63 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1)), L_62, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFF4E2CEDF872FD0595EFE63EC988C3491269381E)), NULL);
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_64 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_64);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_64, L_63, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_64, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationState_NetworkSerialize_TisIl2CppFullySharedGenericAny_mFAD99C42F673091B016FE6E915258ADAC6275C80_RuntimeMethod_var)));
	}

IL_01e7:
	{
		// reader.ReadValue(out Transition);
		bool* L_65 = (bool*)(&__this->___Transition_5);
		il2cpp_codegen_initobj((&V_6), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_66 = V_6;
		FastBufferReader_ReadValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m8642F4FDC2A1CF74B24F3995ECB249BF02961CBE_inline((&V_8), L_65, L_66, FastBufferReader_ReadValue_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m8642F4FDC2A1CF74B24F3995ECB249BF02961CBE_RuntimeMethod_var);
		// var readSize = FastBufferWriter.GetWriteSize(StateHash);
		int32_t* L_67 = (int32_t*)(&__this->___StateHash_1);
		il2cpp_codegen_initobj((&V_3), sizeof(ForStructs_t415180F4B3263FD619114E5DAAC9C3030BEBB83D));
		ForStructs_t415180F4B3263FD619114E5DAAC9C3030BEBB83D L_68 = V_3;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_69;
		L_69 = FastBufferWriter_GetWriteSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m239A1FC0690B28D46F1D2812FCB8046C65F3D759_inline(L_67, L_68, FastBufferWriter_GetWriteSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m239A1FC0690B28D46F1D2812FCB8046C65F3D759_RuntimeMethod_var);
		V_9 = L_69;
		// readSize += FastBufferWriter.GetWriteSize(NormalizedTime);
		int32_t L_70 = V_9;
		float* L_71 = (float*)(&__this->___NormalizedTime_2);
		il2cpp_codegen_initobj((&V_3), sizeof(ForStructs_t415180F4B3263FD619114E5DAAC9C3030BEBB83D));
		ForStructs_t415180F4B3263FD619114E5DAAC9C3030BEBB83D L_72 = V_3;
		int32_t L_73;
		L_73 = FastBufferWriter_GetWriteSize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mE9E453C5856C284C73F2D9D9B41A8D05DA0658FA_inline(L_71, L_72, FastBufferWriter_GetWriteSize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mE9E453C5856C284C73F2D9D9B41A8D05DA0658FA_RuntimeMethod_var);
		V_9 = ((int32_t)il2cpp_codegen_add(L_70, L_73));
		// readSize += FastBufferWriter.GetWriteSize(Layer);
		int32_t L_74 = V_9;
		int32_t* L_75 = (int32_t*)(&__this->___Layer_3);
		il2cpp_codegen_initobj((&V_3), sizeof(ForStructs_t415180F4B3263FD619114E5DAAC9C3030BEBB83D));
		ForStructs_t415180F4B3263FD619114E5DAAC9C3030BEBB83D L_76 = V_3;
		int32_t L_77;
		L_77 = FastBufferWriter_GetWriteSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m239A1FC0690B28D46F1D2812FCB8046C65F3D759_inline(L_75, L_76, FastBufferWriter_GetWriteSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m239A1FC0690B28D46F1D2812FCB8046C65F3D759_RuntimeMethod_var);
		V_9 = ((int32_t)il2cpp_codegen_add(L_74, L_77));
		// readSize += FastBufferWriter.GetWriteSize(Weight);
		int32_t L_78 = V_9;
		float* L_79 = (float*)(&__this->___Weight_4);
		il2cpp_codegen_initobj((&V_3), sizeof(ForStructs_t415180F4B3263FD619114E5DAAC9C3030BEBB83D));
		ForStructs_t415180F4B3263FD619114E5DAAC9C3030BEBB83D L_80 = V_3;
		int32_t L_81;
		L_81 = FastBufferWriter_GetWriteSize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mE9E453C5856C284C73F2D9D9B41A8D05DA0658FA_inline(L_79, L_80, FastBufferWriter_GetWriteSize_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mE9E453C5856C284C73F2D9D9B41A8D05DA0658FA_RuntimeMethod_var);
		V_9 = ((int32_t)il2cpp_codegen_add(L_78, L_81));
		// if (Transition)
		bool L_82 = (bool)__this->___Transition_5;
		V_11 = L_82;
		bool L_83 = V_11;
		if (!L_83)
		{
			goto IL_0287;
		}
	}
	{
		// readSize += FastBufferWriter.GetWriteSize(DestinationStateHash);
		int32_t L_84 = V_9;
		int32_t* L_85 = (int32_t*)(&__this->___DestinationStateHash_6);
		il2cpp_codegen_initobj((&V_3), sizeof(ForStructs_t415180F4B3263FD619114E5DAAC9C3030BEBB83D));
		ForStructs_t415180F4B3263FD619114E5DAAC9C3030BEBB83D L_86 = V_3;
		il2cpp_codegen_runtime_class_init_inline(FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC_il2cpp_TypeInfo_var);
		int32_t L_87;
		L_87 = FastBufferWriter_GetWriteSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m239A1FC0690B28D46F1D2812FCB8046C65F3D759_inline(L_85, L_86, FastBufferWriter_GetWriteSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m239A1FC0690B28D46F1D2812FCB8046C65F3D759_RuntimeMethod_var);
		V_9 = ((int32_t)il2cpp_codegen_add(L_84, L_87));
	}

IL_0287:
	{
		// if (!reader.TryBeginRead(readSize))
		int32_t L_88 = V_9;
		bool L_89;
		L_89 = FastBufferReader_TryBeginRead_mDCCE31EA62FDF16BF16B1ED58CF3330944ED4900_inline((&V_8), L_88, NULL);
		V_12 = (bool)((((int32_t)L_89) == ((int32_t)0))? 1 : 0);
		bool L_90 = V_12;
		if (!L_90)
		{
			goto IL_02c4;
		}
	}
	{
		// throw new OverflowException($"[{GetType().Name}] Could not deserialize: Out of buffer space.");
		AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA L_91 = (*(AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA*)__this);
		AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA L_92 = L_91;
		RuntimeObject* L_93 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA_il2cpp_TypeInfo_var)), &L_92);
		Type_t* L_94;
		L_94 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_93, NULL);
		NullCheck((MemberInfo_t*)L_94);
		String_t* L_95;
		L_95 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t*)L_94);
		String_t* L_96;
		L_96 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralD9691C4FD8A1F6B09DB1147CA32B442772FB46A1)), L_95, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFF4E2CEDF872FD0595EFE63EC988C3491269381E)), NULL);
		OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C* L_97 = (OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&OverflowException_t6F6AD8CACE20C37F701C05B373A215C4802FAB0C_il2cpp_TypeInfo_var)));
		NullCheck(L_97);
		OverflowException__ctor_m2B99D79236B7B87C0BB6C9AB2E557DECE481C264(L_97, L_96, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_97, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AnimationState_NetworkSerialize_TisIl2CppFullySharedGenericAny_mFAD99C42F673091B016FE6E915258ADAC6275C80_RuntimeMethod_var)));
	}

IL_02c4:
	{
		// reader.ReadValue(out StateHash);
		int32_t* L_98 = (int32_t*)(&__this->___StateHash_1);
		il2cpp_codegen_initobj((&V_6), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_99 = V_6;
		FastBufferReader_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF368BE26A0935A9A61A46434633D524D3B397282_inline((&V_8), L_98, L_99, FastBufferReader_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF368BE26A0935A9A61A46434633D524D3B397282_RuntimeMethod_var);
		// reader.ReadValue(out NormalizedTime);
		float* L_100 = (float*)(&__this->___NormalizedTime_2);
		il2cpp_codegen_initobj((&V_6), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_101 = V_6;
		FastBufferReader_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mAE7CE068F021D8955F868E911364D81C925CF998_inline((&V_8), L_100, L_101, FastBufferReader_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mAE7CE068F021D8955F868E911364D81C925CF998_RuntimeMethod_var);
		// reader.ReadValue(out Layer);
		int32_t* L_102 = (int32_t*)(&__this->___Layer_3);
		il2cpp_codegen_initobj((&V_6), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_103 = V_6;
		FastBufferReader_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF368BE26A0935A9A61A46434633D524D3B397282_inline((&V_8), L_102, L_103, FastBufferReader_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF368BE26A0935A9A61A46434633D524D3B397282_RuntimeMethod_var);
		// reader.ReadValue(out Weight);
		float* L_104 = (float*)(&__this->___Weight_4);
		il2cpp_codegen_initobj((&V_6), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_105 = V_6;
		FastBufferReader_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mAE7CE068F021D8955F868E911364D81C925CF998_inline((&V_8), L_104, L_105, FastBufferReader_ReadValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mAE7CE068F021D8955F868E911364D81C925CF998_RuntimeMethod_var);
		// if (Transition)
		bool L_106 = (bool)__this->___Transition_5;
		V_13 = L_106;
		bool L_107 = V_13;
		if (!L_107)
		{
			goto IL_034a;
		}
	}
	{
		// reader.ReadValue(out DestinationStateHash);
		int32_t* L_108 = (int32_t*)(&__this->___DestinationStateHash_6);
		il2cpp_codegen_initobj((&V_6), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_109 = V_6;
		FastBufferReader_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF368BE26A0935A9A61A46434633D524D3B397282_inline((&V_8), L_108, L_109, FastBufferReader_ReadValue_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF368BE26A0935A9A61A46434633D524D3B397282_RuntimeMethod_var);
	}

IL_034a:
	{
	}

IL_034b:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationState_NetworkSerialize_TisIl2CppFullySharedGenericAny_mFAD99C42F673091B016FE6E915258ADAC6275C80_AdjustorThunk (RuntimeObject* __this, /*Unity.Netcode.BufferSerializer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 ___0_serializer, const RuntimeMethod* method)
{
	AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationState_t55E23D2724829C98A7EAE9CC857CE589E5B4C9AA*>(__this + _offset);
	AnimationState_NetworkSerialize_TisIl2CppFullySharedGenericAny_mFAD99C42F673091B016FE6E915258ADAC6275C80(_thisAdjusted, ___0_serializer, method);
}
// System.Void Unity.Netcode.Components.NetworkAnimator/AnimationTriggerMessage::NetworkSerialize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Unity.Netcode.BufferSerializer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AnimationTriggerMessage_NetworkSerialize_TisIl2CppFullySharedGenericAny_m19F989C02349EC879B45D21A753F931CC935E160_gshared (AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46* __this, /*Unity.Netcode.BufferSerializer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 ___0_serializer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// serializer.SerializeValue(ref Hash);
		int32_t* L_0 = (int32_t*)(&__this->___Hash_0);
		il2cpp_codegen_initobj((&V_0), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_1 = V_0;
		InvokerActionInvoker2< int32_t*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_0, L_1);
		// serializer.SerializeValue(ref IsTriggerSet);
		bool* L_2 = (bool*)(&__this->___IsTriggerSet_1);
		il2cpp_codegen_initobj((&V_0), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_3 = V_0;
		InvokerActionInvoker2< bool*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_2, L_3);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void AnimationTriggerMessage_NetworkSerialize_TisIl2CppFullySharedGenericAny_m19F989C02349EC879B45D21A753F931CC935E160_AdjustorThunk (RuntimeObject* __this, /*Unity.Netcode.BufferSerializer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 ___0_serializer, const RuntimeMethod* method)
{
	AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<AnimationTriggerMessage_t6E5D90F8238CB48B83329BAEEEF1847B2DD1EE46*>(__this + _offset);
	AnimationTriggerMessage_NetworkSerialize_TisIl2CppFullySharedGenericAny_m19F989C02349EC879B45D21A753F931CC935E160(_thisAdjusted, ___0_serializer, method);
}
// System.Void Unity.Netcode.Components.NetworkAnimator/ParametersUpdateMessage::NetworkSerialize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Unity.Netcode.BufferSerializer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParametersUpdateMessage_NetworkSerialize_TisIl2CppFullySharedGenericAny_m77889F14D21C124F55D53B6DAE359421EC25991B_gshared (ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536* __this, /*Unity.Netcode.BufferSerializer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 ___0_serializer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// serializer.SerializeValue(ref Parameters);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031** L_0 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**)(&__this->___Parameters_0);
		il2cpp_codegen_initobj((&V_0), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_1 = V_0;
		InvokerActionInvoker2< ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031**, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_0, L_1);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ParametersUpdateMessage_NetworkSerialize_TisIl2CppFullySharedGenericAny_m77889F14D21C124F55D53B6DAE359421EC25991B_AdjustorThunk (RuntimeObject* __this, /*Unity.Netcode.BufferSerializer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 ___0_serializer, const RuntimeMethod* method)
{
	ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ParametersUpdateMessage_t005A167C8BAC9D5842F589C807ABF3CF4B3EB536*>(__this + _offset);
	ParametersUpdateMessage_NetworkSerialize_TisIl2CppFullySharedGenericAny_m77889F14D21C124F55D53B6DAE359421EC25991B(_thisAdjusted, ___0_serializer, method);
}
// System.Void Unity.Netcode.NetworkManager/NetworkManagerHooks::OnAfterHandleMessage<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,Unity.Netcode.NetworkContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerHooks_OnAfterHandleMessage_TisIl2CppFullySharedGenericAny_mDB6636F7F090BF8A171E8C602D42C3C4507F2C23_gshared (NetworkManagerHooks_t93458A933EFB97C9290803810FC835C53384DC5C* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_message, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___1_context, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.NetworkManager/NetworkManagerHooks::OnAfterSendMessage<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.UInt64,T&,Unity.Netcode.NetworkDelivery,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerHooks_OnAfterSendMessage_TisIl2CppFullySharedGenericAny_m4B343BB93A537B13F6CAF896282BC076A9357A2C_gshared (NetworkManagerHooks_t93458A933EFB97C9290803810FC835C53384DC5C* __this, uint64_t ___0_clientId, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___1_message, int32_t ___2_delivery, int32_t ___3_messageSizeBytes, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.NetworkManager/NetworkManagerHooks::OnBeforeHandleMessage<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(T&,Unity.Netcode.NetworkContext&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerHooks_OnBeforeHandleMessage_TisIl2CppFullySharedGenericAny_m2FE45AFAD2C2E766E0EED2B06DDD0398976D868D_gshared (NetworkManagerHooks_t93458A933EFB97C9290803810FC835C53384DC5C* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___0_message, NetworkContext_t1978043F273D5D5DDF727F6CC654BB259C8A87A1* ___1_context, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.NetworkManager/NetworkManagerHooks::OnBeforeSendMessage<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(System.UInt64,T&,Unity.Netcode.NetworkDelivery)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManagerHooks_OnBeforeSendMessage_TisIl2CppFullySharedGenericAny_mD4BBA79B660D373FF1AB9E0F88019AEB1B96FBB4_gshared (NetworkManagerHooks_t93458A933EFB97C9290803810FC835C53384DC5C* __this, uint64_t ___0_clientId, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType&*/Il2CppFullySharedGenericAny* ___1_message, int32_t ___2_delivery, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void Unity.Netcode.Components.NetworkTransform/NetworkTransformState::NetworkSerialize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>(Unity.Netcode.BufferSerializer`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkTransformState_NetworkSerialize_TisIl2CppFullySharedGenericAny_mF1AE35F9ACC173849CAF88BF7240733114AF4597_gshared (NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* __this, /*Unity.Netcode.BufferSerializer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 ___0_serializer, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* G_B22_0 = NULL;
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* G_B20_0 = NULL;
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* G_B21_0 = NULL;
	int32_t G_B23_0 = 0;
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* G_B23_1 = NULL;
	{
		// serializer.SerializeValue(ref SentTime);
		double* L_0 = (double*)(&__this->___SentTime_21);
		il2cpp_codegen_initobj((&V_0), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_1 = V_0;
		InvokerActionInvoker2< double*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_0, L_1);
		// serializer.SerializeValue(ref m_Bitset);
		uint16_t* L_2 = (uint16_t*)(&__this->___m_Bitset_11);
		il2cpp_codegen_initobj((&V_0), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_3 = V_0;
		InvokerActionInvoker2< uint16_t*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_2, L_3);
		// if (HasPositionX)
		bool L_4;
		L_4 = NetworkTransformState_get_HasPositionX_m38C1D7FA45D4F042E1DF6DF427769E833DB1562B(__this, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0052;
		}
	}
	{
		// serializer.SerializeValue(ref PositionX);
		float* L_6 = (float*)(&__this->___PositionX_12);
		il2cpp_codegen_initobj((&V_0), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_7 = V_0;
		InvokerActionInvoker2< float*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_6, L_7);
	}

IL_0052:
	{
		// if (HasPositionY)
		bool L_8;
		L_8 = NetworkTransformState_get_HasPositionY_mAE9F9A90D1BE78E78A7B06EBFD935553D7B5BC1A(__this, NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0075;
		}
	}
	{
		// serializer.SerializeValue(ref PositionY);
		float* L_10 = (float*)(&__this->___PositionY_13);
		il2cpp_codegen_initobj((&V_0), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_11 = V_0;
		InvokerActionInvoker2< float*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_10, L_11);
	}

IL_0075:
	{
		// if (HasPositionZ)
		bool L_12;
		L_12 = NetworkTransformState_get_HasPositionZ_m720D04DBA54389D30D834C4317BC520A023ED05A(__this, NULL);
		V_3 = L_12;
		bool L_13 = V_3;
		if (!L_13)
		{
			goto IL_0098;
		}
	}
	{
		// serializer.SerializeValue(ref PositionZ);
		float* L_14 = (float*)(&__this->___PositionZ_14);
		il2cpp_codegen_initobj((&V_0), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_15 = V_0;
		InvokerActionInvoker2< float*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_14, L_15);
	}

IL_0098:
	{
		// if (HasRotAngleX)
		bool L_16;
		L_16 = NetworkTransformState_get_HasRotAngleX_m1C906A4534F5AF8B6648B87FB651D799E9818E81(__this, NULL);
		V_4 = L_16;
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_00bd;
		}
	}
	{
		// serializer.SerializeValue(ref RotAngleX);
		float* L_18 = (float*)(&__this->___RotAngleX_15);
		il2cpp_codegen_initobj((&V_0), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_19 = V_0;
		InvokerActionInvoker2< float*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_18, L_19);
	}

IL_00bd:
	{
		// if (HasRotAngleY)
		bool L_20;
		L_20 = NetworkTransformState_get_HasRotAngleY_m725B8770DD0AB539D53748D175EC57D5C3ECB5EC(__this, NULL);
		V_5 = L_20;
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_00e2;
		}
	}
	{
		// serializer.SerializeValue(ref RotAngleY);
		float* L_22 = (float*)(&__this->___RotAngleY_16);
		il2cpp_codegen_initobj((&V_0), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_23 = V_0;
		InvokerActionInvoker2< float*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_22, L_23);
	}

IL_00e2:
	{
		// if (HasRotAngleZ)
		bool L_24;
		L_24 = NetworkTransformState_get_HasRotAngleZ_m0E8B47FF7B00F0AF937652726E9B3D47CBA254FE(__this, NULL);
		V_6 = L_24;
		bool L_25 = V_6;
		if (!L_25)
		{
			goto IL_0107;
		}
	}
	{
		// serializer.SerializeValue(ref RotAngleZ);
		float* L_26 = (float*)(&__this->___RotAngleZ_17);
		il2cpp_codegen_initobj((&V_0), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_27 = V_0;
		InvokerActionInvoker2< float*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_26, L_27);
	}

IL_0107:
	{
		// if (HasScaleX)
		bool L_28;
		L_28 = NetworkTransformState_get_HasScaleX_m62884CDB2892EBAA435E6B5990ED6E263813E27F(__this, NULL);
		V_7 = L_28;
		bool L_29 = V_7;
		if (!L_29)
		{
			goto IL_012c;
		}
	}
	{
		// serializer.SerializeValue(ref ScaleX);
		float* L_30 = (float*)(&__this->___ScaleX_18);
		il2cpp_codegen_initobj((&V_0), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_31 = V_0;
		InvokerActionInvoker2< float*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_30, L_31);
	}

IL_012c:
	{
		// if (HasScaleY)
		bool L_32;
		L_32 = NetworkTransformState_get_HasScaleY_m08BBB82139D65BFEB7A608F9CFC048E841ACA9DE(__this, NULL);
		V_8 = L_32;
		bool L_33 = V_8;
		if (!L_33)
		{
			goto IL_0151;
		}
	}
	{
		// serializer.SerializeValue(ref ScaleY);
		float* L_34 = (float*)(&__this->___ScaleY_19);
		il2cpp_codegen_initobj((&V_0), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_35 = V_0;
		InvokerActionInvoker2< float*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_34, L_35);
	}

IL_0151:
	{
		// if (HasScaleZ)
		bool L_36;
		L_36 = NetworkTransformState_get_HasScaleZ_m4C1375674CCF760F831467D767B1CB24DB916F12(__this, NULL);
		V_9 = L_36;
		bool L_37 = V_9;
		if (!L_37)
		{
			goto IL_0176;
		}
	}
	{
		// serializer.SerializeValue(ref ScaleZ);
		float* L_38 = (float*)(&__this->___ScaleZ_20);
		il2cpp_codegen_initobj((&V_0), sizeof(ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292));
		ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 L_39 = V_0;
		InvokerActionInvoker2< float*, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer, L_38, L_39);
	}

IL_0176:
	{
		// if (serializer.IsReader)
		bool L_40;
		L_40 = InvokerFuncInvoker0< bool >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), (BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10*)___0_serializer);
		V_10 = L_40;
		bool L_41 = V_10;
		if (!L_41)
		{
			goto IL_01a4;
		}
	}
	{
		// IsDirty = HasPositionChange || HasRotAngleChange || HasScaleChange;
		bool L_42;
		L_42 = NetworkTransformState_get_HasPositionChange_m2914558867BE5E630E14B06A65AFA70242957FAD(__this, NULL);
		G_B20_0 = __this;
		if (L_42)
		{
			G_B22_0 = __this;
			goto IL_019d;
		}
	}
	{
		bool L_43;
		L_43 = NetworkTransformState_get_HasRotAngleChange_m422A91DCE0FBAFD8B608131ED3D2C0C5E123EAF0(__this, NULL);
		G_B21_0 = G_B20_0;
		if (L_43)
		{
			G_B22_0 = G_B20_0;
			goto IL_019d;
		}
	}
	{
		bool L_44;
		L_44 = NetworkTransformState_get_HasScaleChange_m86DDA3159D5CC25EB66F58C543B247F0D7D94E5C(__this, NULL);
		G_B23_0 = ((int32_t)(L_44));
		G_B23_1 = G_B21_0;
		goto IL_019e;
	}

IL_019d:
	{
		G_B23_0 = 1;
		G_B23_1 = G_B22_0;
	}

IL_019e:
	{
		G_B23_1->___IsDirty_22 = (bool)G_B23_0;
	}

IL_01a4:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void NetworkTransformState_NetworkSerialize_TisIl2CppFullySharedGenericAny_mF1AE35F9ACC173849CAF88BF7240733114AF4597_AdjustorThunk (RuntimeObject* __this, /*Unity.Netcode.BufferSerializer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericType>*/BufferSerializer_1_tC485B3539F0BCD2241145A679FB202806C206C10 ___0_serializer, const RuntimeMethod* method)
{
	NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<NetworkTransformState_t79E8E299A31239DA71F98A03FDE191019CF1C8C0*>(__this + _offset);
	NetworkTransformState_NetworkSerialize_TisIl2CppFullySharedGenericAny_mF1AE35F9ACC173849CAF88BF7240733114AF4597(_thisAdjusted, ___0_serializer, method);
}
// System.Int32 UnityEngine.Experimental.Rendering.RenderGraphModule.RenderGraphResourceRegistry/RenderGraphResourcesData::AddNewRenderGraphResource<System.Object>(ResType&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RenderGraphResourcesData_AddNewRenderGraphResource_TisRuntimeObject_mB9040DF97633813729CADB454AAEAF31E23C7E91_gshared (RenderGraphResourcesData_tB2FF97B16A3E1DE700283778679C5CC0C39F4CFE* __this, RuntimeObject** ___0_outRes, bool ___1_pooledResource, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	RuntimeObject** G_B4_0 = NULL;
	RuntimeObject** G_B3_0 = NULL;
	IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* G_B5_0 = NULL;
	RuntimeObject** G_B5_1 = NULL;
	{
		// int result = resourceArray.size;
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_0 = (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*)__this->___resourceArray_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_inline(L_0, DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_RuntimeMethod_var);
		V_0 = L_1;
		// resourceArray.Resize(resourceArray.size + 1, true);
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_2 = (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*)__this->___resourceArray_0;
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_3 = (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*)__this->___resourceArray_0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_inline(L_3, DynamicArray_1_get_size_m56D2768863B15299FA4F2F14E271686207A8C2E4_RuntimeMethod_var);
		NullCheck(L_2);
		DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1(L_2, ((int32_t)il2cpp_codegen_add(L_4, 1)), (bool)1, DynamicArray_1_Resize_mEEEB907EAEFD4C22DB449FF052CF6AC967A27AD1_RuntimeMethod_var);
		// if (resourceArray[result] == null)
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_5 = (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*)__this->___resourceArray_0;
		int32_t L_6 = V_0;
		NullCheck(L_5);
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** L_7;
		L_7 = DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE(L_5, L_6, DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var);
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D* L_8 = *((IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D**)L_7);
		V_1 = (bool)((((RuntimeObject*)(IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0052;
		}
	}
	{
		// resourceArray[result] = new ResType();
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_10 = (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*)__this->___resourceArray_0;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** L_12;
		L_12 = DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE(L_10, L_11, DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var);
		RuntimeObject* L_13;
		L_13 = InvokerFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		*((RuntimeObject**)L_12) = (RuntimeObject*)L_13;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_12, (void*)(RuntimeObject*)L_13);
	}

IL_0052:
	{
		// outRes = resourceArray[result] as ResType;
		RuntimeObject** L_14 = ___0_outRes;
		DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB* L_15 = (DynamicArray_1_t401F46C0081DE185BCAB1D30DE8D6B6DC9AA6AFB*)__this->___resourceArray_0;
		int32_t L_16 = V_0;
		NullCheck(L_15);
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D** L_17;
		L_17 = DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE(L_15, L_16, DynamicArray_1_get_Item_m5FC9383C3A815B0DF7AAD4C2A5CDFB1A25586ECE_RuntimeMethod_var);
		IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D* L_18 = *((IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D**)L_17);
		*(RuntimeObject**)L_14 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_18, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1)));
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_14, (void*)((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_18, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1))));
		// outRes.Reset(pooledResource ? pool : null);
		RuntimeObject** L_19 = ___0_outRes;
		bool L_20 = ___1_pooledResource;
		G_B3_0 = L_19;
		if (L_20)
		{
			G_B4_0 = L_19;
			goto IL_0076;
		}
	}
	{
		G_B5_0 = ((IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8*)(NULL));
		G_B5_1 = G_B3_0;
		goto IL_007c;
	}

IL_0076:
	{
		IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* L_21 = (IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8*)__this->___pool_2;
		G_B5_0 = L_21;
		G_B5_1 = G_B4_0;
	}

IL_007c:
	{
		NullCheck((IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D*)(*G_B5_1));
		VirtualActionInvoker1Invoker< IRenderGraphResourcePool_t8BF833F3C5D0BD8E45632CF923363EC782F4DDA8* >::Invoke(4 /* System.Void UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResource::Reset(UnityEngine.Experimental.Rendering.RenderGraphModule.IRenderGraphResourcePool) */, (IRenderGraphResource_tF24653A388C17849844C128C19C7A6599C7ADB7D*)(*G_B5_1), G_B5_0);
		// return result;
		int32_t L_22 = V_0;
		V_2 = L_22;
		goto IL_008c;
	}

IL_008c:
	{
		// }
		int32_t L_23 = V_2;
		return L_23;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
	const Il2CppFullySharedGenericStruct L_7 = L_3;
	const Il2CppFullySharedGenericStruct L_6 = alloca(SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct V_1 = alloca(SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
	memset(V_1, 0, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
	memset(V_2, 0, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
	{
		// var structSize = UnsafeUtility.SizeOf<T>();
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		V_0 = L_0;
		// T value = UnsafeUtility.ReadArrayElement<T>(Ptr + Offset, 0);
		uint8_t* L_1 = (uint8_t*)__this->___Ptr_0;
		int32_t L_2 = (int32_t)__this->___Offset_2;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2)), 0, (Il2CppFullySharedGenericStruct*)L_3);
		il2cpp_codegen_memcpy(V_1, L_3, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
		// Offset += structSize;
		int32_t L_4 = (int32_t)__this->___Offset_2;
		int32_t L_5 = V_0;
		__this->___Offset_2 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		// return value;
		il2cpp_codegen_memcpy(L_6, V_1, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
		il2cpp_codegen_memcpy(V_2, L_6, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
		goto IL_002d;
	}

IL_002d:
	{
		// }
		il2cpp_codegen_memcpy(L_7, V_2, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
		il2cpp_codegen_memcpy(il2cppRetVal, L_7, SizeOf_T_t23EFE765355235E0552FEAA74620709E7D407C49);
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2_AdjustorThunk (RuntimeObject* __this, Il2CppFullySharedGenericStruct* il2cppRetVal, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m4BEED82D6907F7A1B30916AD15A551B4477AB2C2(_thisAdjusted, il2cppRetVal, method);
	return;
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		// var structSize = UnsafeUtility.SizeOf<T>();
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		V_0 = L_0;
		// UnsafeUtility.CopyPtrToStructure<T>(Ptr + Offset, out value);
		uint8_t* L_1 = (uint8_t*)__this->___Ptr_0;
		int32_t L_2 = (int32_t)__this->___Offset_2;
		Il2CppFullySharedGenericStruct* L_3 = ___0_value;
		InvokerActionInvoker2< void*, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, (void*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_1, L_2)), L_3);
		// Offset += structSize;
		int32_t L_4 = (int32_t)__this->___Offset_2;
		int32_t L_5 = V_0;
		__this->___Offset_2 = ((int32_t)il2cpp_codegen_add(L_4, L_5));
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59_AdjustorThunk (RuntimeObject* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___0_value, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisIl2CppFullySharedGenericStruct_mD61521649968D72362C4D143C6798CF697284C59(_thisAdjusted, ___0_value, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNext<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(Unity.Collections.NativeArray`1<T>&,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_value, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	void* V_3 = NULL;
	{
		// var length = ReadNext<int>();
		int32_t L_0;
		L_0 = Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774(__this, Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		V_0 = L_0;
		// value = CollectionHelper.CreateNativeArray<T>(length, allocator);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_1 = ___0_value;
		int32_t L_2 = V_0;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___1_allocator;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_4;
		L_4 = InvokerFuncInvoker3< NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18, int32_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_2, L_3, (int32_t)1);
		*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_1 = L_4;
		// var size = length * UnsafeUtility.SizeOf<T>();
		int32_t L_5 = V_0;
		int32_t L_6;
		L_6 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL);
		V_1 = ((int32_t)il2cpp_codegen_multiply(L_5, L_6));
		// if (size > 0)
		int32_t L_7 = V_1;
		V_2 = (bool)((((int32_t)L_7) > ((int32_t)0))? 1 : 0);
		bool L_8 = V_2;
		if (!L_8)
		{
			goto IL_0044;
		}
	}
	{
		// var ptr = ReadNext(size);
		int32_t L_9 = V_1;
		void* L_10;
		L_10 = Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A(__this, L_9, NULL);
		V_3 = L_10;
		// UnsafeUtility.MemCpy(NativeArrayUnsafeUtility.GetUnsafePtr(value), ptr, size);
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* L_11 = ___0_value;
		NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 L_12 = (*(NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18*)L_11);
		void* L_13;
		L_13 = InvokerFuncInvoker1< void*, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_12);
		void* L_14 = V_3;
		int32_t L_15 = V_1;
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177(L_13, L_14, ((int64_t)L_15), NULL);
	}

IL_0044:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372_AdjustorThunk (RuntimeObject* __this, NativeArray_1_tDB8B8DC66CC8E16ED6D9A8C75D2C1AFC80AC1E18* ___0_value, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	Reader_ReadNext_TisIl2CppFullySharedGenericStruct_m08EA2C685C92045455508A2CEA28AF34C49BF372(_thisAdjusted, ___0_value, ___1_allocator, method);
}
// System.Void* Unity.Collections.LowLevel.Unsafe.UnsafeAppendBuffer/Reader::ReadNextArray<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC_gshared (Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* __this, int32_t* ___0_length, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	void* V_0 = NULL;
	uintptr_t G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// length = ReadNext<int>();
		int32_t* L_0 = ___0_length;
		int32_t L_1;
		L_1 = Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774(__this, Reader_ReadNext_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m008862EE68B89223188A3A1C95A528DC5CD56774_RuntimeMethod_var);
		*((int32_t*)L_0) = (int32_t)L_1;
		// return (length == 0) ? null : ReadNext(length * UnsafeUtility.SizeOf<T>());
		int32_t* L_2 = ___0_length;
		int32_t L_3 = *((int32_t*)L_2);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		int32_t* L_4 = ___0_length;
		int32_t L_5 = *((int32_t*)L_4);
		int32_t L_6;
		L_6 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		void* L_7;
		L_7 = Reader_ReadNext_m7C9150A60E622C8581A3E80C8DD1AD71D043BF6A(__this, ((int32_t)il2cpp_codegen_multiply(L_5, L_6)), NULL);
		G_B3_0 = ((uintptr_t)(intptr_t)(L_7));
		goto IL_001f;
	}

IL_001d:
	{
		G_B3_0 = ((uintptr_t)0);
	}

IL_001f:
	{
		V_0 = (void*)G_B3_0;
		goto IL_0022;
	}

IL_0022:
	{
		// }
		void* L_8 = V_0;
		return L_8;
	}
}
IL2CPP_EXTERN_C  void* Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC_AdjustorThunk (RuntimeObject* __this, int32_t* ___0_length, const RuntimeMethod* method)
{
	Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_t409B401DB3A9E3F5C637DF66E5FAB1F63C291CB6*>(__this + _offset);
	void* _returnValue;
	_returnValue = Reader_ReadNextArray_TisIl2CppFullySharedGenericStruct_mE1C3BA7C6F410106344DD729D6EBF3FB62CB67CC(_thisAdjusted, ___0_length, method);
	return _returnValue;
}
// System.Boolean Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelReader::Contains<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ParallelReader_Contains_TisIl2CppFullySharedGenericStruct_m3E8E3368063185B63AF2A43F654A0CCCE305DF05_gshared (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_tC2BF1B43CA848E812C54824A58B882E1A305F093 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericStruct L_0 = alloca(SizeOf_T_tC2BF1B43CA848E812C54824A58B882E1A305F093);
	bool V_0 = false;
	{
		// return IndexOf(value) != -1;
		il2cpp_codegen_memcpy(L_0, ___0_value, SizeOf_T_tC2BF1B43CA848E812C54824A58B882E1A305F093);
		int32_t L_1;
		L_1 = InvokerFuncInvoker1< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0);
		V_0 = (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0011;
	}

IL_0011:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool ParallelReader_Contains_TisIl2CppFullySharedGenericStruct_m3E8E3368063185B63AF2A43F654A0CCCE305DF05_AdjustorThunk (RuntimeObject* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3*>(__this + _offset);
	bool _returnValue;
	_returnValue = ParallelReader_Contains_TisIl2CppFullySharedGenericStruct_m3E8E3368063185B63AF2A43F654A0CCCE305DF05(_thisAdjusted, ___0_value, method);
	return _returnValue;
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelReader::IndexOf<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ParallelReader_IndexOf_TisIl2CppFullySharedGenericStruct_mA41274E9720BDAE828F792E8312512224E784386_gshared (ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t5CE53BA68354070800B35A5AF98B283ECE0E3CFB = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t5CE53BA68354070800B35A5AF98B283ECE0E3CFB);
	int32_t V_0 = 0;
	{
		// return NativeArrayExtensions.IndexOf<T, T>(Ptr, Length, value);
		void* L_0 = (void*)__this->___Ptr_0;
		int32_t L_1 = (int32_t)__this->___Length_1;
		il2cpp_codegen_memcpy(L_2, ___0_value, SizeOf_T_t5CE53BA68354070800B35A5AF98B283ECE0E3CFB);
		int32_t L_3;
		L_3 = InvokerFuncInvoker3< int32_t, void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1, L_2);
		V_0 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_EXTERN_C  int32_t ParallelReader_IndexOf_TisIl2CppFullySharedGenericStruct_mA41274E9720BDAE828F792E8312512224E784386_AdjustorThunk (RuntimeObject* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ParallelReader_t5E2820664B93D3BA2E1933E84E07620FF4D552C3*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = ParallelReader_IndexOf_TisIl2CppFullySharedGenericStruct_mA41274E9720BDAE828F792E8312512224E784386(_thisAdjusted, ___0_value, method);
	return _returnValue;
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelWriter::AddNoResize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelWriter_AddNoResize_TisIl2CppFullySharedGenericStruct_m8CCCC826E771315EFE8F2FADFBC9A955F3547471_gshared (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t2F5363695686599EFA811F76CB81F9259E8B6388 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t2F5363695686599EFA811F76CB81F9259E8B6388);
	int32_t V_0 = 0;
	{
		// var idx = Interlocked.Increment(ref ListData->Length) - 1;
		UnsafeList_t821320446016467933FF194D701C7EDDC23E538B* L_0 = (UnsafeList_t821320446016467933FF194D701C7EDDC23E538B*)__this->___ListData_1;
		NullCheck(L_0);
		int32_t* L_1 = (int32_t*)(&L_0->___Length_1);
		int32_t L_2;
		L_2 = Interlocked_Increment_m3C240C32E8D9544EC050B74D4F28EEB58F1F9309(L_1, NULL);
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_2, 1));
		// UnsafeUtility.WriteArrayElement(Ptr, idx, value);
		void* L_3 = (void*)__this->___Ptr_0;
		int32_t L_4 = V_0;
		il2cpp_codegen_memcpy(L_5, ___0_value, SizeOf_T_t2F5363695686599EFA811F76CB81F9259E8B6388);
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_3, L_4, L_5);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ParallelWriter_AddNoResize_TisIl2CppFullySharedGenericStruct_m8CCCC826E771315EFE8F2FADFBC9A955F3547471_AdjustorThunk (RuntimeObject* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*>(__this + _offset);
	ParallelWriter_AddNoResize_TisIl2CppFullySharedGenericStruct_m8CCCC826E771315EFE8F2FADFBC9A955F3547471(_thisAdjusted, ___0_value, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelWriter::AddRangeNoResize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(Unity.Collections.LowLevel.Unsafe.UnsafeList)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_mCADDD070BDE349E58E4C49290C4F48865E0F2476_gshared (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, UnsafeList_t821320446016467933FF194D701C7EDDC23E538B ___0_list, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		// AddRangeNoResize(UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>(), list.Ptr, list.Length);
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		int32_t L_1;
		L_1 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL);
		UnsafeList_t821320446016467933FF194D701C7EDDC23E538B L_2 = ___0_list;
		void* L_3 = (void*)L_2.___Ptr_0;
		UnsafeList_t821320446016467933FF194D701C7EDDC23E538B L_4 = ___0_list;
		int32_t L_5 = (int32_t)L_4.___Length_1;
		ParallelWriter_AddRangeNoResize_m08B8547437AD093C40E375EF247B0F487EB7E5CD(__this, L_0, L_1, L_3, L_5, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_mCADDD070BDE349E58E4C49290C4F48865E0F2476_AdjustorThunk (RuntimeObject* __this, UnsafeList_t821320446016467933FF194D701C7EDDC23E538B ___0_list, const RuntimeMethod* method)
{
	ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*>(__this + _offset);
	ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_mCADDD070BDE349E58E4C49290C4F48865E0F2476(_thisAdjusted, ___0_list, method);
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeList/ParallelWriter::AddRangeNoResize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_m558F744AD4AF77FD4E6101BB8B4FCDAB079B0727_gshared (ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* __this, void* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		// AddRangeNoResize(UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>(), ptr, length);
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		int32_t L_1;
		L_1 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL);
		void* L_2 = ___0_ptr;
		int32_t L_3 = ___1_length;
		ParallelWriter_AddRangeNoResize_m08B8547437AD093C40E375EF247B0F487EB7E5CD(__this, L_0, L_1, L_2, L_3, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_m558F744AD4AF77FD4E6101BB8B4FCDAB079B0727_AdjustorThunk (RuntimeObject* __this, void* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<ParallelWriter_t6C710C5C1EE5F200FD157CF3F41A1A1AEF2F30EB*>(__this + _offset);
	ParallelWriter_AddRangeNoResize_TisIl2CppFullySharedGenericStruct_m558F744AD4AF77FD4E6101BB8B4FCDAB079B0727(_thisAdjusted, ___0_ptr, ___1_length, method);
}
// T& Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::Peek<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6_gshared (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	uint8_t* V_1 = NULL;
	bool V_2 = false;
	Il2CppFullySharedGenericStruct* V_3 = NULL;
	{
		// int size = UnsafeUtility.SizeOf<T>();
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		V_0 = L_0;
		// byte* ptr = m_CurrentPtr;
		uint8_t* L_1 = (uint8_t*)__this->___m_CurrentPtr_2;
		V_1 = L_1;
		// if (ptr + size > m_CurrentBlockEnd)
		uint8_t* L_2 = V_1;
		int32_t L_3 = V_0;
		uint8_t* L_4 = (uint8_t*)__this->___m_CurrentBlockEnd_3;
		V_2 = (bool)((!(((uintptr_t)((uint8_t*)il2cpp_codegen_add((intptr_t)L_2, L_3))) <= ((uintptr_t)L_4)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0036;
		}
	}
	{
		// ptr = m_CurrentBlock->Next->Data;
		UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* L_6 = (UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C*)__this->___m_CurrentBlock_1;
		NullCheck(L_6);
		UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C* L_7 = (UnsafeStreamBlock_t0DE96C782B2CBF67BE34978C364781E170B3A86C*)L_6->___Next_0;
		NullCheck(L_7);
		U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116* L_8 = (U3CDataU3Ee__FixedBuffer_t60155FEDF2B8430C4B466CB3CDD85327C03F1116*)(&L_7->___Data_1);
		uint8_t* L_9 = (uint8_t*)(&L_8->___FixedElementField_0);
		V_1 = (uint8_t*)((uintptr_t)L_9);
	}

IL_0036:
	{
		// return ref UnsafeUtility.AsRef<T>(ptr);
		uint8_t* L_10 = V_1;
		Il2CppFullySharedGenericStruct* L_11;
		L_11 = InvokerFuncInvoker1< Il2CppFullySharedGenericStruct*, void* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, (void*)L_10);
		V_3 = L_11;
		goto IL_003f;
	}

IL_003f:
	{
		// }
		Il2CppFullySharedGenericStruct* L_12 = V_3;
		return L_12;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Reader_Peek_TisIl2CppFullySharedGenericStruct_m9282B5560EB03FCC4C6F0F8AC634AE5A13B555D6(_thisAdjusted, method);
	return _returnValue;
}
// T& Unity.Collections.LowLevel.Unsafe.UnsafeStream/Reader::Read<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633_gshared (Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	{
		// int size = UnsafeUtility.SizeOf<T>();
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		V_0 = L_0;
		// return ref UnsafeUtility.AsRef<T>(ReadUnsafePtr(size));
		int32_t L_1 = V_0;
		uint8_t* L_2;
		L_2 = Reader_ReadUnsafePtr_m6CDEF727114990BC4C2DF321BE752F229104A888(__this, L_1, NULL);
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = InvokerFuncInvoker1< Il2CppFullySharedGenericStruct*, void* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, (void*)L_2);
		V_1 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		Il2CppFullySharedGenericStruct* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Reader_tE85B398678D2471A73C94A5DCAECD9AA2CAA4458*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Reader_Read_TisIl2CppFullySharedGenericStruct_mBBF673BF9BED0383144F187B6541B532F2B6A633(_thisAdjusted, method);
	return _returnValue;
}
// T& Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::Allocate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7_gshared (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	Il2CppFullySharedGenericStruct* V_1 = NULL;
	{
		// int size = UnsafeUtility.SizeOf<T>();
		int32_t L_0;
		L_0 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		V_0 = L_0;
		// return ref UnsafeUtility.AsRef<T>(Allocate(size));
		int32_t L_1 = V_0;
		uint8_t* L_2;
		L_2 = Writer_Allocate_m85F9D4FF8746C0A59DC23A9003398A6D9D42526D(__this, L_1, NULL);
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = InvokerFuncInvoker1< Il2CppFullySharedGenericStruct*, void* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, (void*)L_2);
		V_1 = L_3;
		goto IL_0016;
	}

IL_0016:
	{
		// }
		Il2CppFullySharedGenericStruct* L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  Il2CppFullySharedGenericStruct* Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*>(__this + _offset);
	Il2CppFullySharedGenericStruct* _returnValue;
	_returnValue = Writer_Allocate_TisIl2CppFullySharedGenericStruct_m4503233E7BE788F93FD1C91B7BE65AC121483DB7(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeStream/Writer::Write<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917_gshared (Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t4D7283DBD6CD71348652C5C25061A381CAB760A7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t4D7283DBD6CD71348652C5C25061A381CAB760A7);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	{
		// ref T dst = ref Allocate<T>();
		Il2CppFullySharedGenericStruct* L_0;
		L_0 = InvokerFuncInvoker0< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), __this);
		V_0 = L_0;
		// dst = value;
		Il2CppFullySharedGenericStruct* L_1 = V_0;
		il2cpp_codegen_memcpy(L_2, ___0_value, SizeOf_T_t4D7283DBD6CD71348652C5C25061A381CAB760A7);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_1, L_2, SizeOf_T_t4D7283DBD6CD71348652C5C25061A381CAB760A7);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericStruct*)L_1, (void*)L_2);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917_AdjustorThunk (RuntimeObject* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___0_value, const RuntimeMethod* method)
{
	Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<Writer_t16BC5D7104F5959779BA8C578EC794067872FB0F*>(__this + _offset);
	Writer_Write_TisIl2CppFullySharedGenericStruct_m3255C6DE3AD541593524A784715AE50082831917(_thisAdjusted, ___0_value, method);
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T*,System.Void*,System.Int32*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m78BBC4DBE234DA027814A059C7A569C168B14265_gshared (Il2CppFullySharedGenericStruct* ___0_dptr, void* ___1_base_addr, int32_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, Il2CppFullySharedGenericStruct* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(U)
	const uint32_t SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	// sizeof(T)
	const uint32_t SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	// T
	const Il2CppFullySharedGenericStruct L_19 = alloca(SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314);
	// U
	const Il2CppFullySharedGenericStruct L_11 = alloca(SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
	memset(V_0, 0, SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	Il2CppFullySharedGenericStruct* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_006a;
	}

IL_000d:
	{
		// long baseIndex = indexPtr[i];
		int32_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int32_t L_2 = *((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 4)))));
		V_2 = ((int64_t)L_2);
		// long offset = baseIndex * scale;
		int64_t L_3 = V_2;
		int32_t L_4 = ___3_scale;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)L_4)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_5 = ___1_base_addr;
		int64_t L_6 = V_3;
		V_4 = (Il2CppFullySharedGenericStruct*)((void*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_6)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		Il2CppFullySharedGenericStruct* L_7 = ___5_mask;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0045;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_8 = ___5_mask;
		int32_t L_9 = V_1;
		uint32_t L_10 = SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594;
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_U_tD3AAA6C44816F6B7C2E20A7D231588A6DD300594);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 3), L_12, (void*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), L_11);
		G_B4_0 = ((((int32_t)L_13) < ((int32_t)0))? 1 : 0);
		goto IL_0046;
	}

IL_0045:
	{
		G_B4_0 = 1;
	}

IL_0046:
	{
		V_5 = (bool)G_B4_0;
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_0065;
		}
	}
	{
		// dptr[i] = *mem_addr;
		Il2CppFullySharedGenericStruct* L_15 = ___0_dptr;
		int32_t L_16 = V_1;
		uint32_t L_17 = SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314;
		Il2CppFullySharedGenericStruct* L_18 = V_4;
		il2cpp_codegen_memcpy(L_19, L_18, SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), (int32_t)L_17)))), L_19, SizeOf_T_t7746E565CB09ADDE66D7FE8BA2706651748F4314);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 5), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), (int32_t)L_17)))), (void*)L_19);
	}

IL_0065:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_006a:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_21 = V_1;
		int32_t L_22 = ___4_n;
		V_6 = (bool)((((int32_t)L_21) < ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_6;
		if (L_23)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Unity.Burst.Intrinsics.X86/Avx2::EmulatedGather<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType,Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T*,System.Void*,System.Int64*,System.Int32,System.Int32,U*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Avx2_EmulatedGather_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m93179BB5AA8A484650210DDAA1EB8D4319DE5686_gshared (Il2CppFullySharedGenericStruct* ___0_dptr, void* ___1_base_addr, int64_t* ___2_indexPtr, int32_t ___3_scale, int32_t ___4_n, Il2CppFullySharedGenericStruct* ___5_mask, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(U)
	const uint32_t SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	// sizeof(T)
	const uint32_t SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 5));
	// T
	const Il2CppFullySharedGenericStruct L_19 = alloca(SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8);
	// U
	const Il2CppFullySharedGenericStruct L_11 = alloca(SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
	Il2CppFullySharedGenericStruct V_0 = alloca(SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
	memset(V_0, 0, SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
	int32_t V_1 = 0;
	int64_t V_2 = 0;
	int64_t V_3 = 0;
	Il2CppFullySharedGenericStruct* V_4 = NULL;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B4_0 = 0;
	{
		// U maskZero = default;
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_0, SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
		// for (int i = 0; i < n; ++i)
		V_1 = 0;
		goto IL_0069;
	}

IL_000d:
	{
		// long baseIndex = indexPtr[i];
		int64_t* L_0 = ___2_indexPtr;
		int32_t L_1 = V_1;
		int64_t L_2 = *((int64_t*)((int64_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), 8)))));
		V_2 = L_2;
		// long offset = baseIndex * scale;
		int64_t L_3 = V_2;
		int32_t L_4 = ___3_scale;
		V_3 = ((int64_t)il2cpp_codegen_multiply(L_3, ((int64_t)L_4)));
		// T* mem_addr = (T*)((byte*)base_addr + offset);
		void* L_5 = ___1_base_addr;
		int64_t L_6 = V_3;
		V_4 = (Il2CppFullySharedGenericStruct*)((void*)il2cpp_codegen_add((intptr_t)L_5, ((intptr_t)L_6)));
		// if (mask == null || mask[i].CompareTo(maskZero) < 0)
		Il2CppFullySharedGenericStruct* L_7 = ___5_mask;
		if ((((intptr_t)L_7) == ((intptr_t)((uintptr_t)0))))
		{
			goto IL_0044;
		}
	}
	{
		Il2CppFullySharedGenericStruct* L_8 = ___5_mask;
		int32_t L_9 = V_1;
		uint32_t L_10 = SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747;
		il2cpp_codegen_memcpy(L_11, V_0, SizeOf_U_t64249877289BCA4A66FB09171AC3649960014747);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericStruct >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 3), L_12, (void*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_8, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_9), (int32_t)L_10)))), L_11);
		G_B4_0 = ((((int32_t)L_13) < ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0044:
	{
		G_B4_0 = 1;
	}

IL_0045:
	{
		V_5 = (bool)G_B4_0;
		bool L_14 = V_5;
		if (!L_14)
		{
			goto IL_0064;
		}
	}
	{
		// dptr[i] = *mem_addr;
		Il2CppFullySharedGenericStruct* L_15 = ___0_dptr;
		int32_t L_16 = V_1;
		uint32_t L_17 = SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8;
		Il2CppFullySharedGenericStruct* L_18 = V_4;
		il2cpp_codegen_memcpy(L_19, L_18, SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), (int32_t)L_17)))), L_19, SizeOf_T_t2BE133648A5E32C27FC46CF83B739F6CD3C673A8);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 5), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_15, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_16), (int32_t)L_17)))), (void*)L_19);
	}

IL_0064:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_20 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_20, 1));
	}

IL_0069:
	{
		// for (int i = 0; i < n; ++i)
		int32_t L_21 = V_1;
		int32_t L_22 = ___4_n;
		V_6 = (bool)((((int32_t)L_21) < ((int32_t)L_22))? 1 : 0);
		bool L_23 = V_6;
		if (L_23)
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrCmpIntRes2<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStrCmpIntRes2_TisIl2CppFullySharedGenericStruct_m5BBC7FD25430C93A4DCF34A210DE56367BA1E204_gshared (Il2CppFullySharedGenericStruct* ___0_a, int32_t ___1_alen, Il2CppFullySharedGenericStruct* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 1));
	// T
	const Il2CppFullySharedGenericStruct L_3 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	const Il2CppFullySharedGenericStruct L_10 = L_3;
	const Il2CppFullySharedGenericStruct L_18 = L_3;
	const Il2CppFullySharedGenericStruct L_33 = L_3;
	const Il2CppFullySharedGenericStruct L_37 = L_3;
	const Il2CppFullySharedGenericStruct L_50 = L_3;
	const Il2CppFullySharedGenericStruct L_63 = L_3;
	const Il2CppFullySharedGenericStruct L_153 = L_3;
	const Il2CppFullySharedGenericStruct L_19 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	const Il2CppFullySharedGenericStruct L_34 = L_19;
	const Il2CppFullySharedGenericStruct L_38 = L_19;
	const Il2CppFullySharedGenericStruct L_51 = L_19;
	const Il2CppFullySharedGenericStruct L_64 = L_19;
	const Il2CppFullySharedGenericStruct L_154 = L_19;
	bool V_0 = false;
	bool V_1 = false;
	StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	Il2CppFullySharedGenericStruct V_7 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	memset(V_7, 0, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	bool V_8 = false;
	Il2CppFullySharedGenericStruct V_9 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	memset(V_9, 0, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	int32_t V_29 = 0;
	int32_t V_30 = 0;
	bool V_31 = false;
	bool V_32 = false;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	int32_t V_36 = 0;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	bool V_42 = false;
	Il2CppFullySharedGenericStruct V_43 = alloca(SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	memset(V_43, 0, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
	bool V_44 = false;
	bool V_45 = false;
	int32_t V_46 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B46_0 = 0;
	int32_t G_B61_0 = 0;
	int32_t G_B60_0 = 0;
	int32_t G_B62_0 = 0;
	int32_t G_B62_1 = 0;
	int32_t G_B71_0 = 0;
	int32_t G_B70_0 = 0;
	int32_t G_B72_0 = 0;
	int32_t G_B73_0 = 0;
	int32_t G_B73_1 = 0;
	int32_t G_B81_0 = 0;
	int32_t G_B80_0 = 0;
	int32_t G_B82_0 = 0;
	int32_t G_B82_1 = 0;
	{
		// bool aInvalid = false;
		V_0 = (bool)0;
		// bool bInvalid = false;
		V_1 = (bool)0;
		// StrBoolArray boolRes = default;
		il2cpp_codegen_initobj((&V_2), sizeof(StrBoolArray_tCA66E1F688A4BC6FA749195F867F59E523508DD6));
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_01ea;
	}

IL_0014:
	{
		// T aCh = a[i];
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		int32_t L_1 = V_3;
		uint32_t L_2 = SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77;
		il2cpp_codegen_memcpy(L_3, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_1), (int32_t)L_2)))), SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(V_7, L_3, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		// if (i == alen)
		int32_t L_4 = V_3;
		int32_t L_5 = ___1_alen;
		V_8 = (bool)((((int32_t)L_4) == ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_8;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		// aInvalid = true;
		V_0 = (bool)1;
	}

IL_0033:
	{
		// bInvalid = false;
		V_1 = (bool)0;
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_01d6;
	}

IL_003d:
	{
		// T bCh = b[j];
		Il2CppFullySharedGenericStruct* L_7 = ___2_b;
		int32_t L_8 = V_4;
		uint32_t L_9 = SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77;
		il2cpp_codegen_memcpy(L_10, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_7, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_8), (int32_t)L_9)))), SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(V_9, L_10, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		// if (j == blen)
		int32_t L_11 = V_4;
		int32_t L_12 = ___3_blen;
		V_11 = (bool)((((int32_t)L_11) == ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_11;
		if (!L_13)
		{
			goto IL_005e;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_005e:
	{
		// switch ((imm8 >> 2) & 3)
		int32_t L_14 = ___5_imm8;
		V_13 = ((int32_t)(((int32_t)(L_14>>2))&3));
		int32_t L_15 = V_13;
		V_12 = L_15;
		int32_t L_16 = V_12;
		switch (L_16)
		{
			case 0:
			{
				goto IL_0082;
			}
			case 1:
			{
				goto IL_00c9;
			}
			case 2:
			{
				goto IL_013a;
			}
		}
	}
	{
		goto IL_017e;
	}

IL_0082:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_17;
		L_17 = InvokerFuncInvoker0< EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL);
		il2cpp_codegen_memcpy(L_18, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_19, V_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_17);
		bool L_20;
		L_20 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Equals(T,T) */, L_17, L_18, L_19);
		V_10 = L_20;
		// if (!aInvalid && bInvalid)
		bool L_21 = V_0;
		bool L_22 = V_1;
		V_14 = (bool)((int32_t)(((((int32_t)L_21) == ((int32_t)0))? 1 : 0)&(int32_t)L_22));
		bool L_23 = V_14;
		if (!L_23)
		{
			goto IL_00a3;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_00c4;
	}

IL_00a3:
	{
		// else if (aInvalid && !bInvalid)
		bool L_24 = V_0;
		if (!L_24)
		{
			goto IL_00ac;
		}
	}
	{
		bool L_25 = V_1;
		G_B13_0 = ((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		goto IL_00ad;
	}

IL_00ac:
	{
		G_B13_0 = 0;
	}

IL_00ad:
	{
		V_15 = (bool)G_B13_0;
		bool L_26 = V_15;
		if (!L_26)
		{
			goto IL_00b8;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_00c4;
	}

IL_00b8:
	{
		// else if (aInvalid && bInvalid)
		bool L_27 = V_0;
		bool L_28 = V_1;
		V_16 = (bool)((int32_t)((int32_t)L_27&(int32_t)L_28));
		bool L_29 = V_16;
		if (!L_29)
		{
			goto IL_00c4;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
	}

IL_00c4:
	{
		// break;
		goto IL_01c2;
	}

IL_00c9:
	{
		// if (0 == (i & 1))
		int32_t L_30 = V_3;
		V_17 = (bool)((((int32_t)((int32_t)(L_30&1))) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_17;
		if (!L_31)
		{
			goto IL_00ed;
		}
	}
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) >= 0;
		Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* L_32;
		L_32 = InvokerFuncInvoker0< Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), NULL);
		il2cpp_codegen_memcpy(L_33, V_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_34, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_32);
		int32_t L_35;
		L_35 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Compare(T,T) */, L_32, L_33, L_34);
		V_10 = (bool)((((int32_t)((((int32_t)L_35) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0103;
	}

IL_00ed:
	{
		// match = Comparer<T>.Default.Compare(bCh, aCh) <= 0;
		Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* L_36;
		L_36 = InvokerFuncInvoker0< Comparer_1_t535E02B3998AA8B49230077EF0DFCB16BA44C985* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)), il2cpp_rgctx_method(method->rgctx_data, 6), NULL);
		il2cpp_codegen_memcpy(L_37, V_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_38, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_36);
		int32_t L_39;
		L_39 = VirtualFuncInvoker2Invoker< int32_t, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(6 /* System.Int32 System.Collections.Generic.Comparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Compare(T,T) */, L_36, L_37, L_38);
		V_10 = (bool)((((int32_t)((((int32_t)L_39) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0103:
	{
		// if (!aInvalid && bInvalid)
		bool L_40 = V_0;
		bool L_41 = V_1;
		V_18 = (bool)((int32_t)(((((int32_t)L_40) == ((int32_t)0))? 1 : 0)&(int32_t)L_41));
		bool L_42 = V_18;
		if (!L_42)
		{
			goto IL_0114;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_0135;
	}

IL_0114:
	{
		// else if (aInvalid && !bInvalid)
		bool L_43 = V_0;
		if (!L_43)
		{
			goto IL_011d;
		}
	}
	{
		bool L_44 = V_1;
		G_B26_0 = ((((int32_t)L_44) == ((int32_t)0))? 1 : 0);
		goto IL_011e;
	}

IL_011d:
	{
		G_B26_0 = 0;
	}

IL_011e:
	{
		V_19 = (bool)G_B26_0;
		bool L_45 = V_19;
		if (!L_45)
		{
			goto IL_0129;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_0135;
	}

IL_0129:
	{
		// else if (aInvalid && bInvalid)
		bool L_46 = V_0;
		bool L_47 = V_1;
		V_20 = (bool)((int32_t)((int32_t)L_46&(int32_t)L_47));
		bool L_48 = V_20;
		if (!L_48)
		{
			goto IL_0135;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
	}

IL_0135:
	{
		// break;
		goto IL_01c2;
	}

IL_013a:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_49;
		L_49 = InvokerFuncInvoker0< EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL);
		il2cpp_codegen_memcpy(L_50, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_51, V_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_49);
		bool L_52;
		L_52 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Equals(T,T) */, L_49, L_50, L_51);
		V_10 = L_52;
		// if (!aInvalid && bInvalid)
		bool L_53 = V_0;
		bool L_54 = V_1;
		V_21 = (bool)((int32_t)(((((int32_t)L_53) == ((int32_t)0))? 1 : 0)&(int32_t)L_54));
		bool L_55 = V_21;
		if (!L_55)
		{
			goto IL_015b;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_017c;
	}

IL_015b:
	{
		// else if (aInvalid && !bInvalid)
		bool L_56 = V_0;
		if (!L_56)
		{
			goto IL_0164;
		}
	}
	{
		bool L_57 = V_1;
		G_B36_0 = ((((int32_t)L_57) == ((int32_t)0))? 1 : 0);
		goto IL_0165;
	}

IL_0164:
	{
		G_B36_0 = 0;
	}

IL_0165:
	{
		V_22 = (bool)G_B36_0;
		bool L_58 = V_22;
		if (!L_58)
		{
			goto IL_0170;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_017c;
	}

IL_0170:
	{
		// else if (aInvalid && bInvalid)
		bool L_59 = V_0;
		bool L_60 = V_1;
		V_23 = (bool)((int32_t)((int32_t)L_59&(int32_t)L_60));
		bool L_61 = V_23;
		if (!L_61)
		{
			goto IL_017c;
		}
	}
	{
		// match = true;
		V_10 = (bool)1;
	}

IL_017c:
	{
		// break;
		goto IL_01c2;
	}

IL_017e:
	{
		// match = EqualityComparer<T>.Default.Equals(aCh, bCh);
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_62;
		L_62 = InvokerFuncInvoker0< EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL);
		il2cpp_codegen_memcpy(L_63, V_7, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_64, V_9, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_62);
		bool L_65;
		L_65 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Equals(T,T) */, L_62, L_63, L_64);
		V_10 = L_65;
		// if (!aInvalid && bInvalid)
		bool L_66 = V_0;
		bool L_67 = V_1;
		V_24 = (bool)((int32_t)(((((int32_t)L_66) == ((int32_t)0))? 1 : 0)&(int32_t)L_67));
		bool L_68 = V_24;
		if (!L_68)
		{
			goto IL_019f;
		}
	}
	{
		// match = false;
		V_10 = (bool)0;
		goto IL_01c0;
	}

IL_019f:
	{
		// else if (aInvalid && !bInvalid)
		bool L_69 = V_0;
		if (!L_69)
		{
			goto IL_01a8;
		}
	}
	{
		bool L_70 = V_1;
		G_B46_0 = ((((int32_t)L_70) == ((int32_t)0))? 1 : 0);
		goto IL_01a9;
	}

IL_01a8:
	{
		G_B46_0 = 0;
	}

IL_01a9:
	{
		V_25 = (bool)G_B46_0;
		bool L_71 = V_25;
		if (!L_71)
		{
			goto IL_01b4;
		}
	}
	{
		// match = true;
		V_10 = (bool)1;
		goto IL_01c0;
	}

IL_01b4:
	{
		// else if (aInvalid && bInvalid)
		bool L_72 = V_0;
		bool L_73 = V_1;
		V_26 = (bool)((int32_t)((int32_t)L_72&(int32_t)L_73));
		bool L_74 = V_26;
		if (!L_74)
		{
			goto IL_01c0;
		}
	}
	{
		// match = true;
		V_10 = (bool)1;
	}

IL_01c0:
	{
		// break;
		goto IL_01c2;
	}

IL_01c2:
	{
		// boolRes.SetBit(i, j, match);
		int32_t L_75 = V_3;
		int32_t L_76 = V_4;
		bool L_77 = V_10;
		StrBoolArray_SetBit_m212C6D1A8A4C422AF979D6B3BC7CD5B9BD0F3F01((&V_2), L_75, L_76, L_77, NULL);
		// for (j = 0; j < len; ++j)
		int32_t L_78 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_01d6:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_79 = V_4;
		int32_t L_80 = ___4_len;
		V_27 = (bool)((((int32_t)L_79) < ((int32_t)L_80))? 1 : 0);
		bool L_81 = V_27;
		if (L_81)
		{
			goto IL_003d;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_82 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_82, 1));
	}

IL_01ea:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_83 = V_3;
		int32_t L_84 = ___4_len;
		V_28 = (bool)((((int32_t)L_83) < ((int32_t)L_84))? 1 : 0);
		bool L_85 = V_28;
		if (L_85)
		{
			goto IL_0014;
		}
	}
	{
		// int intRes1 = 0;
		V_6 = 0;
		// switch ((imm8 >> 2) & 3)
		int32_t L_86 = ___5_imm8;
		V_30 = ((int32_t)(((int32_t)(L_86>>2))&3));
		int32_t L_87 = V_30;
		V_29 = L_87;
		int32_t L_88 = V_29;
		switch (L_88)
		{
			case 0:
			{
				goto IL_0223;
			}
			case 1:
			{
				goto IL_0270;
			}
			case 2:
			{
				goto IL_02cb;
			}
			case 3:
			{
				goto IL_02fb;
			}
		}
	}
	{
		goto IL_035a;
	}

IL_0223:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0260;
	}

IL_0227:
	{
		// for (j = 0; j < len; ++j)
		V_4 = 0;
		goto IL_024f;
	}

IL_022d:
	{
		// intRes1 |= (boolRes.GetBit(j, i) ? 1 : 0) << i;
		int32_t L_89 = V_6;
		int32_t L_90 = V_4;
		int32_t L_91 = V_3;
		bool L_92;
		L_92 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_90, L_91, NULL);
		G_B60_0 = L_89;
		if (L_92)
		{
			G_B61_0 = L_89;
			goto IL_023f;
		}
	}
	{
		G_B62_0 = 0;
		G_B62_1 = G_B60_0;
		goto IL_0240;
	}

IL_023f:
	{
		G_B62_0 = 1;
		G_B62_1 = G_B61_0;
	}

IL_0240:
	{
		int32_t L_93 = V_3;
		V_6 = ((int32_t)(G_B62_1|((int32_t)(G_B62_0<<((int32_t)(L_93&((int32_t)31)))))));
		// for (j = 0; j < len; ++j)
		int32_t L_94 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_024f:
	{
		// for (j = 0; j < len; ++j)
		int32_t L_95 = V_4;
		int32_t L_96 = ___4_len;
		V_31 = (bool)((((int32_t)L_95) < ((int32_t)L_96))? 1 : 0);
		bool L_97 = V_31;
		if (L_97)
		{
			goto IL_022d;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_98 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_0260:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_99 = V_3;
		int32_t L_100 = ___4_len;
		V_32 = (bool)((((int32_t)L_99) < ((int32_t)L_100))? 1 : 0);
		bool L_101 = V_32;
		if (L_101)
		{
			goto IL_0227;
		}
	}
	{
		// break;
		goto IL_035a;
	}

IL_0270:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_02bb;
	}

IL_0274:
	{
		// for (j = 0; j < len; j += 2)
		V_4 = 0;
		goto IL_02aa;
	}

IL_027a:
	{
		// intRes1 |= ((boolRes.GetBit(j, i) && boolRes.GetBit(j + 1, i)) ? 1 : 0) << i;
		int32_t L_102 = V_6;
		int32_t L_103 = V_4;
		int32_t L_104 = V_3;
		bool L_105;
		L_105 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_103, L_104, NULL);
		G_B70_0 = L_102;
		if (!L_105)
		{
			G_B71_0 = L_102;
			goto IL_0297;
		}
	}
	{
		int32_t L_106 = V_4;
		int32_t L_107 = V_3;
		bool L_108;
		L_108 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), ((int32_t)il2cpp_codegen_add(L_106, 1)), L_107, NULL);
		G_B71_0 = G_B70_0;
		if (L_108)
		{
			G_B72_0 = G_B70_0;
			goto IL_029a;
		}
	}

IL_0297:
	{
		G_B73_0 = 0;
		G_B73_1 = G_B71_0;
		goto IL_029b;
	}

IL_029a:
	{
		G_B73_0 = 1;
		G_B73_1 = G_B72_0;
	}

IL_029b:
	{
		int32_t L_109 = V_3;
		V_6 = ((int32_t)(G_B73_1|((int32_t)(G_B73_0<<((int32_t)(L_109&((int32_t)31)))))));
		// for (j = 0; j < len; j += 2)
		int32_t L_110 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_110, 2));
	}

IL_02aa:
	{
		// for (j = 0; j < len; j += 2)
		int32_t L_111 = V_4;
		int32_t L_112 = ___4_len;
		V_33 = (bool)((((int32_t)L_111) < ((int32_t)L_112))? 1 : 0);
		bool L_113 = V_33;
		if (L_113)
		{
			goto IL_027a;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_114 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_114, 1));
	}

IL_02bb:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_115 = V_3;
		int32_t L_116 = ___4_len;
		V_34 = (bool)((((int32_t)L_115) < ((int32_t)L_116))? 1 : 0);
		bool L_117 = V_34;
		if (L_117)
		{
			goto IL_0274;
		}
	}
	{
		// break;
		goto IL_035a;
	}

IL_02cb:
	{
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_02ee;
	}

IL_02cf:
	{
		// intRes1 |= (boolRes.GetBit(i, i) ? 1 : 0) << i;
		int32_t L_118 = V_6;
		int32_t L_119 = V_3;
		int32_t L_120 = V_3;
		bool L_121;
		L_121 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_119, L_120, NULL);
		G_B80_0 = L_118;
		if (L_121)
		{
			G_B81_0 = L_118;
			goto IL_02e0;
		}
	}
	{
		G_B82_0 = 0;
		G_B82_1 = G_B80_0;
		goto IL_02e1;
	}

IL_02e0:
	{
		G_B82_0 = 1;
		G_B82_1 = G_B81_0;
	}

IL_02e1:
	{
		int32_t L_122 = V_3;
		V_6 = ((int32_t)(G_B82_1|((int32_t)(G_B82_0<<((int32_t)(L_122&((int32_t)31)))))));
		// for (i = 0; i < len; ++i)
		int32_t L_123 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_123, 1));
	}

IL_02ee:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_124 = V_3;
		int32_t L_125 = ___4_len;
		V_35 = (bool)((((int32_t)L_124) < ((int32_t)L_125))? 1 : 0);
		bool L_126 = V_35;
		if (L_126)
		{
			goto IL_02cf;
		}
	}
	{
		// break;
		goto IL_035a;
	}

IL_02fb:
	{
		// intRes1 = allOnes;
		int32_t L_127 = ___6_allOnes;
		V_6 = L_127;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_034d;
	}

IL_0303:
	{
		// int k = i;
		int32_t L_128 = V_3;
		V_36 = L_128;
		// for (j = 0; j < len - i; ++j)
		V_4 = 0;
		goto IL_033a;
	}

IL_030c:
	{
		// if (!boolRes.GetBit(j, k))
		int32_t L_129 = V_4;
		int32_t L_130 = V_36;
		bool L_131;
		L_131 = StrBoolArray_GetBit_mCA50A9F3A3FA5C552305C9B762264A6058F33E78((&V_2), L_129, L_130, NULL);
		V_37 = (bool)((((int32_t)L_131) == ((int32_t)0))? 1 : 0);
		bool L_132 = V_37;
		if (!L_132)
		{
			goto IL_032d;
		}
	}
	{
		// intRes1 &= ~(1 << i);
		int32_t L_133 = V_6;
		int32_t L_134 = V_3;
		V_6 = ((int32_t)(L_133&((~((int32_t)(1<<((int32_t)(L_134&((int32_t)31)))))))));
	}

IL_032d:
	{
		// k += 1;
		int32_t L_135 = V_36;
		V_36 = ((int32_t)il2cpp_codegen_add(L_135, 1));
		// for (j = 0; j < len - i; ++j)
		int32_t L_136 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_136, 1));
	}

IL_033a:
	{
		// for (j = 0; j < len - i; ++j)
		int32_t L_137 = V_4;
		int32_t L_138 = ___4_len;
		int32_t L_139 = V_3;
		V_38 = (bool)((((int32_t)L_137) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_138, L_139))))? 1 : 0);
		bool L_140 = V_38;
		if (L_140)
		{
			goto IL_030c;
		}
	}
	{
		// for (i = 0; i < len; ++i)
		int32_t L_141 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_141, 1));
	}

IL_034d:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_142 = V_3;
		int32_t L_143 = ___4_len;
		V_39 = (bool)((((int32_t)L_142) < ((int32_t)L_143))? 1 : 0);
		bool L_144 = V_39;
		if (L_144)
		{
			goto IL_0303;
		}
	}
	{
		// break;
		goto IL_035a;
	}

IL_035a:
	{
		// intRes2 = 0;
		V_5 = 0;
		// bInvalid = false;
		V_1 = (bool)0;
		// for (i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0401;
	}

IL_0366:
	{
		// if ((imm8 & (1 << 4)) != 0)
		int32_t L_145 = ___5_imm8;
		V_40 = (bool)((!(((uint32_t)((int32_t)(L_145&((int32_t)16)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_146 = V_40;
		if (!L_146)
		{
			goto IL_03ee;
		}
	}
	{
		// if ((imm8 & (1 << 5)) != 0) // only negate valid
		int32_t L_147 = ___5_imm8;
		V_41 = (bool)((!(((uint32_t)((int32_t)(L_147&((int32_t)32)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_148 = V_41;
		if (!L_148)
		{
			goto IL_03dc;
		}
	}
	{
		// if (EqualityComparer<T>.Default.Equals(b[i], default(T)))
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_149;
		L_149 = InvokerFuncInvoker0< EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL);
		Il2CppFullySharedGenericStruct* L_150 = ___2_b;
		int32_t L_151 = V_3;
		uint32_t L_152 = SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77;
		il2cpp_codegen_memcpy(L_153, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_150, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_151), (int32_t)L_152)))), SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_43, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		il2cpp_codegen_memcpy(L_154, V_43, SizeOf_T_t7F8E2A189F579B2C727588D60559F5E6306C2E77);
		NullCheck(L_149);
		bool L_155;
		L_155 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Equals(T,T) */, L_149, L_153, L_154);
		V_42 = L_155;
		bool L_156 = V_42;
		if (!L_156)
		{
			goto IL_03b3;
		}
	}
	{
		// bInvalid = true;
		V_1 = (bool)1;
	}

IL_03b3:
	{
		// if (bInvalid) // invalid, don't negate
		bool L_157 = V_1;
		V_44 = L_157;
		bool L_158 = V_44;
		if (!L_158)
		{
			goto IL_03ca;
		}
	}
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_159 = V_5;
		int32_t L_160 = V_6;
		int32_t L_161 = V_3;
		V_5 = ((int32_t)(L_159|((int32_t)(L_160&((int32_t)(1<<((int32_t)(L_161&((int32_t)31)))))))));
		goto IL_03d9;
	}

IL_03ca:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_162 = V_5;
		int32_t L_163 = V_6;
		int32_t L_164 = V_3;
		V_5 = ((int32_t)(L_162|((int32_t)(((~L_163))&((int32_t)(1<<((int32_t)(L_164&((int32_t)31)))))))));
	}

IL_03d9:
	{
		goto IL_03eb;
	}

IL_03dc:
	{
		// intRes2 |= (~intRes1) & (1 << i);
		int32_t L_165 = V_5;
		int32_t L_166 = V_6;
		int32_t L_167 = V_3;
		V_5 = ((int32_t)(L_165|((int32_t)(((~L_166))&((int32_t)(1<<((int32_t)(L_167&((int32_t)31)))))))));
	}

IL_03eb:
	{
		goto IL_03fc;
	}

IL_03ee:
	{
		// intRes2 |= intRes1 & (1 << i);
		int32_t L_168 = V_5;
		int32_t L_169 = V_6;
		int32_t L_170 = V_3;
		V_5 = ((int32_t)(L_168|((int32_t)(L_169&((int32_t)(1<<((int32_t)(L_170&((int32_t)31)))))))));
	}

IL_03fc:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_171 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_171, 1));
	}

IL_0401:
	{
		// for (i = 0; i < len; ++i)
		int32_t L_172 = V_3;
		int32_t L_173 = ___4_len;
		V_45 = (bool)((((int32_t)L_172) < ((int32_t)L_173))? 1 : 0);
		bool L_174 = V_45;
		if (L_174)
		{
			goto IL_0366;
		}
	}
	{
		// return intRes2;
		int32_t L_175 = V_5;
		V_46 = L_175;
		goto IL_0415;
	}

IL_0415:
	{
		// }
		int32_t L_176 = V_46;
		return L_176;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStringLength<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_ComputeStringLength_TisIl2CppFullySharedGenericStruct_m764CDB4D47CB1C77EAA40D60D44F53C4E97CD8D6_gshared (Il2CppFullySharedGenericStruct* ___0_ptr, int32_t ___1_max, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 4));
	// T
	const Il2CppFullySharedGenericStruct L_4 = alloca(SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	const Il2CppFullySharedGenericStruct L_5 = alloca(SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	int32_t V_0 = 0;
	bool V_1 = false;
	Il2CppFullySharedGenericStruct V_2 = alloca(SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	memset(V_2, 0, SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		// for (int i = 0; i < max; ++i)
		V_0 = 0;
		goto IL_0037;
	}

IL_0005:
	{
		// if (EqualityComparer<T>.Default.Equals(ptr[i], default(T)))
		EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* L_0;
		L_0 = InvokerFuncInvoker0< EqualityComparer_1_t458C8DC3748A89A213F4738B57D3742C4896ABE9* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL);
		Il2CppFullySharedGenericStruct* L_1 = ___0_ptr;
		int32_t L_2 = V_0;
		uint32_t L_3 = SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64;
		il2cpp_codegen_memcpy(L_4, ((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_1, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_2), (int32_t)L_3)))), SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
		il2cpp_codegen_initobj((Il2CppFullySharedGenericStruct*)V_2, SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
		il2cpp_codegen_memcpy(L_5, V_2, SizeOf_T_t2125B686AA2A4D4755B95692CBE3C48B69824C64);
		NullCheck(L_0);
		bool L_6;
		L_6 = VirtualFuncInvoker2Invoker< bool, Il2CppFullySharedGenericStruct, Il2CppFullySharedGenericStruct >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>::Equals(T,T) */, L_0, L_4, L_5);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		// return i;
		int32_t L_8 = V_0;
		V_3 = L_8;
		goto IL_0045;
	}

IL_0032:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0037:
	{
		// for (int i = 0; i < max; ++i)
		int32_t L_10 = V_0;
		int32_t L_11 = ___1_max;
		V_4 = (bool)((((int32_t)L_10) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_4;
		if (L_12)
		{
			goto IL_0005;
		}
	}
	{
		// return max;
		int32_t L_13 = ___1_max;
		V_3 = L_13;
		goto IL_0045;
	}

IL_0045:
	{
		// }
		int32_t L_14 = V_3;
		return L_14;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::ComputeStrmOutput<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Int32,System.Int32,T,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_ComputeStrmOutput_TisIl2CppFullySharedGenericStruct_m64ADE71FB4B90FEC60799387186E249935DE041C_gshared (int32_t ___0_len, int32_t ___1_imm8, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___2_allOnesT, int32_t ___3_intRes2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	// T
	const Il2CppFullySharedGenericStruct L_9 = alloca(SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Il2CppFullySharedGenericStruct* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_6;
	memset((&V_6), 0, sizeof(V_6));
	{
		// v128 result = default;
		il2cpp_codegen_initobj((&V_0), sizeof(v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61));
		// if ((imm8 & (1 << 6)) != 0)
		int32_t L_0 = ___1_imm8;
		V_1 = (bool)((!(((uint32_t)((int32_t)(L_0&((int32_t)64)))) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_006e;
		}
	}
	{
		// T* maskDst = (T*)&result.Byte0;
		uint8_t* L_2 = (uint8_t*)(&(&V_0)->___Byte0_0);
		V_2 = (Il2CppFullySharedGenericStruct*)((uintptr_t)L_2);
		// for (int i = 0; i < len; ++i)
		V_3 = 0;
		goto IL_0061;
	}

IL_0022:
	{
		// if ((intRes2 & (1 << i)) != 0)
		int32_t L_3 = ___3_intRes2;
		int32_t L_4 = V_3;
		V_4 = (bool)((!(((uint32_t)((int32_t)(L_3&((int32_t)(1<<((int32_t)(L_4&((int32_t)31)))))))) <= ((uint32_t)0)))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		// maskDst[i] = allOnesT;
		Il2CppFullySharedGenericStruct* L_6 = V_2;
		int32_t L_7 = V_3;
		uint32_t L_8 = SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B;
		il2cpp_codegen_memcpy(L_9, ___2_allOnesT, SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))), L_9, SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericStruct*)((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_6, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_7), (int32_t)L_8)))), (void*)L_9);
		goto IL_005c;
	}

IL_0049:
	{
		// maskDst[i] = default(T);
		Il2CppFullySharedGenericStruct* L_10 = V_2;
		int32_t L_11 = V_3;
		uint32_t L_12 = SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B;
		il2cpp_codegen_initobj(((Il2CppFullySharedGenericStruct*)il2cpp_codegen_add((intptr_t)L_10, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_11), (int32_t)L_12)))), SizeOf_T_t4AB7E7218B07206B6D97D6E91CAC0F37510C246B);
	}

IL_005c:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_13 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0061:
	{
		// for (int i = 0; i < len; ++i)
		int32_t L_14 = V_3;
		int32_t L_15 = ___0_len;
		V_5 = (bool)((((int32_t)L_14) < ((int32_t)L_15))? 1 : 0);
		bool L_16 = V_5;
		if (L_16)
		{
			goto IL_0022;
		}
	}
	{
		goto IL_0078;
	}

IL_006e:
	{
		// result.SInt0 = intRes2;
		int32_t L_17 = ___3_intRes2;
		(&V_0)->___SInt0_52 = L_17;
	}

IL_0078:
	{
		// return result;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_18 = V_0;
		V_6 = L_18;
		goto IL_007d;
	}

IL_007d:
	{
		// }
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_19 = V_6;
		return L_19;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestri_emulation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpestri_emulation_TisIl2CppFullySharedGenericStruct_m92A1CC07F00E8D1EFF164A7AAA2CEF3A90BC8071_gshared (Il2CppFullySharedGenericStruct* ___0_a, int32_t ___1_alen, Il2CppFullySharedGenericStruct* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		Il2CppFullySharedGenericStruct* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = InvokerFuncInvoker7< int32_t, Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1, L_2, L_3, L_4, L_5, L_6);
		V_0 = L_7;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		int32_t L_10 = V_0;
		int32_t L_11;
		L_11 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_8, L_9, L_10, NULL);
		V_1 = L_11;
		goto IL_001e;
	}

IL_001e:
	{
		// }
		int32_t L_12 = V_1;
		return L_12;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpestrm_emulation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T*,System.Int32,T*,System.Int32,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpestrm_emulation_TisIl2CppFullySharedGenericStruct_m81548202F0BF107992042F154D34BCB0C7366524_gshared (Il2CppFullySharedGenericStruct* ___0_a, int32_t ___1_alen, Il2CppFullySharedGenericStruct* ___2_b, int32_t ___3_blen, int32_t ___4_len, int32_t ___5_imm8, int32_t ___6_allOnes, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___7_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 2));
	// T
	const Il2CppFullySharedGenericStruct L_10 = alloca(SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC);
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, alen, b, blen, len, imm8, allOnes);
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		int32_t L_1 = ___1_alen;
		Il2CppFullySharedGenericStruct* L_2 = ___2_b;
		int32_t L_3 = ___3_blen;
		int32_t L_4 = ___4_len;
		int32_t L_5 = ___5_imm8;
		int32_t L_6 = ___6_allOnes;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_7;
		L_7 = InvokerFuncInvoker7< int32_t, Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0, L_1, L_2, L_3, L_4, L_5, L_6);
		V_0 = L_7;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_8 = ___4_len;
		int32_t L_9 = ___5_imm8;
		il2cpp_codegen_memcpy(L_10, ___7_allOnesT, SizeOf_T_t42FC5CD236BFE90D4A941BFCE621367A7EA03BDC);
		int32_t L_11 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_12;
		L_12 = InvokerFuncInvoker4< v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61, int32_t, int32_t, Il2CppFullySharedGenericStruct, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_8, L_9, L_10, L_11);
		V_1 = L_12;
		goto IL_0020;
	}

IL_0020:
	{
		// }
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_13 = V_1;
		return L_13;
	}
}
// System.Int32 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistri_emulation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Sse4_2_cmpistri_emulation_TisIl2CppFullySharedGenericStruct_m0723D40FF7E3DA850D8AF6948CB6C949F855583D_gshared (Il2CppFullySharedGenericStruct* ___0_a, Il2CppFullySharedGenericStruct* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		Il2CppFullySharedGenericStruct* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_1, L_2);
		Il2CppFullySharedGenericStruct* L_4 = ___1_b;
		Il2CppFullySharedGenericStruct* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_5, L_6);
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = InvokerFuncInvoker7< int32_t, Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, L_3, L_4, L_7, L_8, L_9, L_10);
		V_0 = L_11;
		// return ComputeStriOutput(len, imm8, intRes2);
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		int32_t L_14 = V_0;
		int32_t L_15;
		L_15 = Sse4_2_ComputeStriOutput_mC9EFEB2A2B9B95760CEE913DF4EF7F57BE662123(L_12, L_13, L_14, NULL);
		V_1 = L_15;
		goto IL_0026;
	}

IL_0026:
	{
		// }
		int32_t L_16 = V_1;
		return L_16;
	}
}
// Unity.Burst.Intrinsics.v128 Unity.Burst.Intrinsics.X86/Sse4_2::cmpistrm_emulation<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T*,T*,System.Int32,System.Int32,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 Sse4_2_cmpistrm_emulation_TisIl2CppFullySharedGenericStruct_m16F77547DC1C2BE0F6959A4B639E1210EF674C66_gshared (Il2CppFullySharedGenericStruct* ___0_a, Il2CppFullySharedGenericStruct* ___1_b, int32_t ___2_len, int32_t ___3_imm8, int32_t ___4_allOnes, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType*/Il2CppFullySharedGenericStruct ___5_allOnesT, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	// sizeof(T)
	const uint32_t SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13 = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 3));
	// T
	const Il2CppFullySharedGenericStruct L_14 = alloca(SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13);
	int32_t V_0 = 0;
	v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// int intRes2 = ComputeStrCmpIntRes2<T>(a, ComputeStringLength<T>(a, len), b, ComputeStringLength<T>(b, len), len, imm8, allOnes);
		Il2CppFullySharedGenericStruct* L_0 = ___0_a;
		Il2CppFullySharedGenericStruct* L_1 = ___0_a;
		int32_t L_2 = ___2_len;
		il2cpp_codegen_runtime_class_init_inline(Sse4_2_t40477411E6B6B2D01F3B0EA9D1B0A6281833C37C_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_1, L_2);
		Il2CppFullySharedGenericStruct* L_4 = ___1_b;
		Il2CppFullySharedGenericStruct* L_5 = ___1_b;
		int32_t L_6 = ___2_len;
		int32_t L_7;
		L_7 = InvokerFuncInvoker2< int32_t, Il2CppFullySharedGenericStruct*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_5, L_6);
		int32_t L_8 = ___2_len;
		int32_t L_9 = ___3_imm8;
		int32_t L_10 = ___4_allOnes;
		int32_t L_11;
		L_11 = InvokerFuncInvoker7< int32_t, Il2CppFullySharedGenericStruct*, int32_t, Il2CppFullySharedGenericStruct*, int32_t, int32_t, int32_t, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, L_3, L_4, L_7, L_8, L_9, L_10);
		V_0 = L_11;
		// return ComputeStrmOutput(len, imm8, allOnesT, intRes2);
		int32_t L_12 = ___2_len;
		int32_t L_13 = ___3_imm8;
		il2cpp_codegen_memcpy(L_14, ___5_allOnesT, SizeOf_T_tC319464E6946647CC7BFD95709030A0B11A82E13);
		int32_t L_15 = V_0;
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_16;
		L_16 = InvokerFuncInvoker4< v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61, int32_t, int32_t, Il2CppFullySharedGenericStruct, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), NULL, L_12, L_13, L_14, L_15);
		V_1 = L_16;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		v128_t9D2F2BF6DCFF1D82BF38064CF157489E1E680B61 L_17 = V_1;
		return L_17;
	}
}
// System.Void Unity.Collections.xxHash3/StreamingState::Update<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D_gshared (StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___0_input, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		// Update(UnsafeUtilityExtensions.AddressOf(input), UnsafeUtility.SizeOf<T>());
		Il2CppFullySharedGenericStruct* L_0 = ___0_input;
		void* L_1;
		L_1 = InvokerFuncInvoker1< void*, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_0);
		int32_t L_2;
		L_2 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL);
		StreamingState_Update_mD0C172FBC9AB99BC72DF8CC3665ABB61658AB9E5(__this, L_1, L_2, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D_AdjustorThunk (RuntimeObject* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___0_input, const RuntimeMethod* method)
{
	StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<StreamingState_t407BC6BBA6752E76D2075153BF945841B2D06020*>(__this + _offset);
	StreamingState_Update_TisIl2CppFullySharedGenericStruct_m301FBB6A80BBA46BB5AC2B0DF206CAB72593DE1D(_thisAdjusted, ___0_input, method);
}
// T* Unity.Collections.Memory/Unmanaged/Array::Allocate<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Array_Allocate_TisIl2CppFullySharedGenericStruct_m472C3AE183E3C768741B28481DD1F012013B13A6_gshared (int64_t ___0_count, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	{
		// return Resize<T>(null, 0, count, allocator);
		int64_t L_0 = ___0_count;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_1 = ___1_allocator;
		Il2CppFullySharedGenericStruct* L_2;
		L_2 = InvokerFuncInvoker4< Il2CppFullySharedGenericStruct*, Il2CppFullySharedGenericStruct*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)), il2cpp_rgctx_method(method->rgctx_data, 0), NULL, (Il2CppFullySharedGenericStruct*)((uintptr_t)0), ((int64_t)0), L_0, L_1);
		V_0 = L_2;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		Il2CppFullySharedGenericStruct* L_3 = V_0;
		return L_3;
	}
}
// System.Void Unity.Collections.Memory/Unmanaged/Array::Free<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T*,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Free_TisIl2CppFullySharedGenericStruct_m6AA7597FA98F8020ABEFACEA0A1D00A384716627_gshared (Il2CppFullySharedGenericStruct* ___0_pointer, int64_t ___1_count, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	bool V_0 = false;
	{
		// if (pointer == null)
		Il2CppFullySharedGenericStruct* L_0 = ___0_pointer;
		V_0 = (bool)((((intptr_t)L_0) == ((intptr_t)((uintptr_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		// return;
		goto IL_0017;
	}

IL_000c:
	{
		// Resize(pointer, count, 0, allocator);
		Il2CppFullySharedGenericStruct* L_2 = ___0_pointer;
		int64_t L_3 = ___1_count;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_4 = ___2_allocator;
		Il2CppFullySharedGenericStruct* L_5;
		L_5 = InvokerFuncInvoker4< Il2CppFullySharedGenericStruct*, Il2CppFullySharedGenericStruct*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL, L_2, L_3, ((int64_t)0), L_4);
	}

IL_0017:
	{
		// }
		return;
	}
}
// T* Unity.Collections.Memory/Unmanaged/Array::Resize<Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType>(T*,System.Int64,System.Int64,Unity.Collections.AllocatorManager/AllocatorHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Array_Resize_TisIl2CppFullySharedGenericStruct_m07039200651D43DBB7FBC0CB244761DA34C164FD_gshared (Il2CppFullySharedGenericStruct* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	Il2CppFullySharedGenericStruct* V_0 = NULL;
	{
		// return (T*)Resize((byte*)oldPointer, oldCount, newCount, allocator, UnsafeUtility.SizeOf<T>(), UnsafeUtility.AlignOf<T>());
		Il2CppFullySharedGenericStruct* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), NULL);
		int32_t L_5;
		L_5 = InvokerFuncInvoker0< int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL);
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		V_0 = (Il2CppFullySharedGenericStruct*)L_6;
		goto IL_0018;
	}

IL_0018:
	{
		// }
		Il2CppFullySharedGenericStruct* L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, int32_t ___0_bytes, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (Handle->InBitwiseContext)
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		bool L_1 = L_0->___InBitwiseContext_8;
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// throw new InvalidOperationException(
		//     "Cannot use BufferWriter in bytewise mode while in a bitwise context.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFF9A35089103E5784EF02A898717C81941E4D1A8)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferWriter_TryBeginWrite_m16FA0A52579A7C6C5E59171D26EA327CDEBFF459_RuntimeMethod_var)));
	}

IL_001c:
	{
		// if (Handle->Position + bytes > Handle->Capacity)
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_4 = __this->___Handle_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___Position_1;
		int32_t L_6 = ___0_bytes;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_7 = __this->___Handle_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___Capacity_3;
		V_1 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_5, L_6))) > ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_008e;
		}
	}
	{
		// if (Handle->Position + bytes > Handle->MaxCapacity)
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_10 = __this->___Handle_0;
		NullCheck(L_10);
		int32_t L_11 = L_10->___Position_1;
		int32_t L_12 = ___0_bytes;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_13 = __this->___Handle_0;
		NullCheck(L_13);
		int32_t L_14 = L_13->___MaxCapacity_4;
		V_2 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_11, L_12))) > ((int32_t)L_14))? 1 : 0);
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_005e;
		}
	}
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00aa;
	}

IL_005e:
	{
		// if (Handle->Capacity < Handle->MaxCapacity)
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_16 = __this->___Handle_0;
		NullCheck(L_16);
		int32_t L_17 = L_16->___Capacity_3;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_18 = __this->___Handle_0;
		NullCheck(L_18);
		int32_t L_19 = L_18->___MaxCapacity_4;
		V_4 = (bool)((((int32_t)L_17) < ((int32_t)L_19))? 1 : 0);
		bool L_20 = V_4;
		if (!L_20)
		{
			goto IL_0088;
		}
	}
	{
		// Grow(bytes);
		int32_t L_21 = ___0_bytes;
		FastBufferWriter_Grow_mAD43637D60A44A3D7DCEB09D0425822F6C2A23FB(__this, L_21, NULL);
		goto IL_008d;
	}

IL_0088:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00aa;
	}

IL_008d:
	{
	}

IL_008e:
	{
		// Handle->AllowedWriteMark = Handle->Position + bytes;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_22 = __this->___Handle_0;
		WriterHandle_tBDBA7A52860089574884E6269EF80A4ABDA26BE6* L_23 = __this->___Handle_0;
		NullCheck(L_23);
		int32_t L_24 = L_23->___Position_1;
		int32_t L_25 = ___0_bytes;
		NullCheck(L_22);
		L_22->___AllowedWriteMark_7 = ((int32_t)il2cpp_codegen_add(L_24, L_25));
		// return true;
		V_3 = (bool)1;
		goto IL_00aa;
	}

IL_00aa:
	{
		// }
		bool L_26 = V_3;
		return L_26;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FastBufferReader_TryBeginRead_mDCCE31EA62FDF16BF16B1ED58CF3330944ED4900_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, int32_t ___0_bytes, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (Handle->InBitwiseContext)
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_0 = __this->___Handle_0;
		NullCheck(L_0);
		bool L_1 = L_0->___InBitwiseContext_5;
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// throw new InvalidOperationException(
		//     "Cannot use BufferReader in bytewise mode while in a bitwise context.");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral652DA0C7786060CFEE6F2BAD09E443DB730D34FD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&FastBufferReader_TryBeginRead_mDCCE31EA62FDF16BF16B1ED58CF3330944ED4900_RuntimeMethod_var)));
	}

IL_001c:
	{
		// if (Handle->Position + bytes > Handle->Length)
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_4 = __this->___Handle_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->___Position_1;
		int32_t L_6 = ___0_bytes;
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_7 = __this->___Handle_0;
		NullCheck(L_7);
		int32_t L_8 = L_7->___Length_2;
		V_1 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add(L_5, L_6))) > ((int32_t)L_8))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_003f;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_005b;
	}

IL_003f:
	{
		// Handle->AllowedReadMark = Handle->Position + bytes;
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_10 = __this->___Handle_0;
		ReaderHandle_t7A818FF1A9ACF79E6D6322AFF494B9FB12C48CC8* L_11 = __this->___Handle_0;
		NullCheck(L_11);
		int32_t L_12 = L_11->___Position_1;
		int32_t L_13 = ___0_bytes;
		NullCheck(L_10);
		L_10->___AllowedReadMark_4 = ((int32_t)il2cpp_codegen_add(L_12, L_13));
		// return true;
		V_2 = (bool)1;
		goto IL_005b;
	}

IL_005b:
	{
		// }
		bool L_14 = V_2;
		return L_14;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FastBufferWriter_GetWriteSize_TisIl2CppFullySharedGenericStruct_m2139D4ADD3A98DE64C0D2D519EBD32826B36D24A_gshared_inline (/*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___0_value, ForStructs_t415180F4B3263FD619114E5DAAC9C3030BEBB83D ___1_unused, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	// sizeof(T)
	const uint32_t SizeOf_T_t6BC593F209C278653DEC0F3E6D1B0A8B4BEEA28A = il2cpp_codegen_sizeof(il2cpp_rgctx_data(method->rgctx_data, 0));
	int32_t V_0 = 0;
	{
		// return sizeof(T);
		uint32_t L_0 = SizeOf_T_t6BC593F209C278653DEC0F3E6D1B0A8B4BEEA28A;
		V_0 = (int32_t)L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferWriter_WriteValue_TisIl2CppFullySharedGenericStruct_m576FF3C4FCD70A41F8A902F9BF4CAE68AC93243F_gshared_inline (FastBufferWriter_tE6AFE9436BD125AF309056A81B70F95625FB96EC* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		// public void WriteValue<T>(in T value, ForPrimitives unused = default) where T : unmanaged, IComparable, IConvertible, IComparable<T>, IEquatable<T> => WriteUnmanaged(value);
		Il2CppFullySharedGenericStruct* L_0 = ___0_value;
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FastBufferReader_ReadValue_TisIl2CppFullySharedGenericStruct_m07EEBDC9EC3FD07C301FFBC05F5F012B1A3F6435_gshared_inline (FastBufferReader_t1FA49C2063B2EAAADB8DE7FF571FF284719D0E99* __this, /*Unity.IL2CPP.Metadata.__Il2CppFullySharedGenericStructType&*/Il2CppFullySharedGenericStruct* ___0_value, ForPrimitives_t4120884959A3BC3EAC3D4980A4DA8010E09DA292 ___1_unused, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		// public void ReadValue<T>(out T value, FastBufferWriter.ForPrimitives unused = default) where T : unmanaged, IComparable, IConvertible, IComparable<T>, IEquatable<T> => ReadUnmanaged(out value);
		Il2CppFullySharedGenericStruct* L_0 = ___0_value;
		InvokerActionInvoker1< Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)), il2cpp_rgctx_method(method->rgctx_data, 1), __this, L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t DynamicArray_1_get_size_m128222BE63C9931B08CD38DF32B858CD1CD4926D_gshared_inline (DynamicArray_1_tFD6392EE4EAA442D167A921C9964FD9C17FDCDE0* __this, const RuntimeMethod* method) 
{
	{
		// public int size { get; private set; }
		int32_t L_0 = (int32_t)__this->___U3CsizeU3Ek__BackingField_1;
		return L_0;
	}
}
