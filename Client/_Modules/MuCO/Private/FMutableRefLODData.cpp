// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 1

// StaticStruct @ 14ab97000

UScriptStruct * __cdecl FMutableRefLODData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMutableRefLODData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CustomizableObject();
    Z_Registration_Info_UScriptStruct_FMutableRefLODData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMutableRefLODData,(UObject *)pUVar1,
                         L"MutableRefLODData");
  }
  return Z_Registration_Info_UScriptStruct_FMutableRefLODData.OuterSingleton;
}

