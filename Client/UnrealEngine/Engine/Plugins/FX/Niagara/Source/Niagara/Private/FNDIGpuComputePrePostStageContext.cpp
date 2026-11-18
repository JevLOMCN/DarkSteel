// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// GetInstanceCountManager @ 149105c60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNiagaraGPUInstanceCountManager * __thiscall
FNDIGpuComputePrePostStageContext::GetInstanceCountManager(FNDIGpuComputePrePostStageContext *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  FNiagaraGPUInstanceCountManager *pFVar4;
  
  lVar1 = this->_padding_;
  bVar3 = IsInParallelRenderingThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInParallelRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                       ,0x6a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FNiagaraGPUInstanceCountManager *)(*pcVar2)();
      return pFVar4;
    }
  }
  return (FNiagaraGPUInstanceCountManager *)(lVar1 + 0x48);
}

// GetSystemInstanceID @ 14910b0c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

ulong64 __thiscall
FNDIGpuComputePrePostStageContext::GetSystemInstanceID(FNDIGpuComputePrePostStageContext *this)

{
  return this->SystemTick->SystemInstanceID;
}

// GetSystemLWCTile @ 14910b0e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

TVector<float> * __thiscall
FNDIGpuComputePrePostStageContext::GetSystemLWCTile
          (FNDIGpuComputePrePostStageContext *this,TVector<float> *__return_storage_ptr__)

{
  float fVar1;
  FNiagaraSystemGpuComputeProxy *pFVar2;
  
  pFVar2 = this->SystemTick->SystemGpuComputeProxy;
  fVar1 = (pFVar2->SystemLWCTile).field0_0x0._s_0.Z;
  *(undefined8 *)&__return_storage_ptr__->field0_0x0 =
       *(undefined8 *)&(pFVar2->SystemLWCTile).field0_0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar1;
  return __return_storage_ptr__;
}

// IsInputStage @ 1491176d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FNDIGpuComputePrePostStageContext::IsInputStage(FNDIGpuComputePrePostStageContext *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (this->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataInterfaceProxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterface.cpp"
                       ,0x192,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FNiagaraComputeInstanceData::IsInputStage
                    (this->ComputeInstanceData,this->DataInterfaceProxy,
                     (uint)this->SimStageData->StageIndex);
  return bVar2;
}

// IsIterationStage @ 149117730

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FNDIGpuComputePrePostStageContext::IsIterationStage(FNDIGpuComputePrePostStageContext *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (this->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataInterfaceProxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterface.cpp"
                       ,0x198,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FNiagaraComputeInstanceData::IsIterationStage
                    (this->ComputeInstanceData,this->DataInterfaceProxy,
                     (uint)this->SimStageData->StageIndex);
  return bVar2;
}

// IsOutputStage @ 149117850

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall
FNDIGpuComputePrePostStageContext::IsOutputStage(FNDIGpuComputePrePostStageContext *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if (this->DataInterfaceProxy == (FNiagaraDataInterfaceProxy *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("DataInterfaceProxy",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterface.cpp"
                       ,0x18c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = FNiagaraComputeInstanceData::IsOutputStage
                    (this->ComputeInstanceData,this->DataInterfaceProxy,
                     (uint)this->SimStageData->StageIndex);
  return bVar2;
}

