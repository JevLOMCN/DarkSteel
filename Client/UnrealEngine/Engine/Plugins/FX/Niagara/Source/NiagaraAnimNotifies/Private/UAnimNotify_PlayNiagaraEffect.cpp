// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraAnimNotifies
// Functions: 13

// StaticClass @ 14a0681c0

UClass * __cdecl UAnimNotify_PlayNiagaraEffect::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotify_PlayNiagaraEffect.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraAnimNotifies",L"AnimNotify_PlayNiagaraEffect",
               &Z_Registration_Info_UClass_UAnimNotify_PlayNiagaraEffect.InnerSingleton,
               StaticRegisterNativesUAnimNotify_PlayNiagaraEffect,0xd0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotify_PlayNiagaraEffect>,
               InternalVTableHelperCtorCaller<UAnimNotify_PlayNiagaraEffect>,local_res8,
               UAnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotify_PlayNiagaraEffect.InnerSingleton;
}

// UAnimNotify_PlayNiagaraEffect @ 14a068ef0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UAnimNotify_PlayNiagaraEffect * __thiscall
UAnimNotify_PlayNiagaraEffect::UAnimNotify_PlayNiagaraEffect
          (UAnimNotify_PlayNiagaraEffect *this,FVTableHelper *param_1)

{
  UAnimNotify::UAnimNotify((UAnimNotify *)this,param_1);
  this->_padding_ = (longlong)&___7UAnimNotify_PlayNiagaraEffect__6B_;
  (this->Template).field0_0x0.DebugPtr = (UNiagaraSystem *)0x0;
  (this->SocketName).ComparisonIndex = 0;
  (this->SocketName).Number = 0;
  return this;
}

// UAnimNotify_PlayNiagaraEffect @ 14a068f30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UAnimNotify_PlayNiagaraEffect * __thiscall
UAnimNotify_PlayNiagaraEffect::UAnimNotify_PlayNiagaraEffect(UAnimNotify_PlayNiagaraEffect *this)

{
  FObjectInitializer *pFVar1;
  
  pFVar1 = FObjectInitializer::Get();
  UAnimNotify::UAnimNotify((UAnimNotify *)this,pFVar1);
  this->_padding_ = (longlong)&___7UAnimNotify_PlayNiagaraEffect__6B_;
  this->Attached = 1;
  (this->Template).field0_0x0.DebugPtr = (UNiagaraSystem *)0x0;
  (this->SocketName).ComparisonIndex = 0;
  (this->SocketName).Number = 0;
  (this->Scale).field0_0x0._s_0.X = 1.0;
  (this->Scale).field0_0x0._s_0.Y = 1.0;
  (this->Scale).field0_0x0._s_0.Z = 1.0;
  this->bAbsoluteScale = false;
  return this;
}

// ~UAnimNotify_PlayNiagaraEffect @ 14a0690e0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UAnimNotify_PlayNiagaraEffect::~UAnimNotify_PlayNiagaraEffect(UAnimNotify_PlayNiagaraEffect *this)

{
  this->_padding_ = (longlong)&___7UAnimNotify_PlayNiagaraEffect__6B_;
  UAnimNotify::~UAnimNotify((UAnimNotify *)this);
  return;
}

// GetNotifyName_Implementation @ 14a0693b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FString * __thiscall
UAnimNotify_PlayNiagaraEffect::GetNotifyName_Implementation
          (UAnimNotify_PlayNiagaraEffect *this,FString *__return_storage_ptr__)

{
  UNiagaraSystem *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = (this->Template).field0_0x0.DebugPtr;
  if (pUVar1 != (UNiagaraSystem *)0x0) {
    local_res8[0] = (FName)pUVar1->_padding_;
    ::FName::ToString(local_res8,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  UAnimNotify::GetNotifyName_Implementation((UAnimNotify *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14a0695d0

UClass * __cdecl UAnimNotify_PlayNiagaraEffect::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotify_PlayNiagaraEffect.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraAnimNotifies",L"AnimNotify_PlayNiagaraEffect",
               &Z_Registration_Info_UClass_UAnimNotify_PlayNiagaraEffect.InnerSingleton,
               StaticRegisterNativesUAnimNotify_PlayNiagaraEffect,0xd0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UAnimNotify_PlayNiagaraEffect>,
               InternalVTableHelperCtorCaller<UAnimNotify_PlayNiagaraEffect>,local_res8,
               UAnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotify_PlayNiagaraEffect.InnerSingleton;
}

// GetSpawnedEffect @ 14a0697f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UFXSystemComponent * __thiscall
UAnimNotify_PlayNiagaraEffect::GetSpawnedEffect(UAnimNotify_PlayNiagaraEffect *this)

{
  return this->SpawnedEffect;
}

// Notify @ 14a069830

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UAnimNotify_PlayNiagaraEffect::Notify
          (UAnimNotify_PlayNiagaraEffect *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2)

{
  return;
}

// Notify @ 14a069840

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UAnimNotify_PlayNiagaraEffect::Notify
          (UAnimNotify_PlayNiagaraEffect *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2,FAnimNotifyEventReference *param_3)

{
  UFXSystemComponent *pUVar1;
  
  pUVar1 = (UFXSystemComponent *)(**(code **)(this->_padding_ + 0x2e8))();
  this->SpawnedEffect = pUVar1;
  UAnimNotify::Notify((UAnimNotify *)this,param_1,param_2,param_3);
  return;
}

// PostLoad @ 14a06a000

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UAnimNotify_PlayNiagaraEffect::PostLoad(UAnimNotify_PlayNiagaraEffect *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TQuat<double> *pTVar4;
  TQuat<double> local_28;
  
  UAnimNotify::PostLoad((UAnimNotify *)this);
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

// SpawnEffect @ 14a06a4e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UFXSystemComponent * __thiscall
UAnimNotify_PlayNiagaraEffect::SpawnEffect
          (UAnimNotify_PlayNiagaraEffect *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2)

{
  UNiagaraSystem *pUVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  UNiagaraComponent *this_00;
  TRotator<double> *pTVar8;
  UWorld *pUVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar21;
  undefined4 uVar22;
  double dVar23;
  undefined4 uVar24;
  double dVar25;
  double dVar28;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auStackY_208 [32];
  TVector<double>_u_0 local_1b8;
  TRotator<double> local_198;
  TVector<double>_u_0 local_178;
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  double local_128;
  TRotator<double> local_120;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_208;
  this_00 = (UNiagaraComponent *)0x0;
  pUVar1 = (this->Template).field0_0x0.DebugPtr;
  if (pUVar1 != (UNiagaraSystem *)0x0) {
    bVar7 = UNiagaraSystem::IsLooping(pUVar1);
    if (bVar7) {
      this_00 = (UNiagaraComponent *)0x0;
    }
    else {
      if (this->Attached == 0) {
        (**(code **)(param_1->_padding_ + 0x520))(param_1,local_108,this->SocketName,0);
        dVar29 = (this->RotationOffsetQuat).Z;
        dVar4 = (this->RotationOffsetQuat).W;
        dVar5 = (this->RotationOffsetQuat).X;
        dVar6 = (this->RotationOffsetQuat).Y;
        dVar25 = local_108._0_8_;
        dVar28 = local_108._8_8_;
        dVar23 = local_f8._8_8_;
        auVar30._8_4_ = local_f8._8_4_;
        auVar30._0_8_ = dVar23;
        auVar30._12_4_ = local_f8._12_4_;
        auVar15._8_4_ = local_108._8_4_;
        auVar15._0_8_ = dVar28;
        auVar15._12_4_ = local_108._12_4_;
        dVar21 = local_f8._0_8_;
        auVar10._8_4_ = local_f8._0_4_;
        auVar10._0_8_ = dVar21;
        auVar10._12_4_ = local_f8._4_4_;
        dVar2 = dVar25 * dVar29 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                auVar30._8_8_ * dVar6 +
                auVar15._8_8_ * dVar4 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                auVar10._8_8_ * dVar5 *
                GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        dVar3 = dVar25 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                dVar23 * dVar4 +
                dVar28 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                dVar21 * dVar29 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        local_158._8_4_ = SUB84(dVar2,0);
        local_158._0_8_ =
             dVar25 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             dVar23 * dVar5 +
             dVar28 * dVar29 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar21 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        local_158._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
        local_148._8_4_ = SUB84(dVar3,0);
        local_148._0_8_ =
             dVar25 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             dVar23 * dVar29 +
             dVar28 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             dVar21 * dVar4 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        local_148._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
        pTVar8 = UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_158,&local_120);
        dVar29 = local_108._8_8_;
        local_b8 = (this->LocationOffset).field0_0x0._s_0.Z * local_b8;
        dStack_b0 = dStack_b0 * 0.0;
        local_198.Pitch = pTVar8->Pitch;
        local_198.Yaw = pTVar8->Yaw;
        local_198.Roll = pTVar8->Roll;
        local_c8 = local_c8 * (this->LocationOffset).field0_0x0._s_0.X;
        dStack_c0 = dStack_c0 * (this->LocationOffset).field0_0x0._s_0.Y;
        uVar22 = (undefined4)((ulonglong)dStack_c0 >> 0x20);
        dVar2 = local_f8._0_8_;
        auVar32._8_4_ = SUB84(dStack_c0,0);
        auVar32._0_8_ = local_c8;
        auVar32._12_4_ = uVar22;
        dVar3 = local_f8._8_8_;
        auVar11._8_4_ = local_f8._0_4_;
        auVar11._0_8_ = dVar29;
        auVar11._12_4_ = local_f8._4_4_;
        auVar16._8_4_ = SUB84(dStack_c0,0);
        auVar16._0_8_ = local_c8;
        auVar16._12_4_ = uVar22;
        auVar30 = blendpd(local_108,local_f8,2);
        auVar17._8_4_ = SUB84(dStack_b0,0);
        auVar17._0_8_ = local_b8;
        auVar17._12_4_ = (int)((ulonglong)dStack_b0 >> 0x20);
        auVar17 = blendpd(auVar16,auVar17,2);
        auVar33._0_8_ = auVar32._8_8_ * local_108._0_8_ - dVar29 * local_c8;
        auVar33._8_8_ = local_b8 * dVar29 - auVar11._8_8_ * dStack_c0;
        pUVar1 = (this->Template).field0_0x0.DebugPtr;
        auVar18._0_8_ = auVar17._0_8_ * dVar2 - auVar30._0_8_ * local_b8;
        auVar18._8_8_ = auVar17._8_8_ * dVar3 - auVar30._8_8_ * dStack_b0;
        auVar17 = blendpd(auVar33,auVar18,2);
        auVar34._0_8_ = auVar17._0_8_ + auVar17._0_8_;
        auVar34._8_8_ = auVar17._8_8_ + auVar17._8_8_;
        dVar21 = auVar33._8_8_ + auVar33._8_8_;
        dVar23 = auVar18._0_8_ + auVar18._0_8_;
        uVar22 = SUB84(dVar23,0);
        auVar26._8_4_ = uVar22;
        auVar26._0_8_ = dVar21;
        uVar24 = (undefined4)((ulonglong)dVar23 >> 0x20);
        auVar26._12_4_ = uVar24;
        auVar12._8_4_ = uVar22;
        auVar12._0_8_ = dVar21;
        auVar12._12_4_ = uVar24;
        auVar19._8_4_ = uVar22;
        auVar19._0_8_ = dVar21;
        auVar19._12_4_ = uVar24;
        auVar17 = blendpd(auVar19,auVar34,2);
        auVar27._0_8_ = auVar26._8_8_ * local_108._0_8_ - dVar21 * dVar29;
        auVar27._8_8_ = auVar34._0_8_ * dVar29 - auVar12._8_8_ * dVar2;
        auVar13._8_4_ = SUB84(auVar34._8_8_,0);
        auVar13._0_8_ = auVar34._0_8_;
        auVar13._12_4_ = (int)((ulonglong)auVar34._8_8_ >> 0x20);
        auVar31._8_4_ = local_f8._8_4_;
        auVar31._0_8_ = dVar3;
        auVar31._12_4_ = local_f8._12_4_;
        auVar20._0_8_ = auVar17._0_8_ * dVar2 - auVar34._0_8_ * auVar30._0_8_;
        auVar20._8_8_ = auVar17._8_8_ * dVar3 - auVar13._8_8_ * auVar30._8_8_;
        auVar14._8_4_ = SUB84(auVar27._8_8_,0);
        auVar14._0_8_ = auVar27._0_8_;
        auVar14._12_4_ = (int)((ulonglong)auVar27._8_8_ >> 0x20);
        auVar17 = blendpd(auVar27,auVar20,2);
        local_1b8._s_0.Z = dVar3 * auVar34._0_8_ + local_b8 + auVar17._0_8_ + local_d8;
        local_1b8._s_0.X = dVar3 * dVar21 + local_c8 + auVar14._8_8_ + local_e8;
        local_1b8._s_0.Y = auVar31._8_8_ * dVar23 + dStack_c0 + auVar20._0_8_ + dStack_e0;
        pUVar9 = (UWorld *)param_1->_padding_;
        local_128 = local_1b8._s_0.Z;
        if (pUVar9 == (UWorld *)0x0) {
          pUVar9 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
        }
        local_178._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
        local_178._s_0.Y = _UNK_150689688;
        local_178._s_0.Z = __real_3ff0000000000000;
        local_1b8._s_0.Z = local_128;
        this_00 = UNiagaraFunctionLibrary::SpawnSystemAtLocation
                            ((UObject *)pUVar9,pUVar1,(TVector<double> *)&local_1b8._s_0,&local_198,
                             (TVector<double> *)&local_178._s_0,true,true,None,true);
      }
      else {
        local_198.Pitch = (this->RotationOffset).Pitch;
        local_198.Yaw = (this->RotationOffset).Yaw;
        local_198.Roll = (this->RotationOffset).Roll;
        local_178._s_0.X = (this->LocationOffset).field0_0x0._s_0.X;
        local_178._s_0.Y = (this->LocationOffset).field0_0x0._s_0.Y;
        local_178._s_0.Z = (this->LocationOffset).field0_0x0._s_0.Z;
        this_00 = UNiagaraFunctionLibrary::SpawnSystemAttached
                            ((this->Template).field0_0x0.DebugPtr,(USceneComponent *)param_1,
                             this->SocketName,(TVector<double> *)&local_178._s_0,&local_198,
                             KeepRelativeOffset,true,true,None,true);
      }
      if (this_00 != (UNiagaraComponent *)0x0) {
        USceneComponent::SetUsingAbsoluteScale((USceneComponent *)this_00,this->bAbsoluteScale);
        local_1b8._s_0.X = (this->Scale).field0_0x0._s_0.X;
        local_1b8._s_0.Y = (this->Scale).field0_0x0._s_0.Y;
        local_1b8._s_0.Z = (this->Scale).field0_0x0._s_0.Z;
        USceneComponent::SetRelativeScale3D_Direct
                  ((USceneComponent *)this_00,(TVector<double> *)&local_1b8._s_0);
      }
    }
  }
  return (UFXSystemComponent *)this_00;
}

// StaticRegisterNativesUAnimNotify_PlayNiagaraEffect @ 14a06a990

void __cdecl UAnimNotify_PlayNiagaraEffect::StaticRegisterNativesUAnimNotify_PlayNiagaraEffect(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UAnimNotify_PlayNiagaraEffect_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetSpawnedEffect @ 14a06af50

void __cdecl
UAnimNotify_PlayNiagaraEffect::execGetSpawnedEffect(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)&param_1[3].field_0x18;
  return;
}

