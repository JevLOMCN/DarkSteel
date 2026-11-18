// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// StaticStruct @ 145ef1850

UScriptStruct * __cdecl FForeignControlPointData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FForeignControlPointData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Landscape();
    Z_Registration_Info_UScriptStruct_FForeignControlPointData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FForeignControlPointData,(UObject *)pUVar1,
                         L"ForeignControlPointData");
  }
  return Z_Registration_Info_UScriptStruct_FForeignControlPointData.OuterSingleton;
}

