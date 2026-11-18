// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 2

// StaticStruct @ 14dee4280

UScriptStruct * __cdecl FRetargetStretchChainSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRetargetStretchChainSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FRetargetStretchChainSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRetargetStretchChainSettings,(UObject *)pUVar1,
                         L"RetargetStretchChainSettings");
  }
  return Z_Registration_Info_UScriptStruct_FRetargetStretchChainSettings.OuterSingleton;
}

// operator== @ 14df1f300

bool __thiscall
FRetargetStretchChainSettings::operator==
          (FRetargetStretchChainSettings *this,FRetargetStretchChainSettings *param_1)

{
  bool bVar1;
  
  if (this->bEnabled == param_1->bEnabled) {
    bVar1 = FMath::TIsNearlyEqualByULP<double,unsigned___int64,_9223372036854775808>
                      (this->MatchSourceLength,param_1->MatchSourceLength,4);
    if (bVar1) {
      bVar1 = FMath::TIsNearlyEqualByULP<double,unsigned___int64,_9223372036854775808>
                        (this->ScaleChainLength,param_1->ScaleChainLength,4);
      if (bVar1) {
        return true;
      }
    }
  }
  return false;
}

