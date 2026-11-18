// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// Reset @ 149064140

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraGpuScratchPad::Reset(FNiagaraGpuScratchPad *this,FRHICommandList *param_1,bool param_2)

{
  FScratchBuffer *this_00;
  FScratchBuffer *this_01;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  int *piVar6;
  IRHIComputeContext *pIVar7;
  undefined8 *puVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res18 [8];
  FScratchBuffer *local_res20;
  TIntVector4<unsigned_int>_u_0 local_88;
  undefined8 local_78;
  FScriptContainerElement *local_68;
  int *piStack_60;
  undefined8 local_58;
  
  this_00 = &this->ScratchBufferFloat;
  local_res20 = this_00;
  FScratchBuffer::Reset(this_00);
  this_01 = &this->ScratchBufferUInt;
  FScratchBuffer::Reset(this_01);
  if (param_2) {
    FScratchBuffer::Transition(this_00,param_1,None,UAVCompute,None);
    FScratchBuffer::Transition(this_01,param_1,None,UAVCompute,None);
    piVar6 = _UNK_150689648;
    pFVar5 = ___xmm_3f800000000000000000000000000000;
    pFVar9 = (this->ScratchBufferFloat).Buffers.Array.AllocatorInstance.Data;
    piVar1 = &(this->ScratchBufferFloat).Buffers.Array.ArrayNum;
    iVar3 = *piVar1;
    local_78 = CONCAT44(local_78._4_4_,iVar3);
    pFVar2 = pFVar9 + (longlong)iVar3 * 8;
    local_58 = local_78;
    local_88._0_8_ = pFVar9;
    local_88._8_8_ = piVar1;
    local_68 = pFVar9;
    piStack_60 = piVar1;
    while( true ) {
      if (*piVar1 != iVar3) {
        `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar9 == pFVar2) break;
      local_88._0_8_ = pFVar5;
      local_88._8_8_ = piVar6;
      uVar4 = *(undefined8 *)(*(longlong *)pFVar9 + 8);
      if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
        puVar8 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x30,0x10);
        *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
        pFVar9 = pFVar9 + 8;
        **(undefined8 **)&param_1->field_0x30 = puVar8;
        *(undefined8 **)&param_1->field_0x30 = puVar8 + 1;
        puVar8[1] = 0;
        *puVar8 = &___7FRHICommandClearUAVFloat__6B_;
        puVar8[2] = uVar4;
        puVar8[4] = local_88._0_8_;
        puVar8[5] = local_88._8_8_;
      }
      else {
        pIVar7 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
        (**(code **)(pIVar7->_padding_ + 0x58))(pIVar7,uVar4,&local_88);
        pFVar9 = pFVar9 + 8;
      }
    }
    iVar3 = (this->ScratchBufferUInt).Buffers.Array.ArrayNum;
    piVar1 = &(this->ScratchBufferUInt).Buffers.Array.ArrayNum;
    pFVar9 = (this->ScratchBufferUInt).Buffers.Array.AllocatorInstance.Data;
    local_58 = CONCAT44(local_58._4_4_,iVar3);
    pFVar2 = pFVar9 + (longlong)iVar3 * 8;
    local_78 = local_58;
    local_88._0_8_ = pFVar9;
    local_88._8_8_ = piVar1;
    local_68 = pFVar9;
    piStack_60 = piVar1;
    while( true ) {
      if (*piVar1 != iVar3) {
        `TCheckedPointerIterator<void_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar9 == pFVar2) break;
      local_88._0_8_ = (FScriptContainerElement *)0x0;
      local_88._8_8_ = (int *)0x0;
      FRHIComputeCommandList::ClearUAVUint
                ((FRHIComputeCommandList *)param_1,
                 *(FRHIUnorderedAccessView **)(*(longlong *)pFVar9 + 8),
                 (TIntVector4<unsigned_int> *)&local_88._s_0);
      pFVar9 = pFVar9 + 8;
    }
    FScratchBuffer::Transition(local_res20,param_1,UAVCompute,UAVCompute,None);
    FScratchBuffer::Transition(this_01,param_1,UAVCompute,UAVCompute,None);
  }
  return;
}

