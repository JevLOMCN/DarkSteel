// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 3

// StaticStruct @ 148e42fa0

UScriptStruct * __cdecl FNDIDataChannelFunctionInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNDIDataChannelFunctionInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNDIDataChannelFunctionInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNDIDataChannelFunctionInfo,(UObject *)pUVar1,
                         L"NDIDataChannelFunctionInfo");
  }
  return Z_Registration_Info_UScriptStruct_FNDIDataChannelFunctionInfo.OuterSingleton;
}

// operator== @ 148e57380

bool __thiscall
FNDIDataChannelFunctionInfo::operator==
          (FNDIDataChannelFunctionInfo *this,FNDIDataChannelFunctionInfo *param_1)

{
  int iVar1;
  bool bVar2;
  
  if ((this->FunctionName == param_1->FunctionName) &&
     (iVar1 = (this->Inputs).ArrayNum, iVar1 == (param_1->Inputs).ArrayNum)) {
    bVar2 = CompareItems<FNiagaraVariableBase,int>
                      ((FNiagaraVariableBase *)(this->Inputs).AllocatorInstance.Data,
                       (FNiagaraVariableBase *)(param_1->Inputs).AllocatorInstance.Data,iVar1);
    if ((bVar2) && (iVar1 = (this->Outputs).ArrayNum, iVar1 == (param_1->Outputs).ArrayNum)) {
      bVar2 = CompareItems<FNiagaraVariableBase,int>
                        ((FNiagaraVariableBase *)(this->Outputs).AllocatorInstance.Data,
                         (FNiagaraVariableBase *)(param_1->Outputs).AllocatorInstance.Data,iVar1);
      if (bVar2) {
        return true;
      }
    }
  }
  return false;
}

// CheckHashConflict @ 148e5d470

bool __thiscall
FNDIDataChannelFunctionInfo::CheckHashConflict
          (FNDIDataChannelFunctionInfo *this,FNDIDataChannelFunctionInfo *param_1)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = ::GetTypeHash(param_1);
  uVar4 = ::GetTypeHash(this);
  if (uVar4 != uVar3) {
    return false;
  }
  if ((((this->FunctionName == param_1->FunctionName) &&
       (iVar1 = (this->Inputs).ArrayNum, iVar1 == (param_1->Inputs).ArrayNum)) &&
      (bVar2 = CompareItems<FNiagaraVariableBase,int>
                         ((FNiagaraVariableBase *)(this->Inputs).AllocatorInstance.Data,
                          (FNiagaraVariableBase *)(param_1->Inputs).AllocatorInstance.Data,iVar1),
      bVar2)) &&
     ((iVar1 = (this->Outputs).ArrayNum, iVar1 == (param_1->Outputs).ArrayNum &&
      (bVar2 = CompareItems<FNiagaraVariableBase,int>
                         ((FNiagaraVariableBase *)(this->Outputs).AllocatorInstance.Data,
                          (FNiagaraVariableBase *)(param_1->Outputs).AllocatorInstance.Data,iVar1),
      bVar2)))) {
    return false;
  }
  return true;
}

