// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 1

// StaticStruct @ 14a895130

UScriptStruct * __cdecl FPoseSearchIKWindowConstraint::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchIKWindowConstraint.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UScriptStruct_FPoseSearchIKWindowConstraint.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchIKWindowConstraint,(UObject *)pUVar1,
                         L"PoseSearchIKWindowConstraint");
  }
  return Z_Registration_Info_UScriptStruct_FPoseSearchIKWindowConstraint.OuterSingleton;
}

