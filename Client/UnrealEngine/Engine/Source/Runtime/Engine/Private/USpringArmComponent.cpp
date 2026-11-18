// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 22

// StaticClass @ 147ba7560

UClass * __cdecl USpringArmComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USpringArmComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SpringArmComponent",
               &Z_Registration_Info_UClass_USpringArmComponent.InnerSingleton,
               StaticRegisterNativesUSpringArmComponent,0x350,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<USpringArmComponent>,
               InternalVTableHelperCtorCaller<USpringArmComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USpringArmComponent.InnerSingleton;
}

// USpringArmComponent @ 147bbdba0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USpringArmComponent * __thiscall
USpringArmComponent::USpringArmComponent(USpringArmComponent *this,FVTableHelper *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->bIsCameraFixed = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  return this;
}

// USpringArmComponent @ 147bbdbf0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USpringArmComponent * __thiscall
USpringArmComponent::USpringArmComponent(USpringArmComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->bUsePawnControlRotation = 0;
  this->bDoCollisionTest = 1;
  this->bInheritRoll = 1;
  this->bInheritYaw = 1;
  this->bInheritPitch = 1;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 8;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 0x80;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->bIsCameraFixed = false;
  *(undefined1 *)&this->_padding_ = 4;
  this->TargetArmLength = 300.0;
  this->ProbeSize = 12.0;
  (this->ProbeChannel).Value = '\x04';
  dVar4 = UE::Math::TQuat<double>::Identity.Y;
  (this->RelativeSocketRotation).X = UE::Math::TQuat<double>::Identity.X;
  (this->RelativeSocketRotation).Y = dVar4;
  dVar5 = UE::Math::TQuat<double>::Identity.W;
  dVar4 = UE::Math::TQuat<double>::Identity.Z;
  this->bUseCameraLagSubstepping = 1;
  this->bClampToMaxPhysicsDeltaTime = 0;
  (this->RelativeSocketRotation).Z = dVar4;
  (this->RelativeSocketRotation).W = dVar5;
  this->CameraLagSpeed = 10.0;
  this->CameraRotationLagSpeed = 10.0;
  this->CameraLagMaxTimeStep = 0.016666668;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->CameraLagMaxDistance = 0.0;
  (this->UnfixedCameraPosition).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->UnfixedCameraPosition).field0_0x0._s_0.Y = (double)uVar3;
  (this->UnfixedCameraPosition).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  return this;
}

// ~USpringArmComponent @ 147bbfad0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USpringArmComponent::~USpringArmComponent(USpringArmComponent *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// ApplyWorldOffset @ 147bca1e0

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
USpringArmComponent::ApplyWorldOffset
          (USpringArmComponent *this,TVector<double> *param_1,bool param_2)

{
  USceneComponent::ApplyWorldOffset((USceneComponent *)this,param_1,param_2);
  (this->PreviousDesiredLoc).field0_0x0._s_0.X =
       (param_1->field0_0x0)._s_0.X + (this->PreviousDesiredLoc).field0_0x0._s_0.X;
  (this->PreviousDesiredLoc).field0_0x0._s_0.Y =
       (this->PreviousDesiredLoc).field0_0x0._s_0.Y + (param_1->field0_0x0)._s_0.Y;
  (this->PreviousDesiredLoc).field0_0x0._s_0.Z =
       (this->PreviousDesiredLoc).field0_0x0._s_0.Z + (param_1->field0_0x0)._s_0.Z;
  (this->PreviousArmOrigin).field0_0x0._s_0.X =
       (param_1->field0_0x0)._s_0.X + (this->PreviousArmOrigin).field0_0x0._s_0.X;
  (this->PreviousArmOrigin).field0_0x0._s_0.Y =
       (param_1->field0_0x0)._s_0.Y + (this->PreviousArmOrigin).field0_0x0._s_0.Y;
  (this->PreviousArmOrigin).field0_0x0._s_0.Z =
       (param_1->field0_0x0)._s_0.Z + (this->PreviousArmOrigin).field0_0x0._s_0.Z;
  return;
}

// BlendLocations @ 147bcadb0

TVector<double> * __thiscall
USpringArmComponent::BlendLocations
          (USpringArmComponent *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1,TVector<double> *param_2,bool param_3,float param_4)

{
  double dVar1;
  double dVar2;
  
  if (param_3) {
    param_1 = param_2;
  }
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar1 = (param_1->field0_0x0)._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// GetDesiredRotation @ 147bdf950

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TRotator<double> * __thiscall
USpringArmComponent::GetDesiredRotation
          (USpringArmComponent *this,TRotator<double> *__return_storage_ptr__)

{
  USceneComponent::GetComponentRotation((USceneComponent *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 147be5e70

UClass * __cdecl USpringArmComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USpringArmComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"SpringArmComponent",
               &Z_Registration_Info_UClass_USpringArmComponent.InnerSingleton,
               StaticRegisterNativesUSpringArmComponent,0x350,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<USpringArmComponent>,
               InternalVTableHelperCtorCaller<USpringArmComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USpringArmComponent.InnerSingleton;
}

// GetSocketTransform @ 147be7280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTransform<double> * __thiscall
USpringArmComponent::GetSocketTransform
          (USpringArmComponent *this,TTransform<double> *__return_storage_ptr__,FName param_1,
          ERelativeTransformSpace param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_f8 [32];
  TTransform<double> local_d8;
  TTransform<double> local_78;
  ulonglong local_18;
  
  dVar8 = _UNK_150689688;
  dVar7 = ___xmm_3ff00000000000003ff0000000000000;
  dVar6 = _UNK_150689518;
  dVar5 = ___xmm_00000000000000003ff0000000000000;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_78.Rotation.XY.m128d_f64[0] = (this->RelativeSocketRotation).X;
  local_78.Rotation.XY.m128d_f64[1] = (this->RelativeSocketRotation).Y;
  local_78.Rotation.ZW.m128d_f64[0] = (this->RelativeSocketRotation).Z;
  local_78.Rotation.ZW.m128d_f64[1] = (this->RelativeSocketRotation).W;
  local_78.Translation.ZW.m128d_f64[0] = (this->RelativeSocketLocation).field0_0x0._s_0.Z;
  local_78.Translation.ZW.m128d_f64[1] = 0.0;
  local_78.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_78.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_78.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_78.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_78.Translation.XY.m128d_f64[0] = (this->RelativeSocketLocation).field0_0x0._s_0.X;
  local_78.Translation.XY.m128d_f64[1] = (this->RelativeSocketLocation).field0_0x0._s_0.Y;
  fVar2 = GlobalVectorConstants::Float0001.m128_f32[1];
  fVar3 = GlobalVectorConstants::Float0001.m128_f32[2];
  fVar4 = GlobalVectorConstants::Float0001.m128_f32[3];
  if (param_2 == RTS_World) {
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
         (double)GlobalVectorConstants::Float0001.m128_f32[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = (double)fVar2;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = (double)fVar3;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = (double)fVar4;
    fVar2 = GlobalVectorConstants::FloatZero.m128_f32[1];
    fVar3 = GlobalVectorConstants::FloatZero.m128_f32[2];
    fVar4 = GlobalVectorConstants::FloatZero.m128_f32[3];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
         (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = (double)fVar2;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = (double)fVar3;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = (double)fVar4;
    fVar2 = GlobalVectorConstants::Float1110.m128_f32[1];
    fVar3 = GlobalVectorConstants::Float1110.m128_f32[2];
    fVar4 = GlobalVectorConstants::Float1110.m128_f32[3];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
         (double)GlobalVectorConstants::Float1110.m128_f32[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = (double)fVar2;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = (double)fVar3;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = (double)fVar4;
    UE::Math::TTransform<double>::Multiply
              (__return_storage_ptr__,&local_78,(TTransform<double> *)&this->_padding_);
  }
  else if ((param_2 == RTS_Actor) && (lVar1 = this->_padding_, lVar1 != 0)) {
    local_d8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_d8.Rotation.XY.m128d_f64[1] = (double)fVar2;
    local_d8.Rotation.ZW.m128d_f64[0] = (double)fVar3;
    local_d8.Rotation.ZW.m128d_f64[1] = (double)fVar4;
    local_d8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_d8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_d8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_d8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_d8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_d8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_d8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_d8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_d8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_d8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    UE::Math::TTransform<double>::Multiply
              (&local_d8,&local_78,(TTransform<double> *)&this->_padding_);
    lVar1 = *(longlong *)(lVar1 + 0x1b8);
    if (lVar1 == 0) {
      UE::Math::TTransform<double>::GetRelativeTransform
                (&local_d8,__return_storage_ptr__,&UE::Math::TTransform<double>::Identity);
    }
    else {
      UE::Math::TTransform<double>::GetRelativeTransform
                (&local_d8,__return_storage_ptr__,(TTransform<double> *)(lVar1 + 0x1f0));
    }
  }
  else {
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_78.Rotation.XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_78.Rotation.XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_78.Rotation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = local_78.Rotation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = local_78.Translation.XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = local_78.Translation.XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_78.Translation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = dVar7;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar8;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = dVar5;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar6;
  }
  return __return_storage_ptr__;
}

// GetTargetRotation @ 147bebc00

TRotator<double> * __thiscall
USpringArmComponent::GetTargetRotation
          (USpringArmComponent *this,TRotator<double> *__return_storage_ptr__)

{
  double dVar1;
  int iVar2;
  double dVar3;
  UClass *pUVar4;
  longlong *plVar5;
  double local_28;
  double dStack_20;
  double local_18;
  
  (**(code **)(this->_padding_ + 0x640))();
  if (this->bUsePawnControlRotation == 0) goto LAB_147bebcaa;
  plVar5 = (longlong *)this->_padding_;
  if (plVar5 == (longlong *)0x0) {
LAB_147bebc5a:
    plVar5 = (longlong *)0x0;
  }
  else {
    pUVar4 = Z_Construct_UClass_APawn_NoRegister();
    iVar2 = (int)pUVar4->_padding_;
    if ((*(int *)(plVar5[2] + 0x38) < iVar2) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(plVar5[2] + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar4->_padding_)) goto LAB_147bebc5a;
  }
  if ((plVar5 != (longlong *)0x0) &&
     ((((**(code **)(*plVar5 + 0x830))(plVar5,&local_28), local_28 != __return_storage_ptr__->Pitch
       || (dStack_20 != __return_storage_ptr__->Yaw)) || (local_18 != __return_storage_ptr__->Roll))
     )) {
    __return_storage_ptr__->Pitch = local_28;
    __return_storage_ptr__->Yaw = dStack_20;
    __return_storage_ptr__->Roll = local_18;
  }
LAB_147bebcaa:
  if ((this->_padding_ & 8) == 0) {
    dVar1 = (double)this->_padding_;
    dVar3 = (double)this->_padding_;
    if (this->bInheritPitch == 0) {
      __return_storage_ptr__->Pitch = (double)this->_padding_;
    }
    if (this->bInheritYaw == 0) {
      __return_storage_ptr__->Yaw = dVar3;
    }
    if (this->bInheritRoll == 0) {
      __return_storage_ptr__->Roll = dVar1;
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// GetUnfixedCameraPosition @ 147bec640

TVector<double> * __thiscall
USpringArmComponent::GetUnfixedCameraPosition
          (USpringArmComponent *this,TVector<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->UnfixedCameraPosition).field0_0x0._s_0.Y;
  dVar1 = (this->UnfixedCameraPosition).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.X = (this->UnfixedCameraPosition).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar1;
  return __return_storage_ptr__;
}

// HasAnySockets @ 147bee340

bool __thiscall USpringArmComponent::HasAnySockets(USpringArmComponent *this)

{
  return true;
}

// IsCollisionFixApplied @ 147bf0580

bool __thiscall USpringArmComponent::IsCollisionFixApplied(USpringArmComponent *this)

{
  return this->bIsCameraFixed;
}

// OnRegister @ 147bf60a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USpringArmComponent::OnRegister(USpringArmComponent *this)

{
  float fVar1;
  float fVar2;
  
  USceneComponent::OnRegister((USceneComponent *)this);
  fVar1 = this->CameraLagMaxTimeStep;
  if (this->CameraLagMaxTimeStep <= __real_3ba3d70a) {
    fVar1 = __real_3ba3d70a;
  }
  fVar2 = this->CameraLagSpeed;
  this->CameraLagMaxTimeStep = fVar1;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  this->CameraLagSpeed = fVar2;
  (**(code **)(this->_padding_ + 0x648))(this,0,0,0,0);
  return;
}

// PostLoad @ 147bf6e50

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall USpringArmComponent::PostLoad(USpringArmComponent *this)

{
  FPackageFileVersion FVar1;
  
  UObject::PostLoad((UObject *)this);
  if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
    FVar1 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
    if ((*(int *)FVar1 < 0x1bd) && ((this->_padding_ & 0x10) == 0)) {
      UActorComponent::DetermineUCSModifiedProperties((UActorComponent *)this);
      return;
    }
  }
  return;
}

// QuerySupportedSockets @ 147bf9760

void __thiscall
USpringArmComponent::QuerySupportedSockets
          (USpringArmComponent *this,
          TArray<FComponentSocketDescription,TSizedDefaultAllocator<32>_> *param_1)

{
  FName *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_1->ArrayNum;
  if (uVar4 == param_1->ArrayMax) {
    uVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = uVar4 + 1;
  uVar5 = 0;
  if ((int)uVar4 < (int)(uVar4 + 1)) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (FName *)((param_1->AllocatorInstance).Data + (longlong)(int)uVar4 * 0xc);
  if (pFVar1 != (FName *)0x0) {
    *pFVar1 = SocketName;
    *(undefined1 *)&pFVar1[1].ComparisonIndex.Value = 2;
  }
  return;
}

// StaticRegisterNativesUSpringArmComponent @ 147c037c0

void __cdecl USpringArmComponent::StaticRegisterNativesUSpringArmComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_USpringArmComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 147c07d40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USpringArmComponent::TickComponent
          (USpringArmComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  uint uVar1;
  
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  uVar1 = *(uint *)&this->field_0x290;
  (**(code **)(this->_padding_ + 0x648))
            (this,uVar1 & 0xffffff01,uVar1 >> 5 & 0xffffff01,uVar1 >> 6 & 0xffffff01,param_1);
  return;
}

// UpdateDesiredArmLocation @ 147c09f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
USpringArmComponent::UpdateDesiredArmLocation
          (USpringArmComponent *this,bool param_1,bool param_2,bool param_3,float param_4)

{
  float fVar1;
  int iVar2;
  UObject *pUVar3;
  AActor *pAVar4;
  longlong lVar5;
  double dVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  bool bVar9;
  float fVar10;
  float fVar11;
  void *pvVar12;
  undefined8 uVar13;
  UClass *pUVar14;
  TQuat<double> *pTVar15;
  TRotator<double> *pTVar16;
  TRotator<double> *pTVar17;
  TVector<double> *pTVar18;
  TVector<double> *pTVar19;
  UWorld *pUVar20;
  FName *pFVar21;
  FThreadSafeStaticStat<_public:___cdecl__protected:_virtual_void___cdecl_USpringArmComponent::UpdateDesiredArmLocation(bool,bool,bool,float)_::_37_::<lambda_2>::operator()(void)const_::_2_::FStat_SpringArm>
  FVar22;
  double *pdVar23;
  FString *pFVar24;
  FColor *pFVar25;
  wchar_t *pwVar26;
  uint uVar27;
  wchar_t *pwVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  double dVar33;
  double extraout_XMM0_Qa;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar40;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double extraout_XMM0_Qb;
  double extraout_XMM0_Qb_00;
  undefined1 auVar39 [16];
  undefined1 extraout_XMM0 [16];
  double dVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  double dVar45;
  double dVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar50;
  undefined1 auVar51 [16];
  double dVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  undefined8 uVar56;
  undefined1 auVar57 [16];
  undefined8 uVar58;
  undefined1 auStackY_4a8 [32];
  undefined1 local_448 [32];
  undefined1 local_428 [24];
  float local_410;
  TVector<double>_u_0 local_408;
  TRotator<double> local_3f0;
  double local_3d8;
  FName local_3d0;
  undefined1 local_3c8 [32];
  TQuat<double> local_3a8;
  TQuat<double> local_388;
  TQuat<double> local_368;
  FHitResult local_348;
  TQuat<double> local_248;
  TTransform<double> local_228;
  TTransform<double> local_1c8;
  FCollisionQueryParams local_168;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_4a8;
  local_410 = param_4;
  GetTargetRotation(this,&local_3f0);
  fVar53 = param_4;
  if (this->bClampToMaxPhysicsDeltaTime != 0) {
    pUVar14 = Z_Construct_UClass_UPhysicsSettings_NoRegister();
    if ((pUVar14->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(pUVar14);
    }
    pUVar3 = (pUVar14->ClassDefaultObject).field0_0x0.DebugPtr;
    if (pUVar3 == (UObject *)0x0) {
      pFVar24 = GetTypeName<UPhysicsSettings>((FString *)local_448);
      if ((pFVar24->Data).ArrayNum == 0) {
        pwVar26 = L"";
      }
      else {
        pwVar26 = (wchar_t *)(pFVar24->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar26);
    }
    pUVar14 = Z_Construct_UClass_UPhysicsSettings_NoRegister();
    iVar2 = (int)pUVar14->_padding_;
    if ((*(int *)(*(longlong *)&pUVar3->field_0x10 + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar3->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar14->_padding_)) {
      pFVar24 = GetTypeName<UPhysicsSettings>((FString *)local_448);
      pwVar26 = L"";
      if ((pFVar24->Data).ArrayNum == 0) {
        pwVar28 = L"";
      }
      else {
        pwVar28 = (wchar_t *)(pFVar24->Data).AllocatorInstance.Data;
      }
      pFVar24 = GetFullNameForCastLogError<UObject>((FString *)local_3c8,pUVar3);
      if ((pFVar24->Data).ArrayNum != 0) {
        pwVar26 = (wchar_t *)(pFVar24->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar26,pwVar28);
    }
    local_410 = *(float *)(pUVar3 + 10);
    fVar53 = local_410;
    if (param_4 <= local_410) {
      fVar53 = param_4;
      local_410 = param_4;
    }
  }
  fVar10 = __real_3f800000;
  fVar11 = __real_38d1b717;
  if (param_3) {
    if (((this->bUseCameraLagSubstepping == 0) ||
        (fVar53 < this->CameraLagMaxTimeStep || fVar53 == this->CameraLagMaxTimeStep)) ||
       (this->CameraRotationLagSpeed <= 0.0)) {
      fVar55 = this->CameraRotationLagSpeed;
      pTVar15 = UE::Math::TRotator<double>::Quaternion(&local_3f0,&local_388);
      local_248.X = pTVar15->X;
      local_248.Y = pTVar15->Y;
      local_248.Z = pTVar15->Z;
      local_248.W = pTVar15->W;
      pTVar15 = UE::Math::TRotator<double>::Quaternion(&this->PreviousDesiredRot,&local_388);
      local_3a8.X = pTVar15->X;
      local_3a8.Y = pTVar15->Y;
      local_3a8.Z = pTVar15->Z;
      local_3a8.W = pTVar15->W;
      pTVar15 = FMath::QInterpTo<double>(&local_368,&local_3a8,&local_248,fVar53,fVar55);
      pTVar17 = UE::Math::TRotator<double>::TRotator<double>((TRotator<double> *)local_448,pTVar15);
      local_3f0.Pitch = pTVar17->Pitch;
      local_3f0.Yaw = pTVar17->Yaw;
      local_3f0.Roll = pTVar17->Roll;
    }
    else {
      pTVar17 = &this->PreviousDesiredRot;
      dVar50 = local_3f0.Pitch - pTVar17->Pitch;
      dVar33 = local_3f0.Yaw - (this->PreviousDesiredRot).Yaw;
      dVar45 = local_3f0.Roll - (this->PreviousDesiredRot).Roll;
      auVar34._8_4_ = SUB84(dVar33,0);
      auVar34._0_8_ = dVar50;
      auVar34._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
      auVar34 = divpd(auVar34,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
      auVar42._8_8_ = 0;
      auVar42._0_8_ = dVar45;
      auVar34 = roundpd(auVar42,auVar34,3);
      dVar41 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
      auVar43._0_8_ = auVar34._0_8_ * dVar41;
      dVar46 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
      auVar43._8_8_ = auVar34._8_8_ * dVar46;
      auVar35._8_8_ = 0;
      auVar35._0_8_ = dVar45;
      auVar34 = divpd(auVar35,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
      dVar50 = dVar50 - auVar43._0_8_;
      dVar33 = dVar33 - auVar43._8_8_;
      auVar34 = roundpd(auVar43,auVar34,3);
      dVar6 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
      auVar36._8_4_ = SUB84(dVar33,0);
      auVar36._0_8_ = dVar50;
      auVar36._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
      dVar45 = dVar45 - auVar34._0_8_ * dVar6;
      dVar52 = 0.0 - auVar34._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
      dVar40 = auVar36._8_8_ + dVar46;
      uVar29 = -(ulonglong)(0.0 <= dVar50);
      uVar31 = -(ulonglong)(0.0 <= dVar33);
      auVar44._0_8_ = uVar29 & (ulonglong)dVar50;
      auVar44._8_4_ = (undefined4)(uVar31 & (ulonglong)dVar33);
      auVar44._12_4_ = (undefined4)((uVar31 & (ulonglong)dVar33) >> 0x20);
      auVar48._0_4_ = ~(uint)uVar29 & SUB84(dVar50 + dVar41,0);
      auVar48._4_4_ = ~(uint)(uVar29 >> 0x20) & (uint)((ulonglong)(dVar50 + dVar41) >> 0x20);
      auVar48._8_4_ = ~(uint)uVar31 & SUB84(dVar40,0);
      auVar48._12_4_ = ~(uint)(uVar31 >> 0x20) & (uint)((ulonglong)dVar40 >> 0x20);
      auVar37._8_4_ = SUB84(dVar52,0);
      auVar37._0_8_ = dVar45;
      auVar37._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
      auVar48 = auVar48 | auVar44;
      dVar33 = auVar37._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
      uVar29 = -(ulonglong)(0.0 <= dVar45);
      uVar31 = -(ulonglong)(0.0 <= dVar52);
      auVar51._0_4_ = ~(uint)uVar29 & SUB84(dVar45 + dVar6,0);
      auVar51._4_4_ = ~(uint)(uVar29 >> 0x20) & (uint)((ulonglong)(dVar45 + dVar6) >> 0x20);
      auVar51._8_4_ = ~(uint)uVar31 & SUB84(dVar33,0);
      auVar51._12_4_ = ~(uint)(uVar31 >> 0x20) & (uint)((ulonglong)dVar33 >> 0x20);
      auVar47._0_8_ = uVar29 & (ulonglong)dVar45;
      auVar47._8_4_ = (undefined4)(uVar31 & (ulonglong)dVar52);
      auVar47._12_4_ = (undefined4)((uVar31 & (ulonglong)dVar52) >> 0x20);
      auVar51 = auVar51 | auVar47;
      uVar31 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar48._0_8_);
      uVar32 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar48._8_8_);
      uVar30 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar51._0_8_);
      auVar57._0_8_ = uVar31 & (ulonglong)(auVar48._0_8_ - dVar41);
      uVar29 = uVar32 & (ulonglong)(auVar48._8_8_ - dVar46);
      auVar57._8_4_ = (undefined4)uVar29;
      auVar57._12_4_ = (undefined4)(uVar29 >> 0x20);
      auVar38._0_4_ = ~(uint)uVar31 & auVar48._0_4_;
      auVar38._4_4_ = ~(uint)(uVar31 >> 0x20) & auVar48._4_4_;
      auVar38._8_4_ = ~(uint)uVar32 & auVar48._8_4_;
      auVar38._12_4_ = ~(uint)(uVar32 >> 0x20) & auVar48._12_4_;
      dVar41 = (double)(__real_3f800000 / fVar53);
      local_448._0_8_ = pTVar17->Pitch;
      local_448._8_8_ = pTVar17->Yaw;
      local_448._16_8_ = (this->PreviousDesiredRot).Roll;
      for (fVar55 = fVar53; fVar11 < fVar55; fVar55 = fVar55 - fVar54) {
        fVar1 = this->CameraRotationLagSpeed;
        fVar54 = fVar55;
        if (this->CameraLagMaxTimeStep <= fVar55) {
          fVar54 = this->CameraLagMaxTimeStep;
        }
        dVar46 = (double)fVar54;
        local_448._16_8_ =
             (double)local_448._16_8_ +
             dVar46 * (double)(uVar30 & (ulonglong)(auVar51._0_8_ - dVar6) |
                              CONCAT44(~(uint)(uVar30 >> 0x20) & auVar51._4_4_,
                                       ~(uint)uVar30 & auVar51._0_4_)) * dVar41;
        local_448._8_8_ = (double)local_448._8_8_ + dVar46 * SUB168(auVar57 | auVar38,8) * dVar41;
        local_448._0_8_ = (double)local_448._0_8_ + dVar46 * SUB168(auVar57 | auVar38,0) * dVar41;
        pTVar15 = UE::Math::TRotator<double>::Quaternion((TRotator<double> *)local_448,&local_368);
        local_3a8.X = pTVar15->X;
        local_3a8.Y = pTVar15->Y;
        local_3a8.Z = pTVar15->Z;
        local_3a8.W = pTVar15->W;
        pTVar15 = UE::Math::TRotator<double>::Quaternion(pTVar17,&local_368);
        local_248.X = pTVar15->X;
        local_248.Y = pTVar15->Y;
        local_248.Z = pTVar15->Z;
        local_248.W = pTVar15->W;
        pTVar15 = FMath::QInterpTo<double>(&local_388,&local_248,&local_3a8,fVar54,fVar1);
        pTVar16 = UE::Math::TRotator<double>::TRotator<double>
                            ((TRotator<double> *)local_3c8,pTVar15);
        local_3f0.Pitch = pTVar16->Pitch;
        local_3f0.Yaw = pTVar16->Yaw;
        local_3f0.Roll = pTVar16->Roll;
        pTVar17->Pitch = local_3f0.Pitch;
        (this->PreviousDesiredRot).Yaw = local_3f0.Yaw;
        (this->PreviousDesiredRot).Roll = local_3f0.Roll;
      }
    }
  }
  (this->PreviousDesiredRot).Pitch = local_3f0.Pitch;
  (this->PreviousDesiredRot).Yaw = local_3f0.Yaw;
  (this->PreviousDesiredRot).Roll = local_3f0.Roll;
  local_448._16_8_ = this->_padding_;
  local_428._16_8_ = (double)local_448._16_8_ + (this->TargetOffset).field0_0x0._s_0.Z;
  local_408._s_0.X = (double)this->_padding_ + (this->TargetOffset).field0_0x0._s_0.X;
  local_408._s_0.Y = (double)this->_padding_ + (this->TargetOffset).field0_0x0._s_0.Y;
  local_428._8_4_ = SUB84(local_408._s_0.Y,0);
  local_428._0_8_ = local_408._s_0.X;
  local_428._12_4_ = (int)((ulonglong)local_408._s_0.Y >> 0x20);
  uVar56 = local_408._s_0.X;
  uVar58 = local_408._s_0.Y;
  local_408._s_0.Z = (double)local_428._16_8_;
  if (!param_2) goto LAB_147c0a7f9;
  uVar27 = *(uint *)&this->field_0x290;
  if (((-1 < (char)(ZPULL(uVar27,7,1) << 7)) ||
      (fVar53 < this->CameraLagMaxTimeStep || fVar53 == this->CameraLagMaxTimeStep)) ||
     (this->CameraLagSpeed <= 0.0)) {
    pTVar19 = FMath::VInterpTo((TVector<double> *)local_448,&this->PreviousDesiredLoc,
                               (TVector<double> *)local_428,fVar53,this->CameraLagSpeed);
    local_428._0_16_ = *(undefined1 (*) [16])&pTVar19->field0_0x0;
    local_428._16_8_ = (pTVar19->field0_0x0)._s_0.Z;
    dVar41 = extraout_XMM0_Qb_00;
LAB_147c0a538:
    uVar27 = *(uint *)&this->field_0x290;
    uVar56 = local_408._s_0.X;
    uVar58 = local_408._s_0.Y;
  }
  else {
    pTVar19 = &this->PreviousDesiredLoc;
    dVar33 = (double)(fVar10 / fVar53);
    dVar46 = (double)local_428._16_8_ - (this->PreviousDesiredLoc).field0_0x0._s_0.Z;
    dVar6 = local_408._s_0.Y - (this->PreviousDesiredLoc).field0_0x0._s_0.Y;
    dVar40 = (local_408._s_0.X - (pTVar19->field0_0x0)._s_0.X) * dVar33;
    dVar41 = (this->PreviousDesiredLoc).field0_0x0._s_0.Y;
    local_448._0_16_ = *(undefined1 (*) [16])&pTVar19->field0_0x0;
    local_448._16_8_ = (this->PreviousDesiredLoc).field0_0x0._s_0.Z;
    local_3d8 = dVar40;
    if (fVar11 < fVar53) {
      do {
        fVar10 = this->CameraLagMaxTimeStep;
        if (fVar53 <= this->CameraLagMaxTimeStep) {
          fVar10 = fVar53;
        }
        dVar41 = (double)fVar10;
        fVar53 = fVar53 - fVar10;
        local_448._16_8_ = (double)local_448._16_8_ + dVar41 * dVar46 * dVar33;
        local_448._8_8_ = (double)local_448._8_8_ + dVar41 * dVar6 * dVar33;
        local_448._0_8_ = (double)local_448._0_8_ + dVar41 * dVar40;
        pTVar18 = FMath::VInterpTo((TVector<double> *)local_3c8,pTVar19,(TVector<double> *)local_448
                                   ,fVar10,this->CameraLagSpeed);
        local_428._0_16_ = *(undefined1 (*) [16])&pTVar18->field0_0x0;
        local_428._16_8_ = (pTVar18->field0_0x0)._s_0.Z;
        *(undefined1 (*) [16])&pTVar19->field0_0x0 = local_428._0_16_;
        (this->PreviousDesiredLoc).field0_0x0._s_0.Z = (double)local_428._16_8_;
        dVar41 = extraout_XMM0_Qb;
      } while (fVar11 < fVar53);
      goto LAB_147c0a538;
    }
  }
  uVar13 = local_408._s_0.Z;
  fVar53 = this->CameraLagMaxDistance;
  bVar9 = false;
  local_408._s_0.X = (double)uVar56;
  local_408._s_0.Y = (double)uVar58;
  if (0.0 < fVar53) {
    auVar7._4_8_ = dVar41;
    auVar7._0_4_ = local_428._4_4_;
    auVar39._0_8_ = auVar7._0_8_ << 0x20;
    auVar39._8_4_ = local_428._8_4_;
    auVar39._12_4_ = local_428._12_4_;
    local_448._16_8_ = (double)local_428._16_8_ - local_408._s_0.Z;
    local_448._8_8_ = auVar39._8_8_ - (double)uVar58;
    local_448._0_8_ = local_428._0_8_ - (double)uVar56;
    if ((double)(fVar53 * fVar53) <
        (double)local_448._0_8_ * (double)local_448._0_8_ +
        (double)local_448._8_8_ * (double)local_448._8_8_ +
        (double)local_448._16_8_ * (double)local_448._16_8_) {
      pTVar19 = UE::Math::TVector<double>::GetClampedToMaxSize
                          ((TVector<double> *)local_448,(TVector<double> *)local_3c8,(double)fVar53)
      ;
      bVar9 = true;
      local_448._16_8_ = (double)uVar13 + (pTVar19->field0_0x0)._s_0.Z;
      local_428._8_8_ = (double)uVar58 + (pTVar19->field0_0x0)._s_0.Y;
      local_428._0_8_ = (double)uVar56 + (pTVar19->field0_0x0)._s_0.X;
      local_428._16_8_ = local_448._16_8_;
    }
  }
  if ((uVar27 >> 8 & 1) != 0) {
    pUVar20 = (UWorld *)this->_padding_;
    if (pUVar20 == (UWorld *)0x0) {
      pUVar20 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    fVar11 = __real_bf800000;
    fVar53 = __real_40a00000;
    pFVar25 = &FColor::Green;
    DrawDebugSphere(pUVar20,(TVector<double> *)&local_408._s_0,__real_40a00000,8,&FColor::Green,
                    false,__real_bf800000,'\0',0.0);
    pUVar20 = (UWorld *)this->_padding_;
    if (pUVar20 == (UWorld *)0x0) {
      pUVar20 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    DrawDebugSphere(pUVar20,(TVector<double> *)local_428,fVar53,8,&FColor::Yellow,false,fVar11,'\0',
                    0.0);
    if (bVar9) {
      pFVar25 = &FColor::Red;
    }
    pUVar20 = (UWorld *)this->_padding_;
    dVar41 = (local_408._s_0.Z - (double)local_428._16_8_) * __real_3fe0000000000000;
    dVar46 = (local_408._s_0.Y - (double)local_428._8_8_) * __real_3fe0000000000000;
    dVar6 = (local_408._s_0.X - (double)local_428._0_8_) * __real_3fe0000000000000;
    local_448._16_8_ = (double)local_428._16_8_ + dVar41;
    local_448._8_8_ = (double)local_428._8_8_ + dVar46;
    local_448._0_8_ = (double)local_428._0_8_ + dVar6;
    if (pUVar20 == (UWorld *)0x0) {
      pUVar20 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    fVar53 = __real_40f00000;
    DrawDebugDirectionalArrow
              (pUVar20,(TVector<double> *)local_428,(TVector<double> *)local_448,__real_40f00000,
               pFVar25,false,fVar11,'\0',0.0);
    pUVar20 = (UWorld *)this->_padding_;
    local_448._8_8_ = (double)local_428._8_8_ + dVar46;
    local_448._0_8_ = (double)local_428._0_8_ + dVar6;
    local_448._16_8_ = (double)local_428._16_8_ + dVar41;
    if (pUVar20 == (UWorld *)0x0) {
      pUVar20 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    DrawDebugDirectionalArrow
              (pUVar20,(TVector<double> *)local_448,(TVector<double> *)&local_408._s_0,fVar53,
               pFVar25,false,fVar11,'\0',0.0);
    uVar56 = local_408._s_0.X;
    uVar58 = local_408._s_0.Y;
  }
LAB_147c0a7f9:
  (this->PreviousArmOrigin).field0_0x0._s_0.X = (double)uVar56;
  (this->PreviousArmOrigin).field0_0x0._s_0.Y = (double)uVar58;
  *(undefined1 (*) [16])&(this->PreviousDesiredLoc).field0_0x0 = local_428._0_16_;
  (this->PreviousArmOrigin).field0_0x0._s_0.Z = local_408._s_0.Z;
  (this->PreviousDesiredLoc).field0_0x0._s_0.Z = (double)local_428._16_8_;
  auVar34 = local_428._0_16_;
  pTVar19 = UE::Math::TRotator<double>::Vector(&local_3f0,(TVector<double> *)&local_3a8);
  local_3d8 = (double)this->TargetArmLength;
  local_3d0 = (FName)((double)local_428._8_8_ - local_3d8 * (pTVar19->field0_0x0)._s_0.Y);
  local_3c8._0_8_ = (double)local_428._16_8_ - local_3d8 * (pTVar19->field0_0x0)._s_0.Z;
  dVar40 = (double)GlobalVectorConstants::DEG_TO_RAD.m128_f32[0];
  dVar41 = (double)GlobalVectorConstants::DEG_TO_RAD.m128_f32[1];
  __vdecl_sincos2();
  local_448._0_16_ = extraout_XMM0;
  local_248.X = dVar40;
  local_248.Y = dVar41;
  __vdecl_sincos2();
  pvVar12 = ThreadLocalStoragePointer;
  dVar45 = extraout_XMM0_Qa * extraout_XMM0._0_8_;
  auVar8._4_8_ = auVar34._8_8_;
  auVar8._0_4_ = extraout_XMM0._4_4_;
  auVar49._0_8_ = auVar8._0_8_ << 0x20;
  auVar49._8_4_ = extraout_XMM0._8_4_;
  auVar49._12_4_ = extraout_XMM0._12_4_;
  dVar52 = auVar49._8_8_;
  dVar50 = dVar40 * extraout_XMM0._0_8_;
  dVar41 = (this->SocketOffset).field0_0x0._s_0.Z;
  dVar6 = (this->SocketOffset).field0_0x0._s_0.X;
  dVar33 = (this->SocketOffset).field0_0x0._s_0.Y;
  dVar46 = extraout_XMM0_Qa * dVar52 + local_248.Y * dVar50;
  local_428._16_8_ =
       (double)CONCAT44((uint)((ulonglong)(local_248.X * extraout_XMM0_Qa) >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        SUB84(local_248.X * extraout_XMM0_Qa,0) ^
                        (uint)__xmm_80000000000000008000000000000000) * dVar33 +
       (double)local_448._0_8_ * dVar6 + dVar40 * local_248.X * dVar41 +
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z * 0.0 + (double)local_3c8._0_8_;
  dVar46 = ((double)local_428._0_8_ - local_3d8 * (pTVar19->field0_0x0)._s_0.X) +
           (local_248.Y * dVar45 - dVar40 * dVar52) * dVar33 + local_248.Y * local_248.X * dVar6 +
           (double)CONCAT44((uint)((ulonglong)dVar46 >> 0x20) ^
                            __xmm_80000000000000008000000000000000._4_4_,
                            SUB84(dVar46,0) ^ (uint)__xmm_80000000000000008000000000000000) * dVar41
           + UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X * 0.0;
  dVar41 = (dVar40 * local_248.Y + dVar52 * dVar45) * dVar33 + local_248.X * dVar52 * dVar6 +
           (local_248.Y * extraout_XMM0_Qa - dVar52 * dVar50) * dVar41 +
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y * 0.0 + (double)local_3d0;
  local_428._8_8_ = dVar41;
  local_428._0_8_ = dVar46;
  if ((param_1) && (this->TargetArmLength != __real_00000000)) {
    uVar29 = (ulonglong)_tls_index;
    pAVar4 = (AActor *)this->_padding_;
    this->bIsCameraFixed = true;
    lVar5 = *(longlong *)((longlong)pvVar12 + uVar29 * 8);
    if ((*(int *)(lVar5 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_SpringArm =
           (FThreadSafeStaticStat<_public:___cdecl__protected:_virtual_void___cdecl_USpringArmComponent::UpdateDesiredArmLocation(bool,bool,bool,float)_::_37_::<lambda_2>::operator()(void)const_::_2_::FStat_SpringArm>
            )0x0;
      pFVar21 = ::FName::FName(&local_3d0,"SpringArm");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_SpringArm,*pFVar21,L"SpringArm",
                 "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,ST_int64,
                 true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    FVar22 = StatPtr_SpringArm;
    if (StatPtr_SpringArm ==
        (FThreadSafeStaticStat<_public:___cdecl__protected:_virtual_void___cdecl_USpringArmComponent::UpdateDesiredArmLocation(bool,bool,bool,float)_::_37_::<lambda_2>::operator()(void)const_::_2_::FStat_SpringArm>
         )0x0) {
      pFVar21 = ::FName::FName(&local_3d0,"SpringArm");
      FVar22 = (FThreadSafeStaticStat<_public:___cdecl__protected:_virtual_void___cdecl_USpringArmComponent::UpdateDesiredArmLocation(bool,bool,bool,float)_::_37_::<lambda_2>::operator()(void)const_::_2_::FStat_SpringArm>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_SpringArm,*pFVar21,L"SpringArm",
                            "STATGROUP_CollisionTags","STATCAT_Advanced",L"CollisionTags",true,true,
                            ST_int64,true,false,MCR_Invalid);
    }
    local_3c8._0_8_ = FVar22;
    if ((*(int *)(lVar5 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&::StaticName,"SpringArm");
      _Init_thread_footer(&::_TSS0);
    }
    FCollisionQueryParams::FCollisionQueryParams
              (&local_168,::StaticName,(TStatId *)local_3c8,false,pAVar4);
    memset(&local_348,0,0x100);
    pUVar20 = (UWorld *)this->_padding_;
    local_3a8.Z = 0.0;
    local_3a8.W = 2.12199579047121e-314;
    local_348.Time = 1.0;
    local_348.MyItem = -1;
    local_348.HitObjectHandle.ReferenceObject.WeakPtr.ObjectIndex = 0;
    local_348.HitObjectHandle.ReferenceObject.WeakPtr.ObjectSerialNumber = 0;
    local_348.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectIndex = 0;
    local_348.HitObjectHandle.ManagerInterface.ObjectInstance.WeakPtr.ObjectSerialNumber = 0;
    local_348.HitObjectHandle.ManagerInterface.InterfaceInstance =
         (IActorInstanceManagerInterface *)0x0;
    local_348.HitObjectHandle.InstanceIndex = -1;
    local_348.HitObjectHandle.ResolutionStatus = Invalid;
    local_348.HitObjectHandle._29_3_ = 0;
    if (pUVar20 == (UWorld *)0x0) {
      pUVar20 = UActorComponent::GetWorld_Uncached((UActorComponent *)this);
    }
    local_3c8._4_4_ = this->ProbeSize;
    local_3c8._0_4_ = 2;
    UWorld::SweepSingleByChannel
              (pUVar20,&local_348,(TVector<double> *)&local_408._s_0,(TVector<double> *)local_428,
               &UE::Math::TQuat<double>::Identity,(uint)(this->ProbeChannel).Value,
               (FCollisionShape *)local_3c8,&local_168,
               &FCollisionResponseParams::DefaultResponseParam);
    lVar5 = this->_padding_;
    (this->UnfixedCameraPosition).field0_0x0._s_0.X = (double)local_428._0_8_;
    (this->UnfixedCameraPosition).field0_0x0._s_0.Y = (double)local_428._8_8_;
    (this->UnfixedCameraPosition).field0_0x0._s_0.Z = (double)local_428._16_8_;
    pdVar23 = (double *)(**(code **)(lVar5 + 0x650))(this,&local_3a8,local_428,&local_348.Location);
    dVar46 = *pdVar23;
    dVar41 = pdVar23[1];
    dVar6 = pdVar23[2];
    if (((dVar46 == (double)local_428._0_8_) && (dVar41 == (double)local_428._8_8_)) &&
       (dVar6 == (double)local_428._16_8_)) {
      this->bIsCameraFixed = false;
    }
    if (local_168.IgnoreSourceObjects.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_168.IgnoreSourceObjects.AllocatorInstance.SecondaryData);
    }
    if (local_168.IgnoreComponents.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_168.IgnoreComponents.AllocatorInstance.SecondaryData);
    }
  }
  else {
    this->bIsCameraFixed = false;
    (this->UnfixedCameraPosition).field0_0x0._s_0.X = dVar46;
    (this->UnfixedCameraPosition).field0_0x0._s_0.Y = dVar41;
    (this->UnfixedCameraPosition).field0_0x0._s_0.Z = (double)local_428._16_8_;
    dVar6 = (double)local_428._16_8_;
  }
  pTVar15 = UE::Math::TRotator<double>::Quaternion(&local_3f0,&local_388);
  local_228.Rotation.XY.m128d_f64[0] = pTVar15->X;
  local_228.Rotation.XY.m128d_f64[1] = pTVar15->Y;
  local_228.Rotation.ZW.m128d_f64[0] = pTVar15->Z;
  local_228.Rotation.ZW.m128d_f64[1] = pTVar15->W;
  local_228.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_228.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_228.Translation.ZW.m128d_f64[1] = 0.0;
  local_228.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_228.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_228.Translation.XY.m128d_f64[0] = dVar46;
  local_228.Translation.XY.m128d_f64[1] = dVar41;
  local_228.Translation.ZW.m128d_f64[0] = dVar6;
  UE::Math::TTransform<double>::GetRelativeTransform
            (&local_228,&local_1c8,(TTransform<double> *)&this->_padding_);
  (this->RelativeSocketLocation).field0_0x0._s_0.X = local_1c8.Translation.XY.m128d_f64[0];
  (this->RelativeSocketLocation).field0_0x0._s_0.Y = local_1c8.Translation.XY.m128d_f64[1];
  (this->RelativeSocketRotation).X = local_1c8.Rotation.XY.m128d_f64[0];
  (this->RelativeSocketRotation).Y = local_1c8.Rotation.XY.m128d_f64[1];
  (this->RelativeSocketLocation).field0_0x0._s_0.Z = local_1c8.Translation.ZW.m128d_f64[0];
  (this->RelativeSocketRotation).Z = local_1c8.Rotation.ZW.m128d_f64[0];
  (this->RelativeSocketRotation).W = local_1c8.Rotation.ZW.m128d_f64[1];
  USceneComponent::UpdateChildTransforms((USceneComponent *)this,None,None);
  return;
}

// execGetTargetRotation @ 147c14680

void __cdecl
USpringArmComponent::execGetTargetRotation(UObject *param_1,FFrame *param_2,void *param_3)

{
  double dVar1;
  TRotator<double> *pTVar2;
  TRotator<double> local_28;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pTVar2 = GetTargetRotation((USpringArmComponent *)param_1,&local_28);
  dVar1 = pTVar2->Yaw;
  *(double *)param_3 = pTVar2->Pitch;
  *(double *)((longlong)param_3 + 8) = dVar1;
  *(double *)((longlong)param_3 + 0x10) = pTVar2->Roll;
  return;
}

// execGetUnfixedCameraPosition @ 147c14760

void __cdecl
USpringArmComponent::execGetUnfixedCameraPosition(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = *(undefined8 *)&param_1[0x11].field_0x10;
  uVar1 = *(undefined8 *)&param_1[0x11].field_0x18;
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[0x11].field_0x8;
  *(undefined8 *)((longlong)param_3 + 8) = uVar2;
  *(undefined8 *)((longlong)param_3 + 0x10) = uVar1;
  return;
}

// execIsCollisionFixApplied @ 147c147e0

void __cdecl
USpringArmComponent::execIsCollisionFixApplied(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined1 *)param_3 = *(undefined1 *)(param_1 + 0x11);
  return;
}

