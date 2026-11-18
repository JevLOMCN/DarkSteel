// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 1

// StaticStruct @ 14df048f0

UScriptStruct * __cdecl FFilterBoneData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFilterBoneData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FFilterBoneData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFilterBoneData,(UObject *)pUVar1,
                         L"FilterBoneData");
  }
  return Z_Registration_Info_UScriptStruct_FFilterBoneData.OuterSingleton;
}

