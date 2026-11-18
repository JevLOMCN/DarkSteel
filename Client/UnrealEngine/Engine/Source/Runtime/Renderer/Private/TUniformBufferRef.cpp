// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 10

// CreateUniformBufferImmediate @ 14480c940

TUniformBufferRef<FReflectionCaptureShaderData> __cdecl
TUniformBufferRef<FReflectionCaptureShaderData>::CreateUniformBufferImmediate
          (FReflectionCaptureShaderData *param_1,EUniformBufferUsage param_2,
          EUniformBufferValidation param_3)

{
  FRHIResource *this;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TUniformBufferRef<FReflectionCaptureShaderData> TVar4;
  TRefCountPtr<FRHIUniformBuffer> TVar5;
  undefined4 in_register_00000014;
  FRHIResource *local_res8;
  
  pFVar3 = FReflectionCaptureShaderData::GetStructMetadata();
  if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar4 = (TUniformBufferRef<FReflectionCaptureShaderData>)(*pcVar1)();
    return TVar4;
  }
  TVar5 = RHICreateUniformBuffer
                    (&local_res8,(FRHIUniformBufferLayout *)CONCAT44(in_register_00000014,param_2),
                     (EUniformBufferUsage)(pFVar3->Layout).Reference,param_3);
  this = (FRHIResource *)(TVar5.Reference)->_padding_;
  *(FRHIResource **)&(param_1->PositionHighAndRadius).Elements[0].field0_0x0 = this;
  if (this != (FRHIResource *)0x0) {
    FRHIResource::AddRef(this);
    pFVar3 = FReflectionCaptureShaderData::GetStructMetadata();
    if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      TVar4 = (TUniformBufferRef<FReflectionCaptureShaderData>)(*pcVar1)();
      return TVar4;
    }
    if ((FName)(pFVar3->Layout).Reference != this[2].OwnerName) {
      pFVar3 = FReflectionCaptureShaderData::GetStructMetadata();
      if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x177,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        TVar4 = (TUniformBufferRef<FReflectionCaptureShaderData>)(*pcVar1)();
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
        TVar4 = (TUniformBufferRef<FReflectionCaptureShaderData>)(*pcVar1)();
        return TVar4;
      }
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return (TUniformBufferRef<FReflectionCaptureShaderData>)param_1;
}

// CreateUniformBufferImmediate @ 1449cbc10

TUniformBufferRef<FViewUniformShaderParameters> __cdecl
TUniformBufferRef<FViewUniformShaderParameters>::CreateUniformBufferImmediate
          (FViewUniformShaderParameters *param_1,EUniformBufferUsage param_2,
          EUniformBufferValidation param_3)

{
  FRHIResource *this;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TUniformBufferRef<FViewUniformShaderParameters> TVar4;
  TRefCountPtr<FRHIUniformBuffer> TVar5;
  undefined4 in_register_00000014;
  FRHIResource *local_res8;
  
  pFVar3 = FViewUniformShaderParameters::GetStructMetadata();
  if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar4 = (TUniformBufferRef<FViewUniformShaderParameters>)(*pcVar1)();
    return TVar4;
  }
  TVar5 = RHICreateUniformBuffer
                    (&local_res8,(FRHIUniformBufferLayout *)CONCAT44(in_register_00000014,param_2),
                     (EUniformBufferUsage)(pFVar3->Layout).Reference,param_3);
  this = (FRHIResource *)(TVar5.Reference)->_padding_;
  *(FRHIResource **)(param_1->TranslatedWorldToClip).M[0] = this;
  if (this != (FRHIResource *)0x0) {
    FRHIResource::AddRef(this);
    pFVar3 = FViewUniformShaderParameters::GetStructMetadata();
    if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      TVar4 = (TUniformBufferRef<FViewUniformShaderParameters>)(*pcVar1)();
      return TVar4;
    }
    if ((FName)(pFVar3->Layout).Reference != this[2].OwnerName) {
      pFVar3 = FViewUniformShaderParameters::GetStructMetadata();
      if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x177,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        TVar4 = (TUniformBufferRef<FViewUniformShaderParameters>)(*pcVar1)();
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
        TVar4 = (TUniformBufferRef<FViewUniformShaderParameters>)(*pcVar1)();
        return TVar4;
      }
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return (TUniformBufferRef<FViewUniformShaderParameters>)param_1;
}

// CreateUniformBufferImmediate @ 1450c2110

TUniformBufferRef<FPlanarReflectionUniformParameters> __cdecl
TUniformBufferRef<FPlanarReflectionUniformParameters>::CreateUniformBufferImmediate
          (FPlanarReflectionUniformParameters *param_1,EUniformBufferUsage param_2,
          EUniformBufferValidation param_3)

{
  FRHIResource *this;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TUniformBufferRef<FPlanarReflectionUniformParameters> TVar4;
  TRefCountPtr<FRHIUniformBuffer> TVar5;
  undefined4 in_register_00000014;
  FRHIResource *local_res8;
  
  pFVar3 = FPlanarReflectionUniformParameters::GetStructMetadata();
  if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar4 = (TUniformBufferRef<FPlanarReflectionUniformParameters>)(*pcVar1)();
    return TVar4;
  }
  TVar5 = RHICreateUniformBuffer
                    (&local_res8,(FRHIUniformBufferLayout *)CONCAT44(in_register_00000014,param_2),
                     (EUniformBufferUsage)(pFVar3->Layout).Reference,param_3);
  this = (FRHIResource *)(TVar5.Reference)->_padding_;
  *(FRHIResource **)&(param_1->ReflectionPlane).field0_0x0 = this;
  if (this != (FRHIResource *)0x0) {
    FRHIResource::AddRef(this);
    pFVar3 = FPlanarReflectionUniformParameters::GetStructMetadata();
    if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      TVar4 = (TUniformBufferRef<FPlanarReflectionUniformParameters>)(*pcVar1)();
      return TVar4;
    }
    if ((FName)(pFVar3->Layout).Reference != this[2].OwnerName) {
      pFVar3 = FPlanarReflectionUniformParameters::GetStructMetadata();
      if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x177,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        TVar4 = (TUniformBufferRef<FPlanarReflectionUniformParameters>)(*pcVar1)();
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
        TVar4 = (TUniformBufferRef<FPlanarReflectionUniformParameters>)(*pcVar1)();
        return TVar4;
      }
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return (TUniformBufferRef<FPlanarReflectionUniformParameters>)param_1;
}

// CreateUniformBufferImmediate @ 1452ba510

TUniformBufferRef<FIndirectLightingCacheUniformParameters> __cdecl
TUniformBufferRef<FIndirectLightingCacheUniformParameters>::CreateUniformBufferImmediate
          (FIndirectLightingCacheUniformParameters *param_1,EUniformBufferUsage param_2,
          EUniformBufferValidation param_3)

{
  FRHIResource *this;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TUniformBufferRef<FIndirectLightingCacheUniformParameters> TVar4;
  TRefCountPtr<FRHIUniformBuffer> TVar5;
  undefined4 in_register_00000014;
  FRHIResource *local_res8;
  
  pFVar3 = FIndirectLightingCacheUniformParameters::GetStructMetadata();
  if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar4 = (TUniformBufferRef<FIndirectLightingCacheUniformParameters>)(*pcVar1)();
    return TVar4;
  }
  TVar5 = RHICreateUniformBuffer
                    (&local_res8,(FRHIUniformBufferLayout *)CONCAT44(in_register_00000014,param_2),
                     (EUniformBufferUsage)(pFVar3->Layout).Reference,param_3);
  this = (FRHIResource *)(TVar5.Reference)->_padding_;
  *(FRHIResource **)&(param_1->IndirectLightingCachePrimitiveAdd).field0_0x0 = this;
  if (this != (FRHIResource *)0x0) {
    FRHIResource::AddRef(this);
    pFVar3 = FIndirectLightingCacheUniformParameters::GetStructMetadata();
    if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      TVar4 = (TUniformBufferRef<FIndirectLightingCacheUniformParameters>)(*pcVar1)();
      return TVar4;
    }
    if ((FName)(pFVar3->Layout).Reference != this[2].OwnerName) {
      pFVar3 = FIndirectLightingCacheUniformParameters::GetStructMetadata();
      if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x177,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        TVar4 = (TUniformBufferRef<FIndirectLightingCacheUniformParameters>)(*pcVar1)();
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
        TVar4 = (TUniformBufferRef<FIndirectLightingCacheUniformParameters>)(*pcVar1)();
        return TVar4;
      }
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return (TUniformBufferRef<FIndirectLightingCacheUniformParameters>)param_1;
}

// TUniformBufferRef<FMobileDirectionalLightShaderParameters> @ 1453f9300

TUniformBufferRef<FMobileDirectionalLightShaderParameters> * __thiscall
TUniformBufferRef<FMobileDirectionalLightShaderParameters>::
TUniformBufferRef<FMobileDirectionalLightShaderParameters>
          (TUniformBufferRef<FMobileDirectionalLightShaderParameters> *this)

{
  *this = (TUniformBufferRef<FMobileDirectionalLightShaderParameters>)0x0;
  return this;
}

// ~TUniformBufferRef<FMobileDirectionalLightShaderParameters> @ 145404d90

void __thiscall
TUniformBufferRef<FMobileDirectionalLightShaderParameters>::
~TUniformBufferRef<FMobileDirectionalLightShaderParameters>
          (TUniformBufferRef<FMobileDirectionalLightShaderParameters> *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  TUniformBufferRef<FMobileDirectionalLightShaderParameters> this_00;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  
  this_00 = *this;
  if (this_00 == (TUniformBufferRef<FMobileDirectionalLightShaderParameters>)0x0) {
    return;
  }
  LOCK();
  paVar1 = (atomic<unsigned_int> *)((longlong)this_00 + 8);
  aVar2 = *paVar1;
  *paVar1 = (atomic<unsigned_int>)((int)*paVar1 - 1);
  UNLOCK();
  if ((int)aVar2 < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OldPacked & DeletingBit) == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa2,L"Resource is being deleted.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar5 = (uint)aVar2 & 0x3fffffff;
  if ((int)(uVar5 - 1) < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NumRefs >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0xa4,L"Reference count has underflowed.");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewValue >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x53,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (uVar5 == 1) {
    FRHIResource::MarkForDelete((FRHIResource *)this_00);
  }
  return;
}

// CreateUniformBufferImmediate @ 145427a10

TUniformBufferRef<FMobileReflectionCaptureShaderParameters> __cdecl
TUniformBufferRef<FMobileReflectionCaptureShaderParameters>::CreateUniformBufferImmediate
          (FMobileReflectionCaptureShaderParameters *param_1,EUniformBufferUsage param_2,
          EUniformBufferValidation param_3)

{
  FRHIResource *this;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TUniformBufferRef<FMobileReflectionCaptureShaderParameters> TVar4;
  TRefCountPtr<FRHIUniformBuffer> TVar5;
  undefined4 in_register_00000014;
  FRHIResource *local_res8;
  
  pFVar3 = FMobileReflectionCaptureShaderParameters::GetStructMetadata();
  if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar4 = (TUniformBufferRef<FMobileReflectionCaptureShaderParameters>)(*pcVar1)();
    return TVar4;
  }
  TVar5 = RHICreateUniformBuffer
                    (&local_res8,(FRHIUniformBufferLayout *)CONCAT44(in_register_00000014,param_2),
                     (EUniformBufferUsage)(pFVar3->Layout).Reference,param_3);
  this = (FRHIResource *)(TVar5.Reference)->_padding_;
  *(FRHIResource **)&(param_1->Params).field0_0x0 = this;
  if (this != (FRHIResource *)0x0) {
    FRHIResource::AddRef(this);
    pFVar3 = FMobileReflectionCaptureShaderParameters::GetStructMetadata();
    if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      TVar4 = (TUniformBufferRef<FMobileReflectionCaptureShaderParameters>)(*pcVar1)();
      return TVar4;
    }
    if ((FName)(pFVar3->Layout).Reference != this[2].OwnerName) {
      pFVar3 = FMobileReflectionCaptureShaderParameters::GetStructMetadata();
      if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x177,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        TVar4 = (TUniformBufferRef<FMobileReflectionCaptureShaderParameters>)(*pcVar1)();
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
        TVar4 = (TUniformBufferRef<FMobileReflectionCaptureShaderParameters>)(*pcVar1)();
        return TVar4;
      }
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return (TUniformBufferRef<FMobileReflectionCaptureShaderParameters>)param_1;
}

// CreateUniformBufferImmediate @ 145530b80

TUniformBufferRef<FDistanceCullFadeUniformShaderParameters> __cdecl
TUniformBufferRef<FDistanceCullFadeUniformShaderParameters>::CreateUniformBufferImmediate
          (FDistanceCullFadeUniformShaderParameters *param_1,EUniformBufferUsage param_2,
          EUniformBufferValidation param_3)

{
  TVector2<float>_u_0 this;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TUniformBufferRef<FDistanceCullFadeUniformShaderParameters> TVar4;
  TRefCountPtr<FRHIUniformBuffer> TVar5;
  undefined4 in_register_00000014;
  FRHIResource *local_res8;
  
  pFVar3 = FDistanceCullFadeUniformShaderParameters::GetStructMetadata();
  if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar4 = (TUniformBufferRef<FDistanceCullFadeUniformShaderParameters>)(*pcVar1)();
    return TVar4;
  }
  TVar5 = RHICreateUniformBuffer
                    (&local_res8,(FRHIUniformBufferLayout *)CONCAT44(in_register_00000014,param_2),
                     (EUniformBufferUsage)(pFVar3->Layout).Reference,param_3);
  this = (TVector2<float>_u_0)(TVar5.Reference)->_padding_;
  (param_1->FadeTimeScaleBias).field0_0x0 = this;
  if (this != (TVector2<float>_u_0)0x0) {
    FRHIResource::AddRef((FRHIResource *)this);
    pFVar3 = FDistanceCullFadeUniformShaderParameters::GetStructMetadata();
    if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      TVar4 = (TUniformBufferRef<FDistanceCullFadeUniformShaderParameters>)(*pcVar1)();
      return TVar4;
    }
    if ((FName)(pFVar3->Layout).Reference != ((FRHIResource *)((longlong)this + 0x30))->OwnerName) {
      pFVar3 = FDistanceCullFadeUniformShaderParameters::GetStructMetadata();
      if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x177,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        TVar4 = (TUniformBufferRef<FDistanceCullFadeUniformShaderParameters>)(*pcVar1)();
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
        TVar4 = (TUniformBufferRef<FDistanceCullFadeUniformShaderParameters>)(*pcVar1)();
        return TVar4;
      }
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return (TUniformBufferRef<FDistanceCullFadeUniformShaderParameters>)param_1;
}

// CreateUniformBufferImmediate @ 14567a440

TUniformBufferRef<FSkyAtmosphereRealTimeReflectionLUTParameters> __cdecl
TUniformBufferRef<FSkyAtmosphereRealTimeReflectionLUTParameters>::CreateUniformBufferImmediate
          (FSkyAtmosphereRealTimeReflectionLUTParameters *param_1,EUniformBufferUsage param_2,
          EUniformBufferValidation param_3)

{
  FRHIResource *this;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TUniformBufferRef<FSkyAtmosphereRealTimeReflectionLUTParameters> TVar4;
  TRefCountPtr<FRHIUniformBuffer> TVar5;
  undefined4 in_register_00000014;
  FRHIResource *local_res8;
  
  pFVar3 = FSkyAtmosphereRealTimeReflectionLUTParameters::GetStructMetadata();
  if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar4 = (TUniformBufferRef<FSkyAtmosphereRealTimeReflectionLUTParameters>)(*pcVar1)();
    return TVar4;
  }
  TVar5 = RHICreateUniformBuffer
                    (&local_res8,(FRHIUniformBufferLayout *)CONCAT44(in_register_00000014,param_2),
                     (EUniformBufferUsage)(pFVar3->Layout).Reference,param_3);
  this = (FRHIResource *)(TVar5.Reference)->_padding_;
  *(FRHIResource **)(param_1->SkyViewLutReferential).M[0] = this;
  if (this != (FRHIResource *)0x0) {
    FRHIResource::AddRef(this);
    pFVar3 = FSkyAtmosphereRealTimeReflectionLUTParameters::GetStructMetadata();
    if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      TVar4 = (TUniformBufferRef<FSkyAtmosphereRealTimeReflectionLUTParameters>)(*pcVar1)();
      return TVar4;
    }
    if ((FName)(pFVar3->Layout).Reference != this[2].OwnerName) {
      pFVar3 = FSkyAtmosphereRealTimeReflectionLUTParameters::GetStructMetadata();
      if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x177,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        TVar4 = (TUniformBufferRef<FSkyAtmosphereRealTimeReflectionLUTParameters>)(*pcVar1)();
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
        TVar4 = (TUniformBufferRef<FSkyAtmosphereRealTimeReflectionLUTParameters>)(*pcVar1)();
        return TVar4;
      }
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return (TUniformBufferRef<FSkyAtmosphereRealTimeReflectionLUTParameters>)param_1;
}

// CreateUniformBufferImmediate @ 145762970

TUniformBufferRef<FInstancedViewUniformShaderParameters> __cdecl
TUniformBufferRef<FInstancedViewUniformShaderParameters>::CreateUniformBufferImmediate
          (FInstancedViewUniformShaderParameters *param_1,EUniformBufferUsage param_2,
          EUniformBufferValidation param_3)

{
  FRHIResource *this;
  code *pcVar1;
  bool bVar2;
  FShaderParametersMetadata *pFVar3;
  TUniformBufferRef<FInstancedViewUniformShaderParameters> TVar4;
  TRefCountPtr<FRHIUniformBuffer> TVar5;
  undefined4 in_register_00000014;
  FRHIResource *local_res8;
  
  pFVar3 = FInstancedViewUniformShaderParameters::GetStructMetadata();
  if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    TVar4 = (TUniformBufferRef<FInstancedViewUniformShaderParameters>)(*pcVar1)();
    return TVar4;
  }
  TVar5 = RHICreateUniformBuffer
                    (&local_res8,(FRHIUniformBufferLayout *)CONCAT44(in_register_00000014,param_2),
                     (EUniformBufferUsage)(pFVar3->Layout).Reference,param_3);
  this = (FRHIResource *)(TVar5.Reference)->_padding_;
  *(FRHIResource **)(param_1->TranslatedWorldToClip).Elements[0].M[0] = this;
  if (this != (FRHIResource *)0x0) {
    FRHIResource::AddRef(this);
    pFVar3 = FInstancedViewUniformShaderParameters::GetStructMetadata();
    if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      TVar4 = (TUniformBufferRef<FInstancedViewUniformShaderParameters>)(*pcVar1)();
      return TVar4;
    }
    if ((FName)(pFVar3->Layout).Reference != this[2].OwnerName) {
      pFVar3 = FInstancedViewUniformShaderParameters::GetStructMetadata();
      if (((pFVar3->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x177,L""), bVar2)) {
        pcVar1 = (code *)swi(3);
        TVar4 = (TUniformBufferRef<FInstancedViewUniformShaderParameters>)(*pcVar1)();
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
        TVar4 = (TUniformBufferRef<FInstancedViewUniformShaderParameters>)(*pcVar1)();
        return TVar4;
      }
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  return (TUniformBufferRef<FInstancedViewUniformShaderParameters>)param_1;
}

