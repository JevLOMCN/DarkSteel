// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraCore
// Functions: 2

// StaticStruct @ 148dca4b0

UScriptStruct * __cdecl FNiagaraVariableCommonReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraVariableCommonReference.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NiagaraCore();
    Z_Registration_Info_UScriptStruct_FNiagaraVariableCommonReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraVariableCommonReference,(UObject *)pUVar1
                         ,L"NiagaraVariableCommonReference");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraVariableCommonReference.OuterSingleton;
}

// Serialize @ 148dcb700

bool __thiscall
FNiagaraVariableCommonReference::Serialize(FNiagaraVariableCommonReference *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,this);
  (**(code **)(*(longlong *)param_1 + 0x150))(param_1,&this->UnderlyingType);
  return true;
}

