// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationSharing
// Functions: 1

// StaticStruct @ 14e2a72b0

UScriptStruct * __cdecl FAnimationSetup::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimationSetup.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationSharing();
    Z_Registration_Info_UScriptStruct_FAnimationSetup.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimationSetup,(UObject *)pUVar1,
                         L"AnimationSetup");
  }
  return Z_Registration_Info_UScriptStruct_FAnimationSetup.OuterSingleton;
}

