// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// StaticStruct @ 1492c1f80

UScriptStruct * __cdecl FNiagaraMeshMICOverride::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraMeshMICOverride.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraMeshMICOverride.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraMeshMICOverride,(UObject *)pUVar1,
                         L"NiagaraMeshMICOverride");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraMeshMICOverride.OuterSingleton;
}

