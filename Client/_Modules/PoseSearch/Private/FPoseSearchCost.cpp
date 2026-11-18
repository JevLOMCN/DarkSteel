// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 1

// StaticStruct @ 14a898c70

UScriptStruct * __cdecl FPoseSearchCost::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchCost.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UScriptStruct_FPoseSearchCost.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchCost,(UObject *)pUVar1,
                         L"PoseSearchCost");
  }
  return Z_Registration_Info_UScriptStruct_FPoseSearchCost.OuterSingleton;
}

