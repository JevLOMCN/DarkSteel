// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// CopyToStagingBuffer @ 145d1ad20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList::CopyToStagingBuffer
          (FRHIComputeCommandList *this,FRHIBuffer *param_1,FRHIStagingBuffer *param_2,uint param_3,
          uint param_4)

{
  IRHIComputeContext *pIVar1;
  undefined8 *puVar2;
  
  if ((GRHICommandList.bLatchedBypass) && ((this->field_0x29b & 0x20) != 0)) {
    pIVar1 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)this);
    (**(code **)(pIVar1->_padding_ + 0xd8))(pIVar1,param_1,param_2,param_3,param_4);
  }
  else {
    puVar2 = FMemStackBase::Alloc((FMemStackBase *)this,0x28,8);
    *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
    **(undefined8 **)&this->field_0x30 = puVar2;
    *(undefined8 **)&this->field_0x30 = puVar2 + 1;
    puVar2[1] = 0;
    *puVar2 = &___7FRHICommandCopyToStagingBuffer__6B_;
    *(uint *)((longlong)puVar2 + 0x24) = param_4;
    puVar2[2] = param_1;
    puVar2[3] = param_2;
    *(uint *)(puVar2 + 4) = param_3;
  }
  return;
}

// ClearUAVFloat @ 145da3880

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList::ClearUAVFloat
          (FRHIComputeCommandList *this,FRHIUnorderedAccessView *param_1,TVector4<float> *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  IRHIComputeContext *pIVar2;
  undefined8 *puVar3;
  
  if ((GRHICommandList.bLatchedBypass) && ((this->field_0x29b & 0x20) != 0)) {
    pIVar2 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)this);
    UNRECOVERED_JUMPTABLE = *(code **)(pIVar2->_padding_ + 0x58);
                    /* WARNING: Could not recover jumptable at 0x000145da38ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pIVar2,param_1,param_2,UNRECOVERED_JUMPTABLE);
    return;
  }
  puVar3 = FMemStackBase::Alloc((FMemStackBase *)this,0x30,0x10);
  *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
  **(undefined8 **)&this->field_0x30 = puVar3;
  *(undefined8 **)&this->field_0x30 = puVar3 + 1;
  puVar3[1] = 0;
  puVar3[2] = param_1;
  *puVar3 = &___7FRHICommandClearUAVFloat__6B_;
  uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  puVar3[4] = *(undefined8 *)&param_2->field0_0x0;
  puVar3[5] = uVar1;
  return;
}

// ClearUAVUint @ 145da3930

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHIComputeCommandList::ClearUAVUint
          (FRHIComputeCommandList *this,FRHIUnorderedAccessView *param_1,
          TIntVector4<unsigned_int> *param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  IRHIComputeContext *pIVar2;
  undefined8 *puVar3;
  
  if ((GRHICommandList.bLatchedBypass) && ((this->field_0x29b & 0x20) != 0)) {
    pIVar2 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)this);
    UNRECOVERED_JUMPTABLE = *(code **)(pIVar2->_padding_ + 0x60);
                    /* WARNING: Could not recover jumptable at 0x000145da397e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pIVar2,param_1,param_2,UNRECOVERED_JUMPTABLE);
    return;
  }
  puVar3 = FMemStackBase::Alloc((FMemStackBase *)this,0x28,8);
  *(int *)&this->field_0x60 = *(int *)&this->field_0x60 + 1;
  **(undefined8 **)&this->field_0x30 = puVar3;
  *(undefined8 **)&this->field_0x30 = puVar3 + 1;
  puVar3[1] = 0;
  puVar3[2] = param_1;
  *puVar3 = &___7FRHICommandClearUAVUint__6B_;
  uVar1 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
  puVar3[3] = *(undefined8 *)&param_2->field0_0x0;
  puVar3[4] = uVar1;
  return;
}

