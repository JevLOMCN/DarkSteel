// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 1

// StaticStruct @ 1463d6710

UScriptStruct * __cdecl FBlendBoneByChannelEntry::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBlendBoneByChannelEntry.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FBlendBoneByChannelEntry.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBlendBoneByChannelEntry,(UObject *)pUVar1,
                         L"BlendBoneByChannelEntry");
  }
  return Z_Registration_Info_UScriptStruct_FBlendBoneByChannelEntry.OuterSingleton;
}

