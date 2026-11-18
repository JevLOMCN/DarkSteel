// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationSharing
// Functions: 1

// StaticStruct @ 14e2a7500

UScriptStruct * __cdecl FPerSkeletonAnimationSharingSetup::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPerSkeletonAnimationSharingSetup.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationSharing();
    Z_Registration_Info_UScriptStruct_FPerSkeletonAnimationSharingSetup.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPerSkeletonAnimationSharingSetup,
                         (UObject *)pUVar1,L"PerSkeletonAnimationSharingSetup");
  }
  return Z_Registration_Info_UScriptStruct_FPerSkeletonAnimationSharingSetup.OuterSingleton;
}

