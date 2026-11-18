// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// Execute @ 145c9ead0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandSetShaderUnbinds<FRHIComputeShader>::Execute
          (FRHICommandSetShaderUnbinds<FRHIComputeShader> *this,FRHICommandListBase *param_1)

{
  IRHIComputeContext *pIVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  pIVar1 = FRHICommandListBase::GetComputeContext(param_1);
  local_18 = *(undefined4 *)&(this->Unbinds).DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&(this->Unbinds).DataPtr + 4);
  iStack_10 = (this->Unbinds).ArrayNum;
  uStack_c = *(undefined4 *)&(this->Unbinds).field_0xc;
  (**(code **)(pIVar1->_padding_ + 0xa8))(pIVar1,this->Shader,&local_18);
  return;
}

// Execute @ 145c9eb10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandSetShaderUnbinds<FRHIGraphicsShader>::Execute
          (FRHICommandSetShaderUnbinds<FRHIGraphicsShader> *this,FRHICommandListBase *param_1)

{
  IRHICommandContext *pIVar1;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  pIVar1 = FRHICommandListBase::GetContext(param_1);
  local_18 = *(undefined4 *)&(this->Unbinds).DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&(this->Unbinds).DataPtr + 4);
  iStack_10 = (this->Unbinds).ArrayNum;
  uStack_c = *(undefined4 *)&(this->Unbinds).field_0xc;
  (**(code **)(pIVar1->_padding_ + 0x1c8))(pIVar1,this->Shader,&local_18);
  return;
}

