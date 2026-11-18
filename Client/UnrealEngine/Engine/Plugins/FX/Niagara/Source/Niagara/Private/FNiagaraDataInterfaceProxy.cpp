// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 11

// ~FNiagaraDataInterfaceProxy @ 148e56560

void __thiscall
FNiagaraDataInterfaceProxy::~FNiagaraDataInterfaceProxy(FNiagaraDataInterfaceProxy *this)

{
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  return;
}

// AsIterationProxy @ 148e5bc90

FNiagaraDataInterfaceProxyRW * __thiscall
FNiagaraDataInterfaceProxy::AsIterationProxy(FNiagaraDataInterfaceProxy *this)

{
  return (FNiagaraDataInterfaceProxyRW *)0x0;
}

// ConsumePerInstanceDataFromGameThread @ 148e5e720

void __thiscall
FNiagaraDataInterfaceProxy::ConsumePerInstanceDataFromGameThread
          (FNiagaraDataInterfaceProxy *this,void *param_1,ulong64 *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                     ,0x196,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// FinalizePostStage @ 148e65470

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxy::FinalizePostStage
          (FNiagaraDataInterfaceProxy *this,FRDGBuilder *param_1,
          FNiagaraGpuComputeDispatchInterface *param_2)

{
  return;
}

// FinalizePreStage @ 148e654e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxy::FinalizePreStage
          (FNiagaraDataInterfaceProxy *this,FRDGBuilder *param_1,
          FNiagaraGpuComputeDispatchInterface *param_2)

{
  return;
}

// PostSimulate @ 148e776d0

void __thiscall
FNiagaraDataInterfaceProxy::PostSimulate
          (FNiagaraDataInterfaceProxy *this,FNDIGpuComputePostSimulateContext *param_1)

{
  return;
}

// PostStage @ 148e77880

void __thiscall
FNiagaraDataInterfaceProxy::PostStage
          (FNiagaraDataInterfaceProxy *this,FNDIGpuComputePostStageContext *param_1)

{
  return;
}

// PreStage @ 148e78660

void __thiscall
FNiagaraDataInterfaceProxy::PreStage
          (FNiagaraDataInterfaceProxy *this,FNDIGpuComputePreStageContext *param_1)

{
  return;
}

// RequiresPostStageFinalize @ 148e7bc60

bool __thiscall
FNiagaraDataInterfaceProxy::RequiresPostStageFinalize(FNiagaraDataInterfaceProxy *this)

{
  return false;
}

// RequiresPreStageFinalize @ 148e7bc80

bool __thiscall
FNiagaraDataInterfaceProxy::RequiresPreStageFinalize(FNiagaraDataInterfaceProxy *this)

{
  return false;
}

// ResetData @ 148e7be80

void __thiscall
FNiagaraDataInterfaceProxy::ResetData
          (FNiagaraDataInterfaceProxy *this,FNDIGpuComputeResetContext *param_1)

{
  return;
}

