﻿#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void Microsoft.CodeAnalysis.EmbeddedAttribute::.ctor()
extern void EmbeddedAttribute__ctor_mBE4821E7A76BDB478C0DE0388B54D77EF020B536 (void);
// 0x00000002 System.Void System.Runtime.CompilerServices.IsReadOnlyAttribute::.ctor()
extern void IsReadOnlyAttribute__ctor_m21F7AB503DC196A20A50CADA5CBE654735E60EFC (void);
// 0x00000003 System.Void* Unity.Collections.LowLevel.Unsafe.ILSupport::AddressOf(T&)
// 0x00000004 T& Unity.Collections.LowLevel.Unsafe.ILSupport::AsRef(T&)
static Il2CppMethodPointer s_methodPointers[4] = 
{
	EmbeddedAttribute__ctor_mBE4821E7A76BDB478C0DE0388B54D77EF020B536,
	IsReadOnlyAttribute__ctor_m21F7AB503DC196A20A50CADA5CBE654735E60EFC,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[4] = 
{
	3840,
	3840,
	0,
	0,
};
static const Il2CppTokenRangePair s_rgctxIndices[2] = 
{
	{ 0x06000003, { 0, 1 } },
	{ 0x06000004, { 1, 1 } },
};
extern const uint32_t g_rgctx_TU26_t81D2AD553E963FAF8292CE458EABC39F2E248307;
extern const uint32_t g_rgctx_TU26_t0A0F9E5BDE8E7598AF00903A15E266DCF04E9678;
static const Il2CppRGCTXDefinition s_rgctxValues[2] = 
{
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TU26_t81D2AD553E963FAF8292CE458EABC39F2E248307 },
	{ (Il2CppRGCTXDataType)2, (const void *)&g_rgctx_TU26_t0A0F9E5BDE8E7598AF00903A15E266DCF04E9678 },
};
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_Unity_Collections_LowLevel_ILSupport_CodeGenModule;
const Il2CppCodeGenModule g_Unity_Collections_LowLevel_ILSupport_CodeGenModule = 
{
	"Unity.Collections.LowLevel.ILSupport.dll",
	4,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	2,
	s_rgctxIndices,
	2,
	s_rgctxValues,
	NULL,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
