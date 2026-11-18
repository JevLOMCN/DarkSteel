// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// StaticStruct @ 14822eda0

UScriptStruct * __cdecl FClusteredComponentData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClusteredComponentData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FClusteredComponentData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClusteredComponentData,(UObject *)pUVar1,
                         L"ClusteredComponentData");
  }
  return Z_Registration_Info_UScriptStruct_FClusteredComponentData.OuterSingleton;
}

