// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 2

// StaticStruct @ 14ab97aa0

UScriptStruct * __cdecl FAnimBpOverridePhysicsAssetsInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimBpOverridePhysicsAssetsInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CustomizableObject();
    Z_Registration_Info_UScriptStruct_FAnimBpOverridePhysicsAssetsInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimBpOverridePhysicsAssetsInfo,
                         (UObject *)pUVar1,L"AnimBpOverridePhysicsAssetsInfo");
  }
  return Z_Registration_Info_UScriptStruct_FAnimBpOverridePhysicsAssetsInfo.OuterSingleton;
}

// operator== @ 14abc1620

bool __thiscall
FAnimBpOverridePhysicsAssetsInfo::operator==
          (FAnimBpOverridePhysicsAssetsInfo *this,FAnimBpOverridePhysicsAssetsInfo *param_1)

{
  bool bVar1;
  
  bVar1 = FSoftObjectPath::operator==
                    ((FSoftObjectPath *)&(this->AnimInstanceClass).SoftObjectPtr.field_0x8,
                     (FSoftObjectPath *)&(param_1->AnimInstanceClass).SoftObjectPtr.field_0x8);
  if (bVar1) {
    bVar1 = FSoftObjectPath::operator==
                      ((FSoftObjectPath *)&(this->SourceAsset).SoftObjectPtr.field_0x8,
                       (FSoftObjectPath *)&(param_1->SourceAsset).SoftObjectPtr.field_0x8);
    if ((bVar1) && (this->PropertyIndex == param_1->PropertyIndex)) {
      return true;
    }
  }
  return false;
}

