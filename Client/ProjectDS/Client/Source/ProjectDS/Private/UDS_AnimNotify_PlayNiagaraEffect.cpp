// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 9

// StaticClass @ 14b416010

UClass * __cdecl UDS_AnimNotify_PlayNiagaraEffect::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotify_PlayNiagaraEffect.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotify_PlayNiagaraEffect",
               &Z_Registration_Info_UClass_UDS_AnimNotify_PlayNiagaraEffect.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotify_PlayNiagaraEffect,0xe0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AnimNotify_PlayNiagaraEffect>,
               InternalVTableHelperCtorCaller<UDS_AnimNotify_PlayNiagaraEffect>,local_res8,
               UAnimNotify_PlayNiagaraEffect::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotify_PlayNiagaraEffect.InnerSingleton;
}

// UDS_AnimNotify_PlayNiagaraEffect @ 14b41b600

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UDS_AnimNotify_PlayNiagaraEffect * __thiscall
UDS_AnimNotify_PlayNiagaraEffect::UDS_AnimNotify_PlayNiagaraEffect
          (UDS_AnimNotify_PlayNiagaraEffect *this,FVTableHelper *param_1)

{
  UAnimNotify_PlayNiagaraEffect::UAnimNotify_PlayNiagaraEffect
            ((UAnimNotify_PlayNiagaraEffect *)this,param_1);
  this->bIsFollowOwnerActorVisiblity = true;
  this->bTriggerOnBlendOut = false;
  *(undefined ***)this = &___7UDS_AnimNotify_PlayNiagaraEffect__6B_;
  return this;
}

// UDS_AnimNotify_PlayNiagaraEffect @ 14b41b630

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UDS_AnimNotify_PlayNiagaraEffect * __thiscall
UDS_AnimNotify_PlayNiagaraEffect::UDS_AnimNotify_PlayNiagaraEffect
          (UDS_AnimNotify_PlayNiagaraEffect *this)

{
  UAnimNotify_PlayNiagaraEffect::UAnimNotify_PlayNiagaraEffect
            ((UAnimNotify_PlayNiagaraEffect *)this);
  this->bIsFollowOwnerActorVisiblity = true;
  this->bTriggerOnBlendOut = false;
  *(undefined ***)this = &___7UDS_AnimNotify_PlayNiagaraEffect__6B_;
  return this;
}

// ~UDS_AnimNotify_PlayNiagaraEffect @ 14b41bc90

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UDS_AnimNotify_PlayNiagaraEffect::~UDS_AnimNotify_PlayNiagaraEffect
          (UDS_AnimNotify_PlayNiagaraEffect *this)

{
  *(undefined ***)this = &___7UDS_AnimNotify_PlayNiagaraEffect__6B_;
  UAnimNotify_PlayNiagaraEffect::~UAnimNotify_PlayNiagaraEffect
            ((UAnimNotify_PlayNiagaraEffect *)this);
  return;
}

// GetPrivateStaticClass @ 14b41de50

UClass * __cdecl UDS_AnimNotify_PlayNiagaraEffect::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_AnimNotify_PlayNiagaraEffect.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_AnimNotify_PlayNiagaraEffect",
               &Z_Registration_Info_UClass_UDS_AnimNotify_PlayNiagaraEffect.InnerSingleton,
               StaticRegisterNativesUDS_AnimNotify_PlayNiagaraEffect,0xe0,0x10,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_AnimNotify_PlayNiagaraEffect>,
               InternalVTableHelperCtorCaller<UDS_AnimNotify_PlayNiagaraEffect>,local_res8,
               UAnimNotify_PlayNiagaraEffect::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_AnimNotify_PlayNiagaraEffect.InnerSingleton;
}

// StaticRegisterNativesUDS_AnimNotify_PlayNiagaraEffect @ 14b41e2c0

void __cdecl
UDS_AnimNotify_PlayNiagaraEffect::StaticRegisterNativesUDS_AnimNotify_PlayNiagaraEffect(void)

{
  return;
}

// operator() @ 14b8b3a30

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

void __thiscall
`UDS_AnimNotify_PlayNiagaraEffect::SpawnEffect'::__l16::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  TVector<double>_u_0 local_28;
  
  lVar1 = *(longlong *)((longlong)this + 8);
  local_28._s_0.X = *(double *)(lVar1 + 0x40);
  local_28._s_0.Y = *(double *)(lVar1 + 0x48);
  local_28._s_0.Z = *(double *)(lVar1 + 0x50);
  USceneComponent::SetRelativeLocation_Direct
            ((USceneComponent *)**(undefined8 **)this,(TVector<double> *)&local_28._s_0);
  lVar1 = *(longlong *)((longlong)this + 8);
  local_28._s_0.X = *(double *)(lVar1 + 0x58);
  local_28._s_0.Y = *(double *)(lVar1 + 0x60);
  local_28._s_0.Z = *(double *)(lVar1 + 0x68);
  USceneComponent::SetRelativeRotation_Direct
            ((USceneComponent *)**(undefined8 **)this,(TRotator<double> *)&local_28._s_0);
  local_28._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
  local_28._s_0.Y = _UNK_150689688;
  local_28._s_0.Z = __real_3ff0000000000000;
  USceneComponent::SetRelativeScale3D_Direct
            ((USceneComponent *)**(undefined8 **)this,(TVector<double> *)&local_28._s_0);
  return;
}

// Notify @ 14b8d2ee0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UDS_AnimNotify_PlayNiagaraEffect::Notify
          (UDS_AnimNotify_PlayNiagaraEffect *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2,FAnimNotifyEventReference *param_3)

{
  int iVar1;
  FWeakObjectPtr FVar2;
  UDS_EffectManager *this_00;
  UClass *pUVar3;
  UObject *pUVar4;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_18;
  UObject *local_10;
  
  if ((this->bTriggerOnBlendOut == false) && (param_3->bActiveContext == false)) {
    return;
  }
  UAnimNotify_PlayNiagaraEffect::Notify
            ((UAnimNotify_PlayNiagaraEffect *)this,param_1,param_2,param_3);
  if (this->bIsFollowOwnerActorVisiblity != true) {
    return;
  }
  this_00 = UDS_EffectManager::GetInst();
  if (this_00 == (UDS_EffectManager *)0x0) {
    return;
  }
  pUVar4 = *(UObject **)&this->field_0x90;
  if (pUVar4 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar4->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar4->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) goto LAB_14b8d2f65;
  }
  pUVar4 = (UObject *)0x0;
LAB_14b8d2f65:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_10 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_10);
  FVar2 = local_res8;
  pUVar4 = (UObject *)param_1->_padding_;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  local_18.ObjectIndex = 0;
  local_18.ObjectSerialNumber = 0;
  local_10 = pUVar4;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar4);
  }
  FWeakObjectPtr::operator=(&local_18,(FObjectPtr)&local_10);
  UDS_EffectManager::AddEffectListMap
            (this_00,(TWeakObjectPtr<AActor,FWeakObjectPtr>)local_18,
             (TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>)FVar2);
  return;
}

// SpawnEffect @ 14b8ebef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UFXSystemComponent * __thiscall
UDS_AnimNotify_PlayNiagaraEffect::SpawnEffect
          (UDS_AnimNotify_PlayNiagaraEffect *this,USkeletalMeshComponent *param_1,
          UAnimSequenceBase *param_2)

{
  FName FVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  UFXSystemComponent *pUVar10;
  UDS_LogManager *pUVar11;
  UWorld *pUVar12;
  FNiagaraWorldManager *this_00;
  TRotator<double> *pTVar13;
  wchar_t *pwVar14;
  UWorld *pUVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
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
  double dVar39;
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined4 uVar43;
  undefined4 uVar44;
  undefined1 auVar45 [16];
  double dVar46;
  double dVar50;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined4 uVar51;
  undefined4 uVar52;
  undefined1 auStackY_368 [32];
  UDS_NiagaraComponent *local_338;
  UDS_NiagaraComponent **local_330;
  UDS_AnimNotify_PlayNiagaraEffect *local_328;
  double local_310;
  double local_2f8;
  TVector<double>_u_0 local_2e8;
  TRotator<double> local_2c8;
  TVector<double>_u_0 local_2a8;
  TVector<double>_u_0 local_288;
  TVector<double>_u_0 local_268;
  undefined1 local_248 [16];
  double local_238;
  double dStack_230;
  TRotator<double> local_228;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  double dStack_1b0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1a8;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_368;
  local_338 = (UDS_NiagaraComponent *)0x0;
  if (param_1 == (USkeletalMeshComponent *)0x0) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4498122204038299598>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Animation\\Notify\\DS_AnimNotify_PlayNiagaraEffect.cpp"
                       ,0x32,"false");
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      pUVar10 = (UFXSystemComponent *)(*pcVar2)();
      return pUVar10;
    }
    pUVar11 = UDS_LogManager::GetInst();
    if (pUVar11 == (UDS_LogManager *)0x0) {
      return (UFXSystemComponent *)local_338;
    }
    pUVar11 = UDS_LogManager::GetInst();
    local_1a8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_1a8,"UDS_AnimNotify_PlayNiagaraEffect::SpawnEffect",0x2d,Yes);
    UDS_LogManager::PrintLog(pUVar11,1,Warning,local_1a8.Ptr,0x33,L"InMeshComp is nullptr.");
    if ((void *)local_1a8._padding_ == (void *)0x0) {
      return (UFXSystemComponent *)local_338;
    }
    FMemory::Free((void *)local_1a8._padding_);
    return (UFXSystemComponent *)local_338;
  }
  if (*(UNiagaraSystem **)&this->field_0x38 == (UNiagaraSystem *)0x0) {
    return (UFXSystemComponent *)0x0;
  }
  bVar9 = UNiagaraSystem::IsLooping(*(UNiagaraSystem **)&this->field_0x38);
  if (bVar9) {
    return (UFXSystemComponent *)local_338;
  }
  if ((this->field_0xc0 & 1) == 0) {
    (**(code **)(param_1->_padding_ + 0x520))(param_1,local_208,*(undefined8 *)&this->field_0xc4,0);
    if (*(longlong *)&this->field_0x38 == 0) goto LAB_14b8ec610;
    pUVar12 = (UWorld *)param_1->_padding_;
    if (pUVar12 == (UWorld *)0x0) {
      pUVar12 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
    }
    pUVar12 = UEngine::GetWorldFromContextObject(GEngine,(UObject *)pUVar12,LogAndReturnNull);
    if (pUVar12 == (UWorld *)0x0) goto LAB_14b8ec610;
    this_00 = FNiagaraWorldManager::Get(pUVar12);
    dVar46 = *(double *)&this->field_0x40 * local_1c8;
    dVar50 = *(double *)&this->field_0x48 * dStack_1c0;
    dVar6 = *(double *)&this->field_0x50 * local_1b8;
    dVar7 = dStack_1b0 * 0.0;
    dVar8 = local_1f8._8_8_;
    dVar5 = local_1f8._0_8_;
    dVar3 = local_208._8_8_;
    auVar42._8_4_ = local_1f8._0_4_;
    auVar42._0_8_ = dVar3;
    auVar42._12_4_ = local_1f8._4_4_;
    auVar45 = blendpd(local_208,local_1f8,2);
    dVar4 = dVar6 * dVar3 - auVar42._8_8_ * dVar50;
    auVar24._8_4_ = SUB84(dVar50,0);
    auVar24._0_8_ = dVar46;
    auVar24._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
    auVar25._8_4_ = SUB84(dVar7,0);
    auVar25._0_8_ = dVar6;
    auVar25._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
    auVar25 = blendpd(auVar24,auVar25,2);
    auVar40._8_4_ = SUB84(dVar4,0);
    auVar40._0_8_ = dVar50 * local_208._0_8_ - dVar3 * dVar46;
    auVar40._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
    auVar26._0_8_ = auVar25._0_8_ * dVar5 - auVar45._0_8_ * dVar6;
    auVar26._8_8_ = auVar25._8_8_ * dVar8 - auVar45._8_8_ * dVar7;
    auVar25 = blendpd(auVar40,auVar26,2);
    dVar4 = dVar4 + dVar4;
    dVar7 = auVar26._0_8_ + auVar26._0_8_;
    uVar43 = (undefined4)((ulonglong)dVar7 >> 0x20);
    auVar41._0_8_ = auVar25._0_8_ + auVar25._0_8_;
    auVar41._8_8_ = auVar25._8_8_ + auVar25._8_8_;
    auVar37._8_4_ = SUB84(dVar7,0);
    auVar37._0_8_ = dVar4;
    auVar37._12_4_ = uVar43;
    auVar27._8_4_ = SUB84(dVar7,0);
    auVar27._0_8_ = dVar4;
    auVar27._12_4_ = uVar43;
    auVar34._8_4_ = local_1f8._8_4_;
    auVar34._0_8_ = dVar8;
    auVar34._12_4_ = local_1f8._12_4_;
    auVar25 = blendpd(auVar27,auVar41,2);
    auVar38._0_8_ = auVar37._8_8_ * local_208._0_8_ - dVar3 * dVar4;
    auVar38._8_8_ = auVar41._0_8_ * dVar3 - dVar5 * dVar7;
    auVar16._8_4_ = SUB84(auVar38._8_8_,0);
    auVar16._0_8_ = auVar38._0_8_;
    auVar16._12_4_ = (int)((ulonglong)auVar38._8_8_ >> 0x20);
    auVar28._0_8_ = auVar25._0_8_ * dVar5 - auVar45._0_8_ * auVar41._0_8_;
    auVar28._8_8_ = auVar25._8_8_ * dVar8 - auVar45._8_8_ * auVar41._8_8_;
    auVar25 = blendpd(auVar38,auVar28,2);
    local_2e8._s_0.X = dVar8 * dVar4 + dVar46 + auVar16._8_8_ + local_1e8;
    local_2e8._s_0.Y = auVar34._8_8_ * dVar7 + dVar50 + auVar28._0_8_ + dStack_1e0;
    local_310 = dVar8 * auVar41._0_8_ + dVar6 + auVar25._0_8_ + local_1d8;
    local_2e8._s_0.Z = local_310;
    bVar9 = FNiagaraWorldManager::ShouldPreCull
                      (this_00,*(UNiagaraSystem **)&this->field_0x38,
                       (TVector<double> *)&local_2e8._s_0);
    if (bVar9) goto LAB_14b8ec610;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__),
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       == -1)) {
      pwVar14 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar14,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
    if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
        false)) {
      pUVar15 = pUVar12;
      if ((UWorld *)param_1->_padding_ != (UWorld *)0x0) {
        pUVar15 = (UWorld *)param_1->_padding_;
      }
      local_338 = NewObject<UDS_NiagaraComponent>((UObject *)pUVar15);
      UNiagaraComponent::SetAsset
                ((UNiagaraComponent *)local_338,*(UNiagaraSystem **)&this->field_0x38,true);
      local_338->field_0x9a = local_338->field_0x9a & 0xf7;
      UNiagaraComponent::SetAutoDestroy((UNiagaraComponent *)local_338,true);
      local_338->field_0x9a = local_338->field_0x9a | 4;
      UPrimitiveComponent::SetVisibleInRayTracing((UPrimitiveComponent *)local_338,false);
    }
    if (local_338 == (UDS_NiagaraComponent *)0x0) {
      return (UFXSystemComponent *)0x0;
    }
    UNiagaraComponent::SetForceLocalPlayerEffect((UNiagaraComponent *)local_338,true);
    if ((local_338->field_0x98 & 1) == 0) {
      UActorComponent::RegisterComponentWithWorld
                ((UActorComponent *)local_338,pUVar12,(FRegisterComponentContext *)0x0);
    }
    USceneComponent::SetAbsolute((USceneComponent *)local_338,true,true,true);
    dVar5 = *(double *)&this->field_0xb0;
    dVar6 = *(double *)&this->field_0xb8;
    dVar8 = *(double *)&this->field_0xa0;
    dVar46 = *(double *)&this->field_0xa8;
    dVar50 = local_208._0_8_;
    dVar39 = local_208._8_8_;
    dVar7 = local_1f8._8_8_;
    auVar17._8_4_ = local_1f8._8_4_;
    auVar17._0_8_ = dVar7;
    auVar17._12_4_ = local_1f8._12_4_;
    auVar29._8_4_ = local_208._8_4_;
    auVar29._0_8_ = dVar39;
    auVar29._12_4_ = local_208._12_4_;
    dVar4 = local_1f8._0_8_;
    auVar18._8_4_ = local_1f8._0_4_;
    auVar18._0_8_ = dVar4;
    auVar18._12_4_ = local_1f8._4_4_;
    dVar3 = dVar50 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
            auVar17._8_8_ * dVar46 +
            auVar29._8_8_ * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
            + auVar18._8_8_ * dVar8 *
              GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
    local_238 = dVar50 * dVar46 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                dVar7 * dVar5 +
                dVar39 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                dVar4 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
    dStack_230 = dVar50 * dVar8 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] +
                 dVar7 * dVar6 +
                 dVar39 * dVar46 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                 dVar4 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
    local_248._8_4_ = SUB84(dVar3,0);
    local_248._0_8_ =
         dVar50 * dVar6 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
         dVar7 * dVar8 +
         dVar39 * dVar5 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
         dVar4 * dVar46 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
    local_248._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
    pTVar13 = UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_248,&local_228);
    local_1c8 = *(double *)&this->field_0x40 * local_1c8;
    dStack_1c0 = *(double *)&this->field_0x48 * dStack_1c0;
    uVar43 = SUB84(dStack_1c0,0);
    uVar44 = (undefined4)((ulonglong)dStack_1c0 >> 0x20);
    local_1b8 = *(double *)&this->field_0x50 * local_1b8;
    uVar51 = SUB84(dStack_1b0 * 0.0,0);
    uVar52 = (undefined4)((ulonglong)(dStack_1b0 * 0.0) >> 0x20);
    auVar47._8_4_ = uVar43;
    auVar47._0_8_ = local_1c8;
    auVar47._12_4_ = uVar44;
    dVar4 = local_1f8._0_8_;
    dVar3 = local_208._8_8_;
    auVar19._8_4_ = uVar43;
    auVar19._0_8_ = local_1c8;
    auVar19._12_4_ = uVar44;
    dVar7 = local_1f8._8_8_;
    auVar48._0_8_ = auVar47._8_8_ * local_208._0_8_ - local_1c8 * dVar3;
    auVar48._8_8_ = local_1b8 * dVar3 - auVar19._8_8_ * dVar4;
    auVar30._8_4_ = uVar43;
    auVar30._0_8_ = local_1c8;
    auVar30._12_4_ = uVar44;
    auVar20._8_4_ = uVar51;
    auVar20._0_8_ = local_1b8;
    auVar20._12_4_ = uVar52;
    auVar45._8_4_ = uVar51;
    auVar45._0_8_ = local_1b8;
    auVar45._12_4_ = uVar52;
    auVar25 = blendpd(auVar30,auVar45,2);
    auVar42 = blendpd(local_208,local_1f8,2);
    auVar31._0_8_ = auVar25._0_8_ * dVar4 - local_1b8 * auVar42._0_8_;
    auVar31._8_8_ = auVar25._8_8_ * dVar7 - auVar20._8_8_ * auVar42._8_8_;
    dVar5 = auVar48._8_8_ + auVar48._8_8_;
    dVar6 = auVar31._0_8_ + auVar31._0_8_;
    uVar43 = SUB84(dVar6,0);
    uVar44 = (undefined4)((ulonglong)dVar6 >> 0x20);
    auVar25 = blendpd(auVar48,auVar31,2);
    auVar49._0_8_ = auVar25._0_8_ + auVar25._0_8_;
    auVar49._8_8_ = auVar25._8_8_ + auVar25._8_8_;
    auVar35._8_4_ = uVar43;
    auVar35._0_8_ = dVar5;
    auVar35._12_4_ = uVar44;
    auVar21._8_4_ = uVar43;
    auVar21._0_8_ = dVar5;
    auVar21._12_4_ = uVar44;
    auVar32._8_4_ = uVar43;
    auVar32._0_8_ = dVar5;
    auVar32._12_4_ = uVar44;
    auVar36._0_8_ = auVar35._8_8_ * local_208._0_8_ - dVar5 * dVar3;
    auVar36._8_8_ = auVar49._0_8_ * dVar3 - auVar21._8_8_ * dVar4;
    auVar25 = blendpd(auVar32,auVar49,2);
    auVar22._8_4_ = SUB84(auVar49._8_8_,0);
    auVar22._0_8_ = auVar49._0_8_;
    auVar22._12_4_ = (int)((ulonglong)auVar49._8_8_ >> 0x20);
    auVar33._0_8_ = auVar25._0_8_ * dVar4 - auVar49._0_8_ * auVar42._0_8_;
    auVar33._8_8_ = auVar25._8_8_ * dVar7 - auVar22._8_8_ * auVar42._8_8_;
    auVar23._8_4_ = SUB84(auVar36._8_8_,0);
    auVar23._0_8_ = auVar36._0_8_;
    auVar23._12_4_ = (int)((ulonglong)auVar36._8_8_ >> 0x20);
    auVar25 = blendpd(auVar36,auVar33,2);
    local_2c8.Roll = pTVar13->Roll;
    local_2c8.Pitch = pTVar13->Pitch;
    local_2c8.Yaw = pTVar13->Yaw;
    local_2f8 = auVar49._0_8_ * dVar7 + local_1b8 + auVar25._0_8_ + local_1d8;
    dStack_1e0 = dVar6 * dVar7 + dStack_1c0 + auVar33._0_8_ + dStack_1e0;
    local_2a8._8_4_ = SUB84(dStack_1e0,0);
    local_2a8._0_8_ = dVar5 * dVar7 + local_1c8 + auVar23._8_8_ + local_1e8;
    local_2a8._12_4_ = (int)((ulonglong)dStack_1e0 >> 0x20);
    local_2a8._s_0.Z = local_2f8;
    USceneComponent::SetWorldLocationAndRotation
              ((USceneComponent *)local_338,(TVector<double> *)&local_2a8._s_0,&local_2c8,false,
               (FHitResult *)0x0,None);
    local_288._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
    local_288._s_0.Y = _UNK_150689688;
    local_288._s_0.Z = __real_3ff0000000000000;
    USceneComponent::SetRelativeScale3D
              ((USceneComponent *)local_338,(TVector<double> *)&local_288._s_0);
  }
  else {
    pUVar12 = (UWorld *)param_1->_padding_;
    if ((pUVar12 == (UWorld *)0x0) &&
       (pUVar12 = (UWorld *)param_1->_padding_, pUVar12 == (UWorld *)0x0)) {
      pUVar12 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
    }
    local_338 = NewObject<UDS_NiagaraComponent>((UObject *)pUVar12);
    UNiagaraComponent::SetAsset
              ((UNiagaraComponent *)local_338,*(UNiagaraSystem **)&this->field_0x38,true);
    local_338->field_0x9a = local_338->field_0x9a & 0xf7;
    UNiagaraComponent::SetAutoDestroy((UNiagaraComponent *)local_338,true);
    local_338->field_0x9a = local_338->field_0x9a | 4;
    UPrimitiveComponent::SetVisibleInRayTracing((UPrimitiveComponent *)local_338,false);
    local_330 = &local_338;
    local_328 = this;
    if ((local_338->field_0x98 & 1) == 0) {
      FVar1.ComparisonIndex.Value = *(uint *)&this->field_0xc4;
      FVar1.Number = *(uint *)&this->field_0xc8;
      USceneComponent::SetupAttachment
                ((USceneComponent *)local_338,(USceneComponent *)param_1,FVar1);
      `UDS_AnimNotify_PlayNiagaraEffect::SpawnEffect'::__l16::<lambda_1>::operator()(&local_330);
      pUVar12 = (UWorld *)param_1->_padding_;
      if (pUVar12 == (UWorld *)0x0) {
        pUVar12 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
      }
      UActorComponent::RegisterComponentWithWorld
                ((UActorComponent *)local_338,pUVar12,(FRegisterComponentContext *)0x0);
    }
    else {
      `UDS_AnimNotify_PlayNiagaraEffect::SpawnEffect'::__l16::<lambda_1>::operator()(&local_330);
      (**(code **)(*(longlong *)local_338 + 0x508))
                (local_338,param_1,&FAttachmentTransformRules::KeepRelativeTransform,
                 *(undefined8 *)&this->field_0xc4);
    }
  }
  (**(code **)(*(longlong *)local_338 + 0x2b8))(local_338,1);
LAB_14b8ec610:
  if (local_338 != (UDS_NiagaraComponent *)0x0) {
    USceneComponent::SetUsingAbsoluteScale((USceneComponent *)local_338,(bool)this->field_0x88);
    local_268._s_0.X = (double)*(undefined8 *)&this->field_0x70;
    local_268._s_0.Y = (double)*(undefined8 *)&this->field_0x78;
    local_268._s_0.Z = (double)*(undefined8 *)&this->field_0x80;
    USceneComponent::SetRelativeScale3D_Direct
              ((USceneComponent *)local_338,(TVector<double> *)&local_268._s_0);
  }
  return (UFXSystemComponent *)local_338;
}

