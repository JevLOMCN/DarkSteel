// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 3

// StaticStruct @ 1463ecb90

UScriptStruct * __cdecl FSimSpaceSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSimSpaceSettings.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_AnimGraphRuntime();
    Z_Registration_Info_UScriptStruct_FSimSpaceSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSimSpaceSettings,(UObject *)pUVar1,
                         L"SimSpaceSettings");
  }
  return Z_Registration_Info_UScriptStruct_FSimSpaceSettings.OuterSingleton;
}

// FSimSpaceSettings @ 146407460

FSimSpaceSettings * __thiscall FSimSpaceSettings::FSimSpaceSettings(FSimSpaceSettings *this)

{
  undefined8 uVar1;
  
  this->WorldAlpha = 0.0;
  this->VelocityScaleZ = 1.0;
  this->DampingAlpha = 1.0;
  this->MaxLinearVelocity = 10000.0;
  this->MaxAngularVelocity = 10000.0;
  this->MaxLinearAcceleration = 10000.0;
  this->MaxAngularAcceleration = 10000.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ExternalLinearDragV).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ExternalLinearDragV).field0_0x0._s_0.Y = (double)uVar1;
  (this->ExternalLinearDragV).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ExternalLinearVelocity).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ExternalLinearVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->ExternalLinearVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ExternalAngularVelocity).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ExternalAngularVelocity).field0_0x0._s_0.Y = (double)uVar1;
  (this->ExternalAngularVelocity).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// PostSerialize @ 1464602d0

void __thiscall FSimSpaceSettings::PostSerialize(FSimSpaceSettings *this,FArchive *param_1)

{
  return;
}

