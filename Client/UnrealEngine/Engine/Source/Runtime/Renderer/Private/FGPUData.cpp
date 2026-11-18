// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// GetShaderParameters @ 144bc8f60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FInstanceCullingLoadBalancerBase::FGPUData::GetShaderParameters
          (FGPUData *this,FRDGBuilder *param_1,FShaderParameters *param_2)

{
  FRDGBufferSRV *pFVar1;
  FRDGBufferSRVDesc local_28;
  
  local_28._padding_._0_4_ = 0xffffffff;
  local_28._padding_._4_4_ = 0;
  local_28._padding_ = 0;
  local_28.Buffer = this->BatchBuffer;
  local_28._padding_._0_1_ = 0;
  if ((((local_28.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_28._padding_._0_1_ = 0x1c;
  }
  pFVar1 = FRDGBuilder::CreateSRV(param_1,&local_28);
  param_2->BatchBuffer = pFVar1;
  local_28.Buffer = this->ItemBuffer;
  local_28._padding_._0_1_ = 0;
  local_28._padding_._4_4_ = 0;
  local_28._padding_._0_4_ = 0xffffffff;
  local_28._padding_ = 0;
  if ((((local_28.Buffer)->Desc).Usage & DrawIndirect) != None) {
    local_28._padding_._0_1_ = 0x1c;
  }
  pFVar1 = FRDGBuilder::CreateSRV(param_1,&local_28);
  param_2->ItemBuffer = pFVar1;
  param_2->NumBatches = this->NumBatches;
  param_2->NumItems = this->NumItems;
  param_2->NumGroupsPerBatch = this->NumGroupsPerBatch;
  return;
}

