// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 1

// StaticStruct @ 148de8d90

UScriptStruct * __cdecl FNiagaraShaderScriptExternalConstant::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraShaderScriptExternalConstant.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_NiagaraShader();
    Z_Registration_Info_UScriptStruct_FNiagaraShaderScriptExternalConstant.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraShaderScriptExternalConstant,
                         (UObject *)pUVar1,L"NiagaraShaderScriptExternalConstant");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraShaderScriptExternalConstant.OuterSingleton;
}

