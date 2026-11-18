// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b4182a0

UClass * __cdecl UDS_AnimNotify_ParticleEffect::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotify_ParticleEffect.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotify_ParticleEffect",
               &Z_Registration_Info_UClass_UDS_AnimNotify_ParticleEffect.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotify_ParticleEffect,0xe0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AnimNotify_ParticleEffect>,
               InternalVTableHelperCtorCaller<UDS_AnimNotify_ParticleEffect>,local_res8,
               UDS_AnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotify_ParticleEffect.InnerSingleton;
}

// UDS_AnimNotify_ParticleEffect @ 14b41b520

/* WARNING: Enum "Type": Some values do not have unique names */

UDS_AnimNotify_ParticleEffect * __thiscall
UDS_AnimNotify_ParticleEffect::UDS_AnimNotify_ParticleEffect
          (UDS_AnimNotify_ParticleEffect *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  
  UAnimNotify::UAnimNotify((UAnimNotify *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_AnimNotify_ParticleEffect__6B_;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->Scale).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->Scale).field0_0x0._s_0.Y = (double)uVar1;
  (this->Scale).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->SocketName).ComparisonIndex = 0;
  (this->SocketName).Number = 0;
  this->Attached = false;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->ParamSize).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->ParamSize).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  this->CheckRenderInMainPass = false;
  this->UseSkelVert = false;
  (this->ParamSize).field0_0x0._s_0.Z = (double)uVar1;
  return this;
}

// ~UDS_AnimNotify_ParticleEffect @ 14b41bc50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_AnimNotify_ParticleEffect::~UDS_AnimNotify_ParticleEffect(UDS_AnimNotify_ParticleEffect *this)

{
  this->_padding_ = (longlong)&___7UDS_AnimNotify__6B_;
  UAnimNotify::~UAnimNotify((UAnimNotify *)this);
  return;
}

// GetPrivateStaticClass @ 14b41dcd0

UClass * __cdecl UDS_AnimNotify_ParticleEffect::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotify_ParticleEffect.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotify_ParticleEffect",
               &Z_Registration_Info_UClass_UDS_AnimNotify_ParticleEffect.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotify_ParticleEffect,0xe0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AnimNotify_ParticleEffect>,
               InternalVTableHelperCtorCaller<UDS_AnimNotify_ParticleEffect>,local_res8,
               UDS_AnimNotify::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotify_ParticleEffect.InnerSingleton;
}

// StaticRegisterNativesUDS_AnimNotify_ParticleEffect @ 14b41e2a0

void __cdecl UDS_AnimNotify_ParticleEffect::StaticRegisterNativesUDS_AnimNotify_ParticleEffect(void)

{
  return;
}

// UDS_AnimNotify_ParticleEffect @ 14b8b2230

/* WARNING: Enum "Type": Some values do not have unique names */

UDS_AnimNotify_ParticleEffect * __thiscall
UDS_AnimNotify_ParticleEffect::UDS_AnimNotify_ParticleEffect
          (UDS_AnimNotify_ParticleEffect *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  
  UAnimNotify::UAnimNotify((UAnimNotify *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_AnimNotify_ParticleEffect__6B_;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->Scale).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->Scale).field0_0x0._s_0.Y = (double)uVar1;
  (this->Scale).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  (this->SocketName).ComparisonIndex = 0;
  (this->SocketName).Number = 0;
  this->Attached = false;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (this->ParamSize).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (this->ParamSize).field0_0x0._s_0.Y = (double)uVar1;
  uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  this->CheckRenderInMainPass = false;
  this->UseSkelVert = false;
  (this->ParamSize).field0_0x0._s_0.Z = (double)uVar1;
  return this;
}

// EditorPreviewParticle @ 14b8be2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UDS_AnimNotify_ParticleEffect::EditorPreviewParticle
          (UDS_AnimNotify_ParticleEffect *this,USkeletalMeshComponent *param_1)

{
  int *piVar1;
  TArray<FParticleSysParam,TSizedDefaultAllocator<32>_> *pTVar2;
  double dVar3;
  UObjectBaseUtility *this_00;
  UParticleSystem *pUVar4;
  code *pcVar5;
  FParticleSysParam *pFVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  int iVar14;
  UWorld *pUVar15;
  size_t sVar16;
  UParticleSystemComponent *pUVar17;
  FName *pFVar18;
  wchar_t *_Str;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar27;
  undefined1 auVar28 [16];
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auStackY_348 [32];
  FName local_2f8;
  FString local_2f0;
  FString local_2e0;
  FName local_2d0;
  TVector<double>_u_0 local_2c8;
  TRotator<double> local_2a8;
  TVector<double>_u_0 local_288;
  double local_268;
  double dStack_260;
  double local_258;
  undefined1 local_248 [16];
  double local_238;
  FParticleSysParam local_228;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  double local_128;
  double dStack_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  TTransform<double> local_e8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_348;
  if (this->ParticleSystem == (UParticleSystem *)0x0) {
    return;
  }
  if (((param_1 == (USkeletalMeshComponent *)0x0) ||
      (((pUVar15 = (UWorld *)param_1->_padding_, pUVar15 == (UWorld *)0x0 &&
        (pUVar15 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1),
        pUVar15 == (UWorld *)0x0)) || ((pUVar15->WorldType).Value != '\x04')))) ||
     ((param_1->_padding_ == 0 ||
      (this_00 = *(UObjectBaseUtility **)(param_1->_padding_ + 0x10),
      this_00 == (UObjectBaseUtility *)0x0)))) goto LAB_14b8be41a;
  UObjectBaseUtility::GetFullName(this_00,&local_2e0,(UObject *)0x0,None);
  ::FString::FString(&local_2f0,"PreviewActor");
  if (local_2f0.Data.ArrayNum == 0) {
    _Str = L"";
LAB_14b8be3af:
    sVar16 = wcslen(_Str);
    iVar14 = ::FString::Find(&local_2e0,_Str,(int)sVar16,IgnoreCase,FromStart,-1);
  }
  else {
    _Str = (wchar_t *)local_2f0.Data.AllocatorInstance.Data;
    if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) goto LAB_14b8be3af;
    iVar14 = -1;
  }
  if (local_2f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2f0.Data.AllocatorInstance.Data);
  }
  if (iVar14 == -1) {
    if (local_2e0.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
    return;
  }
  if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
  }
LAB_14b8be41a:
  if (this->Attached == true) {
    local_2c8._s_0.X = (this->Scale).field0_0x0._s_0.X;
    local_2c8._s_0.Y = (this->Scale).field0_0x0._s_0.Y;
    local_2c8._s_0.Z = (this->Scale).field0_0x0._s_0.Z;
    local_2a8.Pitch = (this->RotationOffset).Pitch;
    local_2a8.Yaw = (this->RotationOffset).Yaw;
    local_2a8.Roll = (this->RotationOffset).Roll;
    local_288._s_0.X = (this->LocationOffset).field0_0x0._s_0.X;
    local_288._s_0.Y = (this->LocationOffset).field0_0x0._s_0.Y;
    local_288._s_0.Z = (this->LocationOffset).field0_0x0._s_0.Z;
    pUVar17 = UGameplayStatics::SpawnEmitterAttached
                        (this->ParticleSystem,(USceneComponent *)param_1,this->SocketName,
                         (TVector<double> *)&local_288._s_0,&local_2a8,
                         (TVector<double> *)&local_2c8._s_0,KeepRelativeOffset,true,None,true);
  }
  else {
    (**(code **)(param_1->_padding_ + 0x520))(param_1,local_148,this->SocketName,0);
    dVar27 = local_148._8_8_;
    local_f8 = (this->LocationOffset).field0_0x0._s_0.Z * local_f8;
    dStack_f0 = dStack_f0 * 0.0;
    local_108 = local_108 * (this->LocationOffset).field0_0x0._s_0.X;
    dStack_100 = dStack_100 * (this->LocationOffset).field0_0x0._s_0.Y;
    uVar29 = (undefined4)((ulonglong)dStack_100 >> 0x20);
    dVar9 = local_138._0_8_;
    auVar28 = blendpd(local_148,local_138,2);
    auVar31._8_4_ = SUB84(dStack_100,0);
    auVar31._0_8_ = local_108;
    auVar31._12_4_ = uVar29;
    dVar10 = local_138._8_8_;
    dVar8 = local_148._0_8_;
    auVar19._8_4_ = SUB84(dStack_100,0);
    auVar19._0_8_ = local_108;
    auVar19._12_4_ = uVar29;
    auVar32._0_8_ = auVar31._8_8_ * dVar8 - dVar27 * local_108;
    auVar32._8_8_ = local_f8 * dVar27 - dVar9 * dStack_100;
    auVar20._8_4_ = SUB84(dStack_f0,0);
    auVar20._0_8_ = local_f8;
    auVar20._12_4_ = (int)((ulonglong)dStack_f0 >> 0x20);
    auVar20 = blendpd(auVar19,auVar20,2);
    auVar21._0_8_ = auVar20._0_8_ * dVar9 - auVar28._0_8_ * local_f8;
    auVar21._8_8_ = auVar20._8_8_ * dVar10 - auVar28._8_8_ * dStack_f0;
    auVar20 = blendpd(auVar32,auVar21,2);
    auVar33._0_8_ = auVar20._0_8_ + auVar20._0_8_;
    auVar33._8_8_ = auVar20._8_8_ + auVar20._8_8_;
    dVar3 = auVar32._8_8_ + auVar32._8_8_;
    dVar7 = auVar21._0_8_ + auVar21._0_8_;
    uVar29 = (undefined4)((ulonglong)dVar7 >> 0x20);
    auVar24._8_4_ = SUB84(dVar7,0);
    auVar24._0_8_ = dVar3;
    auVar24._12_4_ = uVar29;
    auVar22._8_4_ = SUB84(dVar7,0);
    auVar22._0_8_ = dVar3;
    auVar22._12_4_ = uVar29;
    auVar20 = blendpd(auVar22,auVar33,2);
    auVar25._0_8_ = auVar24._8_8_ * dVar8 - dVar3 * dVar27;
    auVar25._8_8_ = auVar33._0_8_ * dVar27 - dVar7 * dVar9;
    dVar11 = (this->RotationOffsetQuat).Z;
    dVar12 = (this->RotationOffsetQuat).W;
    auVar23._0_8_ = auVar20._0_8_ * dVar9 - auVar33._0_8_ * auVar28._0_8_;
    auVar23._8_8_ = auVar20._8_8_ * dVar10 - auVar33._8_8_ * auVar28._8_8_;
    auVar20 = blendpd(auVar25,auVar23,2);
    local_238 = auVar33._0_8_ * dVar10 + local_f8 + auVar20._0_8_ + local_118;
    local_128 = dVar3 * dVar10 + local_108 + auVar25._8_8_ + local_128;
    dStack_120 = dVar7 * dVar10 + dStack_100 + auVar23._0_8_ + dStack_120;
    uVar29 = SUB84(dStack_120,0);
    uVar30 = (undefined4)((ulonglong)dStack_120 >> 0x20);
    local_e8.Translation.ZW.m128d_f64[1] = 0.0;
    auVar26._8_4_ = local_148._0_4_;
    auVar26._0_8_ = dVar8;
    auVar26._12_4_ = local_148._4_4_;
    local_e8.Translation.XY.m128d_f64[1]._0_4_ = uVar29;
    local_e8.Translation.XY.m128d_f64[0] = local_128;
    local_e8.Translation.XY.m128d_f64[1]._4_4_ = uVar30;
    local_248._8_4_ = uVar29;
    local_248._0_8_ = local_128;
    local_248._12_4_ = uVar30;
    dVar3 = (this->RotationOffsetQuat).X;
    dVar7 = (this->RotationOffsetQuat).Y;
    pUVar15 = (UWorld *)param_1->_padding_;
    auVar28._8_4_ = local_148._8_4_;
    auVar28._0_8_ = dVar27;
    auVar28._12_4_ = local_148._12_4_;
    pUVar4 = this->ParticleSystem;
    local_e8.Scale3D.ZW.m128d_f64[0] = (this->Scale).field0_0x0._s_0.Z;
    local_e8.Scale3D.ZW.m128d_f64[1] = 0.0;
    local_e8.Rotation.XY.m128d_f64[0] =
         dVar8 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
         dVar10 * dVar3 +
         dVar27 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         dVar9 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    local_e8.Rotation.XY.m128d_f64[1] =
         auVar26._8_8_ * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
         dVar10 * dVar7 +
         auVar28._8_8_ * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
         dVar9 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    local_e8.Scale3D.XY.m128d_f64[0] = (this->Scale).field0_0x0._s_0.X;
    local_e8.Scale3D.XY.m128d_f64[1] = (this->Scale).field0_0x0._s_0.Y;
    local_e8.Rotation.ZW.m128d_f64[0] =
         dVar8 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
         dVar10 * dVar11 +
         dVar27 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
         dVar9 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    local_e8.Rotation.ZW.m128d_f64[1] =
         dVar8 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
         dVar10 * dVar12 +
         dVar27 * dVar7 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
         dVar9 * dVar11 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    local_e8.Translation.ZW.m128d_f64[0] = local_238;
    if (pUVar15 == (UWorld *)0x0) {
      pUVar15 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
    }
    pUVar17 = UGameplayStatics::SpawnEmitterAtLocation(pUVar15,pUVar4,&local_e8,true,None,true);
  }
  if (pUVar17 != (UParticleSystemComponent *)0x0) {
    dVar7 = (this->ParamSize).field0_0x0._s_0.X;
    dVar8 = (this->ParamSize).field0_0x0._s_0.Y;
    dVar3 = (this->ParamSize).field0_0x0._s_0.Z;
    pcVar5 = *(code **)(*(longlong *)pUVar17 + 0xaa8);
    pFVar18 = ::FName::FName(&local_2d0,"Size");
    local_268 = dVar7;
    dStack_260 = dVar8;
    local_258 = dVar3;
    (*pcVar5)(pUVar17,*pFVar18,&local_268);
    if (this->UseSkelVert == true) {
      local_228.Scalar = 0.0;
      local_228.Scalar_Low = 0.0;
      local_228.Vector.field0_0x0._s_0.Y = 0.0;
      local_228.Vector.field0_0x0._s_0.Z = 0.0;
      local_228.AsyncActorToWorld.Rotation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      local_228.AsyncActorToWorld.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_228.Vector_Low.field0_0x0._s_0.X = 0.0;
      local_228.Vector_Low.field0_0x0._s_0.Y = 0.0;
      local_228.AsyncActorToWorld.Scale3D.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_228.Color.field0_0x0.Bits = (FColor_u_0)0x0;
      local_228.AsyncActorToWorld.Rotation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      local_228.AsyncActorVelocity.field0_0x0._s_0.X =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_228.AsyncActorVelocity.field0_0x0._s_0.Y =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_228.AsyncActorToWorld.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_228.AsyncActorVelocity.field0_0x0._s_0.Z =
           UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_228.Vector.field0_0x0._s_0.X = 0.0;
      local_228.Vector_Low.field0_0x0._s_0.Z = 0.0;
      local_228.Material.field0_0x0.DebugPtr = (TObjectPtr<UMaterialInterface>_u_0)0x0;
      local_228.AsyncActorToWorld.Scale3D.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      local_228.bAsyncDataCopyIsValid = false;
      ::FName::FName(&local_2f8,"VertSurfaceActor");
      local_228.Actor.field0_0x0 = (TObjectPtr<AActor>_u_0)param_1->_padding_;
      local_228.Name = local_2f8;
      local_228.ParamType.Value = '\x06';
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (local_228.Actor.field0_0x0.DebugPtr != (TObjectPtr<AActor>_u_0)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_228.Actor.field0_0x0);
      }
      pTVar2 = &pUVar17->InstanceParameters;
      pFVar6 = (FParticleSysParam *)(pTVar2->AllocatorInstance).Data;
      if (((pFVar6 <= &local_228) && (&local_228 < pFVar6 + (pUVar17->InstanceParameters).ArrayMax))
         && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar14 = (pUVar17->InstanceParameters).ArrayNum;
      piVar1 = &(pUVar17->InstanceParameters).ArrayMax;
      if (iVar14 == *piVar1) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10e0,&pTVar2->AllocatorInstance,piVar1);
      }
      (pUVar17->InstanceParameters).ArrayNum = iVar14 + 1;
      FParticleSysParam::FParticleSysParam
                ((FParticleSysParam *)((pTVar2->AllocatorInstance).Data + (longlong)iVar14 * 0xe0),
                 &local_228);
    }
  }
  return;
}

// Notify @ 14b8d2780

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall
UDS_AnimNotify_ParticleEffect::Notify
          (UDS_AnimNotify_ParticleEffect *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2,FAnimNotifyEventReference *param_3)

{
  int *piVar1;
  TArray<FParticleSysParam,TSizedDefaultAllocator<32>_> *pTVar2;
  double dVar3;
  TObjectPtr<AActor>_u_0 this_00;
  UParticleSystem *pUVar4;
  code *pcVar5;
  FParticleSysParam *pFVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  byte bVar16;
  bool bVar17;
  int iVar18;
  UDS_GameInstance *pUVar19;
  FDS_EntityBase *pFVar20;
  UParticleSystemComponent *pUVar21;
  TQuat<double> *pTVar22;
  UWorld *pUVar23;
  FName *pFVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  double dVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined4 uVar35;
  undefined4 uVar36;
  double dVar37;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auStackY_408 [32];
  FWeakObjectPtr local_3b8;
  TObjectPtr<AActor>_u_0 local_3b0;
  FName local_3a8;
  FName local_3a0;
  TVector<double>_u_0 local_398;
  TRotator<double> local_378;
  TVector<double>_u_0 local_358;
  double local_338;
  double dStack_330;
  double local_328;
  undefined1 local_318 [32];
  TRotator<double> local_2f8;
  undefined1 local_2e0 [16];
  double local_2d0;
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  double dStack_2b0;
  TQuat<double> local_2a8;
  TQuat<double> local_288;
  FParticleSysParam local_268;
  undefined1 local_188 [16];
  undefined1 local_178 [16];
  double local_168;
  double dStack_160;
  double local_158;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  TTransform<double> local_128;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_408;
  UAnimNotify::Notify((UAnimNotify *)this,param_1,param_2,param_3);
  pUVar19 = UDS_GameInstance::GetInst();
  if ((pUVar19 != (UDS_GameInstance *)0x0) &&
     (this_00 = (TObjectPtr<AActor>_u_0)param_1->_padding_, this_00.DebugPtr != (AActor *)0x0)) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
    }
    local_3b8.ObjectIndex = 0;
    local_3b8.ObjectSerialNumber = 0;
    local_3b0 = this_00;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
    }
    FWeakObjectPtr::operator=(&local_3b8,(FObjectPtr)&local_3b0);
    pFVar20 = FDS_EntityBase::GetEntityBaseFromActor
                        ((TWeakObjectPtr<AActor,FWeakObjectPtr>)local_3b8);
    if (pFVar20 == (FDS_EntityBase *)0x0) {
      bVar16 = this_00->bHidden;
    }
    else {
      bVar16 = pFVar20->bIsHiddenEntityActor;
    }
    if ((bVar16 != 1) &&
       (((this->CheckRenderInMainPass != true || ((param_1->_padding_ & 0x1000000000) == 0)) &&
        (this->ParticleSystem != (UParticleSystem *)0x0)))) {
      if (this->Attached == true) {
        local_398._s_0.X = (this->Scale).field0_0x0._s_0.X;
        local_398._s_0.Y = (this->Scale).field0_0x0._s_0.Y;
        local_398._s_0.Z = (this->Scale).field0_0x0._s_0.Z;
        local_378.Pitch = (this->RotationOffset).Pitch;
        local_378.Yaw = (this->RotationOffset).Yaw;
        local_378.Roll = (this->RotationOffset).Roll;
        local_358._s_0.X = (this->LocationOffset).field0_0x0._s_0.X;
        local_358._s_0.Y = (this->LocationOffset).field0_0x0._s_0.Y;
        local_358._s_0.Z = (this->LocationOffset).field0_0x0._s_0.Z;
        pUVar21 = UGameplayStatics::SpawnEmitterAttached
                            (this->ParticleSystem,(USceneComponent *)param_1,this->SocketName,
                             (TVector<double> *)&local_358._s_0,&local_378,
                             (TVector<double> *)&local_398._s_0,KeepRelativeOffset,true,None,true);
      }
      else {
        UE::Math::TRotator<double>::Quaternion(&this->RotationOffset,&local_2a8);
        (**(code **)(param_1->_padding_ + 0x520))(param_1,local_188,this->SocketName,0);
        dVar32 = local_188._8_8_;
        local_138 = (this->LocationOffset).field0_0x0._s_0.Z * local_138;
        dStack_130 = dStack_130 * 0.0;
        local_148 = local_148 * (this->LocationOffset).field0_0x0._s_0.X;
        dStack_140 = dStack_140 * (this->LocationOffset).field0_0x0._s_0.Y;
        auVar33 = blendpd(local_188,local_178,2);
        dVar10 = local_178._0_8_;
        auVar38._8_4_ = SUB84(dStack_140,0);
        auVar38._0_8_ = local_148;
        uVar35 = (undefined4)((ulonglong)dStack_140 >> 0x20);
        auVar38._12_4_ = uVar35;
        dVar7 = local_188._0_8_;
        auVar25._8_4_ = SUB84(dStack_140,0);
        auVar25._0_8_ = local_148;
        auVar25._12_4_ = uVar35;
        dVar11 = local_178._8_8_;
        auVar39._0_8_ = auVar38._8_8_ * dVar7 - dVar32 * local_148;
        auVar39._8_8_ = local_138 * dVar32 - dVar10 * dStack_140;
        auVar26._8_4_ = SUB84(dStack_130,0);
        auVar26._0_8_ = local_138;
        auVar26._12_4_ = (int)((ulonglong)dStack_130 >> 0x20);
        auVar26 = blendpd(auVar25,auVar26,2);
        auVar27._0_8_ = auVar26._0_8_ * dVar10 - auVar33._0_8_ * local_138;
        auVar27._8_8_ = auVar26._8_8_ * dVar11 - auVar33._8_8_ * dStack_130;
        auVar26 = blendpd(auVar39,auVar27,2);
        dVar3 = auVar39._8_8_ + auVar39._8_8_;
        dVar9 = auVar27._0_8_ + auVar27._0_8_;
        uVar35 = (undefined4)((ulonglong)dVar9 >> 0x20);
        auVar40._0_8_ = auVar26._0_8_ + auVar26._0_8_;
        auVar40._8_8_ = auVar26._8_8_ + auVar26._8_8_;
        auVar30._8_4_ = SUB84(dVar9,0);
        auVar30._0_8_ = dVar3;
        auVar30._12_4_ = uVar35;
        auVar28._8_4_ = SUB84(dVar9,0);
        auVar28._0_8_ = dVar3;
        auVar28._12_4_ = uVar35;
        dVar12 = (this->RotationOffsetQuat).Z;
        dVar13 = (this->RotationOffsetQuat).W;
        auVar26 = blendpd(auVar28,auVar40,2);
        auVar31._0_8_ = auVar30._8_8_ * dVar7 - dVar3 * dVar32;
        auVar31._8_8_ = auVar40._0_8_ * dVar32 - dVar9 * dVar10;
        dVar14 = (this->RotationOffsetQuat).X;
        dVar15 = (this->RotationOffsetQuat).Y;
        auVar34._8_4_ = local_188._0_4_;
        auVar34._0_8_ = dVar7;
        auVar34._12_4_ = local_188._4_4_;
        auVar29._0_8_ = auVar26._0_8_ * dVar10 - auVar40._0_8_ * auVar33._0_8_;
        auVar29._8_8_ = auVar26._8_8_ * dVar11 - auVar40._8_8_ * auVar33._8_8_;
        auVar26 = blendpd(auVar31,auVar29,2);
        dVar37 = auVar40._0_8_ * dVar11 + local_138 + auVar26._0_8_ + local_158;
        dVar8 = dVar3 * dVar11 + local_148 + auVar31._8_8_ + local_168;
        dStack_160 = dVar9 * dVar11 + dStack_140 + auVar29._0_8_ + dStack_160;
        uVar35 = SUB84(dStack_160,0);
        uVar36 = (undefined4)((ulonglong)dStack_160 >> 0x20);
        local_2e0._8_4_ = uVar35;
        local_2e0._0_8_ = dVar8;
        local_2e0._12_4_ = uVar36;
        auVar33._8_4_ = local_188._8_4_;
        auVar33._0_8_ = dVar32;
        auVar33._12_4_ = local_188._12_4_;
        local_318._0_8_ =
             dVar7 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
             dVar11 * dVar14 +
             dVar32 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
             dVar10 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
        local_318._8_8_ =
             auVar34._8_8_ * dVar12 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] + dVar11 * dVar15 +
             auVar33._8_8_ * dVar13 *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
             dVar10 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
        dVar3 = dVar7 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                dVar11 * dVar13 +
                dVar32 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                dVar10 * dVar12 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
        local_318._24_4_ = SUB84(dVar3,0);
        local_318._16_8_ =
             dVar7 * dVar15 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
             dVar11 * dVar12 +
             dVar32 * dVar14 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
             dVar10 * dVar13 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
        local_318._28_4_ = (int)((ulonglong)dVar3 >> 0x20);
        UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_318,&local_2f8);
        pTVar22 = UE::Math::TRotator<double>::Quaternion(&local_2f8,&local_288);
        pUVar4 = this->ParticleSystem;
        local_2b8 = pTVar22->Z;
        dStack_2b0 = pTVar22->W;
        local_2c8 = pTVar22->X;
        dStack_2c0 = pTVar22->Y;
        local_128.Scale3D.XY.m128d_f64[0] = (this->Scale).field0_0x0._s_0.X;
        local_128.Scale3D.XY.m128d_f64[1] = (this->Scale).field0_0x0._s_0.Y;
        local_128.Translation.ZW.m128d_f64[1] = 0.0;
        local_128.Scale3D.ZW.m128d_f64[0] = (this->Scale).field0_0x0._s_0.Z;
        local_128.Scale3D.ZW.m128d_f64[1] = 0.0;
        local_128.Translation.XY.m128d_f64[1]._0_4_ = uVar35;
        local_128.Translation.XY.m128d_f64[0] = dVar8;
        local_128.Translation.XY.m128d_f64[1]._4_4_ = uVar36;
        local_2d0 = dVar37;
        local_128.Rotation.XY.m128d_f64[0] = local_2c8;
        local_128.Rotation.XY.m128d_f64[1] = dStack_2c0;
        local_128.Rotation.ZW.m128d_f64[0] = local_2b8;
        local_128.Rotation.ZW.m128d_f64[1] = dStack_2b0;
        local_128.Translation.ZW.m128d_f64[0] = dVar37;
        pUVar23 = AActor::GetWorld(this_00.DebugPtr);
        pUVar21 = UGameplayStatics::SpawnEmitterAtLocation(pUVar23,pUVar4,&local_128,true,None,true)
        ;
      }
      if (pUVar21 != (UParticleSystemComponent *)0x0) {
        dVar7 = (this->ParamSize).field0_0x0._s_0.X;
        dVar8 = (this->ParamSize).field0_0x0._s_0.Y;
        dVar3 = (this->ParamSize).field0_0x0._s_0.Z;
        pcVar5 = *(code **)(*(longlong *)pUVar21 + 0xaa8);
        pFVar24 = ::FName::FName(&local_3a0,"Size");
        local_338 = dVar7;
        dStack_330 = dVar8;
        local_328 = dVar3;
        (*pcVar5)(pUVar21,*pFVar24,&local_338);
        if (this->UseSkelVert == true) {
          local_268.Vector.field0_0x0._s_0.X = 0.0;
          local_268.Vector.field0_0x0._s_0.Y = 0.0;
          local_268.Vector.field0_0x0._s_0.Z = 0.0;
          local_268.AsyncActorToWorld.Rotation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
          local_268.AsyncActorToWorld.Translation.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
          local_268.Vector_Low.field0_0x0._s_0.X = 0.0;
          local_268.Vector_Low.field0_0x0._s_0.Y = 0.0;
          local_268.AsyncActorToWorld.Scale3D.XY.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
          local_268.Scalar = 0.0;
          local_268.Scalar_Low = 0.0;
          local_268.AsyncActorToWorld.Rotation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
          local_268.AsyncActorVelocity.field0_0x0._s_0.X =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_268.AsyncActorVelocity.field0_0x0._s_0.Y =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_268.AsyncActorToWorld.Translation.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
          local_268.AsyncActorVelocity.field0_0x0._s_0.Z =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          local_268.Vector_Low.field0_0x0._s_0.Z = 0.0;
          local_268.Color.field0_0x0.Bits = (FColor_u_0)0x0;
          local_268.Material.field0_0x0.DebugPtr = (TObjectPtr<UMaterialInterface>_u_0)0x0;
          local_268.AsyncActorToWorld.Scale3D.ZW.m128d_f64 =
               UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
          local_268.bAsyncDataCopyIsValid = false;
          ::FName::FName(&local_3a8,L"VertSurfaceActor");
          local_268.Name = local_3a8;
          local_268.ParamType.Value = '\x06';
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this_00.DebugPtr);
          }
          pTVar2 = &pUVar21->InstanceParameters;
          pFVar6 = (FParticleSysParam *)(pTVar2->AllocatorInstance).Data;
          local_268.Actor.field0_0x0 = this_00;
          if (((pFVar6 <= &local_268) &&
              (&local_268 < pFVar6 + (pUVar21->InstanceParameters).ArrayMax)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar18 = (pUVar21->InstanceParameters).ArrayNum;
          piVar1 = &(pUVar21->InstanceParameters).ArrayMax;
          if (iVar18 == *piVar1) {
            iVar18 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x10e0,&pTVar2->AllocatorInstance,piVar1);
          }
          (pUVar21->InstanceParameters).ArrayNum = iVar18 + 1;
          FParticleSysParam::FParticleSysParam
                    ((FParticleSysParam *)
                     ((pTVar2->AllocatorInstance).Data + (longlong)iVar18 * 0xe0),&local_268);
        }
      }
    }
  }
  return;
}

// PostLoad @ 14b8df430

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UDS_AnimNotify_ParticleEffect::PostLoad(UDS_AnimNotify_ParticleEffect *this)

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

