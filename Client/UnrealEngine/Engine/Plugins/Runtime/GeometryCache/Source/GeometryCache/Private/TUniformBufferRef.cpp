// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 1

// CreateUniformBufferImmediate @ 14ca117f0

TUniformBufferRef<FGeometryCacheVertexFactoryUniformBufferParameters> __cdecl
TUniformBufferRef<FGeometryCacheVertexFactoryUniformBufferParameters>::CreateUniformBufferImmediate
          (FGeometryCacheVertexFactoryUniformBufferParameters *param_1,EUniformBufferUsage param_2,
          EUniformBufferValidation param_3)

{
  FRHIUniformBufferLayout *pFVar1;
  code *pcVar2;
  FRHIResource *pFVar3;
  bool bVar4;
  FShaderParametersMetadata *pFVar5;
  TUniformBufferRef<FGeometryCacheVertexFactoryUniformBufferParameters> TVar6;
  undefined4 in_register_00000014;
  undefined4 in_R9D;
  FLLMScope local_res8 [2];
  FRHIResource *local_28;
  FMemScope local_20;
  
  pFVar5 = FGeometryCacheVertexFactoryUniformBufferParameters::GetStructMetadata();
  if (((pFVar5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    TVar6 = (TUniformBufferRef<FGeometryCacheVertexFactoryUniformBufferParameters>)(*pcVar2)();
    return TVar6;
  }
  pFVar1 = (pFVar5->Layout).Reference;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `class_TRefCountPtr<FRHIUniformBuffer>___cdecl_RHICreateUniformBuffer(void_const*___ptr64,FRHIUniformBufferLayout_const*___ptr64,EUniformBufferUsage,EUniformBufferValidation)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`class_TRefCountPtr<FRHIUniformBuffer>___cdecl_RHICreateUniformBuffer(void_const*___ptr64,FRHIUniformBufferLayout_const*___ptr64,EUniformBufferUsage,EUniformBufferValidation)'
                           ::__l2::_thread_safe_static_guard_0__),
     `class_TRefCountPtr<FRHIUniformBuffer>___cdecl_RHICreateUniformBuffer(void_const*___ptr64,FRHIUniformBufferLayout_const*___ptr64,EUniformBufferUsage,EUniformBufferValidation)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    ::FName::FName(&`class_TRefCountPtr<FRHIUniformBuffer>___cdecl_RHICreateUniformBuffer(void_const*___ptr64,FRHIUniformBufferLayout_const*___ptr64,EUniformBufferUsage,EUniformBufferValidation)'
                    ::__l2::LLMScope_Name1233,L"RHIMisc/CreateUniformBuffer");
    _Init_thread_footer(&`class_TRefCountPtr<FRHIUniformBuffer>___cdecl_RHICreateUniformBuffer(void_const*___ptr64,FRHIUniformBufferLayout_const*___ptr64,EUniformBufferUsage,EUniformBufferValidation)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  FLLMScope::FLLMScope
            (local_res8,
             `class_TRefCountPtr<FRHIUniformBuffer>___cdecl_RHICreateUniformBuffer(void_const*___ptr64,FRHIUniformBufferLayout_const*___ptr64,EUniformBufferUsage,EUniformBufferValidation)'
             ::__l2::LLMScope_Name1233,false,None,Default,true);
  FMemScope::FMemScope
            (&local_20,
             &`class_TRefCountPtr<FRHIUniformBuffer>___cdecl_RHICreateUniformBuffer(void_const*___ptr64,FRHIUniformBufferLayout_const*___ptr64,EUniformBufferUsage,EUniformBufferValidation)'
              ::__l2::LLMScope_Name1233,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x128))
            (GDynamicRHI,&local_28,CONCAT44(in_register_00000014,param_2),pFVar1,param_3,in_R9D);
  FMemScope::~FMemScope(&local_20);
  FLLMScope::~FLLMScope(local_res8);
  pFVar3 = local_28;
  *(FRHIResource **)&(param_1->MeshOrigin).field0_0x0 = local_28;
  if (local_28 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(local_28);
    pFVar5 = FGeometryCacheVertexFactoryUniformBufferParameters::GetStructMetadata();
    if (((pFVar5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      TVar6 = (TUniformBufferRef<FGeometryCacheVertexFactoryUniformBufferParameters>)(*pcVar2)();
      return TVar6;
    }
    if ((FName)(pFVar5->Layout).Reference != pFVar3[2].OwnerName) {
      pFVar5 = FGeometryCacheVertexFactoryUniformBufferParameters::GetStructMetadata();
      if (((pFVar5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x177,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        TVar6 = (TUniformBufferRef<FGeometryCacheVertexFactoryUniformBufferParameters>)(*pcVar2)();
        return TVar6;
      }
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                         ,0x96,
                         L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        TVar6 = (TUniformBufferRef<FGeometryCacheVertexFactoryUniformBufferParameters>)(*pcVar2)();
        return TVar6;
      }
    }
    if (local_28 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_28);
    }
  }
  return (TUniformBufferRef<FGeometryCacheVertexFactoryUniformBufferParameters>)param_1;
}

