// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 2

// StaticStruct @ 14b582ad0

UScriptStruct * __cdecl FDS_SendSkillData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDS_SendSkillData.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ProjectDS();
    Z_Registration_Info_UScriptStruct_FDS_SendSkillData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDS_SendSkillData,(UObject *)pUVar1,
                         L"DS_SendSkillData");
  }
  return Z_Registration_Info_UScriptStruct_FDS_SendSkillData.OuterSingleton;
}

// FDS_SendSkillData @ 14b586ad0

FDS_SendSkillData * __thiscall FDS_SendSkillData::FDS_SendSkillData(FDS_SendSkillData *this)

{
  undefined8 uVar1;
  
  this->SkillID = 0;
  this->SkillStartTime = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->SourceLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->SourceLocation).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->RotateYaw = 0.0;
  this->TargetEntityID = 0;
  (this->SourceLocation).field0_0x0._s_0.Z = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->HitSphereLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->HitSphereLocation).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->HitSphereRadius = 0.0;
  (this->HitSphereLocation).field0_0x0._s_0.Z = (double)uVar1;
  this->HitSphereID = -1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->StopSkillDestLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->StopSkillDestLocation).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->StopSkillDestTime = 0.0;
  (this->StopSkillDestLocation).field0_0x0._s_0.Z = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ProjectileEndLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ProjectileEndLocation).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->ProjectileImpactDelay = 0.0;
  (this->ProjectileEndLocation).field0_0x0._s_0.Z = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ProjectileImpactLocation).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ProjectileImpactLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->ProjectileImpactLocation).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

