// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 2

// StaticStruct @ 14deffd70

UScriptStruct * __cdecl FRetargetPoleVectorSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRetargetPoleVectorSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FRetargetPoleVectorSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRetargetPoleVectorSettings,(UObject *)pUVar1,
                         L"RetargetPoleVectorSettings");
  }
  return Z_Registration_Info_UScriptStruct_FRetargetPoleVectorSettings.OuterSingleton;
}

// operator== @ 14df1f280

bool __thiscall
FRetargetPoleVectorSettings::operator==
          (FRetargetPoleVectorSettings *this,FRetargetPoleVectorSettings *param_1)

{
  bool bVar1;
  
  if (this->bEnabled == param_1->bEnabled) {
    bVar1 = FMath::TIsNearlyEqualByULP<double,unsigned___int64,_9223372036854775808>
                      (this->AlignAlpha,param_1->AlignAlpha,4);
    if (bVar1) {
      bVar1 = FMath::TIsNearlyEqualByULP<double,unsigned___int64,_9223372036854775808>
                        (this->StaticAngularOffset,param_1->StaticAngularOffset,4);
      if ((bVar1) && (this->MaintainOffset == param_1->MaintainOffset)) {
        return true;
      }
    }
  }
  return false;
}

