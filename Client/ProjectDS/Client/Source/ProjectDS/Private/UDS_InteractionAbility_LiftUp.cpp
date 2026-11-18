// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 49

// StaticClass @ 14b4bc230

UClass * __cdecl UDS_InteractionAbility_LiftUp::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbility_LiftUp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbility_LiftUp",
               &Z_Registration_Info_UClass_UDS_InteractionAbility_LiftUp.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbility_LiftUp,0x288,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbility_LiftUp>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbility_LiftUp>,local_res8,
               UDS_InteractionAbility_ObjectHandling::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbility_LiftUp.InnerSingleton;
}

// UDS_InteractionAbility_LiftUp @ 14b4c0f70

UDS_InteractionAbility_LiftUp * __thiscall
UDS_InteractionAbility_LiftUp::UDS_InteractionAbility_LiftUp
          (UDS_InteractionAbility_LiftUp *this,FVTableHelper *param_1)

{
  undefined8 uVar1;
  undefined8 local_res8;
  
  UDS_InteractionAbility_ObjectHandling::UDS_InteractionAbility_ObjectHandling
            ((UDS_InteractionAbility_ObjectHandling *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->InteractionAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->InteractionAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->InstallGuideActor).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->InstallGuideActor).WeakPtr,(FObjectPtr)&local_res8);
  (this->AsyncLoadHandle_InstallGuideActor).Object = (FStreamableHandle *)0x0;
  (this->AsyncLoadHandle_InstallGuideActor).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_res8 = 0;
  (this->ThrowStartSkillInfo).StartLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ThrowStartSkillInfo).StartLocation.field0_0x0._s_0.Y = (double)uVar1;
  (this->ThrowStartSkillInfo).StartLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ThrowStartSkillInfo).EndLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ThrowStartSkillInfo).EndLocation.field0_0x0._s_0.Y = (double)uVar1;
  (this->ThrowStartSkillInfo).EndLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ThrowStartSkillInfo).InitialVelocity.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ThrowStartSkillInfo).InitialVelocity.field0_0x0._s_0.Y = (double)uVar1;
  (this->ThrowStartSkillInfo).InitialVelocity.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ThrowStartSkillInfo).TotalTime = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ThrowStartSkillInfo).ImpactTime = 0.0;
  (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.Y = (double)uVar1;
  (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->CurrentThrowSkillData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->CurrentThrowSkillData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->NC_TrajectoryEffect).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->NC_TrajectoryEffect).WeakPtr,(FObjectPtr)&local_res8);
  (this->AsyncLoadHandle_TrajectoryEffect).Object = (FStreamableHandle *)0x0;
  (this->AsyncLoadHandle_TrajectoryEffect).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->AttachFrontOffset = 0.0;
  this->AttachHeightOffset = 0.0;
  this->AttachRelativeYaw = 0.0;
  (this->LiftUpEventTimer_ToLiftUpAttach).Handle = 0;
  (this->LiftUpEventTimer_ToThrowDetach).Handle = 0;
  (this->LiftUpEventTimer_ToPutDownDetach).Handle = 0;
  return this;
}

// UDS_InteractionAbility_LiftUp @ 14b4c10d0

UDS_InteractionAbility_LiftUp * __thiscall
UDS_InteractionAbility_LiftUp::UDS_InteractionAbility_LiftUp
          (UDS_InteractionAbility_LiftUp *this,FObjectInitializer *param_1)

{
  undefined8 uVar1;
  undefined8 local_res8;
  
  UDS_InteractionAbility_ObjectHandling::UDS_InteractionAbility_ObjectHandling
            ((UDS_InteractionAbility_ObjectHandling *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  (this->InteractionAbilityData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->InteractionAbilityData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->InstallGuideActor).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->InstallGuideActor).WeakPtr,(FObjectPtr)&local_res8);
  (this->AsyncLoadHandle_InstallGuideActor).Object = (FStreamableHandle *)0x0;
  (this->AsyncLoadHandle_InstallGuideActor).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_res8 = 0;
  (this->ThrowStartSkillInfo).StartLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ThrowStartSkillInfo).StartLocation.field0_0x0._s_0.Y = (double)uVar1;
  (this->ThrowStartSkillInfo).StartLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ThrowStartSkillInfo).EndLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ThrowStartSkillInfo).EndLocation.field0_0x0._s_0.Y = (double)uVar1;
  (this->ThrowStartSkillInfo).EndLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ThrowStartSkillInfo).InitialVelocity.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ThrowStartSkillInfo).InitialVelocity.field0_0x0._s_0.Y = (double)uVar1;
  (this->ThrowStartSkillInfo).InitialVelocity.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ThrowStartSkillInfo).TotalTime = 0.0;
  uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ThrowStartSkillInfo).ImpactTime = 0.0;
  (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.Y = (double)uVar1;
  (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->CurrentThrowSkillData).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->CurrentThrowSkillData).WeakPtr,(FObjectPtr)&local_res8);
  local_res8 = 0;
  (this->NC_TrajectoryEffect).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->NC_TrajectoryEffect).WeakPtr,(FObjectPtr)&local_res8);
  (this->AsyncLoadHandle_TrajectoryEffect).Object = (FStreamableHandle *)0x0;
  (this->AsyncLoadHandle_TrajectoryEffect).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->AttachFrontOffset = 0.0;
  this->AttachHeightOffset = 0.0;
  this->AttachRelativeYaw = 0.0;
  (this->LiftUpEventTimer_ToLiftUpAttach).Handle = 0;
  (this->LiftUpEventTimer_ToThrowDetach).Handle = 0;
  (this->LiftUpEventTimer_ToPutDownDetach).Handle = 0;
  return this;
}

// ~UDS_InteractionAbility_LiftUp @ 14b4c2310

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
UDS_InteractionAbility_LiftUp::~UDS_InteractionAbility_LiftUp(UDS_InteractionAbility_LiftUp *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IGameplayTaskOwnerInterface__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AsyncLoadHandle_TrajectoryEffect).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->AsyncLoadHandle_InstallGuideActor).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&UDS_InteractionAbility_ObjectHandling::_vftable__for__UObject__;
  this->_padding_ =
       (longlong)
       &UDS_InteractionAbility_ObjectHandling::_vftable__for__IGameplayTaskOwnerInterface__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  UDS_GameplayAbility::~UDS_GameplayAbility((UDS_GameplayAbility *)this);
  return;
}

// GetPrivateStaticClass @ 14b4c47e0

UClass * __cdecl UDS_InteractionAbility_LiftUp::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_InteractionAbility_LiftUp.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_InteractionAbility_LiftUp",
               &Z_Registration_Info_UClass_UDS_InteractionAbility_LiftUp.InnerSingleton,
               StaticRegisterNativesUDS_InteractionAbility_LiftUp,0x288,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_InteractionAbility_LiftUp>,
               InternalVTableHelperCtorCaller<UDS_InteractionAbility_LiftUp>,local_res8,
               UDS_InteractionAbility_ObjectHandling::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_InteractionAbility_LiftUp.InnerSingleton;
}

// ShouldNotifyChangedCharState @ 14b4c5400

bool __thiscall
UDS_InteractionAbility_LiftUp::ShouldNotifyChangedCharState(UDS_InteractionAbility_LiftUp *this)

{
  return true;
}

// ShouldNotifyChangedSpecialBuff @ 14b4c54c0

bool __thiscall
UDS_InteractionAbility_LiftUp::ShouldNotifyChangedSpecialBuff(UDS_InteractionAbility_LiftUp *this)

{
  return true;
}

// ShouldTickComponent @ 14b4c54e0

bool __thiscall
UDS_InteractionAbility_LiftUp::ShouldTickComponent(UDS_InteractionAbility_LiftUp *this)

{
  return true;
}

// StaticRegisterNativesUDS_InteractionAbility_LiftUp @ 14b4c5650

void __cdecl UDS_InteractionAbility_LiftUp::StaticRegisterNativesUDS_InteractionAbility_LiftUp(void)

{
  return;
}

// ClearTrajectoryEffect @ 14b7dc760

void __thiscall
UDS_InteractionAbility_LiftUp::ClearTrajectoryEffect(UDS_InteractionAbility_LiftUp *this)

{
  TSharedPtr<FStreamableHandle,1> *pTVar1;
  bool bVar2;
  UObject *pUVar3;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  pTVar1 = &this->AsyncLoadHandle_TrajectoryEffect;
  if (pTVar1->Object != (FStreamableHandle *)0x0) {
    FStreamableHandle::CancelHandle(pTVar1->Object);
    local_18 = 0;
    FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar1 != (TSharedPtr<FStreamableHandle,1> *)&local_18) {
      pTVar1->Object = (FStreamableHandle *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->AsyncLoadHandle_TrajectoryEffect).SharedReferenceCount,&FStack_10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_10.ReferenceController);
  }
  bVar2 = TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals
                    (&this->NC_TrajectoryEffect,(void *)0x0);
  if (!bVar2) {
    pUVar3 = FWeakObjectPtr::Get(&(this->NC_TrajectoryEffect).WeakPtr);
    (**(code **)(*(longlong *)pUVar3 + 0x4a0))(pUVar3,0);
    (this->NC_TrajectoryEffect).WeakPtr = (FWeakObjectPtr)0x0;
  }
  return;
}

// CloseInputKeyGroupWindow @ 14b7dcaa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_LiftUp::CloseInputKeyGroupWindow(UDS_InteractionAbility_LiftUp *this)

{
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar1;
  undefined1 auStackY_178 [32];
  float local_148;
  uint local_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_LiftUp::CloseInputKeyGroupWindow",0x37,Yes);
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_138.Ptr,0x5a0,L"windowMng is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
        return;
      }
    }
  }
  else {
    local_148 = 0.0;
    local_144[0] = 0;
    UDS_WindowManager::CloseWindow(this_00,InputKeyGroup,local_144,&local_148);
  }
  return;
}

// Deactivate @ 14b7e34f0

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

bool __cdecl
UDS_InteractionAbility_LiftUp::Deactivate(ulong64 *param_1,EDS_AbilityDeactivateType *param_2)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  FDS_EntityBase *this;
  undefined1 auStackY_188 [32];
  EDS_AbilityTagType local_148 [16];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  if (*param_1 == 0) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_LiftUp::Deactivate",0x29,Yes);
    UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,0x24e,L"Invalid parameter.");
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this != (FDS_EntityBase *)0x0) {
      local_148[0] = Interaction_LiftUp;
      bVar1 = FDS_EntityBase::DeactivateAbility(this,local_148,param_2);
      return bVar1;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_LiftUp::Deactivate",0x29,Yes);
    UDS_LogManager::PrintLog
              (pUVar2,1,Warning,local_138.Ptr,0x255,L"sourceEntity is nullptr. (%llu)");
  }
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return false;
}

// DrawThrowTrajectory @ 14b7e4f40

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_LiftUp::DrawThrowTrajectory(UDS_InteractionAbility_LiftUp *this)

{
  uint uVar1;
  TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr> *this_00;
  FDS_ThrowStartSkillInfo *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 auVar4 [16];
  FName FVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  bool bVar18;
  int iVar19;
  UObject *pUVar20;
  UDS_LogManager *pUVar21;
  USceneComponent *this_01;
  FName *pFVar22;
  UNiagaraComponent *pUVar23;
  ulonglong uVar24;
  ForAnyElementType FVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  double dVar29;
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
  undefined4 uVar45;
  undefined4 uVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auStackY_298 [32];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_268;
  undefined1 local_258 [16];
  FName local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  TVector<double>_u_0 local_238;
  double local_218;
  double dStack_210;
  double local_208;
  double dStack_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1e8;
  ulonglong local_c8;
  
  local_c8 = __security_cookie.value ^ (ulonglong)auStackY_298;
  this_00 = &this->NC_TrajectoryEffect;
  bVar18 = TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  if ((!bVar18) &&
     (__real_322bcc77 <
      (float)((uint)(this->ThrowStartSkillInfo).ImpactTime & __xmm_7fffffff7fffffff7fffffff7fffffff)
     )) {
    local_268.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_268.ArrayNum = 0;
    local_268.ArrayMax = 0;
    iVar19 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x818,&local_268.AllocatorInstance,&local_268.ArrayMax);
    fVar17 = __real_3dcccccd;
    pFVar2 = &this->ThrowStartSkillInfo;
    dVar6 = (this->ThrowStartSkillInfo).StartLocation.field0_0x0._s_0.Y;
    local_248.ComparisonIndex.Value = 0x3dcccccd;
    *(double *)(local_268.AllocatorInstance.Data + (longlong)iVar19 * 0x18) =
         (pFVar2->StartLocation).field0_0x0._s_0.X;
    *(double *)(local_268.AllocatorInstance.Data + (longlong)iVar19 * 0x18 + 8) = dVar6;
    *(double *)(local_268.AllocatorInstance.Data + (longlong)iVar19 * 0x18 + 0x10) =
         (this->ThrowStartSkillInfo).StartLocation.field0_0x0._s_0.Z;
    local_268.ArrayNum = iVar19 + 1;
    if (fVar17 < (this->ThrowStartSkillInfo).ImpactTime) {
      do {
        local_238._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        local_238._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        local_238._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
        bVar18 = DS_AbilityUtil_Interaction::CalculateThrowLocationAtTime
                           (&pFVar2->StartLocation,&(this->ThrowStartSkillInfo).InitialVelocity,
                            (float *)&local_248,(TVector<double> *)&local_238._s_0);
        if (!bVar18) {
          pUVar21 = UDS_LogManager::GetInst();
          if (pUVar21 != (UDS_LogManager *)0x0) {
            pUVar21 = UDS_LogManager::GetInst();
            local_1e8._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_1e8,"UDS_InteractionAbility_LiftUp::DrawThrowTrajectory",0x32,Yes);
            UDS_LogManager::PrintLog
                      (pUVar21,1,Warning,local_1e8.Ptr,0x6e6,
                       L"Failed to CalculateThrowLocationAtTime().");
            if ((void *)local_1e8._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_1e8._padding_);
            }
          }
          goto LAB_14b7e54c3;
        }
        if (local_268.ArrayNum == local_268.ArrayMax) {
          local_268.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_268.AllocatorInstance,&local_268.ArrayMax);
        }
        uVar1 = local_268.ArrayNum + 1;
        *(double *)(local_268.AllocatorInstance.Data + (longlong)local_268.ArrayNum * 0x18) =
             local_238._s_0.X;
        *(double *)(local_268.AllocatorInstance.Data + (longlong)local_268.ArrayNum * 0x18 + 8) =
             local_238._s_0.Y;
        *(double *)(local_268.AllocatorInstance.Data + (longlong)local_268.ArrayNum * 0x18 + 0x10) =
             local_238._s_0.Z;
        local_248.ComparisonIndex.Value = (uint)(local_248.ComparisonIndex.Value + fVar17);
        local_268.ArrayNum = uVar1;
      } while ((float)local_248.ComparisonIndex.Value < (this->ThrowStartSkillInfo).ImpactTime);
    }
    if (local_268.ArrayNum == local_268.ArrayMax) {
      local_268.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x818,&local_268.AllocatorInstance,&local_268.ArrayMax);
    }
    dVar6 = (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.Y;
    *(double *)(local_268.AllocatorInstance.Data + (longlong)local_268.ArrayNum * 0x18) =
         (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.X;
    *(double *)(local_268.AllocatorInstance.Data + (longlong)local_268.ArrayNum * 0x18 + 8) = dVar6;
    *(double *)(local_268.AllocatorInstance.Data + (longlong)local_268.ArrayNum * 0x18 + 0x10) =
         (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.Z;
    local_268.ArrayNum = local_268.ArrayNum + 1;
    pUVar20 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    iVar19 = local_268.ArrayNum;
    uVar16 = _UNK_15061cc8c;
    uVar15 = _UNK_15061cc88;
    uVar14 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar1 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar24 = (ulonglong)local_268.ArrayNum;
    local_248.ComparisonIndex.Value = *(uint *)&pUVar20[0xc].field_0x10;
    local_248.Number = *(uint *)&pUVar20[0xc].field_0x14;
    uStack_240 = *(undefined4 *)&pUVar20[0xc].field_0x18;
    uStack_23c = *(undefined4 *)&pUVar20[0xc].field_0x1c;
    local_218 = *(double *)&pUVar20[0xc].field_0x20;
    dStack_210 = *(double *)(pUVar20 + 0xd);
    local_208 = *(double *)&pUVar20[0xd].field_0x8;
    dStack_200 = *(double *)&pUVar20[0xd].field_0x10;
    pFVar3 = local_268.AllocatorInstance.Data + uVar24 * 0x18;
    local_1f8 = *(undefined4 *)&pUVar20[0xd].field_0x18;
    uStack_1f4 = *(undefined4 *)&pUVar20[0xd].field_0x1c;
    uStack_1f0 = *(undefined4 *)&pUVar20[0xd].field_0x20;
    uStack_1ec = *(undefined4 *)&pUVar20[0xd].field_0x24;
    local_238._s_0.X = (double)*(undefined8 *)&pUVar20[0xe].field_0x10;
    local_238._s_0.Y = (double)*(undefined8 *)&pUVar20[0xe].field_0x18;
    auVar4 = *(undefined1 (*) [16])(pUVar20 + 0xe);
    FVar25.Data = local_268.AllocatorInstance.Data;
    while( true ) {
      if ((uint)uVar24 != iVar19) {
        `TCheckedPointerIterator<UE::Math::TVector<double>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_258);
      }
      if (FVar25.Data == pFVar3) break;
      dVar8 = local_218 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
      dVar9 = dStack_210 * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
      dVar12 = *(double *)FVar25.Data - local_208;
      dVar13 = *(double *)(FVar25.Data + 8) - dStack_200;
      uVar45 = (undefined4)((ulonglong)dVar13 >> 0x20);
      dVar29 = *(double *)(FVar25.Data + 0x10) - (double)CONCAT44(uStack_1f4,local_1f8);
      dVar6 = (double)CONCAT44(local_248.Number,local_248.ComparisonIndex.Value) *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
      dVar7 = (double)CONCAT44(uStack_23c,uStack_240) *
              GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
      auVar47._8_4_ = SUB84(dVar13,0);
      auVar47._0_8_ = dVar12;
      auVar47._12_4_ = uVar45;
      auVar38._8_4_ = SUB84(dVar7,0);
      auVar38._0_8_ = dVar6;
      auVar38._12_4_ = (int)((ulonglong)dVar7 >> 0x20);
      auVar30._8_4_ = SUB84(dVar8,0);
      auVar30._0_8_ = dVar7;
      auVar30._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
      auVar39._8_4_ = SUB84(dVar9,0);
      auVar39._0_8_ = dVar8;
      auVar39._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
      auVar39 = blendpd(auVar38,auVar39,2);
      auVar48._0_8_ = auVar47._8_8_ * dVar6 - dVar7 * dVar12;
      auVar48._8_8_ = dVar29 * dVar7 - auVar30._8_8_ * dVar13;
      auVar34._8_4_ = SUB84(dVar13,0);
      auVar34._0_8_ = dVar12;
      auVar34._12_4_ = uVar45;
      auVar37._8_8_ = 0;
      auVar37._0_8_ = dVar29;
      auVar35 = blendpd(auVar34,auVar37,2);
      auVar36._0_8_ = auVar35._0_8_ * dVar8 - auVar39._0_8_ * dVar29;
      auVar36._8_8_ = auVar35._8_8_ * dVar9 - auVar39._8_8_ * 0.0;
      auVar35 = blendpd(auVar48,auVar36,2);
      dVar10 = auVar48._8_8_ + auVar48._8_8_;
      dVar11 = auVar36._0_8_ + auVar36._0_8_;
      uVar45 = SUB84(dVar11,0);
      uVar46 = (undefined4)((ulonglong)dVar11 >> 0x20);
      auVar49._0_8_ = auVar35._0_8_ + auVar35._0_8_;
      auVar49._8_8_ = auVar35._8_8_ + auVar35._8_8_;
      auVar42._8_4_ = uVar45;
      auVar42._0_8_ = dVar10;
      auVar42._12_4_ = uVar46;
      auVar31._8_4_ = uVar45;
      auVar31._0_8_ = dVar10;
      auVar31._12_4_ = uVar46;
      auVar40._8_4_ = uVar45;
      auVar40._0_8_ = dVar10;
      auVar40._12_4_ = uVar46;
      auVar35 = blendpd(auVar40,auVar49,2);
      auVar43._0_8_ = auVar42._8_8_ * dVar6 - dVar10 * dVar7;
      auVar43._8_8_ = auVar49._0_8_ * dVar7 - auVar31._8_8_ * dVar8;
      auVar32._8_4_ = SUB84(auVar49._8_8_,0);
      auVar32._0_8_ = auVar49._0_8_;
      auVar32._12_4_ = (int)((ulonglong)auVar49._8_8_ >> 0x20);
      auVar41._0_8_ = auVar35._0_8_ * dVar8 - auVar49._0_8_ * auVar39._0_8_;
      auVar41._8_8_ = auVar35._8_8_ * dVar9 - auVar32._8_8_ * auVar39._8_8_;
      lVar26 = -(ulonglong)
                ((double)CONCAT44((uint)((ulonglong)local_238._0_8_ >> 0x20) & uVar14,
                                  SUB84(local_238._s_0.X,0) & uVar1) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[2]);
      lVar27 = -(ulonglong)
                ((double)CONCAT44(auVar4._4_4_ & uVar14,auVar4._0_4_ & uVar1) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[0]);
      lVar28 = -(ulonglong)
                ((double)CONCAT44(auVar4._12_4_ & uVar16,auVar4._8_4_ & uVar15) <=
                (double)GlobalVectorConstants::SmallNumber.m128_f32[1]);
      auVar37 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar4);
      auVar33._8_4_ = SUB84(auVar43._8_8_,0);
      auVar33._0_8_ = auVar43._0_8_;
      auVar33._12_4_ = (int)((ulonglong)auVar43._8_8_ >> 0x20);
      auVar44._8_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._0_4_;
      auVar44._0_8_ = local_238._s_0.X;
      auVar44._12_4_ = GlobalVectorConstants::DoubleOne2d.m128d_f64[1]._4_4_;
      auVar39 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar44);
      auVar44 = blendpd(auVar43,auVar41,2);
      dVar6 = (double)CONCAT44(~(uint)((ulonglong)lVar28 >> 0x20) & auVar37._12_4_,
                               ~(uint)lVar28 & auVar37._8_4_) *
              (dVar11 * dVar9 + dVar13 + auVar41._0_8_);
      auVar35._8_4_ = SUB84(dVar6,0);
      auVar35._0_8_ =
           (double)CONCAT44(~(uint)((ulonglong)lVar27 >> 0x20) & auVar37._4_4_,
                            ~(uint)lVar27 & auVar37._0_4_) *
           (dVar10 * dVar9 + dVar12 + auVar33._8_8_);
      auVar35._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
      *(undefined1 (*) [16])FVar25.Data = auVar35;
      *(double *)(FVar25.Data + 0x10) =
           (double)CONCAT44(~(uint)((ulonglong)lVar26 >> 0x20) & auVar39._4_4_,
                            ~(uint)lVar26 & auVar39._0_4_) *
           (auVar49._0_8_ * dVar9 + dVar29 + auVar44._0_8_);
      FVar25.Data = FVar25.Data + 0x18;
      uVar24 = (ulonglong)(uint)local_268.ArrayNum;
    }
    this_01 = (USceneComponent *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    local_238._s_0.X = (pFVar2->StartLocation).field0_0x0._s_0.X;
    local_238._s_0.Y = (this->ThrowStartSkillInfo).StartLocation.field0_0x0._s_0.Y;
    local_238._s_0.Z = (this->ThrowStartSkillInfo).StartLocation.field0_0x0._s_0.Z;
    USceneComponent::SetWorldLocation
              (this_01,(TVector<double> *)&local_238._s_0,false,(FHitResult *)0x0,None);
    pFVar22 = ::FName::FName(&local_248,L"SplinePositions");
    FVar5 = *pFVar22;
    pUVar23 = (UNiagaraComponent *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    UNiagaraDataInterfaceArrayFunctionLibrary::SetNiagaraArrayVector(pUVar23,FVar5,&local_268);
LAB_14b7e54c3:
    if (local_268.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_268.AllocatorInstance.Data);
    }
  }
  return;
}

// InitInstallGuideActor @ 14b7ef980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_InteractionAbility_LiftUp::InitInstallGuideActor(UDS_InteractionAbility_LiftUp *this)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  UDS_LogManager *pUVar9;
  UObject *pUVar10;
  TWeakObjectPtr<ADS_InstallGuideActor,FWeakObjectPtr> *this_00;
  undefined1 auStackY_1c8 [32];
  uint uVar11;
  wchar_t *pwVar12;
  undefined8 local_198;
  undefined4 local_180;
  undefined4 uStack_17c;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  bVar8 = TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar8) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar9 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_InteractionAbility_LiftUp::InitInstallGuideActor",0x34,Yes);
    pwVar12 = L"InteractionAbilityData is nullptr.";
    uVar11 = 0x5f9;
  }
  else {
    this_00 = &this->InstallGuideActor;
    bVar8 = TWeakObjectPtr<ADS_InstallGuideActor,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
    uVar3 = __real_408f400000000000;
    if (!bVar8) {
      local_198 = CONCAT62(local_198._2_6_,1);
      pUVar10 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
      uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      fVar1 = *(float *)&pUVar10[3].field_0x18;
      pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      local_180 = (undefined4)uVar4;
      uStack_17c = (undefined4)((ulonglong)uVar4 >> 0x20);
      *(undefined8 *)&pUVar10[0x11].field_0x18 = local_198;
      *(undefined8 *)&pUVar10[0x11].field_0x20 = uVar3;
      local_198 = CONCAT62(local_198._2_6_,1);
      auVar2._8_4_ = local_180;
      auVar2._0_8_ = (double)fVar1;
      auVar2._12_4_ = uStack_17c;
      *(undefined1 (*) [16])(pUVar10 + 0x12) = auVar2;
      *(undefined8 *)&pUVar10[0x12].field_0x10 = uVar5;
      *(undefined8 *)&pUVar10[0x12].field_0x18 = uVar6;
      uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      uVar6 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar5 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar4 = _UNK_15274a4d8;
      uVar3 = ___xmm_4059000000000000408f400000000000;
      pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      *(undefined8 *)&pUVar10[0x12].field_0x20 = local_198;
      *(undefined8 *)(pUVar10 + 0x13) = uVar3;
      *(undefined8 *)&pUVar10[0x13].field_0x8 = uVar4;
      *(undefined8 *)&pUVar10[0x13].field_0x10 = uVar5;
      *(undefined8 *)&pUVar10[0x13].field_0x18 = uVar6;
      *(undefined8 *)&pUVar10[0x13].field_0x20 = uVar7;
      return true;
    }
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar9 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_InteractionAbility_LiftUp::InitInstallGuideActor",0x34,Yes);
    pwVar12 = L"InstallGuideActor is nullptr.";
    uVar11 = 0x5ff;
  }
  UDS_LogManager::PrintLog(pUVar9,1,Warning,local_168.Ptr,uVar11,pwVar12);
  if ((void *)local_168._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_168._padding_);
  }
  return false;
}

// InitObjectHandlingVariables @ 14b7f1b70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_LiftUp::InitObjectHandlingVariables(UDS_InteractionAbility_LiftUp *this)

{
  longlong lVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_LiftUp::InitObjectHandlingVariables",0x3a,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x1ca,L"InteractionAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pUVar4 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    this->_padding_ = *(longlong *)&pUVar4[2].field_0x8;
    pUVar4 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    lVar1 = *(longlong *)&pUVar4[2].field_0x20;
    this->_padding_ = *(longlong *)&pUVar4[2].field_0x18;
    this->_padding_ = lVar1;
    this->_padding_ = *(longlong *)(pUVar4 + 3);
    pUVar4 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    this->_padding_ = *(longlong *)&pUVar4[3].field_0x8;
    UDS_InteractionAbility_ObjectHandling::InitObjectHandlingVariables
              ((UDS_InteractionAbility_ObjectHandling *)this);
  }
  return;
}

// OnAbilityRetryActivate @ 14b7f4690

void __thiscall
UDS_InteractionAbility_LiftUp::OnAbilityRetryActivate(UDS_InteractionAbility_LiftUp *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_6483159438600437417>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_InteractionAbility_LiftUp.cpp"
                     ,0x157,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// OnCanActivate @ 14b7f61e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UDS_InteractionAbility_LiftUp::OnCanActivate(UDS_InteractionAbility_LiftUp *this)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr> *this_00;
  int iVar1;
  bool bVar2;
  TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr> TVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  undefined1 auStackY_178 [32];
  ulong64 local_144;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar2 = UWN_Ability::OnCanActivate((UWN_Ability *)this);
  if (bVar2) {
    this_00 = &this->InteractionAbilityData;
    bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>::UEOpEquals
                      (this_00,(void *)0x0);
    if (bVar2) {
      TVar3 = UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_LiftUp>
                        (&local_144,(EDS_AbilityTagType *)&this->_padding_);
                    /* WARNING: Load size is inaccurate */
      this_00->WeakPtr = *TVar3.WeakPtr;
    }
    bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>::UEOpEquals
                      (this_00,(void *)0x0);
    if (bVar2) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_InteractionAbility_LiftUp::OnCanActivate",0x2c,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_138.Ptr,0x57,L"InteractionAbilityData is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      if (*(char *)((longlong)&this->_padding_ + 1) != '\x01') {
        return true;
      }
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      iVar1 = *(int *)&pUVar5[2].field_0x10;
      pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      bVar2 = DS_AbilityUtil_Interaction::IsAbleInteraction_SourceEntity
                        ((ulong64 *)&this->_padding_,(ulong64 *)&pUVar5[2].field_0x8,iVar1,true);
      if (bVar2) {
        pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        iVar1 = *(int *)&pUVar5[2].field_0x10;
        pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        bVar2 = DS_AbilityUtil_Interaction::IsAbleInteraction_TargetEntity
                          ((ulong64 *)&pUVar5[2].field_0x8,iVar1,0);
        return bVar2;
      }
    }
  }
  return false;
}

// OnChangedCharState @ 14b7f8570

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
UDS_InteractionAbility_LiftUp::OnChangedCharState
          (UDS_InteractionAbility_LiftUp *this,
          TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> param_1,FDS_ChangedCharStateInfo *param_2
          )

{
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_198 [32];
  FDS_ChangedCharStateInfo local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_168.StateTag.TagName = (param_2->StateTag).TagName;
  local_168.bIsStateTagOn = param_2->bIsStateTagOn;
  local_168._9_7_ = *(undefined7 *)&param_2->field_0x9;
  local_168.AddedCharState = param_2->AddedCharState;
  local_168.RemovedCharState = param_2->RemovedCharState;
  local_168.AddedCharDetailState = param_2->AddedCharDetailState;
  local_168.RemovedCharDetailState = param_2->RemovedCharDetailState;
  local_res10 = param_1.WeakPtr;
  UDS_GameplayAbility::OnChangedCharState((UDS_GameplayAbility *)this,param_1,&local_168);
  bVar2 = TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr>::UEOpEquals
                    ((TWeakObjectPtr<UDS_CharStateData,FWeakObjectPtr> *)&local_res10,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_LiftUp::OnChangedCharState",0x31,Yes);
      UDS_LogManager::PrintLog(pUVar3,1,Warning,local_138.Ptr,0x160,L"InCharStateData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>::UEOpEquals
                      (&this->InteractionAbilityData,(void *)0x0);
    if (bVar2) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 != (UDS_LogManager *)0x0) {
        pUVar3 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_InteractionAbility_LiftUp::OnChangedCharState",0x31,Yes);
        UDS_LogManager::PrintLog
                  (pUVar3,1,Warning,local_138.Ptr,0x167,L"InteractionAbilityData is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
      pUVar4 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
      iVar1 = *(int *)&pUVar4[2].field_0x10;
      pUVar4 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
      DS_AbilityUtil_Interaction::IsAbleInteraction_SourceEntity
                ((ulong64 *)&this->_padding_,(ulong64 *)&pUVar4[2].field_0x8,iVar1,true);
    }
  }
  return;
}

// OnChangedSpecialBuff @ 14b7fa6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_LiftUp::OnChangedSpecialBuff
          (UDS_InteractionAbility_LiftUp *this,ulong64 *param_1,EDS_SpecialBuffType *param_2,
          bool *param_3)

{
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_LiftUp::OnChangedSpecialBuff",0x33,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x17e,L"InteractionAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pUVar4 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    iVar1 = *(int *)&pUVar4[2].field_0x10;
    pUVar4 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    DS_AbilityUtil_Interaction::IsAbleInteraction_SpecialBuff
              ((ulong64 *)&this->_padding_,(ulong64 *)&pUVar4[2].field_0x8,iVar1,
               (bool *)((longlong)&this->_padding_ + 1));
  }
  return;
}

// OnCompleteLoadInstallGuideActor @ 14b7faeb0

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
UDS_InteractionAbility_LiftUp::OnCompleteLoadInstallGuideActor(UDS_InteractionAbility_LiftUp *this)

{
  int iVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UClass *pUVar4;
  UClass *pUVar5;
  UWorld *this_00;
  AActor *pAVar6;
  longlong *plVar7;
  undefined1 auStackY_278 [32];
  uint uVar8;
  wchar_t *pwVar9;
  EDS_ClientResourceType local_248 [8];
  AActor *local_240;
  FSoftObjectPath local_238;
  undefined1 local_218 [112];
  TTransform<double> local_1a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_248[0] = InstallGuideActor;
  UDS_CommonSetting::GetClientBPPath(&local_238,local_248);
  if (local_238.AssetPath.PackageName == (FName)0x0) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b7fb232;
    pUVar3 = UDS_LogManager::GetInst();
    local_148._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_148,"UDS_InteractionAbility_LiftUp::OnCompleteLoadInstallGuideActor",0x3e,Yes)
    ;
    pwVar9 = L"installGuideActorBPPath is invalid.";
    uVar8 = 0x5ca;
  }
  else {
    pUVar4 = (UClass *)FSoftObjectPath::ResolveObject(&local_238);
    if (pUVar4 == (UClass *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b7fb232;
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = (longlong)pUVar4;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_InteractionAbility_LiftUp::OnCompleteLoadInstallGuideActor",0x3e,
                 Yes);
      pwVar9 = L"installGuideActorBPObj is nullptr.";
      uVar8 = 0x5d2;
    }
    else {
      pUVar5 = Z_Construct_UClass_UClass_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        pUVar3 = UDS_LogManager::GetInst();
        if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b7fb232;
        pUVar3 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_InteractionAbility_LiftUp::OnCompleteLoadInstallGuideActor",0x3e,
                   Yes);
        pwVar9 = L"installGuideActorBPClass is nullptr.";
        uVar8 = 0x5da;
      }
      else {
        local_1a8.Rotation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        local_1a8.Rotation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        local_1a8.Translation.XY.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        local_1a8.Translation.ZW.m128d_f64 =
             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        local_1a8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64
        ;
        local_1a8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64
        ;
        this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
        FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_218);
        local_218[0x32] = local_218[0x32] | 4;
        local_218[0x30] = AlwaysSpawn;
        local_218[0x31] = MultiplyWithRoot;
        local_218._16_8_ = (AActor *)0x0;
        local_218._24_8_ = (APawn *)0x0;
        pAVar6 = UWorld::SpawnActor(this_00,pUVar4,&local_1a8,(FActorSpawnParameters *)local_218);
        if (pAVar6 == (AActor *)0x0) {
LAB_14b7fb094:
          pAVar6 = (AActor *)0x0;
        }
        else {
          pUVar4 = Z_Construct_UClass_ADS_InstallGuideActor_NoRegister();
          iVar1 = (int)pUVar4->_padding_;
          if ((*(int *)(pAVar6->_padding_ + 0x38) < iVar1) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(pAVar6->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar4->_padding_)) goto LAB_14b7fb094;
        }
        if (local_218._64_8_ != 0) {
          plVar7 = (longlong *)(local_218 + 0x50);
          if ((longlong *)local_218._104_8_ != (longlong *)0x0) {
            plVar7 = (longlong *)local_218._104_8_;
          }
          (**(code **)(*plVar7 + 0x10))();
        }
        local_240 = pAVar6;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar6 != (AActor *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)pAVar6);
        }
        FWeakObjectPtr::operator=(&(this->InstallGuideActor).WeakPtr,(FObjectPtr)&local_240);
        bVar2 = TWeakObjectPtr<ADS_InstallGuideActor,FWeakObjectPtr>::UEOpEquals
                          (&this->InstallGuideActor,(void *)0x0);
        if (bVar2) {
          pUVar3 = UDS_LogManager::GetInst();
          if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b7fb232;
          pUVar3 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_InteractionAbility_LiftUp::OnCompleteLoadInstallGuideActor",
                     0x3e,Yes);
          pwVar9 = L"InstallGuideActor is nullptr.";
          uVar8 = 0x5e4;
        }
        else {
          pAVar6 = (AActor *)FWeakObjectPtr::Get(&(this->InstallGuideActor).WeakPtr);
          UGameplayStatics::FinishSpawningActor(pAVar6,&local_1a8,MultiplyWithRoot);
          bVar2 = InitInstallGuideActor(this);
          if (bVar2) goto LAB_14b7fb232;
          pUVar3 = UDS_LogManager::GetInst();
          if (pUVar3 == (UDS_LogManager *)0x0) goto LAB_14b7fb232;
          pUVar3 = UDS_LogManager::GetInst();
          local_148._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_148,"UDS_InteractionAbility_LiftUp::OnCompleteLoadInstallGuideActor",
                     0x3e,Yes);
          pwVar9 = L"Failed to InitInstallGuideActor().";
          uVar8 = 0x5ef;
        }
      }
    }
  }
  UDS_LogManager::PrintLog(pUVar3,1,Warning,local_148.Ptr,uVar8,pwVar9);
  if ((UClass *)local_148._padding_ != (UClass *)0x0) {
    FMemory::Free((void *)local_148._padding_);
  }
LAB_14b7fb232:
  if (local_238.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_238.SubPathString.Data.AllocatorInstance.Data);
  }
  return;
}

// OnDeactivateAbility @ 14b7fb620

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
UDS_InteractionAbility_LiftUp::OnDeactivateAbility
          (UDS_InteractionAbility_LiftUp *this,bool *param_1)

{
  TSharedPtr<FStreamableHandle,1> *pTVar1;
  undefined8 uVar2;
  bool bVar3;
  UDS_SkillData *this_00;
  FTimerManager *pFVar4;
  FTimerData *pFVar5;
  FGameplayTag *pFVar6;
  AActor *pAVar7;
  UDS_InputEvent *pUVar8;
  UObject *pUVar9;
  FDS_EntityBase *pFVar10;
  TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr> *this_01;
  FWeakObjectPtr local_res8;
  undefined8 local_res18;
  undefined8 local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  
  UDS_InteractionAbility_ObjectHandling::OnDeactivateAbility
            ((UDS_InteractionAbility_ObjectHandling *)this,param_1);
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ThrowStartSkillInfo).StartLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ThrowStartSkillInfo).StartLocation.field0_0x0._s_0.Y = (double)uVar2;
  (this->ThrowStartSkillInfo).StartLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ThrowStartSkillInfo).EndLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ThrowStartSkillInfo).EndLocation.field0_0x0._s_0.Y = (double)uVar2;
  (this->ThrowStartSkillInfo).EndLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ThrowStartSkillInfo).InitialVelocity.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ThrowStartSkillInfo).InitialVelocity.field0_0x0._s_0.Y = (double)uVar2;
  (this->ThrowStartSkillInfo).InitialVelocity.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  (this->ThrowStartSkillInfo).TotalTime = 0.0;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ThrowStartSkillInfo).ImpactTime = 0.0;
  (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.X =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.Y = (double)uVar2;
  (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.Z =
       UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  bVar3 = TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>::UEOpEquals
                    (&this->CurrentThrowSkillData,(void *)0x0);
  if (!bVar3) {
    this_00 = (UDS_SkillData *)FWeakObjectPtr::Get(&(this->CurrentThrowSkillData).WeakPtr);
    UDS_SkillData::EndSkill(this_00);
    local_res8.ObjectIndex = 0;
    local_res8.ObjectSerialNumber = 0;
    local_res18 = 0;
    FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
    (this->CurrentThrowSkillData).WeakPtr = local_res8;
  }
  pFVar4 = FDS_TimerManager::Get((UObject *)0x0);
  pFVar5 = FTimerManager::FindTimer(pFVar4,&this->LiftUpEventTimer_ToLiftUpAttach);
  if (pFVar5 != (FTimerData *)0x0) {
    FTimerManager::InternalClearTimer
              (pFVar4,(FTimerHandle)(this->LiftUpEventTimer_ToLiftUpAttach).Handle);
  }
  (this->LiftUpEventTimer_ToLiftUpAttach).Handle = 0;
  pFVar4 = FDS_TimerManager::Get((UObject *)0x0);
  pFVar5 = FTimerManager::FindTimer(pFVar4,&this->LiftUpEventTimer_ToThrowDetach);
  if (pFVar5 != (FTimerData *)0x0) {
    FTimerManager::InternalClearTimer
              (pFVar4,(FTimerHandle)(this->LiftUpEventTimer_ToThrowDetach).Handle);
  }
  (this->LiftUpEventTimer_ToThrowDetach).Handle = 0;
  pFVar4 = FDS_TimerManager::Get((UObject *)0x0);
  pFVar5 = FTimerManager::FindTimer(pFVar4,&this->LiftUpEventTimer_ToPutDownDetach);
  if (pFVar5 != (FTimerData *)0x0) {
    FTimerManager::InternalClearTimer
              (pFVar4,(FTimerHandle)(this->LiftUpEventTimer_ToPutDownDetach).Handle);
  }
  (this->LiftUpEventTimer_ToPutDownDetach).Handle = 0;
  local_res8.ObjectIndex._0_1_ = 0x56;
  pFVar6 = FDS_GameplayTags::GetStateTag((EDS_StateTagType *)&local_res8);
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar6);
  local_res8.ObjectIndex._0_1_ = 0x57;
  pFVar6 = FDS_GameplayTags::GetStateTag((EDS_StateTagType *)&local_res8);
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar6);
  local_res8.ObjectIndex._0_1_ = 0x58;
  pFVar6 = FDS_GameplayTags::GetStateTag((EDS_StateTagType *)&local_res8);
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar6);
  local_res8.ObjectIndex._0_1_ = 0x59;
  pFVar6 = FDS_GameplayTags::GetStateTag((EDS_StateTagType *)&local_res8);
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar6);
  local_res8.ObjectIndex._0_1_ = 0x5a;
  pFVar6 = FDS_GameplayTags::GetStateTag((EDS_StateTagType *)&local_res8);
  UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar6);
  if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
    bVar3 = TWeakObjectPtr<ADS_InstallGuideActor,FWeakObjectPtr>::UEOpEquals
                      (&this->InstallGuideActor,(void *)0x0);
    if (!bVar3) {
      pAVar7 = (AActor *)FWeakObjectPtr::Get(&(this->InstallGuideActor).WeakPtr);
      AActor::Destroy(pAVar7,false,true);
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res18 = 0;
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
      (this->InstallGuideActor).WeakPtr = local_res8;
    }
    pTVar1 = &this->AsyncLoadHandle_InstallGuideActor;
    if (pTVar1->Object != (FStreamableHandle *)0x0) {
      FStreamableHandle::CancelHandle(pTVar1->Object);
      local_38 = 0;
      FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar1 != (TSharedPtr<FStreamableHandle,1> *)&local_38) {
        pTVar1->Object = (FStreamableHandle *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->AsyncLoadHandle_InstallGuideActor).SharedReferenceCount,&FStack_30);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_30.ReferenceController);
    }
    pUVar8 = UDS_InputEvent::GetEvent();
    if (pUVar8 != (UDS_InputEvent *)0x0) {
      FDS_FilteredEventDelegate<enum_EDS_KeyActionType_const_,enum_EDS_KeyActionType_const_,enum_ETriggerEvent_const_,FInputActionValue_const_&>
      ::Remove<UDS_InteractionAbility_LiftUp>(&pUVar8->OnInputEvent,this);
    }
    CloseInputKeyGroupWindow(this);
    pTVar1 = &this->AsyncLoadHandle_TrajectoryEffect;
    if (pTVar1->Object != (FStreamableHandle *)0x0) {
      FStreamableHandle::CancelHandle(pTVar1->Object);
      local_28 = 0;
      FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar1 != (TSharedPtr<FStreamableHandle,1> *)&local_28) {
        pTVar1->Object = (FStreamableHandle *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->AsyncLoadHandle_TrajectoryEffect).SharedReferenceCount,&FStack_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_20.ReferenceController);
    }
    bVar3 = TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals
                      (&this->NC_TrajectoryEffect,(void *)0x0);
    if (!bVar3) {
      pUVar9 = FWeakObjectPtr::Get(&(this->NC_TrajectoryEffect).WeakPtr);
      (**(code **)(*(longlong *)pUVar9 + 0x4a0))(pUVar9);
      (this->NC_TrajectoryEffect).WeakPtr = (FWeakObjectPtr)0x0;
    }
  }
  this_01 = &this->InteractionAbilityData;
  bVar3 = TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>::UEOpEquals
                    (this_01,(void *)0x0);
  if (!bVar3) {
    pUVar9 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    if (pUVar9[3].field_0x14 == '\x01') {
      pUVar9 = FWeakObjectPtr::Get(&this_01->WeakPtr);
      pFVar10 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar9[2].field_0x8);
      if (pFVar10 != (FDS_EntityBase *)0x0) {
        (**(code **)(pFVar10->_padding_ + 0x150))(pFVar10);
        bVar3 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_res8,(void *)0x0);
        if (!bVar3) {
          pAVar7 = (AActor *)FWeakObjectPtr::Get(&local_res8);
          AActor::DetachFromActor(pAVar7,&FDetachmentTransformRules::KeepWorldTransform);
        }
      }
    }
    local_res8.ObjectIndex._0_1_ = 0x89;
    pUVar9 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    FDS_EntityBase::RemoveStateTag((ulong64 *)&pUVar9[2].field_0x8,(EDS_StateTagType *)&local_res8);
    pUVar9 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pUVar9 + 4));
    pUVar9 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pUVar9[4].field_0x18);
    pUVar9 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pUVar9[5].field_0x8);
    pUVar9 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pUVar9[5].field_0x20);
    pUVar9 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&pUVar9[6].field_0x10);
    pUVar9 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)(pUVar9 + 7));
    pUVar9 = FWeakObjectPtr::Get(&this_01->WeakPtr);
    (**(code **)(*(longlong *)pUVar9 + 0x2c8))(pUVar9);
  }
  return;
}

// OnInputEvent_PutDown @ 14b7fdab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_LiftUp::OnInputEvent_PutDown
          (UDS_InteractionAbility_LiftUp *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  if (param_2 == Completed) {
    local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
    bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>::UEOpEquals
                      (&this->InteractionAbilityData,(void *)0x0);
    if (bVar1) {
      pUVar2 = UDS_LogManager::GetInst();
      if (pUVar2 != (UDS_LogManager *)0x0) {
        pUVar2 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_InteractionAbility_LiftUp::OnInputEvent_PutDown",0x33,Yes);
        UDS_LogManager::PrintLog
                  (pUVar2,1,Warning,local_138.Ptr,0x36f,L"InteractionAbilityData is nullptr.");
        if ((void *)local_138._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_138._padding_);
        }
      }
    }
    else {
      pUVar3 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
      if (*(int *)&pUVar3[3].field_0x10 == 2) {
        pUVar3 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
        pUVar3[3].field_0x25 = 1;
        OnProcess_PutDown(this);
        FDS_ObjectHandlingService::SendHandlingEnd();
      }
    }
  }
  return;
}

// OnInputEvent_Throw @ 14b7fdbe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_LiftUp::OnInputEvent_Throw
          (UDS_InteractionAbility_LiftUp *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr> *this_00;
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_188 [32];
  uint uVar4;
  wchar_t *pwVar5;
  TDelegate<void___cdecl(EDS_MessageResponseType_const_&),FDefaultDelegateUserPolicy> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  if (param_2 != Completed) {
    return;
  }
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  this_00 = &this->InteractionAbilityData;
  bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>::UEOpEquals
                    (this_00,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_LiftUp::OnInputEvent_Throw",0x31,Yes);
    pwVar5 = L"InteractionAbilityData is nullptr.";
    uVar4 = 0x32f;
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    if ((*(int *)&pUVar3[3].field_0x10 != 2) &&
       (pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr), *(int *)&pUVar3[3].field_0x10 != 4)) {
      return;
    }
    pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    if (*(int *)&pUVar3[3].field_0x10 != 2) {
      pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      if (*(int *)&pUVar3[3].field_0x10 != 4) {
        return;
      }
      bVar1 = TWeakObjectPtr<ADS_InstallGuideActor,FWeakObjectPtr>::UEOpEquals
                        (&this->InstallGuideActor,(void *)0x0);
      if (bVar1) {
        return;
      }
      pUVar3 = FWeakObjectPtr::Get(&(this->InstallGuideActor).WeakPtr);
      if (pUVar3[0x12].field_0x21 == '\x01') {
        local_158._0_8_ = 0;
        local_158._8_8_ = 0;
        local_158._16_4_ = 0;
        UDS_UIMessageManager::OpenMsgByStringUi(0x61a88,Alert_None_01,&local_158);
        return;
      }
      bVar1 = RequestSkill_Throw(this);
      if (!bVar1) {
        pUVar2 = UDS_LogManager::GetInst();
        if (pUVar2 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar2 = UDS_LogManager::GetInst();
        local_138._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_138,"UDS_InteractionAbility_LiftUp::OnInputEvent_Throw",0x31,Yes);
        UDS_LogManager::PrintLog
                  (pUVar2,1,Warning,local_138.Ptr,0x35a,L"Failed to RequestSkill_Throw().");
        if ((void *)local_138._padding_ == (void *)0x0) {
          return;
        }
        FMemory::Free((void *)local_138._padding_);
        return;
      }
      pUVar3 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      pUVar3[3].field_0x24 = 1;
      OnProcess_Throw(this);
      return;
    }
    bVar1 = RequestSkill_ThrowReady(this);
    if (bVar1) {
      OnProcess_ThrowReady(this);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_LiftUp::OnInputEvent_Throw",0x31,Yes);
    pwVar5 = L"Failed to RequestSkill_ThrowReady().";
    uVar4 = 0x33f;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OnInputEvent_ThrowCancel @ 14b7fdea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_LiftUp::OnInputEvent_ThrowCancel
          (UDS_InteractionAbility_LiftUp *this,EDS_KeyActionType param_1,ETriggerEvent param_2,
          FInputActionValue *param_3)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  undefined1 auStackY_168 [32];
  uint uVar4;
  wchar_t *pwVar5;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  if (param_2 != Completed) {
    return;
  }
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_LiftUp::OnInputEvent_ThrowCancel",0x37,Yes);
    pwVar5 = L"InteractionAbilityData is nullptr.";
    uVar4 = 0x38b;
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    if (*(int *)&pUVar3[3].field_0x10 != 4) {
      return;
    }
    bVar1 = RequestSkill_ThrowCancel(this);
    if (bVar1) {
      OnProcess_ThrowCancel(this);
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar2 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_LiftUp::OnInputEvent_ThrowCancel",0x37,Yes);
    pwVar5 = L"Failed to RequestSkill_ThrowCancel().";
    uVar4 = 0x397;
  }
  UDS_LogManager::PrintLog(pUVar2,1,Warning,local_138.Ptr,uVar4,pwVar5);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OnLiftUpEvent @ 14b7ff410

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
UDS_InteractionAbility_LiftUp::OnLiftUpEvent
          (UDS_InteractionAbility_LiftUp *this,EDS_LiftUpEvent *param_1)

{
  TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr> *this_00;
  FDS_ThrowStartSkillInfo *pFVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  code *pcVar8;
  FName FVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  UDS_LogManager *pUVar14;
  UWorld *pUVar15;
  UObject *pUVar16;
  FDS_EntityBase *pFVar17;
  FName *pFVar18;
  USceneComponent *pUVar19;
  UDS_MovementCore *pUVar20;
  TVector<double> *pTVar21;
  AActor *pAVar22;
  UDS_InteractionAbilityData_LiftUp *pUVar23;
  UDS_AbilitySystemComponent *this_01;
  float fVar24;
  double dVar25;
  double dVar26;
  undefined1 auStackY_2b8 [32];
  uint uVar27;
  wchar_t *pwVar28;
  EDS_AbilityInputPolicy local_288 [8];
  FName local_280;
  FWeakObjectPtr local_278;
  FWeakObjectPtr local_270;
  FWeakObjectPtr local_268;
  TRotator<double> local_260;
  TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> local_248 [2];
  TVector<double>_u_0 local_238;
  TVector<double>_u_0 local_218;
  TVector<double>_u_0 local_1f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1d8;
  undefined1 local_b8 [32];
  double local_98;
  double dStack_90;
  double local_88;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  this_00 = &this->InteractionAbilityData;
  bVar13 = TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>::UEOpEquals
                     (this_00,(void *)0x0);
  if (bVar13) {
    pUVar14 = UDS_LogManager::GetInst();
    if (pUVar14 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar14 = UDS_LogManager::GetInst();
    local_1d8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_1d8,"UDS_InteractionAbility_LiftUp::OnLiftUpEvent",0x2c,Yes);
    pwVar28 = L"InteractionAbilityData is nullptr.";
    uVar27 = 0x260;
LAB_14b7ff4a8:
    UDS_LogManager::PrintLog(pUVar14,1,Warning,local_1d8.Ptr,uVar27,pwVar28);
    if ((void *)local_1d8._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_1d8._padding_);
    return;
  }
  pUVar15 = UDS_GameInstance::GetGameInstanceWorld();
  if (pUVar15 == (UWorld *)0x0) {
    pUVar14 = UDS_LogManager::GetInst();
    if (pUVar14 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar14 = UDS_LogManager::GetInst();
    local_1d8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_1d8,"UDS_InteractionAbility_LiftUp::OnLiftUpEvent",0x2c,Yes);
    pwVar28 = L"world is nullptr.";
    uVar27 = 0x268;
    goto LAB_14b7ff4a8;
  }
  pUVar16 = FWeakObjectPtr::Get(&this_00->WeakPtr);
  pFVar17 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar16[2].field_0x8);
  if (pFVar17 == (FDS_EntityBase *)0x0) {
    pUVar14 = UDS_LogManager::GetInst();
    if (pUVar14 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar14 = UDS_LogManager::GetInst();
    local_1d8._padding_ = (longlong)pFVar17;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_1d8,"UDS_InteractionAbility_LiftUp::OnLiftUpEvent",0x2c,Yes);
    pwVar28 = L"targetEntity is nullptr.";
    uVar27 = 0x270;
LAB_14b7ffcbb:
    UDS_LogManager::PrintLog(pUVar14,1,Warning,local_1d8.Ptr,uVar27,pwVar28);
    if ((FDS_EntityBase *)local_1d8._padding_ == (FDS_EntityBase *)0x0) {
      return;
    }
    FMemory::Free((void *)local_1d8._padding_);
    return;
  }
  FWeakObjectPtr::Get(&this_00->WeakPtr);
  UDS_MovementCore::GetMovementCore((ulong64)&local_268);
  bVar13 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                     ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_268,(void *)0x0);
  if (bVar13) {
    pUVar14 = UDS_LogManager::GetInst();
    if (pUVar14 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar14 = UDS_LogManager::GetInst();
    local_1d8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_1d8,"UDS_InteractionAbility_LiftUp::OnLiftUpEvent",0x2c,Yes);
    pwVar28 = L"targetMovementCore is nullptr.";
    uVar27 = 0x278;
    goto LAB_14b7ffcbb;
  }
  (**(code **)(*(longlong *)this->_padding_ + 0x80))((longlong *)this->_padding_,&local_270);
  (**(code **)(pFVar17->_padding_ + 0x80))(pFVar17);
  bVar13 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                     ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_270,
                      (void *)0x0);
  if ((bVar13) ||
     (bVar13 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                         (local_248,(void *)0x0), bVar13)) {
    pUVar14 = UDS_LogManager::GetInst();
    if (pUVar14 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar14 = UDS_LogManager::GetInst();
    local_1d8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_1d8,"UDS_InteractionAbility_LiftUp::OnLiftUpEvent",0x2c,Yes);
    pwVar28 = L"SkeletalMeshComponent is nullptr.";
    uVar27 = 0x281;
    goto LAB_14b7ffcbb;
  }
  (**(code **)(pFVar17->_padding_ + 0x150))(pFVar17);
  bVar13 = TWeakObjectPtr<AActor,FWeakObjectPtr>::UEOpEquals
                     ((TWeakObjectPtr<AActor,FWeakObjectPtr> *)&local_278,(void *)0x0);
  if (bVar13) {
    pUVar14 = UDS_LogManager::GetInst();
    if (pUVar14 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar14 = UDS_LogManager::GetInst();
    local_1d8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_1d8,"UDS_InteractionAbility_LiftUp::OnLiftUpEvent",0x2c,Yes);
    pwVar28 = L"targetEntityActor is nullptr.";
    uVar27 = 0x289;
    goto LAB_14b7ffcbb;
  }
  switch(*param_1) {
  case To_LiftUp_Attach:
    pUVar23 = (UDS_InteractionAbilityData_LiftUp *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    local_280.ComparisonIndex.Value = 1;
    UDS_InteractionAbilityData_LiftUp::SetLiftUpState(pUVar23,(EDS_LiftUpState *)&local_280);
    local_288[0] = BlockInput;
    UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_288);
    pUVar16 = FWeakObjectPtr::Get(&local_270);
    pcVar8 = *(code **)(*(longlong *)pUVar16 + 0x520);
    pFVar18 = ::FName::FName(&local_280,L"ObjectAct_01");
    (*pcVar8)(pUVar16,local_b8,*pFVar18);
    pUVar20 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_MovementCore::GetActorForwardVector(pUVar20,(TVector<double> *)&local_218._s_0);
    dVar25 = (double)this->AttachFrontOffset;
    local_238._s_0.Z = local_88;
    fVar3 = pFVar17->ScaledCapsuleHalfHeight;
    fVar2 = this->AttachHeightOffset;
    pUVar20 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_MovementCore::GetActorRotation(pUVar20,&local_260);
    local_260.Yaw = local_260.Yaw + (double)this->AttachRelativeYaw;
    local_260.Pitch = 0.0;
    local_260.Roll = 0.0;
    pAVar22 = (AActor *)FWeakObjectPtr::Get(&local_278);
    local_238._s_0.X = local_260.Pitch;
    local_238._s_0.Y = local_260.Yaw;
    local_238._s_0.Z = local_260.Roll;
    local_1f8._s_0.X = local_218._s_0.X * dVar25 + local_98;
    local_1f8._s_0.Y = local_218._s_0.Y * dVar25 + dStack_90;
    local_1f8._s_0.Z = local_218._s_0.Z * dVar25 + local_88 + (double)fVar2 + (double)fVar3;
    AActor::SetActorLocationAndRotation
              (pAVar22,(TVector<double> *)&local_1f8._s_0,(TRotator<double> *)&local_238._s_0,false,
               (FHitResult *)0x0,None);
    pAVar22 = (AActor *)FWeakObjectPtr::Get(&local_278);
    pFVar18 = ::FName::FName(&local_280,L"ObjectAct_01");
    FVar9 = *pFVar18;
    pUVar19 = (USceneComponent *)FWeakObjectPtr::Get(&local_270);
    AActor::AttachToComponent(pAVar22,pUVar19,&FAttachmentTransformRules::KeepWorldTransform,FVar9);
    break;
  case To_LiftUp_Complete:
    pUVar23 = (UDS_InteractionAbilityData_LiftUp *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    local_280.ComparisonIndex.Value = 2;
    UDS_InteractionAbilityData_LiftUp::SetLiftUpState(pUVar23,(EDS_LiftUpState *)&local_280);
    local_288[0] = None;
    UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_288);
    cVar7 = *(char *)((longlong)&this->_padding_ + 1);
    goto joined_r0x00014b7ffa7b;
  case To_PreThrow_BeginFinish:
    pUVar23 = (UDS_InteractionAbilityData_LiftUp *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    local_280.ComparisonIndex.Value = 4;
    UDS_InteractionAbilityData_LiftUp::SetLiftUpState(pUVar23,(EDS_LiftUpState *)&local_280);
    local_288[0] = BlockInput;
    UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_288);
    if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
      CloseInputKeyGroupWindow(this);
      OpenInputKeyGroupWindow_Throw(this);
      bVar13 = SpawnInstallGuideActor(this);
      if ((!bVar13) && (pUVar14 = UDS_LogManager::GetInst(), pUVar14 != (UDS_LogManager *)0x0)) {
        pUVar14 = UDS_LogManager::GetInst();
        local_1d8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_1d8,"UDS_InteractionAbility_LiftUp::OnLiftUpEvent",0x2c,Yes);
        UDS_LogManager::PrintLog
                  (pUVar14,1,Warning,local_1d8.Ptr,0x2d5,L"Failed to SpawnInstallGuideActor().");
        if ((void *)local_1d8._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_1d8._padding_);
        }
      }
    }
    break;
  case To_PreThrow_EndFinish:
    pUVar23 = (UDS_InteractionAbilityData_LiftUp *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    local_280.ComparisonIndex.Value = 2;
    UDS_InteractionAbilityData_LiftUp::SetLiftUpState(pUVar23,(EDS_LiftUpState *)&local_280);
    local_288[0] = None;
    UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_288);
    cVar7 = *(char *)((longlong)&this->_padding_ + 1);
joined_r0x00014b7ffa7b:
    if (cVar7 == '\x01') {
      CloseInputKeyGroupWindow(this);
      OpenInputKeyGroupWindow_LiftUp(this);
    }
    break;
  case To_Throw_Detach:
    pUVar20 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_268);
    pFVar1 = &this->ThrowStartSkillInfo;
    pTVar21 = UDS_MovementCore::GetActorLocation(pUVar20,(TVector<double> *)&local_238._s_0);
    fVar3 = (this->ThrowStartSkillInfo).ImpactTime;
    dVar25 = (pTVar21->field0_0x0)._s_0.Y;
    (pFVar1->StartLocation).field0_0x0._s_0.X = (pTVar21->field0_0x0)._s_0.X;
    (this->ThrowStartSkillInfo).StartLocation.field0_0x0._s_0.Y = dVar25;
    fVar2 = __real_322bcc77;
    fVar24 = (float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    (this->ThrowStartSkillInfo).StartLocation.field0_0x0._s_0.Z = (pTVar21->field0_0x0)._s_0.Z;
    if (fVar2 < fVar24) {
      dVar25 = (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.Y;
      dVar4 = (this->ThrowStartSkillInfo).StartLocation.field0_0x0._s_0.Y;
      dVar5 = (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.Z;
      dVar6 = (this->ThrowStartSkillInfo).StartLocation.field0_0x0._s_0.Z;
      dVar26 = (double)(fVar3 * fVar3);
      dVar10 = ::DS_GRAVITY_VEC.field0_0x0._s_0.Y * __real_3fe0000000000000;
      dVar12 = __real_3ff0000000000000 / (double)fVar3;
      dVar11 = ::DS_GRAVITY_VEC.field0_0x0._s_0.Z * __real_3fe0000000000000;
      (this->ThrowStartSkillInfo).InitialVelocity.field0_0x0._s_0.X =
           (((this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.X -
            (pFVar1->StartLocation).field0_0x0._s_0.X) -
           ::DS_GRAVITY_VEC.field0_0x0._s_0.X * __real_3fe0000000000000 * dVar26) * dVar12;
      (this->ThrowStartSkillInfo).InitialVelocity.field0_0x0._s_0.Y =
           ((dVar25 - dVar4) - dVar10 * dVar26) * dVar12;
      (this->ThrowStartSkillInfo).InitialVelocity.field0_0x0._s_0.Z =
           ((dVar5 - dVar6) - dVar11 * dVar26) * dVar12;
    }
    pAVar22 = (AActor *)FWeakObjectPtr::Get(&local_278);
    AActor::DetachFromActor(pAVar22,&FDetachmentTransformRules::KeepWorldTransform);
    pUVar23 = (UDS_InteractionAbilityData_LiftUp *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    local_280.ComparisonIndex.Value = 7;
    UDS_InteractionAbilityData_LiftUp::SetLiftUpState(pUVar23,(EDS_LiftUpState *)&local_280);
    local_288[0] = BlockInput;
    UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_288);
    pUVar16 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    UDS_NPCClientControlAbility_Thrown::TryActivate
              ((ulong64 *)&pUVar16[2].field_0x8,(ulong64 *)&this->_padding_,pFVar1);
    break;
  case To_PutDown_Detach:
    pAVar22 = (AActor *)FWeakObjectPtr::Get(&local_278);
    AActor::DetachFromActor(pAVar22,&FDetachmentTransformRules::KeepWorldTransform);
    pUVar23 = (UDS_InteractionAbilityData_LiftUp *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    local_280.ComparisonIndex.Value = 9;
    UDS_InteractionAbilityData_LiftUp::SetLiftUpState(pUVar23,(EDS_LiftUpState *)&local_280);
    local_288[0] = BlockInput;
    UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_288);
    break;
  case Finish:
    local_288[0] = EndIfInput;
    this_01 = (UDS_AbilitySystemComponent *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_AbilitySystemComponent::DeactivateAbilityByTag
              (this_01,(FGameplayTag *)&this->_padding_,local_288);
  }
  return;
}

// OnOpenInputKeyGroupWindow_LiftUp @ 14b8000e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_LiftUp::OnOpenInputKeyGroupWindow_LiftUp
          (UDS_InteractionAbility_LiftUp *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  FDS_ViewModelContext_InputKeyGroup *pFVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UDS_InteractionAbilityData_LiftUp *this_00;
  EDS_KeyActionType *pEVar5;
  int iVar6;
  undefined1 auStackY_2d8 [32];
  EDS_KeyActionType local_2a8 [2];
  FWeakObjectPtr local_2a0;
  EDS_KeyActionType local_298 [2];
  UDS_UserWidget *local_290;
  TSharedPtr<FDS_ViewModelContext_InputKeyGroup,1> local_288;
  TSharedPtr<FDS_ViewModelContext,1> local_278;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_268;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  if (param_1 == (UDS_UserWidget *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_268._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_268,"UDS_InteractionAbility_LiftUp::OnOpenInputKeyGroupWindow_LiftUp",0x3f,
                 Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_268.Ptr,0x55e,L"InWidget is nullptr.");
      if ((void *)local_268._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_268._padding_);
      }
    }
  }
  else {
    bVar3 = TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>::UEOpEquals
                      (&this->InteractionAbilityData,(void *)0x0);
    if (bVar3) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 != (UDS_LogManager *)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        local_148._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_148,"UDS_InteractionAbility_LiftUp::OnOpenInputKeyGroupWindow_LiftUp",0x3f
                   ,Yes);
        UDS_LogManager::PrintLog
                  (pUVar4,1,Warning,local_148.Ptr,0x565,L"InteractionAbilityData is nullptr.");
        if ((void *)local_148._padding_ != (void *)0x0) {
          FMemory::Free((void *)local_148._padding_);
        }
      }
    }
    else {
      MakeContext<FDS_ViewModelContext_InputKeyGroup>(&local_288);
      pFVar2 = local_288.Object;
      if ((local_288.Object == (FDS_ViewModelContext_InputKeyGroup *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(undefined4 *)&pFVar2->_padding_ = 0x15e;
      pFVar2->InputKeyGroupType = Ingame;
      pFVar2->bFollowCursor = true;
      this_00 = (UDS_InteractionAbilityData_LiftUp *)
                FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
      bVar3 = UDS_InteractionAbilityData_LiftUp::IsAbleThrow(this_00);
      if (bVar3) {
        local_298[0] = IA_PutDown;
        pEVar5 = local_298;
        local_298[1] = 0xc354;
        iVar6 = 2;
      }
      else {
        local_2a8[0] = IA_PutDown;
        pEVar5 = local_2a8;
        iVar6 = 1;
      }
      TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>::
      CopyToEmpty<enum_EDS_KeyActionType,int>
                (&pFVar2->DefaultKeys,pEVar5,iVar6,(pFVar2->DefaultKeys).ArrayMax);
      local_278.Object = (FDS_ViewModelContext *)local_288.Object;
      local_278.SharedReferenceCount.ReferenceController =
           local_288.SharedReferenceCount.ReferenceController;
      if (local_288.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_288.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_288.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_2a0.ObjectIndex = 0;
      local_2a0.ObjectSerialNumber = 0;
      local_290 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_2a0,(FObjectPtr)&local_290);
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_2a0,&local_278,false);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_288.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// OnOpenInputKeyGroupWindow_Throw @ 14b800370

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_LiftUp::OnOpenInputKeyGroupWindow_Throw
          (UDS_InteractionAbility_LiftUp *this,UDS_UserWidget *param_1)

{
  code *pcVar1;
  FDS_ViewModelContext_InputKeyGroup *pFVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  undefined1 auStackY_1a8 [32];
  FWeakObjectPtr local_178;
  EDS_KeyActionType local_170 [2];
  UDS_UserWidget *local_168 [2];
  TSharedPtr<FDS_ViewModelContext_InputKeyGroup,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  if (param_1 == (UDS_UserWidget *)0x0) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_LiftUp::OnOpenInputKeyGroupWindow_Throw",0x3e,
                 Yes);
      UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,0x58d,L"InWidget is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    MakeContext<FDS_ViewModelContext_InputKeyGroup>(&local_158);
    pFVar2 = local_158.Object;
    if (local_158.Object == (FDS_ViewModelContext_InputKeyGroup *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *(undefined4 *)&pFVar2->_padding_ = 0x15e;
    pFVar2->InputKeyGroupType = Ingame;
    pFVar2->bFollowCursor = true;
    local_170[0] = IA_ThrowCancel;
    local_170[1] = 0xc354;
    TArray<enum_EDS_KeyActionType,TSizedDefaultAllocator<32>_>::
    CopyToEmpty<enum_EDS_KeyActionType,int>
              (&pFVar2->DefaultKeys,local_170,2,(pFVar2->DefaultKeys).ArrayMax);
    local_148.Object = (FDS_ViewModelContext *)local_158.Object;
    local_148.SharedReferenceCount.ReferenceController =
         local_158.SharedReferenceCount.ReferenceController;
    if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    local_178.ObjectIndex = 0;
    local_178.ObjectSerialNumber = 0;
    local_168[0] = param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&local_178,(FObjectPtr)local_168);
    DS_ViewModelTemplateUtil::BindViewModel
              ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_178,&local_148,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
  }
  return;
}

// OnPostActivateAbility @ 14b802300

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
UDS_InteractionAbility_LiftUp::OnPostActivateAbility(UDS_InteractionAbility_LiftUp *this)

{
  undefined1 *puVar1;
  TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr> *this_00;
  code *pcVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  bool bVar7;
  char cVar8;
  UDS_LogManager *pUVar9;
  UObject *pUVar10;
  undefined8 *puVar11;
  ulong64 uVar12;
  UDS_InteractionAbilityData_LiftUp *pUVar13;
  UDS_InputEvent *pUVar14;
  FDS_EntityBase *pFVar15;
  FName *pFVar16;
  UDS_MovementCore *pUVar17;
  FGameplayTag *pFVar18;
  FTimerManager *this_01;
  undefined1 *puVar19;
  int iVar20;
  int *piVar21;
  TMap<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(EDS_KeyActionType,ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>_>
  *this_02;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  uint uVar31;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  double dVar32;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  double dVar38;
  undefined1 auVar37 [16];
  undefined1 auVar39 [16];
  double dVar40;
  double dVar42;
  undefined1 auVar41 [16];
  double dVar43;
  double dVar44;
  undefined1 auStackY_2c8 [32];
  wchar_t *pwVar45;
  EDS_AbilityInputPolicy local_288 [16];
  undefined1 local_278 [24];
  UObject *local_260;
  undefined1 local_258 [40];
  FMRSWRecursiveAccessDetector *local_230;
  char local_228;
  UObject *local_220;
  FWeakObjectPtr local_218;
  FWeakObjectPtr local_210;
  TRotator<double> local_208;
  TRotator<double> local_1f0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_1d8;
  undefined1 local_b8 [32];
  FWeakObjectPtr local_98;
  FStreamableHandle *pFStack_90;
  FSharedReferencer<1> local_88;
  undefined8 local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  UDS_InteractionAbility_ObjectHandling::OnPostActivateAbility
            ((UDS_InteractionAbility_ObjectHandling *)this);
  this_00 = &this->InteractionAbilityData;
  bVar7 = TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>::UEOpEquals
                    (this_00,(void *)0x0);
  if (bVar7) {
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar9 = UDS_LogManager::GetInst();
    local_1d8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_1d8,"UDS_InteractionAbility_LiftUp::OnPostActivateAbility",0x34,Yes);
    UDS_LogManager::PrintLog
              (pUVar9,1,Warning,local_1d8.Ptr,0x74,L"InteractionAbilityData is nullptr.");
    if ((void *)local_1d8._padding_ == (void *)0x0) {
      return;
    }
    FMemory::Free((void *)local_1d8._padding_);
    return;
  }
  if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
    pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    local_258._8_4_ = 0;
    local_258._0_8_ = OnLiftUpEvent;
    local_258._12_4_ = local_278._12_4_;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar10 + 4),
               (FWriteAccessScope *)local_278);
    local_260 = (UObject *)&pUVar10[4].field_0x8;
    puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_260);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6AXAEBW4EDS_LiftUpEvent___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_InteractionAbility_LiftUp____A6AXAEBW4EDS_LiftUpEvent___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_258._16_8_ = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=
                ((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)((longlong)local_258 + 0x10));
      ((FName *)(puVar11 + 4))->ComparisonIndex = (FNameEntryId)local_258._0_4_;
      ((FName *)(puVar11 + 4))->Number = local_258._4_4_;
      puVar11[5] = CONCAT44(local_258._12_4_,local_258._8_4_);
    }
    if (local_278[0x10] == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_278._8_8_,(FDestructionSentinel *)local_278);
    }
    pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    local_258._8_4_ = 0;
    local_258._0_8_ = OnProcess_PutDown;
    local_258._12_4_ = local_278._12_4_;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar10[5].field_0x20,
               (FWriteAccessScope *)local_278);
    local_260 = pUVar10 + 6;
    puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_260);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_InteractionAbility_LiftUp____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_258._16_8_ = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=
                ((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)((longlong)local_258 + 0x10));
      ((FName *)(puVar11 + 4))->ComparisonIndex = (FNameEntryId)local_258._0_4_;
      ((FName *)(puVar11 + 4))->Number = local_258._4_4_;
      puVar11[5] = CONCAT44(local_258._12_4_,local_258._8_4_);
    }
    if (local_278[0x10] == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)local_278._8_8_,(FDestructionSentinel *)local_278);
    }
    pUVar13 = (UDS_InteractionAbilityData_LiftUp *)FWeakObjectPtr::Get(&this_00->WeakPtr);
    bVar7 = UDS_InteractionAbilityData_LiftUp::IsAbleThrow(pUVar13);
    if (bVar7) {
      pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      local_258._8_4_ = 0;
      local_258._0_8_ = OnProcess_ThrowReady;
      local_258._12_4_ = local_278._12_4_;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar10[4].field_0x18,
                 (FWriteAccessScope *)local_278);
      local_260 = (UObject *)&pUVar10[4].field_0x20;
      puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_260);
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar12 = FDelegateHandle::GenerateNewID();
        puVar11[2] = uVar12;
        *puVar11 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_InteractionAbility_LiftUp____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar11[3] = 0;
        local_258._16_8_ = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=
                  ((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)((longlong)local_258 + 0x10));
        ((FName *)(puVar11 + 4))->ComparisonIndex = (FNameEntryId)local_258._0_4_;
        ((FName *)(puVar11 + 4))->Number = local_258._4_4_;
        puVar11[5] = CONCAT44(local_258._12_4_,local_258._8_4_);
      }
      if (local_278[0x10] == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_278._8_8_,(FDestructionSentinel *)local_278
                  );
      }
      pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      local_258._8_4_ = 0;
      local_258._0_8_ = OnProcess_Throw;
      local_258._12_4_ = local_278._12_4_;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar10[5].field_0x8,
                 (FWriteAccessScope *)local_278);
      local_260 = (UObject *)&pUVar10[5].field_0x10;
      puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_260);
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar12 = FDelegateHandle::GenerateNewID();
        puVar11[2] = uVar12;
        *puVar11 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_InteractionAbility_LiftUp____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar11[3] = 0;
        local_258._16_8_ = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=
                  ((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)((longlong)local_258 + 0x10));
        ((FName *)(puVar11 + 4))->ComparisonIndex = (FNameEntryId)local_258._0_4_;
        ((FName *)(puVar11 + 4))->Number = local_258._4_4_;
        puVar11[5] = CONCAT44(local_258._12_4_,local_258._8_4_);
      }
      if (local_278[0x10] == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_278._8_8_,(FDestructionSentinel *)local_278
                  );
      }
      pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
      local_258._8_4_ = 0;
      local_258._0_8_ = OnProcess_ThrowCancel;
      local_258._12_4_ = local_278._12_4_;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar10[6].field_0x10,
                 (FWriteAccessScope *)local_278);
      local_260 = (UObject *)&pUVar10[6].field_0x18;
      puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_260);
      if (puVar11 != (undefined8 *)0x0) {
        *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        uVar12 = FDelegateHandle::GenerateNewID();
        puVar11[2] = uVar12;
        *puVar11 = &
                   ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_InteractionAbility_LiftUp____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
        ;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar11[3] = 0;
        local_258._16_8_ = this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=
                  ((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)((longlong)local_258 + 0x10));
        ((FName *)(puVar11 + 4))->ComparisonIndex = (FNameEntryId)local_258._0_4_;
        ((FName *)(puVar11 + 4))->Number = local_258._4_4_;
        puVar11[5] = CONCAT44(local_258._12_4_,local_258._8_4_);
      }
      if (local_278[0x10] == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                  ((FMRSWRecursiveAccessDetector *)local_278._8_8_,(FDestructionSentinel *)local_278
                  );
      }
    }
    pUVar14 = UDS_InputEvent::GetEvent();
    if (pUVar14 != (UDS_InputEvent *)0x0) {
      this_02 = &(pUVar14->OnInputEvent).Subscriptions;
      local_258._24_4_ = 0xc356;
      local_278._0_8_ = OnInputEvent_PutDown;
      local_278._8_8_ = local_278._8_8_ & 0xffffffff00000000;
      puVar1 = &(pUVar14->OnInputEvent).Subscriptions.field_0x40;
      if (*(int *)&(pUVar14->OnInputEvent).Subscriptions.field_0x8 !=
          *(int *)&(pUVar14->OnInputEvent).Subscriptions.field_0x34) {
        puVar19 = *(undefined1 **)puVar1;
        if (*(undefined1 **)puVar1 == (undefined1 *)0x0) {
          puVar19 = &(pUVar14->OnInputEvent).Subscriptions.field_0x38;
        }
        iVar20 = *(int *)(puVar19 +
                         (ulonglong)
                         (*(int *)&(pUVar14->OnInputEvent).Subscriptions.field_0x48 - 1U & 0xc356) *
                         4);
        if (iVar20 != -1) {
          do {
            piVar21 = (int *)((longlong)iVar20 * 0x50 + *(longlong *)this_02);
            if (*piVar21 == 0xc356) {
              if ((iVar20 != -1) && (piVar21 != (int *)0x0)) goto LAB_14b8028bc;
              break;
            }
            iVar20 = piVar21[0x12];
          } while (iVar20 != -1);
        }
      }
      local_258._0_8_ = (longlong)local_258 + 0x18;
      TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
                (this_02,(int)local_258 + 0x10,(TKeyInitializer<EDS_KeyActionType_const_&> *)0xc356,
                 (bool *)local_258);
      piVar21 = (int *)((longlong)(int)local_258._16_4_ * 0x50 + *(longlong *)this_02);
LAB_14b8028bc:
      TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar21 + 2),this);
      TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
      ::AddUObject<UDS_InteractionAbility_LiftUp>
                (piVar21 + 2,(UDS_InteractionAbility_LiftUp *)local_258,(pmf_e7d59083 *)this);
      pUVar13 = (UDS_InteractionAbilityData_LiftUp *)FWeakObjectPtr::Get(&this_00->WeakPtr);
      bVar7 = UDS_InteractionAbilityData_LiftUp::IsAbleThrow(pUVar13);
      if (bVar7) {
        local_258._16_4_ = 0xc354;
        local_278._0_8_ = OnInputEvent_Throw;
        local_278._8_8_ = local_278._8_8_ & 0xffffffff00000000;
        if (*(int *)&(pUVar14->OnInputEvent).Subscriptions.field_0x8 !=
            *(int *)&(pUVar14->OnInputEvent).Subscriptions.field_0x34) {
          puVar19 = *(undefined1 **)puVar1;
          if (*(undefined1 **)puVar1 == (undefined1 *)0x0) {
            puVar19 = &(pUVar14->OnInputEvent).Subscriptions.field_0x38;
          }
          iVar20 = *(int *)(puVar19 +
                           (ulonglong)
                           (*(int *)&(pUVar14->OnInputEvent).Subscriptions.field_0x48 - 1U & 0xc354)
                           * 4);
          if (iVar20 != -1) {
            do {
              piVar21 = (int *)((longlong)iVar20 * 0x50 + *(longlong *)this_02);
              if (*piVar21 == 0xc354) {
                if (piVar21 != (int *)0x0) goto LAB_14b8029c3;
                break;
              }
              iVar20 = piVar21[0x12];
            } while (iVar20 != -1);
          }
        }
        local_258._0_8_ = (longlong)local_258 + 0x10;
        TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
                  (this_02,(int)local_258 + 0x18,
                   (TKeyInitializer<EDS_KeyActionType_const_&> *)0xc354,(bool *)local_258);
        piVar21 = (int *)((longlong)(int)local_258._24_4_ * 0x50 + *(longlong *)this_02);
LAB_14b8029c3:
        TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar21 + 2),this);
        TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
        ::AddUObject<UDS_InteractionAbility_LiftUp>
                  (piVar21 + 2,(UDS_InteractionAbility_LiftUp *)local_258,(pmf_e7d59083 *)this);
        local_258._16_4_ = 0xc355;
        local_278._0_8_ = OnInputEvent_ThrowCancel;
        local_278._8_8_ = local_278._8_8_ & 0xffffffff00000000;
        if (*(int *)&(pUVar14->OnInputEvent).Subscriptions.field_0x8 !=
            *(int *)&(pUVar14->OnInputEvent).Subscriptions.field_0x34) {
          puVar19 = *(undefined1 **)puVar1;
          if (*(undefined1 **)puVar1 == (undefined1 *)0x0) {
            puVar19 = &(pUVar14->OnInputEvent).Subscriptions.field_0x38;
          }
          iVar20 = *(int *)(puVar19 +
                           (ulonglong)
                           (*(int *)&(pUVar14->OnInputEvent).Subscriptions.field_0x48 - 1U & 0xc355)
                           * 4);
          if (iVar20 != -1) {
            do {
              piVar21 = (int *)((longlong)iVar20 * 0x50 + *(longlong *)this_02);
              if (*piVar21 == 0xc355) {
                if (piVar21 != (int *)0x0) goto LAB_14b802a99;
                break;
              }
              iVar20 = piVar21[0x12];
            } while (iVar20 != -1);
          }
        }
        local_258._0_8_ = (longlong)local_258 + 0x10;
        TSet<TTuple<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>_>,TDefaultMapHashableKeyFuncs<enum_EDS_KeyActionType_const_,TMulticastDelegate<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>,0>,FDefaultSetAllocator>
        ::EmplaceByHash<TKeyInitializer<enum_EDS_KeyActionType_const_&>_>
                  (this_02,(int)local_258 + 0x18,
                   (TKeyInitializer<EDS_KeyActionType_const_&> *)0xc355,(bool *)local_258);
        piVar21 = (int *)((longlong)(int)local_258._24_4_ * 0x50 + *(longlong *)this_02);
LAB_14b802a99:
        TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveAll
                  ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)(piVar21 + 2),this);
        TMulticastDelegateRegistration<void___cdecl(enum_EDS_KeyActionType,enum_ETriggerEvent,FInputActionValue_const_&),FDefaultTSDelegateUserPolicy>
        ::AddUObject<UDS_InteractionAbility_LiftUp>
                  (piVar21 + 2,(UDS_InteractionAbility_LiftUp *)local_258,(pmf_e7d59083 *)this);
        bVar7 = SpawnTrajectoryEffect(this);
        if (!bVar7) {
          pUVar9 = UDS_LogManager::GetInst();
          if (pUVar9 == (UDS_LogManager *)0x0) {
            return;
          }
          pUVar9 = UDS_LogManager::GetInst();
          local_1d8._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_1d8,"UDS_InteractionAbility_LiftUp::OnPostActivateAbility",0x34,Yes);
          pwVar45 = L"Failed to SpawnTrajectoryEffect().";
          uVar31 = 0x9a;
          goto LAB_14b8031a2;
        }
      }
      goto LAB_14b802f77;
    }
    pUVar9 = UDS_LogManager::GetInst();
    if (pUVar9 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar9 = UDS_LogManager::GetInst();
    local_1d8._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_1d8,"UDS_InteractionAbility_LiftUp::OnPostActivateAbility",0x34,Yes);
    pwVar45 = L"inputEvent is nullptr.";
    uVar31 = 0x8b;
  }
  else {
    pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    local_278._0_8_ = OnLiftUpEvent;
    local_278._8_8_ = local_278._8_8_ & 0xffffffff00000000;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar10 + 4),
               (FWriteAccessScope *)(local_258 + 0x20));
    local_220 = (UObject *)&pUVar10[4].field_0x8;
    puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_220);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6AXAEBW4EDS_LiftUpEvent___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_InteractionAbility_LiftUp____A6AXAEBW4EDS_LiftUpEvent___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_258._0_8_ = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)local_258);
      puVar11[4] = local_278._0_8_;
      puVar11[5] = local_278._8_8_;
    }
    if (local_228 == '\0') {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                (local_230,(FDestructionSentinel *)(local_258 + 0x20));
    }
    pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    local_278._0_8_ = OnProcess_PutDown;
    local_278._8_8_ = local_278._8_8_ & 0xffffffff00000000;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar10[5].field_0x20,
               (FWriteAccessScope *)(local_258 + 0x20));
    local_220 = pUVar10 + 6;
    puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_220);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_InteractionAbility_LiftUp____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_258._0_8_ = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)local_258);
      puVar11[4] = local_278._0_8_;
      puVar11[5] = local_278._8_8_;
    }
    if (local_228 == '\0') {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                (local_230,(FDestructionSentinel *)(local_258 + 0x20));
    }
    pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    local_278._0_8_ = OnProcess_ThrowReady;
    local_278._8_8_ = local_278._8_8_ & 0xffffffff00000000;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar10[4].field_0x18,
               (FWriteAccessScope *)(local_258 + 0x20));
    local_220 = (UObject *)&pUVar10[4].field_0x20;
    puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_220);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_InteractionAbility_LiftUp____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_258._0_8_ = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)local_258);
      puVar11[4] = local_278._0_8_;
      puVar11[5] = local_278._8_8_;
    }
    if (local_228 == '\0') {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                (local_230,(FDestructionSentinel *)(local_258 + 0x20));
    }
    pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    local_278._0_8_ = OnProcess_Throw;
    local_278._8_8_ = local_278._8_8_ & 0xffffffff00000000;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar10[5].field_0x8,
               (FWriteAccessScope *)(local_258 + 0x20));
    local_220 = (UObject *)&pUVar10[5].field_0x10;
    puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_220);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_InteractionAbility_LiftUp____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_258._0_8_ = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)local_258);
      puVar11[4] = local_278._0_8_;
      puVar11[5] = local_278._8_8_;
    }
    if (local_228 == '\0') {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                (local_230,(FDestructionSentinel *)(local_258 + 0x20));
    }
    pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    local_278._0_8_ = OnProcess_ThrowCancel;
    local_278._8_8_ = local_278._8_8_ & 0xffffffff00000000;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pUVar10[6].field_0x10,
               (FWriteAccessScope *)(local_258 + 0x20));
    local_220 = (UObject *)&pUVar10[6].field_0x18;
    puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_220);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_InteractionAbility_LiftUp____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_258._0_8_ = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)local_258);
      puVar11[4] = local_278._0_8_;
      puVar11[5] = local_278._8_8_;
    }
    if (local_228 == '\0') {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                (local_230,(FDestructionSentinel *)(local_258 + 0x20));
    }
    pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    local_278._0_8_ = OnRecvThrowStartSkillProcess;
    local_278._8_8_ = local_278._8_8_ & 0xffffffff00000000;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(pUVar10 + 7),
               (FWriteAccessScope *)(local_258 + 0x20));
    local_220 = (UObject *)&pUVar10[7].field_0x8;
    puVar11 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_220);
    if (puVar11 != (undefined8 *)0x0) {
      *puVar11 = &
                 ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ThrowStartSkillInfo___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar12 = FDelegateHandle::GenerateNewID();
      puVar11[2] = uVar12;
      *puVar11 = &
                 ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_InteractionAbility_LiftUp____A6AXAEBUFDS_ThrowStartSkillInfo___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar11[3] = 0;
      local_258._0_8_ = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar11 + 3),(FObjectPtr)local_258);
      puVar11[4] = local_278._0_8_;
      puVar11[5] = local_278._8_8_;
    }
    if (local_228 == '\0') {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                (local_230,(FDestructionSentinel *)(local_258 + 0x20));
    }
LAB_14b802f77:
    pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    pFVar15 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar10[2].field_0x8);
    if (pFVar15 == (FDS_EntityBase *)0x0) {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar9 = UDS_LogManager::GetInst();
      FWeakObjectPtr::Get(&this_00->WeakPtr);
      local_1d8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_1d8,"UDS_InteractionAbility_LiftUp::OnPostActivateAbility",0x34,Yes);
      UDS_LogManager::PrintLog
                (pUVar9,1,Warning,local_1d8.Ptr,0xaf,L"targetEntity is nullptr. (%llu)");
      goto LAB_14b8031bc;
    }
    (**(code **)(pFVar15->_padding_ + 0x80))(pFVar15);
    bVar7 = TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<USkeletalMeshComponent,FWeakObjectPtr> *)&local_218,
                       (void *)0x0);
    if (bVar7) {
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar9 = UDS_LogManager::GetInst();
      local_1d8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_1d8,"UDS_InteractionAbility_LiftUp::OnPostActivateAbility",0x34,Yes);
      pwVar45 = L"targetSKM is nullptr.";
      uVar31 = 0xb7;
    }
    else {
      this->AttachFrontOffset = 0.0;
      this->AttachHeightOffset = 0.0;
      pUVar10 = FWeakObjectPtr::Get(&local_218);
      pcVar2 = *(code **)(*(longlong *)pUVar10 + 0x540);
      pFVar16 = ::FName::FName((FName *)local_258,L"handling_liftup_offset");
      cVar8 = (*pcVar2)(pUVar10,*pFVar16);
      if (cVar8 == '\x01') {
        pUVar10 = FWeakObjectPtr::Get(&local_218);
        pcVar2 = *(code **)(*(longlong *)pUVar10 + 0x520);
        pFVar16 = ::FName::FName((FName *)local_258,L"handling_liftup_offset");
        (*pcVar2)(pUVar10,local_b8,*pFVar16,3);
        local_278._16_8_ = local_88.ReferenceController;
        this->AttachFrontOffset = (float)(double)local_98;
        this->AttachHeightOffset = (float)(double)pFStack_90;
      }
      FWeakObjectPtr::Get(&this_00->WeakPtr);
      UDS_MovementCore::GetMovementCore((ulong64)&local_210);
      bVar7 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_210,(void *)0x0);
      if (!bVar7) {
        pUVar17 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        UDS_MovementCore::GetActorRotation(pUVar17,&local_1f0);
        pUVar17 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_210);
        UDS_MovementCore::GetActorRotation(pUVar17,&local_208);
        auVar27._0_8_ = local_208.Roll - local_1f0.Roll;
        auVar33._0_8_ = local_208.Yaw - local_1f0.Yaw;
        auVar33._8_8_ = 0;
        local_288[0] = 0x56;
        auVar26._8_4_ = SUB84(auVar33._0_8_,0);
        auVar26._0_8_ = local_208.Pitch - local_1f0.Pitch;
        auVar26._12_4_ = (int)((ulonglong)auVar33._0_8_ >> 0x20);
        auVar26 = divpd(auVar26,(undefined1  [16])GlobalVectorConstants::Double360.XY.m128d_f64);
        auVar26 = roundpd(auVar33,auVar26,3);
        dVar3 = GlobalVectorConstants::Double360.XY.m128d_f64[0];
        auVar34._0_8_ = auVar26._0_8_ * dVar3;
        dVar38 = GlobalVectorConstants::Double360.XY.m128d_f64[1];
        auVar34._8_8_ = auVar26._8_8_ * dVar38;
        auVar27._8_8_ = 0;
        auVar26 = divpd(auVar27,(undefined1  [16])GlobalVectorConstants::Double360.ZW.m128d_f64);
        dVar40 = (local_208.Pitch - local_1f0.Pitch) - auVar34._0_8_;
        dVar42 = auVar33._0_8_ - auVar34._8_8_;
        auVar26 = roundpd(auVar34,auVar26,3);
        dVar4 = GlobalVectorConstants::Double360.ZW.m128d_f64[0];
        auVar28._8_4_ = SUB84(dVar42,0);
        auVar28._0_8_ = dVar40;
        auVar28._12_4_ = (int)((ulonglong)dVar42 >> 0x20);
        dVar32 = auVar28._8_8_ + dVar38;
        dVar43 = auVar27._0_8_ - auVar26._0_8_ * dVar4;
        dVar44 = 0.0 - auVar26._8_8_ * GlobalVectorConstants::Double360.ZW.m128d_f64[1];
        uVar22 = -(ulonglong)(0.0 <= dVar40);
        uVar24 = -(ulonglong)(0.0 <= dVar42);
        uVar23 = -(ulonglong)(0.0 <= dVar43);
        uVar25 = -(ulonglong)(0.0 <= dVar44);
        auVar35._0_8_ = uVar22 & (ulonglong)dVar40;
        auVar35._8_4_ = (undefined4)(uVar24 & (ulonglong)dVar42);
        auVar35._12_4_ = (undefined4)((uVar24 & (ulonglong)dVar42) >> 0x20);
        auVar39._0_4_ = ~(uint)uVar22 & SUB84(dVar40 + dVar3,0);
        auVar39._4_4_ = ~(uint)(uVar22 >> 0x20) & (uint)((ulonglong)(dVar40 + dVar3) >> 0x20);
        auVar39._8_4_ = ~(uint)uVar24 & SUB84(dVar32,0);
        auVar39._12_4_ = ~(uint)(uVar24 >> 0x20) & (uint)((ulonglong)dVar32 >> 0x20);
        auVar36._0_8_ = uVar23 & (ulonglong)dVar43;
        auVar36._8_4_ = (undefined4)(uVar25 & (ulonglong)dVar44);
        auVar36._12_4_ = (undefined4)((uVar25 & (ulonglong)dVar44) >> 0x20);
        auVar39 = auVar39 | auVar35;
        auVar29._8_4_ = SUB84(dVar44,0);
        auVar29._0_8_ = dVar43;
        auVar29._12_4_ = (int)((ulonglong)dVar44 >> 0x20);
        dVar32 = auVar29._8_8_ + GlobalVectorConstants::Double360.ZW.m128d_f64[1];
        auVar41._0_4_ = ~(uint)uVar23 & SUB84(dVar43 + dVar4,0);
        auVar41._4_4_ = ~(uint)(uVar23 >> 0x20) & (uint)((ulonglong)(dVar43 + dVar4) >> 0x20);
        auVar41._8_4_ = ~(uint)uVar25 & SUB84(dVar32,0);
        auVar41._12_4_ = ~(uint)(uVar25 >> 0x20) & (uint)((ulonglong)dVar32 >> 0x20);
        auVar41 = auVar41 | auVar36;
        uVar24 = -(ulonglong)(GlobalVectorConstants::Double180.XY.m128d_f64[1] < auVar39._8_8_);
        dVar38 = auVar39._8_8_ - dVar38;
        uVar23 = -(ulonglong)(GlobalVectorConstants::Double180.ZW.m128d_f64[0] < auVar41._0_8_);
        uVar31 = (uint)(-(ulonglong)
                         (GlobalVectorConstants::Double180.XY.m128d_f64[0] < auVar39._0_8_) >> 0x20)
        ;
        auVar5._4_8_ = dVar38;
        auVar5._0_4_ = (uint)((ulonglong)(auVar39._0_8_ - dVar3) >> 0x20) & uVar31;
        auVar37._0_8_ = auVar5._0_8_ << 0x20;
        uVar22 = uVar24 & (ulonglong)dVar38;
        auVar37._8_4_ = (undefined4)uVar22;
        auVar37._12_4_ = (undefined4)(uVar22 >> 0x20);
        auVar6._4_8_ = uVar24;
        auVar6._0_4_ = ~uVar31 & auVar39._4_4_;
        auVar30._0_8_ = auVar6._0_8_ << 0x20;
        auVar30._8_4_ = ~(uint)uVar24 & auVar39._8_4_;
        auVar30._12_4_ = ~(uint)(uVar24 >> 0x20) & auVar39._12_4_;
        local_278._16_8_ =
             (ulonglong)(auVar41._0_8_ - dVar4) & uVar23 |
             CONCAT44(~(uint)(uVar23 >> 0x20) & auVar41._4_4_,~(uint)uVar23 & auVar41._0_4_);
        this->AttachRelativeYaw = (float)(double)(auVar37._8_8_ | auVar30._8_8_);
        pFVar18 = FDS_GameplayTags::GetStateTag(local_288);
        UDS_GameplayAbility::AddTagToASC((UDS_GameplayAbility *)this,pFVar18);
        local_288[0] = 0x89;
        pUVar10 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        FDS_EntityBase::AddStateTag((ulong64 *)&pUVar10[2].field_0x8,local_288);
        local_288[0] = BlockInput;
        UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_288);
        this_01 = FDS_TimerManager::Get((UObject *)0x0);
        local_278._8_8_ = local_278._8_8_ & 0xffffffff00000000;
        local_278._0_8_ = OnToLiftUpAttach;
        FTimerManager::SetTimer<UDS_InteractionAbility_LiftUp>
                  (this_01,&this->LiftUpEventTimer_ToLiftUpAttach,this,(pmf_58644bde *)local_278,
                   __real_3fe66666,false,__real_bf800000);
        return;
      }
      pUVar9 = UDS_LogManager::GetInst();
      if (pUVar9 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar9 = UDS_LogManager::GetInst();
      local_1d8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_1d8,"UDS_InteractionAbility_LiftUp::OnPostActivateAbility",0x34,Yes);
      pwVar45 = L"targetMovementCore is nullptr.";
      uVar31 = 0xcb;
    }
  }
LAB_14b8031a2:
  UDS_LogManager::PrintLog(pUVar9,1,Warning,local_1d8.Ptr,uVar31,pwVar45);
LAB_14b8031bc:
  if ((void *)local_1d8._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_1d8._padding_);
  }
  return;
}

// OnProcess_PutDown @ 14b8077a0

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
UDS_InteractionAbility_LiftUp::OnProcess_PutDown(UDS_InteractionAbility_LiftUp *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  UDS_InteractionAbilityData_LiftUp *this_00;
  FTimerManager *pFVar4;
  FGameplayTag *pFVar5;
  undefined1 auStackY_1a8 [32];
  EDS_AbilityInputPolicy local_168 [16];
  code *local_158;
  undefined8 uStack_150;
  undefined1 local_148 [272];
  void *local_38;
  wchar_t *local_30;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
  bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_38 = (void *)0x0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                ((TStringConversion<TStringConvert<char,wchar_t>,128> *)(local_148 + 0x10),
                 "UDS_InteractionAbility_LiftUp::OnProcess_PutDown",0x30,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_30,0x4d5,L"InteractionAbilityData is nullptr.");
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
      }
    }
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    if (*(int *)&pUVar3[3].field_0x10 == 2) {
      this_00 = (UDS_InteractionAbilityData_LiftUp *)
                FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
      local_148._0_4_ = 8;
      UDS_InteractionAbilityData_LiftUp::SetLiftUpState(this_00,(EDS_LiftUpState *)local_148);
      pUVar3 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
      if ((float)(*(uint *)&pUVar3[3].field_0x20 & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
          __real_322bcc77) {
        pFVar4 = FDS_TimerManager::Get((UObject *)0x0);
        uStack_150 = (ulonglong)uStack_150._4_4_ << 0x20;
        local_158 = OnToPutDownDetach;
        FTimerManager::SetTimerForNextTick<UDS_InteractionAbility_LiftUp>
                  (pFVar4,(UDS_InteractionAbility_LiftUp *)local_148,(pmf_58644bde *)this);
      }
      else {
        pFVar4 = FDS_TimerManager::Get((UObject *)0x0);
        local_148._0_8_ = OnToPutDownDetach;
        local_148._8_4_ = 0;
        uStack_150 = (ulonglong)(uint)local_148._12_4_ << 0x20;
        local_158 = OnToPutDownDetach;
        FTimerManager::SetTimer<UDS_InteractionAbility_LiftUp>
                  (pFVar4,&this->LiftUpEventTimer_ToPutDownDetach,this,(pmf_58644bde *)&local_158,
                   *(float *)&pUVar3[3].field_0x20,false,__real_bf800000);
      }
      local_168[0] = BlockInput;
      UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_168);
      local_168[0] = 0x57;
      pFVar5 = FDS_GameplayTags::GetStateTag(local_168);
      UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar5);
      local_168[0] = 0x58;
      pFVar5 = FDS_GameplayTags::GetStateTag(local_168);
      UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar5);
      local_168[0] = 0x59;
      pFVar5 = FDS_GameplayTags::GetStateTag(local_168);
      UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar5);
      local_168[0] = 0x5a;
      pFVar5 = FDS_GameplayTags::GetStateTag(local_168);
      UDS_GameplayAbility::AddTagToASC((UDS_GameplayAbility *)this,pFVar5);
      if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
        CloseInputKeyGroupWindow(this);
      }
    }
  }
  return;
}

// OnProcess_Throw @ 14b807a10

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

void __thiscall UDS_InteractionAbility_LiftUp::OnProcess_Throw(UDS_InteractionAbility_LiftUp *this)

{
  code *pcVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  UDS_InteractionAbilityData_LiftUp *this_00;
  FTimerManager *pFVar5;
  FGameplayTag *pFVar6;
  UDS_MovementCore *this_01;
  undefined1 auStackY_1f8 [32];
  EDS_AbilityInputPolicy local_1b8 [16];
  undefined1 local_1a8 [16];
  TRotator<double> local_198;
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_160;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  bVar2 = TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_InteractionAbility_LiftUp::OnProcess_Throw",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_148.Ptr,0x494,L"InteractionAbilityData is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    pUVar4 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    if (*(int *)&pUVar4[3].field_0x10 == 4) {
      local_1a8._0_4_ = 0x106f;
      bVar2 = UDS_CharBuffData::CheckForbidSpecialBuff
                        ((ulong64 *)&this->_padding_,(EDS_SpecialBuffType *)local_1a8,
                         (bool *)((longlong)&this->_padding_ + 1));
      if (bVar2) {
        this_00 = (UDS_InteractionAbilityData_LiftUp *)
                  FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
        local_1a8._0_4_ = 6;
        UDS_InteractionAbilityData_LiftUp::SetLiftUpState(this_00,(EDS_LiftUpState *)local_1a8);
        pUVar4 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
        if ((float)(*(uint *)&pUVar4[3].field_0x1c & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
            __real_322bcc77) {
          pFVar5 = FDS_TimerManager::Get((UObject *)0x0);
          local_198.Yaw = (double)((ulonglong)local_198.Yaw._4_4_ << 0x20);
          local_198.Pitch = (double)OnToThrowDetach;
          FTimerManager::SetTimerForNextTick<UDS_InteractionAbility_LiftUp>
                    (pFVar5,(UDS_InteractionAbility_LiftUp *)local_1a8,(pmf_58644bde *)this);
        }
        else {
          pFVar5 = FDS_TimerManager::Get((UObject *)0x0);
          local_1a8._0_8_ = OnToThrowDetach;
          local_1a8._8_4_ = 0;
          local_198.Yaw = (double)((ulonglong)(uint)local_1a8._12_4_ << 0x20);
          local_198.Pitch = (double)OnToThrowDetach;
          FTimerManager::SetTimer<UDS_InteractionAbility_LiftUp>
                    (pFVar5,&this->LiftUpEventTimer_ToThrowDetach,this,
                     (pmf_58644bde *)(local_1a8 + 0x10),*(float *)&pUVar4[3].field_0x1c,false,
                     __real_bf800000);
        }
        local_1b8[0] = BlockInput;
        UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_1b8);
        local_1b8[0] = 0x57;
        pFVar6 = FDS_GameplayTags::GetStateTag(local_1b8);
        UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar6);
        local_1b8[0] = 0x58;
        pFVar6 = FDS_GameplayTags::GetStateTag(local_1b8);
        UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar6);
        local_1b8[0] = 0x5a;
        pFVar6 = FDS_GameplayTags::GetStateTag(local_1b8);
        UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar6);
        local_1b8[0] = 0x59;
        pFVar6 = FDS_GameplayTags::GetStateTag(local_1b8);
        UDS_GameplayAbility::AddTagToASC((UDS_GameplayAbility *)this,pFVar6);
        local_1b8[0] = EndIfInput;
        UDS_SkillModeProcessAbility::Deactivate((ulong64 *)&this->_padding_,local_1b8);
        this_01 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        UDS_MovementCore::GetActorLocation(this_01,(TVector<double> *)&local_160._s_0);
        local_178._s_0.X =
             (this->ThrowStartSkillInfo).EndLocation.field0_0x0._s_0.X - local_160._s_0.X;
        local_178._s_0.Y =
             (this->ThrowStartSkillInfo).EndLocation.field0_0x0._s_0.Y - local_160._s_0.Y;
        local_178._s_0.Z = 0.0;
        UE::Math::TVector<double>::Normalize
                  ((TVector<double> *)&local_178._s_0,__real_3e45798ee0000000);
        pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
        pcVar1 = *(code **)(*(longlong *)pUVar4 + 0x370);
        UE::Math::TVector<double>::ToOrientationRotator
                  ((TVector<double> *)&local_178._s_0,(TRotator<double> *)(local_1a8 + 0x10));
        (*pcVar1)(pUVar4,local_1a8 + 0x10);
        if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
          CloseInputKeyGroupWindow(this);
        }
      }
    }
  }
  return;
}

// OnProcess_ThrowCancel @ 14b807d60

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
UDS_InteractionAbility_LiftUp::OnProcess_ThrowCancel(UDS_InteractionAbility_LiftUp *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  UDS_InteractionAbilityData_LiftUp *this_00;
  FGameplayTag *pFVar4;
  undefined1 auStackY_178 [32];
  EDS_AbilityInputPolicy local_148 [4];
  EDS_LiftUpState local_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_LiftUp::OnProcess_ThrowCancel",0x34,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x504,L"InteractionAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    if (*(int *)&pUVar3[3].field_0x10 == 4) {
      this_00 = (UDS_InteractionAbilityData_LiftUp *)
                FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
      local_144[0] = PreThrow_End;
      UDS_InteractionAbilityData_LiftUp::SetLiftUpState(this_00,local_144);
      local_148[0] = BlockInput;
      UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_148);
      local_148[0] = 0x57;
      pFVar4 = FDS_GameplayTags::GetStateTag(local_148);
      UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar4);
      local_148[0] = 0x59;
      pFVar4 = FDS_GameplayTags::GetStateTag(local_148);
      UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar4);
      local_148[0] = 0x5a;
      pFVar4 = FDS_GameplayTags::GetStateTag(local_148);
      UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar4);
      local_148[0] = 0x58;
      pFVar4 = FDS_GameplayTags::GetStateTag(local_148);
      UDS_GameplayAbility::AddTagToASC((UDS_GameplayAbility *)this,pFVar4);
      if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
        CloseInputKeyGroupWindow(this);
      }
    }
  }
  return;
}

// OnProcess_ThrowReady @ 14b807f10

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
UDS_InteractionAbility_LiftUp::OnProcess_ThrowReady(UDS_InteractionAbility_LiftUp *this)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UObject *pUVar3;
  UDS_InteractionAbilityData_LiftUp *this_00;
  FGameplayTag *pFVar4;
  undefined1 auStackY_178 [32];
  EDS_AbilityInputPolicy local_148 [4];
  EDS_LiftUpState local_144 [3];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  bVar1 = TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_LiftUp::OnProcess_ThrowReady",0x33,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x46a,L"InteractionAbilityData is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    pUVar3 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    if (*(int *)&pUVar3[3].field_0x10 == 2) {
      local_144[0] = 0x106f;
      bVar1 = UDS_CharBuffData::CheckForbidSpecialBuff
                        ((ulong64 *)&this->_padding_,local_144,
                         (bool *)((longlong)&this->_padding_ + 1));
      if (bVar1) {
        this_00 = (UDS_InteractionAbilityData_LiftUp *)
                  FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
        local_144[0] = PreThrow_Begin;
        UDS_InteractionAbilityData_LiftUp::SetLiftUpState(this_00,local_144);
        local_148[0] = BlockInput;
        UDS_GameplayAbility::SetInputPolicy((UDS_GameplayAbility *)this,local_148);
        local_148[0] = 0x58;
        pFVar4 = FDS_GameplayTags::GetStateTag(local_148);
        UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar4);
        local_148[0] = 0x59;
        pFVar4 = FDS_GameplayTags::GetStateTag(local_148);
        UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar4);
        local_148[0] = 0x5a;
        pFVar4 = FDS_GameplayTags::GetStateTag(local_148);
        UDS_GameplayAbility::RemoveStateTagToASC((UDS_GameplayAbility *)this,pFVar4);
        local_148[0] = 0x57;
        pFVar4 = FDS_GameplayTags::GetStateTag(local_148);
        UDS_GameplayAbility::AddTagToASC((UDS_GameplayAbility *)this,pFVar4);
        if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
          CloseInputKeyGroupWindow(this);
        }
      }
    }
  }
  return;
}

// OnRecvThrowStartSkillProcess @ 14b808730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_LiftUp::OnRecvThrowStartSkillProcess
          (UDS_InteractionAbility_LiftUp *this,FDS_ThrowStartSkillInfo *param_1)

{
  TVector<double> *pTVar1;
  double dVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UDS_MovementCore *this_00;
  TVector<double> *pTVar5;
  UObject *pUVar6;
  undefined1 auStackY_198 [32];
  uint uVar7;
  wchar_t *pwVar8;
  float local_168 [2];
  FWeakObjectPtr local_160;
  TVector<double> local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  bVar3 = TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar4 = UDS_LogManager::GetInst();
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"UDS_InteractionAbility_LiftUp::OnRecvThrowStartSkillProcess",0x3b,Yes);
    pwVar8 = L"InteractionAbilityData is nullptr.";
    uVar7 = 0x527;
  }
  else {
    FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    UDS_MovementCore::GetMovementCore((ulong64)&local_160);
    bVar3 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_160,(void *)0x0);
    if (bVar3) {
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_LiftUp::OnRecvThrowStartSkillProcess",0x3b,Yes);
      pwVar8 = L"targetMovementCore is nullptr.";
      uVar7 = 0x52f;
    }
    else {
      this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_160);
      pTVar5 = UDS_MovementCore::GetActorLocation(this_00,&local_158);
      pTVar1 = &(this->ThrowStartSkillInfo).EndLocation;
      local_168[0] = 100.0;
      dVar2 = (pTVar5->field0_0x0)._s_0.Y;
      (this->ThrowStartSkillInfo).StartLocation.field0_0x0._s_0.X = (pTVar5->field0_0x0)._s_0.X;
      (this->ThrowStartSkillInfo).StartLocation.field0_0x0._s_0.Y = dVar2;
      (this->ThrowStartSkillInfo).StartLocation.field0_0x0._s_0.Z = (pTVar5->field0_0x0)._s_0.Z;
      dVar2 = (param_1->EndLocation).field0_0x0._s_0.Y;
      (pTVar1->field0_0x0)._s_0.X = (param_1->EndLocation).field0_0x0._s_0.X;
      (this->ThrowStartSkillInfo).EndLocation.field0_0x0._s_0.Y = dVar2;
      (this->ThrowStartSkillInfo).EndLocation.field0_0x0._s_0.Z =
           (param_1->EndLocation).field0_0x0._s_0.Z;
      (this->ThrowStartSkillInfo).ImpactTime = param_1->ImpactTime;
      dVar2 = (param_1->ImpactLocation).field0_0x0._s_0.Y;
      (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.X =
           (param_1->ImpactLocation).field0_0x0._s_0.X;
      (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.Y = dVar2;
      (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.Z =
           (param_1->ImpactLocation).field0_0x0._s_0.Z;
      bVar3 = DS_AbilityUtil_Interaction::CalculateThrowVariables
                        (&(this->ThrowStartSkillInfo).StartLocation,pTVar1,local_168,
                         &(this->ThrowStartSkillInfo).InitialVelocity,
                         &(this->ThrowStartSkillInfo).TotalTime);
      if (bVar3) {
        pUVar6 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
        pUVar6[3].field_0x24 = 1;
        OnProcess_Throw(this);
        return;
      }
      pUVar4 = UDS_LogManager::GetInst();
      if (pUVar4 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar4 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_LiftUp::OnRecvThrowStartSkillProcess",0x3b,Yes);
      pwVar8 = L"Failed to CalculateThrowVariables().";
      uVar7 = 0x542;
    }
  }
  UDS_LogManager::PrintLog(pUVar4,1,Warning,local_138.Ptr,uVar7,pwVar8);
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  return;
}

// OnTickComponent @ 14b80aca0

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
UDS_InteractionAbility_LiftUp::OnTickComponent(UDS_InteractionAbility_LiftUp *this,float param_1)

{
  TWeakObjectPtr<ADS_InstallGuideActor,FWeakObjectPtr> *this_00;
  double dVar1;
  char cVar2;
  bool bVar3;
  UDS_LogManager *pUVar4;
  UObject *pUVar5;
  UDS_MovementCore *this_01;
  UObject *pUVar6;
  UPrimitiveComponent *pUVar7;
  double dVar8;
  double dVar9;
  undefined1 auStackY_198 [32];
  TVector<double>_u_0 local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_198;
  UDS_GameplayAbility::OnTickComponent((UDS_GameplayAbility *)this,param_1);
  if (((*(char *)((longlong)&this->_padding_ + 1) == '\x01') && ((char)this->_padding_ == '\0')) &&
     (cVar2 = (**(code **)(this->_padding_ + 0x3c8))(this), cVar2 == '\0')) {
    UDS_InteractionAbility_ObjectHandling::CheckActivityRange
              ((UDS_InteractionAbility_ObjectHandling *)this);
  }
  bVar3 = TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar3) {
    pUVar4 = UDS_LogManager::GetInst();
    if (pUVar4 != (UDS_LogManager *)0x0) {
      pUVar4 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_InteractionAbility_LiftUp::OnTickComponent",0x2e,Yes);
      UDS_LogManager::PrintLog
                (pUVar4,1,Warning,local_148.Ptr,0x191,L"InteractionAbilityData is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else if (*(char *)((longlong)&this->_padding_ + 1) == '\x01') {
    pUVar5 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    if (*(int *)&pUVar5[3].field_0x10 == 4) {
      UpdateThrowVariables(this);
    }
    this_00 = &this->InstallGuideActor;
    bVar3 = TWeakObjectPtr<ADS_InstallGuideActor,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
    if (!bVar3) {
      pUVar5 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
      if (*(int *)&pUVar5[3].field_0x10 == 4) {
        pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        if ((pUVar5[2].field_0x8 & 0x80) != 0) {
          pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          (**(code **)(*(longlong *)pUVar5 + 0x368))(pUVar5);
        }
        bVar3 = TWeakObjectPtr<ADS_InstallGuideActor,FWeakObjectPtr>::UEOpEquals
                          (this_00,(void *)0x0);
        if (bVar3) {
          pUVar4 = UDS_LogManager::GetInst();
          if (pUVar4 != (UDS_LogManager *)0x0) {
            pUVar4 = UDS_LogManager::GetInst();
            local_148._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_148,"UDS_InteractionAbility_LiftUp::UpdateInstallDecal",0x31,Yes);
            UDS_LogManager::PrintLog
                      (pUVar4,1,Warning,local_148.Ptr,0x61e,L"InstallGuideActor is nullptr.");
            if ((void *)local_148._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_148._padding_);
            }
          }
        }
        else {
          this_01 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          UDS_MovementCore::GetActorFootLocation(this_01,(TVector<double> *)&local_168._s_0);
          pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          *(double *)&pUVar5[0x12].field_0x8 = local_168._s_0.X;
          *(double *)&pUVar5[0x12].field_0x10 = local_168._s_0.Y;
          *(double *)&pUVar5[0x12].field_0x18 = local_168._s_0.Z;
          pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          pUVar5[0x11].field_0x18 = 1;
        }
        bVar3 = TWeakObjectPtr<ADS_InstallGuideActor,FWeakObjectPtr>::UEOpEquals
                          (this_00,(void *)0x0);
        if (bVar3) {
          pUVar4 = UDS_LogManager::GetInst();
          if (pUVar4 != (UDS_LogManager *)0x0) {
            pUVar4 = UDS_LogManager::GetInst();
            local_148._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_148,"UDS_InteractionAbility_LiftUp::UpdateGuideDecal",0x2f,Yes);
            UDS_LogManager::PrintLog
                      (pUVar4,1,Warning,local_148.Ptr,0x62d,L"InstallGuideActor is nullptr.");
            if ((void *)local_148._padding_ != (void *)0x0) {
              FMemory::Free((void *)local_148._padding_);
            }
          }
        }
        else if (((UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X !=
                   (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.X) ||
                 (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y !=
                  (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.Y)) ||
                (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z !=
                 (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.Z)) {
          pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          dVar1 = (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.Y;
          *(double *)&pUVar5[0x13].field_0x10 =
               (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.X;
          *(double *)&pUVar5[0x13].field_0x18 = dVar1;
          *(double *)&pUVar5[0x13].field_0x20 =
               (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.Z;
          pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          pUVar6 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          dVar8 = *(double *)&pUVar5[0x12].field_0x8 - *(double *)&pUVar6[0x13].field_0x10;
          dVar1 = *(double *)&pUVar5[0x12].field_0x10 - *(double *)&pUVar6[0x13].field_0x18;
          dVar9 = *(double *)(pUVar5 + 0x12) - *(double *)&pUVar6[0x13].field_0x8;
          pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          pUVar5[0x12].field_0x21 = dVar9 * dVar9 < (double)(float)(dVar8 * dVar8 + dVar1 * dVar1);
        }
        bVar3 = TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals
                          (&this->NC_TrajectoryEffect,(void *)0x0);
        if (!bVar3) {
          pUVar7 = (UPrimitiveComponent *)FWeakObjectPtr::Get(&(this->NC_TrajectoryEffect).WeakPtr);
          WN_UnregisterHiddenPrimitive(pUVar7,true);
        }
        DrawThrowTrajectory(this);
      }
      else {
        pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
        if (-1 < (char)pUVar5[2].field_0x8) {
          pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          (**(code **)(*(longlong *)pUVar5 + 0x368))(pUVar5);
        }
        bVar3 = TWeakObjectPtr<UNiagaraComponent,FWeakObjectPtr>::UEOpEquals
                          (&this->NC_TrajectoryEffect,(void *)0x0);
        if (!bVar3) {
          pUVar7 = (UPrimitiveComponent *)FWeakObjectPtr::Get(&(this->NC_TrajectoryEffect).WeakPtr);
          WN_RegisterHiddenPrimitive(pUVar7,true);
        }
      }
    }
  }
  return;
}

// OnToLiftUpAttach @ 14b80b3c0

void __thiscall UDS_InteractionAbility_LiftUp::OnToLiftUpAttach(UDS_InteractionAbility_LiftUp *this)

{
  EDS_LiftUpEvent local_res10 [24];
  
  local_res10[0] = To_LiftUp_Attach;
  OnLiftUpEvent(this,local_res10);
  return;
}

// OnToPutDownDetach @ 14b80b3e0

void __thiscall
UDS_InteractionAbility_LiftUp::OnToPutDownDetach(UDS_InteractionAbility_LiftUp *this)

{
  EDS_LiftUpEvent local_res10 [24];
  
  local_res10[0] = To_PutDown_Detach;
  OnLiftUpEvent(this,local_res10);
  return;
}

// OnToThrowDetach @ 14b80b400

void __thiscall UDS_InteractionAbility_LiftUp::OnToThrowDetach(UDS_InteractionAbility_LiftUp *this)

{
  EDS_LiftUpEvent local_res10 [24];
  
  local_res10[0] = To_Throw_Detach;
  OnLiftUpEvent(this,local_res10);
  return;
}

// OnTrajectoryEffectSpawnComplete @ 14b80b420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_LiftUp::OnTrajectoryEffectSpawnComplete
          (UDS_InteractionAbility_LiftUp *this,FDS_EffectSpawnCompleteInfo param_1)

{
  UDS_LogManager *pUVar1;
  UPrimitiveComponent *pUVar2;
  undefined1 auStackY_178 [32];
  UNiagaraComponent *local_148 [2];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if (param_1.NiagaraComponent == (UNiagaraComponent *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_LiftUp::OnTrajectoryEffectSpawnComplete",0x3e,
                 Yes);
      UDS_LogManager::PrintLog
                (pUVar1,1,Warning,local_138.Ptr,0x718,L"InSpawnInfo.NiagaraComponent is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    local_148[0] = param_1.NiagaraComponent;
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable((UObject *)param_1.NiagaraComponent);
    }
    FWeakObjectPtr::operator=(&(this->NC_TrajectoryEffect).WeakPtr,(FObjectPtr)local_148);
    pUVar2 = (UPrimitiveComponent *)FWeakObjectPtr::Get(&(this->NC_TrajectoryEffect).WeakPtr);
    WN_RegisterHiddenPrimitive(pUVar2,true);
  }
  return;
}

// OpenInputKeyGroupWindow_LiftUp @ 14b80b910

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_LiftUp::OpenInputKeyGroupWindow_LiftUp(UDS_InteractionAbility_LiftUp *this)

{
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar4;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1b8 [8];
  FDelegateAllocation local_1b0;
  code *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  bool local_188;
  UDS_InteractionAbility_LiftUp *local_178;
  FDestructionSentinel local_170;
  FDelegateAllocation *local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_InteractionAbility_LiftUp::OpenInputKeyGroupWindow_LiftUp",0x3d,Yes
                );
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_148.Ptr,0x551,L"windowMng is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    uStack_190 = 0;
    local_198 = OnOpenInputKeyGroupWindow_LiftUp;
    local_1b8 = (undefined1  [8])0x0;
    local_1b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_1b0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
               (FWriteAccessScope *)&local_170);
    local_158 = &local_1b0;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_1b0);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_InteractionAbility_LiftUp____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_InteractionAbility_LiftUp *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_178 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_InteractionAbility_LiftUp *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_178);
      puVar2[4] = local_198;
      puVar2[5] = CONCAT44(uStack_18c,uStack_190);
    }
    if (local_170.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
    }
    pTVar4 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &local_198,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_1b8);
    UDS_WindowManager::OpenWindow(this_00,InputKeyGroup,pTVar4);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
               (FWriteAccessScope *)&local_198);
    if ((local_1b0.DelegateSize != 0) &&
       (local_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_1b0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_1b0,0,0,0x10);
      local_1b0.DelegateSize = 0;
    }
    if (local_188 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_18c,uStack_190),
                 (FDestructionSentinel *)&local_198);
    }
    if (local_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_1b0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1b8);
  }
  return;
}

// OpenInputKeyGroupWindow_Throw @ 14b80bb80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_LiftUp::OpenInputKeyGroupWindow_Throw(UDS_InteractionAbility_LiftUp *this)

{
  UDS_WindowManager *this_00;
  UDS_LogManager *pUVar1;
  undefined8 *puVar2;
  ulong64 uVar3;
  TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *pTVar4;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1b8 [8];
  FDelegateAllocation local_1b0;
  code *local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  bool local_188;
  UDS_InteractionAbility_LiftUp *local_178;
  FDestructionSentinel local_170;
  FDelegateAllocation *local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_148;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  this_00 = UDS_WindowManager::GetInst();
  if (this_00 == (UDS_WindowManager *)0x0) {
    pUVar1 = UDS_LogManager::GetInst();
    if (pUVar1 != (UDS_LogManager *)0x0) {
      pUVar1 = UDS_LogManager::GetInst();
      local_148._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_148,"UDS_InteractionAbility_LiftUp::OpenInputKeyGroupWindow_Throw",0x3c,Yes)
      ;
      UDS_LogManager::PrintLog(pUVar1,1,Warning,local_148.Ptr,0x580,L"windowMng is nullptr.");
      if ((void *)local_148._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_148._padding_);
      }
    }
  }
  else {
    uStack_190 = 0;
    local_198 = OnOpenInputKeyGroupWindow_Throw;
    local_1b8 = (undefined1  [8])0x0;
    local_1b0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_1b0.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
               (FWriteAccessScope *)&local_170);
    local_158 = &local_1b0;
    puVar2 = UE::Core::Private::DelegateAllocate(0x30,&local_1b0);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = &
                ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar3 = FDelegateHandle::GenerateNewID();
      puVar2[2] = uVar3;
      *puVar2 = &
                ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_InteractionAbility_LiftUp____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_InteractionAbility_LiftUp *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      puVar2[3] = 0;
      local_178 = this;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (this != (UDS_InteractionAbility_LiftUp *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar2 + 3),(FObjectPtr)&local_178);
      puVar2[4] = local_198;
      puVar2[5] = CONCAT44(uStack_18c,uStack_190);
    }
    if (local_170.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_170.Accessor,&local_170);
    }
    pTVar4 = TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>::
             TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy>
                       ((TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        &local_198,
                        (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)
                        local_1b8);
    UDS_WindowManager::OpenWindow(this_00,InputKeyGroup,pTVar4);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_1b8,
               (FWriteAccessScope *)&local_198);
    if ((local_1b0.DelegateSize != 0) &&
       (local_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_1b0.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_1b0,0,0,0x10);
      local_1b0.DelegateSize = 0;
    }
    if (local_188 == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_18c,uStack_190),
                 (FDestructionSentinel *)&local_198);
    }
    if (local_1b0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_1b0.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_1b8);
  }
  return;
}

// RequestSkill_Throw @ 14b810000

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

bool __thiscall
UDS_InteractionAbility_LiftUp::RequestSkill_Throw(UDS_InteractionAbility_LiftUp *this)

{
  TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *this_00;
  int iVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  UObject *pUVar7;
  UDS_SkillData *this_01;
  TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> TVar8;
  UDS_SkillAbilityContext *pUVar9;
  UDS_MovementCore *this_02;
  TVector<double> *pTVar10;
  FDS_EntityBase *pFVar11;
  UDS_SendPacketManager *this_03;
  FWeakObjectPtr local_res8;
  UDS_SkillAbilityContext *local_res10;
  TVector<double> local_138;
  FDS_SendSkillData local_118;
  
  bVar6 = TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (!bVar6) {
    pUVar7 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    if (*(int *)&pUVar7[3].field_0x10 == 4) {
      pUVar7 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
      if ((*(longlong *)&pUVar7[3].field_0x8 != 0) &&
         (iVar1 = *(int *)(*(longlong *)&pUVar7[3].field_0x8 + 0x20), 0 < iVar1)) {
        this_00 = &this->CurrentThrowSkillData;
        bVar6 = TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
        if (!bVar6) {
          this_01 = (UDS_SkillData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
          UDS_SkillData::EndSkill(this_01);
          local_res8.ObjectIndex = 0;
          local_res8.ObjectSerialNumber = 0;
          local_res10 = (UDS_SkillAbilityContext *)0x0;
          FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
          this_00->WeakPtr = local_res8;
        }
        TVar8 = UDS_SkillData::GetData((ulong64)&local_res8,this->_padding_,SUB41(iVar1,0));
                    /* WARNING: Load size is inaccurate */
        this_00->WeakPtr = *TVar8.WeakPtr;
        bVar6 = TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
        if (!bVar6) {
          pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          pUVar9 = NewObject<UDS_SkillAbilityContext>(pUVar7);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar9 != (UDS_SkillAbilityContext *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar9);
          }
          pUVar9->SkillID = iVar1;
          pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          pcVar2 = *(code **)(*(longlong *)pUVar7 + 0x2d8);
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar9);
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar9);
            }
          }
          local_res8.ObjectIndex = 0;
          local_res8.ObjectSerialNumber = 0;
          local_res10 = pUVar9;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar9);
          }
          FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
          (*pcVar2)(pUVar7,local_res8);
          FDS_SendSkillData::FDS_SendSkillData(&local_118);
          local_118.SkillID = iVar1;
          this_02 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          pTVar10 = UDS_MovementCore::GetActorFootLocation(this_02,&local_138);
          local_118.SourceLocation.field0_0x0._s_0.X = (pTVar10->field0_0x0)._s_0.X;
          local_118.SourceLocation.field0_0x0._s_0.Y = (pTVar10->field0_0x0)._s_0.Y;
          local_118.SourceLocation.field0_0x0._s_0.Z = (pTVar10->field0_0x0)._s_0.Z;
          pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          dVar5 = __real_4076800000000000;
          dVar4 = *(double *)(pUVar7 + 8);
          dVar3 = *(double *)&pUVar7[8].field_0x8;
          FGenericPlatformMath::Fmod(*(double *)&pUVar7[8].field_0x10,__real_4076800000000000);
          dVar3 = FGenericPlatformMath::Fmod(dVar3,dVar5);
          if (dVar3 < 0.0) {
            dVar3 = dVar3 + dVar5;
          }
          FGenericPlatformMath::Fmod(dVar4,dVar5);
          local_118.RotateYaw = (float)dVar3;
          pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          local_118.ProjectileEndLocation.field0_0x0._s_0.X =
               (this->ThrowStartSkillInfo).EndLocation.field0_0x0._s_0.X;
          local_118.ProjectileEndLocation.field0_0x0._s_0.Y =
               (this->ThrowStartSkillInfo).EndLocation.field0_0x0._s_0.Y;
          local_118.SkillStartTime = *(double *)&pUVar7[7].field_0x8;
          local_118.ProjectileEndLocation.field0_0x0._s_0.Z =
               (this->ThrowStartSkillInfo).EndLocation.field0_0x0._s_0.Z;
          pUVar7 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
          local_118.ProjectileImpactDelay =
               *(float *)&pUVar7[3].field_0x1c + (this->ThrowStartSkillInfo).ImpactTime;
          pUVar7 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
          pFVar11 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar7[2].field_0x8);
          if (pFVar11 != (FDS_EntityBase *)0x0) {
            local_118.ProjectileImpactLocation.field0_0x0._s_0.X =
                 (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.X;
            local_118.ProjectileImpactLocation.field0_0x0._s_0.Y =
                 (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.Y;
            local_118.ProjectileImpactLocation.field0_0x0._s_0.Z =
                 (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.Z +
                 (double)(float)((uint)pFVar11->ScaledCapsuleHalfHeight ^
                                __xmm_80000000800000008000000080000000);
            this_03 = UDS_SendPacketManager::GetInst();
            if (this_03 != (UDS_SendPacketManager *)0x0) {
              UDS_SendPacketManager::SendPlayerSkillRequest(this_03,&local_118);
              return true;
            }
          }
        }
      }
    }
  }
  return false;
}

// RequestSkill_ThrowCancel @ 14b810350

bool __thiscall
UDS_InteractionAbility_LiftUp::RequestSkill_ThrowCancel(UDS_InteractionAbility_LiftUp *this)

{
  TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *this_00;
  int iVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  UObject *pUVar7;
  UDS_SkillData *this_01;
  TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> TVar8;
  UDS_SkillAbilityContext *pUVar9;
  UDS_MovementCore *this_02;
  TVector<double> *pTVar10;
  UDS_SendPacketManager *this_03;
  FWeakObjectPtr local_res8;
  UDS_SkillAbilityContext *local_res10;
  TVector<double> local_128;
  FDS_SendSkillData local_108;
  
  bVar6 = TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (!bVar6) {
    pUVar7 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    if (*(int *)&pUVar7[3].field_0x10 == 4) {
      pUVar7 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
      if ((*(longlong *)&pUVar7[3].field_0x8 != 0) &&
         (iVar1 = *(int *)(*(longlong *)&pUVar7[3].field_0x8 + 0x1c), 0 < iVar1)) {
        this_00 = &this->CurrentThrowSkillData;
        bVar6 = TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
        if (!bVar6) {
          this_01 = (UDS_SkillData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
          UDS_SkillData::EndSkill(this_01);
          local_res8.ObjectIndex = 0;
          local_res8.ObjectSerialNumber = 0;
          local_res10 = (UDS_SkillAbilityContext *)0x0;
          FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
          this_00->WeakPtr = local_res8;
        }
        TVar8 = UDS_SkillData::GetData((ulong64)&local_res8,this->_padding_,SUB41(iVar1,0));
                    /* WARNING: Load size is inaccurate */
        this_00->WeakPtr = *TVar8.WeakPtr;
        bVar6 = TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
        if (!bVar6) {
          pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          pUVar9 = NewObject<UDS_SkillAbilityContext>(pUVar7);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar9 != (UDS_SkillAbilityContext *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar9);
          }
          pUVar9->SkillID = iVar1;
          pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          pcVar2 = *(code **)(*(longlong *)pUVar7 + 0x2d8);
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar9);
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar9);
            }
          }
          local_res8.ObjectIndex = 0;
          local_res8.ObjectSerialNumber = 0;
          local_res10 = pUVar9;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar9);
          }
          FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
          (*pcVar2)(pUVar7,local_res8);
          FDS_SendSkillData::FDS_SendSkillData(&local_108);
          local_108.SkillID = iVar1;
          this_02 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          pTVar10 = UDS_MovementCore::GetActorFootLocation(this_02,&local_128);
          local_108.SourceLocation.field0_0x0._s_0.X = (pTVar10->field0_0x0)._s_0.X;
          local_108.SourceLocation.field0_0x0._s_0.Y = (pTVar10->field0_0x0)._s_0.Y;
          local_108.SourceLocation.field0_0x0._s_0.Z = (pTVar10->field0_0x0)._s_0.Z;
          pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          dVar5 = __real_4076800000000000;
          dVar4 = *(double *)(pUVar7 + 8);
          dVar3 = *(double *)&pUVar7[8].field_0x8;
          FGenericPlatformMath::Fmod(*(double *)&pUVar7[8].field_0x10,__real_4076800000000000);
          dVar3 = FGenericPlatformMath::Fmod(dVar3,dVar5);
          if (dVar3 < 0.0) {
            dVar3 = dVar3 + dVar5;
          }
          FGenericPlatformMath::Fmod(dVar4,dVar5);
          local_108.RotateYaw = (float)dVar3;
          pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          local_108.SkillStartTime = *(double *)&pUVar7[7].field_0x8;
          this_03 = UDS_SendPacketManager::GetInst();
          if (this_03 != (UDS_SendPacketManager *)0x0) {
            UDS_SendPacketManager::SendPlayerSkillRequest(this_03,&local_108);
            return true;
          }
        }
      }
    }
  }
  return false;
}

// RequestSkill_ThrowReady @ 14b810640

bool __thiscall
UDS_InteractionAbility_LiftUp::RequestSkill_ThrowReady(UDS_InteractionAbility_LiftUp *this)

{
  TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *this_00;
  int iVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  UObject *pUVar7;
  UDS_SkillData *this_01;
  TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> TVar8;
  UDS_SkillAbilityContext *pUVar9;
  UDS_MovementCore *this_02;
  TVector<double> *pTVar10;
  UDS_SendPacketManager *this_03;
  FWeakObjectPtr local_res8;
  UDS_SkillAbilityContext *local_res10;
  TVector<double> local_128;
  FDS_SendSkillData local_108;
  
  bVar6 = TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (!bVar6) {
    pUVar7 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    if (*(int *)&pUVar7[3].field_0x10 == 2) {
      pUVar7 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
      if ((*(longlong *)&pUVar7[3].field_0x8 != 0) &&
         (iVar1 = *(int *)(*(longlong *)&pUVar7[3].field_0x8 + 0x1c), 0 < iVar1)) {
        this_00 = &this->CurrentThrowSkillData;
        bVar6 = TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
        if (!bVar6) {
          this_01 = (UDS_SkillData *)FWeakObjectPtr::Get(&this_00->WeakPtr);
          UDS_SkillData::EndSkill(this_01);
          local_res8.ObjectIndex = 0;
          local_res8.ObjectSerialNumber = 0;
          local_res10 = (UDS_SkillAbilityContext *)0x0;
          FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
          this_00->WeakPtr = local_res8;
        }
        TVar8 = UDS_SkillData::GetData((ulong64)&local_res8,this->_padding_,SUB41(iVar1,0));
                    /* WARNING: Load size is inaccurate */
        this_00->WeakPtr = *TVar8.WeakPtr;
        bVar6 = TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
        if (!bVar6) {
          pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          pUVar9 = NewObject<UDS_SkillAbilityContext>(pUVar7);
          if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
             (pUVar9 != (UDS_SkillAbilityContext *)0x0)) {
            UE::GC::MarkAsReachable((UObject *)pUVar9);
          }
          pUVar9->SkillID = iVar1;
          pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          pcVar2 = *(code **)(*(longlong *)pUVar7 + 0x2d8);
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar9);
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)pUVar9);
            }
          }
          local_res8.ObjectIndex = 0;
          local_res8.ObjectSerialNumber = 0;
          local_res10 = pUVar9;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pUVar9);
          }
          FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
          (*pcVar2)(pUVar7,local_res8);
          FDS_SendSkillData::FDS_SendSkillData(&local_108);
          local_108.SkillID = iVar1;
          this_02 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          pTVar10 = UDS_MovementCore::GetActorFootLocation(this_02,&local_128);
          local_108.SourceLocation.field0_0x0._s_0.X = (pTVar10->field0_0x0)._s_0.X;
          local_108.SourceLocation.field0_0x0._s_0.Y = (pTVar10->field0_0x0)._s_0.Y;
          local_108.SourceLocation.field0_0x0._s_0.Z = (pTVar10->field0_0x0)._s_0.Z;
          pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
          dVar5 = __real_4076800000000000;
          dVar4 = *(double *)(pUVar7 + 8);
          dVar3 = *(double *)&pUVar7[8].field_0x8;
          FGenericPlatformMath::Fmod(*(double *)&pUVar7[8].field_0x10,__real_4076800000000000);
          dVar3 = FGenericPlatformMath::Fmod(dVar3,dVar5);
          if (dVar3 < 0.0) {
            dVar3 = dVar3 + dVar5;
          }
          FGenericPlatformMath::Fmod(dVar4,dVar5);
          local_108.RotateYaw = (float)dVar3;
          pUVar7 = FWeakObjectPtr::Get(&this_00->WeakPtr);
          local_108.SkillStartTime = *(double *)&pUVar7[7].field_0x8;
          this_03 = UDS_SendPacketManager::GetInst();
          if (this_03 != (UDS_SendPacketManager *)0x0) {
            UDS_SendPacketManager::SendPlayerSkillRequest(this_03,&local_108);
            return true;
          }
        }
      }
    }
  }
  return false;
}

// SpawnInstallGuideActor @ 14b811ba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UDS_InteractionAbility_LiftUp::SpawnInstallGuideActor(UDS_InteractionAbility_LiftUp *this)

{
  TSharedPtr<FStreamableHandle,1> *pTVar1;
  ForAnyElementType _Src;
  bool bVar2;
  int iVar3;
  UDS_LogManager *pUVar4;
  UAssetManager *pUVar5;
  undefined8 *puVar6;
  ulong64 uVar7;
  TSharedPtr<FStreamableHandle,1> *pTVar8;
  FScriptContainerElement *pFVar9;
  undefined1 auStackY_288 [32];
  EDS_ClientResourceType local_238 [8];
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_230;
  undefined1 local_220 [8];
  FDelegateAllocation local_218;
  undefined1 local_208 [32];
  code *local_1e8;
  FMRSWRecursiveAccessDetector *pFStack_1e0;
  char *local_1d8;
  UDS_InteractionAbility_LiftUp *local_1c8;
  FString local_1c0;
  TSharedPtr<FStreamableHandle,1> local_1b0;
  FSoftObjectPath local_1a0;
  FDestructionSentinel local_180;
  FDelegateAllocation *local_168;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_158;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_288;
  bVar2 = TWeakObjectPtr<ADS_InstallGuideActor,FWeakObjectPtr>::UEOpEquals
                    (&this->InstallGuideActor,(void *)0x0);
  if (bVar2) {
    pTVar1 = &this->AsyncLoadHandle_InstallGuideActor;
    if (pTVar1->Object == (FStreamableHandle *)0x0) {
      local_238[0] = InstallGuideActor;
      UDS_CommonSetting::GetClientBPPath(&local_1a0,local_238);
      if (local_1a0.AssetPath.PackageName == (FName)0x0) {
        pUVar4 = UDS_LogManager::GetInst();
        if (pUVar4 != (UDS_LogManager *)0x0) {
          pUVar4 = UDS_LogManager::GetInst();
          local_158._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_158,"UDS_InteractionAbility_LiftUp::SpawnInstallGuideActor",0x35,Yes);
          UDS_LogManager::PrintLog
                    (pUVar4,1,Warning,local_158.Ptr,0x5b9,L"installGuideActorBPPath is invalid.");
          if ((void *)local_158._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_158._padding_);
          }
        }
        bVar2 = false;
      }
      else {
        local_230.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_230.ArrayNum = 0;
        local_230.ArrayMax = 0;
        iVar3 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x820,&local_230.AllocatorInstance,&local_230.ArrayMax);
        _Src.Data = local_1a0.SubPathString.Data.AllocatorInstance.Data;
        local_230.ArrayNum = iVar3 + 1;
        *(FName *)&local_230.AllocatorInstance.Data[(longlong)iVar3 * 0x20].field_0x0 =
             local_1a0.AssetPath.PackageName;
        *(FName *)(local_230.AllocatorInstance.Data + (longlong)iVar3 * 0x20 + 8) =
             local_1a0.AssetPath.AssetName;
        pFVar9 = local_230.AllocatorInstance.Data + (longlong)iVar3 * 0x20 + 0x10;
        *(FScriptContainerElement **)pFVar9 = (FScriptContainerElement *)0x0;
        *(int *)(pFVar9 + 8) = local_1a0.SubPathString.Data.ArrayNum;
        if (local_1a0.SubPathString.Data.ArrayNum == 0) {
          *(int *)(pFVar9 + 0xc) = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,local_1a0.SubPathString.Data.ArrayNum,0,(ForAnyElementType *)pFVar9,
                     local_1a0.SubPathString.Data.ArrayNum,(int *)(pFVar9 + 0xc));
                    /* WARNING: Load size is inaccurate */
          memcpy(*pFVar9,_Src.Data,(longlong)local_1a0.SubPathString.Data.ArrayNum);
        }
        pUVar5 = UAssetManager::Get();
        local_208._0_4_ = 0x5c0;
        local_208._4_4_ = 0x4c;
        local_208._8_8_ =
             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Ability\\DS_InteractionAbility_LiftUp.cpp"
        ;
        local_1c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_208._16_8_ =
             "bool __cdecl UDS_InteractionAbility_LiftUp::SpawnInstallGuideActor(void)";
        local_1c0.Data.ArrayNum = 0;
        local_1c0.Data.ArrayMax = 0;
        local_1e8 = OnCompleteLoadInstallGuideActor;
        pFStack_1e0 = (FMRSWRecursiveAccessDetector *)
                      ((ulonglong)local_1b0.SharedReferenceCount.ReferenceController._4_4_ << 0x20);
        local_220 = (undefined1  [8])0x0;
        local_218.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
        local_218.DelegateSize = 0;
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_220,
                   (FWriteAccessScope *)&local_180);
        local_168 = &local_218;
        puVar6 = UE::Core::Private::DelegateAllocate(0x30,&local_218);
        if (puVar6 != (undefined8 *)0x0) {
          *puVar6 = &
                    ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
          ;
          uVar7 = FDelegateHandle::GenerateNewID();
          puVar6[2] = uVar7;
          *puVar6 = &
                    ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_InteractionAbility_LiftUp____A6AXXZUFDefaultDelegateUserPolicy____V__6B_
          ;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          puVar6[3] = 0;
          local_1c8 = this;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar6 + 3),(FObjectPtr)&local_1c8);
          puVar6[4] = local_1e8;
          puVar6[5] = pFStack_1e0;
        }
        if (local_180.bDestroyed == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_180.Accessor,&local_180);
        }
        local_1e8._4_4_ = local_208._4_4_;
        local_1e8._0_4_ = local_208._0_4_;
        pFStack_1e0 = (FMRSWRecursiveAccessDetector *)local_208._8_8_;
        local_1d8 = (char *)local_208._16_8_;
        pTVar8 = FStreamableManager::
                 RequestAsyncLoad<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
                           (&pUVar5->StreamableManager,&local_1b0,&local_230,
                            (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_220,0,
                            false,false,&local_1c0,(FSourceLocation *)&local_1e8);
        if (pTVar1 != pTVar8) {
          pTVar1->Object = pTVar8->Object;
          pTVar8->Object = (FStreamableHandle *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->AsyncLoadHandle_InstallGuideActor).SharedReferenceCount,
                     &pTVar8->SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  ((TReferenceControllerBase<1> *)
                   CONCAT44(local_1b0.SharedReferenceCount.ReferenceController._4_4_,
                            local_1b0.SharedReferenceCount.ReferenceController._0_4_));
        TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                  ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_220,
                   (FWriteAccessScope *)local_208);
        if ((local_218.DelegateSize != 0) &&
           (local_218.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
          (*(code *)**(undefined8 **)local_218.DelegateAllocator)();
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                    ((ForAnyElementType *)&local_218,0,0,0x10);
          local_218.DelegateSize = 0;
        }
        if (local_208[0x10] == false) {
          FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                    ((FMRSWRecursiveAccessDetector *)local_208._8_8_,
                     (FDestructionSentinel *)local_208);
        }
        if (local_218.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
          FMemory::Free((void *)local_218.DelegateAllocator);
        }
        FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                  ((FMRSWRecursiveAccessDetector *)local_220);
        bVar2 = true;
        DestructItems<FSoftObjectPath,int>
                  ((FSoftObjectPath *)local_230.AllocatorInstance.Data,local_230.ArrayNum);
        if ((FSoftObjectPath *)local_230.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
          FMemory::Free(local_230.AllocatorInstance.Data);
        }
      }
      if (local_1a0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a0.SubPathString.Data.AllocatorInstance.Data);
      }
    }
    else {
      bVar2 = true;
    }
  }
  else {
    bVar2 = InitInstallGuideActor(this);
  }
  return bVar2;
}

// SpawnTrajectoryEffect @ 14b8122c0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall
UDS_InteractionAbility_LiftUp::SpawnTrajectoryEffect(UDS_InteractionAbility_LiftUp *this)

{
  TReferenceControllerBase<1> *pTVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FWeakObjectPtr local_res8;
  undefined8 local_res10;
  undefined1 local_158 [16];
  int local_148;
  code *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  bool local_128;
  FDestructionSentinel local_118;
  undefined1 *local_100;
  undefined1 local_f8 [200];
  ForAnyElementType local_30;
  int local_28;
  
  FDS_EffectSpawnInfo::FDS_EffectSpawnInfo((FDS_EffectSpawnInfo *)local_f8);
  local_f8._40_8_ = this->_padding_;
  local_f8._0_4_ = 0xe67b;
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = 0;
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  local_f8._52_4_ = local_res8.ObjectIndex;
  local_f8._56_4_ = local_res8.ObjectSerialNumber;
  uStack_130 = 0;
  local_138 = OnTrajectoryEffectSpawnComplete;
  local_158._0_8_ = (atomic<unsigned___int64>)0x0;
  local_158._8_8_ = (FScriptContainerElement *)0x0;
  local_148 = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_158,
             (FWriteAccessScope *)&local_118);
  local_100 = local_158 + 8;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)(local_158 + 8));
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &
              ___7__TCommonDelegateInstanceState___A6AXUFDS_EffectSpawnCompleteInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_InteractionAbility_LiftUp____A6AXUFDS_EffectSpawnCompleteInfo___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar4[3] = 0;
    local_res8 = (FWeakObjectPtr)this;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar4 + 3),(FObjectPtr)&local_res8);
    puVar4[4] = local_138;
    puVar4[5] = CONCAT44(uStack_12c,uStack_130);
  }
  if (local_118.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_118.Accessor,&local_118);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_158,
             (FWriteAccessScope *)&local_138);
  iVar3 = local_148;
  uVar2 = local_158._8_8_;
  local_158._8_8_ = (atomic<unsigned___int64> *)0x0;
  local_148 = 0;
  if (local_128 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_12c,uStack_130),
               (FDestructionSentinel *)&local_138);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_f8 + 0xc0),
             (FWriteAccessScope *)&local_138);
  if (local_28 != 0) {
    if (local_30.Data == (FScriptContainerElement *)0x0) goto LAB_14b81247a;
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
LAB_14b81247a:
  local_30.Data = (FScriptContainerElement *)uVar2;
  local_28 = iVar3;
  if (local_128 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_12c,uStack_130),
               (FDestructionSentinel *)&local_138);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_158,
             (FWriteAccessScope *)&local_138);
  if ((local_148 != 0) &&
     ((FMRSWRecursiveAccessDetector *)local_158._8_8_ != (FMRSWRecursiveAccessDetector *)0x0)) {
    (**(code **)*(atomic<unsigned___int64> *)local_158._8_8_)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)(local_158 + 8),0,0,0x10);
    local_148 = 0;
  }
  if (local_128 == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)CONCAT44(uStack_12c,uStack_130),
               (FDestructionSentinel *)&local_138);
  }
  if ((FMRSWRecursiveAccessDetector *)local_158._8_8_ != (FMRSWRecursiveAccessDetector *)0x0) {
    FMemory::Free((void *)local_158._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_158);
  UDS_EffectManager::PlayEffect((FDS_EffectSpawnInfo *)local_f8);
  if ((TReferenceControllerBase<1> *)local_f8._184_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *(atomic<int> *)(local_f8._184_8_ + 8) =
         (atomic<int>)((int)*(atomic<int> *)(local_f8._184_8_ + 8) + 1);
    UNLOCK();
  }
  pTVar1 = (this->AsyncLoadHandle_TrajectoryEffect).SharedReferenceCount.ReferenceController;
  (this->AsyncLoadHandle_TrajectoryEffect).Object = (FStreamableHandle *)local_f8._176_8_;
  (this->AsyncLoadHandle_TrajectoryEffect).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)local_f8._184_8_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(local_f8 + 0xc0),
             (FWriteAccessScope *)local_158);
  if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)local_30.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_148._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_158._8_8_,(FDestructionSentinel *)local_158);
  }
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)(local_f8 + 0xc0));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_f8._184_8_);
  if ((FScriptContainerElement *)local_f8._24_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_f8._24_8_);
  }
  return true;
}

// TryActivate @ 14b813550

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

bool __cdecl
UDS_InteractionAbility_LiftUp::TryActivate(ulong64 *param_1,ulong64 *param_2,int *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FDS_EntityBase *this;
  UDS_LogManager *pUVar6;
  FDS_EntityBase *pFVar7;
  UDS_NPCDataSet *this_00;
  FDS_ActionHandlingTableRow *pFVar8;
  UObject *pUVar9;
  UObject *pUVar10;
  FDS_SkillActLevelTableRow *pFVar11;
  FDS_SkillAttackTableRow *pFVar12;
  void *pvVar13;
  undefined1 auStackY_e38 [32];
  EDS_AbilityTagType local_df7 [7];
  FWeakObjectPtr local_df0;
  FWeakObjectPtr local_de8;
  FWeakObjectPtr local_de0;
  FWeakObjectPtr local_dd8;
  undefined8 local_dd0;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_dc8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_ca8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_b88;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_a68;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_948;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_828;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_708;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5e8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4c8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3a8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_288;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_168;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_e38;
  if ((*param_1 == 0) || (*param_2 == 0)) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return false;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_168._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_168,"UDS_InteractionAbility_LiftUp::TryActivate",0x2a,Yes);
    UDS_LogManager::PrintLog(pUVar6,1,Warning,local_168.Ptr,0x1da,L"Invalid parameter.");
    pvVar13 = (void *)local_168._padding_;
  }
  else {
    this = FDS_EntityBase::GetEntityBase(param_1);
    if (this == (FDS_EntityBase *)0x0) {
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 == (UDS_LogManager *)0x0) {
        return false;
      }
      pUVar6 = UDS_LogManager::GetInst();
      local_dc8._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_dc8,"UDS_InteractionAbility_LiftUp::TryActivate",0x2a,Yes);
      UDS_LogManager::PrintLog
                (pUVar6,1,Warning,local_dc8.Ptr,0x1e1,L"sourceEntity is nullptr. (%llu)");
      pvVar13 = (void *)local_dc8._padding_;
    }
    else {
      pFVar7 = FDS_EntityBase::GetEntityBase(param_2);
      if (pFVar7 == (FDS_EntityBase *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 == (UDS_LogManager *)0x0) {
          return false;
        }
        pUVar6 = UDS_LogManager::GetInst();
        local_ca8._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_ca8,"UDS_InteractionAbility_LiftUp::TryActivate",0x2a,Yes);
        UDS_LogManager::PrintLog
                  (pUVar6,1,Warning,local_ca8.Ptr,0x1e8,L"targetEntity is nullptr. (%llu)");
        pvVar13 = (void *)local_ca8._padding_;
      }
      else {
        UDS_NPCObjectHandlingData::GetData((ulong64)&local_dd8);
        bVar3 = TWeakObjectPtr<UDS_NPCObjectHandlingData,FWeakObjectPtr>::UEOpEquals
                          ((TWeakObjectPtr<UDS_NPCObjectHandlingData,FWeakObjectPtr> *)&local_dd8,
                           (void *)0x0);
        if (bVar3) {
          pUVar6 = UDS_LogManager::GetInst();
          if (pUVar6 == (UDS_LogManager *)0x0) {
            return false;
          }
          pUVar6 = UDS_LogManager::GetInst();
          local_b88._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_b88,"UDS_InteractionAbility_LiftUp::TryActivate",0x2a,Yes);
          UDS_LogManager::PrintLog
                    (pUVar6,1,Warning,local_b88.Ptr,0x1ef,
                     L"npcObjectHandlingData is nullptr. (%llu)");
          pvVar13 = (void *)local_b88._padding_;
        }
        else {
          TDS_DataSetGetter<UDS_NPCDataSet>::Get((ulong64)&local_de0);
          bVar3 = TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr>::UEOpEquals
                            ((TWeakObjectPtr<UDS_NPCDataSet,FWeakObjectPtr> *)&local_de0,(void *)0x0
                            );
          if (bVar3) {
            pUVar6 = UDS_LogManager::GetInst();
            if (pUVar6 == (UDS_LogManager *)0x0) {
              return false;
            }
            pUVar6 = UDS_LogManager::GetInst();
            local_a68._padding_ = 0;
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_a68,"UDS_InteractionAbility_LiftUp::TryActivate",0x2a,Yes);
            UDS_LogManager::PrintLog
                      (pUVar6,1,Warning,local_a68.Ptr,0x1f6,L"npcDataSet is nullptr. (%llu)");
            pvVar13 = (void *)local_a68._padding_;
          }
          else {
            this_00 = (UDS_NPCDataSet *)FWeakObjectPtr::Get(&local_de0);
            iVar5 = UDS_NPCDataSet::GetInteractionFunctionValue(this_00,*param_3,Handling);
            pFVar8 = FDS_ActionHandlingTableRow::Get((longlong)iVar5,true);
            if (pFVar8 == (FDS_ActionHandlingTableRow *)0x0) {
              pUVar6 = UDS_LogManager::GetInst();
              if (pUVar6 == (UDS_LogManager *)0x0) {
                return false;
              }
              pUVar6 = UDS_LogManager::GetInst();
              local_948._padding_ = 0;
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_948,"UDS_InteractionAbility_LiftUp::TryActivate",0x2a,Yes);
              UDS_LogManager::PrintLog
                        (pUVar6,1,Warning,local_948.Ptr,0x1ff,
                         L"actionHandlingTable is nullptr. (%d)");
              pvVar13 = (void *)local_948._padding_;
            }
            else {
              UDS_AbilityDataSet::GetAbilityData<UDS_InteractionAbilityData_LiftUp>
                        ((ulong64 *)&local_df0,(EDS_AbilityTagType *)param_1);
              bVar3 = TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>::UEOpEquals
                                ((TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr> *
                                 )&local_df0,(void *)0x0);
              if (bVar3) {
                pUVar6 = UDS_LogManager::GetInst();
                if (pUVar6 == (UDS_LogManager *)0x0) {
                  return false;
                }
                pUVar6 = UDS_LogManager::GetInst();
                local_828._padding_ = 0;
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_828,"UDS_InteractionAbility_LiftUp::TryActivate",0x2a,Yes);
                UDS_LogManager::PrintLog
                          (pUVar6,1,Warning,local_828.Ptr,0x206,L"abilityData is nullptr.");
                pvVar13 = (void *)local_828._padding_;
              }
              else {
                pUVar9 = FWeakObjectPtr::Get(&local_df0);
                *(ulong64 *)&pUVar9[2].field_0x8 = *param_2;
                pUVar9 = FWeakObjectPtr::Get(&local_df0);
                *(int *)&pUVar9[2].field_0x10 = *param_3;
                pUVar9 = FWeakObjectPtr::Get(&local_df0);
                pUVar10 = FWeakObjectPtr::Get(&local_dd8);
                uVar2 = *(undefined8 *)&pUVar10[2].field_0x10;
                *(undefined8 *)&pUVar9[2].field_0x18 = *(undefined8 *)&pUVar10[2].field_0x8;
                *(undefined8 *)&pUVar9[2].field_0x20 = uVar2;
                *(undefined8 *)(pUVar9 + 3) = *(undefined8 *)&pUVar10[2].field_0x18;
                pUVar9 = FWeakObjectPtr::Get(&local_df0);
                *(FDS_ActionHandlingTableRow **)&pUVar9[3].field_0x8 = pFVar8;
                pUVar9 = FWeakObjectPtr::Get(&local_df0);
                *(float *)&pUVar9[3].field_0x20 = pFVar8->HandlingDropDetachDelay;
                if (pFVar8->ID_ThrowSkillStart < 1) {
LAB_14b813d29:
                  local_dd0 = 0;
                  local_df7[0] = Interaction_LiftUp;
                  bVar3 = FDS_EntityBase::TryActivateAbility
                                    (this,local_df7,(TObjectPtr<UWN_AbilityContext>)&local_dd0);
                  return bVar3;
                }
                UDS_SkillData::GetData
                          ((ulong64)&local_de8,*param_1,SUB41(pFVar8->ID_ThrowSkillStart,0));
                bVar3 = TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr>::UEOpEquals
                                  ((TWeakObjectPtr<UDS_SkillData,FWeakObjectPtr> *)&local_de8,
                                   (void *)0x0);
                if (bVar3) {
                  pUVar6 = UDS_LogManager::GetInst();
                  if (pUVar6 == (UDS_LogManager *)0x0) {
                    return false;
                  }
                  pUVar6 = UDS_LogManager::GetInst();
                  local_708._padding_ = 0;
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_708,"UDS_InteractionAbility_LiftUp::TryActivate",0x2a,Yes);
                  UDS_LogManager::PrintLog
                            (pUVar6,1,Warning,local_708.Ptr,0x220,L"skillData is nullptr. (%d)");
                  pvVar13 = (void *)local_708._padding_;
                }
                else {
                  pUVar9 = FWeakObjectPtr::Get(&local_df0);
                  pUVar10 = FWeakObjectPtr::Get(&local_de8);
                  *(undefined4 *)&pUVar9[3].field_0x18 = *(undefined4 *)&pUVar10[8].field_0x20;
                  pUVar9 = FWeakObjectPtr::Get(&local_de8);
                  pFVar11 = FDS_SkillActLevelTableRow::Get
                                      ((longlong)*(int *)&pUVar9[2].field_0x24,true);
                  if (pFVar11 == (FDS_SkillActLevelTableRow *)0x0) {
                    pUVar6 = UDS_LogManager::GetInst();
                    if (pUVar6 == (UDS_LogManager *)0x0) {
                      return false;
                    }
                    pUVar6 = UDS_LogManager::GetInst();
                    local_5e8._padding_ = 0;
                    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                              (&local_5e8,"UDS_InteractionAbility_LiftUp::TryActivate",0x2a,Yes);
                    UDS_LogManager::PrintLog
                              (pUVar6,1,Warning,local_5e8.Ptr,0x22c,
                               L"skillActLevelTable is nullptr. (%d)");
                    pvVar13 = (void *)local_5e8._padding_;
                  }
                  else {
                    iVar5 = (pFVar11->ID_AttackLink).ArrayNum;
                    if (iVar5 == 0) {
                      pUVar6 = UDS_LogManager::GetInst();
                      if (pUVar6 == (UDS_LogManager *)0x0) {
                        return false;
                      }
                      pUVar6 = UDS_LogManager::GetInst();
                      local_4c8._padding_ = 0;
                      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                                (&local_4c8,"UDS_InteractionAbility_LiftUp::TryActivate",0x2a,Yes);
                      UDS_LogManager::PrintLog
                                (pUVar6,1,Warning,local_4c8.Ptr,0x232,
                                 L"skillActLevelTable->ID_AttackLink.Num() == 0. (%d)");
                      pvVar13 = (void *)local_4c8._padding_;
                    }
                    else {
                      if ((iVar5 < 1) &&
                         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar3)) {
                        pcVar1 = (code *)swi(3);
                        uVar4 = (*pcVar1)();
                        return (bool)uVar4;
                      }
                      pFVar12 = FDS_SkillAttackTableRow::Get
                                          ((longlong)
                                           *(int *)(pFVar11->ID_AttackLink).AllocatorInstance.Data,
                                           true);
                      if (pFVar12 == (FDS_SkillAttackTableRow *)0x0) {
                        pUVar6 = UDS_LogManager::GetInst();
                        if (pUVar6 == (UDS_LogManager *)0x0) {
                          return false;
                        }
                        pUVar6 = UDS_LogManager::GetInst();
                        local_3a8._padding_ = 0;
                        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                                  (&local_3a8,"UDS_InteractionAbility_LiftUp::TryActivate",0x2a,Yes)
                        ;
                        UDS_LogManager::PrintLog
                                  (pUVar6,1,Warning,local_3a8.Ptr,0x23a,
                                   L"skillAttackTable is nullptr. (%d)");
                        pvVar13 = (void *)local_3a8._padding_;
                      }
                      else {
                        if ((pFVar12->ImpactTime).ArrayNum != 0) {
                          pUVar9 = FWeakObjectPtr::Get(&local_df0);
                          if (((pFVar12->ImpactTime).ArrayNum < 1) &&
                             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                                ("(Index >= 0) & (Index < ArrayNum)",
                                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                 ,0x447,
                                                 L"Array index out of bounds: %lld into an array of size %lld"
                                                ), bVar3)) {
                            pcVar1 = (code *)swi(3);
                            uVar4 = (*pcVar1)();
                            return (bool)uVar4;
                          }
                          *(undefined4 *)&pUVar9[3].field_0x1c =
                               *(undefined4 *)(pFVar12->ImpactTime).AllocatorInstance.Data;
                          goto LAB_14b813d29;
                        }
                        pUVar6 = UDS_LogManager::GetInst();
                        if (pUVar6 == (UDS_LogManager *)0x0) {
                          return false;
                        }
                        pUVar6 = UDS_LogManager::GetInst();
                        local_288._padding_ = 0;
                        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                                  (&local_288,"UDS_InteractionAbility_LiftUp::TryActivate",0x2a,Yes)
                        ;
                        UDS_LogManager::PrintLog
                                  (pUVar6,1,Warning,local_288.Ptr,0x240,
                                   L"skillAttackTable->ImpactTime.Num() == 0. (%d)");
                        pvVar13 = (void *)local_288._padding_;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if (pvVar13 != (void *)0x0) {
    FMemory::Free(pvVar13);
  }
  return false;
}

// UpdateGuideDecal @ 14b818130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_LiftUp::UpdateGuideDecal(UDS_InteractionAbility_LiftUp *this,float param_1)

{
  TWeakObjectPtr<ADS_InstallGuideActor,FWeakObjectPtr> *this_00;
  double dVar1;
  bool bVar2;
  UDS_LogManager *pUVar3;
  UObject *pUVar4;
  UObject *pUVar5;
  double dVar6;
  double dVar7;
  undefined1 auStackY_168 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = &this->InstallGuideActor;
  bVar2 = TWeakObjectPtr<ADS_InstallGuideActor,FWeakObjectPtr>::UEOpEquals(this_00,(void *)0x0);
  if (bVar2) {
    pUVar3 = UDS_LogManager::GetInst();
    if (pUVar3 != (UDS_LogManager *)0x0) {
      pUVar3 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_LiftUp::UpdateGuideDecal",0x2f,Yes);
      UDS_LogManager::PrintLog
                (pUVar3,1,Warning,local_138.Ptr,0x62d,L"InstallGuideActor is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else if (((UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X !=
             (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.X) ||
           (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y !=
            (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.Y)) ||
          (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z !=
           (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.Z)) {
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    dVar1 = (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.Y;
    *(double *)&pUVar4[0x13].field_0x10 =
         (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.X;
    *(double *)&pUVar4[0x13].field_0x18 = dVar1;
    *(double *)&pUVar4[0x13].field_0x20 =
         (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.Z;
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    pUVar5 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    dVar1 = *(double *)&pUVar4[0x12].field_0x10 - *(double *)&pUVar5[0x13].field_0x18;
    dVar6 = *(double *)&pUVar4[0x12].field_0x8 - *(double *)&pUVar5[0x13].field_0x10;
    dVar7 = *(double *)(pUVar4 + 0x12) - *(double *)&pUVar5[0x13].field_0x8;
    pUVar4 = FWeakObjectPtr::Get(&this_00->WeakPtr);
    pUVar4[0x12].field_0x21 = dVar7 * dVar7 < (double)(float)(dVar1 * dVar1 + dVar6 * dVar6);
  }
  return;
}

// UpdateInstallDecal @ 14b818300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_InteractionAbility_LiftUp::UpdateInstallDecal(UDS_InteractionAbility_LiftUp *this,float param_1)

{
  bool bVar1;
  UDS_LogManager *pUVar2;
  UDS_MovementCore *this_00;
  UObject *pUVar3;
  undefined1 auStackY_188 [32];
  TVector<double>_u_0 local_158;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_188;
  bVar1 = TWeakObjectPtr<ADS_InstallGuideActor,FWeakObjectPtr>::UEOpEquals
                    (&this->InstallGuideActor,(void *)0x0);
  if (bVar1) {
    pUVar2 = UDS_LogManager::GetInst();
    if (pUVar2 != (UDS_LogManager *)0x0) {
      pUVar2 = UDS_LogManager::GetInst();
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"UDS_InteractionAbility_LiftUp::UpdateInstallDecal",0x31,Yes);
      UDS_LogManager::PrintLog
                (pUVar2,1,Warning,local_138.Ptr,0x61e,L"InstallGuideActor is nullptr.");
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
  }
  else {
    this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
    UDS_MovementCore::GetActorFootLocation(this_00,(TVector<double> *)&local_158._s_0);
    pUVar3 = FWeakObjectPtr::Get(&(this->InstallGuideActor).WeakPtr);
    *(double *)&pUVar3[0x12].field_0x8 = local_158._s_0.X;
    *(double *)&pUVar3[0x12].field_0x10 = local_158._s_0.Y;
    *(double *)&pUVar3[0x12].field_0x18 = local_158._s_0.Z;
    pUVar3 = FWeakObjectPtr::Get(&(this->InstallGuideActor).WeakPtr);
    pUVar3[0x11].field_0x18 = 1;
  }
  return;
}

// UpdateThrowVariables @ 14b819120

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
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
UDS_InteractionAbility_LiftUp::UpdateThrowVariables(UDS_InteractionAbility_LiftUp *this)

{
  FDS_ThrowStartSkillInfo *pFVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  bool bVar5;
  UDS_LogManager *pUVar6;
  UDS_MovementCore *this_00;
  TVector<double> *pTVar7;
  UWorld *this_01;
  APlayerController *this_02;
  UObject *pUVar8;
  FDS_EntityBase *pFVar9;
  undefined1 auStackY_368 [32];
  uint uVar10;
  wchar_t *pwVar11;
  float local_328 [2];
  FCollisionObjectQueryParams local_320;
  FWeakObjectPtr local_318;
  FWeakObjectPtr local_310;
  TVector<double>_u_0 local_308;
  TVector<double>_u_0 local_2f0;
  TVector<double>_u_0 local_2d8;
  TVector<double>_u_0 local_2c0;
  TVector<double> local_2a8;
  undefined4 uStack_290;
  undefined1 uStack_28c;
  undefined2 uStack_28b;
  undefined1 uStack_289;
  undefined1 local_288 [48];
  double dStack_258;
  double local_250;
  int local_1e4;
  byte local_1db;
  FWeakObjectPtr local_1d0;
  FWeakObjectPtr FStack_1c8;
  IActorInstanceManagerInterface *local_1c0;
  undefined8 uStack_1b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_188;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_368;
  bVar5 = TWeakObjectPtr<UDS_InteractionAbilityData_LiftUp,FWeakObjectPtr>::UEOpEquals
                    (&this->InteractionAbilityData,(void *)0x0);
  if (bVar5) {
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_188._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_188,"UDS_InteractionAbility_LiftUp::UpdateThrowVariables",0x33,Yes);
    pwVar11 = L"InteractionAbilityData is nullptr.";
    uVar10 = 0x650;
  }
  else {
    FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
    UDS_MovementCore::GetMovementCore((ulong64)&local_318);
    bVar5 = TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_MovementCore,FWeakObjectPtr> *)&local_318,(void *)0x0);
    if (!bVar5) {
      this_00 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_318);
      pFVar1 = &this->ThrowStartSkillInfo;
      pTVar7 = UDS_MovementCore::GetActorLocation(this_00,&local_2a8);
      dVar2 = (pTVar7->field0_0x0)._s_0.Y;
      (pFVar1->StartLocation).field0_0x0._s_0.X = (pTVar7->field0_0x0)._s_0.X;
      (this->ThrowStartSkillInfo).StartLocation.field0_0x0._s_0.Y = dVar2;
      (this->ThrowStartSkillInfo).StartLocation.field0_0x0._s_0.Z = (pTVar7->field0_0x0)._s_0.Z;
      ADS_PlayerController::GetPlayerController();
      bVar5 = TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<ADS_PlayerController,FWeakObjectPtr> *)&local_310,
                         (void *)0x0);
      if (bVar5) {
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar6 = UDS_LogManager::GetInst();
        local_188._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_188,"UDS_InteractionAbility_LiftUp::UpdateThrowVariables",0x33,Yes);
        UDS_LogManager::PrintLog
                  (pUVar6,1,Warning,local_188.Ptr,0x663,L"playerController is nullptr.");
        if ((void *)local_188._padding_ == (void *)0x0) {
          return;
        }
        FMemory::Free((void *)local_188._padding_);
        return;
      }
      this_01 = UDS_GameInstance::GetGameInstanceWorld();
      if (this_01 == (UWorld *)0x0) {
        pUVar6 = UDS_LogManager::GetInst();
        if (pUVar6 == (UDS_LogManager *)0x0) {
          return;
        }
        pUVar6 = UDS_LogManager::GetInst();
        local_188._padding_ = 0;
        TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                  (&local_188,"UDS_InteractionAbility_LiftUp::UpdateThrowVariables",0x33,Yes);
        UDS_LogManager::PrintLog(pUVar6,1,Warning,local_188.Ptr,0x66b,L"world is nullptr.");
        if ((void *)local_188._padding_ == (void *)0x0) {
          return;
        }
        FMemory::Free((void *)local_188._padding_);
        return;
      }
      local_2c0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_2c0._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_2d8._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_2d8._s_0.Y = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_2c0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_2d8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      this_02 = (APlayerController *)FWeakObjectPtr::Get(&local_310);
      bVar5 = APlayerController::DeprojectMousePositionToWorld
                        (this_02,(TVector<double> *)&local_2c0._s_0,
                         (TVector<double> *)&local_2d8._s_0);
      dVar2 = __real_40c3880000000000;
      if (!bVar5) {
        return;
      }
      local_2f0._s_0.Z = local_2c0._s_0.Z;
      local_320.IgnoreMask = '\0';
      local_320.ObjectTypesToQuery = 0x1000001;
      local_2f0._s_0.X = local_2c0._s_0.X;
      local_2f0._s_0.Y = local_2c0._s_0.Y;
      local_308._s_0.X = local_2d8._s_0.X * __real_40c3880000000000 + local_2c0._s_0.X;
      local_308._s_0.Y = local_2d8._s_0.Y * __real_40c3880000000000 + local_2c0._s_0.Y;
      local_308._s_0.Z = local_2d8._s_0.Z * __real_40c3880000000000 + local_2c0._s_0.Z;
      memset(local_288,0,0x100);
      uStack_290 = 0xffffffff;
      uStack_28b = 0;
      local_1d0.ObjectIndex = 0;
      local_1d0.ObjectSerialNumber = 0;
      FStack_1c8.ObjectIndex = 0;
      FStack_1c8.ObjectSerialNumber = 0;
      uStack_289 = 0;
      local_2a8.field0_0x0._s_0.Z = 0.0;
      uStack_28c = 0;
      uStack_1b8._0_4_ = -1;
      uStack_1b8._4_1_ = Invalid;
      uStack_1b8._5_3_ = 0;
      local_288._4_4_ = 1.0;
      local_1e4 = -1;
      local_1c0 = (IActorInstanceManagerInterface *)0x0;
      bVar5 = UWorld::LineTraceSingleByObjectType
                        (this_01,(FHitResult *)local_288,(TVector<double> *)&local_2f0._s_0,
                         (TVector<double> *)&local_308._s_0,&local_320,
                         &FCollisionQueryParams::DefaultQueryParam);
      if (!bVar5) {
        return;
      }
      if ((local_1db & 1) == 0) {
        return;
      }
      local_2f0._s_0.X =
           UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X * __real_4059000000000000 +
           (double)local_288._40_8_;
      local_308._s_0.X =
           (double)local_288._40_8_ - UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X * dVar2;
      local_2f0._s_0.Y =
           UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * __real_4059000000000000 +
           dStack_258;
      local_308._s_0.Y = dStack_258 - UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * dVar2;
      local_2f0._s_0.Z =
           UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z * __real_4059000000000000 +
           local_250;
      local_308._s_0.Z = local_250 - UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z * dVar2;
      bVar5 = UWorld::LineTraceSingleByObjectType
                        (this_01,(FHitResult *)local_288,(TVector<double> *)&local_2f0._s_0,
                         (TVector<double> *)&local_308._s_0,&local_320,
                         &FCollisionQueryParams::DefaultQueryParam);
      if (!bVar5) {
        return;
      }
      if ((local_1db & 1) == 0) {
        return;
      }
      pUVar8 = FWeakObjectPtr::Get(&(this->InteractionAbilityData).WeakPtr);
      pFVar9 = FDS_EntityBase::GetEntityBase((ulong64 *)&pUVar8[2].field_0x8);
      if (pFVar9 != (FDS_EntityBase *)0x0) {
        (this->ThrowStartSkillInfo).EndLocation.field0_0x0._s_0.X = (double)local_288._40_8_;
        (this->ThrowStartSkillInfo).EndLocation.field0_0x0._s_0.Y = dStack_258;
        (this->ThrowStartSkillInfo).EndLocation.field0_0x0._s_0.Z = local_250;
        local_328[0] = 100.0;
        (this->ThrowStartSkillInfo).EndLocation.field0_0x0._s_0.Z =
             (double)pFVar9->ScaledCapsuleHalfHeight +
             (this->ThrowStartSkillInfo).EndLocation.field0_0x0._s_0.Z;
        bVar5 = DS_AbilityUtil_Interaction::CalculateThrowVariables
                          (&pFVar1->StartLocation,&(this->ThrowStartSkillInfo).EndLocation,local_328
                           ,&(this->ThrowStartSkillInfo).InitialVelocity,
                           &(this->ThrowStartSkillInfo).TotalTime);
        if (bVar5) {
          bVar5 = DS_AbilityUtil_Interaction::CalculateThrowImpact
                            (this_01,&pFVar1->StartLocation,
                             &(this->ThrowStartSkillInfo).InitialVelocity,
                             &(this->ThrowStartSkillInfo).TotalTime,&pFVar9->ScaledCapsuleRadius,
                             &pFVar9->ScaledCapsuleHalfHeight,
                             &(this->ThrowStartSkillInfo).ImpactTime,
                             &(this->ThrowStartSkillInfo).ImpactLocation);
          if (bVar5) {
            if (__real_322bcc77 <
                (float)((uint)(this->ThrowStartSkillInfo).ImpactTime &
                       __xmm_7fffffff7fffffff7fffffff7fffffff)) {
              if (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X !=
                  (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.X) {
                return;
              }
              if (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y !=
                  (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.Y) {
                return;
              }
              if (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z !=
                  (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.Z) {
                return;
              }
            }
            dVar4 = (this->ThrowStartSkillInfo).EndLocation.field0_0x0._s_0.Y;
            fVar3 = (this->ThrowStartSkillInfo).TotalTime;
            dVar2 = (this->ThrowStartSkillInfo).EndLocation.field0_0x0._s_0.Z;
            (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.X =
                 (this->ThrowStartSkillInfo).EndLocation.field0_0x0._s_0.X;
            (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.Y = dVar4;
            (this->ThrowStartSkillInfo).ImpactTime = fVar3;
            (this->ThrowStartSkillInfo).ImpactLocation.field0_0x0._s_0.Z = dVar2;
            return;
          }
          pUVar6 = UDS_LogManager::GetInst();
          if (pUVar6 == (UDS_LogManager *)0x0) {
            return;
          }
          pUVar6 = UDS_LogManager::GetInst();
          local_188._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_188,"UDS_InteractionAbility_LiftUp::UpdateThrowVariables",0x33,Yes);
          uVar10 = 0x6bd;
        }
        else {
          pUVar6 = UDS_LogManager::GetInst();
          if (pUVar6 == (UDS_LogManager *)0x0) {
            return;
          }
          pUVar6 = UDS_LogManager::GetInst();
          local_188._padding_ = 0;
          TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                    (&local_188,"UDS_InteractionAbility_LiftUp::UpdateThrowVariables",0x33,Yes);
          uVar10 = 0x6ac;
        }
        UDS_LogManager::PrintLog
                  (pUVar6,1,Warning,local_188.Ptr,uVar10,L"Failed to CalculateThrowVariables().");
        if ((void *)local_188._padding_ == (void *)0x0) {
          return;
        }
        FMemory::Free((void *)local_188._padding_);
        return;
      }
      pUVar6 = UDS_LogManager::GetInst();
      if (pUVar6 == (UDS_LogManager *)0x0) {
        return;
      }
      pUVar6 = UDS_LogManager::GetInst();
      local_188._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_188,"UDS_InteractionAbility_LiftUp::UpdateThrowVariables",0x33,Yes);
      UDS_LogManager::PrintLog(pUVar6,1,Warning,local_188.Ptr,0x69b,L"targetEntity is nullptr.");
      if ((void *)local_188._padding_ == (void *)0x0) {
        return;
      }
      FMemory::Free((void *)local_188._padding_);
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    if (pUVar6 == (UDS_LogManager *)0x0) {
      return;
    }
    pUVar6 = UDS_LogManager::GetInst();
    local_188._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_188,"UDS_InteractionAbility_LiftUp::UpdateThrowVariables",0x33,Yes);
    pwVar11 = L"targetMovementCore is nullptr.";
    uVar10 = 0x659;
  }
  UDS_LogManager::PrintLog(pUVar6,1,Warning,local_188.Ptr,uVar10,pwVar11);
  if ((void *)local_188._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_188._padding_);
  }
  return;
}

