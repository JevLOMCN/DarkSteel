// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// StaticStruct @ 14b52ac30

UScriptStruct * __cdecl FDS_NameTagElementData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_NameTagElementData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_NameTagElementData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_NameTagElementData,(UObject *)pUVar1,
                         L"DS_NameTagElementData");
  }
  return Z_Registration_Info_UScriptStruct_FDS_NameTagElementData.OuterSingleton;
}

