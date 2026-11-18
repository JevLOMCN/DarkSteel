// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 6

// GetUniformBufferRHI @ 145f96210

FRHIUniformBuffer * __thiscall
TUniformBuffer<FLandscapeFixedGridUniformShaderParameters>::GetUniformBufferRHI
          (TUniformBuffer<FLandscapeFixedGridUniformShaderParameters> *this)

{
  code *pcVar1;
  bool bVar2;
  FRHIUniformBuffer *pFVar3;
  
  if (this->UniformBufferRHI == (TUniformBufferRef<FLandscapeFixedGridUniformShaderParameters>)0x0)
  {
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
  if (this->UniformBufferRHI == (TUniformBufferRef<FLandscapeFixedGridUniformShaderParameters>)0x0)
  {
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

// GetUniformBufferRHI @ 145f96290

FRHIUniformBuffer * __thiscall
TUniformBuffer<FLandscapeUniformShaderParameters>::GetUniformBufferRHI
          (TUniformBuffer<FLandscapeUniformShaderParameters> *this)

{
  code *pcVar1;
  bool bVar2;
  FRHIUniformBuffer *pFVar3;
  
  if (this->UniformBufferRHI == (TUniformBufferRef<FLandscapeUniformShaderParameters>)0x0) {
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
  if (this->UniformBufferRHI == (TUniformBufferRef<FLandscapeUniformShaderParameters>)0x0) {
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

// InitRHI @ 145f970b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TUniformBuffer<FLandscapeFixedGridUniformShaderParameters>::InitRHI
          (TUniformBuffer<FLandscapeFixedGridUniformShaderParameters> *this,
          FRHICommandListBase *param_1)

{
  TUniformBufferRef<FLandscapeFixedGridUniformShaderParameters> *pTVar1;
  EUniformBufferValidation EVar2;
  TUniformBufferRef<FLandscapeFixedGridUniformShaderParameters> TVar3;
  FRHIUniformBufferLayout *pFVar4;
  TUniformBufferRef<FLandscapeFixedGridUniformShaderParameters> this_00;
  code *pcVar5;
  bool bVar6;
  FShaderParametersMetadata *pFVar7;
  TRefCountPtr<FRHIUniformBuffer> TVar8;
  FRHIResource *local_res8;
  TUniformBufferRef<FLandscapeFixedGridUniformShaderParameters> local_28 [2];
  
  pTVar1 = &this->UniformBufferRHI;
  TVar3 = *pTVar1;
  if (TVar3 != (TUniformBufferRef<FLandscapeFixedGridUniformShaderParameters>)0x0) {
    *pTVar1 = (TUniformBufferRef<FLandscapeFixedGridUniformShaderParameters>)0x0;
    FRHIResource::Release((FRHIResource *)TVar3);
  }
  pFVar4 = (FRHIUniformBufferLayout *)this->Contents;
  if (pFVar4 != (FRHIUniformBufferLayout *)0x0) {
    EVar2 = this->BufferUsage;
    pFVar7 = FLandscapeFixedGridUniformShaderParameters::GetStructMetadata();
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
    TVar3 = (TUniformBufferRef<FLandscapeFixedGridUniformShaderParameters>)
            (TVar8.Reference)->_padding_;
    if (TVar3 != (TUniformBufferRef<FLandscapeFixedGridUniformShaderParameters>)0x0) {
      FRHIResource::AddRef((FRHIResource *)TVar3);
      pFVar7 = FLandscapeFixedGridUniformShaderParameters::GetStructMetadata();
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
        pFVar7 = FLandscapeFixedGridUniformShaderParameters::GetStructMetadata();
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
      if (TVar3 != (TUniformBufferRef<FLandscapeFixedGridUniformShaderParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)TVar3);
      }
    }
    else {
      this_00 = *pTVar1;
      *pTVar1 = TVar3;
      if (this_00 != (TUniformBufferRef<FLandscapeFixedGridUniformShaderParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
        return;
      }
    }
  }
  return;
}

// InitRHI @ 145f97270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TUniformBuffer<FLandscapeUniformShaderParameters>::InitRHI
          (TUniformBuffer<FLandscapeUniformShaderParameters> *this,FRHICommandListBase *param_1)

{
  TUniformBufferRef<FLandscapeUniformShaderParameters> *pTVar1;
  EUniformBufferValidation EVar2;
  TUniformBufferRef<FLandscapeUniformShaderParameters> TVar3;
  FRHIUniformBufferLayout *pFVar4;
  TUniformBufferRef<FLandscapeUniformShaderParameters> this_00;
  code *pcVar5;
  bool bVar6;
  FShaderParametersMetadata *pFVar7;
  TRefCountPtr<FRHIUniformBuffer> TVar8;
  FRHIResource *local_res8;
  TUniformBufferRef<FLandscapeUniformShaderParameters> local_28 [2];
  
  pTVar1 = &this->UniformBufferRHI;
  TVar3 = *pTVar1;
  if (TVar3 != (TUniformBufferRef<FLandscapeUniformShaderParameters>)0x0) {
    *pTVar1 = (TUniformBufferRef<FLandscapeUniformShaderParameters>)0x0;
    FRHIResource::Release((FRHIResource *)TVar3);
  }
  pFVar4 = (FRHIUniformBufferLayout *)this->Contents;
  if (pFVar4 != (FRHIUniformBufferLayout *)0x0) {
    EVar2 = this->BufferUsage;
    pFVar7 = FLandscapeUniformShaderParameters::GetStructMetadata();
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
    TVar3 = (TUniformBufferRef<FLandscapeUniformShaderParameters>)(TVar8.Reference)->_padding_;
    if (TVar3 != (TUniformBufferRef<FLandscapeUniformShaderParameters>)0x0) {
      FRHIResource::AddRef((FRHIResource *)TVar3);
      pFVar7 = FLandscapeUniformShaderParameters::GetStructMetadata();
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
        pFVar7 = FLandscapeUniformShaderParameters::GetStructMetadata();
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
      if (TVar3 != (TUniformBufferRef<FLandscapeUniformShaderParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)TVar3);
      }
    }
    else {
      this_00 = *pTVar1;
      *pTVar1 = TVar3;
      if (this_00 != (TUniformBufferRef<FLandscapeUniformShaderParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
        return;
      }
    }
  }
  return;
}

// ReleaseRHI @ 145f9f350

void __thiscall
TUniformBuffer<FLandscapeFixedGridUniformShaderParameters>::ReleaseRHI
          (TUniformBuffer<FLandscapeFixedGridUniformShaderParameters> *this)

{
  TUniformBufferRef<FLandscapeFixedGridUniformShaderParameters> this_00;
  
  this_00 = this->UniformBufferRHI;
  if (this_00 != (TUniformBufferRef<FLandscapeFixedGridUniformShaderParameters>)0x0) {
    this->UniformBufferRHI = (TUniformBufferRef<FLandscapeFixedGridUniformShaderParameters>)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
    return;
  }
  return;
}

// ReleaseRHI @ 145f9f370

void __thiscall
TUniformBuffer<FLandscapeUniformShaderParameters>::ReleaseRHI
          (TUniformBuffer<FLandscapeUniformShaderParameters> *this)

{
  TUniformBufferRef<FLandscapeUniformShaderParameters> this_00;
  
  this_00 = this->UniformBufferRHI;
  if (this_00 != (TUniformBufferRef<FLandscapeUniformShaderParameters>)0x0) {
    this->UniformBufferRHI = (TUniformBufferRef<FLandscapeUniformShaderParameters>)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
    return;
  }
  return;
}

