// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 2

// StaticStruct @ 14df04d40

UScriptStruct * __cdecl FRetargetFKChainSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRetargetFKChainSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FRetargetFKChainSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRetargetFKChainSettings,(UObject *)pUVar1,
                         L"RetargetFKChainSettings");
  }
  return Z_Registration_Info_UScriptStruct_FRetargetFKChainSettings.OuterSingleton;
}

// operator== @ 14df1ef50

bool __thiscall
FRetargetFKChainSettings::operator==
          (FRetargetFKChainSettings *this,FRetargetFKChainSettings *param_1)

{
  bool bVar1;
  
  if ((this->EnableFK == param_1->EnableFK) && (this->RotationMode == param_1->RotationMode)) {
    bVar1 = FMath::TIsNearlyEqualByULP<double,unsigned___int64,_9223372036854775808>
                      (this->RotationAlpha,param_1->RotationAlpha,4);
    if ((bVar1) && (this->TranslationMode == param_1->TranslationMode)) {
      bVar1 = FMath::TIsNearlyEqualByULP<double,unsigned___int64,_9223372036854775808>
                        (this->TranslationAlpha,param_1->TranslationAlpha,4);
      if (bVar1) {
        return true;
      }
    }
  }
  return false;
}

