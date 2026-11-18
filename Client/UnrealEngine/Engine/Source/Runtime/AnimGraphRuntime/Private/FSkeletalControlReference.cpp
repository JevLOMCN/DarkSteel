// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 1

// StaticStruct @ 1463d2c90

UScriptStruct * __cdecl FSkeletalControlReference::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkeletalControlReference.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FSkeletalControlReference.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalControlReference,(UObject *)pUVar1,
                         L"SkeletalControlReference");
  }
  return Z_Registration_Info_UScriptStruct_FSkeletalControlReference.OuterSingleton;
}

