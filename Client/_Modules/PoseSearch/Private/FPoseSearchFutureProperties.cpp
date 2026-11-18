// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 1

// StaticStruct @ 14a90d9a0

UScriptStruct * __cdecl FPoseSearchFutureProperties::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchFutureProperties.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UScriptStruct_FPoseSearchFutureProperties.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchFutureProperties,(UObject *)pUVar1,
                         L"PoseSearchFutureProperties");
  }
  return Z_Registration_Info_UScriptStruct_FPoseSearchFutureProperties.OuterSingleton;
}

