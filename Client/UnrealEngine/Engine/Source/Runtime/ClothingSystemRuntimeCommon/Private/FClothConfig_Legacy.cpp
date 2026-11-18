// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothingSystemRuntimeCommon
// Functions: 2

// StaticStruct @ 148c09ed0

UScriptStruct * __cdecl FClothConfig_Legacy::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClothConfig_Legacy.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
    Z_Registration_Info_UScriptStruct_FClothConfig_Legacy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClothConfig_Legacy,(UObject *)pUVar1,
                         L"ClothConfig_Legacy");
  }
  return Z_Registration_Info_UScriptStruct_FClothConfig_Legacy.OuterSingleton;
}

// FClothConfig_Legacy @ 148c18ec0

FClothConfig_Legacy * __thiscall FClothConfig_Legacy::FClothConfig_Legacy(FClothConfig_Legacy *this)

{
  undefined8 uVar1;
  
  (this->VerticalConstraintConfig).Stiffness = 1.0;
  (this->VerticalConstraintConfig).StiffnessMultiplier = 1.0;
  (this->VerticalConstraintConfig).StretchLimit = 1.0;
  (this->VerticalConstraintConfig).CompressionLimit = 1.0;
  (this->HorizontalConstraintConfig).Stiffness = 1.0;
  (this->HorizontalConstraintConfig).StiffnessMultiplier = 1.0;
  (this->HorizontalConstraintConfig).StretchLimit = 1.0;
  (this->HorizontalConstraintConfig).CompressionLimit = 1.0;
  (this->BendConstraintConfig).Stiffness = 1.0;
  (this->BendConstraintConfig).StiffnessMultiplier = 1.0;
  (this->BendConstraintConfig).StretchLimit = 1.0;
  (this->BendConstraintConfig).CompressionLimit = 1.0;
  (this->ShearConstraintConfig).Stiffness = 1.0;
  (this->ShearConstraintConfig).StiffnessMultiplier = 1.0;
  (this->ShearConstraintConfig).StretchLimit = 1.0;
  *(undefined8 *)&(this->ShearConstraintConfig).CompressionLimit = 0x3f800000;
  this->SelfCollisionStiffness = 0.0;
  (this->Damping).field0_0x0._s_0.X = 0.4000000059604645;
  (this->Damping).field0_0x0._s_0.Y = 0.4000000059604645;
  (this->Damping).field0_0x0._s_0.Z = 0.4000000059604645;
  (this->LinearDrag).field0_0x0._s_0.X = 0.20000000298023224;
  (this->LinearDrag).field0_0x0._s_0.Y = 0.20000000298023224;
  (this->LinearDrag).field0_0x0._s_0.Z = 0.20000000298023224;
  (this->AngularDrag).field0_0x0._s_0.X = 0.20000000298023224;
  (this->AngularDrag).field0_0x0._s_0.Y = 0.20000000298023224;
  (this->AngularDrag).field0_0x0._s_0.Z = 0.20000000298023224;
  (this->LinearInertiaScale).field0_0x0._s_0.X = 1.0;
  (this->LinearInertiaScale).field0_0x0._s_0.Y = 1.0;
  (this->LinearInertiaScale).field0_0x0._s_0.Z = 1.0;
  (this->AngularInertiaScale).field0_0x0._s_0.X = 1.0;
  (this->AngularInertiaScale).field0_0x0._s_0.Y = 1.0;
  (this->AngularInertiaScale).field0_0x0._s_0.Z = 1.0;
  (this->CentrifugalInertiaScale).field0_0x0._s_0.X = 1.0;
  (this->CentrifugalInertiaScale).field0_0x0._s_0.Y = 1.0;
  (this->CentrifugalInertiaScale).field0_0x0._s_0.Z = 1.0;
  this->WindMethod = Legacy;
  this->SelfCollisionCullScale = 1.0;
  this->Friction = 0.1;
  this->WindDragCoefficient = 0.0002;
  this->WindLiftCoefficient = 0.0002;
  this->SolverFrequency = 120.0;
  this->StiffnessFrequency = 100.0;
  this->GravityScale = 1.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->GravityOverride).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->GravityOverride).field0_0x0._s_0.Y = (double)uVar1;
  (this->GravityOverride).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->bUseGravityOverride = false;
  this->TetherStiffness = 1.0;
  this->TetherLimit = 1.0;
  this->CollisionThickness = 1.0;
  this->AnimDriveSpringStiffness = 1.0;
  this->AnimDriveDamperStiffness = 1.0;
  return this;
}

