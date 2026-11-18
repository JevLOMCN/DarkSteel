// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCloth
// Functions: 18

// StaticClass @ 14db77080

UClass * __cdecl UChaosClothConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosClothConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosCloth",L"ChaosClothConfig",
               &Z_Registration_Info_UClass_UChaosClothConfig.InnerSingleton,
               StaticRegisterNativesUChaosClothConfig,0x180,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UChaosClothConfig>,
               InternalVTableHelperCtorCaller<UChaosClothConfig>,local_res8,
               UClothConfigCommon::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosClothConfig.InnerSingleton;
}

// UChaosClothConfig @ 14db9d340

UChaosClothConfig * __thiscall
UChaosClothConfig::UChaosClothConfig(UChaosClothConfig *this,FVTableHelper *param_1)

{
  UClothConfigCommon::UClothConfigCommon((UClothConfigCommon *)this,param_1);
  this->MassMode = Density;
  this->UniformMass = 0.00015;
  this->_padding_ = (longlong)&___7UChaosClothConfig__6B_;
  (this->Gravity).field0_0x0._s_0.Z = -980.6649780273438;
  (this->LinearVelocityScale).field0_0x0._s_0.X = 0.75;
  (this->LinearVelocityScale).field0_0x0._s_0.Y = 0.75;
  (this->LinearVelocityScale).field0_0x0._s_0.Z = 0.75;
  this->TotalMass = 0.5;
  this->Density = 0.35;
  this->MinPerParticleMass = 0.0001;
  (this->EdgeStiffnessWeighted).Low = 1.0;
  (this->EdgeStiffnessWeighted).High = 1.0;
  (this->BendingStiffnessWeighted).Low = 1.0;
  (this->BendingStiffnessWeighted).High = 1.0;
  this->bUseBendingElements = false;
  this->BucklingRatio = 0.0;
  (this->BucklingStiffnessWeighted).Low = 1.0;
  *(undefined8 *)&(this->BucklingStiffnessWeighted).High = 0x3f800000;
  (this->FlatnessRatio).High = 1.0;
  (this->AreaStiffnessWeighted).Low = 1.0;
  *(undefined8 *)&(this->AreaStiffnessWeighted).High = 0x3f800000;
  (this->TetherStiffness).Low = 1.0;
  (this->TetherStiffness).High = 1.0;
  (this->TetherScale).Low = 1.0;
  (this->TetherScale).High = 1.0;
  this->bUseGeodesicDistance = true;
  this->ShapeTargetStiffness = 0.0;
  this->CollisionThickness = 1.0;
  this->FrictionCoefficient = 0.8;
  this->bUseCCD = false;
  this->bUseSelfCollisions = false;
  this->SelfCollisionThickness = 2.0;
  this->SelfCollisionFriction = 0.0;
  this->bUseSelfIntersections = false;
  this->bUseSelfCollisionSpheres = false;
  this->SelfCollisionSphereRadius = 0.5;
  this->SelfCollisionSphereStiffness = 1.0;
  this->SelfCollisionSphereRadiusCullMultiplier = 1.0;
  this->bUseLegacyBackstop = false;
  this->DampingCoefficient = 0.01;
  this->LocalDampingCoefficient = 0.0;
  this->bUsePointBasedWindModel = false;
  (this->Drag).Low = 0.035;
  (this->Drag).High = 1.0;
  this->bEnableOuterDrag = false;
  (this->OuterDrag).Low = 0.035;
  (this->OuterDrag).High = 1.0;
  (this->Lift).Low = 0.035;
  (this->Lift).High = 1.0;
  this->bEnableOuterLift = false;
  (this->OuterLift).Low = 0.035;
  (this->OuterLift).High = 1.0;
  this->bUseGravityOverride = false;
  this->GravityScale = 1.0;
  (this->Gravity).field0_0x0._s_0.X = 0.0;
  (this->Gravity).field0_0x0._s_0.Y = 0.0;
  (this->Pressure).Low = 0.0;
  *(undefined8 *)&(this->Pressure).High = 0x3f800000;
  *(undefined8 *)&(this->AnimDriveStiffness).High = 0x3f800000;
  (this->AnimDriveDamping).High = 1.0;
  this->VelocityScaleSpace = ReferenceBoneSpace;
  this->bEnableLinearVelocityClamping = false;
  (this->MaxLinearVelocity).field0_0x0._s_0.X = 1000.0;
  (this->MaxLinearVelocity).field0_0x0._s_0.Y = 1000.0;
  (this->MaxLinearVelocity).field0_0x0._s_0.Z = 1000.0;
  this->bEnableLinearAccelerationClamping = false;
  (this->MaxLinearAcceleration).field0_0x0._s_0.X = 60000.0;
  (this->MaxLinearAcceleration).field0_0x0._s_0.Y = 60000.0;
  (this->MaxLinearAcceleration).field0_0x0._s_0.Z = 60000.0;
  this->AngularVelocityScale = 0.75;
  this->bEnableAngularVelocityClamping = false;
  this->MaxAngularVelocity = 200.0;
  this->bEnableAngularAccelerationClamping = false;
  this->MaxAngularAcceleration = 12000.0;
  this->FictitiousAngularScale = 1.0;
  this->bUseTetrahedralConstraints = false;
  this->bUseThinShellVolumeConstraints = false;
  this->bUseContinuousCollisionDetection = false;
  return this;
}

// UChaosClothConfig @ 14db9d5c0

UChaosClothConfig * __thiscall UChaosClothConfig::UChaosClothConfig(UChaosClothConfig *this)

{
  UClothConfigCommon::UClothConfigCommon((UClothConfigCommon *)this);
  this->MassMode = Density;
  this->UniformMass = 0.00015;
  this->_padding_ = (longlong)&___7UChaosClothConfig__6B_;
  (this->Gravity).field0_0x0._s_0.Z = -980.6649780273438;
  (this->LinearVelocityScale).field0_0x0._s_0.X = 0.75;
  (this->LinearVelocityScale).field0_0x0._s_0.Y = 0.75;
  (this->LinearVelocityScale).field0_0x0._s_0.Z = 0.75;
  this->TotalMass = 0.5;
  this->Density = 0.35;
  this->MinPerParticleMass = 0.0001;
  (this->EdgeStiffnessWeighted).Low = 1.0;
  (this->EdgeStiffnessWeighted).High = 1.0;
  (this->BendingStiffnessWeighted).Low = 1.0;
  (this->BendingStiffnessWeighted).High = 1.0;
  this->bUseBendingElements = false;
  this->BucklingRatio = 0.0;
  (this->BucklingStiffnessWeighted).Low = 1.0;
  *(undefined8 *)&(this->BucklingStiffnessWeighted).High = 0x3f800000;
  (this->FlatnessRatio).High = 1.0;
  (this->AreaStiffnessWeighted).Low = 1.0;
  *(undefined8 *)&(this->AreaStiffnessWeighted).High = 0x3f800000;
  (this->TetherStiffness).Low = 1.0;
  (this->TetherStiffness).High = 1.0;
  (this->TetherScale).Low = 1.0;
  (this->TetherScale).High = 1.0;
  this->bUseGeodesicDistance = true;
  this->ShapeTargetStiffness = 0.0;
  this->CollisionThickness = 1.0;
  this->FrictionCoefficient = 0.8;
  this->bUseCCD = false;
  this->bUseSelfCollisions = false;
  this->SelfCollisionThickness = 2.0;
  this->SelfCollisionFriction = 0.0;
  this->bUseSelfIntersections = false;
  this->bUseSelfCollisionSpheres = false;
  this->SelfCollisionSphereRadius = 0.5;
  this->SelfCollisionSphereStiffness = 1.0;
  this->SelfCollisionSphereRadiusCullMultiplier = 1.0;
  this->bUseLegacyBackstop = false;
  this->DampingCoefficient = 0.01;
  this->LocalDampingCoefficient = 0.0;
  this->bUsePointBasedWindModel = false;
  (this->Drag).Low = 0.035;
  (this->Drag).High = 1.0;
  this->bEnableOuterDrag = false;
  (this->OuterDrag).Low = 0.035;
  (this->OuterDrag).High = 1.0;
  (this->Lift).Low = 0.035;
  (this->Lift).High = 1.0;
  this->bEnableOuterLift = false;
  (this->OuterLift).Low = 0.035;
  (this->OuterLift).High = 1.0;
  this->bUseGravityOverride = false;
  this->GravityScale = 1.0;
  (this->Gravity).field0_0x0._s_0.X = 0.0;
  (this->Gravity).field0_0x0._s_0.Y = 0.0;
  (this->Pressure).Low = 0.0;
  *(undefined8 *)&(this->Pressure).High = 0x3f800000;
  *(undefined8 *)&(this->AnimDriveStiffness).High = 0x3f800000;
  (this->AnimDriveDamping).High = 1.0;
  this->VelocityScaleSpace = ReferenceBoneSpace;
  this->bEnableLinearVelocityClamping = false;
  (this->MaxLinearVelocity).field0_0x0._s_0.X = 1000.0;
  (this->MaxLinearVelocity).field0_0x0._s_0.Y = 1000.0;
  (this->MaxLinearVelocity).field0_0x0._s_0.Z = 1000.0;
  this->bEnableLinearAccelerationClamping = false;
  (this->MaxLinearAcceleration).field0_0x0._s_0.X = 60000.0;
  (this->MaxLinearAcceleration).field0_0x0._s_0.Y = 60000.0;
  (this->MaxLinearAcceleration).field0_0x0._s_0.Z = 60000.0;
  this->AngularVelocityScale = 0.75;
  this->bEnableAngularVelocityClamping = false;
  this->MaxAngularVelocity = 200.0;
  this->bEnableAngularAccelerationClamping = false;
  this->MaxAngularAcceleration = 12000.0;
  this->FictitiousAngularScale = 1.0;
  this->bUseTetrahedralConstraints = false;
  this->bUseThinShellVolumeConstraints = false;
  this->bUseContinuousCollisionDetection = false;
  return this;
}

// ~UChaosClothConfig @ 14dba0780

void __thiscall UChaosClothConfig::~UChaosClothConfig(UChaosClothConfig *this)

{
  this->_padding_ = (longlong)&___7UChaosClothConfig__6B_;
  UClothConfigCommon::~UClothConfigCommon((UClothConfigCommon *)this);
  return;
}

// GetMassValue @ 14dbfc8e0

float __thiscall UChaosClothConfig::GetMassValue(UChaosClothConfig *this)

{
  if (this->MassMode == UniformMass) {
    return this->UniformMass;
  }
  if (this->MassMode != TotalMass) {
    return this->Density;
  }
  return this->TotalMass;
}

// GetPrivateStaticClass @ 14dbfecc0

UClass * __cdecl UChaosClothConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UChaosClothConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ChaosCloth",L"ChaosClothConfig",
               &Z_Registration_Info_UClass_UChaosClothConfig.InnerSingleton,
               StaticRegisterNativesUChaosClothConfig,0x180,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UChaosClothConfig>,
               InternalVTableHelperCtorCaller<UChaosClothConfig>,local_res8,
               UClothConfigCommon::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UChaosClothConfig.InnerSingleton;
}

// GetSelfCollisionRadius @ 14dbfff80

float __thiscall UChaosClothConfig::GetSelfCollisionRadius(UChaosClothConfig *this)

{
  return this->SelfCollisionSphereRadiusCullMultiplier * this->SelfCollisionSphereRadius;
}

// MigrateFrom @ 14dc07410

void __thiscall UChaosClothConfig::MigrateFrom(UChaosClothConfig *this,FClothConfig_Legacy *param_1)

{
  return;
}

// MigrateFrom @ 14dc07420

void __thiscall
UChaosClothConfig::MigrateFrom(UChaosClothConfig *this,UClothSharedConfigCommon *param_1)

{
  return;
}

// NeedsInverseMasses @ 14dc07440

bool __thiscall UChaosClothConfig::NeedsInverseMasses(UChaosClothConfig *this)

{
  return false;
}

// NeedsSelfCollisionData @ 14dc07450

bool __thiscall UChaosClothConfig::NeedsSelfCollisionData(UChaosClothConfig *this)

{
  if ((this->bUseSelfCollisionSpheres != false) &&
     (0.0 < this->SelfCollisionSphereRadiusCullMultiplier * this->SelfCollisionSphereRadius)) {
    return true;
  }
  return false;
}

// NeedsTethers @ 14dc07480

bool __thiscall UChaosClothConfig::NeedsTethers(UChaosClothConfig *this)

{
  if (((this->TetherStiffness).Low <= 0.0) && ((this->TetherStiffness).High <= 0.0)) {
    return false;
  }
  return true;
}

// PostLoad @ 14dc094a0

void __thiscall UChaosClothConfig::PostLoad(UChaosClothConfig *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UChaosClothConfig **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// Serialize @ 14dc10780

void __thiscall UChaosClothConfig::Serialize(UChaosClothConfig *this,FArchive *param_1)

{
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FChaosClothConfigCustomVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FPhysicsObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
                    /* WARNING: Could not recover jumptable at 0x00014dc107d9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FUE5ReleaseStreamObjectVersion::GUID);
  return;
}

// Serialize @ 14dc107f0

void __thiscall
UChaosClothConfig::Serialize(UChaosClothConfig *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FChaosClothConfigCustomVersion::GUID);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FPhysicsObjectVersion::GUID);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FFortniteMainBranchObjectVersion::GUID);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FUE5ReleaseStreamObjectVersion::GUID);
  return;
}

// StaticRegisterNativesUChaosClothConfig @ 14dc1ba00

void __cdecl UChaosClothConfig::StaticRegisterNativesUChaosClothConfig(void)

{
  return;
}

// TethersUseGeodesicDistance @ 14dc1c100

bool __thiscall UChaosClothConfig::TethersUseGeodesicDistance(UChaosClothConfig *this)

{
  return this->bUseGeodesicDistance;
}

// __VTableCtorCaller @ 14dc25b00

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UChaosClothConfig::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UClothConfigCommon::UClothConfigCommon((UClothConfigCommon *)pUVar1,param_1);
    *(undefined1 *)(pUVar1 + 1) = 2;
    *(undefined ***)pUVar1 = &___7UChaosClothConfig__6B_;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0xc08ea551e0000000;
    *(undefined8 *)&pUVar1[7].field_0x10 = 0x3fe8000000000000;
    *(undefined8 *)&pUVar1[7].field_0x18 = 0x3fe8000000000000;
    *(undefined8 *)&pUVar1[7].field_0x20 = 0x3fe8000000000000;
    *(undefined4 *)&pUVar1[1].field_0x4 = 0x391d4952;
    *(undefined4 *)&pUVar1[1].field_0x8 = 0x3f000000;
    *(undefined4 *)&pUVar1[1].field_0xc = 0x3eb33333;
    *(undefined4 *)&pUVar1[1].field_0x10 = 0x38d1b717;
    *(undefined4 *)&pUVar1[1].field_0x14 = 0x3f800000;
    *(undefined4 *)&pUVar1[1].field_0x18 = 0x3f800000;
    *(undefined4 *)&pUVar1[1].field_0x1c = 0x3f800000;
    *(undefined4 *)&pUVar1[1].field_0x20 = 0x3f800000;
    pUVar1[1].field_0x24 = 0;
    *(undefined4 *)(pUVar1 + 2) = 0;
    *(undefined4 *)&pUVar1[2].field_0x4 = 0x3f800000;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0x3f800000;
    *(undefined4 *)&pUVar1[2].field_0x10 = 0x3f800000;
    *(undefined4 *)&pUVar1[2].field_0x14 = 0x3f800000;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0x3f800000;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0x3f800000;
    *(undefined4 *)&pUVar1[2].field_0x24 = 0x3f800000;
    *(undefined4 *)(pUVar1 + 3) = 0x3f800000;
    *(undefined4 *)&pUVar1[3].field_0x4 = 0x3f800000;
    pUVar1[3].field_0x8 = 1;
    *(undefined4 *)&pUVar1[3].field_0xc = 0;
    *(undefined4 *)&pUVar1[3].field_0x10 = 0x3f800000;
    *(undefined4 *)&pUVar1[3].field_0x14 = 0x3f4ccccd;
    *(undefined2 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x1c = 0x40000000;
    *(undefined2 *)&pUVar1[3].field_0x24 = 0;
    *(undefined4 *)(pUVar1 + 4) = 0x3f000000;
    *(undefined4 *)&pUVar1[4].field_0x4 = 0x3f800000;
    *(undefined4 *)&pUVar1[4].field_0x8 = 0x3f800000;
    pUVar1[4].field_0xc = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0x3c23d70a;
    pUVar1[4].field_0x18 = 0;
    *(undefined4 *)&pUVar1[4].field_0x1c = 0x3d0f5c29;
    *(undefined4 *)&pUVar1[4].field_0x20 = 0x3f800000;
    pUVar1[4].field_0x24 = 0;
    *(undefined4 *)(pUVar1 + 5) = 0x3d0f5c29;
    *(undefined4 *)&pUVar1[5].field_0x4 = 0x3f800000;
    *(undefined4 *)&pUVar1[5].field_0x8 = 0x3d0f5c29;
    *(undefined4 *)&pUVar1[5].field_0xc = 0x3f800000;
    pUVar1[5].field_0x10 = 0;
    *(undefined4 *)&pUVar1[5].field_0x14 = 0x3d0f5c29;
    *(undefined4 *)&pUVar1[5].field_0x18 = 0x3f800000;
    pUVar1[5].field_0x1c = 0;
    *(undefined4 *)&pUVar1[5].field_0x20 = 0x3f800000;
    *(undefined8 *)(pUVar1 + 6) = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined4 *)&pUVar1[6].field_0x18 = 0;
    *(undefined8 *)&pUVar1[6].field_0x1c = 0x3f800000;
    *(undefined8 *)&pUVar1[6].field_0x24 = 0x3f800000;
    *(undefined4 *)&pUVar1[7].field_0x4 = 0x3f800000;
    pUVar1[7].field_0x8 = 2;
    *(undefined1 *)(pUVar1 + 8) = 0;
    *(undefined4 *)&pUVar1[8].field_0x4 = 0x447a0000;
    *(undefined4 *)&pUVar1[8].field_0x8 = 0x447a0000;
    *(undefined4 *)&pUVar1[8].field_0xc = 0x447a0000;
    pUVar1[8].field_0x10 = 0;
    *(undefined4 *)&pUVar1[8].field_0x14 = 0x476a6000;
    *(undefined4 *)&pUVar1[8].field_0x18 = 0x476a6000;
    *(undefined4 *)&pUVar1[8].field_0x1c = 0x476a6000;
    *(undefined4 *)&pUVar1[8].field_0x20 = 0x3f400000;
    pUVar1[8].field_0x24 = 0;
    *(undefined4 *)(pUVar1 + 9) = 0x43480000;
    pUVar1[9].field_0x4 = 0;
    *(undefined4 *)&pUVar1[9].field_0x8 = 0x463b8000;
    *(undefined4 *)&pUVar1[9].field_0xc = 0x3f800000;
    *(undefined2 *)&pUVar1[9].field_0x10 = 0;
    pUVar1[9].field_0x12 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

