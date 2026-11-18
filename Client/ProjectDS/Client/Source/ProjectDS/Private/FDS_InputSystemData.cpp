// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// StaticStruct @ 14b4abd20

UScriptStruct * __cdecl FDS_InputSystemData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_InputSystemData.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_InputSystemData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_InputSystemData,(UObject *)pUVar1,
                         L"DS_InputSystemData");
  }
  return Z_Registration_Info_UScriptStruct_FDS_InputSystemData.OuterSingleton;
}

