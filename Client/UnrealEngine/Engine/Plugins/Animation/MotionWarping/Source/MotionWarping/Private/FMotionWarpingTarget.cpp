// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MotionWarping
// Functions: 8

// StaticStruct @ 14cefdf00

UScriptStruct * __cdecl FMotionWarpingTarget::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMotionWarpingTarget.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_MotionWarping();
    Z_Registration_Info_UScriptStruct_FMotionWarpingTarget.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMotionWarpingTarget,(UObject *)pUVar1,
                         L"MotionWarpingTarget");
  }
  return Z_Registration_Info_UScriptStruct_FMotionWarpingTarget.OuterSingleton;
}

// FMotionWarpingTarget @ 14cf03970

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FMotionWarpingTarget * __thiscall
FMotionWarpingTarget::FMotionWarpingTarget
          (FMotionWarpingTarget *this,FName *param_1,USceneComponent *param_2,FName param_3,
          bool param_4,TVector<double> *param_5,TRotator<double> *param_6)

{
  FMotionWarpingTarget
            (this,param_1,param_2,param_3,param_4,TargetsForwardVector,(AActor *)0x0,param_5,param_6
            );
  return this;
}

// FMotionWarpingTarget @ 14cf039d0

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

FMotionWarpingTarget * __thiscall
FMotionWarpingTarget::FMotionWarpingTarget
          (FMotionWarpingTarget *this,FName *param_1,USceneComponent *param_2,FName param_3,
          bool param_4,EWarpTargetLocationOffsetDirection param_5,AActor *param_6,
          TVector<double> *param_7,TRotator<double> *param_8)

{
  code *pcVar1;
  double dVar2;
  undefined8 uVar3;
  bool bVar4;
  FMotionWarpingTarget *pFVar5;
  TTransform<double> *pTVar6;
  FName local_res20;
  undefined1 auStackY_178 [32];
  USceneComponent *local_148;
  AActor *local_140;
  TRotator<double> local_138;
  TQuat<double> local_118;
  TTransform<double> local_f8;
  TTransform<double> local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  (this->Component).WeakPtr = (FWeakObjectPtr)0x0;
  (this->BoneName).ComparisonIndex = 0;
  (this->BoneName).Number = 0;
  this->LocationOffsetDirection = TargetsForwardVector;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->LocationOffset).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->LocationOffset).field0_0x0._s_0.Y = (double)uVar3;
  (this->LocationOffset).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->RotationOffset).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->RotationOffset).Yaw = dVar2;
  (this->RotationOffset).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  (this->AvatarActor).WeakPtr = (FWeakObjectPtr)0x0;
  this->bCacheForwardOffset = false;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CachedForwardOffset).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CachedForwardOffset).field0_0x0._s_0.Y = (double)uVar3;
  (this->CachedForwardOffset).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CachedRightOffset).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CachedRightOffset).field0_0x0._s_0.Y = (double)uVar3;
  (this->CachedRightOffset).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CachedUpOffset).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->CachedUpOffset).field0_0x0._s_0.Y = (double)uVar3;
  (this->CachedUpOffset).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  this->bWarpingPaused = false;
  this->bRootMotionPaused = false;
  local_res20 = param_3;
  if (param_2 == (USceneComponent *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3105938379292803092>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\MotionWarping\\Source\\MotionWarping\\Private\\RootMotionModifier.cpp"
                       ,0x14,"InComp");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FMotionWarpingTarget *)(*pcVar1)();
      return pFVar5;
    }
  }
  else {
    this->Name = *param_1;
    local_148 = param_2;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    FWeakObjectPtr::operator=(&(this->Component).WeakPtr,(FObjectPtr)&local_148);
    this->BoneName = local_res20;
    this->bFollowComponent = param_4;
    local_140 = param_6;
    dVar2 = (param_7->field0_0x0)._s_0.Y;
    (this->LocationOffset).field0_0x0._s_0.X = (param_7->field0_0x0)._s_0.X;
    (this->LocationOffset).field0_0x0._s_0.Y = dVar2;
    (this->LocationOffset).field0_0x0._s_0.Z = (param_7->field0_0x0)._s_0.Z;
    dVar2 = param_8->Yaw;
    (this->RotationOffset).Pitch = param_8->Pitch;
    (this->RotationOffset).Yaw = dVar2;
    (this->RotationOffset).Roll = param_8->Roll;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_6 != (AActor *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_6);
    }
    FWeakObjectPtr::operator=(&(this->AvatarActor).WeakPtr,(FObjectPtr)&local_140);
    this->LocationOffsetDirection = param_5;
    local_f8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_f8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_f8.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_f8.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_f8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_f8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    if (this->BoneName == (FName)0x0) {
      local_f8.Rotation.XY.m128d_f64[0] = (param_2->ComponentToWorld).Rotation.XY.m128d_f64[0];
      local_f8.Rotation.XY.m128d_f64[1] = (param_2->ComponentToWorld).Rotation.XY.m128d_f64[1];
      local_f8.Rotation.ZW.m128d_f64[0] = (param_2->ComponentToWorld).Rotation.ZW.m128d_f64[0];
      local_f8.Rotation.ZW.m128d_f64[1] = (param_2->ComponentToWorld).Rotation.ZW.m128d_f64[1];
      local_f8.Translation.XY.m128d_f64[0] = (param_2->ComponentToWorld).Translation.XY.m128d_f64[0]
      ;
      local_f8.Translation.XY.m128d_f64[1] = (param_2->ComponentToWorld).Translation.XY.m128d_f64[1]
      ;
      local_f8.Translation.ZW.m128d_f64 = *&(param_2->ComponentToWorld).Translation.ZW.m128d_f64;
      local_f8.Scale3D.XY.m128d_f64 = *&(param_2->ComponentToWorld).Scale3D.XY.m128d_f64;
      local_f8.Scale3D.ZW.m128d_f64[0]._0_4_ =
           *(undefined4 *)(param_2->ComponentToWorld).Scale3D.ZW.m128d_f64;
      local_f8.Scale3D.ZW.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(param_2->ComponentToWorld).Scale3D.ZW.m128d_f64 + 4);
      local_f8.Scale3D.ZW.m128d_f64[1]._0_4_ =
           *(undefined4 *)((param_2->ComponentToWorld).Scale3D.ZW.m128d_f64 + 1);
      local_f8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(param_2->ComponentToWorld).Scale3D.ZW.m128d_f64 + 0xc);
    }
    else {
      pTVar6 = GetTargetTransformFromComponent(&local_98,param_2,&local_res20);
      local_f8.Rotation.XY.m128d_f64[0] = (pTVar6->Rotation).XY.m128d_f64[0];
      local_f8.Rotation.XY.m128d_f64[1] = (pTVar6->Rotation).XY.m128d_f64[1];
      local_f8.Rotation.ZW.m128d_f64[0] = (pTVar6->Rotation).ZW.m128d_f64[0];
      local_f8.Rotation.ZW.m128d_f64[1] = (pTVar6->Rotation).ZW.m128d_f64[1];
      local_f8.Translation.XY.m128d_f64[0] = (pTVar6->Translation).XY.m128d_f64[0];
      local_f8.Translation.XY.m128d_f64[1] = (pTVar6->Translation).XY.m128d_f64[1];
      local_f8.Translation.ZW.m128d_f64 = *&(pTVar6->Translation).ZW.m128d_f64;
      local_f8.Scale3D.XY.m128d_f64 = *&(pTVar6->Scale3D).XY.m128d_f64;
      local_f8.Scale3D.ZW.m128d_f64[0]._0_4_ = *(undefined4 *)(pTVar6->Scale3D).ZW.m128d_f64;
      local_f8.Scale3D.ZW.m128d_f64[0]._4_4_ =
           *(undefined4 *)((longlong)(pTVar6->Scale3D).ZW.m128d_f64 + 4);
      local_f8.Scale3D.ZW.m128d_f64[1]._0_4_ = *(undefined4 *)((pTVar6->Scale3D).ZW.m128d_f64 + 1);
      local_f8.Scale3D.ZW.m128d_f64[1]._4_4_ =
           *(undefined4 *)((longlong)(pTVar6->Scale3D).ZW.m128d_f64 + 0xc);
    }
    CacheOffset(this,&local_f8);
    RecalculateOffset(this,&local_f8);
    (this->Location).field0_0x0._s_0.X = local_f8.Translation.XY.m128d_f64[0];
    (this->Location).field0_0x0._s_0.Y = local_f8.Translation.XY.m128d_f64[1];
    (this->Location).field0_0x0._s_0.Z = local_f8.Translation.ZW.m128d_f64[0];
    local_118.X = local_f8.Rotation.XY.m128d_f64[0];
    local_118.Y = local_f8.Rotation.XY.m128d_f64[1];
    local_118.Z = local_f8.Rotation.ZW.m128d_f64[0];
    local_118.W = local_f8.Rotation.ZW.m128d_f64[1];
    UE::Math::TQuat<double>::Rotator(&local_118,&local_138);
    (this->Rotation).Pitch = local_138.Pitch;
    (this->Rotation).Yaw = local_138.Yaw;
    (this->Rotation).Roll = local_138.Roll;
  }
  return this;
}

// FMotionWarpingTarget @ 14cf03cf0

FMotionWarpingTarget * __thiscall
FMotionWarpingTarget::FMotionWarpingTarget(FMotionWarpingTarget *this)

{
  undefined8 uVar1;
  double dVar2;
  undefined8 local_res8;
  
  (this->Name).ComparisonIndex = 0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->Name).Number = 0;
  local_res8 = 0;
  (this->Location).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->Location).field0_0x0._s_0.Y = (double)uVar1;
  (this->Location).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->Rotation).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->Rotation).Yaw = dVar2;
  (this->Rotation).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  (this->Component).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->Component).WeakPtr,(FObjectPtr)&local_res8);
  (this->BoneName).ComparisonIndex = 0;
  (this->BoneName).Number = 0;
  this->bFollowComponent = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  this->LocationOffsetDirection = TargetsForwardVector;
  (this->LocationOffset).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->LocationOffset).field0_0x0._s_0.Y = (double)uVar1;
  (this->LocationOffset).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  dVar2 = UE::Math::TRotator<double>::ZeroRotator.Yaw;
  (this->RotationOffset).Pitch = UE::Math::TRotator<double>::ZeroRotator.Pitch;
  (this->RotationOffset).Yaw = dVar2;
  (this->RotationOffset).Roll = UE::Math::TRotator<double>::ZeroRotator.Roll;
  (this->AvatarActor).WeakPtr = (FWeakObjectPtr)0x0;
  this->bCacheForwardOffset = false;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CachedForwardOffset).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CachedForwardOffset).field0_0x0._s_0.Y = (double)uVar1;
  (this->CachedForwardOffset).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CachedRightOffset).field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->CachedRightOffset).field0_0x0._s_0.Y = (double)uVar1;
  (this->CachedRightOffset).field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->CachedUpOffset).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X
  ;
  (this->CachedUpOffset).field0_0x0._s_0.Y = (double)uVar1;
  (this->CachedUpOffset).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
  ;
  this->bWarpingPaused = false;
  this->bRootMotionPaused = false;
  return this;
}

// CacheOffset @ 14cf09560

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMotionWarpingTarget::CacheOffset(FMotionWarpingTarget *this,TTransform<double> *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  double dVar4;
  bool bVar5;
  UObject *pUVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  double dVar9;
  double dVar10;
  TVector<double>_u_0 local_78;
  TVector<double>_u_0 local_60 [3];
  
  dVar4 = __real_3e45798ee0000000;
  if (((this->LocationOffsetDirection != VectorFromTargetToOwner) ||
      ((this->LocationOffset).field0_0x0._s_0.X <= __real_3e45798ee0000000)) ||
     (((this->LocationOffset).field0_0x0._s_0.Y <= __real_3e45798ee0000000 &&
      ((this->LocationOffset).field0_0x0._s_0.Z <= __real_3e45798ee0000000)))) {
    this->bCacheForwardOffset = false;
    if (this->LocationOffsetDirection != VectorFromTargetToOwner) {
      return;
    }
  }
  else {
    this->bCacheForwardOffset = true;
  }
  bVar5 = FWeakObjectPtr::IsValid(&(this->AvatarActor).WeakPtr);
  if (bVar5) {
    pUVar6 = FWeakObjectPtr::Get(&(this->AvatarActor).WeakPtr);
    lVar3 = *(longlong *)(pUVar6 + 0xb);
    if (lVar3 == 0) {
      uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      dVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
      local_78._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    else {
      auVar2 = *(undefined1 (*) [16])(lVar3 + 0x210);
      uVar7 = auVar2._0_4_;
      uVar8 = auVar2._4_4_;
      dVar9 = auVar2._8_8_;
      local_78._s_0.Z = *(double *)(lVar3 + 0x220);
    }
    local_60[0]._16_8_ = (param_1->Translation).ZW.m128d_f64[0];
    local_78._s_0.X = (double)CONCAT44(uVar8,uVar7) - (param_1->Translation).XY.m128d_f64[0];
    local_78._s_0.Y = dVar9 - (param_1->Translation).XY.m128d_f64[1];
    local_78._s_0.Z = local_78._s_0.Z - (double)local_60[0]._16_8_;
    UE::Math::TVector<double>::GetSafeNormal
              ((TVector<double> *)&local_78._s_0,(TVector<double> *)&local_60[0]._s_0,dVar4,
               &UE::Math::TVector<double>::ZeroVector);
    dVar10 = (double)local_60[0]._16_8_ * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y -
             (double)local_60[0]._8_8_ * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
    dVar4 = (double)local_60[0]._0_8_ * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z -
            (double)local_60[0]._16_8_ * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
    dVar9 = (double)local_60[0]._8_8_ * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X -
            (double)local_60[0]._0_8_ * UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
    if (this->bCacheForwardOffset != false) {
      dVar1 = (this->LocationOffset).field0_0x0._s_0.X;
      (this->CachedForwardOffset).field0_0x0._s_0.X = dVar1 * (double)local_60[0]._0_8_;
      (this->CachedForwardOffset).field0_0x0._s_0.Y = dVar1 * (double)local_60[0]._8_8_;
      (this->CachedForwardOffset).field0_0x0._s_0.Z = dVar1 * (double)local_60[0]._16_8_;
    }
    dVar1 = (this->LocationOffset).field0_0x0._s_0.Y;
    (this->CachedRightOffset).field0_0x0._s_0.X = dVar1 * dVar10;
    (this->CachedRightOffset).field0_0x0._s_0.Y = dVar1 * dVar4;
    (this->CachedRightOffset).field0_0x0._s_0.Z = dVar1 * dVar9;
    dVar1 = (this->LocationOffset).field0_0x0._s_0.Z;
    (this->CachedUpOffset).field0_0x0._s_0.X =
         (dVar9 * (double)local_60[0]._8_8_ - dVar4 * (double)local_60[0]._16_8_) * dVar1;
    (this->CachedUpOffset).field0_0x0._s_0.Y =
         (dVar10 * (double)local_60[0]._16_8_ - dVar9 * (double)local_60[0]._0_8_) * dVar1;
    (this->CachedUpOffset).field0_0x0._s_0.Z =
         (dVar4 * (double)local_60[0]._0_8_ - dVar10 * (double)local_60[0]._8_8_) * dVar1;
  }
  else if (2 < (byte)LogMotionWarping._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMotionWarping);
  }
  return;
}

// GetTargetTransformFromComponent @ 14cf115d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TTransform<double> * __cdecl
FMotionWarpingTarget::GetTargetTransformFromComponent
          (TTransform<double> *__return_storage_ptr__,USceneComponent *param_1,FName *param_2)

{
  double dVar1;
  char cVar2;
  FName local_res10;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (param_1 == (USceneComponent *)0x0) {
    if (2 < (byte)LogMotionWarping._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMotionWarping);
    }
    *&(__return_storage_ptr__->Rotation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    *&(__return_storage_ptr__->Rotation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Translation).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    *&(__return_storage_ptr__->Translation).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    *&(__return_storage_ptr__->Scale3D).ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    return __return_storage_ptr__;
  }
  cVar2 = (**(code **)(param_1->_padding_ + 0x540))(param_1,*param_2);
  if (cVar2 == '\0') {
    if (2 < (byte)LogMotionWarping._0_1_) {
      ::FName::ToString(param_2,&local_28);
      if (param_1->_padding_ == 0) {
        ::FString::FString(&local_48,L"None");
      }
      else {
        local_res10 = *(FName *)(param_1->_padding_ + 0x18);
        ::FName::ToString(&local_res10,&local_48);
      }
      local_res10 = (FName)param_1->_padding_;
      ::FName::ToString(&local_res10,&local_38);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMotionWarping);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    dVar1 = (param_1->ComponentToWorld).Rotation.XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] =
         (param_1->ComponentToWorld).Rotation.XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
    dVar1 = (param_1->ComponentToWorld).Rotation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] =
         (param_1->ComponentToWorld).Rotation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar1;
    dVar1 = (param_1->ComponentToWorld).Translation.XY.m128d_f64[1];
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] =
         (param_1->ComponentToWorld).Translation.XY.m128d_f64[0];
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar1;
    dVar1 = (param_1->ComponentToWorld).Translation.ZW.m128d_f64[1];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] =
         (param_1->ComponentToWorld).Translation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = dVar1;
    dVar1 = (param_1->ComponentToWorld).Scale3D.XY.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] =
         (param_1->ComponentToWorld).Scale3D.XY.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar1;
    dVar1 = (param_1->ComponentToWorld).Scale3D.ZW.m128d_f64[1];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] =
         (param_1->ComponentToWorld).Scale3D.ZW.m128d_f64[0];
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar1;
    return __return_storage_ptr__;
  }
  (**(code **)(param_1->_padding_ + 0x520))(param_1,__return_storage_ptr__,*param_2,0);
  return __return_storage_ptr__;
}

// GetTargetTrasform @ 14cf117f0

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

TTransform<double> * __thiscall
FMotionWarpingTarget::GetTargetTrasform
          (FMotionWarpingTarget *this,TTransform<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  bool bVar4;
  USceneComponent *pUVar5;
  TTransform<double> *pTVar6;
  UObject *pUVar7;
  TQuat<double> *pTVar8;
  undefined1 auStack_148 [64];
  TQuat<double> local_108;
  TTransform<double> local_e8;
  TTransform<double> local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_148;
  bVar4 = FWeakObjectPtr::IsValid(&(this->Component).WeakPtr);
  if ((bVar4) && (this->bFollowComponent != false)) {
    local_e8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_e8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_e8.Translation.XY.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
    local_e8.Translation.ZW.m128d_f64 =
         UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
    local_e8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_e8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    if (this->BoneName == (FName)0x0) {
      pUVar7 = FWeakObjectPtr::Get(&(this->Component).WeakPtr);
      local_e8.Rotation.XY.m128d_f64[0] = *(double *)&pUVar7[0xc].field_0x10;
      local_e8.Rotation.XY.m128d_f64[1] = *(double *)&pUVar7[0xc].field_0x18;
      local_e8.Rotation.ZW.m128d_f64 = *(double (*) [2])&pUVar7[0xc].field_0x20;
      local_e8.Translation.XY.m128d_f64[0] = *(double *)&pUVar7[0xd].field_0x8;
      local_e8.Translation.XY.m128d_f64[1] = *(double *)&pUVar7[0xd].field_0x10;
      local_e8.Translation.ZW.m128d_f64[0] = *(double *)&pUVar7[0xd].field_0x18;
      local_e8.Translation.ZW.m128d_f64[1] = *(double *)&pUVar7[0xd].field_0x20;
      local_e8.Scale3D.XY.m128d_f64[0] = *(double *)&pUVar7[0xe].field_0x0;
      local_e8.Scale3D.XY.m128d_f64[1] = *(double *)&pUVar7[0xe].field_0x8;
      local_e8.Scale3D.ZW.m128d_f64[0] = *(double *)&pUVar7[0xe].field_0x10;
      local_e8.Scale3D.ZW.m128d_f64[1] = *(double *)&pUVar7[0xe].field_0x18;
    }
    else {
      pUVar5 = (USceneComponent *)FWeakObjectPtr::Get(&(this->Component).WeakPtr);
      pTVar6 = GetTargetTransformFromComponent(&local_88,pUVar5,&this->BoneName);
      local_e8.Rotation.XY.m128d_f64[0] = (pTVar6->Rotation).XY.m128d_f64[0];
      local_e8.Rotation.XY.m128d_f64[1] = (pTVar6->Rotation).XY.m128d_f64[1];
      local_e8.Rotation.ZW.m128d_f64 = *&(pTVar6->Rotation).ZW.m128d_f64;
      local_e8.Translation.XY.m128d_f64 = *&(pTVar6->Translation).XY.m128d_f64;
      local_e8.Translation.ZW.m128d_f64 = *&(pTVar6->Translation).ZW.m128d_f64;
      local_e8.Scale3D.XY.m128d_f64 = *&(pTVar6->Scale3D).XY.m128d_f64;
      local_e8.Scale3D.ZW.m128d_f64[0] = (pTVar6->Scale3D).ZW.m128d_f64[0];
      local_e8.Scale3D.ZW.m128d_f64[1] = (pTVar6->Scale3D).ZW.m128d_f64[1];
    }
    RecalculateOffset(this,&local_e8);
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = local_e8.Rotation.XY.m128d_f64[0];
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = local_e8.Rotation.XY.m128d_f64[1];
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = local_e8.Rotation.ZW.m128d_f64[0];
    *(undefined4 *)((__return_storage_ptr__->Rotation).ZW.m128d_f64 + 1) =
         local_e8.Rotation.ZW.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Rotation).ZW.m128d_f64 + 0xc) =
         local_e8.Rotation.ZW.m128d_f64[1]._4_4_;
    *(undefined4 *)(__return_storage_ptr__->Translation).XY.m128d_f64 =
         local_e8.Translation.XY.m128d_f64[0]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 4) =
         local_e8.Translation.XY.m128d_f64[0]._4_4_;
    *(undefined4 *)((__return_storage_ptr__->Translation).XY.m128d_f64 + 1) =
         local_e8.Translation.XY.m128d_f64[1]._0_4_;
    *(undefined4 *)((longlong)(__return_storage_ptr__->Translation).XY.m128d_f64 + 0xc) =
         local_e8.Translation.XY.m128d_f64[1]._4_4_;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = local_e8.Translation.ZW.m128d_f64[0];
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
    dVar1 = _UNK_150689688;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar1;
    dVar1 = _UNK_150689518;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar1;
  }
  else {
    pTVar8 = UE::Math::TRotator<double>::Quaternion(&this->Rotation,&local_108);
    dVar1 = pTVar8->Y;
    dVar2 = pTVar8->Z;
    dVar3 = pTVar8->W;
    (__return_storage_ptr__->Rotation).XY.m128d_f64[0] = pTVar8->X;
    (__return_storage_ptr__->Rotation).XY.m128d_f64[1] = dVar1;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[0] = dVar2;
    (__return_storage_ptr__->Rotation).ZW.m128d_f64[1] = dVar3;
    dVar2 = (this->Location).field0_0x0._s_0.Y;
    dVar1 = (this->Location).field0_0x0._s_0.Z;
    (__return_storage_ptr__->Translation).XY.m128d_f64[0] = (this->Location).field0_0x0._s_0.X;
    (__return_storage_ptr__->Translation).XY.m128d_f64[1] = dVar2;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[0] = dVar1;
    (__return_storage_ptr__->Translation).ZW.m128d_f64[1] = 0.0;
    dVar1 = _UNK_150689688;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
    (__return_storage_ptr__->Scale3D).XY.m128d_f64[1] = dVar1;
    dVar1 = _UNK_150689518;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
    (__return_storage_ptr__->Scale3D).ZW.m128d_f64[1] = dVar1;
  }
  return __return_storage_ptr__;
}

// RecalculateOffset @ 14cf1a760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMotionWarpingTarget::RecalculateOffset(FMotionWarpingTarget *this,TTransform<double> *param_1)

{
  EWarpTargetLocationOffsetDirection EVar1;
  longlong lVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  bool bVar15;
  int iVar16;
  UObject *pUVar17;
  TQuat<double> *pTVar18;
  uint uVar19;
  TWeakObjectPtr<USceneComponent_const_,FWeakObjectPtr> *pTVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  double dVar55;
  double dVar56;
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined4 uVar76;
  undefined4 uVar77;
  undefined1 auStack_348 [32];
  TVector<double>_u_0 local_328;
  double local_300;
  TVector<double>_u_0 local_2f8;
  TTransform<double> local_2d8;
  TTransform<double> local_278;
  TTransform<double> local_218;
  TQuat<double> local_168;
  TTransform<double> local_148;
  TTransform<double> local_e8;
  ulonglong local_88;
  
  uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_88 = __security_cookie.value ^ (ulonglong)auStack_348;
  EVar1 = this->LocationOffsetDirection;
  local_300 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  if (EVar1 == TargetsForwardVector) {
    local_300 = (this->LocationOffset).field0_0x0._s_0.Z;
    uVar8 = (this->LocationOffset).field0_0x0._s_0.X;
    uVar10 = (this->LocationOffset).field0_0x0._s_0.Y;
  }
  else if (EVar1 == VectorFromTargetToOwner) {
    bVar15 = FWeakObjectPtr::IsValid(&(this->AvatarActor).WeakPtr);
    if (bVar15) {
      if (this->bCacheForwardOffset == false) {
        pUVar17 = FWeakObjectPtr::Get(&(this->AvatarActor).WeakPtr);
        lVar2 = *(longlong *)(pUVar17 + 0xb);
        if (lVar2 == 0) {
          uVar76 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,0);
          uVar77 = (undefined4)
                   ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_ >> 0x20);
          local_2f8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_328._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        }
        else {
          auVar36 = *(undefined1 (*) [16])(lVar2 + 0x210);
          uVar76 = auVar36._0_4_;
          uVar77 = auVar36._4_4_;
          local_2f8._s_0.Y = auVar36._8_8_;
          local_328._s_0.Z = *(double *)(lVar2 + 0x220);
        }
        local_2f8._s_0.X = (double)CONCAT44(uVar77,uVar76) - (param_1->Translation).XY.m128d_f64[0];
        local_2f8._s_0.Y = local_2f8._s_0.Y - (param_1->Translation).XY.m128d_f64[1];
        local_2f8._s_0.Z = local_328._s_0.Z - (param_1->Translation).ZW.m128d_f64[0];
        UE::Math::TVector<double>::GetSafeNormal
                  ((TVector<double> *)&local_2f8._s_0,(TVector<double> *)&local_328._s_0,
                   __real_3e45798ee0000000,&UE::Math::TVector<double>::ZeroVector);
        dVar6 = (this->LocationOffset).field0_0x0._s_0.X;
        pTVar20 = &this->Component;
        dVar7 = local_328._s_0.Z * dVar6;
        pUVar17 = FWeakObjectPtr::Get(&pTVar20->WeakPtr);
        auVar65._0_8_ =
             (double)CONCAT44(*(uint *)&pUVar17[0xe].field_0x4 &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              *(uint *)(pUVar17 + 0xe) &
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        auVar65._8_4_ = *(uint *)&pUVar17[0xe].field_0x8 & _UNK_15061cc88;
        auVar65._12_4_ = *(uint *)&pUVar17[0xe].field_0xc & _UNK_15061cc8c;
        auVar58._8_8_ =
             -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
              (double)CONCAT44(*(uint *)&pUVar17[0xe].field_0x1c & _UNK_15061cc8c,
                               *(uint *)&pUVar17[0xe].field_0x18 & _UNK_15061cc88));
        auVar58._0_8_ =
             -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
              (double)CONCAT44(*(uint *)&pUVar17[0xe].field_0x14 &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               *(uint *)&pUVar17[0xe].field_0x10 &
                               (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        uVar19 = movmskpd((int)pTVar20,auVar58);
        auVar36._8_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar65._8_8_);
        auVar36._0_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar65._0_8_);
        iVar16 = movmskpd((int)pUVar17,auVar36);
        if ((uVar19 & 0x3fffffff) == 0 && iVar16 == 0) {
          local_218.Rotation.XY.m128d_f64[0]._0_4_ =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
          local_218.Rotation.XY.m128d_f64[0]._4_4_ =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
          local_218.Rotation.XY.m128d_f64[1]._0_4_ =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
          local_218.Rotation.XY.m128d_f64[1]._4_4_ =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
          local_218.Rotation.ZW.m128d_f64[0]._0_4_ =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
          local_218.Rotation.ZW.m128d_f64[0]._4_4_ =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
          local_218.Rotation.ZW.m128d_f64[1]._0_4_ =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
          local_218.Rotation.ZW.m128d_f64[1]._4_4_ =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
          local_218.Scale3D.XY.m128d_f64[0]._0_4_ =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
          local_218.Scale3D.XY.m128d_f64[0]._4_4_ =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
          local_218.Scale3D.XY.m128d_f64[1]._0_4_ =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
          local_218.Scale3D.XY.m128d_f64[1]._4_4_ =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
          local_218.Scale3D.ZW = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
        }
        else {
          UE::Math::TTransform<double>::InverseFast
                    ((TTransform<double> *)&pUVar17[0xc].field_0x10,&local_218);
        }
        dVar56 = (double)CONCAT44(local_218.Rotation.XY.m128d_f64[1]._4_4_,
                                  local_218.Rotation.XY.m128d_f64[1]._0_4_);
        auVar61._4_4_ = local_218.Rotation.XY.m128d_f64[0]._4_4_;
        auVar61._0_4_ = local_218.Rotation.XY.m128d_f64[0]._0_4_;
        auVar61._8_4_ = local_218.Rotation.XY.m128d_f64[1]._0_4_;
        auVar61._12_4_ = local_218.Rotation.XY.m128d_f64[1]._4_4_;
        auVar14._4_4_ = local_218.Rotation.ZW.m128d_f64[0]._4_4_;
        auVar14._0_4_ = local_218.Rotation.ZW.m128d_f64[0]._0_4_;
        auVar14._8_4_ = local_218.Rotation.ZW.m128d_f64[1]._0_4_;
        auVar14._12_4_ = local_218.Rotation.ZW.m128d_f64[1]._4_4_;
        auVar58 = blendpd(auVar61,auVar14,2);
        auVar31._8_4_ = local_218.Rotation.ZW.m128d_f64[0]._0_4_;
        auVar31._0_8_ = dVar56;
        auVar31._12_4_ = local_218.Rotation.ZW.m128d_f64[0]._4_4_;
        dVar9 = (double)CONCAT44(local_218.Scale3D.XY.m128d_f64[0]._4_4_,
                                 local_218.Scale3D.XY.m128d_f64[0]._0_4_) *
                (local_328._s_0.X * dVar6 + (this->CachedUpOffset).field0_0x0._s_0.X +
                (this->CachedRightOffset).field0_0x0._s_0.X);
        dVar11 = (double)CONCAT44(local_218.Scale3D.XY.m128d_f64[1]._4_4_,
                                  local_218.Scale3D.XY.m128d_f64[1]._0_4_) *
                 (local_328._s_0.Y * dVar6 + (this->CachedUpOffset).field0_0x0._s_0.Y +
                 (this->CachedRightOffset).field0_0x0._s_0.Y);
        uVar76 = (undefined4)((ulonglong)dVar11 >> 0x20);
        auVar75._0_8_ =
             (dVar7 + (this->CachedUpOffset).field0_0x0._s_0.Z +
             (this->CachedRightOffset).field0_0x0._s_0.Z) * local_218.Scale3D.ZW.m128d_f64[0];
        auVar75._8_8_ = local_218.Scale3D.ZW.m128d_f64[1] * 0.0;
        auVar66._8_4_ = SUB84(dVar11,0);
        auVar66._0_8_ = dVar9;
        auVar66._12_4_ = uVar76;
        auVar45._8_4_ = SUB84(dVar11,0);
        auVar45._0_8_ = dVar9;
        auVar45._12_4_ = uVar76;
        auVar36 = blendpd(auVar45,auVar75,2);
        auVar67._0_8_ =
             auVar66._8_8_ *
             (double)CONCAT44(local_218.Rotation.XY.m128d_f64[0]._4_4_,
                              local_218.Rotation.XY.m128d_f64[0]._0_4_) - dVar56 * dVar9;
        auVar67._8_8_ =
             auVar75._0_8_ *
             (double)CONCAT44(local_218.Rotation.XY.m128d_f64[1]._4_4_,
                              local_218.Rotation.XY.m128d_f64[1]._0_4_) - auVar31._8_8_ * dVar11;
        auVar46._0_8_ =
             auVar36._0_8_ *
             (double)CONCAT44(local_218.Rotation.ZW.m128d_f64[0]._4_4_,
                              local_218.Rotation.ZW.m128d_f64[0]._0_4_) -
             auVar58._0_8_ * auVar75._0_8_;
        auVar46._8_8_ =
             auVar36._8_8_ *
             (double)CONCAT44(local_218.Rotation.ZW.m128d_f64[1]._4_4_,
                              local_218.Rotation.ZW.m128d_f64[1]._0_4_) -
             auVar58._8_8_ * auVar75._8_8_;
        dVar6 = auVar67._8_8_ + auVar67._8_8_;
        dVar7 = auVar46._0_8_ + auVar46._0_8_;
        uVar76 = SUB84(dVar7,0);
        uVar77 = (undefined4)((ulonglong)dVar7 >> 0x20);
        auVar36 = blendpd(auVar67,auVar46,2);
        auVar68._0_8_ = auVar36._0_8_ + auVar36._0_8_;
        auVar68._8_8_ = auVar36._8_8_ + auVar36._8_8_;
        auVar53._8_4_ = uVar76;
        auVar53._0_8_ = dVar6;
        auVar53._12_4_ = uVar77;
        auVar47._8_4_ = uVar76;
        auVar47._0_8_ = dVar6;
        auVar47._12_4_ = uVar77;
        auVar32._8_4_ = uVar76;
        auVar32._0_8_ = dVar6;
        auVar32._12_4_ = uVar77;
        auVar36 = blendpd(auVar47,auVar68,2);
        auVar54._0_8_ =
             auVar53._8_8_ *
             (double)CONCAT44(local_218.Rotation.XY.m128d_f64[0]._4_4_,
                              local_218.Rotation.XY.m128d_f64[0]._0_4_) - dVar6 * dVar56;
        auVar54._8_8_ =
             auVar68._0_8_ *
             (double)CONCAT44(local_218.Rotation.XY.m128d_f64[1]._4_4_,
                              local_218.Rotation.XY.m128d_f64[1]._0_4_) -
             auVar32._8_8_ *
             (double)CONCAT44(local_218.Rotation.ZW.m128d_f64[0]._4_4_,
                              local_218.Rotation.ZW.m128d_f64[0]._0_4_);
        auVar33._8_4_ = SUB84(auVar54._8_8_,0);
        auVar33._0_8_ = auVar54._0_8_;
        auVar33._12_4_ = (int)((ulonglong)auVar54._8_8_ >> 0x20);
        auVar48._0_8_ =
             auVar36._0_8_ *
             (double)CONCAT44(local_218.Rotation.ZW.m128d_f64[0]._4_4_,
                              local_218.Rotation.ZW.m128d_f64[0]._0_4_) -
             auVar58._0_8_ * auVar68._0_8_;
        auVar48._8_8_ =
             auVar36._8_8_ *
             (double)CONCAT44(local_218.Rotation.ZW.m128d_f64[1]._4_4_,
                              local_218.Rotation.ZW.m128d_f64[1]._0_4_) -
             auVar58._8_8_ * auVar68._8_8_;
        auVar36 = blendpd(auVar54,auVar48,2);
        local_300 = (double)CONCAT44(local_218.Rotation.ZW.m128d_f64[1]._4_4_,
                                     local_218.Rotation.ZW.m128d_f64[1]._0_4_) * auVar68._0_8_ +
                    auVar75._0_8_ + auVar36._0_8_;
        uVar8 = dVar6 * (double)CONCAT44(local_218.Rotation.ZW.m128d_f64[1]._4_4_,
                                         local_218.Rotation.ZW.m128d_f64[1]._0_4_) + dVar9 +
                auVar33._8_8_;
        uVar10 = dVar7 * (double)CONCAT44(local_218.Rotation.ZW.m128d_f64[1]._4_4_,
                                          local_218.Rotation.ZW.m128d_f64[1]._0_4_) + dVar11 +
                 auVar48._0_8_;
      }
      else {
        pTVar20 = &this->Component;
        pUVar17 = FWeakObjectPtr::Get(&pTVar20->WeakPtr);
        auVar59._0_8_ =
             (double)CONCAT44(__xmm_7fffffffffffffff7fffffffffffffff._4_4_ &
                              *(uint *)&pUVar17[0xe].field_0x4,
                              (uint)__xmm_7fffffffffffffff7fffffffffffffff &
                              *(uint *)(pUVar17 + 0xe));
        auVar59._8_4_ = _UNK_15061cc88 & *(uint *)&pUVar17[0xe].field_0x8;
        auVar59._12_4_ = _UNK_15061cc8c & *(uint *)&pUVar17[0xe].field_0xc;
        auVar40._8_8_ =
             -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
              (double)CONCAT44(*(uint *)&pUVar17[0xe].field_0x1c & _UNK_15061cc8c,
                               *(uint *)&pUVar17[0xe].field_0x18 & _UNK_15061cc88));
        auVar40._0_8_ =
             -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
              (double)CONCAT44(*(uint *)&pUVar17[0xe].field_0x14 &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               *(uint *)&pUVar17[0xe].field_0x10 &
                               (uint)__xmm_7fffffffffffffff7fffffffffffffff));
        uVar19 = movmskpd((int)pTVar20,auVar40);
        auVar26._8_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar59._8_8_);
        auVar26._0_8_ =
             -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar59._0_8_);
        iVar16 = movmskpd((int)pUVar17,auVar26);
        if ((uVar19 & 0x3fffffff) == 0 && iVar16 == 0) {
          local_278.Rotation.XY.m128d_f64[0]._0_4_ =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
          local_278.Rotation.XY.m128d_f64[0]._4_4_ =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
          local_278.Rotation.XY.m128d_f64[1]._0_4_ =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
          local_278.Rotation.XY.m128d_f64[1]._4_4_ =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
          local_278.Rotation.ZW.m128d_f64[0]._0_4_ =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
          local_278.Rotation.ZW.m128d_f64[0]._4_4_ =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
          local_278.Rotation.ZW.m128d_f64[1]._0_4_ =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
          local_278.Rotation.ZW.m128d_f64[1]._4_4_ =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
          local_278.Scale3D.XY.m128d_f64[0]._0_4_ =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
          local_278.Scale3D.XY.m128d_f64[0]._4_4_ =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
          local_278.Scale3D.XY.m128d_f64[1]._0_4_ =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
          local_278.Scale3D.XY.m128d_f64[1]._4_4_ =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
          local_278.Scale3D.ZW.m128d_f64[0] =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
          local_278.Scale3D.ZW.m128d_f64[1] =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
        }
        else {
          UE::Math::TTransform<double>::InverseFast
                    ((TTransform<double> *)&pUVar17[0xc].field_0x10,&local_278);
        }
        auVar60._4_4_ = local_278.Rotation.XY.m128d_f64[0]._4_4_;
        auVar60._0_4_ = local_278.Rotation.XY.m128d_f64[0]._0_4_;
        auVar60._8_4_ = local_278.Rotation.XY.m128d_f64[1]._0_4_;
        auVar60._12_4_ = local_278.Rotation.XY.m128d_f64[1]._4_4_;
        auVar64._4_4_ = local_278.Rotation.ZW.m128d_f64[0]._4_4_;
        auVar64._0_4_ = local_278.Rotation.ZW.m128d_f64[0]._0_4_;
        auVar64._8_4_ = local_278.Rotation.ZW.m128d_f64[1]._0_4_;
        auVar64._12_4_ = local_278.Rotation.ZW.m128d_f64[1]._4_4_;
        auVar13._4_4_ = local_278.Rotation.ZW.m128d_f64[0]._4_4_;
        auVar13._0_4_ = local_278.Rotation.ZW.m128d_f64[0]._0_4_;
        auVar13._8_4_ = local_278.Rotation.ZW.m128d_f64[1]._0_4_;
        auVar13._12_4_ = local_278.Rotation.ZW.m128d_f64[1]._4_4_;
        auVar58 = blendpd(auVar60,auVar13,2);
        local_278.Scale3D.ZW.m128d_f64[0] =
             ((this->CachedUpOffset).field0_0x0._s_0.Z +
              (this->CachedForwardOffset).field0_0x0._s_0.Z +
             (this->CachedRightOffset).field0_0x0._s_0.Z) * local_278.Scale3D.ZW.m128d_f64[0];
        local_278.Scale3D.ZW.m128d_f64[1] = local_278.Scale3D.ZW.m128d_f64[1] * 0.0;
        dVar56 = (double)CONCAT44(local_278.Rotation.XY.m128d_f64[1]._4_4_,
                                  local_278.Rotation.XY.m128d_f64[1]._0_4_);
        dVar9 = (double)CONCAT44(local_278.Scale3D.XY.m128d_f64[0]._4_4_,
                                 local_278.Scale3D.XY.m128d_f64[0]._0_4_) *
                ((this->CachedUpOffset).field0_0x0._s_0.X +
                 (this->CachedForwardOffset).field0_0x0._s_0.X +
                (this->CachedRightOffset).field0_0x0._s_0.X);
        dVar11 = (double)CONCAT44(local_278.Scale3D.XY.m128d_f64[1]._4_4_,
                                  local_278.Scale3D.XY.m128d_f64[1]._0_4_) *
                 ((this->CachedUpOffset).field0_0x0._s_0.Y +
                  (this->CachedForwardOffset).field0_0x0._s_0.Y +
                 (this->CachedRightOffset).field0_0x0._s_0.Y);
        uVar76 = (undefined4)((ulonglong)dVar11 >> 0x20);
        auVar72._8_4_ = SUB84(dVar11,0);
        auVar72._0_8_ = dVar9;
        auVar72._12_4_ = uVar76;
        auVar27._8_4_ = local_278.Rotation.ZW.m128d_f64[0]._0_4_;
        auVar27._0_8_ = dVar56;
        auVar27._12_4_ = local_278.Rotation.ZW.m128d_f64[0]._4_4_;
        auVar41._8_4_ = SUB84(dVar11,0);
        auVar41._0_8_ = dVar9;
        auVar41._12_4_ = uVar76;
        auVar5._8_4_ = SUB84(local_278.Scale3D.ZW.m128d_f64[1],0);
        auVar5._0_8_ = local_278.Scale3D.ZW.m128d_f64[0];
        auVar5._12_4_ = (int)((ulonglong)local_278.Scale3D.ZW.m128d_f64[1] >> 0x20);
        auVar36 = blendpd(auVar41,auVar5,2);
        auVar73._0_8_ =
             auVar72._8_8_ *
             (double)CONCAT44(local_278.Rotation.XY.m128d_f64[0]._4_4_,
                              local_278.Rotation.XY.m128d_f64[0]._0_4_) - dVar56 * dVar9;
        auVar73._8_8_ =
             local_278.Scale3D.ZW.m128d_f64[0] *
             (double)CONCAT44(local_278.Rotation.XY.m128d_f64[1]._4_4_,
                              local_278.Rotation.XY.m128d_f64[1]._0_4_) - auVar27._8_8_ * dVar11;
        auVar42._0_8_ =
             auVar36._0_8_ *
             (double)CONCAT44(local_278.Rotation.ZW.m128d_f64[0]._4_4_,
                              local_278.Rotation.ZW.m128d_f64[0]._0_4_) -
             auVar58._0_8_ * local_278.Scale3D.ZW.m128d_f64[0];
        auVar42._8_8_ =
             auVar36._8_8_ *
             (double)CONCAT44(local_278.Rotation.ZW.m128d_f64[1]._4_4_,
                              local_278.Rotation.ZW.m128d_f64[1]._0_4_) -
             auVar58._8_8_ * local_278.Scale3D.ZW.m128d_f64[1];
        auVar36 = blendpd(auVar73,auVar42,2);
        dVar6 = auVar73._8_8_ + auVar73._8_8_;
        dVar7 = auVar42._0_8_ + auVar42._0_8_;
        uVar76 = SUB84(dVar7,0);
        uVar77 = (undefined4)((ulonglong)dVar7 >> 0x20);
        auVar74._0_8_ = auVar36._0_8_ + auVar36._0_8_;
        auVar74._8_8_ = auVar36._8_8_ + auVar36._8_8_;
        auVar51._8_4_ = uVar76;
        auVar51._0_8_ = dVar6;
        auVar51._12_4_ = uVar77;
        auVar28._8_4_ = uVar76;
        auVar28._0_8_ = dVar6;
        auVar28._12_4_ = uVar77;
        auVar43._8_4_ = uVar76;
        auVar43._0_8_ = dVar6;
        auVar43._12_4_ = uVar77;
        auVar36 = blendpd(auVar43,auVar74,2);
        auVar52._0_8_ =
             auVar51._8_8_ *
             (double)CONCAT44(local_278.Rotation.XY.m128d_f64[0]._4_4_,
                              local_278.Rotation.XY.m128d_f64[0]._0_4_) - dVar6 * dVar56;
        auVar52._8_8_ =
             auVar74._0_8_ *
             (double)CONCAT44(local_278.Rotation.XY.m128d_f64[1]._4_4_,
                              local_278.Rotation.XY.m128d_f64[1]._0_4_) -
             auVar28._8_8_ *
             (double)CONCAT44(local_278.Rotation.ZW.m128d_f64[0]._4_4_,
                              local_278.Rotation.ZW.m128d_f64[0]._0_4_);
        auVar29._8_4_ = SUB84(auVar74._8_8_,0);
        auVar29._0_8_ = auVar74._0_8_;
        auVar29._12_4_ = (int)((ulonglong)auVar74._8_8_ >> 0x20);
        auVar44._0_8_ =
             auVar36._0_8_ *
             (double)CONCAT44(local_278.Rotation.ZW.m128d_f64[0]._4_4_,
                              local_278.Rotation.ZW.m128d_f64[0]._0_4_) -
             auVar74._0_8_ * auVar58._0_8_;
        auVar44._8_8_ =
             auVar36._8_8_ *
             (double)CONCAT44(local_278.Rotation.ZW.m128d_f64[1]._4_4_,
                              local_278.Rotation.ZW.m128d_f64[1]._0_4_) -
             auVar29._8_8_ * auVar58._8_8_;
        auVar30._8_4_ = SUB84(auVar52._8_8_,0);
        auVar30._0_8_ = auVar52._0_8_;
        auVar30._12_4_ = (int)((ulonglong)auVar52._8_8_ >> 0x20);
        auVar36 = blendpd(auVar52,auVar44,2);
        local_300 = auVar74._0_8_ * auVar64._8_8_ + local_278.Scale3D.ZW.m128d_f64[0] +
                    auVar36._0_8_;
        uVar8 = dVar6 * auVar64._8_8_ + dVar9 + auVar30._8_8_;
        uVar10 = dVar7 * (double)CONCAT44(local_278.Rotation.ZW.m128d_f64[1]._4_4_,
                                          local_278.Rotation.ZW.m128d_f64[1]._0_4_) + dVar11 +
                 auVar44._0_8_;
      }
    }
    else if (2 < (byte)LogMotionWarping._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMotionWarping);
    }
  }
  else if (EVar1 == WorldSpace) {
    pTVar20 = &this->Component;
    pUVar17 = FWeakObjectPtr::Get(&pTVar20->WeakPtr);
    auVar62._0_8_ =
         (double)CONCAT44(*(uint *)&pUVar17[0xe].field_0x4 &
                          __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                          *(uint *)(pUVar17 + 0xe) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
    auVar62._8_4_ = *(uint *)&pUVar17[0xe].field_0x8 & _UNK_15061cc88;
    auVar62._12_4_ = *(uint *)&pUVar17[0xe].field_0xc & _UNK_15061cc8c;
    auVar34._8_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
          (double)CONCAT44(*(uint *)&pUVar17[0xe].field_0x1c & _UNK_15061cc8c,
                           *(uint *)&pUVar17[0xe].field_0x18 & _UNK_15061cc88));
    auVar34._0_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
          (double)CONCAT44(*(uint *)&pUVar17[0xe].field_0x14 &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           *(uint *)&pUVar17[0xe].field_0x10 &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    uVar19 = movmskpd((int)pTVar20,auVar34);
    auVar21._8_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar62._8_8_);
    auVar21._0_8_ =
         -(ulonglong)((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar62._0_8_);
    iVar16 = movmskpd((int)pUVar17,auVar21);
    if ((uVar19 & 0x3fffffff) == 0 && iVar16 == 0) {
      local_2d8.Rotation.XY.m128d_f64[0]._0_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._0_4_;
      local_2d8.Rotation.XY.m128d_f64[0]._4_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0]._4_4_;
      local_2d8.Rotation.XY.m128d_f64[1]._0_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._0_4_;
      local_2d8.Rotation.XY.m128d_f64[1]._4_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1]._4_4_;
      local_2d8.Rotation.ZW.m128d_f64[0]._0_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._0_4_;
      local_2d8.Rotation.ZW.m128d_f64[0]._4_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0]._4_4_;
      local_2d8.Rotation.ZW.m128d_f64[1]._0_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._0_4_;
      local_2d8.Rotation.ZW.m128d_f64[1]._4_4_ =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1]._4_4_;
      local_2d8.Scale3D.XY.m128d_f64[0]._0_4_ =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._0_4_;
      local_2d8.Scale3D.XY.m128d_f64[0]._4_4_ =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0]._4_4_;
      local_2d8.Scale3D.XY.m128d_f64[1]._0_4_ =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._0_4_;
      local_2d8.Scale3D.XY.m128d_f64[1]._4_4_ =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1]._4_4_;
      local_2d8.Scale3D.ZW = UE::Math::TTransform<double>::Identity.Scale3D.ZW;
    }
    else {
      UE::Math::TTransform<double>::InverseFast
                ((TTransform<double> *)&pUVar17[0xc].field_0x10,&local_2d8);
    }
    dVar55 = (double)CONCAT44(local_2d8.Rotation.XY.m128d_f64[1]._4_4_,
                              local_2d8.Rotation.XY.m128d_f64[1]._0_4_);
    dVar11 = (double)CONCAT44(local_2d8.Scale3D.XY.m128d_f64[0]._4_4_,
                              local_2d8.Scale3D.XY.m128d_f64[0]._0_4_) *
             (this->LocationOffset).field0_0x0._s_0.X;
    dVar56 = (double)CONCAT44(local_2d8.Scale3D.XY.m128d_f64[1]._4_4_,
                              local_2d8.Scale3D.XY.m128d_f64[1]._0_4_) *
             (this->LocationOffset).field0_0x0._s_0.Y;
    uVar76 = (undefined4)((ulonglong)dVar56 >> 0x20);
    dVar6 = (this->LocationOffset).field0_0x0._s_0.Z * local_2d8.Scale3D.ZW.m128d_f64[0];
    dVar7 = local_2d8.Scale3D.ZW.m128d_f64[1] * 0.0;
    auVar69._8_4_ = SUB84(dVar56,0);
    auVar69._0_8_ = dVar11;
    auVar69._12_4_ = uVar76;
    auVar22._8_4_ = local_2d8.Rotation.ZW.m128d_f64[0]._0_4_;
    auVar22._0_8_ = dVar55;
    auVar22._12_4_ = local_2d8.Rotation.ZW.m128d_f64[0]._4_4_;
    auVar57._4_4_ = local_2d8.Rotation.XY.m128d_f64[0]._4_4_;
    auVar57._0_4_ = local_2d8.Rotation.XY.m128d_f64[0]._0_4_;
    auVar57._8_4_ = local_2d8.Rotation.XY.m128d_f64[1]._0_4_;
    auVar57._12_4_ = local_2d8.Rotation.XY.m128d_f64[1]._4_4_;
    auVar35._8_4_ = SUB84(dVar56,0);
    auVar35._0_8_ = dVar11;
    auVar35._12_4_ = uVar76;
    auVar70._0_8_ =
         auVar69._8_8_ *
         (double)CONCAT44(local_2d8.Rotation.XY.m128d_f64[0]._4_4_,
                          local_2d8.Rotation.XY.m128d_f64[0]._0_4_) - dVar55 * dVar11;
    auVar70._8_8_ =
         dVar6 * (double)CONCAT44(local_2d8.Rotation.XY.m128d_f64[1]._4_4_,
                                  local_2d8.Rotation.XY.m128d_f64[1]._0_4_) - auVar22._8_8_ * dVar56
    ;
    auVar4._8_4_ = SUB84(dVar7,0);
    auVar4._0_8_ = dVar6;
    auVar4._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    auVar36 = blendpd(auVar35,auVar4,2);
    auVar63._4_4_ = local_2d8.Rotation.ZW.m128d_f64[0]._4_4_;
    auVar63._0_4_ = local_2d8.Rotation.ZW.m128d_f64[0]._0_4_;
    auVar63._8_4_ = local_2d8.Rotation.ZW.m128d_f64[1]._0_4_;
    auVar63._12_4_ = local_2d8.Rotation.ZW.m128d_f64[1]._4_4_;
    auVar12._4_4_ = local_2d8.Rotation.ZW.m128d_f64[0]._4_4_;
    auVar12._0_4_ = local_2d8.Rotation.ZW.m128d_f64[0]._0_4_;
    auVar12._8_4_ = local_2d8.Rotation.ZW.m128d_f64[1]._0_4_;
    auVar12._12_4_ = local_2d8.Rotation.ZW.m128d_f64[1]._4_4_;
    auVar58 = blendpd(auVar57,auVar12,2);
    auVar37._0_8_ =
         auVar36._0_8_ *
         (double)CONCAT44(local_2d8.Rotation.ZW.m128d_f64[0]._4_4_,
                          local_2d8.Rotation.ZW.m128d_f64[0]._0_4_) - auVar58._0_8_ * dVar6;
    auVar37._8_8_ =
         auVar36._8_8_ *
         (double)CONCAT44(local_2d8.Rotation.ZW.m128d_f64[1]._4_4_,
                          local_2d8.Rotation.ZW.m128d_f64[1]._0_4_) - auVar58._8_8_ * dVar7;
    auVar36 = blendpd(auVar70,auVar37,2);
    dVar7 = auVar70._8_8_ + auVar70._8_8_;
    dVar9 = auVar37._0_8_ + auVar37._0_8_;
    uVar76 = SUB84(dVar9,0);
    uVar77 = (undefined4)((ulonglong)dVar9 >> 0x20);
    auVar71._0_8_ = auVar36._0_8_ + auVar36._0_8_;
    auVar71._8_8_ = auVar36._8_8_ + auVar36._8_8_;
    auVar49._8_4_ = uVar76;
    auVar49._0_8_ = dVar7;
    auVar49._12_4_ = uVar77;
    auVar23._8_4_ = uVar76;
    auVar23._0_8_ = dVar7;
    auVar23._12_4_ = uVar77;
    auVar38._8_4_ = uVar76;
    auVar38._0_8_ = dVar7;
    auVar38._12_4_ = uVar77;
    auVar36 = blendpd(auVar38,auVar71,2);
    auVar50._0_8_ =
         auVar49._8_8_ *
         (double)CONCAT44(local_2d8.Rotation.XY.m128d_f64[0]._4_4_,
                          local_2d8.Rotation.XY.m128d_f64[0]._0_4_) - dVar7 * dVar55;
    auVar50._8_8_ =
         auVar71._0_8_ *
         (double)CONCAT44(local_2d8.Rotation.XY.m128d_f64[1]._4_4_,
                          local_2d8.Rotation.XY.m128d_f64[1]._0_4_) -
         auVar23._8_8_ *
         (double)CONCAT44(local_2d8.Rotation.ZW.m128d_f64[0]._4_4_,
                          local_2d8.Rotation.ZW.m128d_f64[0]._0_4_);
    auVar24._8_4_ = SUB84(auVar71._8_8_,0);
    auVar24._0_8_ = auVar71._0_8_;
    auVar24._12_4_ = (int)((ulonglong)auVar71._8_8_ >> 0x20);
    auVar39._0_8_ =
         auVar36._0_8_ *
         (double)CONCAT44(local_2d8.Rotation.ZW.m128d_f64[0]._4_4_,
                          local_2d8.Rotation.ZW.m128d_f64[0]._0_4_) - auVar71._0_8_ * auVar58._0_8_;
    auVar39._8_8_ =
         auVar36._8_8_ *
         (double)CONCAT44(local_2d8.Rotation.ZW.m128d_f64[1]._4_4_,
                          local_2d8.Rotation.ZW.m128d_f64[1]._0_4_) - auVar24._8_8_ * auVar58._8_8_;
    auVar25._8_4_ = SUB84(auVar50._8_8_,0);
    auVar25._0_8_ = auVar50._0_8_;
    auVar25._12_4_ = (int)((ulonglong)auVar50._8_8_ >> 0x20);
    auVar36 = blendpd(auVar50,auVar39,2);
    local_300 = auVar71._0_8_ * auVar63._8_8_ + dVar6 + auVar36._0_8_;
    uVar8 = dVar7 * auVar63._8_8_ + dVar11 + auVar25._8_8_;
    uVar10 = dVar9 * (double)CONCAT44(local_2d8.Rotation.ZW.m128d_f64[1]._4_4_,
                                      local_2d8.Rotation.ZW.m128d_f64[1]._0_4_) + dVar56 +
             auVar39._0_8_;
  }
  else {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\MotionWarping\\Source\\MotionWarping\\Private\\RootMotionModifier.cpp"
                        ,0xb3,L"");
    if (bVar15) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar18 = UE::Math::TRotator<double>::Quaternion(&this->RotationOffset,&local_168);
  local_e8.Rotation.XY.m128d_f64[0] = pTVar18->X;
  local_e8.Rotation.XY.m128d_f64[1]._0_4_ = *(undefined4 *)&pTVar18->Y;
  local_e8.Rotation.XY.m128d_f64[1]._4_4_ = *(undefined4 *)((longlong)&pTVar18->Y + 4);
  local_e8.Rotation.ZW.m128d_f64[0] = pTVar18->Z;
  local_e8.Rotation.ZW.m128d_f64[1] = pTVar18->W;
  local_e8.Scale3D.XY.m128d_f64[0] = ___xmm_3ff00000000000003ff0000000000000;
  local_e8.Scale3D.XY.m128d_f64[1] = _UNK_150689688;
  local_148.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_148.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_148.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_148.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_e8.Translation.ZW.m128d_f64[0] = local_300;
  local_e8.Translation.ZW.m128d_f64[1] = 0.0;
  local_e8.Scale3D.ZW.m128d_f64[0] = ___xmm_00000000000000003ff0000000000000;
  local_e8.Scale3D.ZW.m128d_f64[1] = _UNK_150689518;
  local_148.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_148.Translation.XY.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
  local_148.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_148.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_148.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_148.Scale3D.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[1];
  local_148.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_148.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_e8.Translation.XY.m128d_f64[0] = (double)uVar8;
  local_e8.Translation.XY.m128d_f64[1] = (double)uVar10;
  UE::Math::TTransform<double>::Multiply(&local_148,&local_e8,param_1);
  (param_1->Rotation).XY.m128d_f64[0] = local_148.Rotation.XY.m128d_f64[0];
  (param_1->Rotation).XY.m128d_f64[1] = local_148.Rotation.XY.m128d_f64[1];
  (param_1->Rotation).ZW.m128d_f64[0] = local_148.Rotation.ZW.m128d_f64[0];
  (param_1->Rotation).ZW.m128d_f64[1] = local_148.Rotation.ZW.m128d_f64[1];
  (param_1->Translation).XY.m128d_f64[0] = local_148.Translation.XY.m128d_f64[0];
  (param_1->Translation).XY.m128d_f64[1] = local_148.Translation.XY.m128d_f64[1];
  (param_1->Translation).ZW.m128d_f64[0] = local_148.Translation.ZW.m128d_f64[0];
  (param_1->Translation).ZW.m128d_f64[1] = local_148.Translation.ZW.m128d_f64[1];
  (param_1->Scale3D).XY.m128d_f64[0] = local_148.Scale3D.XY.m128d_f64[0];
  (param_1->Scale3D).XY.m128d_f64[1] = local_148.Scale3D.XY.m128d_f64[1];
  (param_1->Scale3D).ZW.m128d_f64[0] = local_148.Scale3D.ZW.m128d_f64[0];
  (param_1->Scale3D).ZW.m128d_f64[1] = local_148.Scale3D.ZW.m128d_f64[1];
  return;
}

