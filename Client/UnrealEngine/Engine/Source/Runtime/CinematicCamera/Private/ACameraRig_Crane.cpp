// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CinematicCamera
// Functions: 10

// StaticClass @ 146ab1d20

UClass * __cdecl ACameraRig_Crane::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ACameraRig_Crane.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CinematicCamera",L"CameraRig_Crane",
               &Z_Registration_Info_UClass_ACameraRig_Crane.InnerSingleton,
               StaticRegisterNativesACameraRig_Crane,0x2f0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ACameraRig_Crane>,
               InternalVTableHelperCtorCaller<ACameraRig_Crane>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ACameraRig_Crane.InnerSingleton;
}

// ACameraRig_Crane @ 146ab47e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ACameraRig_Crane * __thiscall
ACameraRig_Crane::ACameraRig_Crane(ACameraRig_Crane *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  this->_padding_ = (longlong)&___7ACameraRig_Crane__6B_;
  (this->TransformComponent).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  (this->CraneYawControl).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  (this->CranePitchControl).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  (this->CraneCameraMount).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  return this;
}

// ACameraRig_Crane @ 146ab4830

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ACameraRig_Crane * __thiscall
ACameraRig_Crane::ACameraRig_Crane(ACameraRig_Crane *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  USceneComponent *pUVar5;
  FName local_res8;
  TVector<double>_u_0 local_38 [2];
  
  AActor::AActor((AActor *)this,param_1);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 | 2;
  this->_padding_ = (longlong)&___7ACameraRig_Crane__6B_;
  (this->TransformComponent).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  (this->CraneYawControl).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  (this->CranePitchControl).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  (this->CraneCameraMount).field0_0x0.DebugPtr = (USceneComponent *)0x0;
  this->CranePitch = 0.0;
  this->CraneYaw = 0.0;
  this->CraneArmLength = 500.0;
  this->bLockMountPitch = false;
  this->bLockMountYaw = false;
  pFVar3 = ::FName::FName(&local_res8,L"TransformComponent");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar5 = (USceneComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->TransformComponent).field0_0x0.DebugPtr = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  this->_padding_ = (longlong)(this->TransformComponent).field0_0x0;
  pFVar3 = ::FName::FName(&local_res8,L"CraneYawControl");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar5 = (USceneComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->CraneYawControl).field0_0x0.DebugPtr = pUVar5;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment(pUVar5,(this->TransformComponent).field0_0x0.DebugPtr,(FName)0x0)
  ;
  local_38[0]._s_0.Z = __real_4051800000000000;
  local_38[0]._s_0.X = 0.0;
  local_38[0]._s_0.Y = 0.0;
  USceneComponent::SetRelativeLocation
            ((this->CraneYawControl).field0_0x0.DebugPtr,(TVector<double> *)&local_38[0]._s_0,false,
             (FHitResult *)0x0,None);
  local_38[0]._8_8_ = (undefined8)this->CraneYaw;
  local_38[0]._s_0.X = 0.0;
  local_38[0]._s_0.Z = 0.0;
  USceneComponent::SetRelativeRotation
            ((this->CraneYawControl).field0_0x0.DebugPtr,(TRotator<double> *)&local_38[0]._s_0,false
             ,(FHitResult *)0x0,None);
  pFVar3 = ::FName::FName(&local_res8,L"CranePitchControl");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar5 = (USceneComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->CranePitchControl).field0_0x0.DebugPtr = pUVar5;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment(pUVar5,(this->CraneYawControl).field0_0x0.DebugPtr,(FName)0x0);
  local_38[0]._0_8_ = (undefined8)this->CranePitch;
  local_38[0]._s_0.Y = 0.0;
  local_38[0]._s_0.Z = 0.0;
  USceneComponent::SetRelativeRotation
            ((this->CranePitchControl).field0_0x0.DebugPtr,(TRotator<double> *)&local_38[0]._s_0,
             false,(FHitResult *)0x0,None);
  pFVar3 = ::FName::FName(&local_res8,L"CraneCameraMount");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar5 = (USceneComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (USceneComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar5);
  }
  (this->CraneCameraMount).field0_0x0.DebugPtr = pUVar5;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  USceneComponent::SetupAttachment(pUVar5,(this->CranePitchControl).field0_0x0.DebugPtr,(FName)0x0);
  local_38[0]._0_8_ = (undefined8)this->CraneArmLength;
  local_38[0]._s_0.Y = 0.0;
  local_38[0]._s_0.Z = __real_c02e000000000000;
  USceneComponent::SetRelativeLocation
            ((this->CraneCameraMount).field0_0x0.DebugPtr,(TVector<double> *)&local_38[0]._s_0,false
             ,(FHitResult *)0x0,None);
  return this;
}

// ~ACameraRig_Crane @ 146ab53c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ACameraRig_Crane::~ACameraRig_Crane(ACameraRig_Crane *this)

{
  this->_padding_ = (longlong)&___7ACameraRig_Crane__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// GetDefaultAttachComponent @ 146ab6b90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

USceneComponent * __thiscall ACameraRig_Crane::GetDefaultAttachComponent(ACameraRig_Crane *this)

{
  return (this->CraneCameraMount).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 146ab7ae0

UClass * __cdecl ACameraRig_Crane::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_ACameraRig_Crane.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/CinematicCamera",L"CameraRig_Crane",
               &Z_Registration_Info_UClass_ACameraRig_Crane.InnerSingleton,
               StaticRegisterNativesACameraRig_Crane,0x2f0,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<ACameraRig_Crane>,
               InternalVTableHelperCtorCaller<ACameraRig_Crane>,local_res8,AActor::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_ACameraRig_Crane.InnerSingleton;
}

// ShouldTickIfViewportsOnly @ 146ab9350

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall ACameraRig_Crane::ShouldTickIfViewportsOnly(ACameraRig_Crane *this)

{
  return true;
}

// StaticRegisterNativesACameraRig_Crane @ 146ab93a0

void __cdecl ACameraRig_Crane::StaticRegisterNativesACameraRig_Crane(void)

{
  return;
}

// Tick @ 146ab94b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ACameraRig_Crane::Tick(ACameraRig_Crane *this,float param_1)

{
  float fVar1;
  USceneComponent *pUVar2;
  USceneComponent *this_00;
  double dVar3;
  TQuat<double> *pTVar4;
  undefined1 auStack_178 [32];
  TQuat<double> local_148;
  TRotator<double> local_128;
  TQuat<double> local_108;
  double local_d8;
  TQuat<double> local_c8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_178;
  AActor::Tick((AActor *)this,param_1);
  local_148.Y = (double)this->CraneYaw;
  local_148.X = 0.0;
  local_148.Z = 0.0;
  USceneComponent::SetRelativeRotation
            ((this->CraneYawControl).field0_0x0.DebugPtr,(TRotator<double> *)&local_148,false,
             (FHitResult *)0x0,None);
  local_148.X = (double)this->CranePitch;
  local_148.Y = 0.0;
  local_148.Z = 0.0;
  USceneComponent::SetRelativeRotation
            ((this->CranePitchControl).field0_0x0.DebugPtr,(TRotator<double> *)&local_148,false,
             (FHitResult *)0x0,None);
  pUVar2 = (this->CraneCameraMount).field0_0x0.DebugPtr;
  fVar1 = this->CraneArmLength;
  this_00 = (pUVar2->AttachParent).field0_0x0.DebugPtr;
  local_d8 = (pUVar2->RelativeLocation).field0_0x0._s_0.Z;
  dVar3 = (pUVar2->RelativeLocation).field0_0x0._s_0.Y;
  if (this_00 == (USceneComponent *)0x0) {
    local_148.Z = 0.0;
    local_148.X = 0.0;
    local_148.Y = 0.0;
    pTVar4 = &local_148;
  }
  else {
    pTVar4 = (TQuat<double> *)
             USceneComponent::GetComponentRotation(this_00,(TRotator<double> *)&local_148);
  }
  pUVar2 = (this->CraneCameraMount).field0_0x0.DebugPtr;
  local_128.Pitch = pTVar4->X;
  local_128.Yaw = pTVar4->Y;
  if (this->bLockMountPitch == false) {
    local_128.Pitch = 0.0;
  }
  if (this->bLockMountYaw == false) {
    local_148.Z = *(double *)(this->_padding_ + 0x170);
    local_128.Yaw = *(double *)(this->_padding_ + 0x168);
  }
  local_128.Roll = 0.0;
  pTVar4 = UE::Math::TRotator<double>::Quaternion(&local_128,&local_c8);
  local_148.X = pTVar4->X;
  local_148.Y = pTVar4->Y;
  local_148.Z = pTVar4->Z;
  local_148.W = pTVar4->W;
  USceneComponent::GetRelativeRotationFromWorld(pUVar2,&local_108,&local_148);
  local_a8.Rotation.ZW.m128d_f64[0] = local_108.Z;
  local_a8.Rotation.ZW.m128d_f64[1] = local_108.W;
  local_a8.Rotation.XY.m128d_f64[0] = local_108.X;
  local_a8.Rotation.XY.m128d_f64[1] = local_108.Y;
  local_a8.Translation.ZW.m128d_f64[0] = local_d8;
  local_a8.Translation.ZW.m128d_f64[1] = 0.0;
  local_a8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_a8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_a8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_a8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_a8.Translation.XY.m128d_f64[0] = (double)fVar1;
  local_a8.Translation.XY.m128d_f64[1] = dVar3;
  USceneComponent::SetRelativeTransform
            ((this->CraneCameraMount).field0_0x0.DebugPtr,&local_a8,false,(FHitResult *)0x0,None);
  return;
}

// UpdateCraneComponents @ 146ab9f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall ACameraRig_Crane::UpdateCraneComponents(ACameraRig_Crane *this)

{
  float fVar1;
  USceneComponent *pUVar2;
  USceneComponent *this_00;
  double dVar3;
  TQuat<double> *pTVar4;
  undefined1 auStack_178 [32];
  TQuat<double> local_148;
  TRotator<double> local_128;
  TQuat<double> local_108;
  double local_d8;
  TQuat<double> local_c8;
  TTransform<double> local_a8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_178;
  local_148.Y = (double)this->CraneYaw;
  local_148.X = 0.0;
  local_148.Z = 0.0;
  USceneComponent::SetRelativeRotation
            ((this->CraneYawControl).field0_0x0.DebugPtr,(TRotator<double> *)&local_148,false,
             (FHitResult *)0x0,None);
  local_148.X = (double)this->CranePitch;
  local_148.Y = 0.0;
  local_148.Z = 0.0;
  USceneComponent::SetRelativeRotation
            ((this->CranePitchControl).field0_0x0.DebugPtr,(TRotator<double> *)&local_148,false,
             (FHitResult *)0x0,None);
  pUVar2 = (this->CraneCameraMount).field0_0x0.DebugPtr;
  fVar1 = this->CraneArmLength;
  this_00 = (pUVar2->AttachParent).field0_0x0.DebugPtr;
  local_d8 = (pUVar2->RelativeLocation).field0_0x0._s_0.Z;
  dVar3 = (pUVar2->RelativeLocation).field0_0x0._s_0.Y;
  if (this_00 == (USceneComponent *)0x0) {
    local_148.Z = 0.0;
    local_148.X = 0.0;
    local_148.Y = 0.0;
    pTVar4 = &local_148;
  }
  else {
    pTVar4 = (TQuat<double> *)
             USceneComponent::GetComponentRotation(this_00,(TRotator<double> *)&local_148);
  }
  pUVar2 = (this->CraneCameraMount).field0_0x0.DebugPtr;
  local_128.Pitch = pTVar4->X;
  local_128.Yaw = pTVar4->Y;
  if (this->bLockMountPitch == false) {
    local_128.Pitch = 0.0;
  }
  if (this->bLockMountYaw == false) {
    local_148.Z = *(double *)(this->_padding_ + 0x170);
    local_128.Yaw = *(double *)(this->_padding_ + 0x168);
  }
  local_128.Roll = 0.0;
  pTVar4 = UE::Math::TRotator<double>::Quaternion(&local_128,&local_c8);
  local_148.X = pTVar4->X;
  local_148.Y = pTVar4->Y;
  local_148.Z = pTVar4->Z;
  local_148.W = pTVar4->W;
  USceneComponent::GetRelativeRotationFromWorld(pUVar2,&local_108,&local_148);
  local_a8.Rotation.ZW.m128d_f64[0] = local_108.Z;
  local_a8.Rotation.ZW.m128d_f64[1] = local_108.W;
  local_a8.Rotation.XY.m128d_f64[0] = local_108.X;
  local_a8.Rotation.XY.m128d_f64[1] = local_108.Y;
  local_a8.Translation.ZW.m128d_f64[0] = local_d8;
  local_a8.Translation.ZW.m128d_f64[1] = 0.0;
  local_a8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_a8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_a8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_a8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_a8.Translation.XY.m128d_f64[0] = (double)fVar1;
  local_a8.Translation.XY.m128d_f64[1] = dVar3;
  USceneComponent::SetRelativeTransform
            ((this->CraneCameraMount).field0_0x0.DebugPtr,&local_a8,false,(FHitResult *)0x0,None);
  return;
}

