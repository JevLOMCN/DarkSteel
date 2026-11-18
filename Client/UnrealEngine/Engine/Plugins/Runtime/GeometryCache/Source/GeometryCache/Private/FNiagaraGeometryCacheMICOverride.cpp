// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 1

// StaticStruct @ 14c9ff360

UScriptStruct * __cdecl FNiagaraGeometryCacheMICOverride::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraGeometryCacheMICOverride.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_GeometryCache();
    Z_Registration_Info_UScriptStruct_FNiagaraGeometryCacheMICOverride.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraGeometryCacheMICOverride,
                         (UObject *)pUVar1,L"NiagaraGeometryCacheMICOverride");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraGeometryCacheMICOverride.OuterSingleton;
}

