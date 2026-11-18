// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// Execute @ 145c9e9d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandSetShaderParameters<FRHIComputeShader>::Execute
          (FRHICommandSetShaderParameters<FRHIComputeShader> *this,FRHICommandListBase *param_1)

{
  IRHIComputeContext *pIVar1;
  FRHIShaderParameterResource *local_48;
  undefined8 uStack_40;
  FRHIShaderParameterResource *local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  pIVar1 = FRHICommandListBase::GetComputeContext(param_1);
  local_48 = (this->BindlessParameters).DataPtr;
  uStack_40 = *(undefined8 *)&(this->BindlessParameters).ArrayNum;
  local_38 = (this->ResourceParameters).DataPtr;
  uStack_30 = *(undefined8 *)&(this->ResourceParameters).ArrayNum;
  local_28 = *(undefined4 *)&(this->Parameters).DataPtr;
  uStack_24 = *(undefined4 *)((longlong)&(this->Parameters).DataPtr + 4);
  iStack_20 = (this->Parameters).ArrayNum;
  uStack_1c = *(undefined4 *)&(this->Parameters).field_0xc;
  local_18 = *(undefined4 *)&(this->ParametersData).DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&(this->ParametersData).DataPtr + 4);
  iStack_10 = (this->ParametersData).ArrayNum;
  uStack_c = *(undefined4 *)&(this->ParametersData).field_0xc;
  (**(code **)(pIVar1->_padding_ + 0xa0))
            (pIVar1,this->Shader,&local_18,&local_28,&local_38,&local_48);
  return;
}

// Execute @ 145c9ea50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandSetShaderParameters<FRHIGraphicsShader>::Execute
          (FRHICommandSetShaderParameters<FRHIGraphicsShader> *this,FRHICommandListBase *param_1)

{
  IRHICommandContext *pIVar1;
  FRHIShaderParameterResource *local_48;
  undefined8 uStack_40;
  FRHIShaderParameterResource *local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  pIVar1 = FRHICommandListBase::GetContext(param_1);
  local_48 = (this->BindlessParameters).DataPtr;
  uStack_40 = *(undefined8 *)&(this->BindlessParameters).ArrayNum;
  local_38 = (this->ResourceParameters).DataPtr;
  uStack_30 = *(undefined8 *)&(this->ResourceParameters).ArrayNum;
  local_28 = *(undefined4 *)&(this->Parameters).DataPtr;
  uStack_24 = *(undefined4 *)((longlong)&(this->Parameters).DataPtr + 4);
  iStack_20 = (this->Parameters).ArrayNum;
  uStack_1c = *(undefined4 *)&(this->Parameters).field_0xc;
  local_18 = *(undefined4 *)&(this->ParametersData).DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&(this->ParametersData).DataPtr + 4);
  iStack_10 = (this->ParametersData).ArrayNum;
  uStack_c = *(undefined4 *)&(this->ParametersData).field_0xc;
  (**(code **)(pIVar1->_padding_ + 0x1c0))
            (pIVar1,this->Shader,&local_18,&local_28,&local_38,&local_48);
  return;
}

