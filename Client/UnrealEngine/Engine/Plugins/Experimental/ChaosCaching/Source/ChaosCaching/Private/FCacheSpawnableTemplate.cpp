// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 1

// StaticStruct @ 14dadc3f0

UScriptStruct * __cdecl FCacheSpawnableTemplate::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCacheSpawnableTemplate.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosCaching();
    Z_Registration_Info_UScriptStruct_FCacheSpawnableTemplate.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCacheSpawnableTemplate,(UObject *)pUVar1,
                         L"CacheSpawnableTemplate");
  }
  return Z_Registration_Info_UScriptStruct_FCacheSpawnableTemplate.OuterSingleton;
}

