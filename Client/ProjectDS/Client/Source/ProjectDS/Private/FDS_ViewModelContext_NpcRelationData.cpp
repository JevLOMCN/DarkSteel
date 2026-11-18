// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// StaticStruct @ 14b5ef010

UScriptStruct * __cdecl FDS_ViewModelContext_NpcRelationData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_NpcRelationData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_NpcRelationData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ViewModelContext_NpcRelationData,
                         (UObject *)pUVar1,L"DS_ViewModelContext_NpcRelationData");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_NpcRelationData.OuterSingleton;
}

