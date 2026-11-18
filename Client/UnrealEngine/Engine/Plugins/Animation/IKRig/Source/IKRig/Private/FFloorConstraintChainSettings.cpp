// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IKRig
// Functions: 2

// StaticStruct @ 14def90d0

UScriptStruct * __cdecl FFloorConstraintChainSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFloorConstraintChainSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_IKRig();
    Z_Registration_Info_UScriptStruct_FFloorConstraintChainSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFloorConstraintChainSettings,(UObject *)pUVar1,
                         L"FloorConstraintChainSettings");
  }
  return Z_Registration_Info_UScriptStruct_FFloorConstraintChainSettings.OuterSingleton;
}

// operator== @ 14df1ee40

bool __thiscall
FFloorConstraintChainSettings::operator==
          (FFloorConstraintChainSettings *this,FFloorConstraintChainSettings *param_1)

{
  bool bVar1;
  
  if (this->EnableFloorConstraint == param_1->EnableFloorConstraint) {
    bVar1 = FMath::TIsNearlyEqualByULP<double,unsigned___int64,_9223372036854775808>
                      (this->Alpha,param_1->Alpha,4);
    if (bVar1) {
      bVar1 = FMath::TIsNearlyEqualByULP<double,unsigned___int64,_9223372036854775808>
                        (this->MaintainHeightOffset,param_1->MaintainHeightOffset,4);
      if (bVar1) {
        return true;
      }
    }
  }
  return false;
}

