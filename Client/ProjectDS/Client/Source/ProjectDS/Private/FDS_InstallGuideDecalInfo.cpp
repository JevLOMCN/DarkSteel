// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b4ac670

UScriptStruct * __cdecl FDS_InstallGuideDecalInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_InstallGuideDecalInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_InstallGuideDecalInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_InstallGuideDecalInfo,(UObject *)pUVar1,
                         L"DS_InstallGuideDecalInfo");
  }
  return Z_Registration_Info_UScriptStruct_FDS_InstallGuideDecalInfo.OuterSingleton;
}

// ResetInfo @ 14b9c2ef0

void __thiscall FDS_InstallGuideDecalInfo::ResetInfo(FDS_InstallGuideDecalInfo *this)

{
  undefined8 uVar1;
  
  this->bIsActivated = true;
  this->DecalState = Able;
  this->DecalDepth = 0.0;
  this->DecalRadius = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DecalWorldLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->DecalWorldLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->DecalWorldLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return;
}

