// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// InitRHI @ 144fc6450

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FMobileDirLightShaderParamsRenderResource::InitRHI
          (FMobileDirLightShaderParamsRenderResource *this,FRHICommandListBase *param_1)

{
  TUniformBufferRef<FMobileDirectionalLightShaderParameters> *pTVar1;
  TUniformBufferRef<FMobileDirectionalLightShaderParameters> this_00;
  FName FVar2;
  FRHIUniformBufferLayout *pFVar3;
  TUniformBufferRef<FMobileDirectionalLightShaderParameters> TVar4;
  code *pcVar5;
  bool bVar6;
  FMobileDirectionalLightShaderParameters *pFVar7;
  FShaderParametersMetadata *pFVar8;
  TRefCountPtr<FRHIUniformBuffer> TVar9;
  wchar_t *pwVar10;
  wchar_t *pwVar11;
  undefined1 auStack_1d8 [32];
  FScriptContainerElement *local_1b8;
  wchar_t *local_1b0;
  FRHIResource *local_1a8;
  longlong local_1a0;
  FMobileDirectionalLightShaderParameters local_198;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  pFVar7 = FMobileDirectionalLightShaderParameters::FMobileDirectionalLightShaderParameters
                     (&local_198);
  pFVar8 = FMobileDirectionalLightShaderParameters::GetStructMetadata();
  pwVar11 = L"";
  if (((pFVar8->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_1b8 = (FScriptContainerElement *)CONCAT44(local_1b8._4_4_,1);
  TVar9 = RHICreateUniformBuffer
                    (&local_1a8,(FRHIUniformBufferLayout *)pFVar7,
                     (EUniformBufferUsage)(pFVar8->Layout).Reference,2);
  this_00 = (TUniformBufferRef<FMobileDirectionalLightShaderParameters>)(TVar9.Reference)->_padding_
  ;
  if (this_00 != (TUniformBufferRef<FMobileDirectionalLightShaderParameters>)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
    pFVar8 = FMobileDirectionalLightShaderParameters::GetStructMetadata();
    if (((pFVar8->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar2 = *(FName *)((longlong)this_00 + 0x40);
    if ((FName)(pFVar8->Layout).Reference != FVar2) {
      if (*(int *)((longlong)FVar2 + 0x20) == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = *(wchar_t **)((longlong)FVar2 + 0x18);
      }
      pFVar8 = FMobileDirectionalLightShaderParameters::GetStructMetadata();
      if (((pFVar8->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x177,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar3 = (pFVar8->Layout).Reference;
      if ((pFVar3->Name).Data.ArrayNum != 0) {
        pwVar11 = (wchar_t *)(pFVar3->Name).Data.AllocatorInstance.Data;
      }
      local_1b8 = (FScriptContainerElement *)pwVar11;
      local_1b0 = pwVar10;
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
  if (local_1a8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_1a8);
  }
  pTVar1 = &this->UniformBufferRHI;
  if (pTVar1 != (TUniformBufferRef<FMobileDirectionalLightShaderParameters> *)&local_1a0) {
    TVar4 = *pTVar1;
    *pTVar1 = this_00;
    this_00 = TVar4;
  }
  if (this_00 != (TUniformBufferRef<FMobileDirectionalLightShaderParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  return;
}

// ReleaseRHI @ 144fcf080

void __thiscall
FMobileDirLightShaderParamsRenderResource::ReleaseRHI
          (FMobileDirLightShaderParamsRenderResource *this)

{
  TUniformBufferRef<FMobileDirectionalLightShaderParameters> this_00;
  
  this_00 = this->UniformBufferRHI;
  if (this_00 != (TUniformBufferRef<FMobileDirectionalLightShaderParameters>)0x0) {
    this->UniformBufferRHI = (TUniformBufferRef<FMobileDirectionalLightShaderParameters>)0x0;
    FRHIResource::Release((FRHIResource *)this_00);
    return;
  }
  return;
}

