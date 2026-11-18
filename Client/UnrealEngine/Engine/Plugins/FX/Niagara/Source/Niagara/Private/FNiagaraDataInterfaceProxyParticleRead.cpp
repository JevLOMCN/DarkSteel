// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// ConsumePerInstanceDataFromGameThread @ 1491b77d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxyParticleRead::ConsumePerInstanceDataFromGameThread
          (FNiagaraDataInterfaceProxyParticleRead *this,void *param_1,ulong64 *param_2)

{
  code *pcVar1;
  bool bVar2;
  FNDIParticleRead_RenderInstanceData *pFVar3;
  
  pFVar3 = TMapBase<unsigned___int64,FNDIParticleRead_RenderInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIParticleRead_RenderInstanceData,0>_>
           ::Find((TMapBase<unsigned___int64,FNDIParticleRead_RenderInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIParticleRead_RenderInstanceData,0>_>
                   *)&this->SystemsRenderData,*param_2);
  if (pFVar3 == (FNDIParticleRead_RenderInstanceData *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1777922452576272618>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceParticleRead.cpp"
                       ,0xea,"InstanceData");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    if (param_1 != (void *)0x0) {
      pFVar3->SourceEmitterGPUContext = *(FNiagaraComputeExecutionContext **)param_1;
      return;
    }
    pFVar3->SourceEmitterGPUContext = (FNiagaraComputeExecutionContext *)0x0;
  }
  return;
}

// GetDispatchArgs @ 1491c78f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraDataInterfaceProxyParticleRead::GetDispatchArgs
          (FNiagaraDataInterfaceProxyParticleRead *this,
          FNDIGpuComputeDispatchArgsGenContext *param_1)

{
  FNiagaraDataSet *pFVar1;
  FNiagaraDataBuffer *pFVar2;
  code *pcVar3;
  bool bVar4;
  FNDIParticleRead_RenderInstanceData *pFVar5;
  TIntVector3<int>_u_0 local_18;
  
  pFVar5 = TMapBase<unsigned___int64,FNDIParticleRead_RenderInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIParticleRead_RenderInstanceData,0>_>
           ::Find((TMapBase<unsigned___int64,FNDIParticleRead_RenderInstanceData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FNDIParticleRead_RenderInstanceData,0>_>
                   *)&this->SystemsRenderData,param_1->SystemInstanceID);
  if (pFVar5 == (FNDIParticleRead_RenderInstanceData *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1777922452576272660>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceParticleRead.cpp"
                       ,0x114,"InstanceData");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (((pFVar5->SourceEmitterGPUContext != (FNiagaraComputeExecutionContext *)0x0) &&
           (pFVar1 = pFVar5->SourceEmitterGPUContext->MainDataSet, pFVar1 != (FNiagaraDataSet *)0x0)
           ) && (pFVar2 = pFVar1->CurrentData, pFVar2 != (FNiagaraDataBuffer *)0x0)) {
    local_18._s_0.X = pFVar2->NumInstances;
    local_18._s_0.Y = 1;
    local_18._s_0.Z = 1;
    FNDIGpuComputeDispatchArgsGenContext::SetDirect
              (param_1,(TIntVector3<int> *)&local_18._s_0,pFVar2->GPUInstanceCountBufferOffset);
  }
  return;
}

// PerInstanceDataPassedToRenderThreadSize @ 1491d5330

int __thiscall
FNiagaraDataInterfaceProxyParticleRead::PerInstanceDataPassedToRenderThreadSize
          (FNiagaraDataInterfaceProxyParticleRead *this)

{
  return 8;
}

