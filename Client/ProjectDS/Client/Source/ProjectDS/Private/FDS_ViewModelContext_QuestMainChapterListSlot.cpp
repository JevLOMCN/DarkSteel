// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// StaticStruct @ 14b5f0d80

UScriptStruct * __cdecl FDS_ViewModelContext_QuestMainChapterListSlot::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_QuestMainChapterListSlot.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_QuestMainChapterListSlot.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_ViewModelContext_QuestMainChapterListSlot,
                         (UObject *)pUVar1,L"DS_ViewModelContext_QuestMainChapterListSlot");
  }
  return Z_Registration_Info_UScriptStruct_FDS_ViewModelContext_QuestMainChapterListSlot.
         OuterSingleton;
}

