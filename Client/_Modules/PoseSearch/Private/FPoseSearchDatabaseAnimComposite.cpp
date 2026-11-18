// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 2

// StaticStruct @ 14a8972e0

UScriptStruct * __cdecl FPoseSearchDatabaseAnimComposite::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimComposite.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PoseSearch();
    Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimComposite.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPoseSearchDatabaseAnimComposite,
                         (UObject *)pUVar1,L"PoseSearchDatabaseAnimComposite");
  }
  return Z_Registration_Info_UScriptStruct_FPoseSearchDatabaseAnimComposite.OuterSingleton;
}

// GetAnimationAsset @ 14a8975f0

UObject * __thiscall
FPoseSearchDatabaseAnimComposite::GetAnimationAsset(FPoseSearchDatabaseAnimComposite *this)

{
  return (UObject *)(this->AnimComposite).field0_0x0.DebugPtr;
}

