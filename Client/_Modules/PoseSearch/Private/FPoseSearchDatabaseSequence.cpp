// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 2

// StaticStruct @ 14a896cc0

UScriptStruct * __cdecl FPoseSearchDatabaseSequence::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseSequence.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseSequence.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseSequence,(UObject *)pUVar1,
                         L"PoseSearchDatabaseSequence");
  }
  return Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseSequence.OuterSingleton;
}

// GetAnimationAsset @ 14a896d00

UObject * __thiscall
FPoseSearchDatabaseSequence::GetAnimationAsset(FPoseSearchDatabaseSequence *this)

{
  return (UObject *)(this->Sequence).field0_0x0.DebugPtr;
}

