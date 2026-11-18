// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicModule
// Functions: 1

// StaticStruct @ 14a65a9d0

UScriptStruct * __cdecl FBoneIndexControlAttributeMapping::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FBoneIndexControlAttributeMapping.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigLogicModule();
    Z_Registration_Info_UScriptStruct_FBoneIndexControlAttributeMapping.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FBoneIndexControlAttributeMapping,
                         (UObject *)pUVar1,L"BoneIndexControlAttributeMapping");
  }
  return Z_Registration_Info_UScriptStruct_FBoneIndexControlAttributeMapping.OuterSingleton;
}

