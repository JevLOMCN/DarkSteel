// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 1

// StaticStruct @ 14e115420

UScriptStruct * __cdecl FOptimusNode_ComponentSource_DuplicationInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusNode_ComponentSource_DuplicationInfo.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusNode_ComponentSource_DuplicationInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusNode_ComponentSource_DuplicationInfo,
                         (UObject *)pUVar1,L"OptimusNode_ComponentSource_DuplicationInfo");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusNode_ComponentSource_DuplicationInfo.
         OuterSingleton;
}

