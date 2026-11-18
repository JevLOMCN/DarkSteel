// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothingSystemRuntimeNv
// Functions: 15

// StaticClass @ 148c35680

UClass * __cdecl UClothConfigNv::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothConfigNv.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeNv",L"ClothConfigNv",
               &Z_Registration_Info_UClass_UClothConfigNv.InnerSingleton,
               StaticRegisterNativesUClothConfigNv,0x1a0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UClothConfigNv>,InternalVTableHelperCtorCaller<UClothConfigNv>,
               local_res8,UClothConfigCommon::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothConfigNv.InnerSingleton;
}

// UClothConfigNv @ 148c36450

UClothConfigNv * __thiscall
UClothConfigNv::UClothConfigNv(UClothConfigNv *this,FVTableHelper *param_1)

{
  UClothConfigCommon::UClothConfigCommon((UClothConfigCommon *)this,param_1);
  this->_padding_ = (longlong)&___7UClothConfigNv__6B_;
  (this->VerticalConstraint).Stiffness = 1.0;
  (this->VerticalConstraint).StiffnessMultiplier = 1.0;
  (this->VerticalConstraint).StretchLimit = 1.0;
  (this->VerticalConstraint).CompressionLimit = 1.0;
  (this->HorizontalConstraint).Stiffness = 1.0;
  (this->HorizontalConstraint).StiffnessMultiplier = 1.0;
  (this->HorizontalConstraint).StretchLimit = 1.0;
  (this->HorizontalConstraint).CompressionLimit = 1.0;
  (this->BendConstraint).Stiffness = 1.0;
  (this->BendConstraint).StiffnessMultiplier = 1.0;
  (this->BendConstraint).StretchLimit = 1.0;
  (this->BendConstraint).CompressionLimit = 1.0;
  (this->ShearConstraint).Stiffness = 1.0;
  (this->ShearConstraint).StiffnessMultiplier = 1.0;
  (this->ShearConstraint).StretchLimit = 1.0;
  (this->ShearConstraint).CompressionLimit = 1.0;
  (this->VerticalConstraintConfig_DEPRECATED).Stiffness = 1.0;
  (this->VerticalConstraintConfig_DEPRECATED).StiffnessMultiplier = 1.0;
  (this->VerticalConstraintConfig_DEPRECATED).StretchLimit = 1.0;
  (this->VerticalConstraintConfig_DEPRECATED).CompressionLimit = 1.0;
  (this->HorizontalConstraintConfig_DEPRECATED).Stiffness = 1.0;
  (this->HorizontalConstraintConfig_DEPRECATED).StiffnessMultiplier = 1.0;
  (this->HorizontalConstraintConfig_DEPRECATED).StretchLimit = 1.0;
  (this->HorizontalConstraintConfig_DEPRECATED).CompressionLimit = 1.0;
  (this->BendConstraintConfig_DEPRECATED).Stiffness = 1.0;
  (this->BendConstraintConfig_DEPRECATED).StiffnessMultiplier = 1.0;
  (this->BendConstraintConfig_DEPRECATED).StretchLimit = 1.0;
  (this->BendConstraintConfig_DEPRECATED).CompressionLimit = 1.0;
  (this->ShearConstraintConfig_DEPRECATED).Stiffness = 1.0;
  (this->ShearConstraintConfig_DEPRECATED).StiffnessMultiplier = 1.0;
  (this->ShearConstraintConfig_DEPRECATED).StretchLimit = 1.0;
  (this->ShearConstraintConfig_DEPRECATED).CompressionLimit = 1.0;
  return this;
}

// UClothConfigNv @ 148c36590

UClothConfigNv * __thiscall UClothConfigNv::UClothConfigNv(UClothConfigNv *this)

{
  undefined8 uVar1;
  
  UClothConfigCommon::UClothConfigCommon((UClothConfigCommon *)this);
  this->ClothingWindMethod = Legacy;
  this->_padding_ = (longlong)&___7UClothConfigNv__6B_;
  (this->VerticalConstraint).Stiffness = 1.0;
  (this->VerticalConstraint).StiffnessMultiplier = 1.0;
  (this->VerticalConstraint).StretchLimit = 1.0;
  (this->VerticalConstraint).CompressionLimit = 1.0;
  (this->HorizontalConstraint).Stiffness = 1.0;
  (this->HorizontalConstraint).StiffnessMultiplier = 1.0;
  (this->HorizontalConstraint).StretchLimit = 1.0;
  (this->HorizontalConstraint).CompressionLimit = 1.0;
  (this->BendConstraint).Stiffness = 1.0;
  (this->BendConstraint).StiffnessMultiplier = 1.0;
  (this->BendConstraint).StretchLimit = 1.0;
  (this->BendConstraint).CompressionLimit = 1.0;
  (this->ShearConstraint).Stiffness = 1.0;
  (this->ShearConstraint).StiffnessMultiplier = 1.0;
  (this->ShearConstraint).StretchLimit = 1.0;
  *(undefined8 *)&(this->ShearConstraint).CompressionLimit = 0x3f800000;
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
  (this->VerticalConstraintConfig_DEPRECATED).Stiffness = 1.0;
  (this->VerticalConstraintConfig_DEPRECATED).StiffnessMultiplier = 1.0;
  (this->VerticalConstraintConfig_DEPRECATED).StretchLimit = 1.0;
  (this->VerticalConstraintConfig_DEPRECATED).CompressionLimit = 1.0;
  (this->HorizontalConstraintConfig_DEPRECATED).Stiffness = 1.0;
  (this->HorizontalConstraintConfig_DEPRECATED).StiffnessMultiplier = 1.0;
  (this->HorizontalConstraintConfig_DEPRECATED).StretchLimit = 1.0;
  (this->HorizontalConstraintConfig_DEPRECATED).CompressionLimit = 1.0;
  (this->BendConstraintConfig_DEPRECATED).Stiffness = 1.0;
  (this->BendConstraintConfig_DEPRECATED).StiffnessMultiplier = 1.0;
  (this->BendConstraintConfig_DEPRECATED).StretchLimit = 1.0;
  (this->BendConstraintConfig_DEPRECATED).CompressionLimit = 1.0;
  (this->ShearConstraintConfig_DEPRECATED).Stiffness = 1.0;
  (this->ShearConstraintConfig_DEPRECATED).StiffnessMultiplier = 1.0;
  (this->ShearConstraintConfig_DEPRECATED).StretchLimit = 1.0;
  (this->ShearConstraintConfig_DEPRECATED).CompressionLimit = 1.0;
  this->bUseGravityOverride = false;
  this->TetherStiffness = 1.0;
  this->TetherLimit = 1.0;
  this->CollisionThickness = 1.0;
  this->AnimDriveSpringStiffness = 1.0;
  this->AnimDriveDamperStiffness = 1.0;
  return this;
}

// ~UClothConfigNv @ 148c36a10

void __thiscall UClothConfigNv::~UClothConfigNv(UClothConfigNv *this)

{
  this->_padding_ = (longlong)&___7UClothConfigNv__6B_;
  UClothConfigCommon::~UClothConfigCommon((UClothConfigCommon *)this);
  return;
}

// GetPrivateStaticClass @ 148c36e00

UClass * __cdecl UClothConfigNv::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UClothConfigNv.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ClothingSystemRuntimeNv",L"ClothConfigNv",
               &Z_Registration_Info_UClass_UClothConfigNv.InnerSingleton,
               StaticRegisterNativesUClothConfigNv,0x1a0,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UClothConfigNv>,InternalVTableHelperCtorCaller<UClothConfigNv>,
               local_res8,UClothConfigCommon::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UClothConfigNv.InnerSingleton;
}

// GetSelfCollisionRadius @ 148c37100

float __thiscall UClothConfigNv::GetSelfCollisionRadius(UClothConfigNv *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x2b0))();
  if (cVar1 != '\0') {
    return this->SelfCollisionCullScale * this->SelfCollisionRadius;
  }
  return 0.0;
}

// MigrateFrom @ 148c371c0

void __thiscall UClothConfigNv::MigrateFrom(UClothConfigNv *this,FClothConfig_Legacy *param_1)

{
  double dVar1;
  
  this->ClothingWindMethod = param_1->WindMethod;
  (this->VerticalConstraint).Stiffness = (param_1->VerticalConstraintConfig).Stiffness;
  (this->VerticalConstraint).StiffnessMultiplier =
       (param_1->VerticalConstraintConfig).StiffnessMultiplier;
  (this->VerticalConstraint).StretchLimit = (param_1->VerticalConstraintConfig).StretchLimit;
  (this->VerticalConstraint).CompressionLimit = (param_1->VerticalConstraintConfig).CompressionLimit
  ;
  (this->HorizontalConstraint).Stiffness = (param_1->HorizontalConstraintConfig).Stiffness;
  (this->HorizontalConstraint).StiffnessMultiplier =
       (param_1->HorizontalConstraintConfig).StiffnessMultiplier;
  (this->HorizontalConstraint).StretchLimit = (param_1->HorizontalConstraintConfig).StretchLimit;
  (this->HorizontalConstraint).CompressionLimit =
       (param_1->HorizontalConstraintConfig).CompressionLimit;
  (this->BendConstraint).Stiffness = (param_1->BendConstraintConfig).Stiffness;
  (this->BendConstraint).StiffnessMultiplier = (param_1->BendConstraintConfig).StiffnessMultiplier;
  (this->BendConstraint).StretchLimit = (param_1->BendConstraintConfig).StretchLimit;
  (this->BendConstraint).CompressionLimit = (param_1->BendConstraintConfig).CompressionLimit;
  (this->ShearConstraint).Stiffness = (param_1->ShearConstraintConfig).Stiffness;
  (this->ShearConstraint).StiffnessMultiplier = (param_1->ShearConstraintConfig).StiffnessMultiplier
  ;
  (this->ShearConstraint).StretchLimit = (param_1->ShearConstraintConfig).StretchLimit;
  (this->ShearConstraint).CompressionLimit = (param_1->ShearConstraintConfig).CompressionLimit;
  this->SelfCollisionRadius = param_1->SelfCollisionRadius;
  this->SelfCollisionStiffness = param_1->SelfCollisionStiffness;
  this->SelfCollisionCullScale = param_1->SelfCollisionCullScale;
  dVar1 = (param_1->Damping).field0_0x0._s_0.Y;
  (this->Damping).field0_0x0._s_0.X = (param_1->Damping).field0_0x0._s_0.X;
  (this->Damping).field0_0x0._s_0.Y = dVar1;
  (this->Damping).field0_0x0._s_0.Z = (param_1->Damping).field0_0x0._s_0.Z;
  this->Friction = param_1->Friction;
  this->WindDragCoefficient = param_1->WindDragCoefficient;
  this->WindLiftCoefficient = param_1->WindLiftCoefficient;
  dVar1 = (param_1->LinearDrag).field0_0x0._s_0.Y;
  (this->LinearDrag).field0_0x0._s_0.X = (param_1->LinearDrag).field0_0x0._s_0.X;
  (this->LinearDrag).field0_0x0._s_0.Y = dVar1;
  (this->LinearDrag).field0_0x0._s_0.Z = (param_1->LinearDrag).field0_0x0._s_0.Z;
  dVar1 = (param_1->AngularDrag).field0_0x0._s_0.Y;
  (this->AngularDrag).field0_0x0._s_0.X = (param_1->AngularDrag).field0_0x0._s_0.X;
  (this->AngularDrag).field0_0x0._s_0.Y = dVar1;
  (this->AngularDrag).field0_0x0._s_0.Z = (param_1->AngularDrag).field0_0x0._s_0.Z;
  dVar1 = (param_1->LinearInertiaScale).field0_0x0._s_0.Y;
  (this->LinearInertiaScale).field0_0x0._s_0.X = (param_1->LinearInertiaScale).field0_0x0._s_0.X;
  (this->LinearInertiaScale).field0_0x0._s_0.Y = dVar1;
  (this->LinearInertiaScale).field0_0x0._s_0.Z = (param_1->LinearInertiaScale).field0_0x0._s_0.Z;
  dVar1 = (param_1->AngularInertiaScale).field0_0x0._s_0.Y;
  (this->AngularInertiaScale).field0_0x0._s_0.X = (param_1->AngularInertiaScale).field0_0x0._s_0.X;
  (this->AngularInertiaScale).field0_0x0._s_0.Y = dVar1;
  (this->AngularInertiaScale).field0_0x0._s_0.Z = (param_1->AngularInertiaScale).field0_0x0._s_0.Z;
  dVar1 = (param_1->CentrifugalInertiaScale).field0_0x0._s_0.Y;
  (this->CentrifugalInertiaScale).field0_0x0._s_0.X =
       (param_1->CentrifugalInertiaScale).field0_0x0._s_0.X;
  (this->CentrifugalInertiaScale).field0_0x0._s_0.Y = dVar1;
  (this->CentrifugalInertiaScale).field0_0x0._s_0.Z =
       (param_1->CentrifugalInertiaScale).field0_0x0._s_0.Z;
  this->SolverFrequency = param_1->SolverFrequency;
  this->StiffnessFrequency = param_1->StiffnessFrequency;
  this->GravityScale = param_1->GravityScale;
  dVar1 = (param_1->GravityOverride).field0_0x0._s_0.Y;
  (this->GravityOverride).field0_0x0._s_0.X = (param_1->GravityOverride).field0_0x0._s_0.X;
  (this->GravityOverride).field0_0x0._s_0.Y = dVar1;
  (this->GravityOverride).field0_0x0._s_0.Z = (param_1->GravityOverride).field0_0x0._s_0.Z;
  this->bUseGravityOverride = param_1->bUseGravityOverride;
  this->TetherStiffness = param_1->TetherStiffness;
  this->TetherLimit = param_1->TetherLimit;
  this->CollisionThickness = param_1->CollisionThickness;
  this->AnimDriveSpringStiffness = param_1->AnimDriveSpringStiffness;
  this->AnimDriveDamperStiffness = param_1->AnimDriveDamperStiffness;
  return;
}

// MigrateTo @ 148c373b0

bool __thiscall UClothConfigNv::MigrateTo(UClothConfigNv *this,FClothConfig_Legacy *param_1)

{
  double dVar1;
  
  param_1->WindMethod = this->ClothingWindMethod;
  (param_1->VerticalConstraintConfig).Stiffness = (this->VerticalConstraint).Stiffness;
  (param_1->VerticalConstraintConfig).StiffnessMultiplier =
       (this->VerticalConstraint).StiffnessMultiplier;
  (param_1->VerticalConstraintConfig).StretchLimit = (this->VerticalConstraint).StretchLimit;
  (param_1->VerticalConstraintConfig).CompressionLimit = (this->VerticalConstraint).CompressionLimit
  ;
  (param_1->HorizontalConstraintConfig).Stiffness = (this->HorizontalConstraint).Stiffness;
  (param_1->HorizontalConstraintConfig).StiffnessMultiplier =
       (this->HorizontalConstraint).StiffnessMultiplier;
  (param_1->HorizontalConstraintConfig).StretchLimit = (this->HorizontalConstraint).StretchLimit;
  (param_1->HorizontalConstraintConfig).CompressionLimit =
       (this->HorizontalConstraint).CompressionLimit;
  (param_1->BendConstraintConfig).Stiffness = (this->BendConstraint).Stiffness;
  (param_1->BendConstraintConfig).StiffnessMultiplier = (this->BendConstraint).StiffnessMultiplier;
  (param_1->BendConstraintConfig).StretchLimit = (this->BendConstraint).StretchLimit;
  (param_1->BendConstraintConfig).CompressionLimit = (this->BendConstraint).CompressionLimit;
  (param_1->ShearConstraintConfig).Stiffness = (this->ShearConstraint).Stiffness;
  (param_1->ShearConstraintConfig).StiffnessMultiplier = (this->ShearConstraint).StiffnessMultiplier
  ;
  (param_1->ShearConstraintConfig).StretchLimit = (this->ShearConstraint).StretchLimit;
  (param_1->ShearConstraintConfig).CompressionLimit = (this->ShearConstraint).CompressionLimit;
  param_1->SelfCollisionRadius = this->SelfCollisionRadius;
  param_1->SelfCollisionStiffness = this->SelfCollisionStiffness;
  param_1->SelfCollisionCullScale = this->SelfCollisionCullScale;
  dVar1 = (this->Damping).field0_0x0._s_0.Y;
  (param_1->Damping).field0_0x0._s_0.X = (this->Damping).field0_0x0._s_0.X;
  (param_1->Damping).field0_0x0._s_0.Y = dVar1;
  (param_1->Damping).field0_0x0._s_0.Z = (this->Damping).field0_0x0._s_0.Z;
  param_1->Friction = this->Friction;
  param_1->WindDragCoefficient = this->WindDragCoefficient;
  param_1->WindLiftCoefficient = this->WindLiftCoefficient;
  dVar1 = (this->LinearDrag).field0_0x0._s_0.Y;
  (param_1->LinearDrag).field0_0x0._s_0.X = (this->LinearDrag).field0_0x0._s_0.X;
  (param_1->LinearDrag).field0_0x0._s_0.Y = dVar1;
  (param_1->LinearDrag).field0_0x0._s_0.Z = (this->LinearDrag).field0_0x0._s_0.Z;
  dVar1 = (this->AngularDrag).field0_0x0._s_0.Y;
  (param_1->AngularDrag).field0_0x0._s_0.X = (this->AngularDrag).field0_0x0._s_0.X;
  (param_1->AngularDrag).field0_0x0._s_0.Y = dVar1;
  (param_1->AngularDrag).field0_0x0._s_0.Z = (this->AngularDrag).field0_0x0._s_0.Z;
  dVar1 = (this->LinearInertiaScale).field0_0x0._s_0.Y;
  (param_1->LinearInertiaScale).field0_0x0._s_0.X = (this->LinearInertiaScale).field0_0x0._s_0.X;
  (param_1->LinearInertiaScale).field0_0x0._s_0.Y = dVar1;
  (param_1->LinearInertiaScale).field0_0x0._s_0.Z = (this->LinearInertiaScale).field0_0x0._s_0.Z;
  dVar1 = (this->AngularInertiaScale).field0_0x0._s_0.Y;
  (param_1->AngularInertiaScale).field0_0x0._s_0.X = (this->AngularInertiaScale).field0_0x0._s_0.X;
  (param_1->AngularInertiaScale).field0_0x0._s_0.Y = dVar1;
  (param_1->AngularInertiaScale).field0_0x0._s_0.Z = (this->AngularInertiaScale).field0_0x0._s_0.Z;
  dVar1 = (this->CentrifugalInertiaScale).field0_0x0._s_0.Y;
  (param_1->CentrifugalInertiaScale).field0_0x0._s_0.X =
       (this->CentrifugalInertiaScale).field0_0x0._s_0.X;
  (param_1->CentrifugalInertiaScale).field0_0x0._s_0.Y = dVar1;
  (param_1->CentrifugalInertiaScale).field0_0x0._s_0.Z =
       (this->CentrifugalInertiaScale).field0_0x0._s_0.Z;
  param_1->SolverFrequency = this->SolverFrequency;
  param_1->StiffnessFrequency = this->StiffnessFrequency;
  param_1->GravityScale = this->GravityScale;
  dVar1 = (this->GravityOverride).field0_0x0._s_0.Y;
  (param_1->GravityOverride).field0_0x0._s_0.X = (this->GravityOverride).field0_0x0._s_0.X;
  (param_1->GravityOverride).field0_0x0._s_0.Y = dVar1;
  (param_1->GravityOverride).field0_0x0._s_0.Z = (this->GravityOverride).field0_0x0._s_0.Z;
  param_1->bUseGravityOverride = this->bUseGravityOverride;
  param_1->TetherStiffness = this->TetherStiffness;
  param_1->TetherLimit = this->TetherLimit;
  param_1->CollisionThickness = this->CollisionThickness;
  param_1->AnimDriveSpringStiffness = this->AnimDriveSpringStiffness;
  param_1->AnimDriveDamperStiffness = this->AnimDriveDamperStiffness;
  return true;
}

// NeedsInverseMasses @ 148c37580

bool __thiscall UClothConfigNv::NeedsInverseMasses(UClothConfigNv *this)

{
  return true;
}

// NeedsSelfCollisionData @ 148c37590

bool __thiscall UClothConfigNv::NeedsSelfCollisionData(UClothConfigNv *this)

{
  if ((0.0 < this->SelfCollisionRadius) && (0.0 < this->SelfCollisionStiffness)) {
    return true;
  }
  return false;
}

// NeedsTethers @ 148c375b0

bool __thiscall UClothConfigNv::NeedsTethers(UClothConfigNv *this)

{
  return false;
}

// PostLoad @ 148c375d0

void __thiscall UClothConfigNv::PostLoad(UClothConfigNv *this)

{
  int iVar1;
  FGuid local_18;
  
  UObject::PostLoad((UObject *)this);
  local_18 = FClothConfigNvCustomVersion::GUID;
  iVar1 = UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
  if (iVar1 < 1) {
    this->ClothingWindMethod = this->WindMethod_DEPRECATED;
    (this->VerticalConstraint).Stiffness = (this->VerticalConstraintConfig_DEPRECATED).Stiffness;
    (this->VerticalConstraint).StiffnessMultiplier =
         (this->VerticalConstraintConfig_DEPRECATED).StiffnessMultiplier;
    (this->VerticalConstraint).StretchLimit =
         (this->VerticalConstraintConfig_DEPRECATED).StretchLimit;
    (this->VerticalConstraint).CompressionLimit =
         (this->VerticalConstraintConfig_DEPRECATED).CompressionLimit;
    (this->HorizontalConstraint).Stiffness = (this->HorizontalConstraintConfig_DEPRECATED).Stiffness
    ;
    (this->HorizontalConstraint).StiffnessMultiplier =
         (this->HorizontalConstraintConfig_DEPRECATED).StiffnessMultiplier;
    (this->HorizontalConstraint).StretchLimit =
         (this->HorizontalConstraintConfig_DEPRECATED).StretchLimit;
    (this->HorizontalConstraint).CompressionLimit =
         (this->HorizontalConstraintConfig_DEPRECATED).CompressionLimit;
    (this->BendConstraint).Stiffness = (this->BendConstraintConfig_DEPRECATED).Stiffness;
    (this->BendConstraint).StiffnessMultiplier =
         (this->BendConstraintConfig_DEPRECATED).StiffnessMultiplier;
    (this->BendConstraint).StretchLimit = (this->BendConstraintConfig_DEPRECATED).StretchLimit;
    (this->BendConstraint).CompressionLimit =
         (this->BendConstraintConfig_DEPRECATED).CompressionLimit;
    (this->ShearConstraint).Stiffness = (this->ShearConstraintConfig_DEPRECATED).Stiffness;
    (this->ShearConstraint).StiffnessMultiplier =
         (this->ShearConstraintConfig_DEPRECATED).StiffnessMultiplier;
    (this->ShearConstraint).StretchLimit = (this->ShearConstraintConfig_DEPRECATED).StretchLimit;
    (this->ShearConstraint).CompressionLimit =
         (this->ShearConstraintConfig_DEPRECATED).CompressionLimit;
  }
  return;
}

// Serialize @ 148c376b0

void __thiscall UClothConfigNv::Serialize(UClothConfigNv *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
                    /* WARNING: Could not recover jumptable at 0x000148c376d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FClothConfigNvCustomVersion::GUID);
  return;
}

// Serialize @ 148c376e0

void __thiscall UClothConfigNv::Serialize(UClothConfigNv *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FClothConfigNvCustomVersion::GUID);
  return;
}

// StaticRegisterNativesUClothConfigNv @ 148c377b0

void __cdecl UClothConfigNv::StaticRegisterNativesUClothConfigNv(void)

{
  return;
}

