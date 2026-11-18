// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// StaticStruct @ 148fe2a20

UScriptStruct * __cdecl FNiagaraBakerTextureSource::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraBakerTextureSource.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraBakerTextureSource.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraBakerTextureSource,(UObject *)pUVar1,
                         L"NiagaraBakerTextureSource");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraBakerTextureSource.OuterSingleton;
}

