// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeDeveloper
// Functions: 1

// StaticStruct @ 14d702920

UScriptStruct * __cdecl UE::StateTree::CompactTreeView::FStateItemCustomData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateItemCustomData.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeDeveloper();
    Z_Registration_Info_UScriptStruct_FStateItemCustomData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateItemCustomData,(UObject *)pUVar1,
                         L"StateItemCustomData");
  }
  return Z_Registration_Info_UScriptStruct_FStateItemCustomData.OuterSingleton;
}

