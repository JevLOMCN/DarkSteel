// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// StaticStruct @ 14df92830

UScriptStruct * __cdecl FGoomBindingGroupInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FGoomBindingGroupInfo.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_HairStrandsCore();
    Z_Registration_Info_UScriptStruct_FGoomBindingGroupInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FGoomBindingGroupInfo,(UObject *)pUVar1,
                         L"GoomBindingGroupInfo");
  }
  return Z_Registration_Info_UScriptStruct_FGoomBindingGroupInfo.OuterSingleton;
}

