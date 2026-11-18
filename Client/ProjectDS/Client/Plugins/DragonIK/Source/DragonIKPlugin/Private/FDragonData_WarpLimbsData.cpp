// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DragonIKPlugin
// Functions: 1

// StaticStruct @ 14d2ad8a0

UScriptStruct * __cdecl FDragonData_WarpLimbsData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDragonData_WarpLimbsData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DragonIKPlugin();
    Z_Registration_Info_UScriptStruct_FDragonData_WarpLimbsData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDragonData_WarpLimbsData,(UObject *)pUVar1,
                         L"DragonData_WarpLimbsData");
  }
  return Z_Registration_Info_UScriptStruct_FDragonData_WarpLimbsData.OuterSingleton;
}

