// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// Execute @ 145c9f070

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandCrossGPUTransferSignal::Execute
          (FRHICommandCrossGPUTransferSignal *this,FRHICommandListBase *param_1)

{
  IRHIComputeContext *pIVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  pIVar1 = FRHICommandListBase::GetComputeContext(param_1);
  local_28 = *(undefined4 *)&(this->PreTransfer).DataPtr;
  uStack_24 = *(undefined4 *)((longlong)&(this->PreTransfer).DataPtr + 4);
  iStack_20 = (this->PreTransfer).ArrayNum;
  uStack_1c = *(undefined4 *)&(this->PreTransfer).field_0xc;
  local_18 = *(undefined4 *)&(this->Params).DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&(this->Params).DataPtr + 4);
  iStack_10 = (this->Params).ArrayNum;
  uStack_c = *(undefined4 *)&(this->Params).field_0xc;
  (**(code **)(pIVar1->_padding_ + 0x118))(pIVar1,&local_18,&local_28);
  return;
}

