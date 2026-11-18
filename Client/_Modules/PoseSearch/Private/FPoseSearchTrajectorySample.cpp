// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 1

// StaticStruct @ 14a8d6fd0

UScriptStruct * __cdecl FPoseSearchTrajectorySample::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchTrajectorySample.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UScriptStruct_FPoseSearchTrajectorySample.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchTrajectorySample,(UObject *)pUVar1,
                         L"PoseSearchTrajectorySample");
  }
  return Z_Registration_Info_UScriptStruct_FPoseSearchTrajectorySample.OuterSingleton;
}

