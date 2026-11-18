// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 2

// StaticStruct @ 14a8979b0

UScriptStruct * __cdecl FPoseSearchDatabaseAnimMontage::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimMontage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimMontage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimMontage,(UObject *)pUVar1,
                         L"PoseSearchDatabaseAnimMontage");
  }
  return Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimMontage.OuterSingleton;
}

// GetAnimationAsset @ 14a8979f0

UObject * __thiscall
FPoseSearchDatabaseAnimMontage::GetAnimationAsset(FPoseSearchDatabaseAnimMontage *this)

{
  return (UObject *)(this->AnimMontage).field0_0x0.DebugPtr;
}

