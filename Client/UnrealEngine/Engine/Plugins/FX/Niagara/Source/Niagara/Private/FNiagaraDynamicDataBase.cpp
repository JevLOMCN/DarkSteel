// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// FNiagaraDynamicDataBase @ 149332b50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNiagaraDynamicDataBase * __thiscall
FNiagaraDynamicDataBase::FNiagaraDynamicDataBase
          (FNiagaraDynamicDataBase *this,FNiagaraEmitterInstance *param_1)

{
  FNiagaraDataSet *pFVar1;
  code *pcVar2;
  bool bVar3;
  FNiagaraDynamicDataBase *pFVar4;
  
  this->_padding_ = (longlong)&___7FNiagaraDynamicDataBase__6B_;
  (this->MaterialRelevance).field0_0x0.Raw = 0;
  (this->CPUParticleData).Reference = (FNiagaraDataBuffer *)0x0;
  this->ComputeDataBufferInterface = (INiagaraComputeDataBufferInterface *)0x0;
  if (param_1 == (FNiagaraEmitterInstance *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InEmitter",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRenderer.cpp"
                       ,0x135,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FNiagaraDynamicDataBase *)(*pcVar2)();
      return pFVar4;
    }
  }
  this->SystemInstanceID = param_1->ParentSystemInstance->ID;
  if (param_1->SimTarget == CPUSim) {
    if (param_1->ParticleDataSet == (FNiagaraDataSet *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParticleDataSet",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                         ,0x3a,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FNiagaraDynamicDataBase *)(*pcVar2)();
        return pFVar4;
      }
    }
    pFVar1 = param_1->ParticleDataSet;
    if (pFVar1->CurrentData == (FNiagaraDataBuffer *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x158,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pFVar4 = (FNiagaraDynamicDataBase *)(*pcVar2)();
        return pFVar4;
      }
    }
    TRefCountPtr<FNiagaraDataBuffer>::operator=(&this->CPUParticleData,pFVar1->CurrentData);
    return this;
  }
  this->ComputeDataBufferInterface = param_1->GPUDataBufferInterfaces;
  return this;
}

// ~FNiagaraDynamicDataBase @ 1493360c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNiagaraDynamicDataBase::~FNiagaraDynamicDataBase(FNiagaraDynamicDataBase *this)

{
  FNiagaraDataBuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  this->_padding_ = (longlong)&___7FNiagaraDynamicDataBase__6B_;
  pFVar1 = (this->CPUParticleData).Reference;
  if (pFVar1 != (FNiagaraDataBuffer *)0x0) {
    if ((int)pFVar1->_padding_ < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsBeingRead()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x2c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    LOCK();
    *(int *)&pFVar1->_padding_ = (int)pFVar1->_padding_ + -1;
    UNLOCK();
  }
  return;
}

// ApplyMaterialOverride @ 14933c2f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraDynamicDataBase::ApplyMaterialOverride
          (FNiagaraDynamicDataBase *this,int param_1,UMaterialInterface *param_2)

{
  return;
}

// GetParticleDataToRender @ 1493553a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FNiagaraDataBuffer * __thiscall
FNiagaraDynamicDataBase::GetParticleDataToRender
          (FNiagaraDynamicDataBase *this,FRHICommandListBase *param_1,bool param_2)

{
  INiagaraComputeDataBufferInterface *pIVar1;
  FNiagaraDataBuffer *pFVar2;
  
  pIVar1 = this->ComputeDataBufferInterface;
  if (pIVar1 != (INiagaraComputeDataBufferInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001493553af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pFVar2 = (FNiagaraDataBuffer *)(**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
    return pFVar2;
  }
  return (this->CPUParticleData).Reference;
}

// IsGpuLowLatencyTranslucencyEnabled @ 14935f270

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FNiagaraDynamicDataBase::IsGpuLowLatencyTranslucencyEnabled(FNiagaraDynamicDataBase *this)

{
  undefined1 uVar1;
  
  if (this->ComputeDataBufferInterface != (INiagaraComputeDataBufferInterface *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014935f27c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((longlong)*this->ComputeDataBufferInterface + 8))();
    return (bool)uVar1;
  }
  return false;
}

