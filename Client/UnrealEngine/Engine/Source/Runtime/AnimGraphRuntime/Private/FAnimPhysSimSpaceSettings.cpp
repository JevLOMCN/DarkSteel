// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 2

// StaticStruct @ 1463e1640

UScriptStruct * __cdecl FAnimPhysSimSpaceSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FAnimPhysSimSpaceSettings.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FAnimPhysSimSpaceSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FAnimPhysSimSpaceSettings,(UObject *)pUVar1,
                         L"AnimPhysSimSpaceSettings");
  }
  return Z_Registration_Info_UScriptStruct_FAnimPhysSimSpaceSettings.OuterSingleton;
}

// FAnimPhysSimSpaceSettings @ 146406910

FAnimPhysSimSpaceSettings * __thiscall
FAnimPhysSimSpaceSettings::FAnimPhysSimSpaceSettings(FAnimPhysSimSpaceSettings *this)

{
  undefined8 uVar1;
  
  this->SimSpaceAngularAlpha = 0.0;
  this->MaxAngularVelocity = 10000.0;
  this->MaxAngularAcceleration = 10000.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ExternalAngularVelocity).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ExternalAngularVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->ExternalAngularVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

