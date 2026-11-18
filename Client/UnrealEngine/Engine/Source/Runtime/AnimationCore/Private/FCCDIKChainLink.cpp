// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationCore
// Functions: 1

// StaticStruct @ 142378770

UScriptStruct * __cdecl FCCDIKChainLink::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCCDIKChainLink.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimationCore();
    Z_Registration_Info_UScriptStruct_FCCDIKChainLink.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCCDIKChainLink,(UObject *)pUVar1,
                         L"CCDIKChainLink");
  }
  return Z_Registration_Info_UScriptStruct_FCCDIKChainLink.OuterSingleton;
}

