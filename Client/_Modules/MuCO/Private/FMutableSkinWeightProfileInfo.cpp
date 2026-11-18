// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 2

// StaticStruct @ 14ab97ae0

UScriptStruct * __cdecl FMutableSkinWeightProfileInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMutableSkinWeightProfileInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CustomizableObject();
    Z_Registration_Info_UScriptStruct_FMutableSkinWeightProfileInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMutableSkinWeightProfileInfo,(UObject *)pUVar1,
                         L"MutableSkinWeightProfileInfo");
  }
  return Z_Registration_Info_UScriptStruct_FMutableSkinWeightProfileInfo.OuterSingleton;
}

// operator== @ 14abc1820

bool __thiscall
FMutableSkinWeightProfileInfo::operator==
          (FMutableSkinWeightProfileInfo *this,FMutableSkinWeightProfileInfo *param_1)

{
  return this->Name == param_1->Name;
}

