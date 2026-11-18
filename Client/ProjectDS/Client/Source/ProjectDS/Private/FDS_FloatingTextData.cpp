// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// StaticStruct @ 14b498480

UScriptStruct * __cdecl FDS_FloatingTextData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_FloatingTextData.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_FloatingTextData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_FloatingTextData,(UObject *)pUVar1,
                         L"DS_FloatingTextData");
  }
  return Z_Registration_Info_UScriptStruct_FDS_FloatingTextData.OuterSingleton;
}

