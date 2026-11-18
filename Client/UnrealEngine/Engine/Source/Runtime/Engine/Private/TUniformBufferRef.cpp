// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// CreateUniformBufferImmediate @ 147b4f400

TUniformBufferRef<FPrimitiveUniformShaderParameters> __cdecl
TUniformBufferRef<FPrimitiveUniformShaderParameters>::CreateUniformBufferImmediate
          (FPrimitiveUniformShaderParameters *param_1,EUniformBufferUsage param_2,
          EUniformBufferValidation param_3)

{
  FRHIUniformBufferLayout *pFVar1;
  code *pcVar2;
  FRHIResource *pFVar3;
  bool bVar4;
  FShaderParametersMetadata *pFVar5;
  TUniformBufferRef<FPrimitiveUniformShaderParameters> TVar6;
  undefined4 in_register_00000014;
  undefined4 in_R9D;
  FLLMScope local_res8 [2];
  FRHIResource *local_28;
  FMemScope local_20;
  
  pFVar5 = FPrimitiveUniformShaderParameters::GetStructMetadata();
  if (((pFVar5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    TVar6 = (TUniformBufferRef<FPrimitiveUniformShaderParameters>)(*pcVar2)();
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
  *(FRHIResource **)param_1 = local_28;
  if (local_28 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(local_28);
    pFVar5 = FPrimitiveUniformShaderParameters::GetStructMetadata();
    if (((pFVar5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      TVar6 = (TUniformBufferRef<FPrimitiveUniformShaderParameters>)(*pcVar2)();
      return TVar6;
    }
    if ((FName)(pFVar5->Layout).Reference != pFVar3[2].OwnerName) {
      pFVar5 = FPrimitiveUniformShaderParameters::GetStructMetadata();
      if (((pFVar5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x177,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        TVar6 = (TUniformBufferRef<FPrimitiveUniformShaderParameters>)(*pcVar2)();
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
        TVar6 = (TUniformBufferRef<FPrimitiveUniformShaderParameters>)(*pcVar2)();
        return TVar6;
      }
    }
    if (local_28 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_28);
    }
  }
  return (TUniformBufferRef<FPrimitiveUniformShaderParameters>)param_1;
}

// CreateUniformBufferImmediate @ 148106790

TUniformBufferRef<FVectorFieldUniformParameters> __cdecl
TUniformBufferRef<FVectorFieldUniformParameters>::CreateUniformBufferImmediate
          (FVectorFieldUniformParameters *param_1,EUniformBufferUsage param_2,
          EUniformBufferValidation param_3)

{
  FRHIResource *this;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TUniformBufferRef<FVectorFieldUniformParameters> TVar4;
  TRefCountPtr<FRHIUniformBuffer> TVar5;
  undefined4 in_register_00000014;
  FRHIResource *local_res8;
  
  pFVar3 = FVectorFieldUniformParameters::GetStructMetadata();
  if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar4 = (TUniformBufferRef<FVectorFieldUniformParameters>)(*pcVar1)();
    return TVar4;
  }
  TVar5 = RHICreateUniformBuffer
                    (&local_res8,(FRHIUniformBufferLayout *)CONCAT44(in_register_00000014,param_2),
                     (EUniformBufferUsage)(pFVar3->Layout).Reference,param_3);
  this = (FRHIResource *)(TVar5.Reference)->_padding_;
  *(FRHIResource **)param_1 = this;
  if (this != (FRHIResource *)0x0) {
    FRHIResource::AddRef(this);
    pFVar3 = FVectorFieldUniformParameters::GetStructMetadata();
    if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      TVar4 = (TUniformBufferRef<FVectorFieldUniformParameters>)(*pcVar1)();
      return TVar4;
    }
    if ((FName)(pFVar3->Layout).Reference != this[2].OwnerName) {
      pFVar3 = FVectorFieldUniformParameters::GetStructMetadata();
      if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x177,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        TVar4 = (TUniformBufferRef<FVectorFieldUniformParameters>)(*pcVar1)();
        return TVar4;
      }
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                         ,0x96,
                         L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        TVar4 = (TUniformBufferRef<FVectorFieldUniformParameters>)(*pcVar1)();
        return TVar4;
      }
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return (TUniformBufferRef<FVectorFieldUniformParameters>)param_1;
}

// CreateUniformBufferImmediate @ 14816e6f0

TUniformBufferRef<FParticleKeyGenParameters> __cdecl
TUniformBufferRef<FParticleKeyGenParameters>::CreateUniformBufferImmediate
          (FParticleKeyGenParameters *param_1,EUniformBufferUsage param_2,
          EUniformBufferValidation param_3)

{
  FRHIUniformBufferLayout *pFVar1;
  code *pcVar2;
  FRHIResource *pFVar3;
  bool bVar4;
  FShaderParametersMetadata *pFVar5;
  TUniformBufferRef<FParticleKeyGenParameters> TVar6;
  undefined4 in_register_00000014;
  undefined4 in_R9D;
  FLLMScope local_res8 [2];
  FRHIResource *local_28;
  FMemScope local_20;
  
  pFVar5 = FParticleKeyGenParameters::GetStructMetadata();
  if (((pFVar5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar4)) {
    pcVar2 = (code *)swi(3);
    TVar6 = (TUniformBufferRef<FParticleKeyGenParameters>)(*pcVar2)();
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
  *(FRHIResource **)&(param_1->ViewOrigin).field0_0x0 = local_28;
  if (local_28 != (FRHIResource *)0x0) {
    FRHIResource::AddRef(local_28);
    pFVar5 = FParticleKeyGenParameters::GetStructMetadata();
    if (((pFVar5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      TVar6 = (TUniformBufferRef<FParticleKeyGenParameters>)(*pcVar2)();
      return TVar6;
    }
    if ((FName)(pFVar5->Layout).Reference != pFVar3[2].OwnerName) {
      pFVar5 = FParticleKeyGenParameters::GetStructMetadata();
      if (((pFVar5->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x177,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        TVar6 = (TUniformBufferRef<FParticleKeyGenParameters>)(*pcVar2)();
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
        TVar6 = (TUniformBufferRef<FParticleKeyGenParameters>)(*pcVar2)();
        return TVar6;
      }
    }
    if (local_28 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_28);
    }
  }
  return (TUniformBufferRef<FParticleKeyGenParameters>)param_1;
}

// TUniformBufferRef<FPrimitiveUniformShaderParameters> @ 1483e0b90

TUniformBufferRef<FPrimitiveUniformShaderParameters> * __thiscall
TUniformBufferRef<FPrimitiveUniformShaderParameters>::
TUniformBufferRef<FPrimitiveUniformShaderParameters>
          (TUniformBufferRef<FPrimitiveUniformShaderParameters> *this,FRHIUniformBuffer *param_1)

{
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TUniformBufferRef<FPrimitiveUniformShaderParameters> *pTVar4;
  
  *this = (TUniformBufferRef<FPrimitiveUniformShaderParameters>)param_1;
  if (param_1 == (FRHIUniformBuffer *)0x0) {
    return this;
  }
  FRHIResource::AddRef((FRHIResource *)param_1);
  pFVar3 = FPrimitiveUniformShaderParameters::GetStructMetadata();
  if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TUniformBufferRef<FPrimitiveUniformShaderParameters> *)(*pcVar1)();
    return pTVar4;
  }
  if ((pFVar3->Layout).Reference != (param_1->Layout).Reference) {
    pFVar3 = FPrimitiveUniformShaderParameters::GetStructMetadata();
    if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x177,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TUniformBufferRef<FPrimitiveUniformShaderParameters> *)(*pcVar1)();
      return pTVar4;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                       ,0x96,
                       L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TUniformBufferRef<FPrimitiveUniformShaderParameters> *)(*pcVar1)();
      return pTVar4;
    }
  }
  return this;
}

