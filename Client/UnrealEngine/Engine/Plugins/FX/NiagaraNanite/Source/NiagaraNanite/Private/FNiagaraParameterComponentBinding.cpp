// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraNanite
// Functions: 1

// StaticStruct @ 14da3dc90

UScriptStruct * __cdecl FNiagaraParameterComponentBinding::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraParameterComponentBinding.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NiagaraNanite();
    Z_Registration_Info_UScriptStruct_FNiagaraParameterComponentBinding.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraParameterComponentBinding,
                         (UObject *)pUVar1,L"NiagaraParameterComponentBinding");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraParameterComponentBinding.OuterSingleton;
}

