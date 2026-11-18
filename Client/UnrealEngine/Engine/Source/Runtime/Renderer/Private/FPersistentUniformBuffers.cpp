// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// Clear @ 145422270

void __thiscall FPersistentUniformBuffers::Clear(FPersistentUniformBuffers *this)

{
  TUniformBufferRef<FMobileReflectionCaptureShaderParameters> *pTVar1;
  TUniformBufferRef<FMobileDirectionalLightShaderParameters> this_00;
  FRHIResource *this_01;
  FPersistentUniformBuffers *pFVar2;
  
  pTVar1 = &this->MobileSkyReflectionUniformBuffer;
  for (pFVar2 = this; pFVar2 != (FPersistentUniformBuffers *)pTVar1;
      pFVar2 = (FPersistentUniformBuffers *)(pFVar2->MobileDirectionalLightUniformBuffers + 1)) {
    this_00 = pFVar2->MobileDirectionalLightUniformBuffers[0];
    if (this_00 != (TUniformBufferRef<FMobileDirectionalLightShaderParameters>)0x0) {
      pFVar2->MobileDirectionalLightUniformBuffers[0] =
           (TUniformBufferRef<FMobileDirectionalLightShaderParameters>)0x0;
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  this_01 = *(FRHIResource **)&pTVar1->field_0x0;
  if (this_01 != (FRHIResource *)0x0) {
    *(undefined8 *)&pTVar1->field_0x0 = 0;
    FRHIResource::Release(this_01);
  }
  Initialize(this);
  return;
}

// Initialize @ 145443380

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FPersistentUniformBuffers::Initialize(FPersistentUniformBuffers *this)

{
  TUniformBufferRef<FMobileReflectionCaptureShaderParameters> *pTVar1;
  TUniformBufferRef<FMobileDirectionalLightShaderParameters> this_00;
  FName FVar2;
  FRHIUniformBufferLayout *pFVar3;
  TUniformBufferRef<FMobileDirectionalLightShaderParameters> TVar4;
  TUniformBufferRef<FMobileReflectionCaptureShaderParameters> this_01;
  code *pcVar5;
  bool bVar6;
  FShaderParametersMetadata *pFVar7;
  TRefCountPtr<FRHIUniformBuffer> TVar8;
  TUniformBufferRef<FMobileReflectionCaptureShaderParameters> TVar9;
  uint uVar10;
  wchar_t *pwVar11;
  FPersistentUniformBuffers *pFVar12;
  undefined1 auStack_19a8 [32];
  FScriptContainerElement *local_1988;
  wchar_t *local_1980;
  FRHIResource *local_1978;
  undefined1 local_1970 [24];
  FMobileDirectionalLightShaderParameters local_1958;
  FViewUniformShaderParameters local_17e8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_19a8;
  FViewUniformShaderParameters::FViewUniformShaderParameters(&local_17e8);
  FMobileDirectionalLightShaderParameters::FMobileDirectionalLightShaderParameters(&local_1958);
  uVar10 = 0;
  pFVar12 = this;
  do {
    pFVar7 = FMobileDirectionalLightShaderParameters::GetStructMetadata();
    if (((pFVar7->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_1988 = (FScriptContainerElement *)((ulonglong)local_1988 & 0xffffffff00000000);
    TVar8 = RHICreateUniformBuffer
                      (&local_1978,(FRHIUniformBufferLayout *)&local_1958,
                       (EUniformBufferUsage)(pFVar7->Layout).Reference,2);
    this_00 = (TUniformBufferRef<FMobileDirectionalLightShaderParameters>)
              (TVar8.Reference)->_padding_;
    if (this_00 != (TUniformBufferRef<FMobileDirectionalLightShaderParameters>)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
      pFVar7 = FMobileDirectionalLightShaderParameters::GetStructMetadata();
      if (((pFVar7->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x17c,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar2 = ((FRHIResource *)((longlong)this_00 + 0x30))->OwnerName;
      if ((FName)(pFVar7->Layout).Reference != FVar2) {
        if (*(int *)((longlong)FVar2 + 0x20) == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = *(wchar_t **)((longlong)FVar2 + 0x18);
        }
        pFVar7 = FMobileDirectionalLightShaderParameters::GetStructMetadata();
        if (((pFVar7->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsLayoutInitialized()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                               ,0x177,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = (pFVar7->Layout).Reference;
        if ((pFVar3->Name).Data.ArrayNum == 0) {
          local_1988 = (FScriptContainerElement *)0x15060d16c;
        }
        else {
          local_1988 = (pFVar3->Name).Data.AllocatorInstance.Data;
        }
        local_1980 = pwVar11;
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
    if (local_1978 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_1978);
    }
    if (pFVar12 != (FPersistentUniformBuffers *)(local_1970 + 8)) {
      TVar4 = pFVar12->MobileDirectionalLightUniformBuffers[0];
      pFVar12->MobileDirectionalLightUniformBuffers[0] = this_00;
      this_00 = TVar4;
    }
    if (this_00 != (TUniformBufferRef<FMobileDirectionalLightShaderParameters>)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
    uVar10 = uVar10 + 1;
    pFVar12 = (FPersistentUniformBuffers *)(pFVar12->MobileDirectionalLightUniformBuffers + 1);
    if (3 < uVar10) {
      TVar9 = TUniformBufferRef<FMobileReflectionCaptureShaderParameters>::
              CreateUniformBufferImmediate
                        ((FMobileReflectionCaptureShaderParameters *)local_1970,
                         GDefaultMobileReflectionCaptureUniformBuffer._48_4_,2);
      pTVar1 = &this->MobileSkyReflectionUniformBuffer;
      if ((TUniformBufferRef<FMobileReflectionCaptureShaderParameters>)pTVar1 != TVar9) {
        this_01 = *pTVar1;
        *pTVar1 = *(TUniformBufferRef<FMobileReflectionCaptureShaderParameters> *)TVar9;
        *(undefined8 *)TVar9 = 0;
        if (this_01 != (TUniformBufferRef<FMobileReflectionCaptureShaderParameters>)0x0) {
          FRHIResource::Release((FRHIResource *)this_01);
        }
      }
      if ((FRHIResource *)local_1970._0_8_ != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)local_1970._0_8_);
      }
      return;
    }
  } while( true );
}

