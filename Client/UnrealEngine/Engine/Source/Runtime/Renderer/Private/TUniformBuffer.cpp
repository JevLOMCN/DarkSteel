// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 15

// InitRHI @ 144b787e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TUniformBuffer<FPrecomputedLightingUniformParameters>::InitRHI
          (TUniformBuffer<FPrecomputedLightingUniformParameters> *this,FRHICommandListBase *param_1)

{
  TUniformBufferRef<FPrecomputedLightingUniformParameters> *pTVar1;
  EUniformBufferValidation EVar2;
  TUniformBufferRef<FPrecomputedLightingUniformParameters> TVar3;
  FRHIUniformBufferLayout *pFVar4;
  TUniformBufferRef<FPrecomputedLightingUniformParameters> this_00;
  code *pcVar5;
  bool bVar6;
  FShaderParametersMetadata *pFVar7;
  TRefCountPtr<FRHIUniformBuffer> TVar8;
  FRHIResource *local_res8;
  TUniformBufferRef<FPrecomputedLightingUniformParameters> local_28 [2];
  
  pTVar1 = &this->UniformBufferRHI;
  TVar3 = *pTVar1;
  if (TVar3 != (TUniformBufferRef<FPrecomputedLightingUniformParameters>)0x0) {
    *pTVar1 = (TUniformBufferRef<FPrecomputedLightingUniformParameters>)0x0;
    FRHIResource::Release((FRHIResource *)TVar3);
  }
  pFVar4 = (FRHIUniformBufferLayout *)this->Contents;
  if (pFVar4 != (FRHIUniformBufferLayout *)0x0) {
    EVar2 = this->BufferUsage;
    pFVar7 = FPrecomputedLightingUniformParameters::GetStructMetadata();
    if (((pFVar7->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    TVar8 = RHICreateUniformBuffer
                      (&local_res8,pFVar4,(EUniformBufferUsage)(pFVar7->Layout).Reference,EVar2);
    TVar3 = (TUniformBufferRef<FPrecomputedLightingUniformParameters>)(TVar8.Reference)->_padding_;
    if (TVar3 != (TUniformBufferRef<FPrecomputedLightingUniformParameters>)0x0) {
      FRHIResource::AddRef((FRHIResource *)TVar3);
      pFVar7 = FPrecomputedLightingUniformParameters::GetStructMetadata();
      if (((pFVar7->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x17c,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((FName)(pFVar7->Layout).Reference != *(FName *)((longlong)TVar3 + 0x40)) {
        pFVar7 = FPrecomputedLightingUniformParameters::GetStructMetadata();
        if (((pFVar7->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsLayoutInitialized()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                               ,0x177,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                           ,0x96,
                           L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
    if (pTVar1 == local_28) {
      if (TVar3 != (TUniformBufferRef<FPrecomputedLightingUniformParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)TVar3);
      }
    }
    else {
      this_00 = *pTVar1;
      *pTVar1 = TVar3;
      if (this_00 != (TUniformBufferRef<FPrecomputedLightingUniformParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
        return;
      }
    }
  }
  return;
}

// ReleaseRHI @ 144b789a0

void __thiscall
TUniformBuffer<FPrecomputedLightingUniformParameters>::ReleaseRHI
          (TUniformBuffer<FPrecomputedLightingUniformParameters> *this)

{
  TUniformBufferRef<FPrecomputedLightingUniformParameters> this_00;
  
  this_00 = this->UniformBufferRHI;
  if (this_00 != (TUniformBufferRef<FPrecomputedLightingUniformParameters>)0x0) {
    this->UniformBufferRHI = (TUniformBufferRef<FPrecomputedLightingUniformParameters>)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
    return;
  }
  return;
}

// InitRHI @ 144b78c80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TUniformBuffer<FIndirectLightingCacheUniformParameters>::InitRHI
          (TUniformBuffer<FIndirectLightingCacheUniformParameters> *this,
          FRHICommandListBase *param_1)

{
  TUniformBufferRef<FIndirectLightingCacheUniformParameters> *pTVar1;
  EUniformBufferValidation EVar2;
  TUniformBufferRef<FIndirectLightingCacheUniformParameters> TVar3;
  FRHIUniformBufferLayout *pFVar4;
  TUniformBufferRef<FIndirectLightingCacheUniformParameters> this_00;
  code *pcVar5;
  bool bVar6;
  FShaderParametersMetadata *pFVar7;
  TRefCountPtr<FRHIUniformBuffer> TVar8;
  FRHIResource *local_res8;
  TUniformBufferRef<FIndirectLightingCacheUniformParameters> local_28 [2];
  
  pTVar1 = &this->UniformBufferRHI;
  TVar3 = *pTVar1;
  if (TVar3 != (TUniformBufferRef<FIndirectLightingCacheUniformParameters>)0x0) {
    *pTVar1 = (TUniformBufferRef<FIndirectLightingCacheUniformParameters>)0x0;
    FRHIResource::Release((FRHIResource *)TVar3);
  }
  pFVar4 = (FRHIUniformBufferLayout *)this->Contents;
  if (pFVar4 != (FRHIUniformBufferLayout *)0x0) {
    EVar2 = this->BufferUsage;
    pFVar7 = FIndirectLightingCacheUniformParameters::GetStructMetadata();
    if (((pFVar7->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    TVar8 = RHICreateUniformBuffer
                      (&local_res8,pFVar4,(EUniformBufferUsage)(pFVar7->Layout).Reference,EVar2);
    TVar3 = (TUniformBufferRef<FIndirectLightingCacheUniformParameters>)(TVar8.Reference)->_padding_
    ;
    if (TVar3 != (TUniformBufferRef<FIndirectLightingCacheUniformParameters>)0x0) {
      FRHIResource::AddRef((FRHIResource *)TVar3);
      pFVar7 = FIndirectLightingCacheUniformParameters::GetStructMetadata();
      if (((pFVar7->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x17c,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((FName)(pFVar7->Layout).Reference != *(FName *)((longlong)TVar3 + 0x40)) {
        pFVar7 = FIndirectLightingCacheUniformParameters::GetStructMetadata();
        if (((pFVar7->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsLayoutInitialized()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                               ,0x177,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                           ,0x96,
                           L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
    if (pTVar1 == local_28) {
      if (TVar3 != (TUniformBufferRef<FIndirectLightingCacheUniformParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)TVar3);
      }
    }
    else {
      this_00 = *pTVar1;
      *pTVar1 = TVar3;
      if (this_00 != (TUniformBufferRef<FIndirectLightingCacheUniformParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
        return;
      }
    }
  }
  return;
}

// ReleaseRHI @ 144b78e40

void __thiscall
TUniformBuffer<FIndirectLightingCacheUniformParameters>::ReleaseRHI
          (TUniformBuffer<FIndirectLightingCacheUniformParameters> *this)

{
  TUniformBufferRef<FIndirectLightingCacheUniformParameters> this_00;
  
  this_00 = this->UniformBufferRHI;
  if (this_00 != (TUniformBufferRef<FIndirectLightingCacheUniformParameters>)0x0) {
    this->UniformBufferRHI = (TUniformBufferRef<FIndirectLightingCacheUniformParameters>)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
    return;
  }
  return;
}

// GetUniformBufferRHI @ 1450dd420

FRHIUniformBuffer * __thiscall
TUniformBuffer<FPrimitiveUniformShaderParameters>::GetUniformBufferRHI
          (TUniformBuffer<FPrimitiveUniformShaderParameters> *this)

{
  code *pcVar1;
  bool bVar2;
  FRHIUniformBuffer *pFVar3;
  
  if (this->UniformBufferRHI == (TUniformBufferRef<FPrimitiveUniformShaderParameters>)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UniformBufferRHI.GetReference()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                       ,0x65,
                       L"Attempted to access UniformBufferRHI on a TUniformBuffer that was never filled in with anything"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRHIUniformBuffer *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (this->UniformBufferRHI == (TUniformBufferRef<FPrimitiveUniformShaderParameters>)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UniformBufferRHI.GetReference()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                       ,0x66,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRHIUniformBuffer *)(*pcVar1)();
      return pFVar3;
    }
  }
  return (FRHIUniformBuffer *)this->UniformBufferRHI;
}

// InitRHI @ 1453c8eb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TUniformBuffer<FDistanceCullFadeUniformShaderParameters>::InitRHI
          (TUniformBuffer<FDistanceCullFadeUniformShaderParameters> *this,
          FRHICommandListBase *param_1)

{
  TUniformBufferRef<FDistanceCullFadeUniformShaderParameters> *pTVar1;
  EUniformBufferValidation EVar2;
  TUniformBufferRef<FDistanceCullFadeUniformShaderParameters> TVar3;
  FRHIUniformBufferLayout *pFVar4;
  TUniformBufferRef<FDistanceCullFadeUniformShaderParameters> this_00;
  code *pcVar5;
  bool bVar6;
  FShaderParametersMetadata *pFVar7;
  TRefCountPtr<FRHIUniformBuffer> TVar8;
  FRHIResource *local_res8;
  TUniformBufferRef<FDistanceCullFadeUniformShaderParameters> local_28 [2];
  
  pTVar1 = &this->UniformBufferRHI;
  TVar3 = *pTVar1;
  if (TVar3 != (TUniformBufferRef<FDistanceCullFadeUniformShaderParameters>)0x0) {
    *pTVar1 = (TUniformBufferRef<FDistanceCullFadeUniformShaderParameters>)0x0;
    FRHIResource::Release((FRHIResource *)TVar3);
  }
  pFVar4 = (FRHIUniformBufferLayout *)this->Contents;
  if (pFVar4 != (FRHIUniformBufferLayout *)0x0) {
    EVar2 = this->BufferUsage;
    pFVar7 = FDistanceCullFadeUniformShaderParameters::GetStructMetadata();
    if (((pFVar7->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    TVar8 = RHICreateUniformBuffer
                      (&local_res8,pFVar4,(EUniformBufferUsage)(pFVar7->Layout).Reference,EVar2);
    TVar3 = (TUniformBufferRef<FDistanceCullFadeUniformShaderParameters>)
            (TVar8.Reference)->_padding_;
    if (TVar3 != (TUniformBufferRef<FDistanceCullFadeUniformShaderParameters>)0x0) {
      FRHIResource::AddRef((FRHIResource *)TVar3);
      pFVar7 = FDistanceCullFadeUniformShaderParameters::GetStructMetadata();
      if (((pFVar7->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x17c,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((FName)(pFVar7->Layout).Reference != *(FName *)((longlong)TVar3 + 0x40)) {
        pFVar7 = FDistanceCullFadeUniformShaderParameters::GetStructMetadata();
        if (((pFVar7->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsLayoutInitialized()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                               ,0x177,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                           ,0x96,
                           L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
    if (pTVar1 == local_28) {
      if (TVar3 != (TUniformBufferRef<FDistanceCullFadeUniformShaderParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)TVar3);
      }
    }
    else {
      this_00 = *pTVar1;
      *pTVar1 = TVar3;
      if (this_00 != (TUniformBufferRef<FDistanceCullFadeUniformShaderParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
        return;
      }
    }
  }
  return;
}

// ReleaseRHI @ 1453c9070

void __thiscall
TUniformBuffer<FDistanceCullFadeUniformShaderParameters>::ReleaseRHI
          (TUniformBuffer<FDistanceCullFadeUniformShaderParameters> *this)

{
  TUniformBufferRef<FDistanceCullFadeUniformShaderParameters> this_00;
  
  this_00 = this->UniformBufferRHI;
  if (this_00 != (TUniformBufferRef<FDistanceCullFadeUniformShaderParameters>)0x0) {
    this->UniformBufferRHI = (TUniformBufferRef<FDistanceCullFadeUniformShaderParameters>)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
    return;
  }
  return;
}

// InitRHI @ 1453c9170

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TUniformBuffer<FDitherUniformShaderParameters>::InitRHI
          (TUniformBuffer<FDitherUniformShaderParameters> *this,FRHICommandListBase *param_1)

{
  TUniformBufferRef<FDitherUniformShaderParameters> *pTVar1;
  EUniformBufferValidation EVar2;
  TUniformBufferRef<FDitherUniformShaderParameters> TVar3;
  FRHIUniformBufferLayout *pFVar4;
  TUniformBufferRef<FDitherUniformShaderParameters> this_00;
  code *pcVar5;
  bool bVar6;
  FShaderParametersMetadata *pFVar7;
  TRefCountPtr<FRHIUniformBuffer> TVar8;
  FRHIResource *local_res8;
  TUniformBufferRef<FDitherUniformShaderParameters> local_28 [2];
  
  pTVar1 = &this->UniformBufferRHI;
  TVar3 = *pTVar1;
  if (TVar3 != (TUniformBufferRef<FDitherUniformShaderParameters>)0x0) {
    *pTVar1 = (TUniformBufferRef<FDitherUniformShaderParameters>)0x0;
    FRHIResource::Release((FRHIResource *)TVar3);
  }
  pFVar4 = (FRHIUniformBufferLayout *)this->Contents;
  if (pFVar4 != (FRHIUniformBufferLayout *)0x0) {
    EVar2 = this->BufferUsage;
    pFVar7 = FDitherUniformShaderParameters::GetStructMetadata();
    if (((pFVar7->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    TVar8 = RHICreateUniformBuffer
                      (&local_res8,pFVar4,(EUniformBufferUsage)(pFVar7->Layout).Reference,EVar2);
    TVar3 = (TUniformBufferRef<FDitherUniformShaderParameters>)(TVar8.Reference)->_padding_;
    if (TVar3 != (TUniformBufferRef<FDitherUniformShaderParameters>)0x0) {
      FRHIResource::AddRef((FRHIResource *)TVar3);
      pFVar7 = FDitherUniformShaderParameters::GetStructMetadata();
      if (((pFVar7->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x17c,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((FName)(pFVar7->Layout).Reference != *(FName *)((longlong)TVar3 + 0x40)) {
        pFVar7 = FDitherUniformShaderParameters::GetStructMetadata();
        if (((pFVar7->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsLayoutInitialized()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                               ,0x177,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                           ,0x96,
                           L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
    if (pTVar1 == local_28) {
      if (TVar3 != (TUniformBufferRef<FDitherUniformShaderParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)TVar3);
      }
    }
    else {
      this_00 = *pTVar1;
      *pTVar1 = TVar3;
      if (this_00 != (TUniformBufferRef<FDitherUniformShaderParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
        return;
      }
    }
  }
  return;
}

// ReleaseRHI @ 1453c9330

void __thiscall
TUniformBuffer<FDitherUniformShaderParameters>::ReleaseRHI
          (TUniformBuffer<FDitherUniformShaderParameters> *this)

{
  TUniformBufferRef<FDitherUniformShaderParameters> this_00;
  
  this_00 = this->UniformBufferRHI;
  if (this_00 != (TUniformBufferRef<FDitherUniformShaderParameters>)0x0) {
    this->UniformBufferRHI = (TUniformBufferRef<FDitherUniformShaderParameters>)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
    return;
  }
  return;
}

// InitRHI @ 14555cad0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TUniformBuffer<FTranslucentSelfShadowUniformParameters>::InitRHI
          (TUniformBuffer<FTranslucentSelfShadowUniformParameters> *this,
          FRHICommandListBase *param_1)

{
  TUniformBufferRef<FTranslucentSelfShadowUniformParameters> *pTVar1;
  EUniformBufferValidation EVar2;
  TUniformBufferRef<FTranslucentSelfShadowUniformParameters> TVar3;
  FRHIUniformBufferLayout *pFVar4;
  TUniformBufferRef<FTranslucentSelfShadowUniformParameters> this_00;
  code *pcVar5;
  bool bVar6;
  FShaderParametersMetadata *pFVar7;
  TRefCountPtr<FRHIUniformBuffer> TVar8;
  FRHIResource *local_res8;
  TUniformBufferRef<FTranslucentSelfShadowUniformParameters> local_28 [2];
  
  pTVar1 = &this->UniformBufferRHI;
  TVar3 = *pTVar1;
  if (TVar3 != (TUniformBufferRef<FTranslucentSelfShadowUniformParameters>)0x0) {
    *pTVar1 = (TUniformBufferRef<FTranslucentSelfShadowUniformParameters>)0x0;
    FRHIResource::Release((FRHIResource *)TVar3);
  }
  pFVar4 = (FRHIUniformBufferLayout *)this->Contents;
  if (pFVar4 != (FRHIUniformBufferLayout *)0x0) {
    EVar2 = this->BufferUsage;
    pFVar7 = FTranslucentSelfShadowUniformParameters::GetStructMetadata();
    if (((pFVar7->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    TVar8 = RHICreateUniformBuffer
                      (&local_res8,pFVar4,(EUniformBufferUsage)(pFVar7->Layout).Reference,EVar2);
    TVar3 = (TUniformBufferRef<FTranslucentSelfShadowUniformParameters>)(TVar8.Reference)->_padding_
    ;
    if (TVar3 != (TUniformBufferRef<FTranslucentSelfShadowUniformParameters>)0x0) {
      FRHIResource::AddRef((FRHIResource *)TVar3);
      pFVar7 = FTranslucentSelfShadowUniformParameters::GetStructMetadata();
      if (((pFVar7->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x17c,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((FName)(pFVar7->Layout).Reference != *(FName *)((longlong)TVar3 + 0x40)) {
        pFVar7 = FTranslucentSelfShadowUniformParameters::GetStructMetadata();
        if (((pFVar7->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsLayoutInitialized()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                               ,0x177,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                           ,0x96,
                           L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
    if (pTVar1 == local_28) {
      if (TVar3 != (TUniformBufferRef<FTranslucentSelfShadowUniformParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)TVar3);
      }
    }
    else {
      this_00 = *pTVar1;
      *pTVar1 = TVar3;
      if (this_00 != (TUniformBufferRef<FTranslucentSelfShadowUniformParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
        return;
      }
    }
  }
  return;
}

// ReleaseRHI @ 14555cc90

void __thiscall
TUniformBuffer<FTranslucentSelfShadowUniformParameters>::ReleaseRHI
          (TUniformBuffer<FTranslucentSelfShadowUniformParameters> *this)

{
  TUniformBufferRef<FTranslucentSelfShadowUniformParameters> this_00;
  
  this_00 = this->UniformBufferRHI;
  if (this_00 != (TUniformBufferRef<FTranslucentSelfShadowUniformParameters>)0x0) {
    this->UniformBufferRHI = (TUniformBufferRef<FTranslucentSelfShadowUniformParameters>)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
    return;
  }
  return;
}

// InitRHI @ 14590c270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TUniformBuffer<RuntimeVirtualTexture::FAstcParameters>::InitRHI
          (TUniformBuffer<RuntimeVirtualTexture::FAstcParameters> *this,FRHICommandListBase *param_1
          )

{
  TUniformBufferRef<RuntimeVirtualTexture::FAstcParameters> *pTVar1;
  EUniformBufferValidation EVar2;
  TUniformBufferRef<RuntimeVirtualTexture::FAstcParameters> TVar3;
  FRHIUniformBufferLayout *pFVar4;
  TUniformBufferRef<RuntimeVirtualTexture::FAstcParameters> this_00;
  code *pcVar5;
  bool bVar6;
  FShaderParametersMetadata *pFVar7;
  TRefCountPtr<FRHIUniformBuffer> TVar8;
  FRHIResource *local_res8;
  TUniformBufferRef<RuntimeVirtualTexture::FAstcParameters> local_28 [2];
  
  pTVar1 = &this->UniformBufferRHI;
  TVar3 = *pTVar1;
  if (TVar3 != (TUniformBufferRef<RuntimeVirtualTexture::FAstcParameters>)0x0) {
    *pTVar1 = (TUniformBufferRef<RuntimeVirtualTexture::FAstcParameters>)0x0;
    FRHIResource::Release((FRHIResource *)TVar3);
  }
  pFVar4 = (FRHIUniformBufferLayout *)this->Contents;
  if (pFVar4 != (FRHIUniformBufferLayout *)0x0) {
    EVar2 = this->BufferUsage;
    pFVar7 = RuntimeVirtualTexture::FAstcParameters::GetStructMetadata();
    if (((pFVar7->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    TVar8 = RHICreateUniformBuffer
                      (&local_res8,pFVar4,(EUniformBufferUsage)(pFVar7->Layout).Reference,EVar2);
    TVar3 = (TUniformBufferRef<RuntimeVirtualTexture::FAstcParameters>)(TVar8.Reference)->_padding_;
    if (TVar3 != (TUniformBufferRef<RuntimeVirtualTexture::FAstcParameters>)0x0) {
      FRHIResource::AddRef((FRHIResource *)TVar3);
      pFVar7 = RuntimeVirtualTexture::FAstcParameters::GetStructMetadata();
      if (((pFVar7->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x17c,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((FName)(pFVar7->Layout).Reference != *(FName *)((longlong)TVar3 + 0x40)) {
        pFVar7 = RuntimeVirtualTexture::FAstcParameters::GetStructMetadata();
        if (((pFVar7->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsLayoutInitialized()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                               ,0x177,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                           ,0x96,
                           L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
    if (pTVar1 == local_28) {
      if (TVar3 != (TUniformBufferRef<RuntimeVirtualTexture::FAstcParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)TVar3);
      }
    }
    else {
      this_00 = *pTVar1;
      *pTVar1 = TVar3;
      if (this_00 != (TUniformBufferRef<RuntimeVirtualTexture::FAstcParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
        return;
      }
    }
  }
  return;
}

// InitRHI @ 14590c430

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TUniformBuffer<RuntimeVirtualTexture::FEtcParameters>::InitRHI
          (TUniformBuffer<RuntimeVirtualTexture::FEtcParameters> *this,FRHICommandListBase *param_1)

{
  TUniformBufferRef<RuntimeVirtualTexture::FEtcParameters> *pTVar1;
  EUniformBufferValidation EVar2;
  TUniformBufferRef<RuntimeVirtualTexture::FEtcParameters> TVar3;
  FRHIUniformBufferLayout *pFVar4;
  TUniformBufferRef<RuntimeVirtualTexture::FEtcParameters> this_00;
  code *pcVar5;
  bool bVar6;
  FShaderParametersMetadata *pFVar7;
  TRefCountPtr<FRHIUniformBuffer> TVar8;
  FRHIResource *local_res8;
  TUniformBufferRef<RuntimeVirtualTexture::FEtcParameters> local_28 [2];
  
  pTVar1 = &this->UniformBufferRHI;
  TVar3 = *pTVar1;
  if (TVar3 != (TUniformBufferRef<RuntimeVirtualTexture::FEtcParameters>)0x0) {
    *pTVar1 = (TUniformBufferRef<RuntimeVirtualTexture::FEtcParameters>)0x0;
    FRHIResource::Release((FRHIResource *)TVar3);
  }
  pFVar4 = (FRHIUniformBufferLayout *)this->Contents;
  if (pFVar4 != (FRHIUniformBufferLayout *)0x0) {
    EVar2 = this->BufferUsage;
    pFVar7 = RuntimeVirtualTexture::FEtcParameters::GetStructMetadata();
    if (((pFVar7->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    TVar8 = RHICreateUniformBuffer
                      (&local_res8,pFVar4,(EUniformBufferUsage)(pFVar7->Layout).Reference,EVar2);
    TVar3 = (TUniformBufferRef<RuntimeVirtualTexture::FEtcParameters>)(TVar8.Reference)->_padding_;
    if (TVar3 != (TUniformBufferRef<RuntimeVirtualTexture::FEtcParameters>)0x0) {
      FRHIResource::AddRef((FRHIResource *)TVar3);
      pFVar7 = RuntimeVirtualTexture::FEtcParameters::GetStructMetadata();
      if (((pFVar7->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x17c,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if ((FName)(pFVar7->Layout).Reference != *(FName *)((longlong)TVar3 + 0x40)) {
        pFVar7 = RuntimeVirtualTexture::FEtcParameters::GetStructMetadata();
        if (((pFVar7->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsLayoutInitialized()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                               ,0x177,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                           ,0x96,
                           L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
    if (pTVar1 == local_28) {
      if (TVar3 != (TUniformBufferRef<RuntimeVirtualTexture::FEtcParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)TVar3);
      }
    }
    else {
      this_00 = *pTVar1;
      *pTVar1 = TVar3;
      if (this_00 != (TUniformBufferRef<RuntimeVirtualTexture::FEtcParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
        return;
      }
    }
  }
  return;
}

// ReleaseRHI @ 145916810

void __thiscall
TUniformBuffer<RuntimeVirtualTexture::FAstcParameters>::ReleaseRHI
          (TUniformBuffer<RuntimeVirtualTexture::FAstcParameters> *this)

{
  TUniformBufferRef<RuntimeVirtualTexture::FAstcParameters> this_00;
  
  this_00 = this->UniformBufferRHI;
  if (this_00 != (TUniformBufferRef<RuntimeVirtualTexture::FAstcParameters>)0x0) {
    this->UniformBufferRHI = (TUniformBufferRef<RuntimeVirtualTexture::FAstcParameters>)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
    return;
  }
  return;
}

// ReleaseRHI @ 145916830

void __thiscall
TUniformBuffer<RuntimeVirtualTexture::FEtcParameters>::ReleaseRHI
          (TUniformBuffer<RuntimeVirtualTexture::FEtcParameters> *this)

{
  TUniformBufferRef<RuntimeVirtualTexture::FEtcParameters> this_00;
  
  this_00 = this->UniformBufferRHI;
  if (this_00 != (TUniformBufferRef<RuntimeVirtualTexture::FEtcParameters>)0x0) {
    this->UniformBufferRHI = (TUniformBufferRef<RuntimeVirtualTexture::FEtcParameters>)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
    return;
  }
  return;
}

