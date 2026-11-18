// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 32

// StaticClass @ 14a838620

UClass * __cdecl AWN_ISKM_Character::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_ISKM_Character.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_ISKM",L"WN_ISKM_Character",
               &Z_Registration_Info_UClass_AWN_ISKM_Character.InnerSingleton,
               StaticRegisterNativesAWN_ISKM_Character,0x340,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWN_ISKM_Character>,
               InternalVTableHelperCtorCaller<AWN_ISKM_Character>,local_res8,
               AWN_ISKM_CharacterBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_ISKM_Character.InnerSingleton;
}

// AWN_ISKM_Character @ 14a83e3f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWN_ISKM_Character * __thiscall
AWN_ISKM_Character::AWN_ISKM_Character(AWN_ISKM_Character *this,FVTableHelper *param_1)

{
  AActor::AActor((AActor *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__IWN_ISKM_Controller__;
  *(undefined4 *)&this->_padding_ = 0x47c35000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  *(undefined1 *)&this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  (this->AnimInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimInfos).ArrayNum = 0;
  (this->AnimInfos).ArrayMax = 0;
  (this->PartInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PartInfos).ArrayNum = 0;
  (this->PartInfos).ArrayMax = 0;
  return this;
}

// AWN_ISKM_Character @ 14a83e480

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

AWN_ISKM_Character * __thiscall
AWN_ISKM_Character::AWN_ISKM_Character(AWN_ISKM_Character *this,FObjectInitializer *param_1)

{
  byte bVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  USceneComponent *pUVar5;
  FName local_res8;
  
  AActor::AActor((AActor *)this,param_1);
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__IWN_ISKM_Controller__;
  bVar1 = *(byte *)((longlong)&this->_padding_ + 2);
  *(undefined1 *)&this->_padding_ = 0;
  (this->AnimInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimInfos).ArrayNum = 0;
  (this->AnimInfos).ArrayMax = 0;
  (this->PartInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PartInfos).ArrayNum = 0;
  (this->PartInfos).ArrayMax = 0;
  *(byte *)((longlong)&this->_padding_ + 2) = bVar1 & 0xf9;
  *(undefined4 *)&this->_padding_ = 0x47c35000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x3f800000;
  FTickFunction::SetTickFunctionEnable((FTickFunction *)&this->_padding_,false);
  pFVar3 = ::FName::FName(&local_res8,"DefaultSceneRoot");
  FVar2 = *pFVar3;
  pUVar4 = Z_Construct_UClass_USceneComponent_NoRegister();
  pUVar5 = (USceneComponent *)
           UObject::CreateDefaultSubobject((UObject *)this,FVar2,pUVar4,pUVar4,true,false);
  AActor::SetRootComponent((AActor *)this,pUVar5);
  return this;
}

// ~AWN_ISKM_Character @ 14a83fa40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_ISKM_Character::~AWN_ISKM_Character(AWN_ISKM_Character *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__AActor__;
  this->_padding_ = (longlong)&_vftable__for__IWN_ISKM_Controller__;
  DestructItems<FWN_ISKM_CharacterPartInfo,int>
            ((FWN_ISKM_CharacterPartInfo *)(this->PartInfos).AllocatorInstance.Data,
             (this->PartInfos).ArrayNum);
  pFVar1 = (this->PartInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FWN_ISKM_CharacterAnimationInfo,int>
            ((FWN_ISKM_CharacterAnimationInfo *)(this->AnimInfos).AllocatorInstance.Data,
             (this->AnimInfos).ArrayNum);
  pFVar1 = (this->AnimInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&AWN_ISKM_CharacterBase::_vftable__for__AActor__;
  this->_padding_ = (longlong)&___7IWN_ISKM_Controller__6B_;
  AActor::~AActor((AActor *)this);
  return;
}

// DestroyAllComponentsAndInstances @ 14a8474c0

void __thiscall AWN_ISKM_Character::DestroyAllComponentsAndInstances(AWN_ISKM_Character *this)

{
  DestroySkeletalMeshComponents(this);
  DestroyPartInstances(this);
  DestroyAnimComponents(this);
  return;
}

// DestroyAnimComponents @ 14a8474f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall AWN_ISKM_Character::DestroyAnimComponents(AWN_ISKM_Character *this)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined1 local_res8 [8];
  
  lVar3 = (**(code **)(this->_padding_ + 0x10))();
  *(undefined4 *)(lVar3 + 0xc) = 0;
  *(undefined8 *)(lVar3 + 0x10) = 0;
  iVar1 = (this->PartInfos).ArrayNum;
  pFVar4 = (this->PartInfos).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0xb0;
  while( true ) {
    if ((this->PartInfos).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FWN_ISKM_CharacterPartInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    if (*(USkinnedMeshComponent **)(pFVar4 + 0xa0) != (USkinnedMeshComponent *)0x0) {
      USkinnedMeshComponent::SetLeaderPoseComponent
                (*(USkinnedMeshComponent **)(pFVar4 + 0xa0),(USkinnedMeshComponent *)0x0,true,false)
      ;
    }
    pFVar4 = pFVar4 + 0xb0;
  }
  iVar1 = (this->AnimInfos).ArrayNum;
  pFVar4 = (this->AnimInfos).AllocatorInstance.Data;
  pFVar5 = pFVar4 + (longlong)iVar1 * 0x90;
  while( true ) {
    if ((this->AnimInfos).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FWN_ISKM_CharacterAnimationInfo,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    plVar2 = *(longlong **)(pFVar4 + 0x88);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x518))(plVar2,&FDetachmentTransformRules::KeepRelativeTransform);
      (**(code **)(**(longlong **)(pFVar4 + 0x88) + 0x4a0))(*(longlong **)(pFVar4 + 0x88),0);
      *(undefined8 *)(pFVar4 + 0x88) = 0;
    }
    pFVar4 = pFVar4 + 0x90;
  }
  return;
}

// DestroyPartInstances @ 14a847900

void __thiscall AWN_ISKM_Character::DestroyPartInstances(AWN_ISKM_Character *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PartInfos).ArrayNum;
  pFVar2 = (this->PartInfos).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0xb0;
  while( true ) {
    if ((this->PartInfos).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FWN_ISKM_CharacterPartInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(int *)(pFVar2 + 0xa8) != -1) {
      UWN_ISKM_Subsystem::RemoveInstance
                ((UWN_ISKM_Subsystem *)this->_padding_,(FWN_ISKM_InstanceKey *)(pFVar2 + 0xa8));
      *(undefined4 *)(pFVar2 + 0xa8) = 0xffffffff;
    }
    pFVar2 = pFVar2 + 0xb0;
  }
  return;
}

// DestroySkeletalMeshComponents @ 14a8479a0

void __thiscall AWN_ISKM_Character::DestroySkeletalMeshComponents(AWN_ISKM_Character *this)

{
  int iVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->PartInfos).ArrayNum;
  pFVar3 = (this->PartInfos).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0xb0;
  while( true ) {
    if ((this->PartInfos).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FWN_ISKM_CharacterPartInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    plVar2 = *(longlong **)(pFVar3 + 0xa0);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x518))(plVar2,&FDetachmentTransformRules::KeepRelativeTransform);
      (**(code **)(**(longlong **)(pFVar3 + 0xa0) + 0x4a0))(*(longlong **)(pFVar3 + 0xa0),0);
      *(undefined8 *)(pFVar3 + 0xa0) = 0;
    }
    pFVar3 = pFVar3 + 0xb0;
  }
  return;
}

// GetPrivateStaticClass @ 14a84af00

UClass * __cdecl AWN_ISKM_Character::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_AWN_ISKM_Character.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = AActor::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_ISKM",L"WN_ISKM_Character",
               &Z_Registration_Info_UClass_AWN_ISKM_Character.InnerSingleton,
               StaticRegisterNativesAWN_ISKM_Character,0x340,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<AWN_ISKM_Character>,
               InternalVTableHelperCtorCaller<AWN_ISKM_Character>,local_res8,
               AWN_ISKM_CharacterBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_AWN_ISKM_Character.InnerSingleton;
}

// ISKM_DestroyAllComponents @ 14a84c1b0

void __thiscall AWN_ISKM_Character::ISKM_DestroyAllComponents(AWN_ISKM_Character *this)

{
  longlong *this_00;
  
  this_00 = &this[-1]._padding_;
  DestroySkeletalMeshComponents((AWN_ISKM_Character *)this_00);
  DestroyPartInstances((AWN_ISKM_Character *)this_00);
  DestroyAnimComponents((AWN_ISKM_Character *)this_00);
  return;
}

// ISKM_PostUpdateController @ 14a84c6e0

void __thiscall
AWN_ISKM_Character::ISKM_PostUpdateController
          (AWN_ISKM_Character *this,FWN_ISKM_LodFragment *param_1,float param_2)

{
  return;
}

// ISKM_PreUpdateController @ 14a84c930

void __thiscall
AWN_ISKM_Character::ISKM_PreUpdateController
          (AWN_ISKM_Character *this,FWN_ISKM_LodFragment *param_1,float param_2)

{
  RefreshAllComponentsAndInstances((AWN_ISKM_Character *)&this[-1]._padding_);
  return;
}

// ISKM_UpdateAnimation_AnyThread @ 14a84d120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
AWN_ISKM_Character::ISKM_UpdateAnimation_AnyThread
          (AWN_ISKM_Character *this,FWN_ISKM_LodFragment *param_1,float param_2)

{
  __m128 _Var1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  double dVar5;
  ulong64 uVar6;
  bool bVar7;
  int iVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  FWN_ISKM_InstanceData *pFVar11;
  double (*padVar12) [2];
  TQuat<double> *pTVar13;
  TTransform<float> *pTVar14;
  __m128 *p_Var15;
  ulonglong uVar16;
  longlong lVar17;
  longlong *plVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  TTransform<double> *pTVar22;
  longlong *plVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  float fVar28;
  double dVar29;
  double dVar30;
  float fVar34;
  float fVar35;
  double dVar36;
  float fVar37;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  double dVar45;
  float fVar46;
  float fVar47;
  double dVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar58;
  __m128 _Var54;
  undefined1 auVar55 [16];
  __m128 _Var56;
  __m128d _Var57;
  double dVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  undefined4 uVar67;
  float fVar68;
  undefined4 uVar69;
  float fVar70;
  undefined4 uVar71;
  float fVar72;
  undefined4 uVar73;
  float fVar74;
  undefined4 uVar75;
  float fVar76;
  undefined4 uVar77;
  float fVar78;
  undefined4 uVar79;
  float fVar80;
  undefined4 uVar81;
  float fVar82;
  float fVar83;
  undefined4 uVar84;
  float fVar85;
  undefined4 uVar86;
  float fVar87;
  double dVar88;
  double dVar89;
  undefined1 auStackY_438 [32];
  undefined1 local_408;
  undefined1 local_407 [3];
  uint local_404;
  uint local_400;
  UObject *local_3f8;
  uint local_3f0;
  undefined8 local_3ec;
  ulonglong local_3e0;
  undefined8 local_3d8;
  float local_3d0;
  FWN_ISKM_LodFragment *local_3c8;
  uint *local_3c0;
  longlong local_3b8;
  TRotator<double> local_3b0;
  TRotator<double> local_398;
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined8 local_370;
  undefined4 local_368;
  undefined4 uStack_364;
  undefined4 uStack_360;
  undefined4 uStack_35c;
  undefined8 local_358;
  double local_348 [2];
  double local_338 [2];
  TQuat<double> local_328;
  TQuat<double> local_308;
  TTransform<double> local_2e8;
  __m128 local_288;
  undefined1 local_278 [16];
  __m128 local_268;
  TTransform<double> local_258;
  TTransform<double> local_1f8;
  TTransform<double> local_198;
  undefined1 local_138 [96];
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_438;
  local_3c8 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_3b0.Pitch = 0.0;
    local_3b0.Yaw = 0.0;
    local_3b0.Roll = 0.0;
    pTVar13 = UE::Math::TRotator<double>::Quaternion(&local_3b0,&local_328);
    sZeroTransform.Rotation.XY.m128d_f64[0] = pTVar13->X;
    sZeroTransform.Rotation.XY.m128d_f64[1] = pTVar13->Y;
    sZeroTransform.Rotation.ZW.m128d_f64[0] = pTVar13->Z;
    sZeroTransform.Rotation.ZW.m128d_f64[1] = pTVar13->W;
    sZeroTransform.Translation.ZW.m128d_f64[1] = 0.0;
    sZeroTransform.Translation.ZW.m128d_f64[0] =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    sZeroTransform.Scale3D.ZW.m128d_f64[1] = 0.0;
    sZeroTransform.Scale3D.ZW.m128d_f64[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
    ;
    sZeroTransform.Translation.XY.m128d_f64[0] =
         (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
    sZeroTransform.Translation.XY.m128d_f64[1] =
         (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
    sZeroTransform.Scale3D.XY.m128d_f64[0] =
         (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._0_8_;
    sZeroTransform.Scale3D.XY.m128d_f64[1] =
         (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
    local_348 = sZeroTransform.Rotation.XY.m128d_f64;
    local_338 = sZeroTransform.Rotation.ZW.m128d_f64;
    _Init_thread_footer(&::_TSS0);
  }
  local_3c0 = (uint *)(**(code **)(this->_padding_ + 0x18))(this);
  uVar24 = *local_3c0;
  uVar25 = CONCAT31((uint3)(uVar24 >> 9),(char)(uVar24 >> 1)) & 0xffffff01;
  local_400 = uVar25;
  if ((uVar24 & 8) != 0) {
    iVar8 = (int)this->_padding_;
    lVar17 = this->_padding_;
    lVar19 = (longlong)iVar8 * 0x90 + lVar17;
    while( true ) {
      if ((int)this->_padding_ != iVar8) {
        local_408 = 0;
        `TCheckedPointerIterator<FWN_ISKM_CharacterAnimationInfo,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&local_408);
      }
      if (lVar17 == lVar19) break;
      if (*(UWN_ISKM_AnimComponent **)(lVar17 + 0x88) != (UWN_ISKM_AnimComponent *)0x0) {
        UWN_ISKM_AnimComponent::UpdateBlendInfos(*(UWN_ISKM_AnimComponent **)(lVar17 + 0x88));
      }
      lVar17 = lVar17 + 0x90;
    }
  }
  local_3f0 = (uint)this->_padding_;
  uVar16 = (ulonglong)(int)local_3f0;
  uVar20 = 0;
  plVar23 = (longlong *)(this->_padding_ + 0xc);
  local_404 = 0;
  local_3b8 = uVar16 * 0xb0 + this->_padding_;
  local_3e0 = 0;
  uVar21 = uVar20;
  fVar61 = __real_477fff00;
  fVar60 = __real_3f800000;
  dVar88 = ___xmm_c0568000000000000000000000000000;
  dVar89 = _UNK_152242e68;
  do {
    lVar17 = local_3b8;
    if ((int)this->_padding_ != (int)uVar16) {
      local_407[0] = 0;
      `TCheckedPointerIterator<FWN_ISKM_CharacterPartInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_407);
      uVar21 = (ulonglong)local_404;
    }
    uVar24 = (uint)uVar21;
    if ((longlong)plVar23 + -0xc == lVar17) {
      return;
    }
    if (*(int *)((longlong)plVar23 + 0x9c) == -1) {
LAB_14a84dd64:
      local_404 = uVar24 + 1;
      uVar21 = (ulonglong)local_404;
      uVar20 = uVar20 + 0x90;
      local_3e0 = uVar20;
    }
    else {
      uVar26 = 0;
      if ((int)uVar24 < (int)this->_padding_) {
        uVar26 = ~uVar24 >> 0x1f;
      }
      if (uVar26 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar21 = (ulonglong)local_404;
      }
      plVar2 = *(longlong **)(uVar20 + 0x88 + this->_padding_);
      if (plVar2 != (longlong *)0x0) {
        pUVar9 = TPersistentObjectPtr<FSoftObjectPath>::Get
                           ((TPersistentObjectPtr<FSoftObjectPath> *)
                            (this->_padding_ + 0x28 + uVar20));
        if (pUVar9 == (UObject *)0x0) {
LAB_14a84d36a:
          local_3f8 = (UObject *)0x0;
        }
        else {
          local_3f8 = pUVar9;
          pUVar10 = UWN_ISKM_Profile::StaticClass();
          iVar8 = (int)pUVar10->_padding_;
          if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar8) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar8 * 8) !=
              &pUVar10->_padding_)) goto LAB_14a84d36a;
        }
        pFVar11 = UWN_ISKM_Subsystem::GetInstanceData
                            ((UWN_ISKM_Subsystem *)this->_padding_,
                             (FWN_ISKM_InstanceKey *)((longlong)plVar23 + 0x9c));
        fVar53 = 0.0;
        if ((char)plVar2[0x20e] != '\0') {
          uVar24 = *(uint *)((longlong)plVar2 + 0x107c);
          if (*(int *)((longlong)plVar2 + 0x1074) == 2) {
            fVar53 = *(float *)((longlong)plVar2 + 0x108c);
            uVar25 = *(uint *)(plVar2 + 0x211);
          }
          else {
            fVar53 = 0.0;
            uVar25 = uVar24;
          }
          if ((0xfffe < (int)uVar24) &&
             (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<5386124812953321589>,false,
                                 "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_PrivatePCH.h"
                                 ,0x75,"InGlobalFrameIndex_A < 0xffffui16"), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if ((0xfffe < (int)uVar25) &&
             (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<5386124812953321590>,false,
                                 "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_PrivatePCH.h"
                                 ,0x76,"InGlobalFrameIndex_B < 0xffffui16"), bVar7)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (0.0 <= fVar53) {
            if ((fVar60 < fVar53) &&
               (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<5386124812953321592>,false,
                                   "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_PrivatePCH.h"
                                   ,0x78,"InAnimBlendingWeight <= 1.0f"), bVar7))
            goto code_r0x00014a84d48f;
          }
          else {
            bVar7 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<5386124812953321591>,false,
                               "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_PrivatePCH.h"
                               ,0x77,"InAnimBlendingWeight >= 0.0f");
            if (bVar7) {
code_r0x00014a84d48f:
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          uVar26 = pFVar11->GlobalFrameIndices_A;
          if ((short)pFVar11->GlobalFrameIndices_A == -1) {
            uVar26 = uVar24;
          }
          pFVar11->GlobalFrameIndices_A = uVar24 & 0xffff | uVar26 << 0x10;
          uVar24 = pFVar11->GlobalFrameIndices_B;
          if ((short)pFVar11->GlobalFrameIndices_B == -1) {
            uVar24 = uVar25;
          }
          pFVar11->GlobalFrameIndices_B = uVar25 & 0xffff | uVar24 << 0x10;
          pFVar11->AnimBlendingWeights =
               (uint)(longlong)(fVar53 * fVar61) & 0xffff | pFVar11->AnimBlendingWeights << 0x10;
          uVar25 = local_400;
        }
        pUVar9 = TPersistentObjectPtr<FSoftObjectPath>::Get
                           ((TPersistentObjectPtr<FSoftObjectPath> *)((longlong)plVar23 + 0xc));
        if (pUVar9 == (UObject *)0x0) {
LAB_14a84d515:
          pUVar9 = (UObject *)0x0;
        }
        else {
          pUVar10 = Z_Construct_UClass_USkeletalMesh_NoRegister();
          iVar8 = (int)pUVar10->_padding_;
          if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar8) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar8 * 8) !=
              &pUVar10->_padding_)) goto LAB_14a84d515;
        }
        iVar8 = (**(code **)(*(longlong *)pUVar9 + 0x3d0))(pUVar9);
        pUVar9 = local_3f8;
        iVar8 = iVar8 + -1;
        local_3ec = 0;
        if (iVar8 < 0) {
          iVar8 = 0;
        }
        iVar4 = local_3c8->LOD;
        if (iVar8 < local_3c8->LOD) {
          iVar4 = iVar8;
        }
        pFVar11->Flags = 0x100 << ((byte)iVar4 & 0x1f) | VisibleWithShadow;
        fVar60 = GlobalVectorConstants::Float0001.m128_f32[0];
        fVar62 = GlobalVectorConstants::Float0001.m128_f32[1];
        fVar63 = GlobalVectorConstants::Float0001.m128_f32[2];
        fVar64 = GlobalVectorConstants::Float0001.m128_f32[3];
        fVar61 = GlobalVectorConstants::FloatZero.m128_f32[0];
        fVar65 = GlobalVectorConstants::FloatZero.m128_f32[1];
        fVar66 = GlobalVectorConstants::FloatZero.m128_f32[2];
        fVar68 = GlobalVectorConstants::FloatZero.m128_f32[3];
        fVar70 = GlobalVectorConstants::Float1110.m128_f32[0];
        fVar72 = GlobalVectorConstants::Float1110.m128_f32[1];
        fVar74 = GlobalVectorConstants::Float1110.m128_f32[2];
        fVar76 = GlobalVectorConstants::Float1110.m128_f32[3];
        uVar41 = SUB84((double)fVar64,0);
        uVar42 = (undefined4)((ulonglong)(double)fVar64 >> 0x20);
        dVar45 = (double)fVar66;
        dVar48 = (double)fVar68;
        dVar29 = (double)fVar74;
        dVar36 = (double)fVar76;
        uVar39 = SUB84((double)fVar62,0);
        uVar40 = (undefined4)((ulonglong)(double)fVar62 >> 0x20);
        uVar43 = SUB84((double)fVar65,0);
        uVar44 = (undefined4)((ulonglong)(double)fVar65 >> 0x20);
        if (*plVar23 == 0) {
          if ((char)uVar25 == '\0') {
            pTVar22 = (TTransform<double> *)(this[-1]._padding_ + 0x1f0);
            if (this[-1]._padding_ == 0) {
              pTVar22 = &UE::Math::TTransform<double>::Identity;
            }
            local_258.Rotation.XY.m128d_f64[1]._0_4_ = uVar39;
            local_258.Rotation.XY.m128d_f64[0] = (double)fVar60;
            local_258.Rotation.XY.m128d_f64[1]._4_4_ = uVar40;
            local_258.Rotation.ZW.m128d_f64[1]._0_4_ = uVar41;
            local_258.Rotation.ZW.m128d_f64[0] = (double)fVar63;
            local_258.Rotation.ZW.m128d_f64[1]._4_4_ = uVar42;
            local_258.Translation.XY.m128d_f64[1]._0_4_ = uVar43;
            local_258.Translation.XY.m128d_f64[0] = (double)fVar61;
            local_258.Translation.XY.m128d_f64[1]._4_4_ = uVar44;
            local_258.Translation.ZW.m128d_f64[0] = dVar45;
            local_258.Translation.ZW.m128d_f64[1] = dVar48;
            local_258.Scale3D.XY.m128d_f64[0] = (double)fVar70;
            local_258.Scale3D.XY.m128d_f64[1] = (double)fVar72;
            local_258.Scale3D.ZW.m128d_f64[0] = dVar29;
            local_258.Scale3D.ZW.m128d_f64[1] = dVar36;
            UE::Math::TTransform<double>::Multiply
                      (&local_258,(TTransform<double> *)((longlong)plVar23 + 0x34),pTVar22);
            pUVar9 = local_3f8;
            _Var57.m128d_f64 = local_258.Rotation.ZW.m128d_f64;
            uVar39 = local_258.Rotation.XY.m128d_f64[0]._0_4_;
            uVar40 = local_258.Rotation.XY.m128d_f64[0]._4_4_;
            uVar41 = local_258.Rotation.XY.m128d_f64[1]._0_4_;
            uVar42 = local_258.Rotation.XY.m128d_f64[1]._4_4_;
            uVar43 = local_258.Translation.XY.m128d_f64[0]._0_4_;
            uVar44 = local_258.Translation.XY.m128d_f64[0]._4_4_;
            uVar67 = local_258.Translation.XY.m128d_f64[1]._0_4_;
            uVar69 = local_258.Translation.XY.m128d_f64[1]._4_4_;
            uVar71 = local_258.Scale3D.XY.m128d_f64[0]._0_4_;
            uVar73 = local_258.Scale3D.XY.m128d_f64[0]._4_4_;
            uVar75 = local_258.Scale3D.XY.m128d_f64[1]._0_4_;
            uVar77 = local_258.Scale3D.XY.m128d_f64[1]._4_4_;
            uVar79 = local_258.Translation.ZW.m128d_f64[0]._0_4_;
            uVar81 = local_258.Translation.ZW.m128d_f64[0]._4_4_;
            uVar84 = local_258.Scale3D.ZW.m128d_f64[0]._0_4_;
            uVar86 = local_258.Scale3D.ZW.m128d_f64[0]._4_4_;
          }
          else {
            _Var57 = sZeroTransform.Rotation.ZW;
            uVar39 = sZeroTransform.Rotation.XY.m128d_f64[0]._0_4_;
            uVar40 = sZeroTransform.Rotation.XY.m128d_f64[0]._4_4_;
            uVar41 = sZeroTransform.Rotation.XY.m128d_f64[1]._0_4_;
            uVar42 = sZeroTransform.Rotation.XY.m128d_f64[1]._4_4_;
            uVar43 = sZeroTransform.Translation.XY.m128d_f64[0]._0_4_;
            uVar44 = sZeroTransform.Translation.XY.m128d_f64[0]._4_4_;
            uVar67 = sZeroTransform.Translation.XY.m128d_f64[1]._0_4_;
            uVar69 = sZeroTransform.Translation.XY.m128d_f64[1]._4_4_;
            uVar71 = sZeroTransform.Scale3D.XY.m128d_f64[0]._0_4_;
            uVar73 = sZeroTransform.Scale3D.XY.m128d_f64[0]._4_4_;
            uVar75 = sZeroTransform.Scale3D.XY.m128d_f64[1]._0_4_;
            uVar77 = sZeroTransform.Scale3D.XY.m128d_f64[1]._4_4_;
            uVar79 = sZeroTransform.Translation.ZW.m128d_f64[0]._0_4_;
            uVar81 = sZeroTransform.Translation.ZW.m128d_f64[0]._4_4_;
            uVar84 = sZeroTransform.Scale3D.ZW.m128d_f64[0]._0_4_;
            uVar86 = sZeroTransform.Scale3D.ZW.m128d_f64[0]._4_4_;
          }
        }
        else {
          local_2e8.Rotation.XY.m128d_f64[1]._0_4_ = uVar39;
          local_2e8.Rotation.XY.m128d_f64[0] = (double)fVar60;
          local_2e8.Rotation.XY.m128d_f64[1]._4_4_ = uVar40;
          local_2e8.Rotation.ZW.m128d_f64[1]._0_4_ = uVar41;
          local_2e8.Rotation.ZW.m128d_f64[0] = (double)fVar63;
          local_2e8.Rotation.ZW.m128d_f64[1]._4_4_ = uVar42;
          local_2e8.Translation.XY.m128d_f64[1]._0_4_ = uVar43;
          local_2e8.Translation.XY.m128d_f64[0] = (double)fVar61;
          local_2e8.Translation.XY.m128d_f64[1]._4_4_ = uVar44;
          local_2e8.Scale3D.XY.m128d_f64[1] = (double)fVar72;
          local_2e8.Scale3D.XY.m128d_f64[0] = (double)fVar70;
          local_2e8.Translation.ZW.m128d_f64[0] = dVar45;
          local_2e8.Translation.ZW.m128d_f64[1] = dVar48;
          local_2e8.Scale3D.ZW.m128d_f64[0] = dVar29;
          local_2e8.Scale3D.ZW.m128d_f64[1] = dVar36;
          if ((char)uVar25 == '\0') {
            if ((char)plVar2[0x20e] != '\0') {
              uVar24 = *(uint *)(plVar2 + 0x20f);
              uVar25 = uVar24;
              if (0.0 < fVar53) {
                uVar25 = *(uint *)((longlong)plVar2 + 0x1084);
              }
              plVar18 = *(longlong **)&local_3f8[2].field_0x18;
              plVar2 = plVar18 + (longlong)*(int *)&local_3f8[2].field_0x20 * 3;
              for (; plVar18 != plVar2; plVar18 = plVar18 + 3) {
                if (*plVar18 == *plVar23) {
                  if (plVar18 != (longlong *)0x0) {
                    uVar26 = 0;
                    if ((int)uVar24 < (int)plVar18[2]) {
                      uVar26 = ~uVar24 >> 0x1f;
                    }
                    if (uVar26 == 0) {
                      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        );
                      if (bVar7) {
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      fVar70 = GlobalVectorConstants::Float1110.m128_f32[0];
                      fVar72 = GlobalVectorConstants::Float1110.m128_f32[1];
                      fVar74 = GlobalVectorConstants::Float1110.m128_f32[2];
                      fVar76 = GlobalVectorConstants::Float1110.m128_f32[3];
                      fVar61 = GlobalVectorConstants::FloatZero.m128_f32[0];
                      fVar65 = GlobalVectorConstants::FloatZero.m128_f32[1];
                      fVar66 = GlobalVectorConstants::FloatZero.m128_f32[2];
                      fVar68 = GlobalVectorConstants::FloatZero.m128_f32[3];
                      fVar60 = GlobalVectorConstants::Float0001.m128_f32[0];
                      fVar62 = GlobalVectorConstants::Float0001.m128_f32[1];
                      fVar63 = GlobalVectorConstants::Float0001.m128_f32[2];
                      fVar64 = GlobalVectorConstants::Float0001.m128_f32[3];
                    }
                    p_Var15 = (__m128 *)((longlong)(int)uVar24 * 0x30 + plVar18[1]);
                    /* WARNING: Load size is inaccurate */
                    _Var54 = *(__m128 *)p_Var15->m128_f32;
                    fVar78 = p_Var15[1].m128_f32[0];
                    fVar80 = *(float *)((longlong)p_Var15 + 0x14);
                    fVar82 = *(float *)((longlong)p_Var15 + 0x18);
                    fVar83 = p_Var15[2].m128_f32[0];
                    fVar85 = *(float *)((longlong)p_Var15 + 0x24);
                    fVar87 = *(float *)((longlong)p_Var15 + 0x28);
                    uVar24 = 0;
                    if ((int)uVar25 < (int)plVar18[2]) {
                      uVar24 = ~uVar25 >> 0x1f;
                    }
                    if (uVar24 == 0) {
                      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        );
                      if (bVar7) {
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      fVar70 = GlobalVectorConstants::Float1110.m128_f32[0];
                      fVar72 = GlobalVectorConstants::Float1110.m128_f32[1];
                      fVar74 = GlobalVectorConstants::Float1110.m128_f32[2];
                      fVar76 = GlobalVectorConstants::Float1110.m128_f32[3];
                      fVar61 = GlobalVectorConstants::FloatZero.m128_f32[0];
                      fVar65 = GlobalVectorConstants::FloatZero.m128_f32[1];
                      fVar66 = GlobalVectorConstants::FloatZero.m128_f32[2];
                      fVar68 = GlobalVectorConstants::FloatZero.m128_f32[3];
                      fVar60 = GlobalVectorConstants::Float0001.m128_f32[0];
                      fVar62 = GlobalVectorConstants::Float0001.m128_f32[1];
                      fVar63 = GlobalVectorConstants::Float0001.m128_f32[2];
                      fVar64 = GlobalVectorConstants::Float0001.m128_f32[3];
                    }
                    pTVar14 = (TTransform<float> *)((longlong)(int)uVar25 * 0x30 + plVar18[1]);
                    goto LAB_14a84d7ff;
                  }
                  break;
                }
              }
              pTVar14 = &UE::Math::TTransform<float>::Identity;
              fVar78 = UE::Math::TTransform<float>::Identity.Translation.m128_f32[0];
              fVar80 = UE::Math::TTransform<float>::Identity.Translation.m128_f32[1];
              fVar82 = UE::Math::TTransform<float>::Identity.Translation.m128_f32[2];
              fVar83 = UE::Math::TTransform<float>::Identity.Scale3D.m128_f32[0];
              fVar85 = UE::Math::TTransform<float>::Identity.Scale3D.m128_f32[1];
              fVar87 = UE::Math::TTransform<float>::Identity.Scale3D.m128_f32[2];
              _Var54 = UE::Math::TTransform<float>::Identity.Rotation;
LAB_14a84d7ff:
                    /* WARNING: Load size is inaccurate */
              _Var1 = pTVar14->Rotation;
              _Var56 = _Var54;
              fVar28 = fVar78;
              fVar34 = fVar80;
              fVar35 = fVar82;
              fVar37 = fVar83;
              fVar38 = fVar85;
              local_3d0 = fVar87;
              if (__real_3727c5ac < fVar53) {
                fVar49 = _Var54.m128_f32[3];
                _Var56 = _Var1;
                fVar28 = ((__m128 *)((longlong)pTVar14 + 0x10))->m128_f32[0];
                fVar34 = *(float *)((longlong)pTVar14 + 0x14);
                fVar35 = *(float *)((longlong)pTVar14 + 0x18);
                fVar37 = ((__m128 *)((longlong)pTVar14 + 0x20))->m128_f32[0];
                fVar38 = *(float *)((longlong)pTVar14 + 0x24);
                local_3d0 = *(float *)((longlong)pTVar14 + 0x28);
                if (fVar53 < __real_3f7fff58) {
                  fVar46 = _Var54.m128_f32[0];
                  fVar47 = _Var54.m128_f32[1];
                  fVar58 = _Var54.m128_f32[2];
                  fVar28 = fVar46 * _Var1.m128_f32[0];
                  fVar34 = fVar47 * _Var1.m128_f32[1];
                  fVar35 = fVar58 * _Var1.m128_f32[2];
                  fVar37 = fVar49 * _Var1.m128_f32[3];
                  fVar50 = GlobalVectorConstants::FloatOne.m128_f32[0] - fVar53;
                  fVar51 = GlobalVectorConstants::FloatOne.m128_f32[1] - fVar53;
                  fVar52 = GlobalVectorConstants::FloatOne.m128_f32[2] - fVar53;
                  fVar38 = fVar34 + fVar28;
                  fVar28 = fVar28 + fVar34;
                  fVar34 = fVar37 + fVar35;
                  fVar35 = fVar35 + fVar37;
                  uVar24 = -(uint)(0.0 <= fVar34 + fVar38);
                  uVar25 = -(uint)(0.0 <= fVar35 + fVar28);
                  uVar26 = -(uint)(0.0 <= fVar38 + fVar34);
                  uVar27 = -(uint)(0.0 <= fVar28 + fVar35);
                  fVar38 = (float)(~uVar24 & (uint)(0.0 - fVar46) | (uint)fVar46 & uVar24) * fVar50
                           + fVar53 * _Var1.m128_f32[0];
                  fVar46 = (float)(~uVar25 & (uint)(0.0 - fVar47) | (uint)fVar47 & uVar25) * fVar51
                           + fVar53 * _Var1.m128_f32[1];
                  fVar47 = (float)(~uVar26 & (uint)(0.0 - fVar58) | (uint)fVar58 & uVar26) * fVar52
                           + fVar53 * _Var1.m128_f32[2];
                  fVar49 = (float)(~uVar27 & (uint)(0.0 - fVar49) | (uint)fVar49 & uVar27) *
                           (GlobalVectorConstants::FloatOne.m128_f32[3] - fVar53) +
                           fVar53 * _Var1.m128_f32[3];
                  fVar28 = fVar46 * fVar46 + fVar38 * fVar38;
                  fVar34 = fVar38 * fVar38 + fVar46 * fVar46;
                  fVar35 = fVar49 * fVar49 + fVar47 * fVar47;
                  fVar37 = fVar47 * fVar47 + fVar49 * fVar49;
                  auVar31._0_4_ = fVar35 + fVar28;
                  auVar31._4_4_ = fVar37 + fVar34;
                  auVar31._8_4_ = fVar28 + fVar35;
                  auVar31._12_4_ = fVar34 + fVar37;
                  uVar24 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[0] <=
                                  auVar31._0_4_);
                  uVar25 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[1] <=
                                  auVar31._4_4_);
                  uVar26 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[2] <=
                                  auVar31._8_4_);
                  uVar27 = -(uint)(GlobalVectorConstants::SmallLengthThreshold.m128_f32[3] <=
                                  auVar31._12_4_);
                  auVar32 = sqrtps(auVar31,auVar31);
                  auVar32 = divps((undefined1  [16])GlobalVectorConstants::FloatOne,auVar32);
                  auVar55._0_4_ = (uint)(auVar32._0_4_ * fVar38) & uVar24;
                  auVar55._4_4_ = (uint)(auVar32._4_4_ * fVar46) & uVar25;
                  auVar55._8_4_ = (uint)(auVar32._8_4_ * fVar47) & uVar26;
                  auVar55._12_4_ = (uint)(auVar32._12_4_ * fVar49) & uVar27;
                  auVar32._4_4_ = ~uVar25 & (uint)fVar62;
                  auVar32._0_4_ = ~uVar24 & (uint)fVar60;
                  auVar32._8_4_ = ~uVar26 & (uint)fVar63;
                  auVar32._12_4_ = ~uVar27 & (uint)fVar64;
                  _Var56 = (__m128)(auVar55 | auVar32);
                  fVar28 = fVar78 * fVar50 +
                           fVar53 * ((__m128 *)((longlong)pTVar14 + 0x10))->m128_f32[0];
                  fVar34 = fVar80 * fVar51 + fVar53 * *(float *)((longlong)pTVar14 + 0x14);
                  fVar35 = fVar82 * fVar52 + fVar53 * *(float *)((longlong)pTVar14 + 0x18);
                  fVar37 = fVar83 * fVar50 +
                           fVar53 * ((__m128 *)((longlong)pTVar14 + 0x20))->m128_f32[0];
                  fVar38 = fVar85 * fVar51 + fVar53 * *(float *)((longlong)pTVar14 + 0x24);
                  local_3d0 = fVar87 * fVar52 + fVar53 * *(float *)((longlong)pTVar14 + 0x28);
                }
              }
              local_3d8 = CONCAT44(fVar38,fVar37);
              local_2e8.Rotation.XY.m128d_f64[1]._0_4_ = SUB84((double)_Var56.m128_f32[1],0);
              local_2e8.Rotation.XY.m128d_f64[0] = (double)_Var56.m128_f32[0];
              local_2e8.Rotation.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)_Var56.m128_f32[1] >> 0x20);
              local_2e8.Scale3D.ZW.m128d_f64[1] = 0.0;
              local_2e8.Rotation.ZW.m128d_f64[1] = (double)_Var56.m128_f32[3];
              local_2e8.Rotation.ZW.m128d_f64[0] = (double)_Var56.m128_f32[2];
              local_2e8.Translation.XY.m128d_f64[1] = (double)fVar34;
              local_2e8.Translation.XY.m128d_f64[0] = (double)fVar28;
              local_2e8.Translation.ZW.m128d_f64[1] = 0.0;
              local_2e8.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar38,0);
              local_2e8.Scale3D.XY.m128d_f64[0] = (double)fVar37;
              local_2e8.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar38 >> 0x20);
              dVar88 = ___xmm_c0568000000000000000000000000000;
              dVar89 = _UNK_152242e68;
              local_2e8.Translation.ZW.m128d_f64[0] = (double)fVar35;
              local_2e8.Scale3D.ZW.m128d_f64[0] = (double)local_3d0;
              uVar25 = local_400;
            }
          }
          else {
            padVar12 = (double (*) [2])(**(code **)(*plVar2 + 0x520))(plVar2,local_138,*plVar23,2);
            fVar60 = GlobalVectorConstants::Float0001.m128_f32[0];
            fVar62 = GlobalVectorConstants::Float0001.m128_f32[1];
            fVar63 = GlobalVectorConstants::Float0001.m128_f32[2];
            fVar64 = GlobalVectorConstants::Float0001.m128_f32[3];
            fVar61 = GlobalVectorConstants::FloatZero.m128_f32[0];
            fVar65 = GlobalVectorConstants::FloatZero.m128_f32[1];
            fVar66 = GlobalVectorConstants::FloatZero.m128_f32[2];
            fVar68 = GlobalVectorConstants::FloatZero.m128_f32[3];
            fVar70 = GlobalVectorConstants::Float1110.m128_f32[0];
            fVar72 = GlobalVectorConstants::Float1110.m128_f32[1];
            fVar74 = GlobalVectorConstants::Float1110.m128_f32[2];
            fVar76 = GlobalVectorConstants::Float1110.m128_f32[3];
            local_2e8.Rotation.XY.m128d_f64 = *padVar12;
            local_2e8.Rotation.ZW.m128d_f64 = padVar12[1];
            local_2e8.Translation.XY.m128d_f64 = padVar12[2];
            local_2e8.Scale3D.XY.m128d_f64 = padVar12[4];
            pUVar9 = local_3f8;
            local_2e8.Translation.ZW.m128d_f64[0] = padVar12[3][0];
            local_2e8.Translation.ZW.m128d_f64[1] = padVar12[3][1];
            local_2e8.Scale3D.ZW.m128d_f64[0] = padVar12[5][0];
            local_2e8.Scale3D.ZW.m128d_f64[1] = padVar12[5][1];
          }
          local_198.Rotation.XY.m128d_f64[0] = (double)fVar60;
          local_198.Rotation.XY.m128d_f64[1] = (double)fVar62;
          local_198.Rotation.ZW.m128d_f64[0] = (double)fVar63;
          local_198.Rotation.ZW.m128d_f64[1] = (double)fVar64;
          local_198.Translation.ZW.m128d_f64[0] = (double)fVar66;
          local_198.Translation.ZW.m128d_f64[1] = (double)fVar68;
          local_198.Translation.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar65,0);
          local_198.Translation.XY.m128d_f64[0] = (double)fVar61;
          local_198.Translation.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar65 >> 0x20);
          local_198.Scale3D.ZW.m128d_f64[0] = (double)fVar74;
          local_198.Scale3D.ZW.m128d_f64[1] = (double)fVar76;
          local_198.Scale3D.XY.m128d_f64[1]._0_4_ = SUB84((double)fVar72,0);
          local_198.Scale3D.XY.m128d_f64[0] = (double)fVar70;
          local_198.Scale3D.XY.m128d_f64[1]._4_4_ = (int)((ulonglong)(double)fVar72 >> 0x20);
          UE::Math::TTransform<double>::Multiply
                    (&local_198,(TTransform<double> *)((longlong)plVar23 + 0x34),&local_2e8);
          if (this[-1]._padding_ == 0) {
            pTVar22 = &UE::Math::TTransform<double>::Identity;
          }
          else {
            pTVar22 = (TTransform<double> *)(this[-1]._padding_ + 0x1f0);
          }
          local_1f8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_1f8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_1f8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_1f8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_1f8.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_1f8.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_1f8.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_1f8.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_1f8.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_1f8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_1f8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          local_1f8.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_1f8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_1f8.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          UE::Math::TTransform<double>::Multiply(&local_1f8,&local_198,pTVar22);
          _Var57.m128d_f64[1] = local_1f8.Rotation.ZW.m128d_f64[1];
          _Var57.m128d_f64[0] = local_1f8.Rotation.ZW.m128d_f64[0];
          uVar39 = local_1f8.Rotation.XY.m128d_f64[0]._0_4_;
          uVar40 = local_1f8.Rotation.XY.m128d_f64[0]._4_4_;
          uVar41 = local_1f8.Rotation.XY.m128d_f64[1]._0_4_;
          uVar42 = local_1f8.Rotation.XY.m128d_f64[1]._4_4_;
          uVar43 = local_1f8.Translation.XY.m128d_f64[0]._0_4_;
          uVar44 = local_1f8.Translation.XY.m128d_f64[0]._4_4_;
          uVar67 = local_1f8.Translation.XY.m128d_f64[1]._0_4_;
          uVar69 = local_1f8.Translation.XY.m128d_f64[1]._4_4_;
          uVar71 = local_1f8.Scale3D.XY.m128d_f64[0]._0_4_;
          uVar73 = local_1f8.Scale3D.XY.m128d_f64[0]._4_4_;
          uVar75 = local_1f8.Scale3D.XY.m128d_f64[1]._0_4_;
          uVar77 = local_1f8.Scale3D.XY.m128d_f64[1]._4_4_;
          uVar79 = local_1f8.Translation.ZW.m128d_f64[0]._0_4_;
          uVar81 = local_1f8.Translation.ZW.m128d_f64[0]._4_4_;
          uVar84 = local_1f8.Scale3D.ZW.m128d_f64[0]._0_4_;
          uVar86 = local_1f8.Scale3D.ZW.m128d_f64[0]._4_4_;
        }
        local_398.Roll = 0.0;
        local_398.Pitch = dVar88;
        local_398.Yaw = dVar89;
        pTVar13 = UE::Math::TRotator<double>::Quaternion(&local_398,&local_308);
        fVar61 = __real_477fff00;
        fVar60 = __real_3f800000;
        dVar30 = _Var57.m128d_f64[0];
        local_370 = CONCAT44(uVar81,uVar79);
        dVar59 = _Var57.m128d_f64[1];
        dVar29 = (double)CONCAT44(uVar40,uVar39);
        dVar36 = pTVar13->X;
        dVar45 = pTVar13->Y;
        dVar48 = pTVar13->Z;
        dVar5 = pTVar13->W;
        auVar33._8_4_ = uVar39;
        auVar33._0_8_ = dVar29;
        auVar33._12_4_ = uVar40;
        local_358 = CONCAT44(uVar86,uVar84);
        fVar53 = (float)local_3c0[1];
        iVar8 = *(int *)&pUVar9[3].field_0x4;
        local_288.m128_f32[0] =
             (float)(dVar30 * dVar45 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0] +
                    (double)CONCAT44(uVar42,uVar41) * dVar48 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                    dVar29 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
                    + dVar36 * dVar59);
        local_288.m128_f32[1] =
             (float)(dVar30 * dVar36 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1] +
                    (double)CONCAT44(uVar42,uVar41) * dVar5 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                    auVar33._8_8_ * dVar48 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                    dVar45 * dVar59);
        local_288.m128_f32[2] =
             (float)(dVar30 * dVar5 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0] +
                    (double)CONCAT44(uVar42,uVar41) * dVar36 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                    dVar29 * dVar45 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                    dVar48 * dVar59);
        local_288.m128_f32[3] =
             (float)(dVar30 * dVar48 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1] +
                    (double)CONCAT44(uVar42,uVar41) * dVar45 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                    (double)CONCAT44(uVar40,uVar39) * dVar36 *
                    GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] + dVar5 * dVar59
                    );
        local_268._0_4_ = (float)(double)CONCAT44(uVar73,uVar71);
        local_278._4_4_ = (float)(double)CONCAT44(uVar69,uVar67);
        local_278._0_4_ = (float)(double)CONCAT44(uVar44,uVar43);
        local_278._8_4_ = (float)(double)CONCAT44(uVar81,uVar79);
        local_278._12_4_ = 0;
        local_268.m128_f32[1] = (float)(double)CONCAT44(uVar77,uVar75);
        local_268.m128_f32[2] = (float)(double)CONCAT44(uVar86,uVar84);
        local_268.m128_f32[3] = 0.0;
        if (pFVar11->bFirstTransform == false) {
          p_Var15 = &(pFVar11->Transform).Rotation;
        }
        else {
          p_Var15 = &local_288;
        }
        uVar6 = *(undefined8 *)((longlong)p_Var15 + 8);
        (pFVar11->PrevTransform).Rotation.m128_u64[0] = p_Var15->m128_u64[0];
        (pFVar11->PrevTransform).Rotation.m128_u64[1] = uVar6;
        uVar6 = p_Var15->m128_u64[3];
        (pFVar11->PrevTransform).Translation.m128_u64[0] =
             ((__m128 *)(p_Var15->m128_u64 + 2))->m128_u64[0];
        (pFVar11->PrevTransform).Translation.m128_u64[1] = uVar6;
        uVar6 = p_Var15->m128_u64[5];
        (pFVar11->PrevTransform).Scale3D.m128_u64[0] =
             ((__m128 *)(p_Var15->m128_u64 + 4))->m128_u64[0];
        (pFVar11->PrevTransform).Scale3D.m128_u64[1] = uVar6;
        pFVar11->bFirstTransform = false;
        (pFVar11->Transform).Rotation.m128_u64[0] =
             CONCAT44(local_288.m128_i32[1],local_288.m128_i32[0]);
        (pFVar11->Transform).Rotation.m128_u64[1] =
             CONCAT44(local_288.m128_i32[3],local_288.m128_i32[2]);
        _Var54.m128_f32[1] = (float)(double)CONCAT44(uVar69,uVar67);
        _Var54.m128_f32[0] = (float)(double)CONCAT44(uVar44,uVar43);
        _Var54.m128_f32[2] = (float)(double)CONCAT44(uVar81,uVar79);
        _Var54.m128_f32[3] = 0.0;
        (pFVar11->Transform).Translation = _Var54;
        pFVar11->DistanceFromCamera = fVar53;
        pFVar11->Radius = (float)iVar8;
        (pFVar11->Transform).Scale3D = local_268;
        uVar20 = local_3e0;
        uVar24 = local_404;
        local_380 = uVar43;
        uStack_37c = uVar44;
        uStack_378 = uVar67;
        uStack_374 = uVar69;
        local_368 = uVar71;
        uStack_364 = uVar73;
        uStack_360 = uVar75;
        uStack_35c = uVar77;
        goto LAB_14a84dd64;
      }
    }
    plVar23 = plVar23 + 0x16;
    uVar16 = (ulonglong)local_3f0;
  } while( true );
}

// OnConstruction @ 14a8506c0

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
AWN_ISKM_Character::OnConstruction(AWN_ISKM_Character *this,TTransform<double> *param_1)

{
  UWorld *this_00;
  UWN_ISKM_Subsystem *this_01;
  byte *pbVar1;
  
  if (((uint)this->_padding_ >> 4 & 1) != 0) {
    return;
  }
  if ((int)this->_padding_ == -1) {
    this_00 = AActor::GetWorld((AActor *)this);
    this_01 = UWorld::GetSubsystem<UWN_ISKM_Subsystem>(this_00);
    this->_padding_ = (longlong)this_01;
    UWN_ISKM_Subsystem::RegisterController(this_01,(IWN_ISKM_Controller *)&this->_padding_);
  }
  ReinitializeAnimComponents(this);
  pbVar1 = (byte *)(**(code **)(this->_padding_ + 0x18))(&this->_padding_);
  if ((*pbVar1 & 2) != 0) {
    DestroySkeletalMeshComponents(this);
    DestroyPartInstances(this);
    UpdatePlayModes(this);
    return;
  }
  DestroySkeletalMeshComponents(this);
  ReinitializePartInstances(this);
  UpdatePlayModes(this);
  return;
}

// PostInitializeComponents @ 14a850930

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_ISKM_Character::PostInitializeComponents(AWN_ISKM_Character *this)

{
  UWorld *this_00;
  UWN_ISKM_Subsystem *this_01;
  byte *pbVar1;
  
  if (((uint)this->_padding_ >> 4 & 1) == 0) {
    if ((int)this->_padding_ == -1) {
      this_00 = AActor::GetWorld((AActor *)this);
      this_01 = UWorld::GetSubsystem<UWN_ISKM_Subsystem>(this_00);
      this->_padding_ = (longlong)this_01;
      UWN_ISKM_Subsystem::RegisterController(this_01,(IWN_ISKM_Controller *)&this->_padding_);
    }
    ReinitializeAnimComponents(this);
    pbVar1 = (byte *)(**(code **)(this->_padding_ + 0x18))(&this->_padding_);
    if ((*pbVar1 & 2) == 0) {
      DestroySkeletalMeshComponents(this);
      ReinitializePartInstances(this);
    }
    else {
      DestroySkeletalMeshComponents(this);
      DestroyPartInstances(this);
    }
    UpdatePlayModes(this);
  }
  AActor::PostInitializeComponents((AActor *)this);
  return;
}

// RefreshAllComponentsAndInstances @ 14a850cc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_ISKM_Character::RefreshAllComponentsAndInstances(AWN_ISKM_Character *this)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  UWN_ISKM_Subsystem *this_00;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  FWN_ISKM_InstanceKey FVar11;
  uint *puVar12;
  UObject *pUVar13;
  UClass *pUVar14;
  FString *pFVar15;
  FName *pFVar16;
  USkeletalMeshComponent *pUVar17;
  UWN_ISKM_Profile *pUVar18;
  undefined4 extraout_var;
  longlong *plVar19;
  ulonglong uVar20;
  FScriptContainerElement *pFVar21;
  FScriptContainerElement *pFVar22;
  FScriptContainerElement *pFVar23;
  char cVar24;
  uint uVar25;
  uint local_res10 [2];
  uint local_res18;
  int local_res20;
  undefined1 local_90 [40];
  FName local_68;
  FString local_60 [2];
  
  bVar7 = false;
  bVar6 = false;
  local_res10[0] = 0;
  puVar12 = (uint *)(**(code **)(this->_padding_ + 0x18))();
  uVar1 = (this->PartInfos).ArrayNum;
  uVar20 = (ulonglong)(int)uVar1;
  local_90._16_8_ = (this->PartInfos).AllocatorInstance.Data;
  local_res18 = CONCAT31((uint3)(*puVar12 >> 9),(char)(*puVar12 >> 1)) & 0xffffff01;
  pFVar22 = (FScriptContainerElement *)(local_90._16_8_ + 0xa0);
  local_90._16_8_ = local_90._16_8_ + uVar20 * 0xb0;
  local_res20 = 0;
  uVar25 = local_res18;
  do {
    uVar8 = local_90._16_8_;
    if ((this->PartInfos).ArrayNum != (int)uVar20) {
      local_res10[0] = local_res10[0] & 0xffffff00;
      `TCheckedPointerIterator<FWN_ISKM_CharacterPartInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar22 + -0xa0 == (FScriptContainerElement *)uVar8) {
      return;
    }
    uVar2 = *(uint *)(pFVar22 + -0x8c);
    pFVar23 = (FScriptContainerElement *)0x0;
    if (uVar2 == 0xffffffff) {
LAB_14a851062:
      plVar19 = *(longlong **)pFVar22;
      cVar24 = '\x01';
LAB_14a851068:
      if (plVar19 != (longlong *)0x0) {
        (**(code **)(*plVar19 + 0x518))(plVar19,&FDetachmentTransformRules::KeepRelativeTransform);
        (**(code **)(**(longlong **)pFVar22 + 0x4a0))(*(longlong **)pFVar22,0);
        *(longlong *)pFVar22 = 0;
      }
    }
    else {
      uVar10 = 0;
      if ((int)uVar2 < (this->AnimInfos).ArrayNum) {
        uVar10 = ~uVar2 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar23 = (this->AnimInfos).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x90;
      if (*(longlong *)(pFVar23 + 0x88) == 0) goto LAB_14a851062;
      pUVar13 = TPersistentObjectPtr<FSoftObjectPath>::Get
                          ((TPersistentObjectPtr<FSoftObjectPath> *)(pFVar22 + -0x88));
      if (pUVar13 == (UObject *)0x0) {
        if (*(longlong *)(pFVar22 + -0x80) == 0) goto LAB_14a851062;
        FSoftObjectPath::TryLoad
                  ((FSoftObjectPath *)(pFVar22 + -0x80),(FUObjectSerializeContext *)0x0);
        pUVar13 = TPersistentObjectPtr<FSoftObjectPath>::Get
                            ((TPersistentObjectPtr<FSoftObjectPath> *)(pFVar22 + -0x88));
      }
      if (pUVar13 == (UObject *)0x0) goto LAB_14a851062;
      pUVar14 = Z_Construct_UClass_USkeletalMesh_NoRegister();
      iVar3 = (int)pUVar14->_padding_;
      if ((*(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38) < iVar3) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
          &pUVar14->_padding_)) goto LAB_14a851062;
      plVar19 = *(longlong **)pFVar22;
      cVar24 = (char)uVar25;
      if (cVar24 == '\0') goto LAB_14a851068;
      if (plVar19 == (longlong *)0x0) {
        if (*(FName *)(pFVar22 + -0x9c) == (FName)0x0) {
          bVar7 = true;
          ::FString::PrintfImpl((FString *)(local_90 + 0x18),L"Part_%d");
          pFVar15 = (FString *)(local_90 + 0x18);
        }
        else {
          bVar6 = true;
          pFVar15 = ::FName::ToString((FName *)(pFVar22 + -0x9c),local_60);
        }
        pFVar4 = (pFVar15->Data).AllocatorInstance.Data;
        (pFVar15->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        iVar3 = (pFVar15->Data).ArrayNum;
        (pFVar15->Data).ArrayNum = 0;
        (pFVar15->Data).ArrayMax = 0;
        if ((bVar6) &&
           (bVar6 = false, local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
           )) {
          FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
        }
        if ((bVar7) && (bVar7 = false, (void *)local_90._24_8_ != (void *)0x0)) {
          FMemory::Free((void *)local_90._24_8_);
        }
        pFVar21 = (FScriptContainerElement *)L"";
        if (iVar3 != 0) {
          pFVar21 = pFVar4;
        }
        pFVar16 = ::FName::FName(&local_68,(wchar_t *)pFVar21);
        pUVar17 = NewObject<USkeletalMeshComponent>
                            ((UObject *)this,*pFVar16,RF_NoFlags,(UObject *)0x0,false,
                             (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (pUVar17 != (USkeletalMeshComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pUVar17);
        }
        *(USkeletalMeshComponent **)pFVar22 = pUVar17;
        (**(code **)(pUVar17->_padding_ + 0x508))
                  (pUVar17,this->_padding_,&FAttachmentTransformRules::KeepRelativeTransform);
        UActorComponent::RegisterComponent(*(UActorComponent **)pFVar22);
        plVar19 = *(longlong **)pFVar22;
        local_90._8_8_ = *(undefined8 *)(*plVar19 + 0xb48);
        pUVar13 = TPersistentObjectPtr<FSoftObjectPath>::Get
                            ((TPersistentObjectPtr<FSoftObjectPath> *)(pFVar22 + -0x88));
        cVar24 = (char)local_res18;
        if (pUVar13 == (UObject *)0x0) {
LAB_14a850fea:
          pUVar13 = (UObject *)0x0;
        }
        else {
          pUVar14 = Z_Construct_UClass_USkeletalMesh_NoRegister();
          iVar3 = (int)pUVar14->_padding_;
          if ((*(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38) < iVar3) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
              &pUVar14->_padding_)) {
            cVar24 = (char)local_res18;
            goto LAB_14a850fea;
          }
        }
        (*(code *)local_90._8_8_)(plVar19,pUVar13);
        USkinnedMeshComponent::SetLeaderPoseComponent
                  (*(USkinnedMeshComponent **)pFVar22,*(USkinnedMeshComponent **)(pFVar23 + 0x88),
                   false,false);
        *(undefined1 *)(*(longlong *)pFVar22 + 0x804) = 0;
        uVar25 = local_res18;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
          uVar25 = local_res18;
        }
      }
    }
    if (cVar24 == '\0') {
      if (*(int *)(pFVar22 + 8) == -1) {
        this_00 = (UWN_ISKM_Subsystem *)this->_padding_;
        pUVar13 = TPersistentObjectPtr<FSoftObjectPath>::Get
                            ((TPersistentObjectPtr<FSoftObjectPath> *)(pFVar23 + 0x28));
        if (pUVar13 == (UObject *)0x0) {
LAB_14a8510d8:
          pUVar13 = (UObject *)0x0;
        }
        else {
          pUVar14 = UWN_ISKM_Profile::StaticClass();
          iVar3 = (int)pUVar14->_padding_;
          if ((*(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38) < iVar3) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) + (longlong)iVar3 * 8) !=
              &pUVar14->_padding_)) goto LAB_14a8510d8;
        }
        pUVar18 = (UWN_ISKM_Profile *)
                  TPersistentObjectPtr<FSoftObjectPath>::Get
                            ((TPersistentObjectPtr<FSoftObjectPath> *)(pFVar22 + -0x88));
        if (pUVar18 == (UWN_ISKM_Profile *)0x0) {
LAB_14a851111:
          pUVar18 = (UWN_ISKM_Profile *)0x0;
        }
        else {
          pUVar14 = Z_Construct_UClass_USkeletalMesh_NoRegister();
          iVar3 = (int)pUVar14->_padding_;
          if ((*(int *)(pUVar18->_padding_ + 0x38) < iVar3) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pUVar18->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
              &pUVar14->_padding_)) goto LAB_14a851111;
        }
        FVar11 = UWN_ISKM_Subsystem::AddInstance
                           (this_00,(USkeletalMesh *)local_90,pUVar18,(int)pUVar13);
        *(undefined4 *)(pFVar22 + 8) = *(undefined4 *)CONCAT44(extraout_var,FVar11.Value);
      }
    }
    else if (*(int *)(pFVar22 + 8) != -1) {
      UWN_ISKM_Subsystem::RemoveInstance
                ((UWN_ISKM_Subsystem *)this->_padding_,(FWN_ISKM_InstanceKey *)(pFVar22 + 8));
      *(undefined4 *)(pFVar22 + 8) = 0xffffffff;
    }
    local_res20 = local_res20 + 1;
    pFVar22 = pFVar22 + 0xb0;
    uVar20 = (ulonglong)uVar1;
  } while( true );
}

// ReinitializeAnimComponents @ 14a851dc0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall AWN_ISKM_Character::ReinitializeAnimComponents(AWN_ISKM_Character *this)

{
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  FName *pFVar10;
  UWN_ISKM_AnimComponent *pUVar11;
  FScriptContainerElement *pFVar12;
  UObject *pUVar13;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  FName local_res18;
  
  DestroyAnimComponents(this);
  pFVar3 = (this->AnimInfos).AllocatorInstance.Data;
  iVar1 = (this->AnimInfos).ArrayNum;
  pFVar12 = pFVar3 + 0x88;
  pUVar13 = (UObject *)0x0;
  do {
    if ((this->AnimInfos).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FWN_ISKM_CharacterAnimationInfo,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)(pFVar12 + -0x88);
    if (this_00 == (TPersistentObjectPtr<FSoftObjectPath> *)(pFVar3 + (longlong)iVar1 * 0x90)) {
      return;
    }
    pUVar8 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
    if (pUVar8 == (UObject *)0x0) {
      if ((((FSoftObjectPath *)(pFVar12 + -0x80))->AssetPath).PackageName != (FName)0x0) {
        FSoftObjectPath::TryLoad
                  ((FSoftObjectPath *)(pFVar12 + -0x80),(FUObjectSerializeContext *)0x0);
        pUVar8 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
        goto LAB_14a851e64;
      }
    }
    else {
LAB_14a851e64:
      if (pUVar8 != (UObject *)0x0) {
        pUVar9 = Z_Construct_UClass_USkeletalMesh_NoRegister();
        iVar2 = (int)pUVar9->_padding_;
        if ((iVar2 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar9->_padding_)) {
          pUVar8 = TPersistentObjectPtr<FSoftObjectPath>::Get
                             ((TPersistentObjectPtr<FSoftObjectPath> *)(pFVar12 + -0x60));
          if (pUVar8 == (UObject *)0x0) {
            if (*(longlong *)(pFVar12 + -0x58) == 0) goto LAB_14a85207b;
            FSoftObjectPath::TryLoad
                      ((FSoftObjectPath *)(pFVar12 + -0x58),(FUObjectSerializeContext *)0x0);
            pUVar8 = TPersistentObjectPtr<FSoftObjectPath>::Get
                               ((TPersistentObjectPtr<FSoftObjectPath> *)(pFVar12 + -0x60));
          }
          if (pUVar8 != (UObject *)0x0) {
            pUVar9 = UWN_ISKM_Profile::StaticClass();
            iVar2 = (int)pUVar9->_padding_;
            if ((iVar2 <= *(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
                &pUVar9->_padding_)) {
              if (*(longlong *)pFVar12 != 0) {
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("animComp == nullptr",
                                   "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_Character.cpp"
                                   ,0x148,L"");
                if (bVar7) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              pFVar10 = ::FName::FName(&local_res18,"AnimComp");
              pUVar11 = NewObject<UWN_ISKM_AnimComponent>
                                  ((UObject *)this,*pFVar10,RF_NoFlags,(UObject *)0x0,false,
                                   (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (pUVar11 != (UWN_ISKM_AnimComponent *)0x0)) {
                UE::GC::MarkAsReachable((UObject *)pUVar11);
              }
              *(UWN_ISKM_AnimComponent **)pFVar12 = pUVar11;
              pUVar8 = (UObject *)&this->_padding_;
              if (this == (AWN_ISKM_Character *)0x0) {
                pUVar8 = pUVar13;
              }
              pUVar11->ISKMController = (IWN_ISKM_Controller *)pUVar8;
              pUVar8 = TPersistentObjectPtr<FSoftObjectPath>::Get
                                 ((TPersistentObjectPtr<FSoftObjectPath> *)(pFVar12 + -0x60));
              if (pUVar8 == (UObject *)0x0) {
LAB_14a851fc2:
                pUVar8 = pUVar13;
              }
              else {
                pUVar9 = UWN_ISKM_Profile::StaticClass();
                iVar2 = (int)pUVar9->_padding_;
                if ((*(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38) < iVar2) ||
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar2 * 8)
                    != &pUVar9->_padding_)) goto LAB_14a851fc2;
              }
              lVar4 = *(longlong *)pFVar12;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UObject *)0x0)
                 ) {
                UE::GC::MarkAsReachable(pUVar8);
              }
              *(UObject **)(lVar4 + 0x1060) = pUVar8;
              local_res10 = 0;
              (**(code **)(**(longlong **)pFVar12 + 0x508))
                        (*(longlong **)pFVar12,this->_padding_,
                         &FAttachmentTransformRules::KeepRelativeTransform);
              UActorComponent::RegisterComponent(*(UActorComponent **)pFVar12);
              USceneComponent::SetVisibility(*(USceneComponent **)pFVar12,false,Propagate);
              plVar5 = *(longlong **)pFVar12;
              pcVar6 = *(code **)(*plVar5 + 0xb48);
              pUVar8 = TPersistentObjectPtr<FSoftObjectPath>::Get
                                 ((TPersistentObjectPtr<FSoftObjectPath> *)(pFVar12 + -0x88));
              if (pUVar8 == (UObject *)0x0) {
LAB_14a852063:
                pUVar8 = pUVar13;
              }
              else {
                pUVar9 = Z_Construct_UClass_USkeletalMesh_NoRegister();
                iVar2 = (int)pUVar9->_padding_;
                if ((*(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38) < iVar2) ||
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar2 * 8)
                    != &pUVar9->_padding_)) goto LAB_14a852063;
              }
              (*pcVar6)(plVar5,pUVar8,1);
              *(undefined1 *)(*(longlong *)pFVar12 + 0x804) = 0;
            }
          }
        }
      }
    }
LAB_14a85207b:
    pFVar12 = pFVar12 + 0x90;
  } while( true );
}

// ReinitializePartInstances @ 14a8520b0

void __thiscall AWN_ISKM_Character::ReinitializePartInstances(AWN_ISKM_Character *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  UWN_ISKM_Subsystem *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FWN_ISKM_InstanceKey FVar8;
  UObject *pUVar9;
  UClass *pUVar10;
  UWN_ISKM_Profile *pUVar11;
  undefined4 extraout_var;
  longlong lVar12;
  uint uVar13;
  longlong local_res10;
  
  DestroyPartInstances(this);
  local_res10 = (longlong)(this->PartInfos).ArrayNum;
  uVar13 = 0;
  if (0 < local_res10) {
    lVar12 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar13 < (this->PartInfos).ArrayNum) {
        uVar6 = ~uVar13 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (this->PartInfos).AllocatorInstance.Data;
      uVar6 = *(uint *)(pFVar2 + lVar12 + 0x14);
      if (uVar6 != 0xffffffff) {
        uVar7 = 0;
        if ((int)uVar6 < (this->AnimInfos).ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->AnimInfos).AllocatorInstance.Data;
        if (*(longlong *)(pFVar3 + (longlong)(int)uVar6 * 0x90 + 0x88) != 0) {
          pUVar9 = TPersistentObjectPtr<FSoftObjectPath>::Get
                             ((TPersistentObjectPtr<FSoftObjectPath> *)(pFVar2 + lVar12 + 0x18));
          if (pUVar9 == (UObject *)0x0) {
            if (*(longlong *)(pFVar2 + lVar12 + 0x20) == 0) goto LAB_14a852302;
            FSoftObjectPath::TryLoad
                      ((FSoftObjectPath *)(pFVar2 + lVar12 + 0x20),(FUObjectSerializeContext *)0x0);
            pUVar9 = TPersistentObjectPtr<FSoftObjectPath>::Get
                               ((TPersistentObjectPtr<FSoftObjectPath> *)(pFVar2 + lVar12 + 0x18));
          }
          if (pUVar9 != (UObject *)0x0) {
            pUVar10 = Z_Construct_UClass_USkeletalMesh_NoRegister();
            iVar1 = (int)pUVar10->_padding_;
            if ((iVar1 <= *(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38)) &&
               ((longlong *)
                *(undefined1 **)
                 (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
                &pUVar10->_padding_)) {
              if ((*(int *)(pFVar2 + lVar12 + 0xa8) != -1) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("key.IsValid() == false",
                                     "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_Character.cpp"
                                     ,0x1c5,L""), bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              this_00 = (UWN_ISKM_Subsystem *)this->_padding_;
              pUVar9 = TPersistentObjectPtr<FSoftObjectPath>::Get
                                 ((TPersistentObjectPtr<FSoftObjectPath> *)
                                  (pFVar3 + (longlong)(int)uVar6 * 0x90 + 0x28));
              if (pUVar9 == (UObject *)0x0) {
LAB_14a8522a1:
                pUVar9 = (UObject *)0x0;
              }
              else {
                pUVar10 = UWN_ISKM_Profile::StaticClass();
                iVar1 = (int)pUVar10->_padding_;
                if ((*(int *)(*(longlong *)&pUVar9->field_0x10 + 0x38) < iVar1) ||
                   ((longlong *)
                    *(undefined1 **)
                     (*(longlong *)(*(longlong *)&pUVar9->field_0x10 + 0x30) + (longlong)iVar1 * 8)
                    != &pUVar10->_padding_)) goto LAB_14a8522a1;
              }
              pUVar11 = (UWN_ISKM_Profile *)
                        TPersistentObjectPtr<FSoftObjectPath>::Get
                                  ((TPersistentObjectPtr<FSoftObjectPath> *)(pFVar2 + lVar12 + 0x18)
                                  );
              if (pUVar11 == (UWN_ISKM_Profile *)0x0) {
LAB_14a8522d7:
                pUVar11 = (UWN_ISKM_Profile *)0x0;
              }
              else {
                pUVar10 = Z_Construct_UClass_USkeletalMesh_NoRegister();
                iVar1 = (int)pUVar10->_padding_;
                if ((*(int *)(pUVar11->_padding_ + 0x38) < iVar1) ||
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar1 * 8)
                    != &pUVar10->_padding_)) goto LAB_14a8522d7;
              }
              FVar8 = UWN_ISKM_Subsystem::AddInstance
                                (this_00,(USkeletalMesh *)&stack0x00000008,pUVar11,(int)pUVar9);
              *(undefined4 *)(pFVar2 + lVar12 + 0xa8) =
                   *(undefined4 *)CONCAT44(extraout_var,FVar8.Value);
            }
          }
        }
      }
LAB_14a852302:
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + 0xb0;
      local_res10 = local_res10 + -1;
    } while (local_res10 != 0);
  }
  return;
}

// ReinitializeSkeletalMeshComponents @ 14a852350

void __thiscall AWN_ISKM_Character::ReinitializeSkeletalMeshComponents(AWN_ISKM_Character *this)

{
  int iVar1;
  longlong *plVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 auStackX_8 [8];
  
  iVar1 = (this->PartInfos).ArrayNum;
  pFVar3 = (this->PartInfos).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0xb0;
  while( true ) {
    if ((this->PartInfos).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FWN_ISKM_CharacterPartInfo,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_8);
    }
    if (pFVar3 == pFVar4) break;
    plVar2 = *(longlong **)(pFVar3 + 0xa0);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x518))(plVar2,&FDetachmentTransformRules::KeepRelativeTransform);
      (**(code **)(**(longlong **)(pFVar3 + 0xa0) + 0x4a0))(*(longlong **)(pFVar3 + 0xa0),0);
      *(undefined8 *)(pFVar3 + 0xa0) = 0;
    }
    pFVar3 = pFVar3 + 0xb0;
  }
  return;
}

// SetAnimAsset @ 14a853ce0

void __thiscall
AWN_ISKM_Character::SetAnimAsset
          (AWN_ISKM_Character *this,int param_1,TSoftObjectPtr<UAnimationAsset> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  int *local_res8;
  int local_res10 [2];
  
  iVar1 = (this->AnimInfos).ArrayNum;
  local_res10[0] = param_1;
  if (param_1 < iVar1) {
    uVar7 = 0;
    if (param_1 < iVar1) {
      uVar7 = (uint)~param_1 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar2 = (this->AnimInfos).AllocatorInstance.Data;
    pFVar2[(longlong)param_1 * 0x90 + 0x50] = (FScriptContainerElement)0x0;
    *(undefined8 *)(pFVar2 + (longlong)param_1 * 0x90 + 0x58) =
         *(undefined8 *)&param_2->SoftObjectPtr;
    uVar5 = *(undefined8 *)&(param_2->SoftObjectPtr).field_0x10;
    *(undefined8 *)(pFVar2 + (longlong)param_1 * 0x90 + 0x60) =
         *(undefined8 *)&(param_2->SoftObjectPtr).field_0x8;
    *(undefined8 *)(pFVar2 + (longlong)param_1 * 0x90 + 0x68) = uVar5;
    FUtf8String::operator=
              ((FUtf8String *)(pFVar2 + (longlong)param_1 * 0x90 + 0x70),
               (FUtf8String *)&(param_2->SoftObjectPtr).field_0x18);
    UpdatePlayModes(this);
  }
  else {
    local_res8 = local_res10;
    `AWN_ISKM_Character::SetAnimAsset'::__l5::<lambda_1>::operator()(&local_res8);
  }
  pvVar3 = *(void **)&(param_2->SoftObjectPtr).field_0x18;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  return;
}

// SetAnimClass @ 14a853dc0

void __thiscall
AWN_ISKM_Character::SetAnimClass
          (AWN_ISKM_Character *this,int param_1,TSubclassOf<UAnimInstance> param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int *local_res8;
  int local_res10 [2];
  
  iVar1 = (this->AnimInfos).ArrayNum;
  local_res10[0] = param_1;
  if (iVar1 <= param_1) {
    local_res8 = local_res10;
    `AWN_ISKM_Character::SetAnimClass'::__l5::<lambda_1>::operator()(&local_res8);
    return;
  }
  uVar5 = 0;
  if (param_1 < iVar1) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->AnimInfos).AllocatorInstance.Data;
  pFVar2[(longlong)param_1 * 0x90 + 0x50] = (FScriptContainerElement)0x1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (*(UObject **)param_2.Class.field0_0x0 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(*(UObject **)param_2.Class.field0_0x0);
  }
  *(undefined8 *)(pFVar2 + (longlong)param_1 * 0x90 + 0x80) =
       *(undefined8 *)param_2.Class.field0_0x0;
  UpdatePlayModes(this);
  return;
}

// SetAnimCustom @ 14a853ea0

void __thiscall AWN_ISKM_Character::SetAnimCustom(AWN_ISKM_Character *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int *local_res8;
  int local_res10 [2];
  
  iVar1 = (this->AnimInfos).ArrayNum;
  local_res10[0] = param_1;
  if (iVar1 <= param_1) {
    local_res8 = local_res10;
    `AWN_ISKM_Character::SetAnimCustom'::__l5::<lambda_1>::operator()(&local_res8);
    return;
  }
  uVar4 = 0;
  if (param_1 < iVar1) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
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
  (this->AnimInfos).AllocatorInstance.Data[(longlong)param_1 * 0x90 + 0x50] =
       (FScriptContainerElement)0x2;
  UpdatePlayMode(this,local_res10[0]);
  return;
}

// StaticRegisterNativesAWN_ISKM_Character @ 14a855eb0

void __cdecl AWN_ISKM_Character::StaticRegisterNativesAWN_ISKM_Character(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_AWN_ISKM_Character_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdatePlayMode @ 14a858a20

void __thiscall AWN_ISKM_Character::UpdatePlayMode(AWN_ISKM_Character *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  USkeletalMeshComponent *this_00;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  UAnimationAsset *pUVar7;
  UClass *pUVar8;
  UAnimationAsset *pUVar9;
  int *local_res8;
  int local_res10 [2];
  
  local_res10[0] = param_1;
  if ((this->AnimInfos).ArrayNum <= param_1) {
    local_res8 = local_res10;
    `AWN_ISKM_Character::UpdatePlayMode'::__l5::<lambda_1>::operator()(&local_res8);
    return;
  }
  pUVar9 = (UAnimationAsset *)0x0;
  uVar6 = 0;
  if (param_1 < (this->AnimInfos).ArrayNum) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = (this->AnimInfos).AllocatorInstance.Data;
  this_00 = *(USkeletalMeshComponent **)(pFVar2 + (longlong)param_1 * 0x90 + 0x88);
  if (this_00 == (USkeletalMeshComponent *)0x0) {
    return;
  }
  if (pFVar2[(longlong)param_1 * 0x90 + 0x50] != (FScriptContainerElement)0x0) {
    pcVar4 = *(code **)(this_00->_padding_ + 0x420);
    if (pFVar2[(longlong)param_1 * 0x90 + 0x50] != (FScriptContainerElement)0x1) {
      (*pcVar4)(this_00,0);
      USkeletalMeshComponent::SetAnimationMode(this_00,AnimationCustomMode,true);
      return;
    }
    (*pcVar4)();
    USkeletalMeshComponent::SetAnimationMode(this_00,AnimationBlueprint,true);
    lVar3 = *(longlong *)(pFVar2 + (longlong)param_1 * 0x90 + 0x80);
    pcVar4 = *(code **)(this_00->_padding_ + 0xc70);
    if ((lVar3 != 0) &&
       (pUVar8 = Z_Construct_UClass_UAnimInstance_NoRegister(), pUVar8 != (UClass *)0x0)) {
      iVar1 = (int)pUVar8->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar8->_padding_)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      if (bVar5) {
        pUVar9 = *(UAnimationAsset **)(pFVar2 + (longlong)param_1 * 0x90 + 0x80);
      }
    }
    (*pcVar4)(this_00,pUVar9);
    (**(code **)(this_00->_padding_ + 0xc88))(this_00,0);
    return;
  }
  (**(code **)(this_00->_padding_ + 0x420))(this_00);
  pUVar7 = (UAnimationAsset *)
           TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)
                      (pFVar2 + (longlong)param_1 * 0x90 + 0x58));
  if (pUVar7 == (UAnimationAsset *)0x0) {
    if (*(longlong *)(pFVar2 + (longlong)param_1 * 0x90 + 0x60) != 0) {
      FSoftObjectPath::TryLoad
                ((FSoftObjectPath *)(pFVar2 + (longlong)param_1 * 0x90 + 0x60),
                 (FUObjectSerializeContext *)0x0);
      pUVar7 = (UAnimationAsset *)
               TPersistentObjectPtr<FSoftObjectPath>::Get
                         ((TPersistentObjectPtr<FSoftObjectPath> *)
                          (pFVar2 + (longlong)param_1 * 0x90 + 0x58));
      goto LAB_14a858b14;
    }
  }
  else {
LAB_14a858b14:
    if (pUVar7 != (UAnimationAsset *)0x0) {
      pUVar8 = Z_Construct_UClass_UAnimationAsset_NoRegister();
      iVar1 = (int)pUVar8->_padding_;
      if ((iVar1 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar8->_padding_)) goto LAB_14a858b3f;
    }
  }
  pUVar7 = pUVar9;
LAB_14a858b3f:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UAnimationAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar7);
  }
  (this_00->AnimationData).AnimToPlay.field0_0x0.DebugPtr = pUVar7;
  USkeletalMeshComponent::SetAnimationMode(this_00,AnimationSingleNode,true);
  USkeletalMeshComponent::SetAnimation(this_00,pUVar7);
  USkeletalMeshComponent::Play(this_00,true);
  return;
}

// UpdatePlayModes @ 14a858c60

void __thiscall AWN_ISKM_Character::UpdatePlayModes(AWN_ISKM_Character *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  USkeletalMeshComponent *this_00;
  code *pcVar3;
  bool bVar4;
  UAnimationAsset *pUVar5;
  UClass *pUVar6;
  int iVar7;
  longlong lVar8;
  int local_res8 [2];
  int local_res10;
  int *local_res18;
  
  local_res10 = (this->AnimInfos).ArrayNum;
  iVar7 = 0;
  if (0 < local_res10) {
    lVar8 = 0;
    do {
      local_res8[0] = iVar7;
      if (iVar7 < (this->AnimInfos).ArrayNum) {
        if (((this->AnimInfos).ArrayNum <= iVar7) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar2 = (this->AnimInfos).AllocatorInstance.Data;
        this_00 = *(USkeletalMeshComponent **)(pFVar2 + lVar8 + 0x88);
        if (this_00 != (USkeletalMeshComponent *)0x0) {
          if (pFVar2[lVar8 + 0x50] == (FScriptContainerElement)0x0) {
            (**(code **)(this_00->_padding_ + 0x420))(this_00);
            pUVar5 = (UAnimationAsset *)
                     TPersistentObjectPtr<FSoftObjectPath>::Get
                               ((TPersistentObjectPtr<FSoftObjectPath> *)(pFVar2 + lVar8 + 0x58));
            if (pUVar5 == (UAnimationAsset *)0x0) {
              if (*(longlong *)(pFVar2 + lVar8 + 0x60) != 0) {
                FSoftObjectPath::TryLoad
                          ((FSoftObjectPath *)(pFVar2 + lVar8 + 0x60),
                           (FUObjectSerializeContext *)0x0);
                pUVar5 = (UAnimationAsset *)
                         TPersistentObjectPtr<FSoftObjectPath>::Get
                                   ((TPersistentObjectPtr<FSoftObjectPath> *)(pFVar2 + lVar8 + 0x58)
                                   );
                goto LAB_14a858d6b;
              }
LAB_14a858d93:
              pUVar5 = (UAnimationAsset *)0x0;
            }
            else {
LAB_14a858d6b:
              if (pUVar5 == (UAnimationAsset *)0x0) goto LAB_14a858d93;
              pUVar6 = Z_Construct_UClass_UAnimationAsset_NoRegister();
              iVar1 = (int)pUVar6->_padding_;
              if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar1) ||
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
                  &pUVar6->_padding_)) goto LAB_14a858d93;
            }
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (pUVar5 != (UAnimationAsset *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)pUVar5);
            }
            (this_00->AnimationData).AnimToPlay.field0_0x0.DebugPtr = pUVar5;
            USkeletalMeshComponent::SetAnimationMode(this_00,AnimationSingleNode,true);
            USkeletalMeshComponent::SetAnimation(this_00,pUVar5);
            USkeletalMeshComponent::Play(this_00,true);
          }
          else {
            pcVar3 = *(code **)(this_00->_padding_ + 0x420);
            if (pFVar2[lVar8 + 0x50] == (FScriptContainerElement)0x1) {
              (*pcVar3)();
              USkeletalMeshComponent::SetAnimationMode(this_00,AnimationBlueprint,true);
              pcVar3 = *(code **)(this_00->_padding_ + 0xc70);
              if (*(longlong *)(pFVar2 + lVar8 + 0x80) != 0) {
                Z_Construct_UClass_UAnimInstance_NoRegister();
              }
              (*pcVar3)(this_00);
              (**(code **)(this_00->_padding_ + 0xc88))(this_00);
            }
            else {
              (*pcVar3)(this_00,0);
              USkeletalMeshComponent::SetAnimationMode(this_00,AnimationCustomMode,true);
            }
          }
        }
      }
      else {
        local_res18 = local_res8;
        `AWN_ISKM_Character::UpdatePlayMode'::__l5::<lambda_1>::operator()(&local_res18);
      }
      iVar7 = iVar7 + 1;
      lVar8 = lVar8 + 0x90;
    } while (iVar7 < local_res10);
  }
  return;
}

// execSetAnimAsset @ 14a85a180

void __cdecl AWN_ISKM_Character::execSetAnimAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  ForAnyElementType _Src;
  bool bVar3;
  uint uVar4;
  size_t _Size;
  longlong lVar5;
  uint local_res8 [2];
  uint local_res10 [2];
  uint *local_res20;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  FUtf8String local_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  FUtf8String local_38;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_60.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.Data.ArrayNum = 0;
  local_60.Data.ArrayMax = 0;
  local_78 = 0;
  uStack_68 = 0;
  local_70 = 0;
  FUtf8String::Reset(&local_60,0);
  FSoftObjectProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_78,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_78);
  }
  _Src.Data = local_60.Data.AllocatorInstance.Data;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  _Size = (size_t)local_60.Data.ArrayNum;
  local_50 = local_78;
  local_38.Data.ArrayNum = local_60.Data.ArrayNum;
  local_48 = local_70;
  uStack_40 = uStack_68;
  if (local_60.Data.ArrayNum == 0) {
    local_38.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_60.Data.ArrayNum,0,(ForAnyElementType *)&local_38,local_60.Data.ArrayNum,
               &local_38.Data.ArrayMax);
    memcpy(local_38.Data.AllocatorInstance.Data,_Src.Data,_Size);
  }
  lVar5 = (longlong)(int)local_res8[0];
  local_res10[0] = local_res8[0];
  if ((int)local_res8[0] < *(int *)&param_1[0x14].field_0x8) {
    uVar4 = 0;
    if ((int)local_res8[0] < *(int *)&param_1[0x14].field_0x8) {
      uVar4 = ~local_res8[0] >> 0x1f;
    }
    if (uVar4 == 0) {
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
    lVar5 = lVar5 * 0x90 + *(longlong *)(param_1 + 0x14);
    *(undefined1 *)(lVar5 + 0x50) = 0;
    *(undefined8 *)(lVar5 + 0x58) = local_50;
    *(undefined8 *)(lVar5 + 0x60) = local_48;
    *(undefined8 *)(lVar5 + 0x68) = uStack_40;
    FUtf8String::operator=((FUtf8String *)(lVar5 + 0x70),&local_38);
    UpdatePlayModes((AWN_ISKM_Character *)param_1);
  }
  else {
    local_res20 = local_res10;
    `AWN_ISKM_Character::SetAnimAsset'::__l5::<lambda_1>::operator()(&local_res20);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetAnimClass @ 14a85a380

void __cdecl AWN_ISKM_Character::execSetAnimClass(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  UObject *pUVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint local_res8 [2];
  uint local_res10 [2];
  UObject *local_res20;
  uint *local_28 [2];
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pUVar3 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res20 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res20);
  }
  lVar6 = (longlong)(int)local_res8[0];
  local_res10[0] = local_res8[0];
  if (*(int *)&param_1[0x14].field_0x8 <= (int)local_res8[0]) {
    local_28[0] = local_res10;
    `AWN_ISKM_Character::SetAnimClass'::__l5::<lambda_1>::operator()(local_28);
    return;
  }
  uVar5 = 0;
  if ((int)local_res8[0] < *(int *)&param_1[0x14].field_0x8) {
    uVar5 = ~local_res8[0] >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar6 = lVar6 * 0x90 + *(longlong *)(param_1 + 0x14);
  *(undefined1 *)(lVar6 + 0x50) = 1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar3);
  }
  *(UObject **)(lVar6 + 0x80) = pUVar3;
  UpdatePlayModes((AWN_ISKM_Character *)param_1);
  return;
}

// execSetAnimCustom @ 14a85a500

void __cdecl AWN_ISKM_Character::execSetAnimCustom(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  uint local_res8 [2];
  uint local_res10 [4];
  uint *local_res20;
  
  local_res8[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar4 = (longlong)(int)local_res8[0];
  local_res10[0] = local_res8[0];
  if (*(int *)&param_1[0x14].field_0x8 <= (int)local_res8[0]) {
    local_res20 = local_res10;
    `AWN_ISKM_Character::SetAnimCustom'::__l5::<lambda_1>::operator()(&local_res20);
    return;
  }
  uVar5 = 0;
  if ((int)local_res8[0] < *(int *)&param_1[0x14].field_0x8) {
    uVar5 = ~local_res8[0] >> 0x1f;
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
  *(undefined1 *)(*(longlong *)(param_1 + 0x14) + 0x50 + lVar4 * 0x90) = 2;
  UpdatePlayMode((AWN_ISKM_Character *)param_1,local_res10[0]);
  return;
}

// operator() @ 150555ef0

bool __thiscall `AWN_ISKM_Character::SetAnimAsset'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8994161026815492322>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8994161026815492322>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150555f40

bool __thiscall `AWN_ISKM_Character::SetAnimClass'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8994161026815492337>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8994161026815492337>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150555f90

bool __thiscall `AWN_ISKM_Character::SetAnimCustom'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8994161026815492352>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8994161026815492352>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150555fe0

bool __thiscall `AWN_ISKM_Character::UpdatePlayMode'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8994161026815492366>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8994161026815492366>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

