// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 1

// StaticStruct @ 14a90c920

UScriptStruct * __cdecl FPoseSearchTrajectory_WorldCollisionResults::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchTrajectory_WorldCollisionResults.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UScriptStruct_FPoseSearchTrajectory_WorldCollisionResults.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchTrajectory_WorldCollisionResults,
                         (UObject *)pUVar1,L"PoseSearchTrajectory_WorldCollisionResults");
  }
  return Z_Registration_Info_UScriptStruct_FPoseSearchTrajectory_WorldCollisionResults.
         OuterSingleton;
}

