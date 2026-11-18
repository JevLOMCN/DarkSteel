// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 1

// StaticStruct @ 14a477780

UScriptStruct * __cdecl FRegionScaleFactors::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRegionScaleFactors.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRegionScaleFactors.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRegionScaleFactors,(UObject *)pUVar1,
                         L"RegionScaleFactors");
  }
  return Z_Registration_Info_UScriptStruct_FRegionScaleFactors.OuterSingleton;
}

