// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 72

// MoveUpdatedComponent @ 147844170

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UMovementComponent::MoveUpdatedComponent
          (UMovementComponent *this,TVector<double> *param_1,TRotator<double> *param_2,bool param_3,
          FHitResult *param_4,ETeleportType param_5)

{
  code *pcVar1;
  undefined1 uVar2;
  TQuat<double> *pTVar3;
  TQuat<double> local_28;
  
  pcVar1 = *(code **)(this->_padding_ + 0x568);
  pTVar3 = UE::Math::TRotator<double>::Quaternion(param_2,&local_28);
  uVar2 = (*pcVar1)(this,param_1,pTVar3,param_3,param_4,param_5);
  return (bool)uVar2;
}

// StopMovementImmediately @ 147876bf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMovementComponent::StopMovementImmediately(UMovementComponent *this)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  lVar1 = this->_padding_;
  (this->Velocity).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Velocity).field0_0x0._s_0.Y = (double)uVar2;
  (this->Velocity).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
                    /* WARNING: Could not recover jumptable at 0x000147876c11. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x550))();
  return;
}

// StaticClass @ 14788ce50

UClass * __cdecl UMovementComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovementComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MovementComponent",
               &Z_Registration_Info_UClass_UMovementComponent.InnerSingleton,
               StaticRegisterNativesUMovementComponent,0x128,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovementComponent>,
               InternalVTableHelperCtorCaller<UMovementComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovementComponent.InnerSingleton;
}

// UMovementComponent @ 1478aa470

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMovementComponent * __thiscall
UMovementComponent::UMovementComponent(UMovementComponent *this,FVTableHelper *param_1)

{
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->UpdatedComponent).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  (this->UpdatedPrimitive).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  return this;
}

// UMovementComponent @ 1478aa4c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMovementComponent * __thiscall
UMovementComponent::UMovementComponent(UMovementComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  
  UActorComponent::UActorComponent((UActorComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->UpdatedComponent).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  (this->UpdatedPrimitive).field0_0x0.DebugPtr = (UPrimitiveComponent *)0x0;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  *(undefined1 *)&this->_padding_ = 0;
  this->MoveComponentFlags = MOVECOMP_NoFlags;
  puVar3 = &this->field_0x120;
  this->bUpdateOnlyIfRendered = '\0';
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->bComponentShouldUpdatePhysicsVolume = '\0';
  this->bAutoRegisterPhysicsVolumeUpdates = '\x01';
  this->bAutoRegisterUpdatedComponent = '\x01';
  this->bTickBeforeOwner = '\x01';
  this->bAutoUpdateTickRegistration = '\x01';
  (this->PlaneConstraintNormal).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->PlaneConstraintNormal).field0_0x0._s_0.Y = (double)uVar4;
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 3);
  *pbVar1 = *pbVar1 | 1;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 8;
  puVar2 = &this->field_0x120;
  this->bUpdateOnlyIfRendered = '\0';
  this->bComponentShouldUpdatePhysicsVolume = '\0';
  this->bAutoRegisterPhysicsVolumeUpdates = '\x01';
  this->bSnapToPlaneAtStart = '\0';
  this->bConstrainToPlane = '\0';
  this->bAutoRegisterUpdatedComponent = '\x01';
  this->bTickBeforeOwner = '\x01';
  this->bAutoUpdateTickRegistration = '\x01';
  (this->PlaneConstraintNormal).field0_0x0._s_0.Z = (double)uVar4;
  this->bInInitializeComponent = false;
  this->PlaneConstraintAxisSetting = Custom;
  this->bInOnRegister = false;
  return this;
}

// ~UMovementComponent @ 1478ac3d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMovementComponent::~UMovementComponent(UMovementComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  UActorComponent::~UActorComponent((UActorComponent *)this);
  return;
}

// AddRadialForce @ 1478b3210

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMovementComponent::AddRadialForce
          (UMovementComponent *this,TVector<double> *param_1,float param_2,float param_3,
          ERadialImpulseFalloff param_4)

{
  return;
}

// AddRadialImpulse @ 1478b3220

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMovementComponent::AddRadialImpulse
          (UMovementComponent *this,TVector<double> *param_1,float param_2,float param_3,
          ERadialImpulseFalloff param_4,bool param_5)

{
  return;
}

// ComputeSlideVector @ 1478be600

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
UMovementComponent::ComputeSlideVector
          (UMovementComponent *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1
          ,float param_2,TVector<double> *param_3,FHitResult *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double local_98;
  double local_90;
  double local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  double local_68;
  
  if (this->bConstrainToPlane == '\0') {
    dVar1 = (param_1->field0_0x0)._s_0.X;
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    dVar3 = (param_1->field0_0x0)._s_0.Z;
    dVar6 = (double)param_2;
    dVar5 = dVar2 * (param_3->field0_0x0)._s_0.Y + dVar1 * (param_3->field0_0x0)._s_0.X +
            dVar3 * (param_3->field0_0x0)._s_0.Z;
    dVar4 = (param_3->field0_0x0)._s_0.Y;
    dVar7 = (param_3->field0_0x0)._s_0.Z;
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         (dVar1 - dVar5 * (param_3->field0_0x0)._s_0.X) * dVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar2 - dVar5 * dVar4) * dVar6;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (dVar3 - dVar5 * dVar7) * dVar6;
  }
  else {
    local_78 = *(undefined4 *)&param_3->field0_0x0;
    uStack_74 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 4);
    uStack_70 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 8);
    uStack_6c = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0xc);
    local_68 = (param_3->field0_0x0)._s_0.Z;
    (**(code **)(this->_padding_ + 0x5e8))(local_78,&local_98,&local_78);
    dVar1 = (param_1->field0_0x0)._s_0.X;
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    dVar3 = (param_1->field0_0x0)._s_0.Z;
    dVar7 = (double)param_2;
    dVar4 = dVar2 * local_90 + dVar1 * local_98 + dVar3 * local_88;
    (__return_storage_ptr__->field0_0x0)._s_0.X = (dVar1 - dVar4 * local_98) * dVar7;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (dVar2 - dVar4 * local_90) * dVar7;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = (dVar3 - dVar4 * local_88) * dVar7;
  }
  return __return_storage_ptr__;
}

// ConstrainDirectionToPlane @ 1478bf110

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
UMovementComponent::ConstrainDirectionToPlane
          (UMovementComponent *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1
          )

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (this->bConstrainToPlane != '\0') {
    dVar1 = (param_1->field0_0x0)._s_0.X;
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    dVar3 = (this->PlaneConstraintNormal).field0_0x0._s_0.X;
    dVar4 = (this->PlaneConstraintNormal).field0_0x0._s_0.Y;
    dVar5 = (param_1->field0_0x0)._s_0.Z;
    dVar6 = dVar4 * dVar2 + dVar3 * dVar1 + (this->PlaneConstraintNormal).field0_0x0._s_0.Z * dVar5;
    (param_1->field0_0x0)._s_0.Z = dVar5 - dVar6 * (this->PlaneConstraintNormal).field0_0x0._s_0.Z;
    (param_1->field0_0x0)._s_0.X = dVar1 - dVar6 * dVar3;
    (param_1->field0_0x0)._s_0.Y = dVar2 - dVar6 * dVar4;
  }
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// ConstrainLocationToPlane @ 1478bf1d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
UMovementComponent::ConstrainLocationToPlane
          (UMovementComponent *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1
          )

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if (this->bConstrainToPlane != '\0') {
    dVar1 = (param_1->field0_0x0)._s_0.X;
    dVar2 = (this->PlaneConstraintNormal).field0_0x0._s_0.X;
    dVar3 = (this->PlaneConstraintNormal).field0_0x0._s_0.Y;
    dVar4 = (param_1->field0_0x0)._s_0.Y;
    dVar5 = (param_1->field0_0x0)._s_0.Z;
    dVar6 = (dVar4 - (this->PlaneConstraintOrigin).field0_0x0._s_0.Y) * dVar3 +
            (dVar1 - (this->PlaneConstraintOrigin).field0_0x0._s_0.X) * dVar2 +
            (dVar5 - (this->PlaneConstraintOrigin).field0_0x0._s_0.Z) *
            (this->PlaneConstraintNormal).field0_0x0._s_0.Z;
    (param_1->field0_0x0)._s_0.Z = dVar5 - dVar6 * (this->PlaneConstraintNormal).field0_0x0._s_0.Z;
    (param_1->field0_0x0)._s_0.Y = dVar4 - dVar6 * dVar3;
    (param_1->field0_0x0)._s_0.X = dVar1 - dVar6 * dVar2;
  }
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// ConstrainNormalToPlane @ 1478bf2b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
UMovementComponent::ConstrainNormalToPlane
          (UMovementComponent *this,TVector<double> *__return_storage_ptr__,TVector<double> *param_1
          )

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  
  if (this->bConstrainToPlane != '\0') {
    dVar10 = (this->PlaneConstraintNormal).field0_0x0._s_0.X;
    dVar1 = (this->PlaneConstraintNormal).field0_0x0._s_0.Y;
    dVar2 = (this->PlaneConstraintNormal).field0_0x0._s_0.Z;
    dVar3 = (param_1->field0_0x0)._s_0.Z;
    dVar4 = (param_1->field0_0x0)._s_0.X;
    dVar5 = (param_1->field0_0x0)._s_0.Y;
    dVar11 = dVar1 * dVar5 + dVar10 * dVar4 + dVar2 * dVar3;
    dVar4 = dVar4 - dVar11 * dVar10;
    dVar5 = dVar5 - dVar11 * dVar1;
    dVar3 = dVar3 - dVar11 * dVar2;
    dVar10 = dVar5 * dVar5 + dVar4 * dVar4 + dVar3 * dVar3;
    uVar9 = dVar3;
    uVar7 = dVar4;
    uVar8 = dVar5;
    if ((dVar10 != __real_3ff0000000000000) &&
       (uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
       uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_,
       __real_3e45798ee0000000 <= dVar10)) {
      dVar10 = __real_3ff0000000000000 / SQRT(dVar10);
      uVar9 = dVar3 * dVar10;
      uVar7 = dVar4 * dVar10;
      uVar8 = dVar5 * dVar10;
    }
    auVar6._8_4_ = (int)uVar8;
    auVar6._0_8_ = uVar7;
    auVar6._12_4_ = (int)((ulonglong)uVar8 >> 0x20);
    *(undefined1 (*) [16])&param_1->field0_0x0 = auVar6;
    (param_1->field0_0x0)._s_0.Z = (double)uVar9;
  }
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  dVar10 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar10;
  return __return_storage_ptr__;
}

// Deactivate @ 1478c26d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMovementComponent::Deactivate(UMovementComponent *this)

{
  UActorComponent::Deactivate((UActorComponent *)this);
  if ((this->_padding_ & 0x100000) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001478c26f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x510))(this);
    return;
  }
  return;
}

// GetGravityZ @ 1478d47e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall UMovementComponent::GetGravityZ(UMovementComponent *this)

{
  longlong *plVar1;
  UPhysicsSettings *pUVar2;
  float fVar3;
  
  plVar1 = (longlong *)(**(code **)(this->_padding_ + 0x520))();
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478d4803. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    fVar3 = (float)(**(code **)(*plVar1 + 0x788))(plVar1,*(code **)(*plVar1 + 0x788));
    return fVar3;
  }
  pUVar2 = UPhysicsSettings::Get();
  return *(float *)&pUVar2->_padding_;
}

// GetMaxSpeed @ 1478d6330

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall UMovementComponent::GetMaxSpeed(UMovementComponent *this)

{
  return 0.0;
}

// GetPenetrationAdjustment @ 1478d7890

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
UMovementComponent::GetPenetrationAdjustment
          (UMovementComponent *this,TVector<double> *__return_storage_ptr__,FHitResult *param_1)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  float fVar4;
  undefined1 local_28 [16];
  double local_18;
  
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  if (param_1->bStartPenetrating == '\0') {
    (__return_storage_ptr__->field0_0x0)._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    return __return_storage_ptr__;
  }
  fVar4 = param_1->PenetrationDepth;
  if (param_1->PenetrationDepth <= 0.0) {
    fVar4 = __real_3e000000;
  }
  fVar4 = fVar4 + (float)((uint)MovementComponentCVars::PenetrationPullbackDistance &
                         __xmm_7fffffff7fffffff7fffffff7fffffff);
  local_18 = (double)fVar4;
  dVar1 = *(double *)&param_1->Normal * local_18;
  dVar2 = *(double *)&(param_1->Normal).field_0x8 * local_18;
  local_18 = local_18 * *(double *)&(param_1->Normal).field_0x10;
  local_28._8_4_ = SUB84(dVar2,0);
  local_28._0_8_ = dVar1;
  local_28._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  (**(code **)(this->_padding_ + 0x5d8))(SUB84(dVar1,0),fVar4,local_28);
  return __return_storage_ptr__;
}

// GetPhysicsVolume @ 1478d88c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

APhysicsVolume * __thiscall UMovementComponent::GetPhysicsVolume(UMovementComponent *this)

{
  USceneComponent *this_00;
  APhysicsVolume *pAVar1;
  UWorld *this_01;
  
  this_00 = (this->UpdatedComponent).field0_0x0.DebugPtr;
  if (this_00 != (USceneComponent *)0x0) {
    pAVar1 = USceneComponent::GetPhysicsVolume(this_00);
    return pAVar1;
  }
  this_01 = (UWorld *)this->_padding_;
  if (this_01 == (UWorld *)0x0) {
    this_01 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  pAVar1 = (this_01->DefaultPhysicsVolume).field0_0x0.DebugPtr;
  if (pAVar1 == (APhysicsVolume *)0x0) {
    pAVar1 = UWorld::InternalGetDefaultPhysicsVolume(this_01);
  }
  return pAVar1;
}

// GetPlaneConstraintNormal @ 1478d8970

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall UMovementComponent::GetPlaneConstraintNormal(UMovementComponent *this)

{
  return &this->PlaneConstraintNormal;
}

// GetPlaneConstraintNormalFromAxisSetting @ 1478d8980

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall
UMovementComponent::GetPlaneConstraintNormalFromAxisSetting
          (UMovementComponent *this,TVector<double> *__return_storage_ptr__,
          EPlaneConstraintAxisSetting param_1)

{
  double dVar1;
  uchar uVar2;
  code *pcVar3;
  double dVar4;
  undefined8 uVar5;
  bool bVar6;
  UPhysicsSettings *pUVar7;
  TVector<double> *pTVar8;
  FName local_res20;
  FName local_38;
  FString local_30;
  FString local_20;
  
  if (param_1 == UseGlobalPhysicsSetting) {
    pUVar7 = UPhysicsSettings::Get();
    uVar2 = (pUVar7->DefaultDegreesOfFreedom).Value;
    if (uVar2 == '\0') goto LAB_1478d8a61;
    if (uVar2 == '\x01') goto LAB_1478d8b81;
    if (uVar2 == '\x02') goto LAB_1478d8b57;
    if (uVar2 == '\x03') goto LAB_1478d8b2d;
    if (this->_padding_ == 0) {
      ::FString::FString(&local_30,L"None");
    }
    else {
      local_res20 = *(FName *)(this->_padding_ + 0x18);
      ::FName::ToString(&local_res20,&local_30);
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\MovementComponent.cpp"
                       ,0x1ad,
                       L"GetPlaneConstraintNormalFromAxisSetting: Unknown global axis setting %d for %s"
                      );
  }
  else {
    if (param_1 == Custom) {
      dVar4 = (this->PlaneConstraintNormal).field0_0x0._s_0.Y;
      dVar1 = (this->PlaneConstraintNormal).field0_0x0._s_0.Z;
      (__return_storage_ptr__->field0_0x0)._s_0.X = (this->PlaneConstraintNormal).field0_0x0._s_0.X;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar4;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
      return __return_storage_ptr__;
    }
    if (param_1 == X) {
LAB_1478d8b81:
      (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
      (__return_storage_ptr__->field0_0x0)._s_0.X = 1.0;
      return __return_storage_ptr__;
    }
    if (param_1 == Y) {
LAB_1478d8b57:
      (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = 1.0;
      return __return_storage_ptr__;
    }
    if (param_1 == Z) {
LAB_1478d8b2d:
      (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = 1.0;
      return __return_storage_ptr__;
    }
    if (this->_padding_ == 0) {
      ::FString::FString(&local_20,L"None");
    }
    else {
      local_38 = *(FName *)(this->_padding_ + 0x18);
      ::FName::ToString(&local_38,&local_20);
    }
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\MovementComponent.cpp"
                       ,0x1b9,L"GetPlaneConstraintNormalFromAxisSetting: Unknown axis %d for %s");
    local_30.Data.AllocatorInstance.Data = local_20.Data.AllocatorInstance.Data;
  }
  if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data.AllocatorInstance.Data);
  }
  if (bVar6 != false) {
    pcVar3 = (code *)swi(3);
    pTVar8 = (TVector<double> *)(*pcVar3)();
    return pTVar8;
  }
LAB_1478d8a61:
  uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetPlaneConstraintOrigin @ 1478d8be0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TVector<double> * __thiscall UMovementComponent::GetPlaneConstraintOrigin(UMovementComponent *this)

{
  return &this->PlaneConstraintOrigin;
}

// GetPrivateStaticClass @ 1478d9b30

UClass * __cdecl UMovementComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovementComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"MovementComponent",
               &Z_Registration_Info_UClass_UMovementComponent.InnerSingleton,
               StaticRegisterNativesUMovementComponent,0x128,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovementComponent>,
               InternalVTableHelperCtorCaller<UMovementComponent>,local_res8,
               UActorComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovementComponent.InnerSingleton;
}

// HandleImpact @ 1478df380

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMovementComponent::HandleImpact
          (UMovementComponent *this,FHitResult *param_1,float param_2,TVector<double> *param_3)

{
  return;
}

// InitCollisionParams @ 1478df940

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMovementComponent::InitCollisionParams
          (UMovementComponent *this,FCollisionQueryParams *param_1,FCollisionResponseParams *param_2
          )

{
  UPrimitiveComponent *pUVar1;
  
  pUVar1 = (this->UpdatedPrimitive).field0_0x0.DebugPtr;
  if (pUVar1 != (UPrimitiveComponent *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001478df94f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)pUVar1 + 0x8b0))();
    return;
  }
  return;
}

// InitializeComponent @ 1478dfe90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMovementComponent::InitializeComponent(UMovementComponent *this)

{
  bool bVar1;
  USceneComponent *pUVar2;
  
  bVar1 = this->bInInitializeComponent;
  this->bInInitializeComponent = true;
  UActorComponent::InitializeComponent((UActorComponent *)this);
  if (((this->bAutoRegisterUpdatedComponent != '\0') &&
      (((pUVar2 = (this->UpdatedComponent).field0_0x0.DebugPtr, pUVar2 == (USceneComponent *)0x0 ||
        (((uint)pUVar2->_padding_ >> 0x1e & 1) != 0)) && (this->_padding_ != 0)))) &&
     (*(longlong *)(this->_padding_ + 0x1b8) != 0)) {
    (**(code **)(this->_padding_ + 0x530))(this);
  }
  if (this->bSnapToPlaneAtStart != '\0') {
    (**(code **)(this->_padding_ + 0x5f0))(this);
  }
  this->bInInitializeComponent = bVar1;
  return;
}

// IsExceedingMaxSpeed @ 1478e10d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UMovementComponent::IsExceedingMaxSpeed(UMovementComponent *this,float param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (this->Velocity).field0_0x0._s_0.Y;
  dVar2 = (this->Velocity).field0_0x0._s_0.Z;
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  dVar3 = (this->Velocity).field0_0x0._s_0.X;
  return (double)(param_1 * param_1 * __real_3f8147ae) <
         dVar1 * dVar1 + dVar3 * dVar3 + dVar2 * dVar2;
}

// IsInWater @ 1478e1260

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UMovementComponent::IsInWater(UMovementComponent *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0x520))();
  if ((lVar1 != 0) && ((*(byte *)(lVar1 + 0x304) & 1) != 0)) {
    return true;
  }
  return false;
}

// K2_MoveUpdatedComponent @ 1478e1b40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UMovementComponent::K2_MoveUpdatedComponent
          (UMovementComponent *this,TVector<double> *param_1,TRotator<double> *param_2,
          FHitResult *param_3,bool param_4,bool param_5)

{
  code *pcVar1;
  undefined1 uVar2;
  TQuat<double> *pTVar3;
  TQuat<double> local_28;
  
  pcVar1 = *(code **)(this->_padding_ + 0x570);
  pTVar3 = UE::Math::TRotator<double>::Quaternion(param_2,&local_28);
  uVar2 = (*pcVar1)(this,param_1,pTVar3,param_4,param_3,param_5);
  return (bool)uVar2;
}

// MoveUpdatedComponentImpl @ 1478e4a60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UMovementComponent::MoveUpdatedComponentImpl
          (UMovementComponent *this,TVector<double> *param_1,TQuat<double> *param_2,bool param_3,
          FHitResult *param_4,ETeleportType param_5)

{
  USceneComponent *pUVar1;
  undefined1 uVar2;
  undefined7 in_register_00000089;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  double local_38;
  undefined1 local_28 [32];
  
  if ((this->UpdatedComponent).field0_0x0.DebugPtr == (USceneComponent *)0x0) {
    uVar2 = 0;
  }
  else {
    local_48 = *(undefined4 *)&param_1->field0_0x0;
    uStack_44 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 4);
    uStack_40 = *(undefined4 *)((longlong)&param_1->field0_0x0 + 8);
    uStack_3c = *(undefined4 *)((longlong)&param_1->field0_0x0 + 0xc);
    local_38 = (param_1->field0_0x0)._s_0.Z;
    (**(code **)(this->_padding_ + 0x5d8))
              (local_48,local_28,&local_48,CONCAT71(in_register_00000089,param_3));
    pUVar1 = (this->UpdatedComponent).field0_0x0.DebugPtr;
    uVar2 = (**(code **)(pUVar1->_padding_ + 0x588))
                      (pUVar1,local_28,param_2,param_3,param_4,this->MoveComponentFlags,param_5);
  }
  return (bool)uVar2;
}

// OnRegister @ 1478e5fd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMovementComponent::OnRegister(UMovementComponent *this)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  UClass *pUVar6;
  UWorld *this_00;
  TVector<double> *pTVar7;
  USceneComponent *pUVar8;
  UPrimitiveComponent *pUVar9;
  TVector<double> local_28;
  
  bVar1 = this->bInOnRegister;
  this->bInOnRegister = true;
  if ((this->UpdatedComponent).field0_0x0.DebugPtr == (USceneComponent *)0x0) {
LAB_1478e6021:
    pUVar9 = (UPrimitiveComponent *)0x0;
  }
  else {
    pUVar6 = UPrimitiveComponent::StaticClass();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&this->UpdatedComponent,pUVar6);
    if (!bVar5) goto LAB_1478e6021;
    pUVar9 = (UPrimitiveComponent *)(this->UpdatedComponent).field0_0x0.DebugPtr;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UPrimitiveComponent *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar9);
  }
  (this->UpdatedPrimitive).field0_0x0.DebugPtr = pUVar9;
  UActorComponent::OnRegister((UActorComponent *)this);
  if (this->PlaneConstraintAxisSetting != Custom) {
    (**(code **)(this->_padding_ + 0x5b0))(this);
  }
  this_00 = (UWorld *)this->_padding_;
  if (this_00 == (UWorld *)0x0) {
    this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    if (this_00 == (UWorld *)0x0) goto LAB_1478e60ef;
  }
  bVar5 = UWorld::IsGameWorld(this_00);
  if (bVar5) {
    pTVar7 = UE::Math::TVector<double>::GetSafeNormal
                       (&this->PlaneConstraintNormal,&local_28,__real_3e45798ee0000000,
                        &UE::Math::TVector<double>::ZeroVector);
    pUVar8 = (this->UpdatedComponent).field0_0x0.DebugPtr;
    uVar2 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 4);
    uVar3 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 8);
    uVar4 = *(undefined4 *)((longlong)&pTVar7->field0_0x0 + 0xc);
    *(undefined4 *)&(this->PlaneConstraintNormal).field0_0x0 = *(undefined4 *)&pTVar7->field0_0x0;
    *(undefined4 *)((longlong)&(this->PlaneConstraintNormal).field0_0x0 + 4) = uVar2;
    *(undefined4 *)((longlong)&(this->PlaneConstraintNormal).field0_0x0 + 8) = uVar3;
    *(undefined4 *)((longlong)&(this->PlaneConstraintNormal).field0_0x0 + 0xc) = uVar4;
    (this->PlaneConstraintNormal).field0_0x0._s_0.Z = (pTVar7->field0_0x0)._s_0.Z;
    if (((pUVar8 == (USceneComponent *)0x0) && (this->bAutoRegisterUpdatedComponent != '\0')) &&
       (this->_padding_ != 0)) {
      pUVar8 = *(USceneComponent **)(this->_padding_ + 0x1b8);
    }
    (**(code **)(this->_padding_ + 0x530))(this,pUVar8);
  }
LAB_1478e60ef:
  this->bInOnRegister = bVar1;
  return;
}

// OnTeleported @ 1478e6380

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMovementComponent::OnTeleported(UMovementComponent *this)

{
  return;
}

// OverlapTest @ 1478e6ff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UMovementComponent::OverlapTest
          (UMovementComponent *this,TVector<double> *param_1,TQuat<double> *param_2,
          ECollisionChannel param_3,FCollisionShape *param_4,AActor *param_5)

{
  bool bVar1;
  FName *pFVar2;
  UWorld *this_00;
  int *piVar3;
  undefined1 auStackY_168 [32];
  TStatId local_108;
  FName local_100;
  FCollisionResponseParams local_f8;
  FCollisionQueryParams local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  piVar3 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c);
  if ((*piVar3 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_MovementOverlapTest =
         (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_bool___cdecl_UMovementComponent::OverlapTest(UE::Math::TVector<double>_const_&,UE::Math::TQuat<double>_const_&,ECollisionChannel,FCollisionShape_const_&,AActor_const_*)const_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_MovementOverlapTest>
          )0x0;
    pFVar2 = ::FName::FName(&local_100,"MovementOverlapTest");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_MovementOverlapTest,*pFVar2,
               L"MovementOverlapTest","STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",
               true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  local_108.StatIdPtr = (TStatIdData *)StatPtr_MovementOverlapTest;
  if (StatPtr_MovementOverlapTest ==
      (FThreadSafeStaticStat<_public:___cdecl__public:_virtual_bool___cdecl_UMovementComponent::OverlapTest(UE::Math::TVector<double>_const_&,UE::Math::TQuat<double>_const_&,ECollisionChannel,FCollisionShape_const_&,AActor_const_*)const_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_MovementOverlapTest>
       )0x0) {
    pFVar2 = ::FName::FName(&local_100,"MovementOverlapTest");
    local_108.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_MovementOverlapTest,*pFVar2,
                    L"MovementOverlapTest","STATGROUP_CollisionTags","STATCAT_Advanced",
                    L"CollisionTags",true,true,ST_int64,true,false,MCR_Invalid);
  }
  if ((*piVar3 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&::StaticName,"MovementOverlapTest");
    _Init_thread_footer(&::_TSS0);
  }
  FCollisionQueryParams::FCollisionQueryParams(&local_d8,::StaticName,&local_108,false,param_5);
  FCollisionResponseContainer::FCollisionResponseContainer(&local_f8.CollisionResponse);
  FCollisionResponseContainer::SetAllChannels(&local_f8.CollisionResponse,ECR_Block);
  (**(code **)(this->_padding_ + 0x558))(this,&local_d8,&local_f8);
  this_00 = (UWorld *)this->_padding_;
  if (this_00 == (UWorld *)0x0) {
    this_00 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  bVar1 = UWorld::OverlapBlockingTestByChannel
                    (this_00,param_1,param_2,param_3,param_4,&local_d8,&local_f8);
  if (local_d8.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
      (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_d8.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
  }
  if (local_d8.IgnoreComponents.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0
     ) {
    FMemory::Free((void *)local_d8.IgnoreComponents.AllocatorInstance.SecondaryData);
  }
  return bVar1;
}

// PhysicsVolumeChanged @ 1478e72b0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMovementComponent::PhysicsVolumeChanged(UMovementComponent *this,APhysicsVolume *param_1)

{
  return;
}

// PostLoad @ 1478e7980

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMovementComponent::PostLoad(UMovementComponent *this)

{
  double dVar1;
  bool bVar2;
  TVector<double> *pTVar3;
  UClass *pUVar4;
  UPrimitiveComponent *pUVar5;
  TVector<double> local_28;
  
  UActorComponent::PostLoad((UActorComponent *)this);
  if (this->PlaneConstraintAxisSetting == UseGlobalPhysicsSetting) {
    pTVar3 = GetPlaneConstraintNormalFromAxisSetting(this,&local_28,UseGlobalPhysicsSetting);
    dVar1 = (pTVar3->field0_0x0)._s_0.Y;
    (this->PlaneConstraintNormal).field0_0x0._s_0.X = (pTVar3->field0_0x0)._s_0.X;
    (this->PlaneConstraintNormal).field0_0x0._s_0.Y = dVar1;
    (this->PlaneConstraintNormal).field0_0x0._s_0.Z = (pTVar3->field0_0x0)._s_0.Z;
  }
  if ((this->UpdatedComponent).field0_0x0.DebugPtr != (USceneComponent *)0x0) {
    pUVar4 = UPrimitiveComponent::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->UpdatedComponent,pUVar4);
    if (bVar2) {
      pUVar5 = (UPrimitiveComponent *)(this->UpdatedComponent).field0_0x0.DebugPtr;
      goto LAB_1478e79ef;
    }
  }
  pUVar5 = (UPrimitiveComponent *)0x0;
LAB_1478e79ef:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UPrimitiveComponent *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->UpdatedPrimitive).field0_0x0.DebugPtr = pUVar5;
  return;
}

// RegisterComponentTickFunctions @ 1478e8fd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMovementComponent::RegisterComponentTickFunctions(UMovementComponent *this,bool param_1)

{
  longlong lVar1;
  
  UActorComponent::RegisterComponentTickFunctions((UActorComponent *)this,param_1);
  (**(code **)(this->_padding_ + 0x540))(this);
  if ((((this->bTickBeforeOwner != '\0') && (param_1)) && ((this->_padding_ & 0x20000) != 0)) &&
     ((lVar1 = this->_padding_, lVar1 != 0 && ((*(byte *)(lVar1 + 0x32) & 2) != 0)))) {
    FTickFunction::AddPrerequisite
              ((FTickFunction *)(lVar1 + 0x28),(UObject *)this,(FTickFunction *)&this->_padding_);
  }
  return;
}

// ResolvePenetrationImpl @ 1478ec2a0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UMovementComponent::ResolvePenetrationImpl
          (UMovementComponent *this,TVector<double> *param_1,FHitResult *param_2,
          TQuat<double> *param_3)

{
  int *piVar1;
  UPrimitiveComponent *pUVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  undefined4 uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_UMovementComponent::ResolvePenetrationImpl(UE::Math::TVector<double>_const_&,FHitResult_const_&,UE::Math::TQuat<double>_const_&)_::_5_::FStat_STAT_MovementComponent_ResolvePenetration>
  FVar11;
  UObject *pUVar12;
  undefined8 uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar14;
  FColor_u_0 FVar15;
  FName FVar16;
  LARGE_INTEGER local_res8;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FStatMessage local_288;
  double local_278;
  double local_268;
  double local_260;
  double local_258;
  undefined1 local_248 [16];
  double local_238;
  FName local_228;
  FName local_220;
  FName local_218;
  uchar local_208 [8];
  longlong local_200;
  FName local_1f8;
  FString local_1f0;
  double local_1e0;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8 [2];
  double local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  FActorInstanceHandle local_188;
  undefined1 local_168 [4];
  undefined4 local_164;
  undefined4 local_c4;
  byte local_bb;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  cVar8 = '\0';
  local_res8.s.LowPart = MOVECOMP_NoFlags;
  local_248._0_8_ = (param_1->field0_0x0)._s_0.X;
  local_248._8_8_ = (param_1->field0_0x0)._s_0.Y;
  local_238 = (param_1->field0_0x0)._s_0.Z;
  (**(code **)(this->_padding_ + 0x5d8))(*(undefined4 *)&param_1->field0_0x0,&local_268);
  if ((((local_268 == 0.0) && (local_260 == 0.0)) && (local_258 == 0.0)) ||
     ((this->UpdatedPrimitive).field0_0x0.DebugPtr == (UPrimitiveComponent *)0x0)) {
    return false;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_MovementComponent_ResolvePenetration ==
        (FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_UMovementComponent::ResolvePenetrationImpl(UE::Math::TVector<double>_const_&,FHitResult_const_&,UE::Math::TQuat<double>_const_&)_::_5_::FStat_STAT_MovementComponent_ResolvePenetration>
         )0x0) {
      pFVar10 = ::FName::FName((FName *)&local_res10._s_0,
                               "STAT_MovementComponent_ResolvePenetration");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MovementComponent_ResolvePenetration,
                 *pFVar10,L"STAT_MovementComponent_ResolvePenetration","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_MovementComponent_ResolvePenetration;
  if (StatPtr_STAT_MovementComponent_ResolvePenetration ==
      (FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_UMovementComponent::ResolvePenetrationImpl(UE::Math::TVector<double>_const_&,FHitResult_const_&,UE::Math::TQuat<double>_const_&)_::_5_::FStat_STAT_MovementComponent_ResolvePenetration>
       )0x0) {
    pFVar10 = ::FName::FName(&local_1f8,"STAT_MovementComponent_ResolvePenetration");
    FVar11 = (FThreadSafeStaticStat<_protected:_virtual_bool___cdecl_UMovementComponent::ResolvePenetrationImpl(UE::Math::TVector<double>_const_&,FHitResult_const_&,UE::Math::TQuat<double>_const_&)_::_5_::FStat_STAT_MovementComponent_ResolvePenetration>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_MovementComponent_ResolvePenetration,*pFVar10,
                          L"STAT_MovementComponent_ResolvePenetration","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar11;
  bVar4 = false;
  bVar6 = false;
  local_218.ComparisonIndex.Value = 0;
  local_218.Number = 0;
  FVar15.Bits = (uint)FVar16.ComparisonIndex.Value;
  uVar14 = FVar16.Number;
  if ((FVar15.Bits == 0) && (uVar14 == 0)) {
LAB_1478ec49b:
    bVar5 = false;
    FVar16 = local_218;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = NM_Standalone;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.Bits = FVar15.Bits;
        uStackX_14 = uVar14;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\MovementComponent.cpp"
                   ,0x276);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1478ec49b;
    local_res10.Bits = FVar15.Bits;
    uStackX_14 = uVar14;
    local_218 = FVar16;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar5 = true;
  }
  local_200 = ((this->UpdatedComponent).field0_0x0.DebugPtr)->_padding_;
  if (local_200 == 0) goto LAB_1478eccb3;
  if (5 < (byte)LogMovement._0_1_) {
    local_res10.Bits = UActorComponent::InternalGetNetMode((UActorComponent *)this);
    bVar7 = FWeakObjectPtr::IsValid(&(param_2->Component).WeakPtr);
    if (bVar7) {
      pUVar12 = FWeakObjectPtr::Get(&(param_2->Component).WeakPtr);
      local_198 = *(double *)&pUVar12[0xd].field_0x18;
      ::FString::PrintfImpl((FString *)&local_288,L"X=%3.3f Y=%3.3f Z=%3.3f");
      local_208 = (uchar  [8])L"";
      if (local_288.NameAndInfo.Index.Value != 0) {
        local_208 = local_288.StatData.Pad;
      }
      local_res8.s.LowPart = MOVECOMP_IgnoreBases;
    }
    else {
      local_208 = (uchar  [8])0x1507c09a0;
    }
    pUVar12 = FWeakObjectPtr::Get(&(param_2->Component).WeakPtr);
    if (pUVar12 == (UObject *)0x0) {
      ::FString::FString(&local_1d8,L"None");
    }
    else {
      local_228.ComparisonIndex.Value = *(uint *)&pUVar12->field_0x18;
      local_228.Number = *(uint *)&pUVar12->field_0x1c;
      ::FName::ToString(&local_228,&local_1d8);
    }
    local_1f8 = (FName)L"";
    if (local_1d8.Data.ArrayNum != 0) {
      local_1f8 = (FName)local_1d8.Data.AllocatorInstance;
    }
    FActorInstanceHandle::FActorInstanceHandle(&local_188,&param_2->HitObjectHandle);
    pFVar10 = (FName *)FActorInstanceHandle::GetName(&local_188,(FString *)local_248);
    if (pFVar10[1].ComparisonIndex.Value == 0) {
      local_228 = (FName)0x15060d16c;
    }
    else {
      local_228 = *pFVar10;
    }
    local_198 = (((this->UpdatedComponent).field0_0x0.DebugPtr)->ComponentToWorld).Translation.ZW.
                m128d_f64[0];
    ::FString::PrintfImpl(&local_1f0,L"X=%3.3f Y=%3.3f Z=%3.3f");
    local_220 = (FName)((this->UpdatedComponent).field0_0x0.DebugPtr)->_padding_;
    ::FName::ToString(&local_220,local_1b8);
    local_220 = *(FName *)(local_200 + 0x18);
    ::FName::ToString(&local_220,&local_1c8);
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovement);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    if (local_1b8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8[0].Data.AllocatorInstance.Data);
    }
    if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
    }
    if ((FScriptContainerElement *)local_248._0_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_248._0_8_);
    }
    if ((FName)local_1d8.Data.AllocatorInstance.Data != (FName)0x0) {
      FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
    }
    if (((local_res8.s.LowPart & MOVECOMP_IgnoreBases) != MOVECOMP_NoFlags) &&
       (local_288.StatData.Pad != (uchar  [8])0x0)) {
      FMemory::Free((void *)local_288.StatData.Pad);
    }
  }
  pUVar2 = (this->UpdatedPrimitive).field0_0x0.DebugPtr;
  pcVar3 = *(code **)(this->_padding_ + 0x560);
  uVar13 = (**(code **)(*(longlong *)pUVar2 + 0x8b8))
                     (pUVar2,local_248,MovementComponentCVars::PenetrationOverlapCheckInflation);
  uVar9 = (**(code **)(*(longlong *)(this->UpdatedPrimitive).field0_0x0.DebugPtr + 0x5f0))();
  local_288.StatData.Pad = (uchar  [8])(local_268 + *(double *)&param_2->TraceStart);
  local_288.NameAndInfo =
       (FStatNameAndInfo)(local_260 + *(double *)&(param_2->TraceStart).field_0x8);
  local_278 = local_258 + *(double *)&(param_2->TraceStart).field_0x10;
  cVar8 = (*pcVar3)(this,&local_288,param_3,uVar9,uVar13,local_200);
  if (cVar8 == '\0') {
    (**(code **)(this->_padding_ + 0x568))(this,&local_268,param_3,0,0,1);
    if (5 < (byte)LogMovement._0_1_) {
      ::FString::PrintfImpl((FString *)&local_288,L"X=%3.3f Y=%3.3f Z=%3.3f");
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovement);
      if (local_288.StatData.Pad != (uchar  [8])0x0) {
        FMemory::Free((void *)local_288.StatData.Pad);
      }
    }
    cVar8 = '\x01';
    goto LAB_1478eccb3;
  }
  local_res8.s.LowPart = this->MoveComponentFlags;
  this->MoveComponentFlags = local_res8.s.LowPart & ~MOVECOMP_NeverIgnoreBlockingOverlaps;
  memset(local_168,0,0x100);
  uStack_190 = 0xffffffff;
  local_198 = 0.0;
  uStack_18c = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c4 = 0xffffffff;
  local_a0 = 0;
  uStack_9c = 0;
  uStack_98 = 0xffffffff;
  uStack_94 = 0;
  local_164 = 0x3f800000;
  cVar8 = (**(code **)(this->_padding_ + 0x568))(this,&local_268,param_3,1,local_168,1);
  if (5 < (byte)LogMovement._0_1_) {
    ::FString::PrintfImpl((FString *)&local_288,L"X=%3.3f Y=%3.3f Z=%3.3f");
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovement);
    if (local_288.StatData.Pad != (uchar  [8])0x0) {
      FMemory::Free((void *)local_288.StatData.Pad);
    }
  }
  if (cVar8 == '\0') {
    if ((local_bb & 2) != 0) {
      (**(code **)(this->_padding_ + 0x578))(this,&local_1f0,local_168);
      local_248._0_8_ = local_268 + (double)local_1f0.Data.AllocatorInstance.Data;
      local_238 = local_1e0 + local_258;
      local_248._8_8_ =
           (double)CONCAT44(local_1f0.Data.ArrayMax,local_1f0.Data.ArrayNum) + local_260;
      if (((((double)local_1f0.Data.AllocatorInstance.Data != local_268) ||
           ((double)CONCAT44(local_1f0.Data.ArrayMax,local_1f0.Data.ArrayNum) != local_260)) ||
          (local_1e0 != local_258)) &&
         ((((double)local_248._0_8_ != 0.0 || ((double)local_248._8_8_ != 0.0)) ||
          (local_238 != 0.0)))) {
        cVar8 = (**(code **)(this->_padding_ + 0x568))(this,local_248,param_3,1,0,1);
        if (5 < (byte)LogMovement._0_1_) {
          ::FString::PrintfImpl((FString *)&local_288,L"X=%3.3f Y=%3.3f Z=%3.3f");
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovement);
          if (local_288.StatData.Pad != (uchar  [8])0x0) {
            FMemory::Free((void *)local_288.StatData.Pad);
          }
        }
        if (cVar8 != '\0') goto LAB_1478ecca6;
      }
    }
    local_288.StatData.Pad =
         (uchar  [8])(*(double *)&param_2->TraceEnd - *(double *)&param_2->TraceStart);
    local_288.NameAndInfo =
         (FStatNameAndInfo)
         (*(double *)&(param_2->TraceEnd).field_0x8 - *(double *)&(param_2->TraceStart).field_0x8);
    local_278 = *(double *)&(param_2->TraceEnd).field_0x10 -
                *(double *)&(param_2->TraceStart).field_0x10;
    (**(code **)(this->_padding_ + 0x5d8))(this,local_248);
    if ((((double)local_248._0_8_ != 0.0) || ((double)local_248._8_8_ != 0.0)) || (local_238 != 0.0)
       ) {
      local_288.NameAndInfo = (FStatNameAndInfo)((double)local_248._8_8_ + local_260);
      local_278 = local_238 + local_258;
      local_288.StatData.Pad = (uchar  [8])(local_268 + (double)local_248._0_8_);
      cVar8 = (**(code **)(this->_padding_ + 0x568))(this,&local_288,param_3,1,0,1);
      if (5 < (byte)LogMovement._0_1_) {
        ::FString::PrintfImpl((FString *)&local_288,L"X=%3.3f Y=%3.3f Z=%3.3f");
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovement);
        if (local_288.StatData.Pad != (uchar  [8])0x0) {
          FMemory::Free((void *)local_288.StatData.Pad);
        }
      }
      if (((cVar8 == '\0') &&
          (0.0 < (double)local_248._8_8_ * local_260 + local_268 * (double)local_248._0_8_ +
                 local_238 * local_258)) &&
         (cVar8 = (**(code **)(this->_padding_ + 0x568))(this,local_248,param_3,1,0,1),
         5 < (byte)LogMovement._0_1_)) {
        ::FString::PrintfImpl((FString *)&local_288,L"X=%3.3f Y=%3.3f Z=%3.3f");
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogMovement);
        if (local_288.StatData.Pad != (uchar  [8])0x0) {
          FMemory::Free((void *)local_288.StatData.Pad);
        }
      }
    }
  }
LAB_1478ecca6:
  this->MoveComponentFlags = local_res8.s.LowPart;
LAB_1478eccb3:
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar16 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_288.NameAndInfo =
           (FStatNameAndInfo)
           (CONCAT44(FVar16.Number,local_218.ComparisonIndex.Value.Value) & 0xffff6fffffffffff |
           0x600000000000);
      QueryPerformanceCounter(&local_res8);
      local_288.StatData.Pad[4] = '\0';
      local_288.StatData.Pad[5] = '\0';
      local_288.StatData.Pad[6] = '\0';
      local_288.StatData.Pad[7] = '\0';
      local_288.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_288.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_288.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_288.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_288);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return (bool)cVar8;
}

// SafeMoveUpdatedComponent @ 1478ecfa0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UMovementComponent::SafeMoveUpdatedComponent
          (UMovementComponent *this,TVector<double> *param_1,TQuat<double> *param_2,bool param_3,
          FHitResult *param_4,ETeleportType param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  EMoveComponentFlags EVar3;
  EMoveComponentFlags EVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  char cVar10;
  undefined7 in_register_00000089;
  undefined1 local_48 [32];
  
  if ((this->UpdatedComponent).field0_0x0.DebugPtr == (USceneComponent *)0x0) {
    uVar5 = *(undefined8 *)&param_4->TraceStart;
    uVar6 = *(undefined8 *)&(param_4->TraceStart).field_0x8;
    uVar1 = *(undefined8 *)&(param_4->TraceStart).field_0x10;
    uVar7 = *(undefined8 *)&param_4->TraceEnd;
    uVar8 = *(undefined8 *)&(param_4->TraceEnd).field_0x8;
    uVar2 = *(undefined8 *)&(param_4->TraceEnd).field_0x10;
    param_4->FaceIndex = 0;
    param_4->Distance = 0.0;
    param_4->_padding_ = 0;
    *(undefined8 *)&param_4->Location = 0;
    *(undefined8 *)&(param_4->Location).field_0x8 = 0;
    *(undefined8 *)&(param_4->Location).field_0x10 = 0;
    *(undefined8 *)&param_4->ImpactPoint = 0;
    *(undefined8 *)&(param_4->ImpactPoint).field_0x8 = 0;
    *(undefined8 *)&(param_4->ImpactPoint).field_0x10 = 0;
    *(undefined8 *)&param_4->Normal = 0;
    *(undefined8 *)&(param_4->Normal).field_0x8 = 0;
    *(undefined8 *)&(param_4->Normal).field_0x10 = 0;
    *(undefined8 *)&param_4->ImpactNormal = 0;
    *(undefined8 *)&(param_4->ImpactNormal).field_0x8 = 0;
    *(undefined8 *)&(param_4->ImpactNormal).field_0x10 = 0;
    param_4->PenetrationDepth = 0.0;
    param_4->Item = 0;
    param_4->ElementIndex = '\0';
    param_4->field_0xad = 0;
    param_4->_padding_ = 0;
    (param_4->PhysMaterial).WeakPtr = (FWeakObjectPtr)0x0;
    (param_4->Component).WeakPtr = (FWeakObjectPtr)0x0;
    (param_4->PhysicsObjectOwner).WeakPtr = (FWeakObjectPtr)0x0;
    param_4->PhysicsObject = (FPhysicsObject *)0x0;
    (param_4->BoneName).ComparisonIndex = 0;
    (param_4->BoneName).Number = 0;
    (param_4->MyBoneName).ComparisonIndex = 0;
    (param_4->MyBoneName).Number = 0;
    (param_4->HitObjectHandle).ReferenceObject.WeakPtr = (FWeakObjectPtr)0x0;
    (param_4->HitObjectHandle).ManagerInterface.ObjectInstance.WeakPtr = (FWeakObjectPtr)0x0;
    param_4->MyItem = -1;
    param_4->Time = 1.0;
    *(undefined8 *)&param_4->TraceStart = uVar5;
    *(undefined8 *)&(param_4->TraceStart).field_0x8 = uVar6;
    *(undefined8 *)&param_4->TraceEnd = uVar7;
    *(undefined8 *)&(param_4->TraceEnd).field_0x8 = uVar8;
    (param_4->HitObjectHandle).ManagerInterface.InterfaceInstance =
         (IActorInstanceManagerInterface *)0x0;
    (param_4->HitObjectHandle).InstanceIndex = -1;
    (param_4->HitObjectHandle).ResolutionStatus = Invalid;
    *(undefined3 *)&(param_4->HitObjectHandle).field_0x1d = 0;
    *(undefined8 *)&(param_4->TraceStart).field_0x10 = uVar1;
    *(undefined8 *)&(param_4->TraceEnd).field_0x10 = uVar2;
    return false;
  }
  EVar3 = this->MoveComponentFlags;
  EVar4 = EVar3 | (MOVECOMP_DisableBlockingOverlapDispatch|MOVECOMP_NeverIgnoreBlockingOverlaps);
  if (MovementComponentCVars::MoveIgnoreFirstBlockingOverlap != 0) {
    EVar4 = EVar3;
  }
  this->MoveComponentFlags = EVar4;
  uVar9 = (**(code **)(this->_padding_ + 0x568))
                    (this,param_1,param_2,CONCAT71(in_register_00000089,param_3),param_4,param_5);
  this->MoveComponentFlags = EVar3;
  if ((param_4->bStartPenetrating != '\0') &&
     ((this->UpdatedComponent).field0_0x0.DebugPtr != (USceneComponent *)0x0)) {
    (**(code **)(this->_padding_ + 0x578))(this,local_48,param_4);
    cVar10 = (**(code **)(this->_padding_ + 0x580))(this,local_48,param_4,param_2);
    if (cVar10 != '\0') {
      uVar9 = (**(code **)(this->_padding_ + 0x568))(this,param_1,param_2,param_3,param_4,param_5);
    }
  }
  return (bool)uVar9;
}

// Serialize @ 1478eef40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMovementComponent::Serialize(UMovementComponent *this,FArchive *param_1)

{
  USceneComponent *pUVar1;
  bool bVar2;
  UClass *pUVar3;
  UPrimitiveComponent *pUVar4;
  
  pUVar1 = (this->UpdatedComponent).field0_0x0.DebugPtr;
  UActorComponent::Serialize((UActorComponent *)this,param_1);
  if ((param_1->field_0x28 & 1) == 0) {
    return;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar1 == (USceneComponent *)0x0)) {
    (this->UpdatedComponent).field0_0x0.DebugPtr = pUVar1;
    if (pUVar1 != (USceneComponent *)0x0) goto LAB_1478eef97;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar1);
    (this->UpdatedComponent).field0_0x0.DebugPtr = pUVar1;
LAB_1478eef97:
    pUVar3 = UPrimitiveComponent::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->UpdatedComponent,pUVar3);
    if (bVar2) {
      pUVar4 = (UPrimitiveComponent *)(this->UpdatedComponent).field0_0x0.DebugPtr;
      goto LAB_1478eefba;
    }
  }
  pUVar4 = (UPrimitiveComponent *)0x0;
LAB_1478eefba:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UPrimitiveComponent *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)pUVar4);
  }
  (this->UpdatedPrimitive).field0_0x0.DebugPtr = pUVar4;
  return;
}

// Serialize @ 1478ef000

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMovementComponent::Serialize(UMovementComponent *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SetPlaneConstraintAxisSetting @ 1478f4560

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMovementComponent::SetPlaneConstraintAxisSetting
          (UMovementComponent *this,EPlaneConstraintAxisSetting param_1)

{
  double dVar1;
  TVector<double> *pTVar2;
  TVector<double> local_28;
  
  this->PlaneConstraintAxisSetting = param_1;
  pTVar2 = GetPlaneConstraintNormalFromAxisSetting(this,&local_28,param_1);
  dVar1 = (pTVar2->field0_0x0)._s_0.Y;
  (this->PlaneConstraintNormal).field0_0x0._s_0.X = (pTVar2->field0_0x0)._s_0.X;
  (this->PlaneConstraintNormal).field0_0x0._s_0.Y = dVar1;
  (this->PlaneConstraintNormal).field0_0x0._s_0.Z = (pTVar2->field0_0x0)._s_0.Z;
  return;
}

// SetPlaneConstraintEnabled @ 1478f45a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMovementComponent::SetPlaneConstraintEnabled(UMovementComponent *this,bool param_1)

{
  this->bConstrainToPlane = '\0';
  this->field_0x120 = this->field_0x120 | param_1 << 4;
  return;
}

// SetPlaneConstraintFromVectors @ 1478f45c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMovementComponent::SetPlaneConstraintFromVectors
          (UMovementComponent *this,TVector<double> *param_1,TVector<double> *param_2)

{
  double dVar1;
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar8 = (param_2->field0_0x0)._s_0.X;
  dVar4 = (param_1->field0_0x0)._s_0.Z * (param_2->field0_0x0)._s_0.Y -
          (param_1->field0_0x0)._s_0.Y * (param_2->field0_0x0)._s_0.Z;
  dVar3 = dVar8 * (param_1->field0_0x0)._s_0.Y - dVar1 * (param_2->field0_0x0)._s_0.Y;
  dVar1 = dVar1 * (param_2->field0_0x0)._s_0.Z - dVar8 * (param_1->field0_0x0)._s_0.Z;
  dVar8 = dVar1 * dVar1 + dVar4 * dVar4 + dVar3 * dVar3;
  uVar7 = dVar3;
  uVar5 = dVar4;
  uVar6 = dVar1;
  if ((dVar8 != __real_3ff0000000000000) &&
     (uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
     uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
     uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_,
     __real_3e45798ee0000000 <= dVar8)) {
    dVar8 = __real_3ff0000000000000 / SQRT(dVar8);
    uVar7 = dVar3 * dVar8;
    uVar5 = dVar4 * dVar8;
    uVar6 = dVar1 * dVar8;
  }
  auVar2._8_4_ = (int)uVar6;
  auVar2._0_8_ = uVar5;
  auVar2._12_4_ = (int)((ulonglong)uVar6 >> 0x20);
  *(undefined1 (*) [16])&(this->PlaneConstraintNormal).field0_0x0 = auVar2;
  (this->PlaneConstraintNormal).field0_0x0._s_0.Z = (double)uVar7;
  return;
}

// SetPlaneConstraintNormal @ 1478f46c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMovementComponent::SetPlaneConstraintNormal(UMovementComponent *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  double dVar8;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Z;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar8 = dVar3 * dVar3 + dVar1 * dVar1 + dVar2 * dVar2;
  if (dVar8 == __real_3ff0000000000000) {
    uVar7 = (param_1->field0_0x0)._s_0.Z;
    uVar5 = *(double *)((longlong)&param_1->field0_0x0 + 8);
    uVar6 = (param_1->field0_0x0)._s_0.X;
  }
  else {
    uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
    uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    if (__real_3e45798ee0000000 <= dVar8) {
      dVar8 = __real_3ff0000000000000 / SQRT(dVar8);
      uVar7 = dVar2 * dVar8;
      uVar5 = dVar3 * dVar8;
      uVar6 = dVar1 * dVar8;
    }
  }
  auVar4._8_4_ = (int)uVar5;
  auVar4._0_8_ = uVar6;
  auVar4._12_4_ = (int)((ulonglong)uVar5 >> 0x20);
  *(undefined1 (*) [16])&(this->PlaneConstraintNormal).field0_0x0 = auVar4;
  this->PlaneConstraintAxisSetting = Custom;
  (this->PlaneConstraintNormal).field0_0x0._s_0.Z = (double)uVar7;
  return;
}

// SetPlaneConstraintOrigin @ 1478f4780

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMovementComponent::SetPlaneConstraintOrigin(UMovementComponent *this,TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (this->PlaneConstraintOrigin).field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->PlaneConstraintOrigin).field0_0x0._s_0.Y = dVar2;
  (this->PlaneConstraintOrigin).field0_0x0._s_0.Z = dVar1;
  return;
}

// SetUpdatedComponent @ 1478f5b20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMovementComponent::SetUpdatedComponent(UMovementComponent *this,USceneComponent *param_1)

{
  undefined1 *puVar1;
  code *pcVar2;
  FName FVar3;
  bool bVar4;
  FPhysicsVolumeChanged FVar5;
  char *pcVar6;
  UClass *pUVar7;
  char *pcVar8;
  TObjectPtr<USceneComponent> *pTVar9;
  UPrimitiveComponent *pUVar10;
  USceneComponent *pUVar11;
  char *pcVar12;
  FName local_res8;
  FName local_res10;
  code *local_48;
  undefined8 uStack_40;
  
  pTVar9 = &this->UpdatedComponent;
  pUVar11 = (pTVar9->field0_0x0).DebugPtr;
  pcVar12 = &DAT_00000002;
  if ((pUVar11 != (USceneComponent *)0x0) && (pUVar11 != param_1)) {
    if (this->bAutoRegisterPhysicsVolumeUpdates != '\0') {
      USceneComponent::SetShouldUpdatePhysicsVolume(pUVar11,false);
      if (((pTVar9->field0_0x0).DebugPtr != (USceneComponent *)0x0) &&
         (((uint)((pTVar9->field0_0x0).DebugPtr)->_padding_ >> 0x1e & 1) == 0)) {
        USceneComponent::SetPhysicsVolume((pTVar9->field0_0x0).DebugPtr,(APhysicsVolume *)0x0,true);
      }
    }
    pUVar11 = (pTVar9->field0_0x0).DebugPtr;
    pcVar6 = strstr("&UMovementComponent::PhysicsVolumeChanged","::");
    if (pcVar6 == (char *)0x0) {
LAB_1478f5bea:
      pcVar8 = &DAT_00000002;
LAB_1478f5bed:
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Result && Result[2] != \'0\'",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                         ,0x1da,L"\'%hs\' does not look like a member function");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      do {
        pcVar8 = pcVar6;
        pcVar6 = strstr(pcVar8 + 1,"::");
      } while (pcVar6 != (char *)0x0);
      if (pcVar8 == (char *)0x0) goto LAB_1478f5bea;
      pcVar8 = pcVar8 + 2;
      if (*pcVar8 == '0') goto LAB_1478f5bed;
    }
    ::FName::FName(&local_res8,pcVar8);
    if (pUVar11->PhysicsVolumeChangedDelegate != (FPhysicsVolumeChanged)0x0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) <
           `protected:_class_FName___cdecl_TSparseDynamicDelegate<FPhysicsVolumeChanged_MCSignature,USceneComponent,FPhysicsVolumeChangedInfoGetter>::GetDelegateName(void)const___ptr64'
           ::__l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FPhysicsVolumeChanged_MCSignature,USceneComponent,FPhysicsVolumeChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `protected:_class_FName___cdecl_TSparseDynamicDelegate<FPhysicsVolumeChanged_MCSignature,USceneComponent,FPhysicsVolumeChangedInfoGetter>::GetDelegateName(void)const___ptr64'
         ::__l2::_thread_safe_static_guard_0__ == -1)) {
        ::FName::FName(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FPhysicsVolumeChanged_MCSignature,USceneComponent,FPhysicsVolumeChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                        ::__l2::DelegateFName,"PhysicsVolumeChangedDelegate");
        _Init_thread_footer(&`protected:_class_FName___cdecl_TSparseDynamicDelegate<FPhysicsVolumeChanged_MCSignature,USceneComponent,FPhysicsVolumeChangedInfoGetter>::GetDelegateName(void)const___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      FVar3 = `protected:_class_FName___cdecl_TSparseDynamicDelegate<FPhysicsVolumeChanged_MCSignature,USceneComponent,FPhysicsVolumeChangedInfoGetter>::GetDelegateName(void)const___ptr64'
              ::__l2::DelegateFName;
      bVar4 = UObjectBase::IsValidLowLevelFast((UObjectBase *)pUVar11,false);
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("DelegateOwner->IsValidLowLevelFast(false)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\SparseDelegate.h"
                             ,0xd7,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVar5 = (FPhysicsVolumeChanged)
              FSparseDelegateStorage::Remove((UObject *)pUVar11,FVar3,(UObject *)this,local_res8);
      pUVar11->PhysicsVolumeChangedDelegate = FVar5;
    }
    FTickFunction::RemovePrerequisite
              ((FTickFunction *)&((this->UpdatedComponent).field0_0x0.DebugPtr)->_padding_,
               (UObject *)this,(FTickFunction *)&this->_padding_);
  }
  if ((param_1 == (USceneComponent *)0x0) || (((uint)param_1->_padding_ >> 0x1e & 1) != 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  pTVar9 = &this->UpdatedComponent;
  pUVar11 = (USceneComponent *)0x0;
  if (bVar4) {
    pUVar11 = param_1;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending == false) || (pUVar11 == (USceneComponent *)0x0)) {
    (pTVar9->field0_0x0).DebugPtr = pUVar11;
    if (pUVar11 != (USceneComponent *)0x0) goto LAB_1478f5d3c;
LAB_1478f5d55:
    pUVar10 = (UPrimitiveComponent *)0x0;
  }
  else {
    UE::GC::MarkAsReachable((UObject *)pUVar11);
    (pTVar9->field0_0x0).DebugPtr = pUVar11;
LAB_1478f5d3c:
    pUVar7 = UPrimitiveComponent::StaticClass();
    bVar4 = FObjectPtr::IsA((FObjectPtr *)pTVar9,pUVar7);
    if (!bVar4) goto LAB_1478f5d55;
    pUVar10 = (UPrimitiveComponent *)(pTVar9->field0_0x0).DebugPtr;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar10 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar10);
  }
  (this->UpdatedPrimitive).field0_0x0.DebugPtr = pUVar10;
  pUVar11 = (this->UpdatedComponent).field0_0x0.DebugPtr;
  if (pUVar11 == (USceneComponent *)0x0) goto LAB_1478f5ec0;
  pcVar6 = strstr("&UMovementComponent::PhysicsVolumeChanged","::");
  if (pcVar6 == (char *)0x0) {
LAB_1478f5dca:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result && Result[2] != \'0\'",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Delegates\\Delegate.h"
                       ,0x1da,L"\'%hs\' does not look like a member function");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    do {
      pcVar8 = pcVar6;
      pcVar6 = strstr(pcVar8 + 1,"::");
    } while (pcVar6 != (char *)0x0);
    if ((pcVar8 == (char *)0x0) || (pcVar12 = pcVar8 + 2, pcVar8[2] == '0')) goto LAB_1478f5dca;
  }
  ::FName::FName(&local_res10,pcVar12);
  uStack_40 = (ulonglong)uStack_40._4_4_ << 0x20;
  local_48 = _vcall__1320__flat______;
  TSparseDynamicDelegate<FPhysicsVolumeChanged_MCSignature,USceneComponent,FPhysicsVolumeChangedInfoGetter>
  ::__Internal_AddUniqueDynamic<UMovementComponent>
            ((TSparseDynamicDelegate<FPhysicsVolumeChanged_MCSignature,USceneComponent,FPhysicsVolumeChangedInfoGetter>
              *)&pUVar11->PhysicsVolumeChangedDelegate,this,(pmf_eec73839 *)&local_48,local_res10);
  if (this->bAutoRegisterPhysicsVolumeUpdates != '\0') {
    USceneComponent::SetShouldUpdatePhysicsVolume
              ((this->UpdatedComponent).field0_0x0.DebugPtr,
               this->bComponentShouldUpdatePhysicsVolume);
    if ((bool)this->bComponentShouldUpdatePhysicsVolume) {
      if ((this->bInOnRegister == false) && (this->bInInitializeComponent == false)) {
        pUVar11 = (this->UpdatedComponent).field0_0x0.DebugPtr;
        (**(code **)(pUVar11->_padding_ + 0x5c0))(pUVar11,1);
      }
    }
    else {
      USceneComponent::SetPhysicsVolume
                ((this->UpdatedComponent).field0_0x0.DebugPtr,(APhysicsVolume *)0x0,true);
    }
  }
  FTickFunction::AddPrerequisite
            ((FTickFunction *)&((this->UpdatedComponent).field0_0x0.DebugPtr)->_padding_,
             (UObject *)this,(FTickFunction *)&this->_padding_);
LAB_1478f5ec0:
  (**(code **)(this->_padding_ + 0x540))(this);
  if (this->bSnapToPlaneAtStart == '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001478f5ef3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x5f0))(this);
  return;
}

// ShouldSkipUpdate @ 1478f7560

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall UMovementComponent::ShouldSkipUpdate(UMovementComponent *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  USceneComponent *pUVar3;
  UPrimitiveComponent *this_00;
  UActorComponent *this_01;
  double dVar4;
  int iVar5;
  UWorld *pUVar6;
  UClass *pUVar7;
  UWorld *pUVar8;
  bool bVar9;
  ForAnyElementType FVar10;
  float fVar11;
  undefined1 local_res8 [8];
  TArray<USceneComponent_*,TSizedDefaultAllocator<32>_> local_38 [2];
  
  pUVar3 = (this->UpdatedComponent).field0_0x0.DebugPtr;
  if ((pUVar3 == (USceneComponent *)0x0) || ((pUVar3->Mobility).Value != '\x02')) {
    return true;
  }
  if (this->bUpdateOnlyIfRendered == 0) {
    return false;
  }
  pUVar6 = (UWorld *)this->_padding_;
  if (pUVar6 == (UWorld *)0x0) {
    pUVar6 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
  }
  dVar4 = __real_3fda3d70a0000000;
  this_00 = (this->UpdatedPrimitive).field0_0x0.DebugPtr;
  if ((this_00 != (UPrimitiveComponent *)0x0) &&
     (fVar11 = UPrimitiveComponent::GetLastRenderTime(this_00),
     pUVar6->TimeSeconds - (double)fVar11 <= dVar4)) {
    return false;
  }
  local_38[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38[0].ArrayNum = 0;
  local_38[0].ArrayMax = 0;
  USceneComponent::GetChildrenComponents((this->UpdatedComponent).field0_0x0.DebugPtr,true,local_38)
  ;
  iVar5 = local_38[0].ArrayNum;
  pFVar1 = local_38[0].AllocatorInstance.Data + (longlong)local_38[0].ArrayNum * 8;
  FVar10.Data = local_38[0].AllocatorInstance.Data;
  do {
    if (local_38[0].ArrayNum != iVar5) {
      `TCheckedPointerIterator<USceneComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar10.Data == pFVar1) {
      bVar9 = true;
      goto LAB_1478f76c7;
    }
    this_01 = *(UActorComponent **)FVar10.Data;
    if (this_01 != (UActorComponent *)0x0) {
      pUVar7 = UPrimitiveComponent::StaticClass();
      iVar2 = (int)pUVar7->_padding_;
      if (((iVar2 <= *(int *)(this_01->_padding_ + 0x38)) &&
          ((longlong *)
           *(undefined1 **)(*(longlong *)(this_01->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
           &pUVar7->_padding_)) && (this_01->bRegistered != 0)) {
        if ((this_01[4].PrimaryComponentTick._padding_ & 1) == 0) {
          fVar11 = *(float *)&this_01[4].PrimaryComponentTick._padding_;
        }
        else {
          pUVar8 = this_01->WorldPrivate;
          if (pUVar8 == (UWorld *)0x0) {
            pUVar8 = UActorComponent::GetWorld_Uncached(this_01);
          }
          fVar11 = (float)pUVar8->TimeSeconds;
        }
        if (pUVar6->TimeSeconds - (double)fVar11 <= dVar4) {
          bVar9 = false;
LAB_1478f76c7:
          if (local_38[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_38[0].AllocatorInstance.Data);
          }
          return bVar9;
        }
      }
    }
    FVar10.Data = FVar10.Data + 8;
  } while( true );
}

// SlideAlongSurface @ 1478f79a0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

float __thiscall
UMovementComponent::SlideAlongSurface
          (UMovementComponent *this,TVector<double> *param_1,float param_2,TVector<double> *param_3,
          FHitResult *param_4,bool param_5)

{
  USceneComponent *pUVar1;
  uint uVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  undefined4 in_XMM2_Db;
  FHitResult *pFVar6;
  ulonglong uVar7;
  double local_88;
  double local_80;
  double local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  double local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (param_4->bBlockingHit != 0) {
    local_70 = *(undefined4 *)&param_3->field0_0x0;
    uStack_6c = *(undefined4 *)((longlong)&param_3->field0_0x0 + 4);
    uStack_68 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 8);
    uStack_64 = *(undefined4 *)((longlong)&param_3->field0_0x0 + 0xc);
    local_60 = (param_3->field0_0x0)._s_0.Z;
    pFVar6 = param_4;
    (**(code **)(this->_padding_ + 0x588))
              (local_70,&local_88,param_1,CONCAT44(in_XMM2_Db,param_2),param_3,param_4);
    if (0.0 < local_80 * (param_1->field0_0x0)._s_0.Y + local_88 * (param_1->field0_0x0)._s_0.X +
              local_78 * (param_1->field0_0x0)._s_0.Z) {
      pUVar1 = (this->UpdatedComponent).field0_0x0.DebugPtr;
      uVar7 = (ulonglong)pFVar6 & 0xffffffffffffff00;
      local_58 = *(undefined4 *)(pUVar1->ComponentToWorld).Rotation.XY.m128d_f64;
      uStack_54 = *(undefined4 *)((longlong)(pUVar1->ComponentToWorld).Rotation.XY.m128d_f64 + 4);
      uStack_50 = *(undefined4 *)((pUVar1->ComponentToWorld).Rotation.XY.m128d_f64 + 1);
      uStack_4c = *(undefined4 *)((longlong)(pUVar1->ComponentToWorld).Rotation.XY.m128d_f64 + 0xc);
      local_48 = *(undefined4 *)(pUVar1->ComponentToWorld).Rotation.ZW.m128d_f64;
      uStack_44 = *(undefined4 *)((longlong)(pUVar1->ComponentToWorld).Rotation.ZW.m128d_f64 + 4);
      uStack_40 = *(undefined4 *)((pUVar1->ComponentToWorld).Rotation.ZW.m128d_f64 + 1);
      uStack_3c = *(undefined4 *)((longlong)(pUVar1->ComponentToWorld).Rotation.ZW.m128d_f64 + 0xc);
      (**(code **)(this->_padding_ + 0x570))(this,&local_88,&local_58,1,param_4,uVar7);
      fVar3 = param_4->Time;
      if (param_4->bBlockingHit == '\x01' && param_4->bStartPenetrating == '\0') {
        if (param_5) {
          (**(code **)(this->_padding_ + 0x548))(this,param_4,fVar3 * param_2,&local_88);
        }
        (**(code **)(this->_padding_ + 0x598))(this,&local_88,param_4,&local_70);
        uVar2 = SUB84(local_88,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar4 = (uint)((ulonglong)local_88 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        if ((((__real_3f50624de0000000 <= (double)CONCAT44(uVar4,uVar2) &&
               (double)CONCAT44(uVar4,uVar2) != __real_3f50624de0000000) ||
             (uVar2 = SUB84(local_80,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
             uVar4 = (uint)((ulonglong)local_80 >> 0x20) &
                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
             __real_3f50624de0000000 <= (double)CONCAT44(uVar4,uVar2) &&
             (double)CONCAT44(uVar4,uVar2) != __real_3f50624de0000000)) ||
            (uVar2 = SUB84(local_78,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
            uVar4 = (uint)((ulonglong)local_78 >> 0x20) &
                    __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
            __real_3f50624de0000000 <= (double)CONCAT44(uVar4,uVar2) &&
            (double)CONCAT44(uVar4,uVar2) != __real_3f50624de0000000)) &&
           (0.0 < local_88 * (param_1->field0_0x0)._s_0.X + local_80 * (param_1->field0_0x0)._s_0.Y
                  + local_78 * (param_1->field0_0x0)._s_0.Z)) {
          (**(code **)(this->_padding_ + 0x570))
                    (this,&local_88,&local_58,1,param_4,uVar7 & 0xffffffffffffff00);
          fVar5 = (__real_3f800000 - fVar3) * param_4->Time;
          fVar3 = fVar5 + fVar3;
          if ((param_5) && (param_4->bBlockingHit != 0)) {
            (**(code **)(this->_padding_ + 0x548))(this,param_4,fVar5 * param_2,&local_88);
          }
        }
      }
      if (__real_3f800000 <= fVar3) {
        fVar3 = __real_3f800000;
      }
      if (0.0 < fVar3) {
        return fVar3;
      }
      return 0.0;
    }
  }
  return 0.0;
}

// SnapUpdatedComponentToPlane @ 1478f7c00

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMovementComponent::SnapUpdatedComponentToPlane(UMovementComponent *this)

{
  USceneComponent *this_00;
  double *pdVar1;
  TVector<double>_u_0 local_48;
  undefined1 local_28 [32];
  
  this_00 = (this->UpdatedComponent).field0_0x0.DebugPtr;
  if ((this_00 != (USceneComponent *)0x0) && (this->bConstrainToPlane != '\0')) {
    local_48._s_0.X = (this_00->ComponentToWorld).Translation.XY.m128d_f64[0];
    local_48._s_0.Y = (this_00->ComponentToWorld).Translation.XY.m128d_f64[1];
    local_48._s_0.Z = (this_00->ComponentToWorld).Translation.ZW.m128d_f64[0];
    pdVar1 = (double *)(**(code **)(this->_padding_ + 0x5e0))(SUB84(local_48._s_0.Z,0),local_28);
    local_48._s_0.X = *pdVar1;
    local_48._s_0.Y = pdVar1[1];
    local_48._s_0.Z = pdVar1[2];
    USceneComponent::SetWorldLocation
              (this_00,(TVector<double> *)&local_48._s_0,false,(FHitResult *)0x0,None);
  }
  return;
}

// StaticRegisterNativesUMovementComponent @ 1478f8130

void __cdecl UMovementComponent::StaticRegisterNativesUMovementComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0x14;
  local_18.DataPtr = Z_Construct_UClass_UMovementComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 1478fa760

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMovementComponent::TickComponent
          (UMovementComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  USceneComponent *pUVar1;
  
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  pUVar1 = (this->UpdatedComponent).field0_0x0.DebugPtr;
  if ((pUVar1 != (USceneComponent *)0x0) && (((uint)pUVar1->_padding_ >> 0x1e & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001478fa790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x530))(this,0);
    return;
  }
  return;
}

// TwoWallAdjust @ 1478faab0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMovementComponent::TwoWallAdjust
          (UMovementComponent *this,TVector<double> *param_1,FHitResult *param_2,
          TVector<double> *param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  double *pdVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double local_b0;
  double dStack_a8;
  double local_a0;
  undefined1 local_98 [144];
  
  local_b0 = *(double *)&param_2->Normal;
  dStack_a8 = *(double *)&(param_2->Normal).field_0x8;
  local_c8 = (param_1->field0_0x0)._s_0.X;
  dStack_c0 = (param_1->field0_0x0)._s_0.Y;
  local_b8 = (param_1->field0_0x0)._s_0.Z;
  dVar6 = (param_3->field0_0x0)._s_0.Y;
  dVar1 = (param_3->field0_0x0)._s_0.Z;
  dVar7 = (param_3->field0_0x0)._s_0.X;
  local_a0 = *(double *)&(param_2->Normal).field_0x10;
  if (0.0 < dVar6 * dStack_a8 + dVar7 * local_b0 + dVar1 * local_a0) {
    dVar1 = (param_1->field0_0x0)._s_0.X;
    dVar9 = (param_1->field0_0x0)._s_0.Y;
    dVar6 = (param_1->field0_0x0)._s_0.Z;
    pdVar3 = (double *)
             (**(code **)(this->_padding_ + 0x588))
                       (SUB84(dVar7 * local_b0,0),local_98,&local_c8,__real_3f800000 - param_2->Time
                        ,&local_b0,param_2);
    uVar10 = *pdVar3;
    uVar11 = pdVar3[1];
    local_b8 = pdVar3[2];
    if (0.0 < dVar9 * (double)uVar11 + dVar1 * (double)uVar10 + dVar6 * local_b8) {
      dVar6 = (local_b0 * (param_3->field0_0x0)._s_0.X + dStack_a8 * (param_3->field0_0x0)._s_0.Y +
              local_a0 * (param_3->field0_0x0)._s_0.Z) - __real_3ff0000000000000;
      if ((double)CONCAT44((uint)((ulonglong)dVar6 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar6,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <
          __real_3f1a36e2e0000000) {
        uVar10 = (double)uVar10 + local_b0 * __real_3f847ae140000000;
        uVar11 = (double)uVar11 + dStack_a8 * __real_3f847ae140000000;
        local_b8 = local_b8 + local_a0 * __real_3f847ae140000000;
      }
    }
    else {
      local_b8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    }
  }
  else {
    dVar9 = dVar1 * dStack_a8 - dVar6 * local_a0;
    dVar1 = dVar7 * local_a0 - dVar1 * local_b0;
    dVar7 = dVar6 * local_b0 - dVar7 * dStack_a8;
    dVar6 = dVar1 * dVar1 + dVar9 * dVar9 + dVar7 * dVar7;
    uVar8 = dVar7;
    uVar10 = dVar9;
    uVar11 = dVar1;
    if ((dVar6 != __real_3ff0000000000000) &&
       (uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
       uVar11 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
       __real_3e45798ee0000000 <= dVar6)) {
      dVar6 = __real_3ff0000000000000 / SQRT(dVar6);
      uVar8 = dVar7 * dVar6;
      uVar10 = dVar9 * dVar6;
      uVar11 = dVar1 * dVar6;
    }
    local_b8 = ((double)uVar11 * dStack_c0 + (double)uVar10 * local_c8 + (double)uVar8 * local_b8) *
               (double)(__real_3f800000 - param_2->Time);
    uVar10 = local_b8 * (double)uVar10;
    uVar11 = local_b8 * (double)uVar11;
    local_b8 = local_b8 * (double)uVar8;
    if ((double)uVar11 * (param_1->field0_0x0)._s_0.Y +
        (double)uVar10 * (param_1->field0_0x0)._s_0.X + local_b8 * (param_1->field0_0x0)._s_0.Z <
        0.0) {
      uVar4 = (uint)__xmm_80000000000000008000000000000000;
      uVar5 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      local_b8 = (double)CONCAT44((uint)((ulonglong)local_b8 >> 0x20) ^ uVar5,
                                  SUB84(local_b8,0) ^ uVar4);
      uVar10 = CONCAT44((uint)((ulonglong)uVar10 >> 0x20) ^ uVar5,(uint)uVar10 ^ uVar4);
      uVar11 = CONCAT44((uint)((ulonglong)uVar11 >> 0x20) ^ uVar5,(uint)uVar11 ^ uVar4);
    }
  }
  auVar2._8_4_ = (int)uVar11;
  auVar2._0_8_ = uVar10;
  auVar2._12_4_ = (int)((ulonglong)uVar11 >> 0x20);
  *(undefined1 (*) [16])&param_1->field0_0x0 = auVar2;
  (param_1->field0_0x0)._s_0.Z = local_b8;
  return;
}

// UpdateComponentVelocity @ 1478fb180

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMovementComponent::UpdateComponentVelocity(UMovementComponent *this)

{
  double dVar1;
  USceneComponent *pUVar2;
  double dVar3;
  
  pUVar2 = (this->UpdatedComponent).field0_0x0.DebugPtr;
  if (pUVar2 != (USceneComponent *)0x0) {
    dVar3 = (this->Velocity).field0_0x0._s_0.Y;
    dVar1 = (this->Velocity).field0_0x0._s_0.Z;
    (pUVar2->ComponentVelocity).field0_0x0._s_0.X = (this->Velocity).field0_0x0._s_0.X;
    (pUVar2->ComponentVelocity).field0_0x0._s_0.Y = dVar3;
    (pUVar2->ComponentVelocity).field0_0x0._s_0.Z = dVar1;
  }
  return;
}

// UpdateTickRegistration @ 1478fe3d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMovementComponent::UpdateTickRegistration(UMovementComponent *this)

{
  if (this->bAutoUpdateTickRegistration == '\0') {
    return;
  }
  if (((this->UpdatedComponent).field0_0x0.DebugPtr != (USceneComponent *)0x0) &&
     ((this->_padding_ & 0x80000) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001478fe3f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->_padding_ + 0x420))(this,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001478fe3fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x420))(this,0);
  return;
}

// execConstrainDirectionToPlane @ 1479020d0

void __cdecl
UMovementComponent::execConstrainDirectionToPlane(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined1 local_28 [32];
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_48 = local_68;
  uStack_44 = uStack_64;
  uStack_40 = uStack_60;
  uStack_3c = uStack_5c;
  local_38 = local_58;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x5d8))(param_1,local_28,&local_48);
  uVar2 = puVar3[1];
  *(undefined8 *)param_3 = *puVar3;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar3[2];
  return;
}

// execConstrainLocationToPlane @ 147902190

void __cdecl
UMovementComponent::execConstrainLocationToPlane(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined1 local_28 [32];
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_48 = local_68;
  uStack_44 = uStack_64;
  uStack_40 = uStack_60;
  uStack_3c = uStack_5c;
  local_38 = local_58;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x5e0))(param_1,local_28,&local_48);
  uVar2 = puVar3[1];
  *(undefined8 *)param_3 = *puVar3;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar3[2];
  return;
}

// execConstrainNormalToPlane @ 147902250

void __cdecl
UMovementComponent::execConstrainNormalToPlane(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined1 local_28 [32];
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  local_48 = local_68;
  uStack_44 = uStack_64;
  uStack_40 = uStack_60;
  uStack_3c = uStack_5c;
  local_38 = local_58;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar3 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x5e8))(param_1,local_28,&local_48);
  uVar2 = puVar3[1];
  *(undefined8 *)param_3 = *puVar3;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = puVar3[2];
  return;
}

// execGetGravityZ @ 147903940

void __cdecl UMovementComponent::execGetGravityZ(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x4f8))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetMaxSpeed @ 147904340

void __cdecl UMovementComponent::execGetMaxSpeed(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined4 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x500))();
  *(undefined4 *)param_3 = uVar1;
  return;
}

// execGetPhysicsVolume @ 147904a20

void __cdecl
UMovementComponent::execGetPhysicsVolume(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x520))();
  *(undefined8 *)param_3 = uVar1;
  return;
}

// execGetPlaneConstraintAxisSetting @ 147904a60

void __cdecl
UMovementComponent::execGetPlaneConstraintAxisSetting
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = param_1[7].field_0xb;
  return;
}

// execGetPlaneConstraintNormal @ 147904a90

void __cdecl
UMovementComponent::execGetPlaneConstraintNormal(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)&param_1[6].field_0x8;
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 6);
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  *(undefined8 *)((longlong)param_3 + 0x10) = *(undefined8 *)&param_1[6].field_0x10;
  return;
}

// execGetPlaneConstraintOrigin @ 147904ad0

void __cdecl
UMovementComponent::execGetPlaneConstraintOrigin(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = *(undefined8 *)&param_1[6].field_0x20;
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[6].field_0x18;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  *(undefined8 *)((longlong)param_3 + 0x10) = *(undefined8 *)(param_1 + 7);
  return;
}

// execIsExceedingMaxSpeed @ 147905620

void __cdecl
UMovementComponent::execIsExceedingMaxSpeed(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x508))(param_1,local_res8[0]);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execK2_MoveUpdatedComponent @ 1479064d0

void __cdecl
UMovementComponent::execK2_MoveUpdatedComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  undefined1 uVar3;
  TQuat<double> *pTVar4;
  uchar *puVar5;
  bool bVar6;
  bool bVar7;
  int local_res8 [2];
  int local_res10 [2];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined1 uStack_19c;
  undefined2 uStack_19b;
  undefined1 uStack_199;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  TRotator<double> local_168;
  TQuat<double> local_148;
  uchar local_128 [4];
  undefined4 local_124;
  undefined4 local_84;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_180,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_180);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_198,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_198);
  }
  memset(local_128,0,0x100);
  uStack_1a0 = 0xffffffff;
  uStack_19b = 0;
  uStack_199 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_1a8 = 0;
  uStack_19c = 0;
  uStack_58 = 0xffffffff;
  local_124 = 0x3f800000;
  local_84 = 0xffffffff;
  local_60 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_128);
  }
  local_res8[0] = 0;
  puVar5 = local_128;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar6 = local_res8[0] != 0;
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_168.Pitch = local_198;
  local_168.Yaw = dStack_190;
  local_168.Roll = local_188;
  bVar7 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_1b8 = local_180;
  uStack_1b0 = uStack_178;
  local_1a8 = local_170;
  pcVar2 = *(code **)(*(longlong *)param_1 + 0x570);
  pTVar4 = UE::Math::TRotator<double>::Quaternion(&local_168,&local_148);
  uVar3 = (*pcVar2)(param_1,&local_1b8,pTVar4,bVar6,puVar5,bVar7);
  *(undefined1 *)param_3 = uVar3;
  return;
}

// execPhysicsVolumeChanged @ 147907670

void __cdecl
UMovementComponent::execPhysicsVolumeChanged(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x528))(param_1,local_res8);
  return;
}

// execSetPlaneConstraintAxisSetting @ 1479108a0

void __cdecl
UMovementComponent::execSetPlaneConstraintAxisSetting
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x5b0))(param_1,local_res8[0]);
  return;
}

// execSetPlaneConstraintEnabled @ 147910930

void __cdecl
UMovementComponent::execSetPlaneConstraintEnabled(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x5d0))(param_1,local_res8[0] != 0);
  return;
}

// execSetPlaneConstraintFromVectors @ 1479109d0

void __cdecl
UMovementComponent::execSetPlaneConstraintFromVectors
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_60,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_60);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  local_48 = local_78;
  uStack_40 = uStack_70;
  local_38 = local_68;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_28 = local_60;
  uStack_24 = uStack_5c;
  uStack_20 = uStack_58;
  uStack_1c = uStack_54;
  local_18 = local_50;
  (**(code **)(*(longlong *)param_1 + 0x5c0))(param_1,&local_28,&local_48);
  return;
}

// execSetPlaneConstraintNormal @ 147910ad0

void __cdecl
UMovementComponent::execSetPlaneConstraintNormal(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_18 = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x5b8))(param_1,&local_28);
  return;
}

// execSetPlaneConstraintOrigin @ 147910b70

void __cdecl
UMovementComponent::execSetPlaneConstraintOrigin(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_18 = local_38;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x5c8))(param_1,&local_28);
  return;
}

// execSetUpdatedComponent @ 147912950

void __cdecl
UMovementComponent::execSetUpdatedComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x530))(param_1,local_res8);
  return;
}

// execSnapUpdatedComponentToPlane @ 147913cb0

void __cdecl
UMovementComponent::execSnapUpdatedComponentToPlane(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147913cc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x5f0))();
  return;
}

// execStopMovementImmediately @ 147913d10

void __cdecl
UMovementComponent::execStopMovementImmediately(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
                    /* WARNING: Could not recover jumptable at 0x000147913d28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x510))();
  return;
}

