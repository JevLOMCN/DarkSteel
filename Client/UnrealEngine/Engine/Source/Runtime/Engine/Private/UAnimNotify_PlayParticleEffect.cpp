// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// StaticClass @ 1474965b0

UClass * __cdecl UAnimNotify_PlayParticleEffect::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotify_PlayParticleEffect.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotify_PlayParticleEffect",
               &Z_Registration_Info_UClass_UAnimNotify_PlayParticleEffect.InnerSingleton,
               StaticRegisterNativesUAnimNotify_PlayParticleEffect,0xc0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotify_PlayParticleEffect>,
               InternalVTableHelperCtorCaller<UAnimNotify_PlayParticleEffect>,local_res8,
               UAnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotify_PlayParticleEffect.InnerSingleton;
}

// UAnimNotify_PlayParticleEffect @ 1474b4060

/* WARNING: Enum "Type": Some values do not have unique names */

UAnimNotify_PlayParticleEffect * __thiscall
UAnimNotify_PlayParticleEffect::UAnimNotify_PlayParticleEffect
          (UAnimNotify_PlayParticleEffect *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimNotify_PlayParticleEffect__6B_;
  (this->PSTemplate).field0_0x0.DebugPtr = (UParticleSystem *)0x0;
  (this->SocketName).ComparisonIndex = 0;
  (this->SocketName).Number = 0;
  return this;
}

// UAnimNotify_PlayParticleEffect @ 1474b40a0

/* WARNING: Enum "Type": Some values do not have unique names */

UAnimNotify_PlayParticleEffect * __thiscall
UAnimNotify_PlayParticleEffect::UAnimNotify_PlayParticleEffect(UAnimNotify_PlayParticleEffect *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UObject::UObject((UObject *)this,pFVar1);
  this->Attached = 1;
  this->_padding_ = (longlong)&___7UAnimNotify_PlayParticleEffect__6B_;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  (this->PSTemplate).field0_0x0.DebugPtr = (UParticleSystem *)0x0;
  (this->SocketName).ComparisonIndex = 0;
  (this->SocketName).Number = 0;
  (this->Scale).field0_0x0._s_0.X = 1.0;
  (this->Scale).field0_0x0._s_0.Y = 1.0;
  (this->Scale).field0_0x0._s_0.Z = 1.0;
  return this;
}

// ~UAnimNotify_PlayParticleEffect @ 1474b56a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAnimNotify_PlayParticleEffect::~UAnimNotify_PlayParticleEffect
          (UAnimNotify_PlayParticleEffect *this)

{
  this->_padding_ = (longlong)&___7UAnimNotify__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetNotifyName_Implementation @ 1474dc3d0

/* WARNING: Enum "Type": Some values do not have unique names */

FString * __thiscall
UAnimNotify_PlayParticleEffect::GetNotifyName_Implementation
          (UAnimNotify_PlayParticleEffect *this,FString *__return_storage_ptr__)

{
  UParticleSystem *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = (this->PSTemplate).field0_0x0.DebugPtr;
  if (pUVar1 != (UParticleSystem *)0x0) {
    local_res8[0] = (FName)pUVar1->_padding_;
    ::FName::ToString(local_res8,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  UAnimNotify::GetNotifyName_Implementation((UAnimNotify *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 1474dd550

UClass * __cdecl UAnimNotify_PlayParticleEffect::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotify_PlayParticleEffect.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotify_PlayParticleEffect",
               &Z_Registration_Info_UClass_UAnimNotify_PlayParticleEffect.InnerSingleton,
               StaticRegisterNativesUAnimNotify_PlayParticleEffect,0xc0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotify_PlayParticleEffect>,
               InternalVTableHelperCtorCaller<UAnimNotify_PlayParticleEffect>,local_res8,
               UAnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotify_PlayParticleEffect.InnerSingleton;
}

// Notify @ 1474eda40

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAnimNotify_PlayParticleEffect::Notify
          (UAnimNotify_PlayParticleEffect *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2)

{
  return;
}

// Notify @ 1474eda50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UAnimNotify_PlayParticleEffect::Notify
          (UAnimNotify_PlayParticleEffect *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2,FAnimNotifyEventReference *param_3)

{
  (**(code **)(this->_padding_ + 0x2c8))();
                    /* WARNING: Could not recover jumptable at 0x0001474eda8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x2e8))(this,param_1,param_2);
  return;
}

// PostLoad @ 1474f17d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UAnimNotify_PlayParticleEffect::PostLoad(UAnimNotify_PlayParticleEffect *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TQuat<double> *pTVar4;
  TQuat<double> local_28;
  
  UObject::PostLoad((UObject *)this);
  pTVar4 = UE::Math::TRotator<double>::Quaternion(&this->RotationOffset,&local_28);
  dVar1 = pTVar4->Y;
  dVar2 = pTVar4->Z;
  dVar3 = pTVar4->W;
  (this->RotationOffsetQuat).X = pTVar4->X;
  (this->RotationOffsetQuat).Y = dVar1;
  (this->RotationOffsetQuat).Z = dVar2;
  (this->RotationOffsetQuat).W = dVar3;
  return;
}

// SpawnParticleSystem @ 1474fa640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UParticleSystemComponent * __thiscall
UAnimNotify_PlayParticleEffect::SpawnParticleSystem
          (UAnimNotify_PlayParticleEffect *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2)

{
  UParticleSystem *pUVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  UParticleSystemComponent *pUVar9;
  UWorld *pUVar10;
  UFunction *this_00;
  UClass *pUVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  undefined4 uVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auStackY_208 [32];
  TVector<double>_u_0 local_1b8;
  TRotator<double> local_198;
  TVector<double>_u_0 local_178;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  double local_138;
  double dStack_130;
  double local_128;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  TTransform<double> local_f8;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pUVar1 = (this->PSTemplate).field0_0x0.DebugPtr;
  if (pUVar1 == (UParticleSystem *)0x0) {
    pUVar9 = (UParticleSystemComponent *)0x0;
    if (2 < (byte)LogParticles._0_1_) {
      if (param_2 == (UAnimSequenceBase *)0x0) {
        ::FString::FString((FString *)&local_178._s_0,L"None");
      }
      else {
        UObjectBaseUtility::GetPathName
                  ((UObjectBaseUtility *)param_2,(FString *)&local_178._s_0,(UObject *)0x0);
      }
      this_00 = UObject::FindFunctionChecked((UObject *)this,NAME_UAnimNotify_GetNotifyName);
      pUVar11 = UField::GetOwnerClass((UField *)this_00);
      if ((pUVar11->ClassFlags & CLASS_Native) == CLASS_None) {
        local_198.Pitch = 0.0;
        local_198.Yaw = 0.0;
        (**(code **)(this->_padding_ + 0x260))(this,this_00,&local_198);
        dVar2 = local_198.Pitch;
        lVar12 = (longlong)local_198.Yaw._0_4_;
        local_1b8._s_0.X = 0.0;
        local_1b8._8_4_ = local_198.Yaw._0_4_;
        if (local_198.Yaw._0_4_ == 0) {
          local_1b8._s_0.Y = (double)((ulonglong)local_198.Yaw & 0xffffffff);
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_198.Yaw._0_4_,0,(ForAnyElementType *)&local_1b8._s_0,
                     local_198.Yaw._0_4_,(int *)((longlong)&local_1b8._s_0.Y + 4));
          memcpy((void *)local_1b8._s_0.X,(void *)dVar2,lVar12 * 2);
        }
        if ((void *)local_198.Pitch != (void *)0x0) {
          FMemory::Free((void *)local_198.Pitch);
        }
      }
      else {
        (**(code **)(this->_padding_ + 0x2b8))(this,&local_1b8);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
      if ((void *)local_1b8._s_0.X != (void *)0x0) {
        FMemory::Free((void *)local_1b8._s_0.X);
      }
      pUVar9 = (UParticleSystemComponent *)0x0;
      if ((void *)local_178._s_0.X != (void *)0x0) {
        FMemory::Free((void *)local_178._s_0.X);
      }
    }
  }
  else if (pUVar1->bAnyEmitterLoopsForever == 0) {
    if (this->Attached == 0) {
      (**(code **)(param_1->_padding_ + 0x520))(param_1,local_158,this->SocketName,0);
      dVar21 = local_158._8_8_;
      local_108 = (this->LocationOffset).field0_0x0._s_0.Z * local_108;
      dStack_100 = dStack_100 * 0.0;
      local_118 = local_118 * (this->LocationOffset).field0_0x0._s_0.X;
      dStack_110 = dStack_110 * (this->LocationOffset).field0_0x0._s_0.Y;
      uVar23 = (undefined4)((ulonglong)dStack_110 >> 0x20);
      dVar5 = local_148._0_8_;
      auVar22 = blendpd(local_158,local_148,2);
      auVar24._8_4_ = SUB84(dStack_110,0);
      auVar24._0_8_ = local_118;
      auVar24._12_4_ = uVar23;
      dVar6 = local_148._8_8_;
      dVar4 = local_158._0_8_;
      auVar13._8_4_ = SUB84(dStack_110,0);
      auVar13._0_8_ = local_118;
      auVar13._12_4_ = uVar23;
      auVar25._0_8_ = auVar24._8_8_ * dVar4 - dVar21 * local_118;
      auVar25._8_8_ = local_108 * dVar21 - dVar5 * dStack_110;
      auVar14._8_4_ = SUB84(dStack_100,0);
      auVar14._0_8_ = local_108;
      auVar14._12_4_ = (int)((ulonglong)dStack_100 >> 0x20);
      auVar14 = blendpd(auVar13,auVar14,2);
      auVar15._0_8_ = auVar14._0_8_ * dVar5 - auVar22._0_8_ * local_108;
      auVar15._8_8_ = auVar14._8_8_ * dVar6 - auVar22._8_8_ * dStack_100;
      auVar14 = blendpd(auVar25,auVar15,2);
      auVar26._0_8_ = auVar14._0_8_ + auVar14._0_8_;
      auVar26._8_8_ = auVar14._8_8_ + auVar14._8_8_;
      dVar2 = auVar25._8_8_ + auVar25._8_8_;
      dVar3 = auVar15._0_8_ + auVar15._0_8_;
      uVar23 = (undefined4)((ulonglong)dVar3 >> 0x20);
      auVar18._8_4_ = SUB84(dVar3,0);
      auVar18._0_8_ = dVar2;
      auVar18._12_4_ = uVar23;
      auVar16._8_4_ = SUB84(dVar3,0);
      auVar16._0_8_ = dVar2;
      auVar16._12_4_ = uVar23;
      auVar14 = blendpd(auVar16,auVar26,2);
      auVar19._0_8_ = auVar18._8_8_ * dVar4 - dVar2 * dVar21;
      auVar19._8_8_ = auVar26._0_8_ * dVar21 - dVar3 * dVar5;
      dVar7 = (this->RotationOffsetQuat).Z;
      dVar8 = (this->RotationOffsetQuat).W;
      auVar17._0_8_ = auVar14._0_8_ * dVar5 - auVar26._0_8_ * auVar22._0_8_;
      auVar17._8_8_ = auVar14._8_8_ * dVar6 - auVar26._8_8_ * auVar22._8_8_;
      auVar14 = blendpd(auVar19,auVar17,2);
      local_f8.Translation.ZW.m128d_f64[0] =
           auVar26._0_8_ * dVar6 + local_108 + auVar14._0_8_ + local_128;
      dStack_130 = dVar3 * dVar6 + dStack_110 + auVar17._0_8_ + dStack_130;
      local_f8.Translation.ZW.m128d_f64[1] = 0.0;
      auVar20._8_4_ = local_158._0_4_;
      auVar20._0_8_ = dVar4;
      auVar20._12_4_ = local_158._4_4_;
      local_f8.Translation.XY.m128d_f64[1]._0_4_ = SUB84(dStack_130,0);
      local_f8.Translation.XY.m128d_f64[0] = dVar2 * dVar6 + local_118 + auVar19._8_8_ + local_138;
      local_f8.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)dStack_130 >> 0x20);
      dVar2 = (this->RotationOffsetQuat).X;
      dVar3 = (this->RotationOffsetQuat).Y;
      pUVar10 = (UWorld *)param_1->_padding_;
      auVar22._8_4_ = local_158._8_4_;
      auVar22._0_8_ = dVar21;
      auVar22._12_4_ = local_158._12_4_;
      local_f8.Rotation.ZW.m128d_f64[0] =
           dVar4 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
           dVar6 * dVar7 +
           dVar21 * dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
           dVar5 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
      local_f8.Rotation.ZW.m128d_f64[1] =
           dVar4 * dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
           dVar6 * dVar8 +
           dVar21 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
           dVar5 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
      local_f8.Scale3D.ZW.m128d_f64[0] = (this->Scale).field0_0x0._s_0.Z;
      local_f8.Scale3D.ZW.m128d_f64[1] = 0.0;
      local_f8.Rotation.XY.m128d_f64[0] =
           dVar4 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
           dVar6 * dVar2 +
           dVar21 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
           dVar5 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
      local_f8.Rotation.XY.m128d_f64[1] =
           auVar20._8_8_ * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
           dVar6 * dVar3 +
           auVar22._8_8_ * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
           dVar5 * dVar2 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
      local_f8.Scale3D.XY.m128d_f64[0] = (this->Scale).field0_0x0._s_0.X;
      local_f8.Scale3D.XY.m128d_f64[1] = (this->Scale).field0_0x0._s_0.Y;
      pUVar1 = (this->PSTemplate).field0_0x0.DebugPtr;
      if (pUVar10 == (UWorld *)0x0) {
        pUVar10 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
      }
      pUVar9 = UGameplayStatics::SpawnEmitterAtLocation(pUVar10,pUVar1,&local_f8,true,None,true);
    }
    else {
      local_178._s_0.X = (this->Scale).field0_0x0._s_0.X;
      local_178._s_0.Y = (this->Scale).field0_0x0._s_0.Y;
      local_178._s_0.Z = (this->Scale).field0_0x0._s_0.Z;
      local_198.Pitch = (this->RotationOffset).Pitch;
      local_198.Yaw = (this->RotationOffset).Yaw;
      local_198.Roll = (this->RotationOffset).Roll;
      local_1b8._s_0.X = (this->LocationOffset).field0_0x0._s_0.X;
      local_1b8._s_0.Y = (this->LocationOffset).field0_0x0._s_0.Y;
      local_1b8._s_0.Z = (this->LocationOffset).field0_0x0._s_0.Z;
      pUVar9 = UGameplayStatics::SpawnEmitterAttached
                         (pUVar1,(USceneComponent *)param_1,this->SocketName,
                          (TVector<double> *)&local_1b8._s_0,&local_198,
                          (TVector<double> *)&local_178._s_0,KeepRelativeOffset,true,None,true);
    }
  }
  else {
    if (2 < (byte)LogParticles._0_1_) {
      local_1b8._s_0.X = (double)pUVar1->_padding_;
      ::FName::ToString((FName *)&local_1b8._s_0,(FString *)&local_178._s_0);
      if (param_2 == (UAnimSequenceBase *)0x0) {
        ::FString::FString((FString *)&local_198,L"None");
      }
      else {
        local_1b8._s_0.X = (double)param_2->_padding_;
        ::FName::ToString((FName *)&local_1b8._s_0,(FString *)&local_198);
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogParticles);
      if ((void *)local_198.Pitch != (void *)0x0) {
        FMemory::Free((void *)local_198.Pitch);
      }
      if ((void *)local_178._s_0.X != (void *)0x0) {
        FMemory::Free((void *)local_178._s_0.X);
      }
    }
    pUVar9 = (UParticleSystemComponent *)0x0;
  }
  return pUVar9;
}

// StaticRegisterNativesUAnimNotify_PlayParticleEffect @ 1474fae70

void __cdecl
UAnimNotify_PlayParticleEffect::StaticRegisterNativesUAnimNotify_PlayParticleEffect(void)

{
  return;
}

