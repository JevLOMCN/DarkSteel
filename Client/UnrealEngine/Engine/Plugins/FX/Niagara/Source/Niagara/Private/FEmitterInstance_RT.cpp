// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// ~FEmitterInstance_RT @ 149476ee0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

void __thiscall
NiagaraStateless::FEmitterInstance_RT::~FEmitterInstance_RT(FEmitterInstance_RT *this)

{
  FRHIShaderResourceView *this_00;
  FRHIBuffer *this_01;
  FScriptContainerElement *pFVar1;
  
  this_00 = (this->BindingBuffer).SRV.Reference;
  if (this_00 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_01 = (this->BindingBuffer).Buffer.Reference;
  if (this_01 != (FRHIBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_01);
  }
  pFVar1 = (this->BindingBufferData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FMemory::Free((this->ShaderParameters).Ptr);
  pFVar1 = (this->SpawnInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->EmitterData).SharedReferenceCount.ReferenceController);
  return;
}

// GetDataToRender @ 14947adb0

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FNiagaraDataBuffer * __thiscall
NiagaraStateless::FEmitterInstance_RT::GetDataToRender
          (FEmitterInstance_RT *this,FRHICommandListBase *param_1,bool param_2)

{
  FNiagaraDataBuffer *pFVar1;
  
  if (this->ComputeManager != (FNiagaraStatelessComputeManager *)0x0) {
    pFVar1 = FNiagaraStatelessComputeManager::GetDataBuffer
                       (this->ComputeManager,param_1,(ulong64)this,this);
    return pFVar1;
  }
  return (FNiagaraDataBuffer *)0x0;
}

// HasTranslucentDataToRender @ 14947b870

/* WARNING: Enum "ENiagaraStatelessFeatureMask": Some values do not have unique names */

bool __thiscall
NiagaraStateless::FEmitterInstance_RT::HasTranslucentDataToRender(FEmitterInstance_RT *this)

{
  return false;
}

