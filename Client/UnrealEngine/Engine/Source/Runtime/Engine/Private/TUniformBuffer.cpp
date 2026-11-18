// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 13

// InitRHI @ 147b76020

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TUniformBuffer<FPrimitiveUniformShaderParameters>::InitRHI
          (TUniformBuffer<FPrimitiveUniformShaderParameters> *this,FRHICommandListBase *param_1)

{
  TUniformBufferRef<FPrimitiveUniformShaderParameters> *pTVar1;
  TUniformBufferRef<FPrimitiveUniformShaderParameters> TVar2;
  TUniformBufferRef<FPrimitiveUniformShaderParameters> local_18;
  
  pTVar1 = &this->UniformBufferRHI;
  TVar2 = *pTVar1;
  if (TVar2 != (TUniformBufferRef<FPrimitiveUniformShaderParameters>)0x0) {
    *pTVar1 = (TUniformBufferRef<FPrimitiveUniformShaderParameters>)0x0;
    FRHIResource::Release((FRHIResource *)TVar2);
  }
  if (this->Contents != (uchar *)0x0) {
    TUniformBufferRef<FPrimitiveUniformShaderParameters>::CreateUniformBufferImmediate
              ((FPrimitiveUniformShaderParameters *)&stack0xffffffffffffffe8,
               (EUniformBufferUsage)this->Contents,this->BufferUsage);
    if (pTVar1 != &stack0xffffffffffffffe8) {
      TVar2 = *pTVar1;
      *pTVar1 = local_18;
      local_18 = TVar2;
    }
    if (local_18 != (TUniformBufferRef<FPrimitiveUniformShaderParameters>)0x0) {
      FRHIResource::Release((FRHIResource *)local_18);
    }
  }
  return;
}

// ReleaseRHI @ 147b83680

void __thiscall
TUniformBuffer<FPrimitiveUniformShaderParameters>::ReleaseRHI
          (TUniformBuffer<FPrimitiveUniformShaderParameters> *this)

{
  TUniformBufferRef<FPrimitiveUniformShaderParameters> this_00;
  
  this_00 = this->UniformBufferRHI;
  if (this_00 != (TUniformBufferRef<FPrimitiveUniformShaderParameters>)0x0) {
    this->UniformBufferRHI = (TUniformBufferRef<FPrimitiveUniformShaderParameters>)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
    return;
  }
  return;
}

// SetContents @ 147b8ace0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TUniformBuffer<FPrimitiveUniformShaderParameters>::SetContents
          (TUniformBuffer<FPrimitiveUniformShaderParameters> *this,FRHICommandListBase *param_1,
          FPrimitiveUniformShaderParameters *param_2)

{
  undefined8 uVar1;
  uchar *puVar2;
  uchar *puVar3;
  longlong lVar4;
  FPrimitiveUniformShaderParameters *pFVar5;
  
  puVar2 = this->Contents;
  if (puVar2 == (uchar *)0x0) {
    puVar2 = FMemory::Malloc(800,0x10);
    this->Contents = puVar2;
  }
  lVar4 = 6;
  do {
    pFVar5 = param_2;
    puVar3 = puVar2;
    uVar1 = *(undefined8 *)&pFVar5->NumInstanceSceneDataEntries;
    param_2 = (FPrimitiveUniformShaderParameters *)((pFVar5->RelativeWorldToLocal).M + 2);
    *(undefined8 *)puVar3 = *(undefined8 *)pFVar5;
    *(undefined8 *)(puVar3 + 8) = uVar1;
    uVar1 = *(undefined8 *)((longlong)&(pFVar5->PositionHigh).field0_0x0 + 8);
    *(undefined8 *)(puVar3 + 0x10) = *(undefined8 *)&(pFVar5->PositionHigh).field0_0x0;
    *(undefined8 *)(puVar3 + 0x18) = uVar1;
    uVar1 = *(undefined8 *)((pFVar5->LocalToRelativeWorld).M[0] + 2);
    *(undefined8 *)(puVar3 + 0x20) = *(undefined8 *)(pFVar5->LocalToRelativeWorld).M[0];
    *(undefined8 *)(puVar3 + 0x28) = uVar1;
    uVar1 = *(undefined8 *)((pFVar5->LocalToRelativeWorld).M[1] + 2);
    *(undefined8 *)(puVar3 + 0x30) = *(undefined8 *)(pFVar5->LocalToRelativeWorld).M[1];
    *(undefined8 *)(puVar3 + 0x38) = uVar1;
    uVar1 = *(undefined8 *)((pFVar5->LocalToRelativeWorld).M[2] + 2);
    *(undefined8 *)(puVar3 + 0x40) = *(undefined8 *)(pFVar5->LocalToRelativeWorld).M[2];
    *(undefined8 *)(puVar3 + 0x48) = uVar1;
    uVar1 = *(undefined8 *)((pFVar5->LocalToRelativeWorld).M[3] + 2);
    *(undefined8 *)(puVar3 + 0x50) = *(undefined8 *)(pFVar5->LocalToRelativeWorld).M[3];
    *(undefined8 *)(puVar3 + 0x58) = uVar1;
    uVar1 = *(undefined8 *)((pFVar5->RelativeWorldToLocal).M[0] + 2);
    *(undefined8 *)(puVar3 + 0x60) = *(undefined8 *)(pFVar5->RelativeWorldToLocal).M[0];
    *(undefined8 *)(puVar3 + 0x68) = uVar1;
    uVar1 = *(undefined8 *)((pFVar5->RelativeWorldToLocal).M[1] + 2);
    *(undefined8 *)(puVar3 + 0x70) = *(undefined8 *)(pFVar5->RelativeWorldToLocal).M[1];
    *(undefined8 *)(puVar3 + 0x78) = uVar1;
    lVar4 = lVar4 + -1;
    puVar2 = puVar3 + 0x80;
  } while (lVar4 != 0);
  uVar1 = *(undefined8 *)((pFVar5->RelativeWorldToLocal).M[2] + 2);
  *(undefined8 *)(puVar3 + 0x80) = *(undefined8 *)param_2;
  *(undefined8 *)(puVar3 + 0x88) = uVar1;
  uVar1 = *(undefined8 *)((pFVar5->RelativeWorldToLocal).M[3] + 2);
  *(undefined8 *)(puVar3 + 0x90) = *(undefined8 *)(pFVar5->RelativeWorldToLocal).M[3];
  *(undefined8 *)(puVar3 + 0x98) = uVar1;
  FRenderResource::UpdateRHI((FRenderResource *)this,param_1);
  return;
}

// InitRHI @ 147e8c070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TUniformBuffer<FSpeedTreeUniformParameters>::InitRHI
          (TUniformBuffer<FSpeedTreeUniformParameters> *this,FRHICommandListBase *param_1)

{
  TUniformBufferRef<FSpeedTreeUniformParameters> *pTVar1;
  EUniformBufferValidation EVar2;
  TUniformBufferRef<FSpeedTreeUniformParameters> TVar3;
  FRHIUniformBufferLayout *pFVar4;
  TUniformBufferRef<FSpeedTreeUniformParameters> this_00;
  code *pcVar5;
  bool bVar6;
  FShaderParametersMetadata *pFVar7;
  TRefCountPtr<FRHIUniformBuffer> TVar8;
  FRHIResource *local_res8;
  TUniformBufferRef<FSpeedTreeUniformParameters> local_28 [2];
  
  pTVar1 = &this->UniformBufferRHI;
  TVar3 = *pTVar1;
  if (TVar3 != (TUniformBufferRef<FSpeedTreeUniformParameters>)0x0) {
    *pTVar1 = (TUniformBufferRef<FSpeedTreeUniformParameters>)0x0;
    FRHIResource::Release((FRHIResource *)TVar3);
  }
  pFVar4 = (FRHIUniformBufferLayout *)this->Contents;
  if (pFVar4 != (FRHIUniformBufferLayout *)0x0) {
    EVar2 = this->BufferUsage;
    pFVar7 = FSpeedTreeUniformParameters::GetStructMetadata();
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
    TVar3 = (TUniformBufferRef<FSpeedTreeUniformParameters>)(TVar8.Reference)->_padding_;
    if (TVar3 != (TUniformBufferRef<FSpeedTreeUniformParameters>)0x0) {
      FRHIResource::AddRef((FRHIResource *)TVar3);
      pFVar7 = FSpeedTreeUniformParameters::GetStructMetadata();
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
        pFVar7 = FSpeedTreeUniformParameters::GetStructMetadata();
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
      if (TVar3 != (TUniformBufferRef<FSpeedTreeUniformParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)TVar3);
      }
    }
    else {
      this_00 = *pTVar1;
      *pTVar1 = TVar3;
      if (this_00 != (TUniformBufferRef<FSpeedTreeUniformParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
        return;
      }
    }
  }
  return;
}

// ReleaseRHI @ 147e8c230

void __thiscall
TUniformBuffer<FSpeedTreeUniformParameters>::ReleaseRHI
          (TUniformBuffer<FSpeedTreeUniformParameters> *this)

{
  TUniformBufferRef<FSpeedTreeUniformParameters> this_00;
  
  this_00 = this->UniformBufferRHI;
  if (this_00 != (TUniformBufferRef<FSpeedTreeUniformParameters>)0x0) {
    this->UniformBufferRHI = (TUniformBufferRef<FSpeedTreeUniformParameters>)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
    return;
  }
  return;
}

// InitRHI @ 147e8c500

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TUniformBuffer<FGPUSkinPassThroughFactoryLooseParameters>::InitRHI
          (TUniformBuffer<FGPUSkinPassThroughFactoryLooseParameters> *this,
          FRHICommandListBase *param_1)

{
  TUniformBufferRef<FGPUSkinPassThroughFactoryLooseParameters> *pTVar1;
  EUniformBufferValidation EVar2;
  TUniformBufferRef<FGPUSkinPassThroughFactoryLooseParameters> TVar3;
  FRHIUniformBufferLayout *pFVar4;
  TUniformBufferRef<FGPUSkinPassThroughFactoryLooseParameters> this_00;
  code *pcVar5;
  bool bVar6;
  FShaderParametersMetadata *pFVar7;
  TRefCountPtr<FRHIUniformBuffer> TVar8;
  FRHIResource *local_res8;
  TUniformBufferRef<FGPUSkinPassThroughFactoryLooseParameters> local_28 [2];
  
  pTVar1 = &this->UniformBufferRHI;
  TVar3 = *pTVar1;
  if (TVar3 != (TUniformBufferRef<FGPUSkinPassThroughFactoryLooseParameters>)0x0) {
    *pTVar1 = (TUniformBufferRef<FGPUSkinPassThroughFactoryLooseParameters>)0x0;
    FRHIResource::Release((FRHIResource *)TVar3);
  }
  pFVar4 = (FRHIUniformBufferLayout *)this->Contents;
  if (pFVar4 != (FRHIUniformBufferLayout *)0x0) {
    EVar2 = this->BufferUsage;
    pFVar7 = FGPUSkinPassThroughFactoryLooseParameters::GetStructMetadata();
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
    TVar3 = (TUniformBufferRef<FGPUSkinPassThroughFactoryLooseParameters>)
            (TVar8.Reference)->_padding_;
    if (TVar3 != (TUniformBufferRef<FGPUSkinPassThroughFactoryLooseParameters>)0x0) {
      FRHIResource::AddRef((FRHIResource *)TVar3);
      pFVar7 = FGPUSkinPassThroughFactoryLooseParameters::GetStructMetadata();
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
        pFVar7 = FGPUSkinPassThroughFactoryLooseParameters::GetStructMetadata();
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
      if (TVar3 != (TUniformBufferRef<FGPUSkinPassThroughFactoryLooseParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)TVar3);
      }
    }
    else {
      this_00 = *pTVar1;
      *pTVar1 = TVar3;
      if (this_00 != (TUniformBufferRef<FGPUSkinPassThroughFactoryLooseParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
        return;
      }
    }
  }
  return;
}

// ReleaseRHI @ 147e8c6c0

void __thiscall
TUniformBuffer<FGPUSkinPassThroughFactoryLooseParameters>::ReleaseRHI
          (TUniformBuffer<FGPUSkinPassThroughFactoryLooseParameters> *this)

{
  TUniformBufferRef<FGPUSkinPassThroughFactoryLooseParameters> this_00;
  
  this_00 = this->UniformBufferRHI;
  if (this_00 != (TUniformBufferRef<FGPUSkinPassThroughFactoryLooseParameters>)0x0) {
    this->UniformBufferRHI = (TUniformBufferRef<FGPUSkinPassThroughFactoryLooseParameters>)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
    return;
  }
  return;
}

// InitRHI @ 1484a1550

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TUniformBuffer<FMobileReflectionCaptureShaderParameters>::InitRHI
          (TUniformBuffer<FMobileReflectionCaptureShaderParameters> *this,
          FRHICommandListBase *param_1)

{
  TUniformBufferRef<FMobileReflectionCaptureShaderParameters> *pTVar1;
  EUniformBufferValidation EVar2;
  TUniformBufferRef<FMobileReflectionCaptureShaderParameters> TVar3;
  FRHIUniformBufferLayout *pFVar4;
  TUniformBufferRef<FMobileReflectionCaptureShaderParameters> this_00;
  code *pcVar5;
  bool bVar6;
  FShaderParametersMetadata *pFVar7;
  TRefCountPtr<FRHIUniformBuffer> TVar8;
  FRHIResource *local_res8;
  TUniformBufferRef<FMobileReflectionCaptureShaderParameters> local_28 [2];
  
  pTVar1 = &this->UniformBufferRHI;
  TVar3 = *pTVar1;
  if (TVar3 != (TUniformBufferRef<FMobileReflectionCaptureShaderParameters>)0x0) {
    *pTVar1 = (TUniformBufferRef<FMobileReflectionCaptureShaderParameters>)0x0;
    FRHIResource::Release((FRHIResource *)TVar3);
  }
  pFVar4 = (FRHIUniformBufferLayout *)this->Contents;
  if (pFVar4 != (FRHIUniformBufferLayout *)0x0) {
    EVar2 = this->BufferUsage;
    pFVar7 = FMobileReflectionCaptureShaderParameters::GetStructMetadata();
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
    TVar3 = (TUniformBufferRef<FMobileReflectionCaptureShaderParameters>)
            (TVar8.Reference)->_padding_;
    if (TVar3 != (TUniformBufferRef<FMobileReflectionCaptureShaderParameters>)0x0) {
      FRHIResource::AddRef((FRHIResource *)TVar3);
      pFVar7 = FMobileReflectionCaptureShaderParameters::GetStructMetadata();
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
        pFVar7 = FMobileReflectionCaptureShaderParameters::GetStructMetadata();
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
      if (TVar3 != (TUniformBufferRef<FMobileReflectionCaptureShaderParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)TVar3);
      }
    }
    else {
      this_00 = *pTVar1;
      *pTVar1 = TVar3;
      if (this_00 != (TUniformBufferRef<FMobileReflectionCaptureShaderParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
        return;
      }
    }
  }
  return;
}

// ReleaseRHI @ 1484a1710

void __thiscall
TUniformBuffer<FMobileReflectionCaptureShaderParameters>::ReleaseRHI
          (TUniformBuffer<FMobileReflectionCaptureShaderParameters> *this)

{
  TUniformBufferRef<FMobileReflectionCaptureShaderParameters> this_00;
  
  this_00 = this->UniformBufferRHI;
  if (this_00 != (TUniformBufferRef<FMobileReflectionCaptureShaderParameters>)0x0) {
    this->UniformBufferRHI = (TUniformBufferRef<FMobileReflectionCaptureShaderParameters>)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
    return;
  }
  return;
}

// InitRHI @ 1484a4ec0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TUniformBuffer<FWorkingColorSpaceShaderParameters>::InitRHI
          (TUniformBuffer<FWorkingColorSpaceShaderParameters> *this,FRHICommandListBase *param_1)

{
  TUniformBufferRef<FWorkingColorSpaceShaderParameters> *pTVar1;
  EUniformBufferValidation EVar2;
  TUniformBufferRef<FWorkingColorSpaceShaderParameters> TVar3;
  FRHIUniformBufferLayout *pFVar4;
  TUniformBufferRef<FWorkingColorSpaceShaderParameters> this_00;
  code *pcVar5;
  bool bVar6;
  FShaderParametersMetadata *pFVar7;
  TRefCountPtr<FRHIUniformBuffer> TVar8;
  FRHIResource *local_res8;
  TUniformBufferRef<FWorkingColorSpaceShaderParameters> local_28 [2];
  
  pTVar1 = &this->UniformBufferRHI;
  TVar3 = *pTVar1;
  if (TVar3 != (TUniformBufferRef<FWorkingColorSpaceShaderParameters>)0x0) {
    *pTVar1 = (TUniformBufferRef<FWorkingColorSpaceShaderParameters>)0x0;
    FRHIResource::Release((FRHIResource *)TVar3);
  }
  pFVar4 = (FRHIUniformBufferLayout *)this->Contents;
  if (pFVar4 != (FRHIUniformBufferLayout *)0x0) {
    EVar2 = this->BufferUsage;
    pFVar7 = FWorkingColorSpaceShaderParameters::GetStructMetadata();
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
    TVar3 = (TUniformBufferRef<FWorkingColorSpaceShaderParameters>)(TVar8.Reference)->_padding_;
    if (TVar3 != (TUniformBufferRef<FWorkingColorSpaceShaderParameters>)0x0) {
      FRHIResource::AddRef((FRHIResource *)TVar3);
      pFVar7 = FWorkingColorSpaceShaderParameters::GetStructMetadata();
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
        pFVar7 = FWorkingColorSpaceShaderParameters::GetStructMetadata();
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
      if (TVar3 != (TUniformBufferRef<FWorkingColorSpaceShaderParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)TVar3);
      }
    }
    else {
      this_00 = *pTVar1;
      *pTVar1 = TVar3;
      if (this_00 != (TUniformBufferRef<FWorkingColorSpaceShaderParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
        return;
      }
    }
  }
  return;
}

// ReleaseRHI @ 1484a5080

void __thiscall
TUniformBuffer<FWorkingColorSpaceShaderParameters>::ReleaseRHI
          (TUniformBuffer<FWorkingColorSpaceShaderParameters> *this)

{
  TUniformBufferRef<FWorkingColorSpaceShaderParameters> this_00;
  
  this_00 = this->UniformBufferRHI;
  if (this_00 != (TUniformBufferRef<FWorkingColorSpaceShaderParameters>)0x0) {
    this->UniformBufferRHI = (TUniformBufferRef<FWorkingColorSpaceShaderParameters>)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
    return;
  }
  return;
}

// InitRHI @ 1484a5a50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TUniformBuffer<FLightmapResourceClusterShaderParameters>::InitRHI
          (TUniformBuffer<FLightmapResourceClusterShaderParameters> *this,
          FRHICommandListBase *param_1)

{
  TUniformBufferRef<FLightmapResourceClusterShaderParameters> *pTVar1;
  EUniformBufferValidation EVar2;
  TUniformBufferRef<FLightmapResourceClusterShaderParameters> TVar3;
  FRHIUniformBufferLayout *pFVar4;
  TUniformBufferRef<FLightmapResourceClusterShaderParameters> this_00;
  code *pcVar5;
  bool bVar6;
  FShaderParametersMetadata *pFVar7;
  TRefCountPtr<FRHIUniformBuffer> TVar8;
  FRHIResource *local_res8;
  TUniformBufferRef<FLightmapResourceClusterShaderParameters> local_28 [2];
  
  pTVar1 = &this->UniformBufferRHI;
  TVar3 = *pTVar1;
  if (TVar3 != (TUniformBufferRef<FLightmapResourceClusterShaderParameters>)0x0) {
    *pTVar1 = (TUniformBufferRef<FLightmapResourceClusterShaderParameters>)0x0;
    FRHIResource::Release((FRHIResource *)TVar3);
  }
  pFVar4 = (FRHIUniformBufferLayout *)this->Contents;
  if (pFVar4 != (FRHIUniformBufferLayout *)0x0) {
    EVar2 = this->BufferUsage;
    pFVar7 = FLightmapResourceClusterShaderParameters::GetStructMetadata();
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
    TVar3 = (TUniformBufferRef<FLightmapResourceClusterShaderParameters>)
            (TVar8.Reference)->_padding_;
    if (TVar3 != (TUniformBufferRef<FLightmapResourceClusterShaderParameters>)0x0) {
      FRHIResource::AddRef((FRHIResource *)TVar3);
      pFVar7 = FLightmapResourceClusterShaderParameters::GetStructMetadata();
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
        pFVar7 = FLightmapResourceClusterShaderParameters::GetStructMetadata();
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
      if (TVar3 != (TUniformBufferRef<FLightmapResourceClusterShaderParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)TVar3);
      }
    }
    else {
      this_00 = *pTVar1;
      *pTVar1 = TVar3;
      if (this_00 != (TUniformBufferRef<FLightmapResourceClusterShaderParameters>)0x0) {
        FRHIResource::Release((FRHIResource *)this_00);
        return;
      }
    }
  }
  return;
}

// ReleaseRHI @ 1484a5c10

void __thiscall
TUniformBuffer<FLightmapResourceClusterShaderParameters>::ReleaseRHI
          (TUniformBuffer<FLightmapResourceClusterShaderParameters> *this)

{
  TUniformBufferRef<FLightmapResourceClusterShaderParameters> this_00;
  
  this_00 = this->UniformBufferRHI;
  if (this_00 != (TUniformBufferRef<FLightmapResourceClusterShaderParameters>)0x0) {
    this->UniformBufferRHI = (TUniformBufferRef<FLightmapResourceClusterShaderParameters>)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
    return;
  }
  return;
}

