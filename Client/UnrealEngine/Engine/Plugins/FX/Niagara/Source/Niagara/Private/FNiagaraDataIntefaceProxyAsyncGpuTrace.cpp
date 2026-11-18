// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 5

// ~FNiagaraDataIntefaceProxyAsyncGpuTrace @ 148e56510

void __thiscall
FNiagaraDataIntefaceProxyAsyncGpuTrace::~FNiagaraDataIntefaceProxyAsyncGpuTrace
          (FNiagaraDataIntefaceProxyAsyncGpuTrace *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FNiagaraDataIntefaceProxyAsyncGpuTrace__6B_;
  *(undefined4 *)&(this->SystemInstancesToProxyData_RT).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SystemInstancesToProxyData_RT).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SystemInstancesToProxyData_RT);
  this->_padding_ = (longlong)&___7FNiagaraDataInterfaceProxy__6B_;
  return;
}

// FinalizePreStage @ 148e65480

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
FNiagaraDataIntefaceProxyAsyncGpuTrace::FinalizePreStage
          (FNiagaraDataIntefaceProxyAsyncGpuTrace *this,FRDGBuilder *param_1,
          FNiagaraGpuComputeDispatchInterface *param_2)

{
  FNiagaraAsyncGpuTraceHelper *this_00;
  
  this_00 = (FNiagaraAsyncGpuTraceHelper *)(**(code **)(param_2->_padding_ + 0x118))(param_2);
  if (*(int *)&(this->SystemInstancesToProxyData_RT).field_0x8 !=
      *(int *)&(this->SystemInstancesToProxyData_RT).field_0x34) {
    FNiagaraAsyncGpuTraceHelper::BuildDispatch
              (this_00,(FRHICommandList *)param_1->_padding_,(FNiagaraDataInterfaceProxy *)this);
    return;
  }
  FNiagaraAsyncGpuTraceHelper::BuildDummyDispatch(this_00,(FRHICommandList *)param_1->_padding_);
  return;
}

// PerInstanceDataPassedToRenderThreadSize @ 148e75990

int __thiscall
FNiagaraDataIntefaceProxyAsyncGpuTrace::PerInstanceDataPassedToRenderThreadSize
          (FNiagaraDataIntefaceProxyAsyncGpuTrace *this)

{
  return 0;
}

// PreStage @ 148e785d0

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

void __thiscall
FNiagaraDataIntefaceProxyAsyncGpuTrace::PreStage
          (FNiagaraDataIntefaceProxyAsyncGpuTrace *this,FNDIGpuComputePreStageContext *param_1)

{
  int iVar1;
  int iVar2;
  ulong64 uVar3;
  FInstanceData *pFVar4;
  FNiagaraAsyncGpuTraceHelper *this_00;
  
  uVar3 = FNDIGpuComputePrePostStageContext::GetSystemInstanceID
                    ((FNDIGpuComputePrePostStageContext *)param_1);
  pFVar4 = TMapBase<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData,0>_>
           ::Find((TMapBase<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNiagaraDataIntefaceProxyAsyncGpuTrace::FInstanceData,0>_>
                   *)&this->SystemInstancesToProxyData_RT,uVar3);
  if ((pFVar4 != (FInstanceData *)0x0) && (iVar1 = pFVar4->MaxTracesPerParticle, 0 < iVar1)) {
    iVar2 = *(int *)(*(longlong *)&param_1->field_0x20 + 0x4c);
    this_00 = (FNiagaraAsyncGpuTraceHelper *)
              (**(code **)(**(longlong **)&param_1->field_0x8 + 0x118))();
    FNiagaraAsyncGpuTraceHelper::AddToDispatch
              (this_00,(FNiagaraDataInterfaceProxy *)this,iVar1 * iVar2,pFVar4->MaxRetraces,
               (uint)(pFVar4->ProviderType).Value);
  }
  return;
}

// RequiresPreStageFinalize @ 148e7bc70

bool __thiscall
FNiagaraDataIntefaceProxyAsyncGpuTrace::RequiresPreStageFinalize
          (FNiagaraDataIntefaceProxyAsyncGpuTrace *this)

{
  return true;
}

