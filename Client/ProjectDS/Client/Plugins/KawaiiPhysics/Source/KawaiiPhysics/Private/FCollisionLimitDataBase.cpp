// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: KawaiiPhysics
// Functions: 2

// StaticStruct @ 14de3b9f0

UScriptStruct * __cdecl FCollisionLimitDataBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCollisionLimitDataBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_KawaiiPhysics();
    Z_Registration_Info_UScriptStruct_FCollisionLimitDataBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCollisionLimitDataBase,(UObject *)pUVar1,
                         L"CollisionLimitDataBase");
  }
  return Z_Registration_Info_UScriptStruct_FCollisionLimitDataBase.OuterSingleton;
}

// FCollisionLimitDataBase @ 14de3d620

FCollisionLimitDataBase * __thiscall
FCollisionLimitDataBase::FCollisionLimitDataBase(FCollisionLimitDataBase *this)

{
  undefined8 uVar1;
  double dVar2;
  
  (this->DrivingBoneName).ComparisonIndex = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->DrivingBoneName).Number = 0;
  (this->OffsetLocation).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->OffsetLocation).field0_0x0._s_0.Y = (double)uVar1;
  (this->OffsetLocation).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->OffsetRotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->OffsetRotation).Yaw = dVar2;
  (this->OffsetRotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Location).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = (double)uVar1;
  (this->Location).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  (this->Rotation).X = UE::Math::TQuat<double>::Identity.X;
  (this->Rotation).Y = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  (this->Rotation).Z = UE::Math::TQuat<double>::Identity.Z;
  (this->Rotation).W = dVar2;
  FGuid::NewGuid(&this->Guid);
  return this;
}

