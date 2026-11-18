// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 1

// Execute @ 145c9edd0

/* WARNING: Enum "EVertexElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandBuildAccelerationStructures::Execute
          (FRHICommandBuildAccelerationStructures *this,FRHICommandListBase *param_1)

{
  IRHIComputeContext *pIVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  pIVar1 = FRHICommandListBase::GetComputeContext(param_1);
  local_18 = *(undefined4 *)&(this->Params).DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&(this->Params).DataPtr + 4);
  iStack_10 = (this->Params).ArrayNum;
  uStack_c = *(undefined4 *)&(this->Params).field_0xc;
  (**(code **)(pIVar1->_padding_ + 0x138))(pIVar1,&local_18,&this->ScratchBufferRange);
  return;
}

